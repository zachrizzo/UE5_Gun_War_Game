


#include "AsyncFunctionsPlayer.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"

// Sets default values for this component's properties
UAsyncFunctionsPlayer::UAsyncFunctionsPlayer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UAsyncFunctionsPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UAsyncFunctionsPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UAsyncFunctionsPlayer::MontagePlayAsync(UAnimInstance* AnimInst, TSoftObjectPtr<UAnimMontage> MontageToPlay, float InPlayRate, float StartTime, bool StopAllMontages)
{

	if (IsValid(AnimInst))
	{
		TargetAnimInst = AnimInst;
	}
	else
	{
		return;
	}


	// Sprawd�, czy zas�b jest ju� za�adowany
	if (MontageToPlay.IsValid())
	{
		// Zas�b jest ju� za�adowany, odtw�rz animacj� natychmiastowo
		PlayLoadedMontage(AnimInst, MontageToPlay.Get(), InPlayRate, StartTime, StopAllMontages);
	}
	else
	{

		// Zas�b nie jest za�adowany, �adujemy go asynchronicznie
		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();

		// �aduj asynchronicznie i wywo�aj callback po za�adowaniu
		Streamable.RequestAsyncLoad(MontageToPlay.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UAsyncFunctionsPlayer::OnMontageLoaded, AnimInst, MontageToPlay, InPlayRate, StartTime, StopAllMontages));
	}
}

void UAsyncFunctionsPlayer::PlayDynamicMontageAsync(UAnimInstance* AnimInst, TSoftObjectPtr<UAnimSequence> Asset, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float StartTime)
{
	if (IsValid(AnimInst)) 
	{ 
		TargetAnimInst = AnimInst; 
	}
	else
	{
		return;
	}
	// Sprawd�, czy zas�b jest ju� za�adowany
	if (Asset.IsValid())
	{
		// Zas�b jest ju� za�adowany, odtw�rz animacj� natychmiastowo
		PlayLoadedDynamicMontage(AnimInst, Asset.Get(), SlotName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, StartTime);
	}
	else
	{
		// Zas�b nie jest za�adowany, �adujemy go asynchronicznie
		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();

		// �aduj asynchronicznie i wywo�aj callback po za�adowaniu
		Streamable.RequestAsyncLoad(Asset.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UAsyncFunctionsPlayer::OnDynamicMontageLoaded, AnimInst, Asset, SlotName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, StartTime));
	}
}




void UAsyncFunctionsPlayer::OnMontageLoaded(UAnimInstance* AnimInst, TSoftObjectPtr<UAnimMontage> LoadedMontage, float InPlayRate, float StartTime, bool StopAllMontages)
{
	// Upewnij si�, �e monta� zosta� poprawnie za�adowany
	if (LoadedMontage.IsValid())
	{
		UAnimInstance* TargetInst = AnimInst;
		if (IsValid(TargetInst) == false) { TargetInst = TargetAnimInst; }
		PlayLoadedMontage(TargetInst, LoadedMontage.Get(), InPlayRate, StartTime, StopAllMontages);
	}
}

void UAsyncFunctionsPlayer::PlayLoadedMontage(UAnimInstance* AnimInst, UAnimMontage* MontageToPlay, float InPlayRate, float StartTime, bool StopAllMontages)
{
	if (AnimInst)
	{
		// Odtw�rz monta� animacji
		AnimInst->Montage_Play(MontageToPlay, InPlayRate, EMontagePlayReturnType::Duration, StartTime, StopAllMontages);
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void UAsyncFunctionsPlayer::OnDynamicMontageLoaded(UAnimInstance* AnimInst, TSoftObjectPtr<UAnimSequence> SequenceAsset, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float StartTime)
{
	if (SequenceAsset.IsValid())
	{
		UAnimInstance* TargetInst = AnimInst;
		if (IsValid(TargetInst) == false) { TargetInst = TargetAnimInst; }
		PlayLoadedDynamicMontage(AnimInst, SequenceAsset.Get(), SlotName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, StartTime);
	}
}

void UAsyncFunctionsPlayer::PlayLoadedDynamicMontage(UAnimInstance* AnimInst, UAnimSequence* SequenceAnim, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float StartTime)
{
	if (AnimInst)
	{
		AnimInst->PlaySlotAnimationAsDynamicMontage(SequenceAnim, SlotName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, StartTime);
	}
}

