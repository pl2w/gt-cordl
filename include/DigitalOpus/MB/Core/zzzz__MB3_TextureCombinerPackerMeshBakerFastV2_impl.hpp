#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerFastV2.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerFastV2_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AtlasPackerRenderTextureUsingMesh_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerFastV2_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ITextureCombinerPacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::Validate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9dd8a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"Validate", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2.ConvertTexturesToReadableFormats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::ConvertTexturesToReadableFormats)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9dd8c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"ConvertTexturesToReadableFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2.CalculateAtlasRectangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::CalculateAtlasRectangles)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9dd8cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2.CreateAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::CreateAtlases)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dd8cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2.OneTimeSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, int32_t, int32_t, int32_t, int32_t, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::OneTimeSetup)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9dd8e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"OneTimeSetup", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd90f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_renderAtlasesGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderAtlasesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_renderAtlasesGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderAtlasesGO;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_set_renderAtlasesGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderAtlasesGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_cameraGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_get_cameraGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraGameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::__cordl_internal_set_cameraGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraGameObject = value;
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"Validate", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"ConvertTexturesToReadableFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, data, doMultiAtlas, LOG_LEVEL);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::OneTimeSetup(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*  atlasRenderer, ::UnityEngine::GameObject*  atlasMesh, ::UnityEngine::GameObject*  cameraGameObject, int32_t  atlasWidth, int32_t  atlasHeight, int32_t  padding, int32_t  layer, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {"OneTimeSetup", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atlasRenderer, atlasMesh, cameraGameObject, atlasWidth, atlasHeight, padding, layer, logLevel);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::operator ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::i___DigitalOpus__MB__Core__MB_ITextureCombinerPacker() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2::MB3_TextureCombinerPackerMeshBakerFastV2()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd8ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dd9164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x1100;
  constexpr static std::size_t addrs = 0x9dd9168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddb494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ddb49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddb4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_packedAtlasRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedAtlasRects;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_packedAtlasRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedAtlasRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_packedAtlasRects(::DigitalOpus::MB::Core::AtlasPackingResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packedAtlasRects = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_atlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_get_atlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::__cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlases = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6::MB3_TextureCombinerPackerMeshBakerFastV2__CreateAtlases_d__6()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd8c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dd9100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dd9104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd911c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dd9124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd915c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4::MB3_TextureCombinerPackerMeshBakerFastV2__ConvertTexturesToReadableFormats_d__4()   {
}
