#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Util/zzzz__GraphGizmoHelper_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Util/zzzz__IAstarPooledObject_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_MeshWithHash_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.GetSingleFrameGizmoHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphGizmoHelper* (::Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::Util::RetainedGizmos::GetSingleFrameGizmoHelper)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ee0f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetSingleFrameGizmoHelper", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.GetGizmoHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphGizmoHelper* (::Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::AstarPath*, ::GlobalNamespace::RetainedGizmos_Hasher)>(&::Pathfinding::Util::RetainedGizmos::GetGizmoHelper)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ee1090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetGizmoHelper", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.PoolMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)(::UnityEngine::Mesh*)>(&::Pathfinding::Util::RetainedGizmos::PoolMesh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ee1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"PoolMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Pathfinding::Util::RetainedGizmos::*)()>(&::Pathfinding::Util::RetainedGizmos::GetMesh)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ee1188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.HasCachedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::RetainedGizmos_Hasher)>(&::Pathfinding::Util::RetainedGizmos::HasCachedMesh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ee123c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"HasCachedMesh", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::RetainedGizmos::*)(::GlobalNamespace::RetainedGizmos_Hasher)>(&::Pathfinding::Util::RetainedGizmos::Draw)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ee100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.DrawExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)()>(&::Pathfinding::Util::RetainedGizmos::DrawExisting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ee1294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"DrawExisting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.FinalizeDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)()>(&::Pathfinding::Util::RetainedGizmos::FinalizeDraw)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5ee1354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"FinalizeDraw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.ClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)()>(&::Pathfinding::Util::RetainedGizmos::ClearCache)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ee1834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"ClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos.RemoveUnusedMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)(::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*)>(&::Pathfinding::Util::RetainedGizmos::RemoveUnusedMeshes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ee1654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"RemoveUnusedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos::*)()>(&::Pathfinding::Util::RetainedGizmos::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ee1918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>* const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_usedHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedHashes;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_usedHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedHashes;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_usedHashes(::System::Collections::Generic::HashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedHashes = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_existingHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingHashes;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_existingHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingHashes;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_existingHashes(::System::Collections::Generic::HashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___existingHashes = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_cachedMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMeshes;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>* const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_cachedMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMeshes;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_cachedMeshes(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedMeshes = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_surfaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_surfaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMaterial;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_surfaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_lineMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Pathfinding::Util::RetainedGizmos::__cordl_internal_get_lineMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMaterial;
}
constexpr void Pathfinding::Util::RetainedGizmos::__cordl_internal_set_lineMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineMaterial = value;
}
inline ::Pathfinding::Util::GraphGizmoHelper* Pathfinding::Util::RetainedGizmos::GetSingleFrameGizmoHelper(::GlobalNamespace::AstarPath*  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetSingleFrameGizmoHelper", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphGizmoHelper*>(this, ___internal_method, active);
}
inline ::Pathfinding::Util::GraphGizmoHelper* Pathfinding::Util::RetainedGizmos::GetGizmoHelper(::GlobalNamespace::AstarPath*  active, ::GlobalNamespace::RetainedGizmos_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetGizmoHelper", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphGizmoHelper*>(this, ___internal_method, active, hasher);
}
inline void Pathfinding::Util::RetainedGizmos::PoolMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"PoolMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline ::UnityW<::UnityEngine::Mesh> Pathfinding::Util::RetainedGizmos::GetMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"GetMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline bool Pathfinding::Util::RetainedGizmos::HasCachedMesh(::GlobalNamespace::RetainedGizmos_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"HasCachedMesh", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasher);
}
inline bool Pathfinding::Util::RetainedGizmos::Draw(::GlobalNamespace::RetainedGizmos_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasher);
}
inline void Pathfinding::Util::RetainedGizmos::DrawExisting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"DrawExisting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::RetainedGizmos::FinalizeDraw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"FinalizeDraw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::RetainedGizmos::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"ClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::RetainedGizmos::RemoveUnusedMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*  meshList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {"RemoveUnusedMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RetainedGizmos_MeshWithHash>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshList);
}
inline void Pathfinding::Util::RetainedGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::RetainedGizmos* Pathfinding::Util::RetainedGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::RetainedGizmos*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::RetainedGizmos::RetainedGizmos()   {
}
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::Pathfinding::Util::RetainedGizmos*, ::ArrayW<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<int32_t>*, ::ArrayW<::UnityEngine::Color>)>(&::Pathfinding::Util::RetainedGizmos_Builder::DrawMesh)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ee0c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.DrawWireCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::Pathfinding::Util::GraphTransform*, ::UnityEngine::Bounds, ::UnityEngine::Color)>(&::Pathfinding::Util::RetainedGizmos_Builder::DrawWireCube)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x5ee1ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Pathfinding::Util::RetainedGizmos_Builder::DrawLine)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ee0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.Submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::Pathfinding::Util::RetainedGizmos*, ::GlobalNamespace::RetainedGizmos_Hasher)>(&::Pathfinding::Util::RetainedGizmos_Builder::Submit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ee0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"Submit", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.SubmitMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::Pathfinding::Util::RetainedGizmos*, uint64_t)>(&::Pathfinding::Util::RetainedGizmos_Builder::SubmitMeshes)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ee2eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"SubmitMeshes", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.SubmitLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)(::Pathfinding::Util::RetainedGizmos*, uint64_t)>(&::Pathfinding::Util::RetainedGizmos_Builder::SubmitLines)> {
  constexpr static std::size_t size = 0xc48;
  constexpr static std::size_t addrs = 0x5ee226c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"SubmitLines", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder.Pathfinding_Util_IAstarPooledObject_OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)()>(&::Pathfinding::Util::RetainedGizmos_Builder::Pathfinding_Util_IAstarPooledObject_OnEnterPool)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ee3054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"Pathfinding.Util.IAstarPooledObject.OnEnterPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::RetainedGizmos_Builder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::RetainedGizmos_Builder::*)()>(&::Pathfinding::Util::RetainedGizmos_Builder::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ee3104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr void Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lines = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_lineColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineColors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* const& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_lineColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineColors;
}
constexpr void Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_set_lineColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineColors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void Pathfinding::Util::RetainedGizmos_Builder::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
inline void Pathfinding::Util::RetainedGizmos_Builder::DrawMesh(::Pathfinding::Util::RetainedGizmos*  gizmos, ::ArrayW<::UnityEngine::Vector3>  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::ArrayW<::UnityEngine::Color>  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, vertices, triangles, colors);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::DrawWireCube(::Pathfinding::Util::GraphTransform*  tr, ::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tr, bounds, color);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, color);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::Submit(::Pathfinding::Util::RetainedGizmos*  gizmos, ::GlobalNamespace::RetainedGizmos_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"Submit", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<::GlobalNamespace::RetainedGizmos_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, hasher);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::SubmitMeshes(::Pathfinding::Util::RetainedGizmos*  gizmos, uint64_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"SubmitMeshes", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, hash);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::SubmitLines(::Pathfinding::Util::RetainedGizmos*  gizmos, uint64_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"SubmitLines", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, hash);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::Pathfinding_Util_IAstarPooledObject_OnEnterPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {"Pathfinding.Util.IAstarPooledObject.OnEnterPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::RetainedGizmos_Builder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::RetainedGizmos_Builder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::RetainedGizmos_Builder* Pathfinding::Util::RetainedGizmos_Builder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::RetainedGizmos_Builder*>());
}
/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr  Pathfinding::Util::RetainedGizmos_Builder::operator ::Pathfinding::Util::IAstarPooledObject*() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* Pathfinding::Util::RetainedGizmos_Builder::i___Pathfinding__Util__IAstarPooledObject() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::RetainedGizmos_Builder::RetainedGizmos_Builder()   {
}
