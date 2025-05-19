


#include "AGLS_ZombieAttacksComponentCore.h"

// Sets default values for this component's properties
UAGLS_ZombieAttacksComponentCore::UAGLS_ZombieAttacksComponentCore()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAGLS_ZombieAttacksComponentCore::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAGLS_ZombieAttacksComponentCore::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bAttackStarted && AttackTotalDuration > 0.0 && AttackElapsedTime >= -0.1)
	{
		AttackElapsedTime = AttackElapsedTime + DeltaTime;

		if (AttackElapsedTime > AttackTotalDuration)
		{
			AttackElapsedTime = -1.0;
		}
	}
}

void UAGLS_ZombieAttacksComponentCore::CallOnAttackStarted()
{
	OnAttackStarted.Broadcast(AttackTotalDuration);
}

void UAGLS_ZombieAttacksComponentCore::CallOnAttackEnded()
{
	OnAttackEnded.Broadcast(AttackElapsedTime);
}

bool UAGLS_ZombieAttacksComponentCore::CorrectlySetAttackTimer(bool StartAttacking, float InDuration)
{
	if (bAttackStarted || InDuration <= 0.0)
	{
		return false;
	}

	AttackTotalDuration = InDuration;
	bAttackStarted = StartAttacking;

	if (bAttackStarted)
	{
		AttackElapsedTime = 0.0;
		CallOnAttackStarted();
	}
	else
	{
		CallOnAttackEnded();
		AttackElapsedTime = -1.0;
	}

	return true;

}

