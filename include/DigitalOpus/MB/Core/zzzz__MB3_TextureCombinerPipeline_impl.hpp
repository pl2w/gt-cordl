#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_CreateAtlasForProperty_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_CreateAtlasForProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ITextureCombinerPacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline._ShouldWeCreateAtlasForThisProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, bool, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_ShouldWeCreateAtlasForThisProperty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9de0094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_ShouldWeCreateAtlasForThisProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline._DoAnySrcMatsHaveProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_DoAnySrcMatsHaveProperty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9de00d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_DoAnySrcMatsHaveProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline._CollectPropertyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_CollectPropertyNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9de010c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_CollectPropertyNames", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline._CollectPropertyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::StringW>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_CollectPropertyNames)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x9de0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.GetTextureConsideringStandardShaderKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::StringW, ::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetTextureConsideringStandardShaderKeywords)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9de04e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetTextureConsideringStandardShaderKeywords", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.__Step1_CollectDistinctMatTexturesAndUsedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::__Step1_CollectDistinctMatTexturesAndUsedObjects)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9de061c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.CalculateAllTexturesAreNullAndSameColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty> (*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CalculateAllTexturesAreNullAndSameColor)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x9de0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"CalculateAllTexturesAreNullAndSameColor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.CalculateIdealSizesForTexturesInAtlasAndPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CalculateIdealSizesForTexturesInAtlasAndPadding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9de0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.RunTexturePackerOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, bool, ::GlobalNamespace::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::RunTexturePackerOnly)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9de0d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.CreatePacker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(bool, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreatePacker)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9de1654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.__Step3_BuildAndSaveAtlasesAndStoreResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::GlobalNamespace::MB_AtlasesAndRects*, ::System::Text::StringBuilder*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::__Step3_BuildAndSaveAtlasesAndStoreResults)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9de18f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.FillAtlasPackingResultAuxillaryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::FillAtlasPackingResultAuxillaryData)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x9de0ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"FillAtlasPackingResultAuxillaryData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.FillResultAtlasesAndRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::GlobalNamespace::MB_AtlasesAndRects*, ::ArrayW<::UnityEngine::Texture2D*>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::FillResultAtlasesAndRects)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9de12ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"FillResultAtlasesAndRects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.GenerateReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GenerateReport)> {
  constexpr static std::size_t size = 0xb74;
  constexpr static std::size_t addrs = 0x9de1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.CreateTexturePacker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_TexturePacker* (*)(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreateTexturePacker)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9de2620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"CreateTexturePacker", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.GetAdjustedForScaleAndOffset2Dimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetAdjustedForScaleAndOffset2Dimensions)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x9de275c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetAdjustedForScaleAndOffset2Dimensions", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.ConvertNormalFormatFromUnity_ToStandard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::ConvertNormalFormatFromUnity_ToStandard)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9de2a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"ConvertNormalFormatFromUnity_ToStandard", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.GetMaterialScaleAndOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetMaterialScaleAndOffset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9de2b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetMaterialScaleAndOffset", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.GetSubmeshArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Mesh*, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetSubmeshArea)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9de2c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetSubmeshArea", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline.IsPowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::IsPowerOfTwo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9de2e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"IsPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de2e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::setStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL(bool  value)  {
::cordl_internals::setStaticField<bool, "USE_EXPERIMENTAL_HOIZONTALVERTICAL", ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::getStaticF_USE_EXPERIMENTAL_HOIZONTALVERTICAL()  {
return ::cordl_internals::getStaticField<bool, "USE_EXPERIMENTAL_HOIZONTALVERTICAL", ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>();
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::setStaticF_shaderTexPropertyNames(::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>, "shaderTexPropertyNames", ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(std::forward<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>>(value));
}
inline ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*> DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::getStaticF_shaderTexPropertyNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>, "shaderTexPropertyNames", ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>();
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_ShouldWeCreateAtlasForThisProperty(int32_t  propertyIndex, bool  considerNonTextureProperties, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  allTexturesAreNullAndSameColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_ShouldWeCreateAtlasForThisProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, propertyIndex, considerNonTextureProperties, allTexturesAreNullAndSameColor);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_DoAnySrcMatsHaveProperty(int32_t  propertyIndex, ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  allTexturesAreNullAndSameColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_DoAnySrcMatsHaveProperty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, propertyIndex, allTexturesAreNullAndSameColor);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_CollectPropertyNames(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_CollectPropertyNames", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, LOG_LEVEL);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"_CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, texPropertyNames, _customShaderPropNames, texPropsToIgnore, resultMaterial, LOG_LEVEL);
}
inline ::UnityW<::UnityEngine::Texture> DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetTextureConsideringStandardShaderKeywords(::StringW  shaderName, ::UnityEngine::Material*  mat, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetTextureConsideringStandardShaderKeywords", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, shaderName, mat, propertyName);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::__Step1_CollectDistinctMatTexturesAndUsedObjects(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  usedObjsToMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, data, combiner, textureEditorMethods, usedObjsToMesh, LOG_LEVEL);
}
inline ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty> DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CalculateAllTexturesAreNullAndSameColor(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"CalculateAllTexturesAreNullAndSameColor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>>(nullptr, ___internal_method, data, LOG_LEVEL);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CalculateIdealSizesForTexturesInAtlasAndPadding(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doSplitIntoMultiAtlasIfTooBig, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  texturePacker, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, data, doSplitIntoMultiAtlasIfTooBig, resultAtlasesAndRects, texturePacker, LOG_LEVEL);
}
inline ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreatePacker(bool  onlyOneTextureInAtlasReuseTextures, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  packingAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(this, ___internal_method, onlyOneTextureInAtlasReuseTextures, packingAlgorithm);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::__Step3_BuildAndSaveAtlasesAndStoreResults(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  packer, ::DigitalOpus::MB::Core::AtlasPackingResult*  atlasPackingResult, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::System::Text::StringBuilder*  report, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, result, progressInfo, data, combiner, packer, atlasPackingResult, textureEditorMethods, resultAtlasesAndRects, report, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::FillAtlasPackingResultAuxillaryData(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>  atlasPackingResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"FillAtlasPackingResultAuxillaryData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, atlasPackingResults);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::FillResultAtlasesAndRects(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::AtlasPackingResult*  atlasPackingResult, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"FillResultAtlasesAndRects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, atlasPackingResult, resultAtlasesAndRects, atlases);
}
inline ::System::Text::StringBuilder* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GenerateReport(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, data);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::CreateTexturePacker(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  _packingAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"CreateTexturePacker", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_TexturePacker*>(nullptr, ___internal_method, _packingAlgorithm);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetAdjustedForScaleAndOffset2Dimensions(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::UnityEngine::Vector2  obUVoffset, ::UnityEngine::Vector2  obUVscale, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetAdjustedForScaleAndOffset2Dimensions", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, source, obUVoffset, obUVscale, data, LOG_LEVEL);
}
inline ::UnityEngine::Color32 DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"ConvertNormalFormatFromUnity_ToStandard", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetMaterialScaleAndOffset(::UnityEngine::Material*  mat, ::StringW  propertyName, ::by_ref<::UnityEngine::Vector2>  offset, ::by_ref<::UnityEngine::Vector2>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetMaterialScaleAndOffset", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, propertyName, offset, scale);
}
inline float_t DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::GetSubmeshArea(::UnityEngine::Mesh*  m, int32_t  submeshIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"GetSubmeshArea", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, m, submeshIdx);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::IsPowerOfTwo(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {"IsPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::MB3_TextureCombinerPipeline()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9de1a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9de772c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x9e0;
  constexpr static std::size_t addrs = 0x9de7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de8208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9de8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de8248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_packer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packer;
}
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_packer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packer;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_packer(::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packer = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_atlasPackingResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPackingResult;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_atlasPackingResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPackingResult;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_atlasPackingResult(::DigitalOpus::MB::Core::AtlasPackingResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasPackingResult = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::System::Text::StringBuilder*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_report()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr ::System::Text::StringBuilder* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_report() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_report(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___report = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_resultAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get_resultAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAtlasesAndRects = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get__sw_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__2;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get__sw_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set__sw_5__2(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sw_5__2 = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get__atlases_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlases_5__3;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_get__atlases_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlases_5__3;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::__cordl_internal_set__atlases_5__3(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlases_5__3 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14::MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9de06f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9de5a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x1cac;
  constexpr static std::size_t addrs = 0x9de5a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de76e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9de76ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de7724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_usedObjsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedObjsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_get_usedObjsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedObjsToMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::__cordl_internal_set_usedObjsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedObjsToMesh = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9::MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9de0d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9de4188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x1860;
  constexpr static std::size_t addrs = 0x9de418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de59ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9de59f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de5a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11::MB3_TextureCombinerPipeline__CalculateIdealSizesForTexturesInAtlasAndPadding_d__11()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de4144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1.___Step1_CollectDistinctMatTexturesAndUsedObjects_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::*)(::DigitalOpus::MB::Core::MB_TexSet*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::___Step1_CollectDistinctMatTexturesAndUsedObjects_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9de414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*>(),
                        {"<__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB_TexSet*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_get_setOfTexs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setOfTexs;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_get_setOfTexs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setOfTexs;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_set_setOfTexs(::DigitalOpus::MB::Core::MB_TexSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setOfTexs = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::__cordl_internal_set_CS$__8__locals1(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::___Step1_CollectDistinctMatTexturesAndUsedObjects_b__0(::DigitalOpus::MB::Core::MB_TexSet*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*>(),
                        {"<__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_1::MB3_TextureCombinerPipeline___c__DisplayClass9_1()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0::MB3_TextureCombinerPipeline___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9de04dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0.__CollectPropertyNames_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__CollectPropertyNames_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9de40c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*>(),
                        {"<_CollectPropertyNames>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get_texPropertyNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get_texPropertyNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_set_texPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropertyNames = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__cordl_internal_set___9__0(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::__CollectPropertyNames_b__0(::DigitalOpus::MB::Core::ShaderTextureProperty*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*>(),
                        {"<_CollectPropertyNames>b__0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass7_0::MB3_TextureCombinerPipeline___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData.get_numAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::get_numAtlases)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9de25d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {"get_numAtlases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData.OnlyOneTextureInAtlasReuseTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::OnlyOneTextureInAtlasReuseTextures)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9de3f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {"OnlyOneTextureInAtlasReuseTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9de4018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__textureBakeResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__textureBakeResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureBakeResults = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__atlasPadding_pix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding_pix;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__atlasPadding_pix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding_pix;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__atlasPadding_pix(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasPadding_pix = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxAtlasWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidth;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxAtlasWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidth;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__maxAtlasWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasWidth = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxAtlasHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeight;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxAtlasHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeight;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__maxAtlasHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasHeight = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__useMaxAtlasHeightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__useMaxAtlasHeightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__useMaxAtlasHeightOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasHeightOverride = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__useMaxAtlasWidthOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__useMaxAtlasWidthOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__useMaxAtlasWidthOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasWidthOverride = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__resizePowerOfTwoTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__resizePowerOfTwoTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__resizePowerOfTwoTextures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resizePowerOfTwoTextures = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixOutOfBoundsUVs = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxTilingBakeSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__maxTilingBakeSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__maxTilingBakeSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTilingBakeSize = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAtlasesAsAssets;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAtlasesAsAssets;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saveAtlasesAsAssets = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__packingAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__packingAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packingAlgorithm = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__layerTexturePackerFastV2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastV2;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__layerTexturePackerFastV2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastV2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__layerTexturePackerFastV2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerTexturePackerFastV2 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshBakerTexturePackerForcePowerOfTwo = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__customShaderPropNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__customShaderPropNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customShaderPropNames = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__normalizeTexelDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeTexelDensity;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__normalizeTexelDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeTexelDensity;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__normalizeTexelDensity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalizeTexelDensity = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get__considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set__considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____considerNonTextureProperties = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize = value;
}
constexpr ::UnityEngine::ColorSpace& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_colorSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr ::UnityEngine::ColorSpace const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_colorSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_colorSpace(::UnityEngine::ColorSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSpace = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_nonTexturePropertyBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonTexturePropertyBlender;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_nonTexturePropertyBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonTexturePropertyBlender;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_nonTexturePropertyBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonTexturePropertyBlender = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_distinctMaterialTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinctMaterialTextures;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_distinctMaterialTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinctMaterialTextures;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_distinctMaterialTextures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distinctMaterialTextures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allObjsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allObjsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjsToMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_allObjsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allObjsToMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allowedMaterialsFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allowedMaterialsFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedMaterialsFilter = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_texPropertyNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_texPropertyNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyNames;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_texPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropertyNames = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_texPropNamesToIgnore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropNamesToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_texPropNamesToIgnore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropNamesToIgnore;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_texPropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropNamesToIgnore = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allTexturesAreNullAndSameColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTexturesAreNullAndSameColor;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty> const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_allTexturesAreNullAndSameColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTexturesAreNullAndSameColor;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_allTexturesAreNullAndSameColor(::ArrayW<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allTexturesAreNullAndSameColor = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_resultType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultType;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_resultType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultType;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultType = value;
}
constexpr ::UnityW<::UnityEngine::Material>& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_resultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_get_resultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::__cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterial = value;
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::get_numAtlases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {"get_numAtlases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::OnlyOneTextureInAtlasReuseTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {"OnlyOneTextureInAtlasReuseTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData::MB3_TextureCombinerPipeline_TexturePipelineData()   {
}
