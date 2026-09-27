#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_LavaSyncData_impl.hpp"
#include "GlobalNamespace/zzzz__VolcanoEffects_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_LavaSyncData_def.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_RisingLavaState_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_ActiveControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::InfectionLavaController>>* (*)()>(&::GlobalNamespace::InfectionLavaController::get_ActiveControllers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x597efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_ActiveControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.GetControllerForZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::InfectionLavaController> (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::InfectionLavaController::GetControllerForZone)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x597f044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetControllerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_Zone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_Zone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_Zone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_IsAuthority)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x597f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_LavaCurrentlyActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_LavaCurrentlyActivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x597f4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_LavaCurrentlyActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_LavaPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_LavaPlane)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x597f4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_LavaPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_SurfaceCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_SurfaceCenter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597f61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_SurfaceCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_PlayerCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x597f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.get_InCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::get_InCompetitiveQueue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x597f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_InCompetitiveQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::Awake)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x597f794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::OnEnable)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x597fa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::OnDisable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x598005c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.VerifyReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::VerifyReferences)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x597fd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"VerifyReferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.IfNullThenLogAndDisableSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::UnityEngine::Object*, ::StringW, int32_t)>(&::GlobalNamespace::InfectionLavaController::IfNullThenLogAndDisableSelf)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5980434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"IfNullThenLogAndDisableSelf", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::OnDestroy)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x598058c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.ResetLavaState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::ResetLavaState)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x598024c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ResetLavaState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5980a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(bool)>(&::GlobalNamespace::InfectionLavaController::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5980a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5980a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.JumpToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::InfectionLavaController_RisingLavaState)>(&::GlobalNamespace::InfectionLavaController::JumpToState)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x598206c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"JumpToState", {}, {::i2c::type_of<::GlobalNamespace::InfectionLavaController_RisingLavaState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.UpdateReliableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(double_t, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>)>(&::GlobalNamespace::InfectionLavaController::UpdateReliableState)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x598107c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateReliableState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.AdvanceLavaPhaseByTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(double_t, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>)>(&::GlobalNamespace::InfectionLavaController::AdvanceLavaPhaseByTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5981534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AdvanceLavaPhaseByTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.DrainActivationProgressLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::DrainActivationProgressLocally)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5981604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"DrainActivationProgressLocally", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.UpdateLocalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(double_t, ::GlobalNamespace::InfectionLavaController_LavaSyncData)>(&::GlobalNamespace::InfectionLavaController::UpdateLocalState)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5981710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::InfectionLavaController_LavaSyncData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.UpdateLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(float_t)>(&::GlobalNamespace::InfectionLavaController::UpdateLava)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5980988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateLava", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.GetMinLavaY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::GetMinLavaY)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5980844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetMinLavaY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.UpdateResidueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::UpdateResidueState)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5981b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateResidueState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.UpdateVolcanoActivationLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(float_t)>(&::GlobalNamespace::InfectionLavaController::UpdateVolcanoActivationLava)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5981d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateVolcanoActivationLava", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.CheckLocalPlayerAgainstLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(double_t)>(&::GlobalNamespace::InfectionLavaController::CheckLocalPlayerAgainstLava)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5981f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CheckLocalPlayerAgainstLava", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnColliderEnteredLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GlobalNamespace::InfectionLavaController::OnColliderEnteredLava)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5982758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnColliderEnteredLava", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.LocalPlayerInLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(double_t, bool)>(&::GlobalNamespace::InfectionLavaController::LocalPlayerInLava)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5982610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"LocalPlayerInLava", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnActivationLavaProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::InfectionLavaController::OnActivationLavaProjectileHit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59828d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnActivationLavaProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.AddLavaRock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(int32_t)>(&::GlobalNamespace::InfectionLavaController::AddLavaRock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59829f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AddLavaRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.AddVoteForVolcanoActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(int32_t)>(&::GlobalNamespace::InfectionLavaController::AddVoteForVolcanoActivation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5982b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AddVoteForVolcanoActivation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.RemoveVoteForVolcanoActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(int32_t)>(&::GlobalNamespace::InfectionLavaController::RemoveVoteForVolcanoActivation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5982bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"RemoveVoteForVolcanoActivation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.SendSyncEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::SendSyncEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5981438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"SendSyncEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.SendSyncEventToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::InfectionLavaController::SendSyncEventToPlayer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5982c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"SendSyncEventToPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnLavaSyncReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::RoomSystem_LavaSyncEventData)>(&::GlobalNamespace::InfectionLavaController::OnLavaSyncReceived)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5982d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnLavaSyncReceived", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_LavaSyncEventData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnPlayerJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::InfectionLavaController::OnPlayerJoinedRoom)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5982ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::InfectionLavaController::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5982f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::OnLeftRoom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5982fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.CountRigsInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::CountRigsInZone)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5983118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CountRigsInZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.CheckLocalPlayerInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::CheckLocalPlayerInZone)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5980db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CheckLocalPlayerInZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController.GetZoneAuthorityActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::GetZoneAuthorityActorNumber)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x597f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetZoneAuthorityActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InfectionLavaController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InfectionLavaController::*)()>(&::GlobalNamespace::InfectionLavaController::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5983378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::InfectionLavaController::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshMinScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshMinScale;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshMinScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshMinScale;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaMeshMinScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaMeshMinScale = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshMaxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshMaxScale;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshMaxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshMaxScale;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaMeshMaxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaMeshMaxScale = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_eruptTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptTime;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_eruptTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_eruptTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eruptTime = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_riseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTime;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_riseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_riseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTime = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_fullTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTime;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_fullTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_fullTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullTime = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_drainTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainTime;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_drainTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_drainTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainTime = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_latencyBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latencyBuffer;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_latencyBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latencyBuffer;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_latencyBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latencyBuffer = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lagResolutionLavaProgressPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagResolutionLavaProgressPerSecond;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lagResolutionLavaProgressPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagResolutionLavaProgressPerSecond;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lagResolutionLavaProgressPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lagResolutionLavaProgressPerSecond = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressAnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressAnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressAnimationCurve;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaProgressAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaProgressAnimationCurve = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationVotePercentageDefaultQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationVotePercentageDefaultQueue;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationVotePercentageDefaultQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationVotePercentageDefaultQueue;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_activationVotePercentageDefaultQueue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationVotePercentageDefaultQueue = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationVotePercentageCompetitiveQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationVotePercentageCompetitiveQueue;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationVotePercentageCompetitiveQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationVotePercentageCompetitiveQueue;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_activationVotePercentageCompetitiveQueue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationVotePercentageCompetitiveQueue = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationGradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationGradient;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationGradient = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationRockProgressVsPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRockProgressVsPlayerCount;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationRockProgressVsPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRockProgressVsPlayerCount;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationRockProgressVsPlayerCount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationRockProgressVsPlayerCount = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationDrainRateVsPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationDrainRateVsPlayerCount;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationDrainRateVsPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationDrainRateVsPlayerCount;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationDrainRateVsPlayerCount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationDrainRateVsPlayerCount = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVisualMovementProgressPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVisualMovementProgressPerSecond;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVisualMovementProgressPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVisualMovementProgressPerSecond;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationVisualMovementProgressPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationVisualMovementProgressPerSecond = value;
}
constexpr bool& GlobalNamespace::InfectionLavaController::__cordl_internal_get_debugLavaActivationVotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLavaActivationVotes;
}
constexpr bool const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_debugLavaActivationVotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLavaActivationVotes;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_debugLavaActivationVotes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLavaActivationVotes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaMeshTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaMeshTransform;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaMeshTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaMeshTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaSurfacePlaneTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSurfacePlaneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaSurfacePlaneTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaSurfacePlaneTransform;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaSurfacePlaneTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaSurfacePlaneTransform = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaVolume;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaVolume = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRenderer;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationStartPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationStartPos;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationStartPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationStartPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationEndPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationEndPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationEndPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationEndPos;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationEndPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationEndPos = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationProjectileHitNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationProjectileHitNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationProjectileHitNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationProjectileHitNotifier;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationProjectileHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationProjectileHitNotifier = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_volcanoEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoEffects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_volcanoEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volcanoEffects;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_volcanoEffects(::ArrayW<::UnityW<::GlobalNamespace::VolcanoEffects>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volcanoEffects = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaZoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaZoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaZoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaZoneShaderSettings;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaZoneShaderSettings = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_baseZoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseZoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_baseZoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseZoneShaderSettings;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_baseZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseZoneShaderSettings = value;
}
constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData& GlobalNamespace::InfectionLavaController::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_reliableState(::GlobalNamespace::InfectionLavaController_LavaSyncData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVotePlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVotePlayerIds;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVotePlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVotePlayerIds;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationVotePlayerIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationVotePlayerIds = value;
}
constexpr int32_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVoteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVoteCount;
}
constexpr int32_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationVoteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationVoteCount;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationVoteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationVoteCount = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_localLagLavaProgressOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLagLavaProgressOffset;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_localLagLavaProgressOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLagLavaProgressOffset;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_localLagLavaProgressOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLagLavaProgressOffset = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressLinear;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressLinear;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaProgressLinear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaProgressLinear = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressSmooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressSmooth;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaProgressSmooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressSmooth;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaProgressSmooth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaProgressSmooth = value;
}
constexpr double_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lastTagSelfRPCTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTagSelfRPCTime;
}
constexpr double_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lastTagSelfRPCTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTagSelfRPCTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lastTagSelfRPCTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTagSelfRPCTime = value;
}
constexpr double_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr double_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_currentTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr double_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_prevTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTime;
}
constexpr double_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_prevTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_prevTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevTime = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationProgessSmooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationProgessSmooth;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_activationProgessSmooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationProgessSmooth;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_activationProgessSmooth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationProgessSmooth = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaScale;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaScale;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaScale = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationMPB;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lavaActivationMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationMPB;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lavaActivationMPB(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationMPB = value;
}
constexpr double_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lastSyncSendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSyncSendTime;
}
constexpr double_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_lastSyncSendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSyncSendTime;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_lastSyncSendTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSyncSendTime = value;
}
constexpr bool& GlobalNamespace::InfectionLavaController::__cordl_internal_get_localPlayerInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInZone;
}
constexpr bool const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_localPlayerInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInZone;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_localPlayerInZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerInZone = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueIntensity;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueIntensity;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_residueIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___residueIntensity = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueDrainSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueDrainSpeed;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueDrainSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueDrainSpeed;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_residueDrainSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___residueDrainSpeed = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueUVScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueUVScale;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueUVScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueUVScale;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_residueUVScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___residueUVScale = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueOffset;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residueOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residueOffset;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_residueOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___residueOffset = value;
}
constexpr float_t& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residuePlaneY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residuePlaneY;
}
constexpr float_t const& GlobalNamespace::InfectionLavaController::__cordl_internal_get_residuePlaneY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___residuePlaneY;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set_residuePlaneY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___residuePlaneY = value;
}
constexpr bool& GlobalNamespace::InfectionLavaController::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::InfectionLavaController::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::InfectionLavaController::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
inline void GlobalNamespace::InfectionLavaController::setStaticF_activeControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*, "activeControllers", ::GlobalNamespace::InfectionLavaController*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>* GlobalNamespace::InfectionLavaController::getStaticF_activeControllers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*, "activeControllers", ::GlobalNamespace::InfectionLavaController*>();
}
inline void GlobalNamespace::InfectionLavaController::setStaticF__shaderProp_GlobalMainWaterSurfacePlane(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderProp_GlobalMainWaterSurfacePlane", ::GlobalNamespace::InfectionLavaController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::InfectionLavaController::getStaticF__shaderProp_GlobalMainWaterSurfacePlane()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderProp_GlobalMainWaterSurfacePlane", ::GlobalNamespace::InfectionLavaController*>();
}
inline void GlobalNamespace::InfectionLavaController::setStaticF__shaderProp_GlobalLavaResidueParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderProp_GlobalLavaResidueParams", ::GlobalNamespace::InfectionLavaController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::InfectionLavaController::getStaticF__shaderProp_GlobalLavaResidueParams()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderProp_GlobalLavaResidueParams", ::GlobalNamespace::InfectionLavaController*>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::InfectionLavaController>>* GlobalNamespace::InfectionLavaController::get_ActiveControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_ActiveControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::InfectionLavaController>>*>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::InfectionLavaController> GlobalNamespace::InfectionLavaController::GetControllerForZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetControllerForZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::InfectionLavaController>>(nullptr, ___internal_method, zone);
}
inline ::GlobalNamespace::GTZone GlobalNamespace::InfectionLavaController::get_Zone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_Zone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline bool GlobalNamespace::InfectionLavaController::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::InfectionLavaController::get_LavaCurrentlyActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_LavaCurrentlyActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Plane GlobalNamespace::InfectionLavaController::get_LavaPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_LavaPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::InfectionLavaController::get_SurfaceCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_SurfaceCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t GlobalNamespace::InfectionLavaController::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::InfectionLavaController::get_InCompetitiveQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"get_InCompetitiveQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::VerifyReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"VerifyReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::IfNullThenLogAndDisableSelf(::UnityEngine::Object*  obj, ::StringW  fieldName, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"IfNullThenLogAndDisableSelf", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, fieldName, index);
}
inline void GlobalNamespace::InfectionLavaController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::ResetLavaState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ResetLavaState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::InfectionLavaController::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::InfectionLavaController::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::JumpToState(::GlobalNamespace::InfectionLavaController_RisingLavaState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"JumpToState", {}, {::i2c::type_of<::GlobalNamespace::InfectionLavaController_RisingLavaState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::InfectionLavaController::UpdateReliableState(double_t  currentTime, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>  syncData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateReliableState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, syncData);
}
inline void GlobalNamespace::InfectionLavaController::AdvanceLavaPhaseByTime(double_t  time, ::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>  syncData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AdvanceLavaPhaseByTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InfectionLavaController_LavaSyncData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, syncData);
}
inline void GlobalNamespace::InfectionLavaController::DrainActivationProgressLocally()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"DrainActivationProgressLocally", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::UpdateLocalState(double_t  currentTime, ::GlobalNamespace::InfectionLavaController_LavaSyncData  syncData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::InfectionLavaController_LavaSyncData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, syncData);
}
inline void GlobalNamespace::InfectionLavaController::UpdateLava(float_t  fillProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateLava", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fillProgress);
}
inline float_t GlobalNamespace::InfectionLavaController::GetMinLavaY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetMinLavaY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::UpdateResidueState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateResidueState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::UpdateVolcanoActivationLava(float_t  activationProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"UpdateVolcanoActivationLava", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activationProgress);
}
inline void GlobalNamespace::InfectionLavaController::CheckLocalPlayerAgainstLava(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CheckLocalPlayerAgainstLava", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GlobalNamespace::InfectionLavaController::OnColliderEnteredLava(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnColliderEnteredLava", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline void GlobalNamespace::InfectionLavaController::LocalPlayerInLava(double_t  currentTime, bool  enteredLavaThisFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"LocalPlayerInLava", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, enteredLavaThisFrame);
}
inline void GlobalNamespace::InfectionLavaController::OnActivationLavaProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnActivationLavaProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::InfectionLavaController::AddLavaRock(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AddLavaRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GlobalNamespace::InfectionLavaController::AddVoteForVolcanoActivation(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"AddVoteForVolcanoActivation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GlobalNamespace::InfectionLavaController::RemoveVoteForVolcanoActivation(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"RemoveVoteForVolcanoActivation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GlobalNamespace::InfectionLavaController::SendSyncEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"SendSyncEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::SendSyncEventToPlayer(::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"SendSyncEventToPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::InfectionLavaController::OnLavaSyncReceived(::GlobalNamespace::RoomSystem_LavaSyncEventData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnLavaSyncReceived", {}, {::i2c::type_of<::GlobalNamespace::RoomSystem_LavaSyncEventData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::InfectionLavaController::OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::InfectionLavaController::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherNetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherNetPlayer);
}
inline void GlobalNamespace::InfectionLavaController::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::InfectionLavaController::CountRigsInZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CountRigsInZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::InfectionLavaController::CheckLocalPlayerInZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"CheckLocalPlayerInZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::InfectionLavaController::GetZoneAuthorityActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {"GetZoneAuthorityActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::InfectionLavaController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InfectionLavaController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InfectionLavaController* GlobalNamespace::InfectionLavaController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InfectionLavaController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::InfectionLavaController::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::InfectionLavaController::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InfectionLavaController::InfectionLavaController()   {
}
