// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task6/Public/Actor_1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor_1() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TASK6_API UClass* Z_Construct_UClass_AActor_1();
TASK6_API UClass* Z_Construct_UClass_AActor_1_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task6();
// End Cross Module References

// Begin Class AActor_1
void AActor_1::StaticRegisterNativesAActor_1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActor_1);
UClass* Z_Construct_UClass_AActor_1_NoRegister()
{
	return AActor_1::StaticClass();
}
struct Z_Construct_UClass_AActor_1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor_1.h" },
		{ "ModuleRelativePath", "Public/Actor_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Actor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Actor|Properties" },
		{ "ModuleRelativePath", "Public/Actor_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Actor|Properties" },
		{ "ModuleRelativePath", "Public/Actor_1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor_1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor_1_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor_1, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActor_1_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor_1, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor_1_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor_1, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_1_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_1_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor_1_Statics::NewProp_StartLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActor_1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActor_1_Statics::ClassParams = {
	&AActor_1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActor_1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActor_1_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActor_1_Statics::Class_MetaDataParams), Z_Construct_UClass_AActor_1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActor_1()
{
	if (!Z_Registration_Info_UClass_AActor_1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActor_1.OuterSingleton, Z_Construct_UClass_AActor_1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActor_1.OuterSingleton;
}
template<> TASK6_API UClass* StaticClass<AActor_1>()
{
	return AActor_1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActor_1);
AActor_1::~AActor_1() {}
// End Class AActor_1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Platform_Task6_Source_Task6_Public_Actor_1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActor_1, AActor_1::StaticClass, TEXT("AActor_1"), &Z_Registration_Info_UClass_AActor_1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActor_1), 3183992483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Platform_Task6_Source_Task6_Public_Actor_1_h_214606395(TEXT("/Script/Task6"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Platform_Task6_Source_Task6_Public_Actor_1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Platform_Task6_Source_Task6_Public_Actor_1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
