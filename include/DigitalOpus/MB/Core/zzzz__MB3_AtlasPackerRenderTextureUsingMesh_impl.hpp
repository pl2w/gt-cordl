#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_AtlasPackerRenderTextureUsingMesh.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AtlasPackerRenderTextureUsingMesh_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_AtlasPackerRenderTextureUsingMesh_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::*)(int32_t, int32_t, int32_t, int32_t, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dd8f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh.SetupCameraGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::SetupCameraGameObject)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9dd8f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"SetupCameraGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh.DoRenderAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::*)(::UnityEngine::GameObject*, int32_t, int32_t, bool, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::DoRenderAtlas)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x9ddae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"DoRenderAtlas", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::*)()>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dda268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_camMaskLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camMaskLayer;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_camMaskLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camMaskLayer;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set_camMaskLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camMaskLayer = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set_padding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___padding = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get__camSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camSetup;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_get__camSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camSetup;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::__cordl_internal_set__camSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camSetup = value;
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::Initialize(int32_t  camMaskLayer, int32_t  width, int32_t  height, int32_t  padding, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camMaskLayer, width, height, padding, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::SetupCameraGameObject(::UnityEngine::GameObject*  camGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"SetupCameraGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camGameObject);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::DoRenderAtlas(::UnityEngine::GameObject*  go, int32_t  width, int32_t  height, bool  isNormalMap, ::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {"DoRenderAtlas", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, go, width, height, isNormalMap, propertyName);
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh* DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh::MB3_AtlasPackerRenderTextureUsingMesh()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas.BuildAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t, int32_t, int32_t, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::BuildAtlas)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x9dda278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"BuildAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas.ConfigureMaterial_DefaultPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Texture2D*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::ConfigureMaterial_DefaultPipeline)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9ddb7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"ConfigureMaterial_DefaultPipeline", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas.AddQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::AddQuad)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x9ddb940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas.AddNineSlicedRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, float_t, float_t, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*, float_t, float_t, ::StringW)>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::AddNineSlicedRect)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x9ddb4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"AddNineSlicedRect", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::*)()>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::BuildAtlas(::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures, int32_t  propIdx, int32_t  atlasSizeX, int32_t  atlasSizeY, ::UnityEngine::Mesh*  m, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  generatedMats, ::DigitalOpus::MB::Core::ShaderTextureProperty*  property, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"BuildAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packedAtlasRects, distinctMaterialTextures, propIdx, atlasSizeX, atlasSizeY, m, generatedMats, property, data, combiner, textureEditorMethods, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::ConfigureMaterial_DefaultPipeline(::UnityEngine::Material*  mt, ::UnityEngine::Texture2D*  t, bool  isSavingAsANormalMapAssetThatWillBeImported, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"ConfigureMaterial_DefaultPipeline", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mt, t, isSavingAsANormalMapAssetThatWillBeImported, LOG_LEVEL);
}
inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::AddQuad(::UnityEngine::Rect  wldRect, ::UnityEngine::Rect  uvRect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<int32_t>*  tris)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*>(nullptr, ___internal_method, wldRect, uvRect, verts, uvs, tris);
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::AddNineSlicedRect(::UnityEngine::Rect  atlasRectRaw, float_t  paddingX, float_t  paddingY, ::UnityEngine::Rect  srcUVRectt, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<int32_t>*  tris, float_t  srcTexWidth, float_t  srcTexHeight, ::StringW  texName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {"AddNineSlicedRect", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, atlasRectRaw, paddingX, paddingY, srcUVRectt, verts, uvs, tris, srcTexWidth, srcTexHeight, texName);
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas* DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::*)()>(&::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddb4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_vertIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_vertIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_set_vertIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertIdx = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_triIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_triIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_set_triIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triIdx = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_atlasIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_get_atlasIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::__cordl_internal_set_atlasIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasIdx = value;
}
inline void DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo()   {
}
