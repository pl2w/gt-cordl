#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureArrays.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureArrays_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureArrays_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_def.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySliceRendererMatPair_def.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySlice_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayResultMaterial_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays.DetermineWhichPropertiesHaveTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>)>(&::DigitalOpus::MB::Core::MB_TextureArrays::DetermineWhichPropertiesHaveTextures)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9de8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"DetermineWhichPropertiesHaveTextures", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays.IsLinearProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::StringW)>(&::DigitalOpus::MB::Core::MB_TextureArrays::IsLinearProperty)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9de83d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"IsLinearProperty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays.CreateTextureArraysForResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2DArray>> (*)(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>, ::ArrayW<bool>, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB_TextureArrays::CreateTextureArraysForResultMaterial)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x9de84ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"CreateTextureArraysForResultMaterial", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays.ConvertTexturesToReadableFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>, ::ArrayW<bool>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB_TextureArrays::ConvertTexturesToReadableFormat)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x9de8da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"ConvertTexturesToReadableFormat", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays.FindBestSizeAndMipCountAndFormatForTextureArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, int32_t, ::GlobalNamespace::MB_TextureArrayFormatSet*, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>, ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*)>(&::DigitalOpus::MB::Core::MB_TextureArrays::FindBestSizeAndMipCountAndFormatForTextureArrays)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x9de9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"FindBestSizeAndMipCountAndFormatForTextureArrays", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays._CreateAtlasesCoroutineSingleResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(int32_t, ::GlobalNamespace::MB_TextureArrayResultMaterial*, ::GlobalNamespace::MB_MultiMaterialTexArray*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>, ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::StringW>*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, float_t)>(&::DigitalOpus::MB::Core::MB_TextureArrays::_CreateAtlasesCoroutineSingleResultMaterial)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9de9e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"_CreateAtlasesCoroutineSingleResultMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MB_TextureArrayResultMaterial*>(), ::i2c::type_of<::GlobalNamespace::MB_MultiMaterialTexArray*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TextureArrays::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dea028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<bool> DigitalOpus::MB::Core::MB_TextureArrays::DetermineWhichPropertiesHaveTextures(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"DetermineWhichPropertiesHaveTextures", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, resultAtlasesAndRectSlices);
}
inline bool DigitalOpus::MB::Core::MB_TextureArrays::IsLinearProperty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  shaderPropertyNames, ::StringW  shaderProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"IsLinearProperty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shaderPropertyNames, shaderProperty);
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2DArray>> DigitalOpus::MB::Core::MB_TextureArrays::CreateTextureArraysForResultMaterial(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texPropertyData, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  masterListOfTexProperties, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::ArrayW<bool>  hasTexForProperty, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"CreateTextureArraysForResultMaterial", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2DArray>>>(nullptr, ___internal_method, texPropertyData, masterListOfTexProperties, resultAtlasesAndRectSlices, hasTexForProperty, combiner, LOG_LEVEL);
}
inline bool DigitalOpus::MB::Core::MB_TextureArrays::ConvertTexturesToReadableFormat(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texturePropertyData, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::ArrayW<bool>  hasTexForProperty, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  textureShaderProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  createdTemporaryTextureAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"ConvertTexturesToReadableFormat", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, texturePropertyData, resultAtlasesAndRectSlices, hasTexForProperty, textureShaderProperties, combiner, logLevel, createdTemporaryTextureAssets, textureEditorMethods);
}
inline void DigitalOpus::MB::Core::MB_TextureArrays::FindBestSizeAndMipCountAndFormatForTextureArrays(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, int32_t  maxAtlasSize, ::GlobalNamespace::MB_TextureArrayFormatSet*  targetFormatSet, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texturePropertyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"FindBestSizeAndMipCountAndFormatForTextureArrays", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MB_TextureArrayFormatSet*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texPropertyNames, maxAtlasSize, targetFormatSet, resultAtlasesAndRectSlices, texturePropertyData);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB_TextureArrays::_CreateAtlasesCoroutineSingleResultMaterial(int32_t  resMatIdx, ::GlobalNamespace::MB_TextureArrayResultMaterial*  bakedMatsAndSlicesResMat, ::GlobalNamespace::MB_MultiMaterialTexArray*  resMatConfig, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  textureArrayOutputFormats, ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  resultMaterialsTexArray, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  customShaderProperties, ::System::Collections::Generic::List_1<::StringW>*  texPropNamesToIgnore, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {"_CreateAtlasesCoroutineSingleResultMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MB_TextureArrayResultMaterial*>(), ::i2c::type_of<::GlobalNamespace::MB_MultiMaterialTexArray*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, resMatIdx, bakedMatsAndSlicesResMat, resMatConfig, objsToMesh, combiner, textureArrayOutputFormats, resultMaterialsTexArray, customShaderProperties, texPropNamesToIgnore, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
}
inline void DigitalOpus::MB::Core::MB_TextureArrays::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_TextureArrays* DigitalOpus::MB::Core::MB_TextureArrays::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TextureArrays*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureArrays::MB_TextureArrays()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)(int32_t)>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dea000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dea038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x1c04;
  constexpr static std::size_t addrs = 0x9dea03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9debc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9debc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9debc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_resMatIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resMatIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_resMatIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resMatIdx;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_resMatIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resMatIdx = value;
}
constexpr ::GlobalNamespace::MB_MultiMaterialTexArray*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_resMatConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resMatConfig;
}
constexpr ::GlobalNamespace::MB_MultiMaterialTexArray* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_resMatConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resMatConfig;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_resMatConfig(::GlobalNamespace::MB_MultiMaterialTexArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resMatConfig = value;
}
constexpr ::GlobalNamespace::MB_TextureArrayResultMaterial*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_bakedMatsAndSlicesResMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMatsAndSlicesResMat;
}
constexpr ::GlobalNamespace::MB_TextureArrayResultMaterial* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_bakedMatsAndSlicesResMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMatsAndSlicesResMat;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_bakedMatsAndSlicesResMat(::GlobalNamespace::MB_TextureArrayResultMaterial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedMatsAndSlicesResMat = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_objsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_objsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_texPropNamesToIgnore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropNamesToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_texPropNamesToIgnore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropNamesToIgnore;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_texPropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropNamesToIgnore = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_editorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_editorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorMethods = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr bool& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr bool const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAtlasesAsAssets = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_customShaderProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customShaderProperties;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_customShaderProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customShaderProperties;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customShaderProperties = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_textureArrayOutputFormats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArrayOutputFormats;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*> const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get_textureArrayOutputFormats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArrayOutputFormats;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set_textureArrayOutputFormats(::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureArrayOutputFormats = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__LOG_LEVEL_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LOG_LEVEL_5__2;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__LOG_LEVEL_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LOG_LEVEL_5__2;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__LOG_LEVEL_5__2(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LOG_LEVEL_5__2 = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__generatedTemporaryAtlases_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generatedTemporaryAtlases_5__3;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__generatedTemporaryAtlases_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generatedTemporaryAtlases_5__3;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__generatedTemporaryAtlases_5__3(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____generatedTemporaryAtlases_5__3 = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__slicesConfig_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slicesConfig_5__4;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__slicesConfig_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slicesConfig_5__4;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__slicesConfig_5__4(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slicesConfig_5__4 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__sliceIdx_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceIdx_5__5;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__sliceIdx_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceIdx_5__5;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__sliceIdx_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sliceIdx_5__5 = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__srcMatAndObjPairs_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMatAndObjPairs_5__6;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__srcMatAndObjPairs_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMatAndObjPairs_5__6;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__srcMatAndObjPairs_5__6(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcMatAndObjPairs_5__6 = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__coroutineResult2_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult2_5__7;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__coroutineResult2_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult2_5__7;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__coroutineResult2_5__7(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutineResult2_5__7 = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__sliceAtlasesAndRectOutput_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceAtlasesAndRectOutput_5__8;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_get__sliceAtlasesAndRectOutput_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceAtlasesAndRectOutput_5__8;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::__cordl_internal_set__sliceAtlasesAndRectOutput_5__8(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sliceAtlasesAndRectOutput_5__8 = value;
}
inline void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::*)()>(&::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dea030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_doMips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMips;
}
constexpr ::ArrayW<bool> const& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_doMips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doMips;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_set_doMips(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doMips = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_numMipMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMipMaps;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_numMipMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMipMaps;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_set_numMipMaps(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numMipMaps = value;
}
constexpr ::ArrayW<::UnityEngine::TextureFormat>& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_formats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr ::ArrayW<::UnityEngine::TextureFormat> const& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_formats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_set_formats(::ArrayW<::UnityEngine::TextureFormat>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formats = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_compressionQualities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQualities;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality> const& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_compressionQualities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQualities;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_set_compressionQualities(::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionQualities = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_sizes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizes;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_get_sizes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizes;
}
constexpr void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::__cordl_internal_set_sizes(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizes = value;
}
inline void DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData* DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData::MB_TextureArrays_TexturePropertyData()   {
}
