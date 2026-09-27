#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/DistanceHandGrabInteractable.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_impl.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__DistanceHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__DistanceHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__GrabPoseFinder_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/zzzz__ICollidersRef_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__PhysicsGrabbable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d884c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d8854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.set_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(bool)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d885c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_Slippiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Slippiness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d8864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Slippiness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.set_Slippiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(float_t)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_Slippiness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_Slippiness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovementProvider* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d8874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.set_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_MovementProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_HandAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandAlignType (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_HandAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d888c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_HandAlignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.set_HandAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::HandGrab::HandAlignType)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_HandAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d8894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_HandAlignment", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_RelativeTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d889c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_SupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_SupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d88b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_PinchGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_PinchGrabRules)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4d88bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_PinchGrabRules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_PalmGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_PalmGrabRules)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_PalmGrabRules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_HandGrabPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_HandGrabPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d88e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_HandGrabPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.set_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_Colliders)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d88f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_Colliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Reset)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa4d8908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4d8b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4d8b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::GenerateMovement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa4d8dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.ApplyVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::ApplyVelocities)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4d8fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::UnityEngine::Pose, float_t, ::Oculus::Interaction::Input::Handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::CalculateBestPose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4d9094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"CalculateBestPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, float_t, ::Oculus::Interaction::Input::Handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::CalculateBestPose)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa4d9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"CalculateBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.get_UsesHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_UsesHandPose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d937c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_UsesHandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.SupportsHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::SupportsHandedness)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d9394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"SupportsHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectAllDistanceHandGrabInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::Grab::GrabTypeFlags, ::UnityEngine::Rigidbody*, ::Oculus::Interaction::GrabAPI::GrabbingRule, ::Oculus::Interaction::GrabAPI::GrabbingRule)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectAllDistanceHandGrabInteractable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4d8ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectAllDistanceHandGrabInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectOptionalPhysicsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::PhysicsGrabbable*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalPhysicsGrabbable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d93ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectSupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectSupportedGrabTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d93b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectPinchGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::GrabAPI::GrabbingRule)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectPinchGrabRules)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4d93bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectPinchGrabRules", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectPalmGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::GrabAPI::GrabbingRule)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectPalmGrabRules)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectPalmGrabRules", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d93e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectOptionalHandGrabPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalHandGrabPoses)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalHandGrabPoses", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.InjectOptionalMovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalMovementProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d8d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4d9400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.Oculus_Interaction_HandGrab_IHandGrabInteractable_GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Oculus_Interaction_HandGrab_IHandGrabInteractable_GenerateMovement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"Oculus.Interaction.HandGrab.IHandGrabInteractable.GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable.Oculus_Interaction_HandGrab_IHandGrabInteractable_CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, float_t, ::Oculus::Interaction::Input::Handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Oculus_Interaction_HandGrab_IHandGrabInteractable_CalculateBestPose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d9570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"Oculus.Interaction.HandGrab.IHandGrabInteractable.CalculateBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable._Start_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::_Start_b__43_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4d9574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"<Start>b__43_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__physicsGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__physicsGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physicsGrabbable = value;
}
constexpr bool& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr bool const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__resetGrabOnGrabsUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetGrabOnGrabsUpdated = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__slippiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slippiness;
}
constexpr float_t const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__slippiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slippiness;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__slippiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slippiness = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__supportedGrabTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__supportedGrabTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedGrabTypes;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportedGrabTypes = value;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__pinchGrabRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchGrabRules;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__pinchGrabRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchGrabRules;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__pinchGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchGrabRules = value;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__palmGrabRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____palmGrabRules;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__palmGrabRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____palmGrabRules;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__palmGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____palmGrabRules = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__movementProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__movementProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementProvider = value;
}
constexpr ::Oculus::Interaction::IMovementProvider*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__MovementProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovementProvider* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__MovementProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementProvider_k__BackingField = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandAlignType& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__handAligment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAligment;
}
constexpr ::Oculus::Interaction::HandGrab::HandAlignType const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__handAligment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handAligment;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__handAligment(::Oculus::Interaction::HandGrab::HandAlignType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handAligment = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__handGrabPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__handGrabPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPoses;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__handGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabPoses = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__Colliders_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Colliders_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__Colliders_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Colliders_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__Colliders_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Colliders_k__BackingField = value;
}
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder*& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__grabPoseFinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPoseFinder;
}
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder* const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get__grabPoseFinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPoseFinder;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set__grabPoseFinder(::Oculus::Interaction::HandGrab::GrabPoseFinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabPoseFinder = value;
}
constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get_SCORE_MODIFIER()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SCORE_MODIFIER;
}
constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters const& Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_get_SCORE_MODIFIER() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SCORE_MODIFIER;
}
constexpr void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::__cordl_internal_set_SCORE_MODIFIER(::Oculus::Interaction::Grab::PoseMeasureParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SCORE_MODIFIER = value;
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_ResetGrabOnGrabsUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_ResetGrabOnGrabsUpdated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Slippiness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Slippiness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_Slippiness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_Slippiness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_MovementProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovementProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::HandAlignType Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_HandAlignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_HandAlignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandAlignType>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_HandAlignment(::Oculus::Interaction::HandGrab::HandAlignType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_HandAlignment", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_RelativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_SupportedGrabTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_SupportedGrabTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_PinchGrabRules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_PinchGrabRules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_PalmGrabRules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_PalmGrabRules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_HandGrabPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_HandGrabPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_Colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::set_Colliders(::ArrayW<::UnityEngine::Collider*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"set_Colliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, from, to);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::CalculateBestPose(::UnityEngine::Pose  userPose, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"CalculateBestPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userPose, handScale, handedness, result);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"CalculateBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, offset, relativeTo, handScale, handedness, result);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::get_UsesHandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"get_UsesHandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"SupportsHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectAllDistanceHandGrabInteractable(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes, ::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules, ::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectAllDistanceHandGrabInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedGrabTypes, rigidbody, pinchGrabRules, palmGrabRules);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, physicsObject);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectSupportedGrabTypes", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedGrabTypes);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectPinchGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectPinchGrabRules", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinchGrabRules);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectPalmGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectPalmGrabRules", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, palmGrabRules);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalHandGrabPoses", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabPoses);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Oculus_Interaction_HandGrab_IHandGrabInteractable_GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"Oculus.Interaction.HandGrab.IHandGrabInteractable.GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, from, to);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::Oculus_Interaction_HandGrab_IHandGrabInteractable_CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"Oculus.Interaction.HandGrab.IHandGrabInteractable.CalculateBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, offset, relativeTo, handScale, handedness, result);
}
inline void Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::_Start_b__43_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>(),
                        {"<Start>b__43_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractable"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::operator ::Oculus::Interaction::HandGrab::IHandGrabInteractable*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractable"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractable* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::i___Oculus__Interaction__HandGrab__IHandGrabInteractable() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::operator ::Oculus::Interaction::IRelativeToRef*() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::i___Oculus__Interaction__IRelativeToRef() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr  Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::operator ::Oculus::Interaction::ICollidersRef*() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::i___Oculus__Interaction__ICollidersRef() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable::DistanceHandGrabInteractable()   {
}
