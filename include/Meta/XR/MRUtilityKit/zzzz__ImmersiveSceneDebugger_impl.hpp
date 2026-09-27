#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ImmersiveSceneDebugger.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_DebugAction_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_PositioningMethod_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_<>c___GetLaunchSpaceSetupDebugger_b__80_0_d_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_DebugAction_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMapGPU_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.get__roomHasChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get__roomHasChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f17e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get__roomHasChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.get_ShouldDisplayGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldDisplayGlobalMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f18268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldDisplayGlobalMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.set_ShouldDisplayGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldDisplayGlobalMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f18270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldDisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.get_ShouldToggleGlobalMeshCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldToggleGlobalMeshCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f18498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldToggleGlobalMeshCollision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.set_ShouldToggleGlobalMeshCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldToggleGlobalMeshCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f184a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldToggleGlobalMeshCollision", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.get_ShouldDisplayNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldDisplayNavMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f18720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldDisplayNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.set_ShouldDisplayNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldDisplayNavMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f18728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldDisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger> (*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f18a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f18a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Awake)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x9f18af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Start)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x9f19838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Update)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x9f1a4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f1acd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f1ace4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9f1addc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.IsPositionInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::IsPositionInRoom)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"IsPositionInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.DisplayDebugAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayDebugAnchors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f1b19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayDebugAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Raycast)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Raycast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetBestPoseFromRayCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetBestPoseFromRayCast)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1b1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetBestPoseFromRayCast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetKeyWall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetKeyWall)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f1b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetKeyWall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetLaunchSpaceSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLaunchSpaceSetup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1b254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLaunchSpaceSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetLargestSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLargestSurface)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLargestSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetClosestSeatPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSeatPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f1b2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSeatPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetClosestSurfacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSurfacePosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f1b2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSurfacePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.SetDebugAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::SetDebugAction)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9f1afec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"SetDebugAction", {}, {::i2c::type_of<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetControllerRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetControllerRay)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x9f1b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetControllerRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetKeyWallDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetKeyWallDebugger)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9f19178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetKeyWallDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetLaunchSpaceSetupDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLaunchSpaceSetupDebugger)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9f192dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLaunchSpaceSetupDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetLargestSurfaceDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLargestSurfaceDebugger)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f194dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLargestSurfaceDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetClosestSeatPoseDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSeatPoseDebugger)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9f195d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSeatPoseDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetClosestSurfacePositionDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSurfacePositionDebugger)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f1973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSurfacePositionDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GetBestPoseFromRaycastDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetBestPoseFromRaycastDebugger)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f1907c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetBestPoseFromRaycastDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.RayCastDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::RayCastDebugger)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f18f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"RayCastDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.IsPositionInRoomDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::IsPositionInRoomDebugger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f18de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"IsPositionInRoomDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ShowDebugAnchorsDebugger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowDebugAnchorsDebugger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f18eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowDebugAnchorsDebugger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.DisplayGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayGlobalMesh)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9f18278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ToggleGlobalMeshCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ToggleGlobalMeshCollisions)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9f184a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ToggleGlobalMeshCollisions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.InstantiateGlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::InstantiateGlobalMesh)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9f1b68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"InstantiateGlobalMesh", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ExportJSON
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ExportJSON)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x9f1b87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ExportJSON", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.DisplayNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(bool)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayNavMesh)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x9f18730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ShowRoomDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowRoomDetails)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x9f19b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowRoomDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.GenerateDebugAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GenerateDebugAnchor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9f1aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GenerateDebugAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ScaleChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ScaleChildren)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9f1c074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ScaleChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.CreateDebugPrefabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateDebugPrefabSource)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x9f1bbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateDebugPrefabSource", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.CreateGridPattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateGridPattern)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x9f1c330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateGridPattern", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.SetupCheckerMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::UnityEngine::Shader*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::SetupCheckerMeshMaterial)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9f19f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"SetupCheckerMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.CreateDebugPrimitives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateDebugPrimitives)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x9f1a114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateDebugPrimitives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger.ShowHitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowHitNormal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9f1ca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowHitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9f1ccc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetKeyWallDebugger_b__79_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetKeyWallDebugger_b__79_0)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9f1ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetKeyWallDebugger>b__79_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetKeyWallDebugger_b__79_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetKeyWallDebugger_b__79_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1d118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetKeyWallDebugger>b__79_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetLargestSurfaceDebugger_b__81_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1d134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetLargestSurfaceDebugger_b__81_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_1)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x9f1d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetLargestSurfaceDebugger_b__81_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1d564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetClosestSeatPoseDebugger_b__82_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSeatPoseDebugger_b__82_0)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x9f1d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetClosestSeatPoseDebugger_b__82_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSeatPoseDebugger_b__82_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetClosestSurfacePositionDebugger_b__83_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1d924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetClosestSurfacePositionDebugger_b__83_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_1)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x9f1d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetClosestSurfacePositionDebugger_b__83_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetBestPoseFromRaycastDebugger_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1dd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetBestPoseFromRaycastDebugger_b__84_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_1)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9f1dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._GetBestPoseFromRaycastDebugger_b__84_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1e208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._RayCastDebugger_b__85_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1e224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._RayCastDebugger_b__85_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_1)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x9f1e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._RayCastDebugger_b__85_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._IsPositionInRoomDebugger_b__86_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_IsPositionInRoomDebugger_b__86_0)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x9f1e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__86_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._IsPositionInRoomDebugger_b__86_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_IsPositionInRoomDebugger_b__86_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__86_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._ShowDebugAnchorsDebugger_b__87_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ShowDebugAnchorsDebugger_b__87_0)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9f1e914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__87_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._ShowDebugAnchorsDebugger_b__87_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ShowDebugAnchorsDebugger_b__87_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f1ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__87_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger._DisplayGlobalMesh_b__88_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::*)(::UnityEngine::GameObject*, ::UnityEngine::Mesh*)>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_DisplayGlobalMesh_b__88_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f1ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<DisplayGlobalMesh>b__88_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_ShowDebugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugAnchors;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_ShowDebugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowDebugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set_ShowDebugAnchors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowDebugAnchors = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_visualHelperMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualHelperMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_visualHelperMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualHelperMaterial;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set_visualHelperMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualHelperMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugShader;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugShader = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__srcBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcBlend;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__srcBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcBlend;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__srcBlend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcBlend = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__dstBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dstBlend;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__dstBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dstBlend;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__dstBlend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dstBlend = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__zWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zWrite;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__zWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zWrite;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__zWrite(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zWrite = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__cull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cull;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__cull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cull;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__cull(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cull = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__color(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugAnchors = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshGO;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__globalMeshGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshGO = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoom;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRoom;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__currentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRoom = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugCube()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCube;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugCube() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCube;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugCube(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugCube = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSphere;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugSphere;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugSphere(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugSphere = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugNormal;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugNormal;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugNormal(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugNormal = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshViz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshViz;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshViz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshViz;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__navMeshViz(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshViz = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugAnchor;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugAnchor = value;
}
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__previousShowDebugAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShowDebugAnchors;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__previousShowDebugAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShowDebugAnchors;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__previousShowDebugAnchors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousShowDebugAnchors = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugCheckerMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCheckerMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugCheckerMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCheckerMesh;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugCheckerMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugCheckerMesh = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__previousShownDebugAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShownDebugAnchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__previousShownDebugAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShownDebugAnchor;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__previousShownDebugAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousShownDebugAnchor = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshAnchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshAnchor;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__globalMeshAnchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshAnchor = value;
}
constexpr ::UnityEngine::AI::NavMeshTriangulation& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshTriangulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshTriangulation;
}
constexpr ::UnityEngine::AI::NavMeshTriangulation const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshTriangulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshTriangulation;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__navMeshTriangulation(::UnityEngine::AI::NavMeshTriangulation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshTriangulation = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__spaceMapGPU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceMapGPU;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__spaceMapGPU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spaceMapGPU;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__spaceMapGPU(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spaceMapGPU = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__globalMeshCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalMeshCollider;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__globalMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalMeshCollider = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__navMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshMaterial;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__navMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshMaterial = value;
}
constexpr ::StringW& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMessage;
}
constexpr ::StringW const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMessage;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugMessage = value;
}
constexpr ::StringW& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentDebugMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDebugMessage;
}
constexpr ::StringW const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentDebugMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDebugMessage;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__currentDebugMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDebugMessage = value;
}
constexpr ::StringW& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__sceneDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneDetails;
}
constexpr ::StringW const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__sceneDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneDetails;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__sceneDetails(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneDetails = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__debugMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugMaterial;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__debugMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__checkerMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkerMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__checkerMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkerMeshMaterial;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__checkerMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkerMeshMaterial = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__isPositionInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPositionInRoom;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__isPositionInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPositionInRoom;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__isPositionInRoom(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPositionInRoom = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__showDebugAnchorsDebugAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showDebugAnchorsDebugAction;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__showDebugAnchorsDebugAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showDebugAnchorsDebugAction;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__showDebugAnchorsDebugAction(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showDebugAnchorsDebugAction = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__raycastDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__raycastDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__raycastDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastDebugger = value;
}
constexpr ::GlobalNamespace::MRUK_PositioningMethod& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__positioningMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positioningMethod;
}
constexpr ::GlobalNamespace::MRUK_PositioningMethod const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__positioningMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positioningMethod;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__positioningMethod(::GlobalNamespace::MRUK_PositioningMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positioningMethod = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getBestPoseFromRaycastDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBestPoseFromRaycastDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getBestPoseFromRaycastDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBestPoseFromRaycastDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getBestPoseFromRaycastDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getBestPoseFromRaycastDebugger = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getKeyWallDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getKeyWallDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getKeyWallDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getKeyWallDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getKeyWallDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getKeyWallDebugger = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getLaunchSpaceSetupDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getLaunchSpaceSetupDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getLaunchSpaceSetupDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getLaunchSpaceSetupDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getLaunchSpaceSetupDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getLaunchSpaceSetupDebugger = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__largestSurfaceFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____largestSurfaceFilter;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__largestSurfaceFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____largestSurfaceFilter;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__largestSurfaceFilter(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____largestSurfaceFilter = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getLargestSurfaceDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getLargestSurfaceDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getLargestSurfaceDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getLargestSurfaceDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getLargestSurfaceDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getLargestSurfaceDebugger = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getClosestSeatPoseDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getClosestSeatPoseDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getClosestSeatPoseDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getClosestSeatPoseDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getClosestSeatPoseDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getClosestSeatPoseDebugger = value;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getClosestSurfacePositionDebugger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getClosestSurfacePositionDebugger;
}
constexpr ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__getClosestSurfacePositionDebugger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getClosestSurfacePositionDebugger;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__getClosestSurfacePositionDebugger(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getClosestSurfacePositionDebugger = value;
}
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_exportGlobalMeshJSON()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportGlobalMeshJSON;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get_exportGlobalMeshJSON() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportGlobalMeshJSON;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set_exportGlobalMeshJSON(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportGlobalMeshJSON = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentDebugAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDebugAction;
}
constexpr ::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction> const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__currentDebugAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDebugAction;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__currentDebugAction(::System::Nullable_1<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDebugAction = value;
}
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldDisplayGlobalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayGlobalMesh;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldDisplayGlobalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayGlobalMesh;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__shouldDisplayGlobalMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldDisplayGlobalMesh = value;
}
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldToggleGlobalMeshCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldToggleGlobalMeshCollision;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldToggleGlobalMeshCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldToggleGlobalMeshCollision;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__shouldToggleGlobalMeshCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldToggleGlobalMeshCollision = value;
}
constexpr bool& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldDisplayNavMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayNavMesh;
}
constexpr bool const& Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_get__shouldDisplayNavMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayNavMesh;
}
constexpr void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::__cordl_internal_set__shouldDisplayNavMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldDisplayNavMesh = value;
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>, "<Instance>k__BackingField", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(std::forward<::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>>(value));
}
inline ::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger> Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>, "<Instance>k__BackingField", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>();
}
inline bool Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get__roomHasChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get__roomHasChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldDisplayGlobalMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldDisplayGlobalMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldDisplayGlobalMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldDisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldToggleGlobalMeshCollision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldToggleGlobalMeshCollision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldToggleGlobalMeshCollision(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldToggleGlobalMeshCollision", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_ShouldDisplayNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_ShouldDisplayNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_ShouldDisplayNavMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_ShouldDisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger> Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger>>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::set_Instance(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::OnSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::IsPositionInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"IsPositionInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayDebugAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayDebugAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::Raycast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"Raycast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetBestPoseFromRayCast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetBestPoseFromRayCast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetKeyWall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetKeyWall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLaunchSpaceSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLaunchSpaceSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLargestSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLargestSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSeatPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSeatPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSurfacePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSurfacePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::SetDebugAction(::GlobalNamespace::ImmersiveSceneDebugger_DebugAction  newDebugAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"SetDebugAction", {}, {::i2c::type_of<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDebugAction);
}
inline ::UnityEngine::Ray Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetControllerRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetControllerRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetKeyWallDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetKeyWallDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLaunchSpaceSetupDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLaunchSpaceSetupDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetLargestSurfaceDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetLargestSurfaceDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSeatPoseDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSeatPoseDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetClosestSurfacePositionDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetClosestSurfacePositionDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GetBestPoseFromRaycastDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GetBestPoseFromRaycastDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::RayCastDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"RayCastDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::IsPositionInRoomDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"IsPositionInRoomDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmersiveSceneDebugger_DebugAction Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowDebugAnchorsDebugger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowDebugAnchorsDebugger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImmersiveSceneDebugger_DebugAction>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayGlobalMesh(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayGlobalMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ToggleGlobalMeshCollisions(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ToggleGlobalMeshCollisions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::InstantiateGlobalMesh(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*  onMeshSegmentInstantiated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"InstantiateGlobalMesh", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onMeshSegmentInstantiated);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ExportJSON()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ExportJSON", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::DisplayNavMesh(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"DisplayNavMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline ::StringW Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowRoomDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowRoomDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::GenerateDebugAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"GenerateDebugAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ScaleChildren(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ScaleChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, localScale);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateDebugPrefabSource(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateDebugPrefabSource", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateGridPattern(::UnityEngine::Transform*  parentTransform, ::UnityEngine::Vector3  localOffset, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateGridPattern", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentTransform, localOffset, localRotation);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::SetupCheckerMeshMaterial(::UnityEngine::Shader*  debugShader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"SetupCheckerMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugShader);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::CreateDebugPrimitives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"CreateDebugPrimitives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ShowHitNormal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"ShowHitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetKeyWallDebugger_b__79_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetKeyWallDebugger>b__79_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetKeyWallDebugger_b__79_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetKeyWallDebugger>b__79_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetLargestSurfaceDebugger_b__81_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetLargestSurfaceDebugger>b__81_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSeatPoseDebugger_b__82_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSeatPoseDebugger_b__82_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetClosestSurfacePositionDebugger_b__83_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetClosestSurfacePositionDebugger>b__83_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_GetBestPoseFromRaycastDebugger_b__84_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<GetBestPoseFromRaycastDebugger>b__84_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_RayCastDebugger_b__85_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<RayCastDebugger>b__85_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_IsPositionInRoomDebugger_b__86_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__86_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_IsPositionInRoomDebugger_b__86_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<IsPositionInRoomDebugger>b__86_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ShowDebugAnchorsDebugger_b__87_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__87_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_ShowDebugAnchorsDebugger_b__87_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<ShowDebugAnchorsDebugger>b__87_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::_DisplayGlobalMesh_b__88_0(::UnityEngine::GameObject*  globalMeshSegmentGO, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>(),
                        {"<DisplayGlobalMesh>b__88_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, globalMeshSegmentGO, mesh);
}
inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger::ImmersiveSceneDebugger()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f1eef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._GetKeyWallDebugger_b__79_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetKeyWallDebugger_b__79_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f1ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetKeyWallDebugger>b__79_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._GetLaunchSpaceSetupDebugger_b__80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f1ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._GetLaunchSpaceSetupDebugger_b__80_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f1ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._GetLaunchSpaceSetupDebugger_b__80_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f1ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c._GetClosestSeatPoseDebugger_b__82_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::*)()>(&::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetClosestSeatPoseDebugger_b__82_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f1ef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9(::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*, "<>9", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(value));
}
inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*, "<>9", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9__79_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__79_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9__79_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__79_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9__80_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__80_0", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9__80_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__80_0", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9__80_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__80_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9__80_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__80_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9__80_2(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__80_2", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9__80_2()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__80_2", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::setStaticF___9__82_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__82_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::getStaticF___9__82_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__82_1", ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>();
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetKeyWallDebugger_b__79_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetKeyWallDebugger>b__79_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetLaunchSpaceSetupDebugger_b__80_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetLaunchSpaceSetupDebugger>b__80_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::_GetClosestSeatPoseDebugger_b__82_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>(),
                        {"<GetClosestSeatPoseDebugger>b__82_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c* Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::ImmersiveSceneDebugger___c::ImmersiveSceneDebugger___c()   {
}
