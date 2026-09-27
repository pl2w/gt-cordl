#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneNavigation.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SceneNavigation_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__EffectMesh_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshSurface_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSource_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.get_OnNavMeshInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::get_OnNavMeshInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_OnNavMeshInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.set_OnNavMeshInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::UnityEngine::Events::UnityEvent*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::set_OnNavMeshInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_OnNavMeshInitialized", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.get_Obstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::get_Obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_Obstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.set_Obstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::set_Obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_Obstacles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.get_Surfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::get_Surfaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_Surfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.set_Surfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::set_Surfaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_Surfaces", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.get_ObstacleRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::get_ObstacleRoot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f434d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_ObstacleRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f435a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::Start)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9f4361c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.OnSceneLoadedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::OnSceneLoadedEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f4399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"OnSceneLoadedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ReceiveCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ReceiveCreatedRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f43fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveCreatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ReceiveUpdatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ReceiveUpdatedRoom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f43fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveUpdatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ReceiveRemovedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ReceiveRemovedRoom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f440b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveRemovedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ToggleGlobalMeshNavigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(bool, int32_t)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ToggleGlobalMeshNavigation)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9f440c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ToggleGlobalMeshNavigation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.BuildSceneNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::BuildSceneNavMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f43fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"BuildSceneNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.BuildSceneNavMeshForRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::BuildSceneNavMeshForRoom)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x9f43a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"BuildSceneNavMeshForRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CollectSceneSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*, ::System::Collections::Generic::ICollection_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CollectSceneSources)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x9f44ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CollectSceneSources", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateNavMeshBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (::Meta::XR::MRUtilityKit::SceneNavigation::*)(float_t, float_t, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateNavMeshBuildSettings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f445ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavMeshBuildSettings", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateNavMeshSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateNavMeshSurface)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f44220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavMeshSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.RemoveNavMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::RemoveNavMeshData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f44010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"RemoveNavMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ResizeNavMeshFromRoomBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>, ::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ResizeNavMeshFromRoomBounds)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9f454e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ResizeNavMeshFromRoomBounds", {}, {::i2c::type_of<::by_ref<::Unity::AI::Navigation::NavMeshSurface*>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ResizeNavMeshFromRoomBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ResizeNavMeshFromRoomBounds)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9f4435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ResizeNavMeshFromRoomBounds", {}, {::i2c::type_of<::by_ref<::Unity::AI::Navigation::NavMeshSurface*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.InitializeNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(int32_t)>(&::Meta::XR::MRUtilityKit::SceneNavigation::InitializeNavMesh)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9f44f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"InitializeNavMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacles)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x9f45704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacles", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacles)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9f44838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, bool, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacle)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9f458fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.InstantiateObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, bool, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::SceneNavigation::InstantiateObstacle)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9f45bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"InstantiateObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateRoomBridges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>>*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateRoomBridges)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x9f45e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateRoomBridges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateNavigableSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateNavigableSurfaces)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x9f46240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavigableSurfaces", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.CreateNavigableSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::CreateNavigableSurface)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x9f466e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavigableSurface", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ClearObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ClearObstacles)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x9f45110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearObstacles", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ClearObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ClearObstacle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f46ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ClearSurfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ClearSurfaces)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x9f46d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearSurfaces", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ClearSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ClearSurface)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f4714c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearSurface", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.GetFirstLayerFromLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::LayerMask)>(&::Meta::XR::MRUtilityKit::SceneNavigation::GetFirstLayerFromLayerMask)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f46c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"GetFirstLayerFromLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.ValidateBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AI::NavMeshBuildSettings, ::UnityEngine::Bounds)>(&::Meta::XR::MRUtilityKit::SceneNavigation::ValidateBuildSettings)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f446f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ValidateBuildSettings", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::OnDestroy)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9f4723c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneNavigation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneNavigation::*)()>(&::Meta::XR::MRUtilityKit::SceneNavigation::_ctor)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9f47590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_BuildOnSceneLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildOnSceneLoaded;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_BuildOnSceneLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildOnSceneLoaded;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_BuildOnSceneLoaded(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildOnSceneLoaded = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_TrackUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_TrackUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_TrackUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackUpdates = value;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CollectGeometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectGeometry;
}
constexpr ::UnityEngine::AI::NavMeshCollectGeometry const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CollectGeometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectGeometry;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_CollectGeometry(::UnityEngine::AI::NavMeshCollectGeometry  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollectGeometry = value;
}
constexpr ::Unity::AI::Navigation::CollectObjects& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CollectObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectObjects;
}
constexpr ::Unity::AI::Navigation::CollectObjects const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CollectObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectObjects;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_CollectObjects(::Unity::AI::Navigation::CollectObjects  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollectObjects = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentRadius;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentRadius;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_AgentRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgentRadius = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentHeight;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentHeight;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_AgentHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgentHeight = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentClimb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentClimb;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentClimb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentClimb;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_AgentClimb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgentClimb = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentMaxSlope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentMaxSlope;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentMaxSlope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentMaxSlope;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_AgentMaxSlope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgentMaxSlope = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_Agents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Agents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_Agents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Agents;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_Agents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshAgent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Agents = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_NavigableSurfaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NavigableSurfaces;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_NavigableSurfaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NavigableSurfaces;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_NavigableSurfaces(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NavigableSurfaces = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_SceneObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObstacles;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_SceneObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObstacles;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_SceneObstacles(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneObstacles = value;
}
constexpr ::UnityEngine::LayerMask& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr ::UnityEngine::LayerMask const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layers = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentIndex;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_AgentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgentIndex;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_AgentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgentIndex = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_UseSceneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSceneData;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_UseSceneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSceneData;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_UseSceneData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSceneData = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CustomAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAgent;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_CustomAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAgent;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_CustomAgent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomAgent = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_OverrideVoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideVoxelSize;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_OverrideVoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideVoxelSize;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_OverrideVoxelSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideVoxelSize = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_VoxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoxelSize;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_VoxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoxelSize;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_VoxelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoxelSize = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_OverrideTileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTileSize;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_OverrideTileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTileSize;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_OverrideTileSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideTileSize = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_TileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TileSize;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_TileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TileSize;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_TileSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TileSize = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_GenerateLinks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateLinks;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get_GenerateLinks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateLinks;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set_GenerateLinks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenerateLinks = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__effectMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectMesh;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::EffectMesh> const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__effectMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectMesh;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__effectMesh(::UnityW<::Meta::XR::MRUtilityKit::EffectMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__sources(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sources = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__connectionMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionMeshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__connectionMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionMeshes;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__connectionMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionMeshes = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__OnNavMeshInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnNavMeshInitialized_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__OnNavMeshInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnNavMeshInitialized_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__OnNavMeshInitialized_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnNavMeshInitialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__Obstacles_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Obstacles_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__Obstacles_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Obstacles_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__Obstacles_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Obstacles_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__Surfaces_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surfaces_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__Surfaces_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surfaces_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__Surfaces_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Surfaces_k__BackingField = value;
}
constexpr ::UnityW<::Unity::AI::Navigation::NavMeshSurface>& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__navMeshSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshSurface;
}
constexpr ::UnityW<::Unity::AI::Navigation::NavMeshSurface> const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__navMeshSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshSurface;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__navMeshSurface(::UnityW<::Unity::AI::Navigation::NavMeshSurface>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshSurface = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__obstaclesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstaclesRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__obstaclesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstaclesRoot;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__obstaclesRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____obstaclesRoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__surfacesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacesRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__surfacesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacesRoot;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__surfacesRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surfacesRoot = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__cachedNavigableSceneLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedNavigableSceneLabels;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_get__cachedNavigableSceneLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedNavigableSceneLabels;
}
constexpr void Meta::XR::MRUtilityKit::SceneNavigation::__cordl_internal_set__cachedNavigableSceneLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedNavigableSceneLabels = value;
}
inline ::UnityEngine::Events::UnityEvent* Meta::XR::MRUtilityKit::SceneNavigation::get_OnNavMeshInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_OnNavMeshInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::set_OnNavMeshInitialized(::UnityEngine::Events::UnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_OnNavMeshInitialized", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* Meta::XR::MRUtilityKit::SceneNavigation::get_Obstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_Obstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::set_Obstacles(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_Obstacles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* Meta::XR::MRUtilityKit::SceneNavigation::get_Surfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_Surfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::set_Surfaces(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"set_Surfaces", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::MRUtilityKit::SceneNavigation::get_ObstacleRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"get_ObstacleRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::OnSceneLoadedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"OnSceneLoadedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveCreatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ReceiveUpdatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveUpdatedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ReceiveRemovedRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ToggleGlobalMeshNavigation(bool  useGlobalMesh, int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ToggleGlobalMeshNavigation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useGlobalMesh, agentTypeID);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::BuildSceneNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"BuildSceneNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::BuildSceneNavMeshForRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"BuildSceneNavMeshForRoom", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CollectSceneSources(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Collections::Generic::ICollection_1<::UnityEngine::AI::NavMeshBuildSource>*  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CollectSceneSources", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, sources);
}
inline ::UnityEngine::AI::NavMeshBuildSettings Meta::XR::MRUtilityKit::SceneNavigation::CreateNavMeshBuildSettings(float_t  agentRadius, float_t  agentHeight, float_t  agentMaxSlope, float_t  agentClimb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavMeshBuildSettings", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(this, ___internal_method, agentRadius, agentHeight, agentMaxSlope, agentClimb);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateNavMeshSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavMeshSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::RemoveNavMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"RemoveNavMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Meta::XR::MRUtilityKit::SceneNavigation::ResizeNavMeshFromRoomBounds(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>  surface, ::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ResizeNavMeshFromRoomBounds", {}, {::i2c::type_of<::by_ref<::Unity::AI::Navigation::NavMeshSurface*>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, surface, room);
}
inline ::UnityEngine::Bounds Meta::XR::MRUtilityKit::SceneNavigation::ResizeNavMeshFromRoomBounds(::by_ref<::Unity::AI::Navigation::NavMeshSurface*>  surface, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ResizeNavMeshFromRoomBounds", {}, {::i2c::type_of<::by_ref<::Unity::AI::Navigation::NavMeshSurface*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, surface, rooms);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::InitializeNavMesh(int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"InitializeNavMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agentTypeID);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacles(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacles", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacles(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, bool  shouldCarve, bool  carveOnlyStationary, float_t  carvingTimeToStationary, float_t  carvingMoveThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, shouldCarve, carveOnlyStationary, carvingTimeToStationary, carvingMoveThreshold);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::InstantiateObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, bool  shouldCarve, bool  carveOnlyStationary, float_t  carvingTimeToStationary, float_t  carvingMoveThreshold, ::UnityEngine::Vector3  obstacleSize, ::UnityEngine::Vector3  obstacleCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"InstantiateObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, shouldCarve, carveOnlyStationary, carvingTimeToStationary, carvingMoveThreshold, obstacleSize, obstacleCenter);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* Meta::XR::MRUtilityKit::SceneNavigation::CreateRoomBridges(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>>*  connections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateRoomBridges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(this, ___internal_method, connections);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateNavigableSurfaces(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavigableSurfaces", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::CreateNavigableSurface(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"CreateNavigableSurface", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ClearObstacles(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearObstacles", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ClearObstacle(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearObstacle", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ClearSurfaces(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearSurfaces", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::ClearSurface(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ClearSurface", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline int32_t Meta::XR::MRUtilityKit::SceneNavigation::GetFirstLayerFromLayerMask(::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"GetFirstLayerFromLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerMask);
}
inline bool Meta::XR::MRUtilityKit::SceneNavigation::ValidateBuildSettings(::UnityEngine::AI::NavMeshBuildSettings  navMeshBuildSettings, ::UnityEngine::Bounds  navMeshBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"ValidateBuildSettings", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, navMeshBuildSettings, navMeshBounds);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneNavigation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneNavigation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneNavigation* Meta::XR::MRUtilityKit::SceneNavigation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneNavigation*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneNavigation::SceneNavigation()   {
}
