#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/UnpackedMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__UnpackedMesh_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_SkinnedRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_SkinnedRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_SkinnedRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_Mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd63d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_Mesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_ModelSpaceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_ModelSpaceTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadd63e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_ModelSpaceTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_RawVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_RawVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd647c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_RawVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_ModelSpaceVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_ModelSpaceVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd6484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_ModelSpaceVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_BoneWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_BoneWeights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_BoneWeights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_NumVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_NumVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadd6494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_NumVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.get_Indices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Technie::PhysicsCreator::UnpackedMesh::*)()>(&::Technie::PhysicsCreator::UnpackedMesh::get_Indices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd64ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_Indices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::UnpackedMesh* (*)(::UnityEngine::Renderer*)>(&::Technie::PhysicsCreator::UnpackedMesh::Create)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xadd64b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::UnpackedMesh::*)(::UnityEngine::MeshRenderer*)>(&::Technie::PhysicsCreator::UnpackedMesh::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xadd6864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::UnpackedMesh::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Technie::PhysicsCreator::UnpackedMesh::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xadd6620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::UnpackedMesh.ApplyBindPoseWeighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::BoneWeight, ::ArrayW<::UnityEngine::Matrix4x4>, ::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::Transform*)>(&::Technie::PhysicsCreator::UnpackedMesh::ApplyBindPoseWeighted)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xadd6a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"ApplyBindPoseWeighted", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::BoneWeight>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_rigidRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_rigidRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidRenderer;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_rigidRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidRenderer = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_skinnedRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_skinnedRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedRenderer;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_skinnedRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_srcMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_srcMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcMesh;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_srcMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcMesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_weights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_weights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weights;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_weights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weights = value;
}
constexpr ::ArrayW<int32_t>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_indices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indices;
}
constexpr ::ArrayW<int32_t> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_indices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indices;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_indices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_modelSpaceVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelSpaceVertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_get_modelSpaceVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelSpaceVertices;
}
constexpr void Technie::PhysicsCreator::UnpackedMesh::__cordl_internal_set_modelSpaceVertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelSpaceVertices = value;
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> Technie::PhysicsCreator::UnpackedMesh::get_SkinnedRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_SkinnedRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::UnpackedMesh::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_Mesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Technie::PhysicsCreator::UnpackedMesh::get_ModelSpaceTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_ModelSpaceTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::UnpackedMesh::get_RawVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_RawVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::UnpackedMesh::get_ModelSpaceVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_ModelSpaceVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::BoneWeight> Technie::PhysicsCreator::UnpackedMesh::get_BoneWeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_BoneWeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::UnpackedMesh::get_NumVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_NumVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Technie::PhysicsCreator::UnpackedMesh::get_Indices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"get_Indices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::UnpackedMesh* Technie::PhysicsCreator::UnpackedMesh::Create(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::UnpackedMesh*>(nullptr, ___internal_method, renderer);
}
inline void Technie::PhysicsCreator::UnpackedMesh::_ctor(::UnityEngine::MeshRenderer*  rigidRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidRenderer);
}
inline void Technie::PhysicsCreator::UnpackedMesh::_ctor(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skinnedRenderer);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::UnpackedMesh::ApplyBindPoseWeighted(::UnityEngine::Vector3  inputVertex, ::UnityEngine::BoneWeight  weight, ::ArrayW<::UnityEngine::Matrix4x4>  bindPoses, ::ArrayW<::UnityEngine::Transform*>  bones, ::UnityEngine::Transform*  outputLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::UnpackedMesh*>(),
                        {"ApplyBindPoseWeighted", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::BoneWeight>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, inputVertex, weight, bindPoses, bones, outputLocalSpace);
}
inline ::Technie::PhysicsCreator::UnpackedMesh* Technie::PhysicsCreator::UnpackedMesh::New_ctor(::UnityEngine::MeshRenderer*  rigidRenderer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::UnpackedMesh*>(rigidRenderer));
}
inline ::Technie::PhysicsCreator::UnpackedMesh* Technie::PhysicsCreator::UnpackedMesh::New_ctor(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::UnpackedMesh*>(skinnedRenderer));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::UnpackedMesh::UnpackedMesh()   {
}
