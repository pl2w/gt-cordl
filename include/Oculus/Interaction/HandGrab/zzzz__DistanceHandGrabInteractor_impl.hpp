#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/DistanceHandGrabInteractor.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__DistanceHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__DistanceHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/zzzz__DistantCandidateComputer_2_def.hpp"
#include "Oculus/Interaction/zzzz__IDistanceInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d95bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_Hand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d95c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_VelocityCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d95d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_VelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_VelocityCalculator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d95dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_Movement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Movement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d95ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Movement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_Movement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::IMovement*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_Movement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d95f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_Movement", {}, {::i2c::type_of<::Oculus::Interaction::IMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_MovementFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_MovementFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d9604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_MovementFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_MovementFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(bool)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_MovementFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_MovementFinished", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_HandGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandGrabTarget* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HandGrabTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d9614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_WristPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_PinchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_PinchPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d9624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_PinchPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_PalmPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_PalmPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d962c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_PalmPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_HandGrabApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HandGrabApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HandGrabApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_SupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_SupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_TargetInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractable* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_TargetInteractable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4d9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_TargetInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Origin)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4d9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_HitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HitPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d96c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HitPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_HitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_HitPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d96d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_HitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_DistanceInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IRelativeToRef* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_DistanceInteractable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4d96e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_DistanceInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_IsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_IsGrabbing)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4d9720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_FingersStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d97f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_FingersStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d97fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_FingersStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d9804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_WristStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_WristStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.get_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d9814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.set_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4d982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_WristToGrabPoseOffset", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.GrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::GrabbingFingers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4d984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4d9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4d9c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d9cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4d9dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InteractableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4da134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InteractableUnset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableUnset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4da1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4da214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4dabc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa4dae7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa4db010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4db688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4db758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4db760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4db768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa4dba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.SelectingGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SelectingGrabTypes)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa4dbc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SelectingGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::UpdateTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4d9e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.UpdateTargetSliding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::UpdateTargetSliding)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4da3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"UpdateTargetSliding", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SetTarget)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa4db2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SetTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.SetGrabStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SetGrabStrength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4da208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SetGrabStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectAllDistanceHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*, ::UnityEngine::Transform*, ::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectAllDistanceHandGrabInteractor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4dc720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectAllDistanceHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectHandGrabApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectHandGrabApi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4dc85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectHandGrabApi", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectDistantCandidateComputer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectDistantCandidateComputer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4dc86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectDistantCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4dc78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectSupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectSupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4dc87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectGrabOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectGrabOrigin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4dc884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectGrabOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectOptionalGripPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalGripPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4dc894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalGripPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectOptionalPinchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalPinchPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4dc8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalPinchPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor.InjectOptionalVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)(::Oculus::Interaction::Throw::IThrowVelocityCalculator*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalVelocityCalculator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4dc8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4dc984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor._Start_b__68_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::_Start_b__68_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4dcbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"<Start>b__68_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabApi = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__supportedGrabTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__supportedGrabTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportedGrabTypes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__grabOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__grabOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabOrigin;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__grabOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__gripPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__gripPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPoint;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__gripPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__pinchPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__pinchPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPoint;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__pinchPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchPoint = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__velocityCalculator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__velocityCalculator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityCalculator;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityCalculator = value;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__VelocityCalculator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityCalculator_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityCalculator_k__BackingField = value;
}
constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__distantCandidateComputer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distantCandidateComputer;
}
constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__distantCandidateComputer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distantCandidateComputer;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__distantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distantCandidateComputer = value;
}
constexpr bool& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabShouldSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldSelect;
}
constexpr bool const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabShouldSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldSelect;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__handGrabShouldSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabShouldSelect = value;
}
constexpr bool& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabShouldUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldUnselect;
}
constexpr bool const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__handGrabShouldUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabShouldUnselect;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__handGrabShouldUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabShouldUnselect = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__cachedResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedResult;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__cachedResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedResult;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__cachedResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedResult = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__currentGrabType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGrabType;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__currentGrabType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGrabType;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__currentGrabType(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGrabType = value;
}
constexpr ::Oculus::Interaction::IMovement*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__Movement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovement* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__Movement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__Movement_k__BackingField(::Oculus::Interaction::IMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Movement_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__MovementFinished_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementFinished_k__BackingField;
}
constexpr bool const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__MovementFinished_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementFinished_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__MovementFinished_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementFinished_k__BackingField = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrabTarget_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__HitPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__HitPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitPoint_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__HitPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HitPoint_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__FingersStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingersStrength_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__FingersStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FingersStrength_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__FingersStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FingersStrength_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__WristStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristStrength_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__WristStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristStrength_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__WristStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WristStrength_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__WristToGrabPoseOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristToGrabPoseOffset_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_get__WristToGrabPoseOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristToGrabPoseOffset_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::__cordl_internal_set__WristToGrabPoseOffset_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WristToGrabPoseOffset_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_VelocityCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_VelocityCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_VelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Movement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Movement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_Movement(::Oculus::Interaction::IMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_Movement", {}, {::i2c::type_of<::Oculus::Interaction::IMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_MovementFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_MovementFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_MovementFinished(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_MovementFinished", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HandGrabTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandGrabTarget*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_PinchPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_PinchPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_PalmPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_PalmPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HandGrabApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HandGrabApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_SupportedGrabTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_TargetInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_TargetInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_HitPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_HitPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_HitPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_HitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_DistanceInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_DistanceInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IRelativeToRef*>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_IsGrabbing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_FingersStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_FingersStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_FingersStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_WristStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_WristStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::get_WristToGrabPoseOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::set_WristToGrabPoseOffset(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"set_WristToGrabPoseOffset", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::GrabbingFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableSet(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableUnset(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableSelected(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InteractableUnselected(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::CanSelect(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable> Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SelectingGrabTypes(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SelectingGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::UpdateTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::UpdateTargetSliding(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"UpdateTargetSliding", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SetTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  selectingGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SetTarget", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, selectingGrabTypes);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::SetGrabStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"SetGrabStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectAllDistanceHandGrabInteractor(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  distantCandidateComputer, ::UnityEngine::Transform*  grabOrigin, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectAllDistanceHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabApi, distantCandidateComputer, grabOrigin, hand, supportedGrabTypes);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectHandGrabApi(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectHandGrabApi", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabApi);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectDistantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  distantCandidateComputer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectDistantCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distantCandidateComputer);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedGrabTypes);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectGrabOrigin(::UnityEngine::Transform*  grabOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectGrabOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabOrigin);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalGripPoint(::UnityEngine::Transform*  gripPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalGripPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gripPoint);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalPinchPoint(::UnityEngine::Transform*  pinchPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalPinchPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinchPoint);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"InjectOptionalVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityCalculator);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::_Start_b__68_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>(),
                        {"<Start>b__68_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabInteractor*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::i___Oculus__Interaction__HandGrab__IHandGrabInteractor() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IDistanceInteractor"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::operator ::Oculus::Interaction::IDistanceInteractor*() noexcept {
return static_cast<::Oculus::Interaction::IDistanceInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDistanceInteractor"
constexpr ::Oculus::Interaction::IDistanceInteractor* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::i___Oculus__Interaction__IDistanceInteractor() noexcept {
return static_cast<::Oculus::Interaction::IDistanceInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::operator ::Oculus::Interaction::IInteractorView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::i___Oculus__Interaction__IInteractorView() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor::DistanceHandGrabInteractor()   {
}
