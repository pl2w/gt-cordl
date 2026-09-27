#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/CapsuleLocomotionHandler.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__CapsuleLocomotionHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__CapsuleLocomotionHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/zzzz__IDeltaTimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_SkinWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_SkinWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_SkinWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_SkinWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_SkinWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_SkinWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_LayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::LayerMask)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_MaxWallPenetrationDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxWallPenetrationDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxWallPenetrationDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_MaxWallPenetrationDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxWallPenetrationDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b87f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxWallPenetrationDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_ExitHotspotDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_ExitHotspotDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_ExitHotspotDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_ExitHotspotDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_ExitHotspotDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_ExitHotspotDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_AutoUpdateHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_AutoUpdateHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_AutoUpdateHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_AutoUpdateHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(bool)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_AutoUpdateHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_AutoUpdateHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_MaxSlopeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxSlopeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxSlopeAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_MaxSlopeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxSlopeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxSlopeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_MaxStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_MaxStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxStep", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_DefaultHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_DefaultHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_DefaultHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_DefaultHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_DefaultHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_DefaultHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_HeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_HeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_HeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_HeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_HeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_HeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_CrouchHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_CrouchHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_CrouchHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_CrouchHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_CrouchHeightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_CrouchHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_SpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_SpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_SpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_SpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_SpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_SpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_CrouchSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_CrouchSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_CrouchSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_CrouchSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_CrouchSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_CrouchSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_RunningSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_RunningSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_RunningSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_RunningSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_RunningSpeedFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_RunningSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_Acceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_GroundDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_GroundDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_GroundDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_GroundDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_GroundDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_GroundDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_JumpDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_JumpDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_JumpDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_JumpDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_JumpDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_JumpDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_AirDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_JumpForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_JumpForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_JumpForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_JumpForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_JumpForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_JumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_GravityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_GravityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_GravityFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_GravityFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_GravityFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b88f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_GravityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_MaxReboundSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxReboundSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxReboundSteps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.set_MaxReboundSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(int32_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxReboundSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxReboundSteps", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.SetDeltaTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::SetDeltaTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.add_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::add_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4b8918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.remove_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::remove_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4b89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_IsGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_IsCrouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsCrouching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsCrouching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_IgnoringVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IgnoringVelocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4b8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IgnoringVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.get_ControllingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_ControllingPlayer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4b8aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_ControllingPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4b8b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4b8be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4b8c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4b8d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b9a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.LastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::LastUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4b9bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Jump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Jump)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4b9fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Jump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.ToggleCrouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ToggleCrouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4ba07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Crouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(bool)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Crouch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4ba064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Crouch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.ToggleRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ToggleRun)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4ba08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ToggleRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(bool)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Run)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4ba0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Run", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa4ba0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.ConsumeDeferredLocomotionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ConsumeDeferredLocomotionEvents)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4b9a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.HandleDeferredLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::HandleDeferredLocomotionEvent)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa4ba5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.AccumulateDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::AccumulateDelta)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4b9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.AddVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::AddVelocity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4ba208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.MoveAbsoluteFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveAbsoluteFeet)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4ba7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.MoveAbsoluteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveAbsoluteHead)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4ba944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.MoveRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveRelative)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4baa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.RotateAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateAbsolute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4baacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.RotateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateRelative)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4bab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.RotateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateVelocity)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa4bac08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.DisableMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::DisableMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4bb198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"DisableMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.EnableMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::EnableMovement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa4bb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"EnableMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.TryExitHotspot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(bool)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::TryExitHotspot)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4b8e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"TryExitHotspot", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.UpdateCharacterHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateCharacterHeight)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa4b8ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateCharacterHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.CatchUpCharacterToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CatchUpCharacterToPlayer)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xa4b9110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.CatchUpPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CatchUpPlayerToCharacter)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa4b9d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.ResetPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ResetPlayerToCharacter)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4ba4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.UpdateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateVelocity)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4b93cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.MoveCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveCharacter)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa4b9518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.Rebound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, int32_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Rebound)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa4bb914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Rebound", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.ClimbStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ClimbStep)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0xa4bc148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ClimbStep", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.CheckMoveCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CheckMoveCharacter)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa4baddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CheckMoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.MoveCapsuleCollides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveCapsuleCollides)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa4bc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveCapsuleCollides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.DecomposeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::UnityEngine::RaycastHit)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::DecomposeDelta)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa4bcc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"DecomposeDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.SlideDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::SlideDelta)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xa4bd338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"SlideDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.IsFlat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::IsFlat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4bb548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"IsFlat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.UpdateGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(bool)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateGrounded)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4bb02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateGrounded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.CalculateGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::by_ref<::UnityEngine::RaycastHit>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CalculateGround)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa4bb35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.CalculateGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, float_t, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CalculateGround)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xa4bcdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.UpdateAnchorPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateAnchorPoints)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa4b98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateAnchorPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.GetModifiedSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetModifiedSpeedFactor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4bad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.GetCharacterFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetCharacterFeet)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4b9c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.GetCharacterHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetCharacterHead)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4ba270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.GetPlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetPlayerHead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4bb8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.GetPlayerHeadTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetPlayerHeadTop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4bb820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetPlayerHeadTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.IsHeadFarFromPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::IsHeadFarFromPoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4ba348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"IsHeadFarFromPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.EndOfFrameCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::EndOfFrameCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4b8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.RaycastSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<float_t>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RaycastSphere)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4bd204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RaycastSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.RaycastHitPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RaycastHitPlane)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa4bb6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RaycastHitPlane", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.InjectAllCapsuleLocomotionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectAllCapsuleLocomotionHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectAllCapsuleLocomotionHandler", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.InjectCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectCapsule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bd7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectCapsule", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.InjectOptionalPlayerEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectOptionalPlayerEyes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bd7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectOptionalPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler.InjectOptionalPlayerOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectOptionalPlayerOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bd7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectOptionalPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa4bd7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler._Rebound_g__ReboundRecursive_148_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::_Rebound_g__ReboundRecursive_148_0)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0xa4bbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"<Rebound>g__ReboundRecursive|148_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__capsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsule;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__capsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsule;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__capsule(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsule = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__skinWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinWidth;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__skinWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinWidth;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__skinWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinWidth = value;
}
constexpr ::UnityEngine::LayerMask& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__playerOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__playerOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__playerEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__playerEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerEyes = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxWallPenetrationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxWallPenetrationDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxWallPenetrationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxWallPenetrationDistance;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__maxWallPenetrationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxWallPenetrationDistance = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__exitHotspotDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHotspotDistance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__exitHotspotDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHotspotDistance;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__exitHotspotDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitHotspotDistance = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__autoUpdateHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdateHeight;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__autoUpdateHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdateHeight;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__autoUpdateHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoUpdateHeight = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxSlopeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSlopeAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxSlopeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSlopeAngle;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__maxSlopeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSlopeAngle = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStep;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStep;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__maxStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStep = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__defaultHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeight;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__defaultHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeight;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__defaultHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultHeight = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffset;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__heightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heightOffset = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__crouchHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchHeightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__crouchHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchHeightOffset;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__crouchHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crouchHeightOffset = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__speedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__speedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedFactor;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__speedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__crouchSpeedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchSpeedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__crouchSpeedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchSpeedFactor;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__crouchSpeedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crouchSpeedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__runningSpeedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningSpeedFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__runningSpeedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningSpeedFactor;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__runningSpeedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningSpeedFactor = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceleration = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__groundDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__groundDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundDamping;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__groundDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__jumpDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__jumpDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpDamping;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__jumpDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__airDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__airDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__airDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airDamping = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__jumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpForce;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__jumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpForce;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__jumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpForce = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__gravityFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__gravityFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityFactor;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__gravityFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gravityFactor = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxReboundSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReboundSteps;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__maxReboundSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReboundSteps;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__maxReboundSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxReboundSteps = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__velocityDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityDisabled;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__velocityDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityDisabled;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__velocityDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityDisabled = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__logicalHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__logicalHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalHead;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__logicalHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logicalHead = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__logicalFeet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalFeet;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__logicalFeet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalFeet;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__logicalFeet(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logicalFeet = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__deltaTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__deltaTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTimeProvider = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__whenLocomotionEventHandled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__whenLocomotionEventHandled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionEventHandled = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__accumulatedDeltaFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__accumulatedDeltaFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__accumulatedDeltaFrame(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedDeltaFrame = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocity = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isHeadInHotspot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeadInHotspot;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isHeadInHotspot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHeadInHotspot;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__isHeadInHotspot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHeadInHotspot = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__headHotspotCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headHotspotCenter;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__headHotspotCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headHotspotCenter;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__headHotspotCenter(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headHotspotCenter = value;
}
constexpr ::UnityEngine::RaycastHit& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__groundHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundHit;
}
constexpr ::UnityEngine::RaycastHit const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__groundHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundHit;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__groundHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundHit = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrounded;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrounded;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__isGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isGrounded = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRunning = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isCrouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCrouching;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__isCrouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCrouching;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__isCrouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCrouching = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__deferredLocomotionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__deferredLocomotionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredLocomotionEvent = value;
}
constexpr ::UnityEngine::YieldInstruction*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__endOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr ::UnityEngine::YieldInstruction* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__endOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrame = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__endOfFrameRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__endOfFrameRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrameRoutine = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_SkinWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_SkinWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_SkinWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_SkinWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_LayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_LayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_LayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxWallPenetrationDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxWallPenetrationDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxWallPenetrationDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxWallPenetrationDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_ExitHotspotDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_ExitHotspotDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_ExitHotspotDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_ExitHotspotDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_AutoUpdateHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_AutoUpdateHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_AutoUpdateHeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_AutoUpdateHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxSlopeAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxSlopeAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxSlopeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxSlopeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxStep(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxStep", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_DefaultHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_DefaultHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_DefaultHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_DefaultHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_HeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_HeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_HeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_HeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_CrouchHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_CrouchHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_CrouchHeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_CrouchHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_SpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_SpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_SpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_SpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_CrouchSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_CrouchSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_CrouchSpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_CrouchSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_RunningSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_RunningSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_RunningSpeedFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_RunningSpeedFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_Acceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_Acceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_Acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_GroundDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_GroundDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_GroundDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_GroundDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_JumpDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_JumpDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_JumpDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_JumpDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_AirDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_AirDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_AirDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_JumpForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_JumpForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_JumpForce(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_JumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_GravityFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_GravityFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_GravityFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_GravityFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_MaxReboundSteps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_MaxReboundSteps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::set_MaxReboundSteps(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"set_MaxReboundSteps", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeProvider);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IsCrouching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IsCrouching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_IgnoringVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_IgnoringVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::get_ControllingPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"get_ControllingPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::LastUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Jump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Jump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ToggleCrouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Crouch(bool  crouch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Crouch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouch);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ToggleRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ToggleRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Run(bool  run)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Run", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, run);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ConsumeDeferredLocomotionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulator, from, to);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::AddVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveAbsoluteFeet(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveAbsoluteHead(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveRelative(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateAbsolute(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateRelative(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RotateVelocity(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::DisableMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"DisableMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::EnableMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"EnableMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::TryExitHotspot(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"TryExitHotspot", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateCharacterHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateCharacterHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CatchUpCharacterToPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, feetHeight);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ResetPlayerToCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveCharacter(::UnityEngine::Vector3  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::Rebound(::UnityEngine::Vector3  delta, int32_t  bounces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"Rebound", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, delta, bounces);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::ClimbStep(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  climbDelta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  stepHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"ClimbStep", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, climbDelta, stepHit);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CheckMoveCharacter(::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  movement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CheckMoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, delta, movement);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::MoveCapsuleCollides(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  moveHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"MoveCapsuleCollides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, moveHit);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::DecomposeDelta(::UnityEngine::Vector3  delta, ::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"DecomposeDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method, delta, hit);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::SlideDelta(::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, ::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"SlideDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, delta, originalFlatDelta, hit);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::IsFlat(::UnityEngine::Vector3  groundNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"IsFlat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groundNormal);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateGrounded(bool  forceGrounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateGrounded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceGrounded);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CalculateGround(::by_ref<::UnityEngine::RaycastHit>  groundHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groundHit);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CalculateGround(::UnityEngine::Vector3  origin, float_t  radius, float_t  distance, ::by_ref<::UnityEngine::RaycastHit>  groundHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, radius, distance, groundHit);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::UpdateAnchorPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"UpdateAnchorPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetModifiedSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetCharacterFeet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetCharacterHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetPlayerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::GetPlayerHeadTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"GetPlayerHeadTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::IsHeadFarFromPoint(::UnityEngine::Vector3  point, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"IsHeadFarFromPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, maxDistance);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::EndOfFrameCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RaycastSphere(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  sphereCenter, float_t  radius, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RaycastSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, sphereCenter, radius, distance);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::RaycastHitPlane(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  enter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"RaycastHitPlane", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit, origin, direction, enter);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectAllCapsuleLocomotionHandler(::UnityEngine::CapsuleCollider*  capsule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectAllCapsuleLocomotionHandler", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsule);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectCapsule(::UnityEngine::CapsuleCollider*  capsule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectCapsule", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsule);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectOptionalPlayerEyes(::UnityEngine::Transform*  playerEyes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectOptionalPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerEyes);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::InjectOptionalPlayerOrigin(::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"InjectOptionalPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::_Rebound_g__ReboundRecursive_148_0(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, int32_t  bounceStep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>(),
                        {"<Rebound>g__ReboundRecursive|148_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, originalFlatDelta, bounceStep);
}
inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr  Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr  Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::operator ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::i___Oculus__Interaction__IDeltaTimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler::CapsuleLocomotionHandler()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)(int32_t)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4bd79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4bdaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4bdaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4bdb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler> const& Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c.__ctor_b__172_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::*)()>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::__ctor_b__172_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {"<.ctor>b__172_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c.__ctor_b__172_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::__ctor_b__172_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4bdaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {"<.ctor>b__172_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::setStaticF___9(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*, "<>9", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(std::forward<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*, "<>9", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>();
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::setStaticF___9__172_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__172_0", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::getStaticF___9__172_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__172_0", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>();
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::setStaticF___9__172_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__172_1", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(std::forward<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::getStaticF___9__172_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__172_1", ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>();
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::__ctor_b__172_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {"<.ctor>b__172_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::__ctor_b__172_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>(),
                        {"<.ctor>b__172_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c* Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c::CapsuleLocomotionHandler___c()   {
}
