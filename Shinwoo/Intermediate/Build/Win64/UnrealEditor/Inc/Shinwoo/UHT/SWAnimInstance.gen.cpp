// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shinwoo/Public/SWAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
SHINWOO_API UClass* Z_Construct_UClass_USWAnimInstance();
SHINWOO_API UClass* Z_Construct_UClass_USWAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shinwoo();
// End Cross Module References

// Begin Class USWAnimInstance
void USWAnimInstance::StaticRegisterNativesUSWAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USWAnimInstance);
UClass* Z_Construct_UClass_USWAnimInstance_NoRegister()
{
	return USWAnimInstance::StaticClass();
}
struct Z_Construct_UClass_USWAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SWAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SWAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USWAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USWAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Shinwoo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USWAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USWAnimInstance_Statics::ClassParams = {
	&USWAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USWAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USWAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USWAnimInstance()
{
	if (!Z_Registration_Info_UClass_USWAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USWAnimInstance.OuterSingleton, Z_Construct_UClass_USWAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USWAnimInstance.OuterSingleton;
}
template<> SHINWOO_API UClass* StaticClass<USWAnimInstance>()
{
	return USWAnimInstance::StaticClass();
}
USWAnimInstance::USWAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USWAnimInstance);
USWAnimInstance::~USWAnimInstance() {}
// End Class USWAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SWAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USWAnimInstance, USWAnimInstance::StaticClass, TEXT("USWAnimInstance"), &Z_Registration_Info_UClass_USWAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USWAnimInstance), 2029399782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SWAnimInstance_h_3694121592(TEXT("/Script/Shinwoo"),
	Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SWAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SWAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
