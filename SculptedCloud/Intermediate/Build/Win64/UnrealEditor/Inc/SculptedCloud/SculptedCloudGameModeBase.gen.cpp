// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SculptedCloud/SculptedCloudGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSculptedCloudGameModeBase() {}
// Cross Module References
	SCULPTEDCLOUD_API UClass* Z_Construct_UClass_ASculptedCloudGameModeBase_NoRegister();
	SCULPTEDCLOUD_API UClass* Z_Construct_UClass_ASculptedCloudGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SculptedCloud();
// End Cross Module References
	void ASculptedCloudGameModeBase::StaticRegisterNativesASculptedCloudGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASculptedCloudGameModeBase);
	UClass* Z_Construct_UClass_ASculptedCloudGameModeBase_NoRegister()
	{
		return ASculptedCloudGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASculptedCloudGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SculptedCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SculptedCloudGameModeBase.h" },
		{ "ModuleRelativePath", "SculptedCloudGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASculptedCloudGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::ClassParams = {
		&ASculptedCloudGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASculptedCloudGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASculptedCloudGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASculptedCloudGameModeBase.OuterSingleton, Z_Construct_UClass_ASculptedCloudGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASculptedCloudGameModeBase.OuterSingleton;
	}
	template<> SCULPTEDCLOUD_API UClass* StaticClass<ASculptedCloudGameModeBase>()
	{
		return ASculptedCloudGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASculptedCloudGameModeBase);
	struct Z_CompiledInDeferFile_FID_SculptedCloud_Source_SculptedCloud_SculptedCloudGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SculptedCloud_Source_SculptedCloud_SculptedCloudGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASculptedCloudGameModeBase, ASculptedCloudGameModeBase::StaticClass, TEXT("ASculptedCloudGameModeBase"), &Z_Registration_Info_UClass_ASculptedCloudGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASculptedCloudGameModeBase), 3823511724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SculptedCloud_Source_SculptedCloud_SculptedCloudGameModeBase_h_1308566055(TEXT("/Script/SculptedCloud"),
		Z_CompiledInDeferFile_FID_SculptedCloud_Source_SculptedCloud_SculptedCloudGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SculptedCloud_Source_SculptedCloud_SculptedCloudGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
