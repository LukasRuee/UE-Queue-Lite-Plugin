// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TArrayQueue.h"
#include "GameFramework/Actor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTArrayQueue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UActorQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UActorQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UFloatQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UFloatQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UIntQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UIntQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UObjectQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UObjectQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_URotatorQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_URotatorQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UStringQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UStringQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_USubclassOfActorQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_USubclassOfActorQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UTransformQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UTransformQueueObject_NoRegister();
QUEUELITE_API UClass* Z_Construct_UClass_UVectorQueueObject();
QUEUELITE_API UClass* Z_Construct_UClass_UVectorQueueObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_QueueLite();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIntQueueObject Function Capacity ****************************************
struct Z_Construct_UFunction_UIntQueueObject_Capacity_Statics
{
	struct IntQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::IntQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::IntQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Capacity ******************************************

// ********** Begin Class UIntQueueObject Function Clear *******************************************
struct Z_Construct_UFunction_UIntQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIntQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Clear *********************************************

// ********** Begin Class UIntQueueObject Function Dequeue *****************************************
struct Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics
{
	struct IntQueueObject_eventDequeue_Parms
	{
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventDequeue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::IntQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::IntQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execDequeue)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Dequeue *******************************************

// ********** Begin Class UIntQueueObject Function Empty *******************************************
struct Z_Construct_UFunction_UIntQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIntQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Empty *********************************************

// ********** Begin Class UIntQueueObject Function Enqueue *****************************************
struct Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics
{
	struct IntQueueObject_eventEnqueue_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventEnqueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::IntQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::IntQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execEnqueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Enqueue *******************************************

// ********** Begin Class UIntQueueObject Function GetIndexOfElement *******************************
struct Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics
{
	struct IntQueueObject_eventGetIndexOfElement_Parms
	{
		int32 Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventGetIndexOfElement_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::IntQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::IntQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execGetIndexOfElement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function GetIndexOfElement *********************************

// ********** Begin Class UIntQueueObject Function Initialize **************************************
struct Z_Construct_UFunction_UIntQueueObject_Initialize_Statics
{
	struct IntQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::IntQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::IntQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Initialize ****************************************

// ********** Begin Class UIntQueueObject Function IsEmpty *****************************************
struct Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics
{
	struct IntQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::IntQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::IntQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function IsEmpty *******************************************

// ********** Begin Class UIntQueueObject Function Num *********************************************
struct Z_Construct_UFunction_UIntQueueObject_Num_Statics
{
	struct IntQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Num", Z_Construct_UFunction_UIntQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Num_Statics::IntQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Num_Statics::IntQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Num ***********************************************

// ********** Begin Class UIntQueueObject Function OverwriteInQueue ********************************
struct Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics
{
	struct IntQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventOverwriteInQueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::IntQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::IntQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function OverwriteInQueue **********************************

// ********** Begin Class UIntQueueObject Function PeekAt ******************************************
struct Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics
{
	struct IntQueueObject_eventPeekAt_Parms
	{
		int32 OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPeekAt_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::IntQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::IntQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execPeekAt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function PeekAt ********************************************

// ********** Begin Class UIntQueueObject Function PeekBack ****************************************
struct Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics
{
	struct IntQueueObject_eventPeekBack_Parms
	{
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPeekBack_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::IntQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::IntQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execPeekBack)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function PeekBack ******************************************

// ********** Begin Class UIntQueueObject Function PeekFront ***************************************
struct Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics
{
	struct IntQueueObject_eventPeekFront_Parms
	{
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPeekFront_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::IntQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::IntQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execPeekFront)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function PeekFront *****************************************

// ********** Begin Class UIntQueueObject Function Pop *********************************************
struct Z_Construct_UFunction_UIntQueueObject_Pop_Statics
{
	struct IntQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIntQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventPop_Parms), &Z_Construct_UFunction_UIntQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "Pop", Z_Construct_UFunction_UIntQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_Pop_Statics::IntQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_Pop_Statics::IntQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function Pop ***********************************************

// ********** Begin Class UIntQueueObject Function PopOut ******************************************
struct Z_Construct_UFunction_UIntQueueObject_PopOut_Statics
{
	struct IntQueueObject_eventPopOut_Parms
	{
		int32 OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPopOut_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IntQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IntQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::IntQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::IntQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execPopOut)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function PopOut ********************************************

// ********** Begin Class UIntQueueObject Function SetGrowthSize ***********************************
struct Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics
{
	struct IntQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::IntQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::IntQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function SetGrowthSize *************************************

// ********** Begin Class UIntQueueObject Function ToArray *****************************************
struct Z_Construct_UFunction_UIntQueueObject_ToArray_Statics
{
	struct IntQueueObject_eventToArray_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIntQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::IntQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::IntQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UIntQueueObject Function ToArray *******************************************

// ********** Begin Class UIntQueueObject **********************************************************
void UIntQueueObject::StaticRegisterNativesUIntQueueObject()
{
	UClass* Class = UIntQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UIntQueueObject::execCapacity },
		{ "Clear", &UIntQueueObject::execClear },
		{ "Dequeue", &UIntQueueObject::execDequeue },
		{ "Empty", &UIntQueueObject::execEmpty },
		{ "Enqueue", &UIntQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UIntQueueObject::execGetIndexOfElement },
		{ "Initialize", &UIntQueueObject::execInitialize },
		{ "IsEmpty", &UIntQueueObject::execIsEmpty },
		{ "Num", &UIntQueueObject::execNum },
		{ "OverwriteInQueue", &UIntQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UIntQueueObject::execPeekAt },
		{ "PeekBack", &UIntQueueObject::execPeekBack },
		{ "PeekFront", &UIntQueueObject::execPeekFront },
		{ "Pop", &UIntQueueObject::execPop },
		{ "PopOut", &UIntQueueObject::execPopOut },
		{ "SetGrowthSize", &UIntQueueObject::execSetGrowthSize },
		{ "ToArray", &UIntQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIntQueueObject;
UClass* UIntQueueObject::GetPrivateStaticClass()
{
	using TClass = UIntQueueObject;
	if (!Z_Registration_Info_UClass_UIntQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntQueueObject"),
			Z_Registration_Info_UClass_UIntQueueObject.InnerSingleton,
			StaticRegisterNativesUIntQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIntQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UIntQueueObject_NoRegister()
{
	return UIntQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIntQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<int32>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<int32>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntQueueObject_Capacity, "Capacity" }, // 840690494
		{ &Z_Construct_UFunction_UIntQueueObject_Clear, "Clear" }, // 2641000160
		{ &Z_Construct_UFunction_UIntQueueObject_Dequeue, "Dequeue" }, // 1571884916
		{ &Z_Construct_UFunction_UIntQueueObject_Empty, "Empty" }, // 6869903
		{ &Z_Construct_UFunction_UIntQueueObject_Enqueue, "Enqueue" }, // 2079911398
		{ &Z_Construct_UFunction_UIntQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 2598022944
		{ &Z_Construct_UFunction_UIntQueueObject_Initialize, "Initialize" }, // 3518622997
		{ &Z_Construct_UFunction_UIntQueueObject_IsEmpty, "IsEmpty" }, // 2832288095
		{ &Z_Construct_UFunction_UIntQueueObject_Num, "Num" }, // 1766048862
		{ &Z_Construct_UFunction_UIntQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 2191049883
		{ &Z_Construct_UFunction_UIntQueueObject_PeekAt, "PeekAt" }, // 2462857728
		{ &Z_Construct_UFunction_UIntQueueObject_PeekBack, "PeekBack" }, // 181212866
		{ &Z_Construct_UFunction_UIntQueueObject_PeekFront, "PeekFront" }, // 568251788
		{ &Z_Construct_UFunction_UIntQueueObject_Pop, "Pop" }, // 2097687422
		{ &Z_Construct_UFunction_UIntQueueObject_PopOut, "PopOut" }, // 692756294
		{ &Z_Construct_UFunction_UIntQueueObject_SetGrowthSize, "SetGrowthSize" }, // 2764264253
		{ &Z_Construct_UFunction_UIntQueueObject_ToArray, "ToArray" }, // 1758866316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIntQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntQueueObject_Statics::ClassParams = {
	&UIntQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntQueueObject()
{
	if (!Z_Registration_Info_UClass_UIntQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntQueueObject.OuterSingleton, Z_Construct_UClass_UIntQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntQueueObject.OuterSingleton;
}
UIntQueueObject::UIntQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntQueueObject);
UIntQueueObject::~UIntQueueObject() {}
// ********** End Class UIntQueueObject ************************************************************

// ********** Begin Class UFloatQueueObject Function Capacity **************************************
struct Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics
{
	struct FloatQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::FloatQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::FloatQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Capacity ****************************************

// ********** Begin Class UFloatQueueObject Function Clear *****************************************
struct Z_Construct_UFunction_UFloatQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFloatQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Clear *******************************************

// ********** Begin Class UFloatQueueObject Function Dequeue ***************************************
struct Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics
{
	struct FloatQueueObject_eventDequeue_Parms
	{
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventDequeue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::FloatQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::FloatQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execDequeue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Dequeue *****************************************

// ********** Begin Class UFloatQueueObject Function Empty *****************************************
struct Z_Construct_UFunction_UFloatQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFloatQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Empty *******************************************

// ********** Begin Class UFloatQueueObject Function Enqueue ***************************************
struct Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics
{
	struct FloatQueueObject_eventEnqueue_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventEnqueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::FloatQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::FloatQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execEnqueue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Enqueue *****************************************

// ********** Begin Class UFloatQueueObject Function GetIndexOfElement *****************************
struct Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics
{
	struct FloatQueueObject_eventGetIndexOfElement_Parms
	{
		float Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventGetIndexOfElement_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::FloatQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::FloatQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execGetIndexOfElement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function GetIndexOfElement *******************************

// ********** Begin Class UFloatQueueObject Function Initialize ************************************
struct Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics
{
	struct FloatQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::FloatQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::FloatQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Initialize **************************************

// ********** Begin Class UFloatQueueObject Function IsEmpty ***************************************
struct Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics
{
	struct FloatQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::FloatQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::FloatQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function IsEmpty *****************************************

// ********** Begin Class UFloatQueueObject Function Num *******************************************
struct Z_Construct_UFunction_UFloatQueueObject_Num_Statics
{
	struct FloatQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Num", Z_Construct_UFunction_UFloatQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Num_Statics::FloatQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Num_Statics::FloatQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Num *********************************************

// ********** Begin Class UFloatQueueObject Function OverwriteInQueue ******************************
struct Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics
{
	struct FloatQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventOverwriteInQueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::FloatQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::FloatQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function OverwriteInQueue ********************************

// ********** Begin Class UFloatQueueObject Function PeekAt ****************************************
struct Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics
{
	struct FloatQueueObject_eventPeekAt_Parms
	{
		float OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPeekAt_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::FloatQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::FloatQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execPeekAt)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function PeekAt ******************************************

// ********** Begin Class UFloatQueueObject Function PeekBack **************************************
struct Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics
{
	struct FloatQueueObject_eventPeekBack_Parms
	{
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPeekBack_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::FloatQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::FloatQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execPeekBack)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function PeekBack ****************************************

// ********** Begin Class UFloatQueueObject Function PeekFront *************************************
struct Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics
{
	struct FloatQueueObject_eventPeekFront_Parms
	{
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPeekFront_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::FloatQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::FloatQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execPeekFront)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function PeekFront ***************************************

// ********** Begin Class UFloatQueueObject Function Pop *******************************************
struct Z_Construct_UFunction_UFloatQueueObject_Pop_Statics
{
	struct FloatQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventPop_Parms), &Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "Pop", Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::FloatQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::FloatQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function Pop *********************************************

// ********** Begin Class UFloatQueueObject Function PopOut ****************************************
struct Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics
{
	struct FloatQueueObject_eventPopOut_Parms
	{
		float OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPopOut_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloatQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloatQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::FloatQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::FloatQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execPopOut)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function PopOut ******************************************

// ********** Begin Class UFloatQueueObject Function SetGrowthSize *********************************
struct Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics
{
	struct FloatQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::FloatQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::FloatQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function SetGrowthSize ***********************************

// ********** Begin Class UFloatQueueObject Function ToArray ***************************************
struct Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics
{
	struct FloatQueueObject_eventToArray_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloatQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::FloatQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::FloatQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UFloatQueueObject Function ToArray *****************************************

// ********** Begin Class UFloatQueueObject ********************************************************
void UFloatQueueObject::StaticRegisterNativesUFloatQueueObject()
{
	UClass* Class = UFloatQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UFloatQueueObject::execCapacity },
		{ "Clear", &UFloatQueueObject::execClear },
		{ "Dequeue", &UFloatQueueObject::execDequeue },
		{ "Empty", &UFloatQueueObject::execEmpty },
		{ "Enqueue", &UFloatQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UFloatQueueObject::execGetIndexOfElement },
		{ "Initialize", &UFloatQueueObject::execInitialize },
		{ "IsEmpty", &UFloatQueueObject::execIsEmpty },
		{ "Num", &UFloatQueueObject::execNum },
		{ "OverwriteInQueue", &UFloatQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UFloatQueueObject::execPeekAt },
		{ "PeekBack", &UFloatQueueObject::execPeekBack },
		{ "PeekFront", &UFloatQueueObject::execPeekFront },
		{ "Pop", &UFloatQueueObject::execPop },
		{ "PopOut", &UFloatQueueObject::execPopOut },
		{ "SetGrowthSize", &UFloatQueueObject::execSetGrowthSize },
		{ "ToArray", &UFloatQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFloatQueueObject;
UClass* UFloatQueueObject::GetPrivateStaticClass()
{
	using TClass = UFloatQueueObject;
	if (!Z_Registration_Info_UClass_UFloatQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FloatQueueObject"),
			Z_Registration_Info_UClass_UFloatQueueObject.InnerSingleton,
			StaticRegisterNativesUFloatQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFloatQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UFloatQueueObject_NoRegister()
{
	return UFloatQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFloatQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<float>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<float>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatQueueObject_Capacity, "Capacity" }, // 3867485834
		{ &Z_Construct_UFunction_UFloatQueueObject_Clear, "Clear" }, // 2588942816
		{ &Z_Construct_UFunction_UFloatQueueObject_Dequeue, "Dequeue" }, // 2686862630
		{ &Z_Construct_UFunction_UFloatQueueObject_Empty, "Empty" }, // 23184414
		{ &Z_Construct_UFunction_UFloatQueueObject_Enqueue, "Enqueue" }, // 1609002126
		{ &Z_Construct_UFunction_UFloatQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 1360485185
		{ &Z_Construct_UFunction_UFloatQueueObject_Initialize, "Initialize" }, // 2225319994
		{ &Z_Construct_UFunction_UFloatQueueObject_IsEmpty, "IsEmpty" }, // 1690961227
		{ &Z_Construct_UFunction_UFloatQueueObject_Num, "Num" }, // 839763776
		{ &Z_Construct_UFunction_UFloatQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 1780932473
		{ &Z_Construct_UFunction_UFloatQueueObject_PeekAt, "PeekAt" }, // 1553023918
		{ &Z_Construct_UFunction_UFloatQueueObject_PeekBack, "PeekBack" }, // 2949836210
		{ &Z_Construct_UFunction_UFloatQueueObject_PeekFront, "PeekFront" }, // 3717457578
		{ &Z_Construct_UFunction_UFloatQueueObject_Pop, "Pop" }, // 1775498924
		{ &Z_Construct_UFunction_UFloatQueueObject_PopOut, "PopOut" }, // 2235555327
		{ &Z_Construct_UFunction_UFloatQueueObject_SetGrowthSize, "SetGrowthSize" }, // 3473463816
		{ &Z_Construct_UFunction_UFloatQueueObject_ToArray, "ToArray" }, // 3929724206
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloatQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatQueueObject_Statics::ClassParams = {
	&UFloatQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatQueueObject()
{
	if (!Z_Registration_Info_UClass_UFloatQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatQueueObject.OuterSingleton, Z_Construct_UClass_UFloatQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatQueueObject.OuterSingleton;
}
UFloatQueueObject::UFloatQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatQueueObject);
UFloatQueueObject::~UFloatQueueObject() {}
// ********** End Class UFloatQueueObject **********************************************************

// ********** Begin Class UActorQueueObject Function Capacity **************************************
struct Z_Construct_UFunction_UActorQueueObject_Capacity_Statics
{
	struct ActorQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::ActorQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::ActorQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Capacity ****************************************

// ********** Begin Class UActorQueueObject Function Clear *****************************************
struct Z_Construct_UFunction_UActorQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActorQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Clear *******************************************

// ********** Begin Class UActorQueueObject Function Dequeue ***************************************
struct Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics
{
	struct ActorQueueObject_eventDequeue_Parms
	{
		AActor* OutActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventDequeue_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_OutActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::ActorQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::ActorQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execDequeue)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(P_ARG_GC_BARRIER(Z_Param_Out_OutActor));
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Dequeue *****************************************

// ********** Begin Class UActorQueueObject Function Empty *****************************************
struct Z_Construct_UFunction_UActorQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActorQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Empty *******************************************

// ********** Begin Class UActorQueueObject Function Enqueue ***************************************
struct Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics
{
	struct ActorQueueObject_eventEnqueue_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventEnqueue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::ActorQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::ActorQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execEnqueue)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Enqueue *****************************************

// ********** Begin Class UActorQueueObject Function GetIndexOfElement *****************************
struct Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics
{
	struct ActorQueueObject_eventGetIndexOfElement_Parms
	{
		AActor* Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::ActorQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::ActorQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execGetIndexOfElement)
{
	P_GET_OBJECT(AActor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function GetIndexOfElement *******************************

// ********** Begin Class UActorQueueObject Function Initialize ************************************
struct Z_Construct_UFunction_UActorQueueObject_Initialize_Statics
{
	struct ActorQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::ActorQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::ActorQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Initialize **************************************

// ********** Begin Class UActorQueueObject Function IsEmpty ***************************************
struct Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics
{
	struct ActorQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::ActorQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::ActorQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function IsEmpty *****************************************

// ********** Begin Class UActorQueueObject Function Num *******************************************
struct Z_Construct_UFunction_UActorQueueObject_Num_Statics
{
	struct ActorQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Num", Z_Construct_UFunction_UActorQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Num_Statics::ActorQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Num_Statics::ActorQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Num *********************************************

// ********** Begin Class UActorQueueObject Function OverwriteInQueue ******************************
struct Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics
{
	struct ActorQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		AActor* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::ActorQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::ActorQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_OBJECT(AActor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function OverwriteInQueue ********************************

// ********** Begin Class UActorQueueObject Function PeekAt ****************************************
struct Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics
{
	struct ActorQueueObject_eventPeekAt_Parms
	{
		AActor* OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::ActorQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::ActorQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execPeekAt)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(P_ARG_GC_BARRIER(Z_Param_Out_OutValue),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function PeekAt ******************************************

// ********** Begin Class UActorQueueObject Function PeekBack **************************************
struct Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics
{
	struct ActorQueueObject_eventPeekBack_Parms
	{
		AActor* OutActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPeekBack_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_OutActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::ActorQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::ActorQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execPeekBack)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(P_ARG_GC_BARRIER(Z_Param_Out_OutActor));
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function PeekBack ****************************************

// ********** Begin Class UActorQueueObject Function PeekFront *************************************
struct Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics
{
	struct ActorQueueObject_eventPeekFront_Parms
	{
		AActor* OutActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPeekFront_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_OutActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::ActorQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::ActorQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execPeekFront)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(P_ARG_GC_BARRIER(Z_Param_Out_OutActor));
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function PeekFront ***************************************

// ********** Begin Class UActorQueueObject Function Pop *******************************************
struct Z_Construct_UFunction_UActorQueueObject_Pop_Statics
{
	struct ActorQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventPop_Parms), &Z_Construct_UFunction_UActorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "Pop", Z_Construct_UFunction_UActorQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_Pop_Statics::ActorQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_Pop_Statics::ActorQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function Pop *********************************************

// ********** Begin Class UActorQueueObject Function PopOut ****************************************
struct Z_Construct_UFunction_UActorQueueObject_PopOut_Statics
{
	struct ActorQueueObject_eventPopOut_Parms
	{
		AActor* OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::ActorQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::ActorQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execPopOut)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(P_ARG_GC_BARRIER(Z_Param_Out_OutValue),Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function PopOut ******************************************

// ********** Begin Class UActorQueueObject Function SetGrowthSize *********************************
struct Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics
{
	struct ActorQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::ActorQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::ActorQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function SetGrowthSize ***********************************

// ********** Begin Class UActorQueueObject Function ToArray ***************************************
struct Z_Construct_UFunction_UActorQueueObject_ToArray_Statics
{
	struct ActorQueueObject_eventToArray_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::ActorQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::ActorQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UActorQueueObject Function ToArray *****************************************

// ********** Begin Class UActorQueueObject ********************************************************
void UActorQueueObject::StaticRegisterNativesUActorQueueObject()
{
	UClass* Class = UActorQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UActorQueueObject::execCapacity },
		{ "Clear", &UActorQueueObject::execClear },
		{ "Dequeue", &UActorQueueObject::execDequeue },
		{ "Empty", &UActorQueueObject::execEmpty },
		{ "Enqueue", &UActorQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UActorQueueObject::execGetIndexOfElement },
		{ "Initialize", &UActorQueueObject::execInitialize },
		{ "IsEmpty", &UActorQueueObject::execIsEmpty },
		{ "Num", &UActorQueueObject::execNum },
		{ "OverwriteInQueue", &UActorQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UActorQueueObject::execPeekAt },
		{ "PeekBack", &UActorQueueObject::execPeekBack },
		{ "PeekFront", &UActorQueueObject::execPeekFront },
		{ "Pop", &UActorQueueObject::execPop },
		{ "PopOut", &UActorQueueObject::execPopOut },
		{ "SetGrowthSize", &UActorQueueObject::execSetGrowthSize },
		{ "ToArray", &UActorQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorQueueObject;
UClass* UActorQueueObject::GetPrivateStaticClass()
{
	using TClass = UActorQueueObject;
	if (!Z_Registration_Info_UClass_UActorQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorQueueObject"),
			Z_Registration_Info_UClass_UActorQueueObject.InnerSingleton,
			StaticRegisterNativesUActorQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UActorQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorQueueObject_NoRegister()
{
	return UActorQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<AActor*>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<AActor*>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorQueueObject_Capacity, "Capacity" }, // 3303057560
		{ &Z_Construct_UFunction_UActorQueueObject_Clear, "Clear" }, // 2134480889
		{ &Z_Construct_UFunction_UActorQueueObject_Dequeue, "Dequeue" }, // 2563793899
		{ &Z_Construct_UFunction_UActorQueueObject_Empty, "Empty" }, // 3053602861
		{ &Z_Construct_UFunction_UActorQueueObject_Enqueue, "Enqueue" }, // 3240999894
		{ &Z_Construct_UFunction_UActorQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 3365522929
		{ &Z_Construct_UFunction_UActorQueueObject_Initialize, "Initialize" }, // 3501795914
		{ &Z_Construct_UFunction_UActorQueueObject_IsEmpty, "IsEmpty" }, // 1187076142
		{ &Z_Construct_UFunction_UActorQueueObject_Num, "Num" }, // 4179502690
		{ &Z_Construct_UFunction_UActorQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 2001775700
		{ &Z_Construct_UFunction_UActorQueueObject_PeekAt, "PeekAt" }, // 171787229
		{ &Z_Construct_UFunction_UActorQueueObject_PeekBack, "PeekBack" }, // 3237890603
		{ &Z_Construct_UFunction_UActorQueueObject_PeekFront, "PeekFront" }, // 2460151068
		{ &Z_Construct_UFunction_UActorQueueObject_Pop, "Pop" }, // 2367893865
		{ &Z_Construct_UFunction_UActorQueueObject_PopOut, "PopOut" }, // 2021504360
		{ &Z_Construct_UFunction_UActorQueueObject_SetGrowthSize, "SetGrowthSize" }, // 1781006700
		{ &Z_Construct_UFunction_UActorQueueObject_ToArray, "ToArray" }, // 3820755666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorQueueObject_Statics::ClassParams = {
	&UActorQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorQueueObject()
{
	if (!Z_Registration_Info_UClass_UActorQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorQueueObject.OuterSingleton, Z_Construct_UClass_UActorQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorQueueObject.OuterSingleton;
}
UActorQueueObject::UActorQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorQueueObject);
UActorQueueObject::~UActorQueueObject() {}
// ********** End Class UActorQueueObject **********************************************************

// ********** Begin Class UObjectQueueObject Function Capacity *************************************
struct Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics
{
	struct ObjectQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::ObjectQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::ObjectQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Capacity ***************************************

// ********** Begin Class UObjectQueueObject Function Clear ****************************************
struct Z_Construct_UFunction_UObjectQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UObjectQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Clear ******************************************

// ********** Begin Class UObjectQueueObject Function Dequeue **************************************
struct Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics
{
	struct ObjectQueueObject_eventDequeue_Parms
	{
		UObject* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventDequeue_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::ObjectQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::ObjectQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execDequeue)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Dequeue ****************************************

// ********** Begin Class UObjectQueueObject Function Empty ****************************************
struct Z_Construct_UFunction_UObjectQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UObjectQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Empty ******************************************

// ********** Begin Class UObjectQueueObject Function Enqueue **************************************
struct Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics
{
	struct ObjectQueueObject_eventEnqueue_Parms
	{
		UObject* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventEnqueue_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::ObjectQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::ObjectQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execEnqueue)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Enqueue ****************************************

// ********** Begin Class UObjectQueueObject Function GetIndexOfElement ****************************
struct Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics
{
	struct ObjectQueueObject_eventGetIndexOfElement_Parms
	{
		UObject* Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::ObjectQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::ObjectQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execGetIndexOfElement)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function GetIndexOfElement ******************************

// ********** Begin Class UObjectQueueObject Function Initialize ***********************************
struct Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics
{
	struct ObjectQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::ObjectQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::ObjectQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Initialize *************************************

// ********** Begin Class UObjectQueueObject Function IsEmpty **************************************
struct Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics
{
	struct ObjectQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::ObjectQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::ObjectQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function IsEmpty ****************************************

// ********** Begin Class UObjectQueueObject Function Num ******************************************
struct Z_Construct_UFunction_UObjectQueueObject_Num_Statics
{
	struct ObjectQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Num", Z_Construct_UFunction_UObjectQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Num_Statics::ObjectQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Num_Statics::ObjectQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Num ********************************************

// ********** Begin Class UObjectQueueObject Function OverwriteInQueue *****************************
struct Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics
{
	struct ObjectQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::ObjectQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::ObjectQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function OverwriteInQueue *******************************

// ********** Begin Class UObjectQueueObject Function PeekAt ***************************************
struct Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics
{
	struct ObjectQueueObject_eventPeekAt_Parms
	{
		UObject* OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::ObjectQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::ObjectQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execPeekAt)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(P_ARG_GC_BARRIER(Z_Param_Out_OutValue),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function PeekAt *****************************************

// ********** Begin Class UObjectQueueObject Function PeekBack *************************************
struct Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics
{
	struct ObjectQueueObject_eventPeekBack_Parms
	{
		UObject* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPeekBack_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::ObjectQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::ObjectQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execPeekBack)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function PeekBack ***************************************

// ********** Begin Class UObjectQueueObject Function PeekFront ************************************
struct Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics
{
	struct ObjectQueueObject_eventPeekFront_Parms
	{
		UObject* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPeekFront_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::ObjectQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::ObjectQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execPeekFront)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function PeekFront **************************************

// ********** Begin Class UObjectQueueObject Function Pop ******************************************
struct Z_Construct_UFunction_UObjectQueueObject_Pop_Statics
{
	struct ObjectQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventPop_Parms), &Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "Pop", Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::ObjectQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::ObjectQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function Pop ********************************************

// ********** Begin Class UObjectQueueObject Function PopOut ***************************************
struct Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics
{
	struct ObjectQueueObject_eventPopOut_Parms
	{
		UObject* OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ObjectQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::ObjectQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::ObjectQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execPopOut)
{
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(P_ARG_GC_BARRIER(Z_Param_Out_OutValue),Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function PopOut *****************************************

// ********** Begin Class UObjectQueueObject Function SetGrowthSize ********************************
struct Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics
{
	struct ObjectQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::ObjectQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::ObjectQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function SetGrowthSize **********************************

// ********** Begin Class UObjectQueueObject Function ToArray **************************************
struct Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics
{
	struct ObjectQueueObject_eventToArray_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::ObjectQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::ObjectQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UObjectQueueObject Function ToArray ****************************************

// ********** Begin Class UObjectQueueObject *******************************************************
void UObjectQueueObject::StaticRegisterNativesUObjectQueueObject()
{
	UClass* Class = UObjectQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UObjectQueueObject::execCapacity },
		{ "Clear", &UObjectQueueObject::execClear },
		{ "Dequeue", &UObjectQueueObject::execDequeue },
		{ "Empty", &UObjectQueueObject::execEmpty },
		{ "Enqueue", &UObjectQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UObjectQueueObject::execGetIndexOfElement },
		{ "Initialize", &UObjectQueueObject::execInitialize },
		{ "IsEmpty", &UObjectQueueObject::execIsEmpty },
		{ "Num", &UObjectQueueObject::execNum },
		{ "OverwriteInQueue", &UObjectQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UObjectQueueObject::execPeekAt },
		{ "PeekBack", &UObjectQueueObject::execPeekBack },
		{ "PeekFront", &UObjectQueueObject::execPeekFront },
		{ "Pop", &UObjectQueueObject::execPop },
		{ "PopOut", &UObjectQueueObject::execPopOut },
		{ "SetGrowthSize", &UObjectQueueObject::execSetGrowthSize },
		{ "ToArray", &UObjectQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectQueueObject;
UClass* UObjectQueueObject::GetPrivateStaticClass()
{
	using TClass = UObjectQueueObject;
	if (!Z_Registration_Info_UClass_UObjectQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectQueueObject"),
			Z_Registration_Info_UClass_UObjectQueueObject.InnerSingleton,
			StaticRegisterNativesUObjectQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UObjectQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectQueueObject_NoRegister()
{
	return UObjectQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<UObject*>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<UObject*>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectQueueObject_Capacity, "Capacity" }, // 1680874430
		{ &Z_Construct_UFunction_UObjectQueueObject_Clear, "Clear" }, // 2304782454
		{ &Z_Construct_UFunction_UObjectQueueObject_Dequeue, "Dequeue" }, // 2206690239
		{ &Z_Construct_UFunction_UObjectQueueObject_Empty, "Empty" }, // 515458752
		{ &Z_Construct_UFunction_UObjectQueueObject_Enqueue, "Enqueue" }, // 2755192182
		{ &Z_Construct_UFunction_UObjectQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 1111042206
		{ &Z_Construct_UFunction_UObjectQueueObject_Initialize, "Initialize" }, // 1817885586
		{ &Z_Construct_UFunction_UObjectQueueObject_IsEmpty, "IsEmpty" }, // 1743396275
		{ &Z_Construct_UFunction_UObjectQueueObject_Num, "Num" }, // 412999202
		{ &Z_Construct_UFunction_UObjectQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 3029955842
		{ &Z_Construct_UFunction_UObjectQueueObject_PeekAt, "PeekAt" }, // 1600894143
		{ &Z_Construct_UFunction_UObjectQueueObject_PeekBack, "PeekBack" }, // 2705937374
		{ &Z_Construct_UFunction_UObjectQueueObject_PeekFront, "PeekFront" }, // 3471875834
		{ &Z_Construct_UFunction_UObjectQueueObject_Pop, "Pop" }, // 2529258220
		{ &Z_Construct_UFunction_UObjectQueueObject_PopOut, "PopOut" }, // 453847619
		{ &Z_Construct_UFunction_UObjectQueueObject_SetGrowthSize, "SetGrowthSize" }, // 3996140249
		{ &Z_Construct_UFunction_UObjectQueueObject_ToArray, "ToArray" }, // 3246992882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectQueueObject_Statics::ClassParams = {
	&UObjectQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectQueueObject()
{
	if (!Z_Registration_Info_UClass_UObjectQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectQueueObject.OuterSingleton, Z_Construct_UClass_UObjectQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectQueueObject.OuterSingleton;
}
UObjectQueueObject::UObjectQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectQueueObject);
UObjectQueueObject::~UObjectQueueObject() {}
// ********** End Class UObjectQueueObject *********************************************************

// ********** Begin Class USubclassOfActorQueueObject Function Capacity ****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics
{
	struct SubclassOfActorQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Capacity", Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::SubclassOfActorQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::SubclassOfActorQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Capacity ******************************

// ********** Begin Class USubclassOfActorQueueObject Function Clear *******************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Clear *********************************

// ********** Begin Class USubclassOfActorQueueObject Function Dequeue *****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics
{
	struct SubclassOfActorQueueObject_eventDequeue_Parms
	{
		TSubclassOf<AActor> OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventDequeue_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::SubclassOfActorQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::SubclassOfActorQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execDequeue)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Dequeue *******************************

// ********** Begin Class USubclassOfActorQueueObject Function Empty *******************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Empty *********************************

// ********** Begin Class USubclassOfActorQueueObject Function Enqueue *****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics
{
	struct SubclassOfActorQueueObject_eventEnqueue_Parms
	{
		const TSubclassOf<AActor> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventEnqueue_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::SubclassOfActorQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::SubclassOfActorQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execEnqueue)
{
	P_GET_OBJECT(UClass,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Enqueue *******************************

// ********** Begin Class USubclassOfActorQueueObject Function GetIndexOfElement *******************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics
{
	struct SubclassOfActorQueueObject_eventGetIndexOfElement_Parms
	{
		const TSubclassOf<AActor> Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::SubclassOfActorQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::SubclassOfActorQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execGetIndexOfElement)
{
	P_GET_OBJECT(UClass,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function GetIndexOfElement *********************

// ********** Begin Class USubclassOfActorQueueObject Function Initialize **************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics
{
	struct SubclassOfActorQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Initialize", Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::SubclassOfActorQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::SubclassOfActorQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Initialize ****************************

// ********** Begin Class USubclassOfActorQueueObject Function IsEmpty *****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics
{
	struct SubclassOfActorQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::SubclassOfActorQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::SubclassOfActorQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function IsEmpty *******************************

// ********** Begin Class USubclassOfActorQueueObject Function Num *********************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics
{
	struct SubclassOfActorQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Num", Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::SubclassOfActorQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::SubclassOfActorQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Num ***********************************

// ********** Begin Class USubclassOfActorQueueObject Function OverwriteInQueue ********************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics
{
	struct SubclassOfActorQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		const TSubclassOf<AActor> Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::SubclassOfActorQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::SubclassOfActorQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_OBJECT(UClass,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function OverwriteInQueue **********************

// ********** Begin Class USubclassOfActorQueueObject Function PeekAt ******************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics
{
	struct SubclassOfActorQueueObject_eventPeekAt_Parms
	{
		TSubclassOf<AActor> OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::SubclassOfActorQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::SubclassOfActorQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execPeekAt)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function PeekAt ********************************

// ********** Begin Class USubclassOfActorQueueObject Function PeekBack ****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics
{
	struct SubclassOfActorQueueObject_eventPeekBack_Parms
	{
		TSubclassOf<AActor> OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPeekBack_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::SubclassOfActorQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::SubclassOfActorQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execPeekBack)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function PeekBack ******************************

// ********** Begin Class USubclassOfActorQueueObject Function PeekFront ***************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics
{
	struct SubclassOfActorQueueObject_eventPeekFront_Parms
	{
		TSubclassOf<AActor> OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPeekFront_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::SubclassOfActorQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::SubclassOfActorQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execPeekFront)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function PeekFront *****************************

// ********** Begin Class USubclassOfActorQueueObject Function Pop *********************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics
{
	struct SubclassOfActorQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventPop_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "Pop", Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::SubclassOfActorQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::SubclassOfActorQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function Pop ***********************************

// ********** Begin Class USubclassOfActorQueueObject Function PopOut ******************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics
{
	struct SubclassOfActorQueueObject_eventPopOut_Parms
	{
		TSubclassOf<AActor> OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SubclassOfActorQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubclassOfActorQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "PopOut", Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::SubclassOfActorQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::SubclassOfActorQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execPopOut)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function PopOut ********************************

// ********** Begin Class USubclassOfActorQueueObject Function SetGrowthSize ***********************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics
{
	struct SubclassOfActorQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::SubclassOfActorQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::SubclassOfActorQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function SetGrowthSize *************************

// ********** Begin Class USubclassOfActorQueueObject Function ToArray *****************************
struct Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics
{
	struct SubclassOfActorQueueObject_eventToArray_Parms
	{
		TArray<TSubclassOf<AActor>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubclassOfActorQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubclassOfActorQueueObject, nullptr, "ToArray", Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::SubclassOfActorQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::SubclassOfActorQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubclassOfActorQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<AActor>>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class USubclassOfActorQueueObject Function ToArray *******************************

// ********** Begin Class USubclassOfActorQueueObject **********************************************
void USubclassOfActorQueueObject::StaticRegisterNativesUSubclassOfActorQueueObject()
{
	UClass* Class = USubclassOfActorQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &USubclassOfActorQueueObject::execCapacity },
		{ "Clear", &USubclassOfActorQueueObject::execClear },
		{ "Dequeue", &USubclassOfActorQueueObject::execDequeue },
		{ "Empty", &USubclassOfActorQueueObject::execEmpty },
		{ "Enqueue", &USubclassOfActorQueueObject::execEnqueue },
		{ "GetIndexOfElement", &USubclassOfActorQueueObject::execGetIndexOfElement },
		{ "Initialize", &USubclassOfActorQueueObject::execInitialize },
		{ "IsEmpty", &USubclassOfActorQueueObject::execIsEmpty },
		{ "Num", &USubclassOfActorQueueObject::execNum },
		{ "OverwriteInQueue", &USubclassOfActorQueueObject::execOverwriteInQueue },
		{ "PeekAt", &USubclassOfActorQueueObject::execPeekAt },
		{ "PeekBack", &USubclassOfActorQueueObject::execPeekBack },
		{ "PeekFront", &USubclassOfActorQueueObject::execPeekFront },
		{ "Pop", &USubclassOfActorQueueObject::execPop },
		{ "PopOut", &USubclassOfActorQueueObject::execPopOut },
		{ "SetGrowthSize", &USubclassOfActorQueueObject::execSetGrowthSize },
		{ "ToArray", &USubclassOfActorQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubclassOfActorQueueObject;
UClass* USubclassOfActorQueueObject::GetPrivateStaticClass()
{
	using TClass = USubclassOfActorQueueObject;
	if (!Z_Registration_Info_UClass_USubclassOfActorQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubclassOfActorQueueObject"),
			Z_Registration_Info_UClass_USubclassOfActorQueueObject.InnerSingleton,
			StaticRegisterNativesUSubclassOfActorQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USubclassOfActorQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_USubclassOfActorQueueObject_NoRegister()
{
	return USubclassOfActorQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubclassOfActorQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<TSubclass QUEUELITE_APIOf<AActor>>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<TSubclass QUEUELITE_APIOf<AActor>>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Capacity, "Capacity" }, // 1172959070
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Clear, "Clear" }, // 1563658873
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Dequeue, "Dequeue" }, // 3810367459
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Empty, "Empty" }, // 2820283644
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Enqueue, "Enqueue" }, // 1941973318
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 1023187412
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Initialize, "Initialize" }, // 42974826
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_IsEmpty, "IsEmpty" }, // 3530543707
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Num, "Num" }, // 3313940847
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 4149064899
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekAt, "PeekAt" }, // 3318947818
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekBack, "PeekBack" }, // 2056876516
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_PeekFront, "PeekFront" }, // 1196215179
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_Pop, "Pop" }, // 1818142678
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_PopOut, "PopOut" }, // 3744367199
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_SetGrowthSize, "SetGrowthSize" }, // 506484733
		{ &Z_Construct_UFunction_USubclassOfActorQueueObject_ToArray, "ToArray" }, // 3364527768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubclassOfActorQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubclassOfActorQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassOfActorQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubclassOfActorQueueObject_Statics::ClassParams = {
	&USubclassOfActorQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubclassOfActorQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USubclassOfActorQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubclassOfActorQueueObject()
{
	if (!Z_Registration_Info_UClass_USubclassOfActorQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubclassOfActorQueueObject.OuterSingleton, Z_Construct_UClass_USubclassOfActorQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubclassOfActorQueueObject.OuterSingleton;
}
USubclassOfActorQueueObject::USubclassOfActorQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubclassOfActorQueueObject);
USubclassOfActorQueueObject::~USubclassOfActorQueueObject() {}
// ********** End Class USubclassOfActorQueueObject ************************************************

// ********** Begin Class UStringQueueObject Function Capacity *************************************
struct Z_Construct_UFunction_UStringQueueObject_Capacity_Statics
{
	struct StringQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::StringQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::StringQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Capacity ***************************************

// ********** Begin Class UStringQueueObject Function Clear ****************************************
struct Z_Construct_UFunction_UStringQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStringQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Clear ******************************************

// ********** Begin Class UStringQueueObject Function Dequeue **************************************
struct Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics
{
	struct StringQueueObject_eventDequeue_Parms
	{
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventDequeue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::StringQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::StringQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execDequeue)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Dequeue ****************************************

// ********** Begin Class UStringQueueObject Function Empty ****************************************
struct Z_Construct_UFunction_UStringQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStringQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Empty ******************************************

// ********** Begin Class UStringQueueObject Function Enqueue **************************************
struct Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics
{
	struct StringQueueObject_eventEnqueue_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventEnqueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::StringQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::StringQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execEnqueue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Enqueue ****************************************

// ********** Begin Class UStringQueueObject Function GetIndexOfElement ****************************
struct Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics
{
	struct StringQueueObject_eventGetIndexOfElement_Parms
	{
		FString Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventGetIndexOfElement_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::StringQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::StringQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execGetIndexOfElement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function GetIndexOfElement ******************************

// ********** Begin Class UStringQueueObject Function Initialize ***********************************
struct Z_Construct_UFunction_UStringQueueObject_Initialize_Statics
{
	struct StringQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::StringQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::StringQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Initialize *************************************

// ********** Begin Class UStringQueueObject Function IsEmpty **************************************
struct Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics
{
	struct StringQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::StringQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::StringQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function IsEmpty ****************************************

// ********** Begin Class UStringQueueObject Function Num ******************************************
struct Z_Construct_UFunction_UStringQueueObject_Num_Statics
{
	struct StringQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Num", Z_Construct_UFunction_UStringQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Num_Statics::StringQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Num_Statics::StringQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Num ********************************************

// ********** Begin Class UStringQueueObject Function OverwriteInQueue *****************************
struct Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics
{
	struct StringQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventOverwriteInQueue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::StringQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::StringQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function OverwriteInQueue *******************************

// ********** Begin Class UStringQueueObject Function PeekAt ***************************************
struct Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics
{
	struct StringQueueObject_eventPeekAt_Parms
	{
		FString OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPeekAt_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::StringQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::StringQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execPeekAt)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function PeekAt *****************************************

// ********** Begin Class UStringQueueObject Function PeekBack *************************************
struct Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics
{
	struct StringQueueObject_eventPeekBack_Parms
	{
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPeekBack_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::StringQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::StringQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execPeekBack)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function PeekBack ***************************************

// ********** Begin Class UStringQueueObject Function PeekFront ************************************
struct Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics
{
	struct StringQueueObject_eventPeekFront_Parms
	{
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPeekFront_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::StringQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::StringQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execPeekFront)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function PeekFront **************************************

// ********** Begin Class UStringQueueObject Function Pop ******************************************
struct Z_Construct_UFunction_UStringQueueObject_Pop_Statics
{
	struct StringQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStringQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventPop_Parms), &Z_Construct_UFunction_UStringQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "Pop", Z_Construct_UFunction_UStringQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_Pop_Statics::StringQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_Pop_Statics::StringQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function Pop ********************************************

// ********** Begin Class UStringQueueObject Function PopOut ***************************************
struct Z_Construct_UFunction_UStringQueueObject_PopOut_Statics
{
	struct StringQueueObject_eventPopOut_Parms
	{
		FString OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPopOut_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StringQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StringQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::StringQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::StringQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execPopOut)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function PopOut *****************************************

// ********** Begin Class UStringQueueObject Function SetGrowthSize ********************************
struct Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics
{
	struct StringQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::StringQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::StringQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function SetGrowthSize **********************************

// ********** Begin Class UStringQueueObject Function ToArray **************************************
struct Z_Construct_UFunction_UStringQueueObject_ToArray_Statics
{
	struct StringQueueObject_eventToArray_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StringQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStringQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::StringQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::StringQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStringQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStringQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStringQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UStringQueueObject Function ToArray ****************************************

// ********** Begin Class UStringQueueObject *******************************************************
void UStringQueueObject::StaticRegisterNativesUStringQueueObject()
{
	UClass* Class = UStringQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UStringQueueObject::execCapacity },
		{ "Clear", &UStringQueueObject::execClear },
		{ "Dequeue", &UStringQueueObject::execDequeue },
		{ "Empty", &UStringQueueObject::execEmpty },
		{ "Enqueue", &UStringQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UStringQueueObject::execGetIndexOfElement },
		{ "Initialize", &UStringQueueObject::execInitialize },
		{ "IsEmpty", &UStringQueueObject::execIsEmpty },
		{ "Num", &UStringQueueObject::execNum },
		{ "OverwriteInQueue", &UStringQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UStringQueueObject::execPeekAt },
		{ "PeekBack", &UStringQueueObject::execPeekBack },
		{ "PeekFront", &UStringQueueObject::execPeekFront },
		{ "Pop", &UStringQueueObject::execPop },
		{ "PopOut", &UStringQueueObject::execPopOut },
		{ "SetGrowthSize", &UStringQueueObject::execSetGrowthSize },
		{ "ToArray", &UStringQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStringQueueObject;
UClass* UStringQueueObject::GetPrivateStaticClass()
{
	using TClass = UStringQueueObject;
	if (!Z_Registration_Info_UClass_UStringQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StringQueueObject"),
			Z_Registration_Info_UClass_UStringQueueObject.InnerSingleton,
			StaticRegisterNativesUStringQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UStringQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UStringQueueObject_NoRegister()
{
	return UStringQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStringQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<FString>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<FString>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStringQueueObject_Capacity, "Capacity" }, // 3631987581
		{ &Z_Construct_UFunction_UStringQueueObject_Clear, "Clear" }, // 183891406
		{ &Z_Construct_UFunction_UStringQueueObject_Dequeue, "Dequeue" }, // 406603957
		{ &Z_Construct_UFunction_UStringQueueObject_Empty, "Empty" }, // 2523460220
		{ &Z_Construct_UFunction_UStringQueueObject_Enqueue, "Enqueue" }, // 1961113248
		{ &Z_Construct_UFunction_UStringQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 1903314972
		{ &Z_Construct_UFunction_UStringQueueObject_Initialize, "Initialize" }, // 1540228967
		{ &Z_Construct_UFunction_UStringQueueObject_IsEmpty, "IsEmpty" }, // 3732733007
		{ &Z_Construct_UFunction_UStringQueueObject_Num, "Num" }, // 1155448576
		{ &Z_Construct_UFunction_UStringQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 2383236747
		{ &Z_Construct_UFunction_UStringQueueObject_PeekAt, "PeekAt" }, // 3426524202
		{ &Z_Construct_UFunction_UStringQueueObject_PeekBack, "PeekBack" }, // 949698729
		{ &Z_Construct_UFunction_UStringQueueObject_PeekFront, "PeekFront" }, // 1358034783
		{ &Z_Construct_UFunction_UStringQueueObject_Pop, "Pop" }, // 2901336335
		{ &Z_Construct_UFunction_UStringQueueObject_PopOut, "PopOut" }, // 377046937
		{ &Z_Construct_UFunction_UStringQueueObject_SetGrowthSize, "SetGrowthSize" }, // 2308226690
		{ &Z_Construct_UFunction_UStringQueueObject_ToArray, "ToArray" }, // 3458043115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringQueueObject_Statics::ClassParams = {
	&UStringQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringQueueObject()
{
	if (!Z_Registration_Info_UClass_UStringQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringQueueObject.OuterSingleton, Z_Construct_UClass_UStringQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringQueueObject.OuterSingleton;
}
UStringQueueObject::UStringQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringQueueObject);
UStringQueueObject::~UStringQueueObject() {}
// ********** End Class UStringQueueObject *********************************************************

// ********** Begin Class UVectorQueueObject Function Capacity *************************************
struct Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics
{
	struct VectorQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::VectorQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::VectorQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Capacity ***************************************

// ********** Begin Class UVectorQueueObject Function Clear ****************************************
struct Z_Construct_UFunction_UVectorQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVectorQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Clear ******************************************

// ********** Begin Class UVectorQueueObject Function Dequeue **************************************
struct Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics
{
	struct VectorQueueObject_eventDequeue_Parms
	{
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventDequeue_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::VectorQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::VectorQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execDequeue)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Dequeue ****************************************

// ********** Begin Class UVectorQueueObject Function Empty ****************************************
struct Z_Construct_UFunction_UVectorQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVectorQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Empty ******************************************

// ********** Begin Class UVectorQueueObject Function Enqueue **************************************
struct Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics
{
	struct VectorQueueObject_eventEnqueue_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventEnqueue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::VectorQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::VectorQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execEnqueue)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Enqueue ****************************************

// ********** Begin Class UVectorQueueObject Function GetIndexOfElement ****************************
struct Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics
{
	struct VectorQueueObject_eventGetIndexOfElement_Parms
	{
		FVector Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::VectorQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::VectorQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execGetIndexOfElement)
{
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function GetIndexOfElement ******************************

// ********** Begin Class UVectorQueueObject Function Initialize ***********************************
struct Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics
{
	struct VectorQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::VectorQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::VectorQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Initialize *************************************

// ********** Begin Class UVectorQueueObject Function IsEmpty **************************************
struct Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics
{
	struct VectorQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::VectorQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::VectorQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function IsEmpty ****************************************

// ********** Begin Class UVectorQueueObject Function Num ******************************************
struct Z_Construct_UFunction_UVectorQueueObject_Num_Statics
{
	struct VectorQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Num", Z_Construct_UFunction_UVectorQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Num_Statics::VectorQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Num_Statics::VectorQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Num ********************************************

// ********** Begin Class UVectorQueueObject Function OverwriteInQueue *****************************
struct Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics
{
	struct VectorQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		FVector Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::VectorQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::VectorQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function OverwriteInQueue *******************************

// ********** Begin Class UVectorQueueObject Function PeekAt ***************************************
struct Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics
{
	struct VectorQueueObject_eventPeekAt_Parms
	{
		FVector OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::VectorQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::VectorQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execPeekAt)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function PeekAt *****************************************

// ********** Begin Class UVectorQueueObject Function PeekBack *************************************
struct Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics
{
	struct VectorQueueObject_eventPeekBack_Parms
	{
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPeekBack_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::VectorQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::VectorQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execPeekBack)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function PeekBack ***************************************

// ********** Begin Class UVectorQueueObject Function PeekFront ************************************
struct Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics
{
	struct VectorQueueObject_eventPeekFront_Parms
	{
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPeekFront_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::VectorQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::VectorQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execPeekFront)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function PeekFront **************************************

// ********** Begin Class UVectorQueueObject Function Pop ******************************************
struct Z_Construct_UFunction_UVectorQueueObject_Pop_Statics
{
	struct VectorQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventPop_Parms), &Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "Pop", Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::VectorQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::VectorQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function Pop ********************************************

// ********** Begin Class UVectorQueueObject Function PopOut ***************************************
struct Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics
{
	struct VectorQueueObject_eventPopOut_Parms
	{
		FVector OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VectorQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VectorQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::VectorQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::VectorQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execPopOut)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function PopOut *****************************************

// ********** Begin Class UVectorQueueObject Function SetGrowthSize ********************************
struct Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics
{
	struct VectorQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::VectorQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::VectorQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function SetGrowthSize **********************************

// ********** Begin Class UVectorQueueObject Function ToArray **************************************
struct Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics
{
	struct VectorQueueObject_eventToArray_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVectorQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::VectorQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::VectorQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UVectorQueueObject Function ToArray ****************************************

// ********** Begin Class UVectorQueueObject *******************************************************
void UVectorQueueObject::StaticRegisterNativesUVectorQueueObject()
{
	UClass* Class = UVectorQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UVectorQueueObject::execCapacity },
		{ "Clear", &UVectorQueueObject::execClear },
		{ "Dequeue", &UVectorQueueObject::execDequeue },
		{ "Empty", &UVectorQueueObject::execEmpty },
		{ "Enqueue", &UVectorQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UVectorQueueObject::execGetIndexOfElement },
		{ "Initialize", &UVectorQueueObject::execInitialize },
		{ "IsEmpty", &UVectorQueueObject::execIsEmpty },
		{ "Num", &UVectorQueueObject::execNum },
		{ "OverwriteInQueue", &UVectorQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UVectorQueueObject::execPeekAt },
		{ "PeekBack", &UVectorQueueObject::execPeekBack },
		{ "PeekFront", &UVectorQueueObject::execPeekFront },
		{ "Pop", &UVectorQueueObject::execPop },
		{ "PopOut", &UVectorQueueObject::execPopOut },
		{ "SetGrowthSize", &UVectorQueueObject::execSetGrowthSize },
		{ "ToArray", &UVectorQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVectorQueueObject;
UClass* UVectorQueueObject::GetPrivateStaticClass()
{
	using TClass = UVectorQueueObject;
	if (!Z_Registration_Info_UClass_UVectorQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VectorQueueObject"),
			Z_Registration_Info_UClass_UVectorQueueObject.InnerSingleton,
			StaticRegisterNativesUVectorQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVectorQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UVectorQueueObject_NoRegister()
{
	return UVectorQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVectorQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<FVector>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<FVector>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVectorQueueObject_Capacity, "Capacity" }, // 3272974997
		{ &Z_Construct_UFunction_UVectorQueueObject_Clear, "Clear" }, // 756403746
		{ &Z_Construct_UFunction_UVectorQueueObject_Dequeue, "Dequeue" }, // 735936911
		{ &Z_Construct_UFunction_UVectorQueueObject_Empty, "Empty" }, // 3019248311
		{ &Z_Construct_UFunction_UVectorQueueObject_Enqueue, "Enqueue" }, // 3581132348
		{ &Z_Construct_UFunction_UVectorQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 3214810011
		{ &Z_Construct_UFunction_UVectorQueueObject_Initialize, "Initialize" }, // 4173634210
		{ &Z_Construct_UFunction_UVectorQueueObject_IsEmpty, "IsEmpty" }, // 1041304722
		{ &Z_Construct_UFunction_UVectorQueueObject_Num, "Num" }, // 1344362847
		{ &Z_Construct_UFunction_UVectorQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 675158443
		{ &Z_Construct_UFunction_UVectorQueueObject_PeekAt, "PeekAt" }, // 3962487350
		{ &Z_Construct_UFunction_UVectorQueueObject_PeekBack, "PeekBack" }, // 1954184587
		{ &Z_Construct_UFunction_UVectorQueueObject_PeekFront, "PeekFront" }, // 2540827539
		{ &Z_Construct_UFunction_UVectorQueueObject_Pop, "Pop" }, // 4275528168
		{ &Z_Construct_UFunction_UVectorQueueObject_PopOut, "PopOut" }, // 1249059821
		{ &Z_Construct_UFunction_UVectorQueueObject_SetGrowthSize, "SetGrowthSize" }, // 3927382991
		{ &Z_Construct_UFunction_UVectorQueueObject_ToArray, "ToArray" }, // 2935304999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVectorQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorQueueObject_Statics::ClassParams = {
	&UVectorQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVectorQueueObject()
{
	if (!Z_Registration_Info_UClass_UVectorQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorQueueObject.OuterSingleton, Z_Construct_UClass_UVectorQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVectorQueueObject.OuterSingleton;
}
UVectorQueueObject::UVectorQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorQueueObject);
UVectorQueueObject::~UVectorQueueObject() {}
// ********** End Class UVectorQueueObject *********************************************************

// ********** Begin Class URotatorQueueObject Function Capacity ************************************
struct Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics
{
	struct RotatorQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Capacity", Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::RotatorQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::RotatorQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Capacity **************************************

// ********** Begin Class URotatorQueueObject Function Clear ***************************************
struct Z_Construct_UFunction_URotatorQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URotatorQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Clear *****************************************

// ********** Begin Class URotatorQueueObject Function Dequeue *************************************
struct Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics
{
	struct RotatorQueueObject_eventDequeue_Parms
	{
		FRotator OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventDequeue_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::RotatorQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::RotatorQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execDequeue)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Dequeue ***************************************

// ********** Begin Class URotatorQueueObject Function Empty ***************************************
struct Z_Construct_UFunction_URotatorQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URotatorQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Empty *****************************************

// ********** Begin Class URotatorQueueObject Function Enqueue *************************************
struct Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics
{
	struct RotatorQueueObject_eventEnqueue_Parms
	{
		FRotator Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventEnqueue_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::RotatorQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::RotatorQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execEnqueue)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Enqueue ***************************************

// ********** Begin Class URotatorQueueObject Function GetIndexOfElement ***************************
struct Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics
{
	struct RotatorQueueObject_eventGetIndexOfElement_Parms
	{
		FRotator Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::RotatorQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::RotatorQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execGetIndexOfElement)
{
	P_GET_STRUCT(FRotator,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function GetIndexOfElement *****************************

// ********** Begin Class URotatorQueueObject Function Initialize **********************************
struct Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics
{
	struct RotatorQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Initialize", Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::RotatorQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::RotatorQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Initialize ************************************

// ********** Begin Class URotatorQueueObject Function IsEmpty *************************************
struct Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics
{
	struct RotatorQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::RotatorQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::RotatorQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function IsEmpty ***************************************

// ********** Begin Class URotatorQueueObject Function Num *****************************************
struct Z_Construct_UFunction_URotatorQueueObject_Num_Statics
{
	struct RotatorQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Num", Z_Construct_UFunction_URotatorQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Num_Statics::RotatorQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Num_Statics::RotatorQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Num *******************************************

// ********** Begin Class URotatorQueueObject Function OverwriteInQueue ****************************
struct Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics
{
	struct RotatorQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		FRotator Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::RotatorQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::RotatorQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_STRUCT(FRotator,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function OverwriteInQueue ******************************

// ********** Begin Class URotatorQueueObject Function PeekAt **************************************
struct Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics
{
	struct RotatorQueueObject_eventPeekAt_Parms
	{
		FRotator OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::RotatorQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::RotatorQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execPeekAt)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function PeekAt ****************************************

// ********** Begin Class URotatorQueueObject Function PeekBack ************************************
struct Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics
{
	struct RotatorQueueObject_eventPeekBack_Parms
	{
		FRotator OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPeekBack_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::RotatorQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::RotatorQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execPeekBack)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function PeekBack **************************************

// ********** Begin Class URotatorQueueObject Function PeekFront ***********************************
struct Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics
{
	struct RotatorQueueObject_eventPeekFront_Parms
	{
		FRotator OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPeekFront_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::RotatorQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::RotatorQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execPeekFront)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function PeekFront *************************************

// ********** Begin Class URotatorQueueObject Function Pop *****************************************
struct Z_Construct_UFunction_URotatorQueueObject_Pop_Statics
{
	struct RotatorQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventPop_Parms), &Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "Pop", Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::RotatorQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::RotatorQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function Pop *******************************************

// ********** Begin Class URotatorQueueObject Function PopOut **************************************
struct Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics
{
	struct RotatorQueueObject_eventPopOut_Parms
	{
		FRotator OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RotatorQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RotatorQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "PopOut", Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::RotatorQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::RotatorQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execPopOut)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function PopOut ****************************************

// ********** Begin Class URotatorQueueObject Function SetGrowthSize *******************************
struct Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics
{
	struct RotatorQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::RotatorQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::RotatorQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function SetGrowthSize *********************************

// ********** Begin Class URotatorQueueObject Function ToArray *************************************
struct Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics
{
	struct RotatorQueueObject_eventToArray_Parms
	{
		TArray<FRotator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotatorQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URotatorQueueObject, nullptr, "ToArray", Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::RotatorQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::RotatorQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URotatorQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URotatorQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URotatorQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRotator>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class URotatorQueueObject Function ToArray ***************************************

// ********** Begin Class URotatorQueueObject ******************************************************
void URotatorQueueObject::StaticRegisterNativesURotatorQueueObject()
{
	UClass* Class = URotatorQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &URotatorQueueObject::execCapacity },
		{ "Clear", &URotatorQueueObject::execClear },
		{ "Dequeue", &URotatorQueueObject::execDequeue },
		{ "Empty", &URotatorQueueObject::execEmpty },
		{ "Enqueue", &URotatorQueueObject::execEnqueue },
		{ "GetIndexOfElement", &URotatorQueueObject::execGetIndexOfElement },
		{ "Initialize", &URotatorQueueObject::execInitialize },
		{ "IsEmpty", &URotatorQueueObject::execIsEmpty },
		{ "Num", &URotatorQueueObject::execNum },
		{ "OverwriteInQueue", &URotatorQueueObject::execOverwriteInQueue },
		{ "PeekAt", &URotatorQueueObject::execPeekAt },
		{ "PeekBack", &URotatorQueueObject::execPeekBack },
		{ "PeekFront", &URotatorQueueObject::execPeekFront },
		{ "Pop", &URotatorQueueObject::execPop },
		{ "PopOut", &URotatorQueueObject::execPopOut },
		{ "SetGrowthSize", &URotatorQueueObject::execSetGrowthSize },
		{ "ToArray", &URotatorQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URotatorQueueObject;
UClass* URotatorQueueObject::GetPrivateStaticClass()
{
	using TClass = URotatorQueueObject;
	if (!Z_Registration_Info_UClass_URotatorQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RotatorQueueObject"),
			Z_Registration_Info_UClass_URotatorQueueObject.InnerSingleton,
			StaticRegisterNativesURotatorQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URotatorQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_URotatorQueueObject_NoRegister()
{
	return URotatorQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URotatorQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<FRotator>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<FRotator>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URotatorQueueObject_Capacity, "Capacity" }, // 730693093
		{ &Z_Construct_UFunction_URotatorQueueObject_Clear, "Clear" }, // 2521679547
		{ &Z_Construct_UFunction_URotatorQueueObject_Dequeue, "Dequeue" }, // 361510731
		{ &Z_Construct_UFunction_URotatorQueueObject_Empty, "Empty" }, // 1559087366
		{ &Z_Construct_UFunction_URotatorQueueObject_Enqueue, "Enqueue" }, // 403093585
		{ &Z_Construct_UFunction_URotatorQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 2888284526
		{ &Z_Construct_UFunction_URotatorQueueObject_Initialize, "Initialize" }, // 68017149
		{ &Z_Construct_UFunction_URotatorQueueObject_IsEmpty, "IsEmpty" }, // 351923652
		{ &Z_Construct_UFunction_URotatorQueueObject_Num, "Num" }, // 4173400358
		{ &Z_Construct_UFunction_URotatorQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 3662201064
		{ &Z_Construct_UFunction_URotatorQueueObject_PeekAt, "PeekAt" }, // 1589621353
		{ &Z_Construct_UFunction_URotatorQueueObject_PeekBack, "PeekBack" }, // 4252893721
		{ &Z_Construct_UFunction_URotatorQueueObject_PeekFront, "PeekFront" }, // 1224449034
		{ &Z_Construct_UFunction_URotatorQueueObject_Pop, "Pop" }, // 3157623140
		{ &Z_Construct_UFunction_URotatorQueueObject_PopOut, "PopOut" }, // 1157088309
		{ &Z_Construct_UFunction_URotatorQueueObject_SetGrowthSize, "SetGrowthSize" }, // 2206488917
		{ &Z_Construct_UFunction_URotatorQueueObject_ToArray, "ToArray" }, // 412870088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatorQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URotatorQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatorQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotatorQueueObject_Statics::ClassParams = {
	&URotatorQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotatorQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URotatorQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotatorQueueObject()
{
	if (!Z_Registration_Info_UClass_URotatorQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotatorQueueObject.OuterSingleton, Z_Construct_UClass_URotatorQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotatorQueueObject.OuterSingleton;
}
URotatorQueueObject::URotatorQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotatorQueueObject);
URotatorQueueObject::~URotatorQueueObject() {}
// ********** End Class URotatorQueueObject ********************************************************

// ********** Begin Class UTransformQueueObject Function Capacity **********************************
struct Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics
{
	struct TransformQueueObject_eventCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Capacity", Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::TransformQueueObject_eventCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::TransformQueueObject_eventCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Capacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Capacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Capacity();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Capacity ************************************

// ********** Begin Class UTransformQueueObject Function Clear *************************************
struct Z_Construct_UFunction_UTransformQueueObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransformQueueObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Clear ***************************************

// ********** Begin Class UTransformQueueObject Function Dequeue ***********************************
struct Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics
{
	struct TransformQueueObject_eventDequeue_Parms
	{
		FTransform OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventDequeue_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventDequeue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventDequeue_Parms), &Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Dequeue", Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::TransformQueueObject_eventDequeue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::TransformQueueObject_eventDequeue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Dequeue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Dequeue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execDequeue)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Dequeue(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Dequeue *************************************

// ********** Begin Class UTransformQueueObject Function Empty *************************************
struct Z_Construct_UFunction_UTransformQueueObject_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Empty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Empty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransformQueueObject_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Empty ***************************************

// ********** Begin Class UTransformQueueObject Function Enqueue ***********************************
struct Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics
{
	struct TransformQueueObject_eventEnqueue_Parms
	{
		FTransform Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventEnqueue_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Enqueue", Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::TransformQueueObject_eventEnqueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::TransformQueueObject_eventEnqueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Enqueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Enqueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execEnqueue)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enqueue(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Enqueue *************************************

// ********** Begin Class UTransformQueueObject Function GetIndexOfElement *************************
struct Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics
{
	struct TransformQueueObject_eventGetIndexOfElement_Parms
	{
		FTransform Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventGetIndexOfElement_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventGetIndexOfElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "GetIndexOfElement", Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::TransformQueueObject_eventGetIndexOfElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::TransformQueueObject_eventGetIndexOfElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execGetIndexOfElement)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexOfElement(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function GetIndexOfElement ***************************

// ********** Begin Class UTransformQueueObject Function Initialize ********************************
struct Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics
{
	struct TransformQueueObject_eventInitialize_Parms
	{
		int32 InitialCapacity;
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "CPP_Default_InitialCapacity", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::NewProp_InitialCapacity = { "InitialCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventInitialize_Parms, InitialCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCapacity_MetaData), NewProp_InitialCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventInitialize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::NewProp_InitialCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Initialize", Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::TransformQueueObject_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::TransformQueueObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execInitialize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialCapacity);
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InitialCapacity,Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Initialize **********************************

// ********** Begin Class UTransformQueueObject Function IsEmpty ***********************************
struct Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics
{
	struct TransformQueueObject_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventIsEmpty_Parms), &Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "IsEmpty", Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::TransformQueueObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::TransformQueueObject_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function IsEmpty *************************************

// ********** Begin Class UTransformQueueObject Function Num ***************************************
struct Z_Construct_UFunction_UTransformQueueObject_Num_Statics
{
	struct TransformQueueObject_eventNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Num_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Num", Z_Construct_UFunction_UTransformQueueObject_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Num_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Num_Statics::TransformQueueObject_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Num_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Num_Statics::TransformQueueObject_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Num *****************************************

// ********** Begin Class UTransformQueueObject Function OverwriteInQueue **************************
struct Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics
{
	struct TransformQueueObject_eventOverwriteInQueue_Parms
	{
		int32 TargetIndex;
		FTransform Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventOverwriteInQueue_Parms, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventOverwriteInQueue_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventOverwriteInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventOverwriteInQueue_Parms), &Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "OverwriteInQueue", Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::TransformQueueObject_eventOverwriteInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::TransformQueueObject_eventOverwriteInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execOverwriteInQueue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_STRUCT(FTransform,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OverwriteInQueue(Z_Param_TargetIndex,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function OverwriteInQueue ****************************

// ********** Begin Class UTransformQueueObject Function PeekAt ************************************
struct Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics
{
	struct TransformQueueObject_eventPeekAt_Parms
	{
		FTransform OutValue;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPeekAt_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPeekAt_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventPeekAt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventPeekAt_Parms), &Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "PeekAt", Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::TransformQueueObject_eventPeekAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::TransformQueueObject_eventPeekAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_PeekAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_PeekAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execPeekAt)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekAt(Z_Param_Out_OutValue,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function PeekAt **************************************

// ********** Begin Class UTransformQueueObject Function PeekBack **********************************
struct Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics
{
	struct TransformQueueObject_eventPeekBack_Parms
	{
		FTransform OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPeekBack_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventPeekBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventPeekBack_Parms), &Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "PeekBack", Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::TransformQueueObject_eventPeekBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::TransformQueueObject_eventPeekBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_PeekBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_PeekBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execPeekBack)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekBack(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function PeekBack ************************************

// ********** Begin Class UTransformQueueObject Function PeekFront *********************************
struct Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics
{
	struct TransformQueueObject_eventPeekFront_Parms
	{
		FTransform OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPeekFront_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventPeekFront_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventPeekFront_Parms), &Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "PeekFront", Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::TransformQueueObject_eventPeekFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::TransformQueueObject_eventPeekFront_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_PeekFront()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_PeekFront_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execPeekFront)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PeekFront(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function PeekFront ***********************************

// ********** Begin Class UTransformQueueObject Function Pop ***************************************
struct Z_Construct_UFunction_UTransformQueueObject_Pop_Statics
{
	struct TransformQueueObject_eventPop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventPop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventPop_Parms), &Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "Pop", Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::TransformQueueObject_eventPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::TransformQueueObject_eventPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_Pop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_Pop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execPop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Pop();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function Pop *****************************************

// ********** Begin Class UTransformQueueObject Function PopOut ************************************
struct Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics
{
	struct TransformQueueObject_eventPopOut_Parms
	{
		FTransform OutValue;
		int32 OutLogicalIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutLogicalIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPopOut_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_OutLogicalIndex = { "OutLogicalIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventPopOut_Parms, OutLogicalIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransformQueueObject_eventPopOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransformQueueObject_eventPopOut_Parms), &Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_OutLogicalIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "PopOut", Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::TransformQueueObject_eventPopOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::TransformQueueObject_eventPopOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_PopOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_PopOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execPopOut)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutLogicalIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PopOut(Z_Param_Out_OutValue,Z_Param_Out_OutLogicalIndex);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function PopOut **************************************

// ********** Begin Class UTransformQueueObject Function SetGrowthSize *****************************
struct Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics
{
	struct TransformQueueObject_eventSetGrowthSize_Parms
	{
		int32 InGrowthSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ClampMin", "1" },
		{ "CPP_Default_InGrowthSize", "32" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrowthSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGrowthSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize = { "InGrowthSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventSetGrowthSize_Parms, InGrowthSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrowthSize_MetaData), NewProp_InGrowthSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::NewProp_InGrowthSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "SetGrowthSize", Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::TransformQueueObject_eventSetGrowthSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::TransformQueueObject_eventSetGrowthSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execSetGrowthSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGrowthSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrowthSize(Z_Param_InGrowthSize);
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function SetGrowthSize *******************************

// ********** Begin Class UTransformQueueObject Function ToArray ***********************************
struct Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics
{
	struct TransformQueueObject_eventToArray_Parms
	{
		TArray<FTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Queue" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformQueueObject_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransformQueueObject, nullptr, "ToArray", Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::TransformQueueObject_eventToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::TransformQueueObject_eventToArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransformQueueObject_ToArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransformQueueObject_ToArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransformQueueObject::execToArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTransform>*)Z_Param__Result=P_THIS->ToArray();
	P_NATIVE_END;
}
// ********** End Class UTransformQueueObject Function ToArray *************************************

// ********** Begin Class UTransformQueueObject ****************************************************
void UTransformQueueObject::StaticRegisterNativesUTransformQueueObject()
{
	UClass* Class = UTransformQueueObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Capacity", &UTransformQueueObject::execCapacity },
		{ "Clear", &UTransformQueueObject::execClear },
		{ "Dequeue", &UTransformQueueObject::execDequeue },
		{ "Empty", &UTransformQueueObject::execEmpty },
		{ "Enqueue", &UTransformQueueObject::execEnqueue },
		{ "GetIndexOfElement", &UTransformQueueObject::execGetIndexOfElement },
		{ "Initialize", &UTransformQueueObject::execInitialize },
		{ "IsEmpty", &UTransformQueueObject::execIsEmpty },
		{ "Num", &UTransformQueueObject::execNum },
		{ "OverwriteInQueue", &UTransformQueueObject::execOverwriteInQueue },
		{ "PeekAt", &UTransformQueueObject::execPeekAt },
		{ "PeekBack", &UTransformQueueObject::execPeekBack },
		{ "PeekFront", &UTransformQueueObject::execPeekFront },
		{ "Pop", &UTransformQueueObject::execPop },
		{ "PopOut", &UTransformQueueObject::execPopOut },
		{ "SetGrowthSize", &UTransformQueueObject::execSetGrowthSize },
		{ "ToArray", &UTransformQueueObject::execToArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransformQueueObject;
UClass* UTransformQueueObject::GetPrivateStaticClass()
{
	using TClass = UTransformQueueObject;
	if (!Z_Registration_Info_UClass_UTransformQueueObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransformQueueObject"),
			Z_Registration_Info_UClass_UTransformQueueObject.InnerSingleton,
			StaticRegisterNativesUTransformQueueObject,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTransformQueueObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransformQueueObject_NoRegister()
{
	return UTransformQueueObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransformQueueObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint-accessible wrapper for TArrayQueue<FTransform>\n */" },
		{ "IncludePath", "TArrayQueue.h" },
		{ "ModuleRelativePath", "Public/TArrayQueue.h" },
		{ "ToolTip", "Blueprint-accessible wrapper for TArrayQueue<FTransform>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransformQueueObject_Capacity, "Capacity" }, // 3655417513
		{ &Z_Construct_UFunction_UTransformQueueObject_Clear, "Clear" }, // 1595231245
		{ &Z_Construct_UFunction_UTransformQueueObject_Dequeue, "Dequeue" }, // 2412747792
		{ &Z_Construct_UFunction_UTransformQueueObject_Empty, "Empty" }, // 4253205714
		{ &Z_Construct_UFunction_UTransformQueueObject_Enqueue, "Enqueue" }, // 1912825797
		{ &Z_Construct_UFunction_UTransformQueueObject_GetIndexOfElement, "GetIndexOfElement" }, // 2132986096
		{ &Z_Construct_UFunction_UTransformQueueObject_Initialize, "Initialize" }, // 232478343
		{ &Z_Construct_UFunction_UTransformQueueObject_IsEmpty, "IsEmpty" }, // 1144871328
		{ &Z_Construct_UFunction_UTransformQueueObject_Num, "Num" }, // 2686838525
		{ &Z_Construct_UFunction_UTransformQueueObject_OverwriteInQueue, "OverwriteInQueue" }, // 1758893224
		{ &Z_Construct_UFunction_UTransformQueueObject_PeekAt, "PeekAt" }, // 4263210806
		{ &Z_Construct_UFunction_UTransformQueueObject_PeekBack, "PeekBack" }, // 4268628897
		{ &Z_Construct_UFunction_UTransformQueueObject_PeekFront, "PeekFront" }, // 1457765227
		{ &Z_Construct_UFunction_UTransformQueueObject_Pop, "Pop" }, // 2305407348
		{ &Z_Construct_UFunction_UTransformQueueObject_PopOut, "PopOut" }, // 2165556803
		{ &Z_Construct_UFunction_UTransformQueueObject_SetGrowthSize, "SetGrowthSize" }, // 2112237545
		{ &Z_Construct_UFunction_UTransformQueueObject_ToArray, "ToArray" }, // 2131455782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformQueueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTransformQueueObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QueueLite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformQueueObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformQueueObject_Statics::ClassParams = {
	&UTransformQueueObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransformQueueObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransformQueueObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransformQueueObject()
{
	if (!Z_Registration_Info_UClass_UTransformQueueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformQueueObject.OuterSingleton, Z_Construct_UClass_UTransformQueueObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransformQueueObject.OuterSingleton;
}
UTransformQueueObject::UTransformQueueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformQueueObject);
UTransformQueueObject::~UTransformQueueObject() {}
// ********** End Class UTransformQueueObject ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lukas_Desktop_Plugin_UE_Queue_Lite_Plugin_QueueLite_HostProject_Plugins_QueueLite_Source_QueueLite_Public_TArrayQueue_h__Script_QueueLite_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntQueueObject, UIntQueueObject::StaticClass, TEXT("UIntQueueObject"), &Z_Registration_Info_UClass_UIntQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntQueueObject), 2813553453U) },
		{ Z_Construct_UClass_UFloatQueueObject, UFloatQueueObject::StaticClass, TEXT("UFloatQueueObject"), &Z_Registration_Info_UClass_UFloatQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatQueueObject), 2004069685U) },
		{ Z_Construct_UClass_UActorQueueObject, UActorQueueObject::StaticClass, TEXT("UActorQueueObject"), &Z_Registration_Info_UClass_UActorQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorQueueObject), 3739837370U) },
		{ Z_Construct_UClass_UObjectQueueObject, UObjectQueueObject::StaticClass, TEXT("UObjectQueueObject"), &Z_Registration_Info_UClass_UObjectQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectQueueObject), 3661106524U) },
		{ Z_Construct_UClass_USubclassOfActorQueueObject, USubclassOfActorQueueObject::StaticClass, TEXT("USubclassOfActorQueueObject"), &Z_Registration_Info_UClass_USubclassOfActorQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubclassOfActorQueueObject), 1823233700U) },
		{ Z_Construct_UClass_UStringQueueObject, UStringQueueObject::StaticClass, TEXT("UStringQueueObject"), &Z_Registration_Info_UClass_UStringQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringQueueObject), 1270473016U) },
		{ Z_Construct_UClass_UVectorQueueObject, UVectorQueueObject::StaticClass, TEXT("UVectorQueueObject"), &Z_Registration_Info_UClass_UVectorQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorQueueObject), 2360163177U) },
		{ Z_Construct_UClass_URotatorQueueObject, URotatorQueueObject::StaticClass, TEXT("URotatorQueueObject"), &Z_Registration_Info_UClass_URotatorQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotatorQueueObject), 1731135288U) },
		{ Z_Construct_UClass_UTransformQueueObject, UTransformQueueObject::StaticClass, TEXT("UTransformQueueObject"), &Z_Registration_Info_UClass_UTransformQueueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformQueueObject), 270482737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lukas_Desktop_Plugin_UE_Queue_Lite_Plugin_QueueLite_HostProject_Plugins_QueueLite_Source_QueueLite_Public_TArrayQueue_h__Script_QueueLite_3655555952(TEXT("/Script/QueueLite"),
	Z_CompiledInDeferFile_FID_Users_lukas_Desktop_Plugin_UE_Queue_Lite_Plugin_QueueLite_HostProject_Plugins_QueueLite_Source_QueueLite_Public_TArrayQueue_h__Script_QueueLite_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lukas_Desktop_Plugin_UE_Queue_Lite_Plugin_QueueLite_HostProject_Plugins_QueueLite_Source_QueueLite_Public_TArrayQueue_h__Script_QueueLite_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
