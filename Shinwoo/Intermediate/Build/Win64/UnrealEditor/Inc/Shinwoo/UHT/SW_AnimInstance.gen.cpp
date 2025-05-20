// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shinwoo/Public/SW_AnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSW_AnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
SHINWOO_API UClass* Z_Construct_UClass_USW_AnimInstance();
SHINWOO_API UClass* Z_Construct_UClass_USW_AnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shinwoo();
// End Cross Module References

// Begin Class USW_AnimInstance
void USW_AnimInstance::StaticRegisterNativesUSW_AnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USW_AnimInstance);
UClass* Z_Construct_UClass_USW_AnimInstance_NoRegister()
{
	return USW_AnimInstance::StaticClass();
}
struct Z_Construct_UClass_USW_AnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SW_AnimInstance.h" },
		{ "ModuleRelativePath", "Public/SW_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "pawn" },
		{ "ModuleRelativePath", "Public/SW_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isFalling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "pawn" },
		{ "ModuleRelativePath", "Public/SW_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimMontate" },
		{ "ModuleRelativePath", "Public/SW_AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimMontate" },
		{ "ModuleRelativePath", "Public/SW_AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static void NewProp__isFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USW_AnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USW_AnimInstance, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
void Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__isFalling_SetBit(void* Obj)
{
	((USW_AnimInstance*)Obj)->_isFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__isFalling = { "_isFalling", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USW_AnimInstance), &Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__isFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isFalling_MetaData), NewProp__isFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USW_AnimInstance, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USW_AnimInstance, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USW_AnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__isFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USW_AnimInstance_Statics::NewProp__horizontal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USW_AnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USW_AnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Shinwoo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USW_AnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USW_AnimInstance_Statics::ClassParams = {
	&USW_AnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USW_AnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USW_AnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USW_AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USW_AnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USW_AnimInstance()
{
	if (!Z_Registration_Info_UClass_USW_AnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USW_AnimInstance.OuterSingleton, Z_Construct_UClass_USW_AnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USW_AnimInstance.OuterSingleton;
}
template<> SHINWOO_API UClass* StaticClass<USW_AnimInstance>()
{
	return USW_AnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USW_AnimInstance);
USW_AnimInstance::~USW_AnimInstance() {}
// End Class USW_AnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USW_AnimInstance, USW_AnimInstance::StaticClass, TEXT("USW_AnimInstance"), &Z_Registration_Info_UClass_USW_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USW_AnimInstance), 4284102007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AnimInstance_h_214677971(TEXT("/Script/Shinwoo"),
	Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SW_Portfolio_Shinwoo_Source_Shinwoo_Public_SW_AnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
