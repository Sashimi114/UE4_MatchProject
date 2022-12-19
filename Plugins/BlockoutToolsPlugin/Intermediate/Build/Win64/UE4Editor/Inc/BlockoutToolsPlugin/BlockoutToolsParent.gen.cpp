// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockoutToolsPlugin/Private/BlockoutToolsParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutToolsParent() {}
// Cross Module References
	BLOCKOUTTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType();
	UPackage* Z_Construct_UPackage__Script_BlockoutToolsPlugin();
	BLOCKOUTTOOLSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBlockoutMaterialPreset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister();
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_ABlockoutToolsParent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EBlockoutMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, Z_Construct_UPackage__Script_BlockoutToolsPlugin(), TEXT("EBlockoutMaterialType"));
		}
		return Singleton;
	}
	template<> BLOCKOUTTOOLSPLUGIN_API UEnum* StaticEnum<EBlockoutMaterialType>()
	{
		return EBlockoutMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlockoutMaterialType(EBlockoutMaterialType_StaticEnum, TEXT("/Script/BlockoutToolsPlugin"), TEXT("EBlockoutMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Hash() { return 105013768U; }
	UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlockoutToolsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlockoutMaterialType"), 0, Get_Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BlockoutMaterialType_Grid", (int64)BlockoutMaterialType_Grid },
				{ "BlockoutMaterialType_CustomMaterial", (int64)BlockoutMaterialType_CustomMaterial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockoutMaterialType_CustomMaterial.Comment", "//\x09""BlockoutMaterialType_GridPreset UMETA(DisplayName = \"Blockout Grid Preset\"),\n" },
				{ "BlockoutMaterialType_CustomMaterial.DisplayName", "Custom Material" },
				{ "BlockoutMaterialType_CustomMaterial.Name", "BlockoutMaterialType_CustomMaterial" },
				{ "BlockoutMaterialType_CustomMaterial.ToolTip", "BlockoutMaterialType_GridPreset UMETA(DisplayName = \"Blockout Grid Preset\")," },
				{ "BlockoutMaterialType_Grid.DisplayName", "Blockout Grid" },
				{ "BlockoutMaterialType_Grid.Name", "BlockoutMaterialType_Grid" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
				nullptr,
				"EBlockoutMaterialType",
				"EBlockoutMaterialType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FBlockoutMaterialPreset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBlockoutMaterialPreset cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBlockoutMaterialPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLOCKOUTTOOLSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockoutMaterialPreset, Z_Construct_UPackage__Script_BlockoutToolsPlugin(), TEXT("BlockoutMaterialPreset"), sizeof(FBlockoutMaterialPreset), Get_Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Hash());
	}
	return Singleton;
}
template<> BLOCKOUTTOOLSPLUGIN_API UScriptStruct* StaticStruct<FBlockoutMaterialPreset>()
{
	return FBlockoutMaterialPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlockoutMaterialPreset(FBlockoutMaterialPreset::StaticStruct, TEXT("/Script/BlockoutToolsPlugin"), TEXT("BlockoutMaterialPreset"), false, nullptr, nullptr);
static struct FScriptStruct_BlockoutToolsPlugin_StaticRegisterNativesFBlockoutMaterialPreset
{
	FScriptStruct_BlockoutToolsPlugin_StaticRegisterNativesFBlockoutMaterialPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlockoutMaterialPreset")),new UScriptStruct::TCppStructOps<FBlockoutMaterialPreset>);
	}
} ScriptStruct_BlockoutToolsPlugin_StaticRegisterNativesFBlockoutMaterialPreset;
	struct Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[];
#endif
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckerLuminance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckerLuminance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTopColor_MetaData[];
#endif
		static void NewProp_bUseTopColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTopColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockoutMaterialPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Use Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((FBlockoutMaterialPreset*)Obj)->bUseGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlockoutMaterialPreset), &Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Grid Size" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockoutMaterialPreset, GridSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_CheckerLuminance_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Checker Luminance" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_CheckerLuminance = { "CheckerLuminance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockoutMaterialPreset, CheckerLuminance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_CheckerLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_CheckerLuminance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockoutMaterialPreset, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Use Top Color" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor_SetBit(void* Obj)
	{
		((FBlockoutMaterialPreset*)Obj)->bUseTopColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor = { "bUseTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlockoutMaterialPreset), &Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_TopColor_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "DisplayName", "Top Color" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_TopColor = { "TopColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockoutMaterialPreset, TopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_TopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_TopColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_CheckerLuminance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_bUseTopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::NewProp_TopColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BlockoutMaterialPreset",
		sizeof(FBlockoutMaterialPreset),
		alignof(FBlockoutMaterialPreset),
		Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockoutMaterialPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlockoutToolsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlockoutMaterialPreset"), sizeof(FBlockoutMaterialPreset), Get_Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlockoutMaterialPreset_Hash() { return 2070490559U; }
	DEFINE_FUNCTION(ABlockoutToolsParent::execBlockoutSetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockoutSetMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlockoutToolsParent::execRerunConstructionScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RerunConstructionScript();
		P_NATIVE_END;
	}
	void ABlockoutToolsParent::StaticRegisterNativesABlockoutToolsParent()
	{
		UClass* Class = ABlockoutToolsParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockoutSetMaterial", &ABlockoutToolsParent::execBlockoutSetMaterial },
			{ "RerunConstructionScript", &ABlockoutToolsParent::execRerunConstructionScript },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockoutToolsParent, nullptr, "BlockoutSetMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockoutToolsParent, nullptr, "RerunConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlockoutToolsParent_NoRegister()
	{
		return ABlockoutToolsParent::StaticClass();
	}
	struct Z_Construct_UClass_ABlockoutToolsParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutGridMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutGridMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutCurrentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutCurrentMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockoutMeshComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockoutMaterialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseGrid_MetaData[];
#endif
		static void NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialCheckerLuminance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialCheckerLuminance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseTopColor_MetaData[];
#endif
		static void NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseTopColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialTopColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialTopColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomMaterial_MetaData[];
#endif
		static void NewProp_bUseCustomMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockoutCustomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockoutCustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockoutEnableCollisions_MetaData[];
#endif
		static void NewProp_bBlockoutEnableCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockoutEnableCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockoutCastShadows_MetaData[];
#endif
		static void NewProp_bBlockoutCastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockoutCastShadows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockoutToolsParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlockoutToolsParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockoutToolsParent_BlockoutSetMaterial, "BlockoutSetMaterial" }, // 3167710833
		{ &Z_Construct_UFunction_ABlockoutToolsParent_RerunConstructionScript, "RerunConstructionScript" }, // 2456198070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockoutToolsParent.h" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent = { "BlockoutGridParent", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID = { "BlockoutGridMID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial = { "BlockoutCurrentMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCurrentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData[] = {
		{ "Category", "Blockout Tools" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents = { "BlockoutMeshComponents", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Material Type" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType = { "BlockoutMaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialType), Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor = { "BlockoutMaterialColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Use Grid" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bBlockoutMaterialUseGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid = { "bBlockoutMaterialUseGrid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Grid Size" },
		{ "EditCondition", "bBlockoutMaterialUseGrid && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize = { "BlockoutMaterialGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialGridSize), METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Checker Luminance" },
		{ "EditCondition", "bBlockoutMaterialUseGrid && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance = { "BlockoutMaterialCheckerLuminance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialCheckerLuminance), METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Use Top Color" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bBlockoutMaterialUseTopColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor = { "bBlockoutMaterialUseTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Top Color" },
		{ "EditCondition", "bBlockoutMaterialUseTopColor && BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_Grid" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor = { "BlockoutMaterialTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutMaterialTopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "Comment", "//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Blockout Tools|Blockout Material\", DisplayName = \"Blockout Material Presets\", meta = (EditCondition = \"BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_GridPreset\"))\n//\x09\x09""FDataTableRowHandle BlockoutMaterialPresets;\n" },
		{ "DisplayName", "Use Custom Material" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Blockout Tools|Blockout Material\", DisplayName = \"Blockout Material Presets\", meta = (EditCondition = \"BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_GridPreset\"))\n       FDataTableRowHandle BlockoutMaterialPresets;" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bUseCustomMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial = { "bUseCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Custom Material" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_CustomMaterial" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial_MetaData[] = {
		{ "Category", "Blockout Tools|Blockout Material" },
		{ "DisplayName", "Custom Material" },
		{ "EditCondition", "BlockoutMaterialType == EBlockoutMaterialType::BlockoutMaterialType_CustomMaterial" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial = { "BlockoutCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutToolsParent, BlockoutCustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_MetaData[] = {
		{ "Category", "Blockout Tools|Collision" },
		{ "DisplayName", "Enable Collisions" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bBlockoutEnableCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions = { "bBlockoutEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData[] = {
		{ "Category", "Blockout Tools|Rendering" },
		{ "DisplayName", "Cast Shadows" },
		{ "ModuleRelativePath", "Private/BlockoutToolsParent.h" },
	};
#endif
	void Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit(void* Obj)
	{
		((ABlockoutToolsParent*)Obj)->bBlockoutCastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows = { "bBlockoutCastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlockoutToolsParent), &Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutGridMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCurrentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialCheckerLuminance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutMaterialUseTopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutMaterialTopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bUseCustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_CustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_BlockoutCustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutEnableCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutToolsParent_Statics::NewProp_bBlockoutCastShadows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockoutToolsParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockoutToolsParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams = {
		&ABlockoutToolsParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutToolsParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockoutToolsParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockoutToolsParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockoutToolsParent, 4088972714);
	template<> BLOCKOUTTOOLSPLUGIN_API UClass* StaticClass<ABlockoutToolsParent>()
	{
		return ABlockoutToolsParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockoutToolsParent(Z_Construct_UClass_ABlockoutToolsParent, &ABlockoutToolsParent::StaticClass, TEXT("/Script/BlockoutToolsPlugin"), TEXT("ABlockoutToolsParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockoutToolsParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
