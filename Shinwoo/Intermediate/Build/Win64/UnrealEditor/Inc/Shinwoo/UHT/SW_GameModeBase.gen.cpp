// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shinwoo/Public/SW_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSW_GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHINWOO_API UClass* Z_Construct_UClass_ASW_GameModeBase();
SHINWOO_API UClass* Z_Construct_UClass_ASW_GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shinwoo();
// End Cross Module References

// Begin Class ASW_GameModeBase
void ASW_GameModeBase::StaticRegisterNativesASW_GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASW_GameModeBase);
UClass* Z_Construct_UClass_ASW_GameModeBase_NoRegister()
{
	return ASW_GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASW_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SW_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/SW_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASW_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASW_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shinwoo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASW_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASW_GameModeBase_Statics::ClassParams = {
	&ASW_GameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASW_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASW_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASW_GameModeBase()
{
	if (!Z_Registration_Info_UClass_ASW_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASW_GameModeBase.OuterSingleton, Z_Construct_UClass_ASW_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASW_GameModeBase.OuterSingleton;
}
template<> SHINWOO_API UClass* StaticClass<ASW_GameModeBase>()
{
	return ASW_GameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASW_GameModeBase);
ASW_GameModeBase::~ASW_GameModeBase() {}
// End Class ASW_GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASW_GameModeBase, ASW_GameModeBase::StaticClass, TEXT("ASW_GameModeBase"), &Z_Registration_Info_UClass_ASW_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASW_GameModeBase), 2865960260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_GameModeBase_h_2518444847(TEXT("/Script/Shinwoo"),
	Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
