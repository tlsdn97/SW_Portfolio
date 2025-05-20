// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shinwoo/Public/SW_AIGhost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSW_AIGhost() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SHINWOO_API UClass* Z_Construct_UClass_ASW_AIGhost();
SHINWOO_API UClass* Z_Construct_UClass_ASW_AIGhost_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shinwoo();
// End Cross Module References

// Begin Class ASW_AIGhost
void ASW_AIGhost::StaticRegisterNativesASW_AIGhost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASW_AIGhost);
UClass* Z_Construct_UClass_ASW_AIGhost_NoRegister()
{
	return ASW_AIGhost::StaticClass();
}
struct Z_Construct_UClass_ASW_AIGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SW_AIGhost.h" },
		{ "ModuleRelativePath", "Public/SW_AIGhost.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASW_AIGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASW_AIGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Shinwoo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASW_AIGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASW_AIGhost_Statics::ClassParams = {
	&ASW_AIGhost::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASW_AIGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_ASW_AIGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASW_AIGhost()
{
	if (!Z_Registration_Info_UClass_ASW_AIGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASW_AIGhost.OuterSingleton, Z_Construct_UClass_ASW_AIGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASW_AIGhost.OuterSingleton;
}
template<> SHINWOO_API UClass* StaticClass<ASW_AIGhost>()
{
	return ASW_AIGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASW_AIGhost);
ASW_AIGhost::~ASW_AIGhost() {}
// End Class ASW_AIGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AIGhost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASW_AIGhost, ASW_AIGhost::StaticClass, TEXT("ASW_AIGhost"), &Z_Registration_Info_UClass_ASW_AIGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASW_AIGhost), 56839258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AIGhost_h_3998669537(TEXT("/Script/Shinwoo"),
	Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AIGhost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AIGhost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
