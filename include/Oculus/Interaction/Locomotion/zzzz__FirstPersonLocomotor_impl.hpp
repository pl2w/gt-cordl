#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/FirstPersonLocomotor.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__FirstPersonLocomotor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__CharacterController_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__FirstPersonLocomotor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_LocomotionAction_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "Oculus/Interaction/zzzz__IDeltaTimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_MaxWallPenetrationDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_MaxWallPenetrationDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_MaxWallPenetrationDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_MaxWallPenetrationDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_MaxWallPenetrationDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_MaxWallPenetrationDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_ExitHotspotDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_ExitHotspotDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_ExitHotspotDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_ExitHotspotDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_ExitHotspotDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_ExitHotspotDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_AutoUpdateHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_AutoUpdateHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_AutoUpdateHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_AutoUpdateHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(bool)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_AutoUpdateHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_AutoUpdateHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_DefaultHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_DefaultHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_DefaultHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_DefaultHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_DefaultHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_DefaultHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_HeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_HeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_HeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_HeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_HeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_HeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_CrouchHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CrouchHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CrouchHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_CrouchHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CrouchHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CrouchHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_SpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_SpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_SpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_SpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_SpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_SpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_CrouchSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CrouchSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CrouchSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_CrouchSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CrouchSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CrouchSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_RunningSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_RunningSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_RunningSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_RunningSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_RunningSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_RunningSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_GroundDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_GroundDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_GroundDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_GroundDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_GroundDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_GroundDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_JumpDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_JumpDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_JumpDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_JumpDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_JumpDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_JumpDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_AirDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_JumpForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_JumpForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_JumpForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_JumpForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_JumpForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_JumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_GravityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_GravityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_GravityFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_GravityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_GravityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_GravityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_CoyoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CoyoteTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CoyoteTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_CoyoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CoyoteTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CoyoteTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_FlattenInputVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_FlattenInputVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_FlattenInputVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_FlattenInputVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(bool)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_FlattenInputVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_FlattenInputVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_InputVelocityStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_InputVelocityStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_InputVelocityStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_InputVelocityStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_InputVelocityStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_InputVelocityStabilization", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.SetDeltaTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::SetDeltaTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.add_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::add_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c0f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.remove_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::remove_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c0fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_IsGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsGrounded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c1058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_IsCrouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsCrouching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsCrouching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_IgnoringVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IgnoringVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4c1080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IgnoringVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_Velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4c10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.set_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_Velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4c10ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4c10b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4c1124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4c11cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa4c1268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c1a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.LastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::LastUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4c1b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.Jump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::Jump)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa4c1f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Jump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.ToggleCrouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::ToggleCrouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4c20c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.Crouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(bool)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::Crouch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c20b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Crouch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.ToggleRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::ToggleRun)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4c20d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ToggleRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(bool)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::Run)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4c20ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Run", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.DisableMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::DisableMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4c1118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"DisableMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.EnableMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::EnableMovement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4c210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"EnableMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.ResetPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::ResetPlayerToCharacter)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4c21a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa4c2368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.ConsumeDeferredLocomotionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::ConsumeDeferredLocomotionEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4c1a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.HandleDeferredLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::HandleDeferredLocomotionEvent)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa4c2f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.TryPerformLocomotionActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::TryPerformLocomotionActions)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4c2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"TryPerformLocomotionActions", {}, {::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.AccumulateDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::AccumulateDelta)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4c1908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.AddVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::AddVelocity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4c2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.MoveAbsoluteFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveAbsoluteFeet)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4c310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.MoveAbsoluteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveAbsoluteHead)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4c31c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.MoveRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveRelative)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4c32b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.RotateAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateAbsolute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.RotateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateRelative)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4c3384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.RotateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateVelocity)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4c3458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.TryExitHotspot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(bool)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::TryExitHotspot)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4c13a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"TryExitHotspot", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.UpdateCharacterHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::UpdateCharacterHeight)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4c1498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"UpdateCharacterHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.CatchUpCharacterToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::CatchUpCharacterToPlayer)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa4c1534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.CatchUpPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::CatchUpPlayerToCharacter)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa4c1ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.UpdateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::UpdateVelocity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4c17b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.GetModifiedSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetModifiedSpeedFactor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4c3594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.FlattenForwardOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::FlattenForwardOffset)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa4c281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"FlattenForwardOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.GetCharacterFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetCharacterFeet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4c1c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.GetCharacterHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetCharacterHead)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4c2bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.GetPlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetPlayerHead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4c22f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.GetPlayerHeadTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetPlayerHeadTop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4c3618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetPlayerHeadTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.IsHeadFarFromPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::IsHeadFarFromPoint)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4c2c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"IsHeadFarFromPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.EndOfFrameCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::EndOfFrameCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4c1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectAllFirstPersonLocomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::Oculus::Interaction::Locomotion::CharacterController*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectAllFirstPersonLocomotor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4c36c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectAllFirstPersonLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::Oculus::Interaction::Locomotion::CharacterController*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectCharacterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectCharacterController", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectPlayerEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectPlayerEyes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectPlayerOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectPlayerOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectOptionalMaxStartGroundDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectOptionalMaxStartGroundDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectOptionalMaxStartGroundDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor.InjectOptionalContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)(::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectOptionalContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectOptionalContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa4c3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__characterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__characterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__characterController(::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____characterController = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__playerOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__playerOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__playerEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__playerEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerEyes = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__maxWallPenetrationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxWallPenetrationDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__maxWallPenetrationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxWallPenetrationDistance;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__maxWallPenetrationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxWallPenetrationDistance = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__exitHotspotDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHotspotDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__exitHotspotDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHotspotDistance;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__exitHotspotDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitHotspotDistance = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__autoUpdateHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdateHeight;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__autoUpdateHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdateHeight;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__autoUpdateHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoUpdateHeight = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__defaultHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeight;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__defaultHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeight;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__defaultHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultHeight = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffset;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__heightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heightOffset = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__crouchHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchHeightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__crouchHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchHeightOffset;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__crouchHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crouchHeightOffset = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__speedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__speedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedFactor;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__speedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__crouchSpeedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchSpeedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__crouchSpeedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchSpeedFactor;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__crouchSpeedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crouchSpeedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__runningSpeedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningSpeedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__runningSpeedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningSpeedFactor;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__runningSpeedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningSpeedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceleration = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__groundDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__groundDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundDamping;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__groundDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpDamping;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__jumpDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__airDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__airDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__airDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpForce;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpForce;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__jumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpForce = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__gravityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__gravityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityFactor;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__gravityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gravityFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__coyoteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coyoteTime;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__coyoteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coyoteTime;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__coyoteTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coyoteTime = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__flattenInputVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flattenInputVelocity;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__flattenInputVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flattenInputVelocity;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__flattenInputVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flattenInputVelocity = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__inputVelocityStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVelocityStabilization;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__inputVelocityStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputVelocityStabilization;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__inputVelocityStabilization(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputVelocityStabilization = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__velocityDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityDisabled;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__velocityDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityDisabled;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__velocityDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityDisabled = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__maxStartGroundDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStartGroundDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__maxStartGroundDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStartGroundDistance;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__maxStartGroundDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStartGroundDistance = value;
}
constexpr ::UnityW<::Oculus::Interaction::Context>& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::UnityW<::Oculus::Interaction::Context> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__deltaTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__deltaTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTimeProvider = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__whenLocomotionEventHandled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__whenLocomotionEventHandled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionEventHandled = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__accumulatedDeltaFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__accumulatedDeltaFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__accumulatedDeltaFrame(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedDeltaFrame = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocity = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isHeadInHotspot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeadInHotspot;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isHeadInHotspot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeadInHotspot;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__isHeadInHotspot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHeadInHotspot = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__headHotspotCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headHotspotCenter;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__headHotspotCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headHotspotCenter;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__headHotspotCenter(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headHotspotCenter = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__leftGroundTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftGroundTime;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__leftGroundTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftGroundTime;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__leftGroundTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftGroundTime = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRunning = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isCrouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCrouching;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__isCrouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCrouching;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__isCrouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCrouching = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__deferredLocomotionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__deferredLocomotionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredLocomotionEvent = value;
}
constexpr ::UnityEngine::YieldInstruction*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr ::UnityEngine::YieldInstruction* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrame = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endOfFrameRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endOfFrameRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrameRoutine = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpThisFrame;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__jumpThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpThisFrame;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__jumpThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpThisFrame = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endedFrameGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endedFrameGrounded;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__endedFrameGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endedFrameGrounded;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__endedFrameGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endedFrameGrounded = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_MaxWallPenetrationDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_MaxWallPenetrationDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_MaxWallPenetrationDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_MaxWallPenetrationDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_ExitHotspotDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_ExitHotspotDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_ExitHotspotDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_ExitHotspotDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_AutoUpdateHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_AutoUpdateHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_AutoUpdateHeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_AutoUpdateHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_DefaultHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_DefaultHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_DefaultHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_DefaultHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_HeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_HeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_HeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_HeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CrouchHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CrouchHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CrouchHeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CrouchHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_SpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_SpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_SpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_SpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CrouchSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CrouchSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CrouchSpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CrouchSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_RunningSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_RunningSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_RunningSpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_RunningSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_Acceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_Acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_GroundDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_GroundDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_GroundDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_GroundDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_JumpDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_JumpDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_JumpDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_JumpDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_AirDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_AirDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_AirDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_JumpForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_JumpForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_JumpForce(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_JumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_GravityFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_GravityFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_GravityFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_GravityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_CoyoteTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_CoyoteTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_CoyoteTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_CoyoteTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_FlattenInputVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_FlattenInputVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_FlattenInputVelocity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_FlattenInputVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_InputVelocityStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_InputVelocityStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_InputVelocityStabilization(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_InputVelocityStabilization", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeProvider);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IsCrouching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IsCrouching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_IgnoringVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_IgnoringVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FirstPersonLocomotor::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::set_Velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::LastUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::Jump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Jump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::ToggleCrouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::Crouch(bool  crouch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Crouch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouch);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::ToggleRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ToggleRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::Run(bool  run)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"Run", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, run);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::DisableMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"DisableMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::EnableMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"EnableMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::ResetPlayerToCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::ConsumeDeferredLocomotionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::TryPerformLocomotionActions(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"TryPerformLocomotionActions", {}, {::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulator, from, to);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::AddVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveAbsoluteFeet(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveAbsoluteHead(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::MoveRelative(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateAbsolute(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateRelative(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::RotateVelocity(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::TryExitHotspot(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"TryExitHotspot", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::UpdateCharacterHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"UpdateCharacterHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::CatchUpCharacterToPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, feetHeight);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::UpdateVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetModifiedSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Locomotion::FirstPersonLocomotor::FlattenForwardOffset(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"FlattenForwardOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, rotation);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetCharacterFeet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetCharacterHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetPlayerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FirstPersonLocomotor::GetPlayerHeadTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"GetPlayerHeadTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor::IsHeadFarFromPoint(::UnityEngine::Vector3  point, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"IsHeadFarFromPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, maxDistance);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::FirstPersonLocomotor::EndOfFrameCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectAllFirstPersonLocomotor(::Oculus::Interaction::Locomotion::CharacterController*  characterController, ::UnityEngine::Transform*  playerEyes, ::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectAllFirstPersonLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterController, playerEyes, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectCharacterController(::Oculus::Interaction::Locomotion::CharacterController*  characterController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectCharacterController", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterController);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectPlayerEyes(::UnityEngine::Transform*  playerEyes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerEyes);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectOptionalMaxStartGroundDistance(float_t  maxStartGroundDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectOptionalMaxStartGroundDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxStartGroundDistance);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::InjectOptionalContext(::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {"InjectOptionalContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor* Oculus::Interaction::Locomotion::FirstPersonLocomotor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FirstPersonLocomotor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor::operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::FirstPersonLocomotor::i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor::operator ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* Oculus::Interaction::Locomotion::FirstPersonLocomotor::i___Oculus__Interaction__IDeltaTimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Locomotion::FirstPersonLocomotor::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FirstPersonLocomotor::FirstPersonLocomotor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)(int32_t)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4c369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c3af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4c3af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4c3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor> const& Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150::FirstPersonLocomotor__EndOfFrameCoroutine_d__150()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c.__ctor_b__157_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c.__ctor_b__157_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c.__ctor_b__157_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_2", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::setStaticF___9(::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(std::forward<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c* Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::setStaticF___9__157_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__157_0", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::getStaticF___9__157_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__157_0", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::setStaticF___9__157_1(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__157_1", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::getStaticF___9__157_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__157_1", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::setStaticF___9__157_2(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__157_2", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(std::forward<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::getStaticF___9__157_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__157_2", ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::__ctor_b__157_2(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>(),
                        {"<.ctor>b__157_2", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c* Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c::FirstPersonLocomotor___c()   {
}
