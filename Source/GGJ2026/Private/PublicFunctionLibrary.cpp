// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicFunctionLibrary.h"

bool UPublicFunctionLibrary::HasFinishedRenderingPSOs()
{
	int32 RemainingRequests = FStreamingManagerCollection::Get().BlockTillAllRequestsFinished(0.0f, true);
	
	return RemainingRequests == 0;
}