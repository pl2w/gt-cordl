#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshDataInstance_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshSurface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_def.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshModifierVolume_def.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshModifier_def.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshSurface_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildMarkup_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSource_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshDataInstance_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshData_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae745e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshSurface::set_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae745ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_collectObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::AI::Navigation::CollectObjects (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_collectObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae745f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_collectObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_collectObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::Unity::AI::Navigation::CollectObjects)>(&::Unity::AI::Navigation::NavMeshSurface::set_collectObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae745fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_collectObjects", {}, {::i2c::type_of<::Unity::AI::Navigation::CollectObjects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae74604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshSurface::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae74610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae7461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshSurface::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae74628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_layerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::LayerMask)>(&::Unity::AI::Navigation::NavMeshSurface::set_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_useGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshCollectGeometry (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_useGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_useGeometry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_useGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::AI::NavMeshCollectGeometry)>(&::Unity::AI::Navigation::NavMeshSurface::set_useGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_useGeometry", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_defaultArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_defaultArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_defaultArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_defaultArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshSurface::set_defaultArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7465c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_defaultArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_ignoreNavMeshAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_ignoreNavMeshAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_ignoreNavMeshAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_ignoreNavMeshAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(bool)>(&::Unity::AI::Navigation::NavMeshSurface::set_ignoreNavMeshAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7466c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_ignoreNavMeshAgent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_ignoreNavMeshObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_ignoreNavMeshObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_ignoreNavMeshObstacle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_ignoreNavMeshObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(bool)>(&::Unity::AI::Navigation::NavMeshSurface::set_ignoreNavMeshObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_ignoreNavMeshObstacle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_overrideTileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_overrideTileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_overrideTileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_overrideTileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(bool)>(&::Unity::AI::Navigation::NavMeshSurface::set_overrideTileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_tileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_tileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_tileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshSurface::set_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7469c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_overrideVoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_overrideVoxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_overrideVoxelSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_overrideVoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(bool)>(&::Unity::AI::Navigation::NavMeshSurface::set_overrideVoxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_voxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_voxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_voxelSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_voxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(float_t)>(&::Unity::AI::Navigation::NavMeshSurface::set_voxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_minRegionArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_minRegionArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_minRegionArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_minRegionArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(float_t)>(&::Unity::AI::Navigation::NavMeshSurface::set_minRegionArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_minRegionArea", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_buildHeightMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_buildHeightMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_buildHeightMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_buildHeightMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(bool)>(&::Unity::AI::Navigation::NavMeshSurface::set_buildHeightMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_navMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AI::NavMeshData> (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_navMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_navMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.set_navMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::AI::NavMeshData*)>(&::Unity::AI::Navigation::NavMeshSurface::set_navMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_navMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_navMeshDataInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshDataInstance (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_navMeshDataInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae746f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_navMeshDataInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.get_activeSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>* (*)()>(&::Unity::AI::Navigation::NavMeshSurface::get_activeSurfaces)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae746fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_activeSurfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.GetInflatedBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::GetInflatedBounds)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae74754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetInflatedBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.ClearNavMeshSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::AI::Navigation::NavMeshSurface::ClearNavMeshSurfaces)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xae74814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"ClearNavMeshSurfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae748ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae74ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::AddData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xae74b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"AddData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.RemoveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::RemoveData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae74d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"RemoveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.GetBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::GetBuildSettings)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xae74eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetBuildSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.BuildNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::BuildNavMesh)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xae7503c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"BuildNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.UpdateNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::AI::NavMeshData*)>(&::Unity::AI::Navigation::NavMeshSurface::UpdateNavMesh)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xae76328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateNavMesh", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::AI::Navigation::NavMeshSurface*)>(&::Unity::AI::Navigation::NavMeshSurface::Register)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xae74908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Register", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::AI::Navigation::NavMeshSurface*)>(&::Unity::AI::Navigation::NavMeshSurface::Unregister)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae74d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Unregister", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.UpdateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::AI::Navigation::NavMeshSurface::UpdateActive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xae76438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.AppendModifierVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>)>(&::Unity::AI::Navigation::NavMeshSurface::AppendModifierVolumes)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xae76538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"AppendModifierVolumes", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::CollectSources)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0xae7526c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshSurface::Abs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae75adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.GetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds)>(&::Unity::AI::Navigation::NavMeshSurface::GetWorldBounds)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xae76b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetWorldBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.CalculateWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::AI::Navigation::NavMeshSurface::*)(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::Unity::AI::Navigation::NavMeshSurface::CalculateWorldBounds)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0xae75aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.HasTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::HasTransformChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae76d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.UpdateDataIfTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::UpdateDataIfTransformChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae76504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateDataIfTransformChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.CollectSourcesInVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::Bounds, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::Unity::AI::Navigation::NavMeshSurface::CollectSourcesInVolume)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xae76d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSourcesInVolume", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface.CollectSourcesInHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)(::UnityEngine::Transform*, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::Unity::AI::Navigation::NavMeshSurface::CollectSourcesInHierarchy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xae76b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSourcesInHierarchy", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface::*)()>(&::Unity::AI::Navigation::NavMeshSurface::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xae76e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_SerializedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr uint8_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_SerializedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_SerializedVersion(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SerializedVersion = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_AgentTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_AgentTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AgentTypeID;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_AgentTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AgentTypeID = value;
}
constexpr ::Unity::AI::Navigation::CollectObjects& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_CollectObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectObjects;
}
constexpr ::Unity::AI::Navigation::CollectObjects const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_CollectObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectObjects;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_CollectObjects(::Unity::AI::Navigation::CollectObjects  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollectObjects = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Center = value;
}
constexpr ::UnityEngine::LayerMask& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerMask;
}
constexpr ::UnityEngine::LayerMask const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LayerMask;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LayerMask = value;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_UseGeometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGeometry;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_UseGeometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGeometry;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_UseGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseGeometry = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_DefaultArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultArea;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_DefaultArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultArea;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_DefaultArea(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultArea = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_GenerateLinks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GenerateLinks;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_GenerateLinks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GenerateLinks;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_GenerateLinks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GenerateLinks = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshAgent;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshAgent;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_IgnoreNavMeshAgent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreNavMeshAgent = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshObstacle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshObstacle;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_IgnoreNavMeshObstacle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreNavMeshObstacle;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_IgnoreNavMeshObstacle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreNavMeshObstacle = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_OverrideTileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTileSize;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_OverrideTileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTileSize;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_OverrideTileSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideTileSize = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_TileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TileSize;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_TileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TileSize;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_TileSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TileSize = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_OverrideVoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideVoxelSize;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_OverrideVoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideVoxelSize;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_OverrideVoxelSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideVoxelSize = value;
}
constexpr float_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_VoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VoxelSize;
}
constexpr float_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_VoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VoxelSize;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_VoxelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VoxelSize = value;
}
constexpr float_t& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_MinRegionArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinRegionArea;
}
constexpr float_t const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_MinRegionArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinRegionArea;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_MinRegionArea(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinRegionArea = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshData>& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_NavMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshData;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshData> const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_NavMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshData;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_NavMeshData(::UnityW<::UnityEngine::AI::NavMeshData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavMeshData = value;
}
constexpr bool& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_BuildHeightMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildHeightMesh;
}
constexpr bool const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_BuildHeightMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildHeightMesh;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_BuildHeightMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildHeightMesh = value;
}
constexpr ::UnityEngine::AI::NavMeshDataInstance& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_NavMeshDataInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshDataInstance;
}
constexpr ::UnityEngine::AI::NavMeshDataInstance const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_NavMeshDataInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavMeshDataInstance;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_NavMeshDataInstance(::UnityEngine::AI::NavMeshDataInstance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavMeshDataInstance = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosition;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::AI::Navigation::NavMeshSurface::__cordl_internal_get_m_LastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRotation;
}
constexpr void Unity::AI::Navigation::NavMeshSurface::__cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRotation = value;
}
inline void Unity::AI::Navigation::NavMeshSurface::setStaticF_s_NavMeshSurfaces(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*, "s_NavMeshSurfaces", ::Unity::AI::Navigation::NavMeshSurface*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>* Unity::AI::Navigation::NavMeshSurface::getStaticF_s_NavMeshSurfaces()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*, "s_NavMeshSurfaces", ::Unity::AI::Navigation::NavMeshSurface*>();
}
inline int32_t Unity::AI::Navigation::NavMeshSurface::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::AI::Navigation::CollectObjects Unity::AI::Navigation::NavMeshSurface::get_collectObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_collectObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::AI::Navigation::CollectObjects>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_collectObjects(::Unity::AI::Navigation::CollectObjects  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_collectObjects", {}, {::i2c::type_of<::Unity::AI::Navigation::CollectObjects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshSurface::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshSurface::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_center(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask Unity::AI::Navigation::NavMeshSurface::get_layerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_layerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_layerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AI::NavMeshCollectGeometry Unity::AI::Navigation::NavMeshSurface::get_useGeometry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_useGeometry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshCollectGeometry>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_useGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_useGeometry", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Unity::AI::Navigation::NavMeshSurface::get_defaultArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_defaultArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_defaultArea(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_defaultArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshSurface::get_ignoreNavMeshAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_ignoreNavMeshAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_ignoreNavMeshAgent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_ignoreNavMeshAgent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshSurface::get_ignoreNavMeshObstacle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_ignoreNavMeshObstacle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_ignoreNavMeshObstacle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_ignoreNavMeshObstacle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshSurface::get_overrideTileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_overrideTileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_overrideTileSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Unity::AI::Navigation::NavMeshSurface::get_tileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_tileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_tileSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshSurface::get_overrideVoxelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_overrideVoxelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_overrideVoxelSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::AI::Navigation::NavMeshSurface::get_voxelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_voxelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_voxelSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::AI::Navigation::NavMeshSurface::get_minRegionArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_minRegionArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_minRegionArea(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_minRegionArea", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::AI::Navigation::NavMeshSurface::get_buildHeightMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_buildHeightMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_buildHeightMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AI::NavMeshData> Unity::AI::Navigation::NavMeshSurface::get_navMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_navMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AI::NavMeshData>>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::set_navMeshData(::UnityEngine::AI::NavMeshData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"set_navMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AI::NavMeshDataInstance Unity::AI::Navigation::NavMeshSurface::get_navMeshDataInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_navMeshDataInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshDataInstance>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>* Unity::AI::Navigation::NavMeshSurface::get_activeSurfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"get_activeSurfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshSurface>>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::AI::Navigation::NavMeshSurface::GetInflatedBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetInflatedBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::ClearNavMeshSurfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"ClearNavMeshSurfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::AddData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"AddData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::RemoveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"RemoveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshBuildSettings Unity::AI::Navigation::NavMeshSurface::GetBuildSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetBuildSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::BuildNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"BuildNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AsyncOperation* Unity::AI::Navigation::NavMeshSurface::UpdateNavMesh(::UnityEngine::AI::NavMeshData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateNavMesh", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, data);
}
inline void Unity::AI::Navigation::NavMeshSurface::Register(::Unity::AI::Navigation::NavMeshSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Register", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, surface);
}
inline void Unity::AI::Navigation::NavMeshSurface::Unregister(::Unity::AI::Navigation::NavMeshSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Unregister", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, surface);
}
inline void Unity::AI::Navigation::NavMeshSurface::UpdateActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::AppendModifierVolumes(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"AppendModifierVolumes", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sources);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* Unity::AI::Navigation::NavMeshSurface::CollectSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshSurface::Abs(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Bounds Unity::AI::Navigation::NavMeshSurface::GetWorldBounds(::UnityEngine::Matrix4x4  mat, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"GetWorldBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, mat, bounds);
}
inline ::UnityEngine::Bounds Unity::AI::Navigation::NavMeshSurface::CalculateWorldBounds(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, sources);
}
inline bool Unity::AI::Navigation::NavMeshSurface::HasTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"HasTransformChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::UpdateDataIfTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"UpdateDataIfTransformChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshSurface::CollectSourcesInVolume(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  areaByDefault, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSourcesInVolume", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includedWorldBounds, includedLayerMask, geometry, areaByDefault, generateLinksByDefault, markups, includeOnlyMarkedObjects, results);
}
inline void Unity::AI::Navigation::NavMeshSurface::CollectSourcesInHierarchy(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  areaByDefault, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {"CollectSourcesInHierarchy", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, includedLayerMask, geometry, areaByDefault, generateLinksByDefault, markups, includeOnlyMarkedObjects, results);
}
inline void Unity::AI::Navigation::NavMeshSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::AI::Navigation::NavMeshSurface* Unity::AI::Navigation::NavMeshSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::AI::Navigation::NavMeshSurface*>());
}
// Ctor Parameters []
constexpr ::Unity::AI::Navigation::NavMeshSurface::NavMeshSurface()   {
}
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshSurface___c::*)()>(&::Unity::AI::Navigation::NavMeshSurface___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7702c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface___c._AppendModifierVolumes_b__86_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface___c::*)(::Unity::AI::Navigation::NavMeshModifierVolume*)>(&::Unity::AI::Navigation::NavMeshSurface___c::_AppendModifierVolumes_b__86_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae77034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<AppendModifierVolumes>b__86_0", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshModifierVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface___c._CollectSources_b__87_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface___c::*)(::Unity::AI::Navigation::NavMeshModifier*)>(&::Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae7705c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_0", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshModifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface___c._CollectSources_b__87_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshBuildSource)>(&::Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae77084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_1", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshSurface___c._CollectSources_b__87_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshSurface___c::*)(::UnityEngine::AI::NavMeshBuildSource)>(&::Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae7716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_2", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::AI::Navigation::NavMeshSurface___c::setStaticF___9(::Unity::AI::Navigation::NavMeshSurface___c*  value)  {
::cordl_internals::setStaticField<::Unity::AI::Navigation::NavMeshSurface___c*, "<>9", ::Unity::AI::Navigation::NavMeshSurface___c*>(std::forward<::Unity::AI::Navigation::NavMeshSurface___c*>(value));
}
inline ::Unity::AI::Navigation::NavMeshSurface___c* Unity::AI::Navigation::NavMeshSurface___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::AI::Navigation::NavMeshSurface___c*, "<>9", ::Unity::AI::Navigation::NavMeshSurface___c*>();
}
inline void Unity::AI::Navigation::NavMeshSurface___c::setStaticF___9__86_0(::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*, "<>9__86_0", ::Unity::AI::Navigation::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>* Unity::AI::Navigation::NavMeshSurface___c::getStaticF___9__86_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*, "<>9__86_0", ::Unity::AI::Navigation::NavMeshSurface___c*>();
}
inline void Unity::AI::Navigation::NavMeshSurface___c::setStaticF___9__87_0(::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*, "<>9__87_0", ::Unity::AI::Navigation::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>* Unity::AI::Navigation::NavMeshSurface___c::getStaticF___9__87_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*, "<>9__87_0", ::Unity::AI::Navigation::NavMeshSurface___c*>();
}
inline void Unity::AI::Navigation::NavMeshSurface___c::setStaticF___9__87_1(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__87_1", ::Unity::AI::Navigation::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* Unity::AI::Navigation::NavMeshSurface___c::getStaticF___9__87_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__87_1", ::Unity::AI::Navigation::NavMeshSurface___c*>();
}
inline void Unity::AI::Navigation::NavMeshSurface___c::setStaticF___9__87_2(::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__87_2", ::Unity::AI::Navigation::NavMeshSurface___c*>(std::forward<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>* Unity::AI::Navigation::NavMeshSurface___c::getStaticF___9__87_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>*, "<>9__87_2", ::Unity::AI::Navigation::NavMeshSurface___c*>();
}
inline void Unity::AI::Navigation::NavMeshSurface___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::AI::Navigation::NavMeshSurface___c::_AppendModifierVolumes_b__86_0(::Unity::AI::Navigation::NavMeshModifierVolume*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<AppendModifierVolumes>b__86_0", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshModifierVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_0(::Unity::AI::Navigation::NavMeshModifier*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_0", {}, {::i2c::type_of<::Unity::AI::Navigation::NavMeshModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_1(::UnityEngine::AI::NavMeshBuildSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_1", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Unity::AI::Navigation::NavMeshSurface___c::_CollectSources_b__87_2(::UnityEngine::AI::NavMeshBuildSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshSurface___c*>(),
                        {"<CollectSources>b__87_2", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Unity::AI::Navigation::NavMeshSurface___c* Unity::AI::Navigation::NavMeshSurface___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::AI::Navigation::NavMeshSurface___c*>());
}
// Ctor Parameters []
constexpr ::Unity::AI::Navigation::NavMeshSurface___c::NavMeshSurface___c()   {
}
