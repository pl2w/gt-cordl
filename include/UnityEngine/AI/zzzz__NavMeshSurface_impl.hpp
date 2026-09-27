#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__CollectObjects_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshDataInstance_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshSurface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/AI/zzzz__CollectObjects_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSource_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshData_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshModifierVolume_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshModifier_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshSurface_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(int32_t)>(&::UnityEngine::AI::NavMeshSurface::set_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_collectObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::CollectObjects (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_collectObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_collectObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_collectObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::AI::CollectObjects)>(&::UnityEngine::AI::NavMeshSurface::set_collectObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_collectObjects", {}, {::i2c::type_of<::UnityEngine::AI::CollectObjects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshSurface::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshSurface::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_layerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::LayerMask)>(&::UnityEngine::AI::NavMeshSurface::set_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_useGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshCollectGeometry (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_useGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_useGeometry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_useGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::AI::NavMeshCollectGeometry)>(&::UnityEngine::AI::NavMeshSurface::set_useGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_useGeometry", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_defaultArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_defaultArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_defaultArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_defaultArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(int32_t)>(&::UnityEngine::AI::NavMeshSurface::set_defaultArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_defaultArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_ignoreNavMeshAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_ignoreNavMeshAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_ignoreNavMeshAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_ignoreNavMeshAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(bool)>(&::UnityEngine::AI::NavMeshSurface::set_ignoreNavMeshAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_ignoreNavMeshAgent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_ignoreNavMeshObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_ignoreNavMeshObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_ignoreNavMeshObstacle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_ignoreNavMeshObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(bool)>(&::UnityEngine::AI::NavMeshSurface::set_ignoreNavMeshObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_ignoreNavMeshObstacle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_overrideTileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_overrideTileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_overrideTileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_overrideTileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(bool)>(&::UnityEngine::AI::NavMeshSurface::set_overrideTileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_tileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_tileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_tileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(int32_t)>(&::UnityEngine::AI::NavMeshSurface::set_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_overrideVoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_overrideVoxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_overrideVoxelSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_overrideVoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(bool)>(&::UnityEngine::AI::NavMeshSurface::set_overrideVoxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_voxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_voxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_voxelSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_voxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(float_t)>(&::UnityEngine::AI::NavMeshSurface::set_voxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_buildHeightMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_buildHeightMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_buildHeightMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_buildHeightMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(bool)>(&::UnityEngine::AI::NavMeshSurface::set_buildHeightMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_navMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AI::NavMeshData> (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::get_navMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_navMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.set_navMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::AI::NavMeshData*)>(&::UnityEngine::AI::NavMeshSurface::set_navMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_navMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.get_activeSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>* (*)()>(&::UnityEngine::AI::NavMeshSurface::get_activeSurfaces)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa36b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_activeSurfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa36b888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa36bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::AddData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa36bb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"AddData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.RemoveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::RemoveData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa36bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"RemoveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.GetBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::GetBuildSettings)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa36be8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"GetBuildSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.BuildNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::BuildNavMesh)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa36bff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"BuildNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.UpdateNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::AI::NavMeshSurface::*)(::UnityEngine::AI::NavMeshData*)>(&::UnityEngine::AI::NavMeshSurface::UpdateNavMesh)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa36d2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateNavMesh", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshSurface*)>(&::UnityEngine::AI::NavMeshSurface::Register)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa36b8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshSurface*)>(&::UnityEngine::AI::NavMeshSurface::Unregister)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa36bd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.UpdateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AI::NavMeshSurface::UpdateActive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa36d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.AppendModifierVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>)>(&::UnityEngine::AI::NavMeshSurface::AppendModifierVolumes)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xa36d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"AppendModifierVolumes", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::CollectSources)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0xa36c22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"CollectSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshSurface::Abs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa36ca6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.GetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshSurface::GetWorldBounds)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa36dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"GetWorldBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.CalculateWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::AI::NavMeshSurface::*)(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::UnityEngine::AI::NavMeshSurface::CalculateWorldBounds)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0xa36ca7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.HasTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::HasTransformChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa36dcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface.UpdateDataIfTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::UpdateDataIfTransformChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa36d49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateDataIfTransformChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface::*)()>(&::UnityEngine::AI::NavMeshSurface::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa36dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_AgentTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr int32_t const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_AgentTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_AgentTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AgentTypeID = value;
}
constexpr ::UnityEngine::AI::CollectObjects& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_CollectObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectObjects;
}
constexpr ::UnityEngine::AI::CollectObjects const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_CollectObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectObjects;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_CollectObjects(::UnityEngine::AI::CollectObjects  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollectObjects = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Center = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerMask;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LayerMask = value;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_UseGeometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGeometry;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_UseGeometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGeometry;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_UseGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseGeometry = value;
}
constexpr int32_t& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_DefaultArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultArea;
}
constexpr int32_t const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_DefaultArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultArea;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_DefaultArea(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultArea = value;
}
constexpr bool& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshAgent;
}
constexpr bool const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshAgent;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_IgnoreNavMeshAgent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreNavMeshAgent = value;
}
constexpr bool& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshObstacle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshObstacle;
}
constexpr bool const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshObstacle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshObstacle;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_IgnoreNavMeshObstacle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreNavMeshObstacle = value;
}
constexpr bool& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_OverrideTileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTileSize;
}
constexpr bool const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_OverrideTileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTileSize;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_OverrideTileSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideTileSize = value;
}
constexpr int32_t& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_TileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TileSize;
}
constexpr int32_t const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_TileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TileSize;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_TileSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TileSize = value;
}
constexpr bool& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_OverrideVoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideVoxelSize;
}
constexpr bool const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_OverrideVoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideVoxelSize;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_OverrideVoxelSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideVoxelSize = value;
}
constexpr float_t& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_VoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VoxelSize;
}
constexpr float_t const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_VoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VoxelSize;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_VoxelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VoxelSize = value;
}
constexpr bool& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_BuildHeightMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildHeightMesh;
}
constexpr bool const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_BuildHeightMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildHeightMesh;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_BuildHeightMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildHeightMesh = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshData>& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_NavMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshData;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshData> const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_NavMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshData;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_NavMeshData(::UnityW<::UnityEngine::AI::NavMeshData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavMeshData = value;
}
constexpr ::UnityEngine::AI::NavMeshDataInstance& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_NavMeshDataInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshDataInstance;
}
constexpr ::UnityEngine::AI::NavMeshDataInstance const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_NavMeshDataInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshDataInstance;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_NavMeshDataInstance(::UnityEngine::AI::NavMeshDataInstance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavMeshDataInstance = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::AI::NavMeshSurface::__cordl_internal_get_m_LastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr void UnityEngine::AI::NavMeshSurface::__cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRotation = value;
}
inline void UnityEngine::AI::NavMeshSurface::setStaticF_s_NavMeshSurfaces(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>*, "s_NavMeshSurfaces", ::UnityEngine::AI::NavMeshSurface*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>* UnityEngine::AI::NavMeshSurface::getStaticF_s_NavMeshSurfaces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>*, "s_NavMeshSurfaces", ::UnityEngine::AI::NavMeshSurface*>();
}
inline int32_t UnityEngine::AI::NavMeshSurface::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AI::CollectObjects UnityEngine::AI::NavMeshSurface::get_collectObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_collectObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::CollectObjects>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_collectObjects(::UnityEngine::AI::CollectObjects  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_collectObjects", {}, {::i2c::type_of<::UnityEngine::AI::CollectObjects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshSurface::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshSurface::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_center(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::AI::NavMeshSurface::get_layerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_layerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_layerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AI::NavMeshCollectGeometry UnityEngine::AI::NavMeshSurface::get_useGeometry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_useGeometry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshCollectGeometry>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_useGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_useGeometry", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshSurface::get_defaultArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_defaultArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_defaultArea(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_defaultArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshSurface::get_ignoreNavMeshAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_ignoreNavMeshAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_ignoreNavMeshAgent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_ignoreNavMeshAgent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshSurface::get_ignoreNavMeshObstacle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_ignoreNavMeshObstacle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_ignoreNavMeshObstacle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_ignoreNavMeshObstacle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshSurface::get_overrideTileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_overrideTileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_overrideTileSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshSurface::get_tileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_tileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_tileSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshSurface::get_overrideVoxelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_overrideVoxelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_overrideVoxelSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AI::NavMeshSurface::get_voxelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_voxelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_voxelSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshSurface::get_buildHeightMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_buildHeightMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_buildHeightMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AI::NavMeshData> UnityEngine::AI::NavMeshSurface::get_navMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_navMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AI::NavMeshData>>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::set_navMeshData(::UnityEngine::AI::NavMeshData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"set_navMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>* UnityEngine::AI::NavMeshSurface::get_activeSurfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"get_activeSurfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshSurface>>*>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::AddData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"AddData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::RemoveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"RemoveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshBuildSettings UnityEngine::AI::NavMeshSurface::GetBuildSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"GetBuildSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::BuildNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"BuildNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::AI::NavMeshSurface::UpdateNavMesh(::UnityEngine::AI::NavMeshData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateNavMesh", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, data);
}
inline void UnityEngine::AI::NavMeshSurface::Register(::UnityEngine::AI::NavMeshSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, surface);
}
inline void UnityEngine::AI::NavMeshSurface::Unregister(::UnityEngine::AI::NavMeshSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, surface);
}
inline void UnityEngine::AI::NavMeshSurface::UpdateActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::AppendModifierVolumes(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"AppendModifierVolumes", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sources);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* UnityEngine::AI::NavMeshSurface::CollectSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"CollectSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshSurface::Abs(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Bounds UnityEngine::AI::NavMeshSurface::GetWorldBounds(::UnityEngine::Matrix4x4  mat, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"GetWorldBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, mat, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::AI::NavMeshSurface::CalculateWorldBounds(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, sources);
}
inline bool UnityEngine::AI::NavMeshSurface::HasTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::UpdateDataIfTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {"UpdateDataIfTransformChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshSurface* UnityEngine::AI::NavMeshSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshSurface*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshSurface::NavMeshSurface()   {
}
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshSurface___c::*)()>(&::UnityEngine::AI::NavMeshSurface___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface___c._AppendModifierVolumes_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshModifierVolume*)>(&::UnityEngine::AI::NavMeshSurface___c::_AppendModifierVolumes_b__76_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa36df48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<AppendModifierVolumes>b__76_0", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshModifierVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface___c._CollectSources_b__77_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshModifier*)>(&::UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa36df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_0", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshModifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface___c._CollectSources_b__77_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshBuildSource)>(&::UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa36df98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_1", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshSurface___c._CollectSources_b__77_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshBuildSource)>(&::UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa36e080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_2", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMeshSurface___c::setStaticF___9(::UnityEngine::AI::NavMeshSurface___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AI::NavMeshSurface___c*, "<>9", ::UnityEngine::AI::NavMeshSurface___c*>(std::forward<::UnityEngine::AI::NavMeshSurface___c*>(value));
}
inline ::UnityEngine::AI::NavMeshSurface___c* UnityEngine::AI::NavMeshSurface___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::AI::NavMeshSurface___c*, "<>9", ::UnityEngine::AI::NavMeshSurface___c*>();
}
inline void UnityEngine::AI::NavMeshSurface___c::setStaticF___9__76_0(::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*, "<>9__76_0", ::UnityEngine::AI::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* UnityEngine::AI::NavMeshSurface___c::getStaticF___9__76_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*, "<>9__76_0", ::UnityEngine::AI::NavMeshSurface___c*>();
}
inline void UnityEngine::AI::NavMeshSurface___c::setStaticF___9__77_0(::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*, "<>9__77_0", ::UnityEngine::AI::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>* UnityEngine::AI::NavMeshSurface___c::getStaticF___9__77_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*, "<>9__77_0", ::UnityEngine::AI::NavMeshSurface___c*>();
}
inline void UnityEngine::AI::NavMeshSurface___c::setStaticF___9__77_1(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__77_1", ::UnityEngine::AI::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* UnityEngine::AI::NavMeshSurface___c::getStaticF___9__77_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__77_1", ::UnityEngine::AI::NavMeshSurface___c*>();
}
inline void UnityEngine::AI::NavMeshSurface___c::setStaticF___9__77_2(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__77_2", ::UnityEngine::AI::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* UnityEngine::AI::NavMeshSurface___c::getStaticF___9__77_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__77_2", ::UnityEngine::AI::NavMeshSurface___c*>();
}
inline void UnityEngine::AI::NavMeshSurface___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshSurface___c::_AppendModifierVolumes_b__76_0(::UnityEngine::AI::NavMeshModifierVolume*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<AppendModifierVolumes>b__76_0", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshModifierVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_0(::UnityEngine::AI::NavMeshModifier*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_0", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_1(::UnityEngine::AI::NavMeshBuildSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_1", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::AI::NavMeshSurface___c::_CollectSources_b__77_2(::UnityEngine::AI::NavMeshBuildSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshSurface___c*>(),
                        {"<CollectSources>b__77_2", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::AI::NavMeshSurface___c* UnityEngine::AI::NavMeshSurface___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshSurface___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshSurface___c::NavMeshSurface___c()   {
}
