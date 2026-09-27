#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteractor.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_Hand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4df2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_HoverOnZeroStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_HoverOnZeroStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HoverOnZeroStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_HoverOnZeroStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(bool)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_HoverOnZeroStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_HoverOnZeroStrength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator* (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_VelocityCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_VelocityCalculator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4df2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_Movement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_Movement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Movement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_Movement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::IMovement*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_Movement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4df30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_Movement", {}, {::i2c::type_of<::Oculus::Interaction::IMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_MovementFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_MovementFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_MovementFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_MovementFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(bool)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_MovementFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_MovementFinished", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_HandGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandGrabTarget* (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_HandGrabTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_WristPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_PinchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_PinchPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_PinchPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_PalmPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_PalmPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_PalmPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_HandGrabApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_HandGrabApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HandGrabApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_SupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_SupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_TargetInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractable* (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_TargetInteractable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4df35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_TargetInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_IsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_IsGrabbing)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4df398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_FingersStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_FingersStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_FingersStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_WristStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_WristStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4df48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.set_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::set_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4df4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_WristToGrabPoseOffset", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.GrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::GrabbingFingers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4df4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4df504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4df50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4df61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::Start)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4df6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4df804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InteractableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4df944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InteractableUnset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableUnset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4df9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4dfa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4dfc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4dfd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa4dfe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e0248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e0318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4e0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4e03d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xa4e0454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.SelectingGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*, float_t, ::by_ref<float_t>)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::SelectingGrabTypes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa4e0770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SelectingGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ForceSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*, bool)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ForceSelect)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa4e0bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.ForceRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::ForceRelease)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4e0da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"ForceRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.SetComputeCandidateOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*, bool)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::SetComputeCandidateOverride)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4e0f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::Unselect)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa4e0ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.OverlapsVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*, ::UnityEngine::Collider*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::OverlapsVolume)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa4e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"OverlapsVolume", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::UpdateTarget)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4df8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.UpdateTargetSliding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::UpdateTargetSliding)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4dfbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"UpdateTargetSliding", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::SetTarget)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa4e00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SetTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.SetGrabStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::SetGrabStrength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4dfa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SetGrabStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectAllHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*, ::UnityEngine::Transform*, ::Oculus::Interaction::Input::IHand*, ::UnityEngine::Rigidbody*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectAllHandGrabInteractor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4e1124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectAllHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectHandGrabApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectHandGrabApi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e1260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectHandGrabApi", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e1190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectRigidbody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e1270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectSupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectSupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectGrabOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectGrabOrigin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e1288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectGrabOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectOptionalGripPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalGripPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e1298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalGripPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectOptionalGripCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalGripCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e12a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalGripCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectOptionalPinchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalPinchPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e12b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalPinchPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectOptionalPinchCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalPinchCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e12c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalPinchCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor.InjectOptionalVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalVelocityCalculator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e12d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4e13a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor._Start_b__69_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor::_Start_b__69_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4e1468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"<Start>b__69_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabApi = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__supportedGrabTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__supportedGrabTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportedGrabTypes = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__hoverOnZeroStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverOnZeroStrength;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__hoverOnZeroStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverOnZeroStrength;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__hoverOnZeroStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverOnZeroStrength = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__grabOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__grabOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabOrigin;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__grabOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__gripPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__gripPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPoint;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__gripPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPoint = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__gripCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__gripCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripCollider;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__gripCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripCollider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__pinchPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__pinchPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPoint;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__pinchPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchPoint = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__pinchCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__pinchCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchCollider;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__pinchCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchCollider = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__velocityCalculator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__velocityCalculator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityCalculator = value;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityCalculator_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabShouldSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldSelect;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabShouldSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldSelect;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__handGrabShouldSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabShouldSelect = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabShouldUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldUnselect;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__handGrabShouldUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldUnselect;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__handGrabShouldUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabShouldUnselect = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__cachedResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedResult;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__cachedResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedResult;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__cachedResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedResult = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__selectedInteractableOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractableOverride;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__selectedInteractableOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractableOverride;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__selectedInteractableOverride(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedInteractableOverride = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__currentGrabType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGrabType;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__currentGrabType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGrabType;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__currentGrabType(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGrabType = value;
}
constexpr ::Oculus::Interaction::IMovement*& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__Movement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovement* const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__Movement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__Movement_k__BackingField(::Oculus::Interaction::IMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Movement_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__MovementFinished_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementFinished_k__BackingField;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__MovementFinished_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementFinished_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__MovementFinished_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementFinished_k__BackingField = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrabTarget_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__FingersStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingersStrength_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__FingersStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingersStrength_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__FingersStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FingersStrength_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__WristStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristStrength_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__WristStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristStrength_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__WristStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WristStrength_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__WristToGrabPoseOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristToGrabPoseOffset_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_get__WristToGrabPoseOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristToGrabPoseOffset_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor::__cordl_internal_set__WristToGrabPoseOffset_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WristToGrabPoseOffset_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandGrab::HandGrabInteractor::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::get_HoverOnZeroStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HoverOnZeroStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_HoverOnZeroStrength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_HoverOnZeroStrength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::HandGrab::HandGrabInteractor::get_VelocityCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::HandGrabInteractor::get_Movement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Movement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_Movement(::Oculus::Interaction::IMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_Movement", {}, {::i2c::type_of<::Oculus::Interaction::IMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::get_MovementFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_MovementFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_MovementFinished(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_MovementFinished", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* Oculus::Interaction::HandGrab::HandGrabInteractor::get_HandGrabTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandGrabTarget*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::HandGrabInteractor::get_PinchPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_PinchPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::HandGrabInteractor::get_PalmPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_PalmPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> Oculus::Interaction::HandGrab::HandGrabInteractor::get_HandGrabApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_HandGrabApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabInteractor::get_SupportedGrabTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* Oculus::Interaction::HandGrab::HandGrabInteractor::get_TargetInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_TargetInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::get_IsGrabbing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabInteractor::get_FingersStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_FingersStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_FingersStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_WristStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_WristStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabInteractor::get_WristToGrabPoseOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::set_WristToGrabPoseOffset(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"set_WristToGrabPoseOffset", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::HandGrab::HandGrabInteractor::GrabbingFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::HandGrab::HandGrabInteractor::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableSet(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableUnset(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableSelected(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InteractableUnselected(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::CanSelect(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> Oculus::Interaction::HandGrab::HandGrabInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabInteractor::SelectingGrabTypes(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, float_t  minFingerScoreRequired, ::by_ref<float_t>  fingerScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SelectingGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method, interactable, minFingerScoreRequired, fingerScore);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::ForceSelect(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, bool  allowManualRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, allowManualRelease);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::ForceRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"ForceRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::SetComputeCandidateOverride(::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  computeCandidate, bool  shouldClearOverrideOnSelect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeCandidate, shouldClearOverrideOnSelect);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor::OverlapsVolume(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::UnityEngine::Collider*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"OverlapsVolume", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, volume);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::UpdateTarget(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::UpdateTargetSliding(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"UpdateTargetSliding", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::SetTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  selectingGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SetTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, selectingGrabTypes);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::SetGrabStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"SetGrabStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectAllHandGrabInteractor(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi, ::UnityEngine::Transform*  grabOrigin, ::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectAllHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabApi, grabOrigin, hand, rigidbody, supportedGrabTypes);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectHandGrabApi(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectHandGrabApi", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabAPI);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedGrabTypes);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectGrabOrigin(::UnityEngine::Transform*  grabOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectGrabOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabOrigin);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalGripPoint(::UnityEngine::Transform*  gripPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalGripPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gripPoint);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalGripCollider(::UnityEngine::Collider*  gripCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalGripCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gripCollider);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalPinchPoint(::UnityEngine::Transform*  pinchPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalPinchPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinchPoint);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalPinchCollider(::UnityEngine::Collider*  pinchCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalPinchCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinchCollider);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityCalculator);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor::_Start_b__69_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>(),
                        {"<Start>b__69_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractor* Oculus::Interaction::HandGrab::HandGrabInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr  Oculus::Interaction::HandGrab::HandGrabInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabInteractor*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* Oculus::Interaction::HandGrab::HandGrabInteractor::i___Oculus__Interaction__HandGrab__IHandGrabInteractor() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr  Oculus::Interaction::HandGrab::HandGrabInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* Oculus::Interaction::HandGrab::HandGrabInteractor::i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::HandGrab::HandGrabInteractor::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::HandGrab::HandGrabInteractor::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteractor::HandGrabInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e0ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0._SetComputeCandidateOverride_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::_SetComputeCandidateOverride_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4e15d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*>(),
                        {"<SetComputeCandidateOverride>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::__cordl_internal_get_computeCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeCandidate;
}
constexpr ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>* const& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::__cordl_internal_get_computeCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeCandidate;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::__cordl_internal_set_computeCandidate(::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computeCandidate = value;
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::_SetComputeCandidateOverride_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*>(),
                        {"<SetComputeCandidateOverride>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0* Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0::HandGrabInteractor___c__DisplayClass85_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0._ForceSelect_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0._ForceSelect_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4e1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0._ForceSelect_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4e1584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_get_interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactable;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_get_interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactable;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_set_interactable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactable = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::_ForceSelect_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>(),
                        {"<ForceSelect>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0* Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0::HandGrabInteractor___c__DisplayClass83_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabInteractor___c::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteractor___c._ForceRelease_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabInteractor___c::*)()>(&::Oculus::Interaction::HandGrab::HandGrabInteractor___c::_ForceRelease_b__84_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(),
                        {"<ForceRelease>b__84_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandGrab::HandGrabInteractor___c::setStaticF___9(::Oculus::Interaction::HandGrab::HandGrabInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*, "<>9", ::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(std::forward<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(value));
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c* Oculus::Interaction::HandGrab::HandGrabInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*, "<>9", ::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor___c::setStaticF___9__84_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__84_0", ::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Oculus::Interaction::HandGrab::HandGrabInteractor___c::getStaticF___9__84_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__84_0", ::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteractor___c::_ForceRelease_b__84_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>(),
                        {"<ForceRelease>b__84_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c* Oculus::Interaction::HandGrab::HandGrabInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteractor___c::HandGrabInteractor___c()   {
}
