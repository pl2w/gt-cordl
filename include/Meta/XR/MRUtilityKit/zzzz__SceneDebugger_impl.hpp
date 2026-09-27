#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDebugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SceneDebugger_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRGazePointer_def.hpp"
#include "GlobalNamespace/zzzz__OVRRayHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SceneDebugger_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMapGPU_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Dropdown_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.get__roomHasChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::get__roomHasChanged)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9f3af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"get__roomHasChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f3b108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::Start)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x9f3b708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::Update)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x9f3c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f3c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9f3c9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.SetupInteractionDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::SetupInteractionDependencies)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x9f3b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetupInteractionDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetControllerRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetControllerRay)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x9f3cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetControllerRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ShowRoomDetailsDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ShowRoomDetailsDebugger)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9f3ceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowRoomDetailsDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetKeyWallDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetKeyWallDebugger)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x9f3d210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetKeyWallDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetLargestSurfaceDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetLargestSurfaceDebugger)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x9f3d76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetLargestSurfaceDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetClosestSeatPoseDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetClosestSeatPoseDebugger)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9f3df34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetClosestSeatPoseDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetClosestSurfacePositionDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetClosestSurfacePositionDebugger)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9f3e18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetClosestSurfacePositionDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetBestPoseFromRaycastDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetBestPoseFromRaycastDebugger)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9f3e3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetBestPoseFromRaycastDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.RayCastDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::RayCastDebugger)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9f3e63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"RayCastDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.IsPositionInRoomDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::IsPositionInRoomDebugger)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x9f3e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"IsPositionInRoomDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ShowDebugAnchorsDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ShowDebugAnchorsDebugger)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9f3ead4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowDebugAnchorsDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.DisplayGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::DisplayGlobalMesh)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x9f3ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ToggleGlobalMeshCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ToggleGlobalMeshCollisions)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9f3f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleGlobalMeshCollisions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.InstantiateGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::InstantiateGlobalMesh)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9f3f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"InstantiateGlobalMesh", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ExportJSON
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ExportJSON)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x9f3f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ExportJSON", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.DebugDestructibleMeshComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::DestructibleMeshComponent*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::DebugDestructibleMeshComponent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f3fbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DebugDestructibleMeshComponent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.DisplaySpaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::DisplaySpaceMap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f3fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplaySpaceMap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.DisplayNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::DisplayNavMesh)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9f3fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GetSpaceMapGPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::GetSpaceMapGPU)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f3baa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetSpaceMapGPU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ShowRoomDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::ShowRoomDetails)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9f3fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowRoomDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.GenerateDebugAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::GenerateDebugAnchor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9f3c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GenerateDebugAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ScaleChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ScaleChildren)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9f40518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ScaleChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.CreateDebugPrefabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::CreateDebugPrefabSource)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x9f40094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateDebugPrefabSource", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.CreateGridPattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::MRUtilityKit::SceneDebugger::CreateGridPattern)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x9f407d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateGridPattern", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.CreateDebugPrimitives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::CreateDebugPrimitives)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9f3bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateDebugPrimitives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.SetupCheckerMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::Shader*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::SetupCheckerMeshMaterial)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9f3bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetupCheckerMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ShowHitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ShowHitNormal)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9f40ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowHitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.SetLogsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::XR::MRUtilityKit::SceneDebugger::SetLogsText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f3d15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetLogsText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ActivateTab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::UI::Image*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ActivateTab)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f4114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ActivateTab", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ActivateMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::CanvasGroup*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ActivateMenu)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f412b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ActivateMenu", {}, {::i2c::type_of<::UnityEngine::CanvasGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ToggleCanvasGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::CanvasGroup*, bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ToggleCanvasGroup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f413f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleCanvasGroup", {}, {::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.Billboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::Billboard)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f3c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Billboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.ToggleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::SceneDebugger::ToggleMenu)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f3c7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleMenu", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger.SnapCanvasInFrontOfCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::SnapCanvasInFrontOfCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f3bb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SnapCanvasInFrontOfCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9f41480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._GetClosestSeatPoseDebugger_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_GetClosestSeatPoseDebugger_b__56_0)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x9f416a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__56_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._GetClosestSurfacePositionDebugger_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_GetClosestSurfacePositionDebugger_b__57_0)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x9f41b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__57_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._GetBestPoseFromRaycastDebugger_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_GetBestPoseFromRaycastDebugger_b__58_0)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x9f41f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__58_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._RayCastDebugger_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_RayCastDebugger_b__59_0)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x9f423d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<RayCastDebugger>b__59_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._IsPositionInRoomDebugger_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_IsPositionInRoomDebugger_b__60_0)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x9f42720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__60_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._ShowDebugAnchorsDebugger_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_ShowDebugAnchorsDebugger_b__61_0)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9f42aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__61_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._DisplayGlobalMesh_b__62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)(::UnityEngine::GameObject*, ::UnityEngine::Mesh*)>(&::Meta::XR::MRUtilityKit::SceneDebugger::_DisplayGlobalMesh_b__62_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f42e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<DisplayGlobalMesh>b__62_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._DisplayNavMesh_b__68_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_DisplayNavMesh_b__68_0)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9f42ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<DisplayNavMesh>b__68_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger._SnapCanvasInFrontOfCamera_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger::_SnapCanvasInFrontOfCamera_b__84_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9f431b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<SnapCanvasInFrontOfCamera>b__84_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_visualHelperMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualHelperMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_visualHelperMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualHelperMaterial;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_visualHelperMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualHelperMaterial = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_ShowDebugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugAnchors;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_ShowDebugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_ShowDebugAnchors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowDebugAnchors = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_MoveCanvasInFrontOfCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveCanvasInFrontOfCamera;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_MoveCanvasInFrontOfCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveCanvasInFrontOfCamera;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_MoveCanvasInFrontOfCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoveCanvasInFrontOfCamera = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_SetupInteractions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupInteractions;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_SetupInteractions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupInteractions;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_SetupInteractions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetupInteractions = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_logs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logs;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_logs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logs;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_logs(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logs = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_surfaceTypeDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceTypeDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_surfaceTypeDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceTypeDropdown;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_surfaceTypeDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceTypeDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_exportGlobalMeshJSONDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportGlobalMeshJSONDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_exportGlobalMeshJSONDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportGlobalMeshJSONDropdown;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_exportGlobalMeshJSONDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportGlobalMeshJSONDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_positioningMethodDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positioningMethodDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_positioningMethodDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positioningMethodDropdown;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_positioningMethodDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positioningMethodDropdown = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_RoomDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomDetails;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_RoomDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomDetails;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_RoomDetails(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomDetails = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Tabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Tabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tabs;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_Tabs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tabs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Menus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Menus;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Menus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Menus;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_Menus(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Menus = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayHelper>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_RayHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayHelper;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayHelper> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_RayHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayHelper;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_RayHelper(::UnityW<::GlobalNamespace::OVRRayHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RayHelper = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_InputModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputModule;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_InputModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputModule;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_InputModule(::UnityW<::UnityEngine::EventSystems::OVRInputModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputModule = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Raycaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Raycaster;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_Raycaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Raycaster;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_Raycaster(::UnityW<::GlobalNamespace::OVRRaycaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Raycaster = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRGazePointer>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_GazePointer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GazePointer;
}
constexpr ::UnityW<::GlobalNamespace::OVRGazePointer> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get_GazePointer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GazePointer;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set_GazePointer(::UnityW<::GlobalNamespace::OVRGazePointer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GazePointer = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__foregroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foregroundColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__foregroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foregroundColor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__foregroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____foregroundColor = value;
}
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__backgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__backgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__backgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backgroundColor = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__srcBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcBlend;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__srcBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcBlend;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__srcBlend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcBlend = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__dstBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dstBlend;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__dstBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dstBlend;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__dstBlend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dstBlend = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__zWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zWrite;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__zWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zWrite;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__zWrite(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zWrite = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__cull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cull;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__cull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cull;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__cull(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cull = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__color(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugAnchors = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshGO;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__globalMeshGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshGO = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMaterial;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__currentRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoom;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__currentRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoom;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__currentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRoom = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugCube()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCube;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugCube() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCube;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugCube(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugCube = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSphere;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSphere;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugSphere(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugSphere = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugNormal;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugNormal;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugNormal(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugNormal = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshViz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshViz;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshViz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshViz;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__navMeshViz(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshViz = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugAnchor = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__previousShowDebugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShowDebugAnchors;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__previousShowDebugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShowDebugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__previousShowDebugAnchors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousShowDebugAnchors = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugCheckerMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCheckerMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugCheckerMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCheckerMesh;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugCheckerMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugCheckerMesh = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__previousShownDebugAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShownDebugAnchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__previousShownDebugAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShownDebugAnchor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__previousShownDebugAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousShownDebugAnchor = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshAnchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshAnchor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__globalMeshAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshAnchor = value;
}
constexpr ::UnityEngine::AI::NavMeshTriangulation& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshTriangulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshTriangulation;
}
constexpr ::UnityEngine::AI::NavMeshTriangulation const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshTriangulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshTriangulation;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__navMeshTriangulation(::UnityEngine::AI::NavMeshTriangulation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshTriangulation = value;
}
constexpr ::System::Action*& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAction;
}
constexpr ::System::Action* const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__debugAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAction;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__debugAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugAction = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__spaceMapGPU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceMapGPU;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__spaceMapGPU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceMapGPU;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__spaceMapGPU(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spaceMapGPU = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__globalMeshCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshCollider;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__globalMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshCollider = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__navMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshMaterial;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__navMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__checkerMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkerMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_get__checkerMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkerMeshMaterial;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger::__cordl_internal_set__checkerMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkerMeshMaterial = value;
}
inline bool Meta::XR::MRUtilityKit::SceneDebugger::get__roomHasChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"get__roomHasChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::OnSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::SetupInteractionDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetupInteractionDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Ray Meta::XR::MRUtilityKit::SceneDebugger::GetControllerRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetControllerRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ShowRoomDetailsDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowRoomDetailsDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::GetKeyWallDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetKeyWallDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::GetLargestSurfaceDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetLargestSurfaceDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::GetClosestSeatPoseDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetClosestSeatPoseDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::GetClosestSurfacePositionDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetClosestSurfacePositionDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::GetBestPoseFromRaycastDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetBestPoseFromRaycastDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::RayCastDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"RayCastDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::IsPositionInRoomDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"IsPositionInRoomDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ShowDebugAnchorsDebugger(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowDebugAnchorsDebugger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::DisplayGlobalMesh(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ToggleGlobalMeshCollisions(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleGlobalMeshCollisions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::InstantiateGlobalMesh(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*  onMeshSegmentInstantiated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"InstantiateGlobalMesh", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onMeshSegmentInstantiated);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ExportJSON(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ExportJSON", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::DebugDestructibleMeshComponent(::Meta::XR::MRUtilityKit::DestructibleMeshComponent*  destructibleMeshComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DebugDestructibleMeshComponent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleMeshComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destructibleMeshComponent);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::DisplaySpaceMap(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplaySpaceMap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::DisplayNavMesh(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"DisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> Meta::XR::MRUtilityKit::SceneDebugger::GetSpaceMapGPU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GetSpaceMapGPU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ShowRoomDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowRoomDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDebugger::GenerateDebugAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"GenerateDebugAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ScaleChildren(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ScaleChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, localScale);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::CreateDebugPrefabSource(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateDebugPrefabSource", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::CreateGridPattern(::UnityEngine::Transform*  parentTransform, ::UnityEngine::Vector3  localOffset, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateGridPattern", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentTransform, localOffset, localRotation);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::CreateDebugPrimitives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"CreateDebugPrimitives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::SetupCheckerMeshMaterial(::UnityEngine::Shader*  debugShader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetupCheckerMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugShader);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ShowHitNormal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ShowHitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::SetLogsText(::StringW  logsText, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SetLogsText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logsText, args);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ActivateTab(::UnityEngine::UI::Image*  selectedTab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ActivateTab", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedTab);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ActivateMenu(::UnityEngine::CanvasGroup*  menuToActivate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ActivateMenu", {}, {::i2c::type_of<::UnityEngine::CanvasGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuToActivate);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ToggleCanvasGroup(::UnityEngine::CanvasGroup*  canvasGroup, bool  shouldShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleCanvasGroup", {}, {::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasGroup, shouldShow);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::Billboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"Billboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::ToggleMenu(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"ToggleMenu", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::SceneDebugger::SnapCanvasInFrontOfCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"SnapCanvasInFrontOfCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_GetClosestSeatPoseDebugger_b__56_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__56_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_GetClosestSurfacePositionDebugger_b__57_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__57_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_GetBestPoseFromRaycastDebugger_b__58_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__58_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_RayCastDebugger_b__59_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<RayCastDebugger>b__59_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_IsPositionInRoomDebugger_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__60_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_ShowDebugAnchorsDebugger_b__61_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__61_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_DisplayGlobalMesh_b__62_0(::UnityEngine::GameObject*  globalMeshSegmentGO, ::UnityEngine::Mesh*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<DisplayGlobalMesh>b__62_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, globalMeshSegmentGO, _);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger::_DisplayNavMesh_b__68_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<DisplayNavMesh>b__68_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::SceneDebugger::_SnapCanvasInFrontOfCamera_b__84_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger*>(),
                        {"<SnapCanvasInFrontOfCamera>b__84_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDebugger* Meta::XR::MRUtilityKit::SceneDebugger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDebugger*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDebugger::SceneDebugger()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)(int32_t)>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f41458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f432c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9f432cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f43460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f43468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::*)()>(&::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f434a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger> const& Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::SceneDebugger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDebugger__SnapCanvasInFrontOfCamera_d__84::SceneDebugger__SnapCanvasInFrontOfCamera_d__84()   {
}
