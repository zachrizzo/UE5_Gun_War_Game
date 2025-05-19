


#include "AsyncLoadAssetsNode.h"
#include "Engine/AssetManager.h"

UAsyncLoadAssetsNode::UAsyncLoadAssetsNode()
{
}

UAsyncLoadAssetsNode* UAsyncLoadAssetsNode::AsyncLoadAssetArray(const TArray<TSoftObjectPtr<UObject>>& AssetsToLoad)
{
    UAsyncLoadAssetsNode* Node = NewObject<UAsyncLoadAssetsNode>();
    Node->Assets = AssetsToLoad;
    return Node;
}

void UAsyncLoadAssetsNode::Activate()
{
    if (Assets.Num() == 0)
    {
        // Je�li lista zasob�w jest pusta, natychmiast zako�cz
        OnCompleted.Broadcast(LoadedAssets);
        return;
    }

    LoadNextAsset();
}

void UAsyncLoadAssetsNode::LoadNextAsset()
{
    if (Assets.Num() == 0)
    {
        // Wszystkie zasoby zosta�y za�adowane
        OnCompleted.Broadcast(LoadedAssets);
        return;
    }

    // Pobierz pierwszy zas�b z listy
    TSoftObjectPtr<UObject> AssetToLoad = Assets[0];
    Assets.RemoveAt(0);

    if (AssetToLoad.IsValid())
    {
        // Je�li zas�b jest ju� za�adowany, dodaj go do wynik�w
        LoadedAssets.Add(AssetToLoad.Get());
        LoadNextAsset();
    }
    else
    {
        // Asynchronicznie za�aduj zas�b i wywo�aj callback po zako�czeniu
        StreamableManager.RequestAsyncLoad(
            AssetToLoad.ToSoftObjectPath(),
            FStreamableDelegate::CreateUObject(this, &UAsyncLoadAssetsNode::OnAssetLoaded, AssetToLoad)
        );
    }
}

void UAsyncLoadAssetsNode::OnAssetLoaded(TSoftObjectPtr<UObject> LoadedAsset)
{
    if (LoadedAsset.IsValid())
    {
        UObject* LoadedObject = LoadedAsset.Get();
        if (LoadedObject)
        {
            LoadedAssets.Add(LoadedObject);
        }
    }

    // Przejd� do nast�pnego zasobu
    LoadNextAsset();
}

