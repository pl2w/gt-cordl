#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/FlyingLocomotor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__FlyingLocomotor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__CharacterController_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__FlyingLocomotor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/zzzz__IDeltaTimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.get_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::get_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.set_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::set_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.get_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::get_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_AirDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.set_AirDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(float_t)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::set_AirDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.SetDeltaTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::SetDeltaTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c3be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.add_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::add_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c3be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.remove_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::remove_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c3c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.get_IsGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::get_IsGrounded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c3d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4c3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4c3d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4c3e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::Update)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4c3ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c4324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.LastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::LastUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4c4434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa4c4758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.ConsumeDeferredLocomotionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::ConsumeDeferredLocomotionEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4c4328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.HandleDeferredLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::HandleDeferredLocomotionEvent)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa4c48fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.AccumulateDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::AccumulateDelta)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4c41d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.AddVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::AddVelocity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4c4880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.MoveAbsoluteFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::MoveAbsoluteFeet)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4c4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.MoveAbsoluteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::MoveAbsoluteHead)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4c4b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.MoveRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::MoveRelative)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4c4c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.RotateAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::RotateAbsolute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c4c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.RotateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::RotateRelative)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4c4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.RotateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::RotateVelocity)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4c4d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.CatchUpCharacterToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::CatchUpCharacterToPlayer)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4c3fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.CatchUpPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::CatchUpPlayerToCharacter)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa4c4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.ResetPlayerToCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::ResetPlayerToCharacter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4c5038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.UpdateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::UpdateVelocity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4c4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.GetModifiedSpeedFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::GetModifiedSpeedFactor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4c4ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.GetCharacterFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::GetCharacterFeet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4c44cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.GetCharacterHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::GetCharacterHead)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4c4ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.GetPlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::GetPlayerHead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4c4fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.EndOfFrameCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::EndOfFrameCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4c3db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.InjectAllFlyingLocomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::Oculus::Interaction::Locomotion::CharacterController*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::InjectAllFlyingLocomotor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4c51c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectAllFlyingLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.InjectCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::Oculus::Interaction::Locomotion::CharacterController*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::InjectCharacterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectCharacterController", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.InjectPlayerEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::InjectPlayerEyes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor.InjectPlayerOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::InjectPlayerOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa4c521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__characterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController> const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__characterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__characterController(::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____characterController = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__playerOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__playerOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__playerEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__playerEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerEyes;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerEyes = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceleration;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceleration = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__airDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr float_t const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__airDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airDamping;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__airDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airDamping = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__deltaTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__deltaTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTimeProvider = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__whenLocomotionEventHandled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__whenLocomotionEventHandled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionEventHandled = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__accumulatedDeltaFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__accumulatedDeltaFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDeltaFrame;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__accumulatedDeltaFrame(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedDeltaFrame = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocity = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__deferredLocomotionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__deferredLocomotionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredLocomotionEvent;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredLocomotionEvent = value;
}
constexpr ::UnityEngine::YieldInstruction*& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__endOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr ::UnityEngine::YieldInstruction* const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__endOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrame;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrame = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__endOfFrameRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__endOfFrameRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endOfFrameRoutine;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endOfFrameRoutine = value;
}
constexpr bool& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Locomotion::FlyingLocomotor::get_Acceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::set_Acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::FlyingLocomotor::get_AirDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_AirDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::set_AirDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"set_AirDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeProvider);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::FlyingLocomotor::get_IsGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::LastUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::ConsumeDeferredLocomotionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"ConsumeDeferredLocomotionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"HandleDeferredLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"AccumulateDelta", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulator, from, to);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::AddVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"AddVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::MoveAbsoluteFeet(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveAbsoluteFeet", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::MoveAbsoluteHead(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveAbsoluteHead", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::MoveRelative(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"MoveRelative", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::RotateAbsolute(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateAbsolute", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::RotateRelative(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateRelative", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::RotateVelocity(::UnityEngine::Quaternion  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"RotateVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::CatchUpCharacterToPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"CatchUpCharacterToPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"CatchUpPlayerToCharacter", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, feetHeight);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::ResetPlayerToCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"ResetPlayerToCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::UpdateVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::FlyingLocomotor::GetModifiedSpeedFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetModifiedSpeedFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FlyingLocomotor::GetCharacterFeet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetCharacterFeet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FlyingLocomotor::GetCharacterHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetCharacterHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::FlyingLocomotor::GetPlayerHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"GetPlayerHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::FlyingLocomotor::EndOfFrameCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"EndOfFrameCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::InjectAllFlyingLocomotor(::Oculus::Interaction::Locomotion::CharacterController*  characterController, ::UnityEngine::Transform*  playerEyes, ::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectAllFlyingLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterController, playerEyes, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::InjectCharacterController(::Oculus::Interaction::Locomotion::CharacterController*  characterController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectCharacterController", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::CharacterController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterController);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::InjectPlayerEyes(::UnityEngine::Transform*  playerEyes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectPlayerEyes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerEyes);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::FlyingLocomotor* Oculus::Interaction::Locomotion::FlyingLocomotor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FlyingLocomotor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr  Oculus::Interaction::Locomotion::FlyingLocomotor::operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::FlyingLocomotor::i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr  Oculus::Interaction::Locomotion::FlyingLocomotor::operator ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* Oculus::Interaction::Locomotion::FlyingLocomotor::i___Oculus__Interaction__IDeltaTimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FlyingLocomotor::FlyingLocomotor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)(int32_t)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4c5198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c54c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4c54c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4c554c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor> const& Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52::FlyingLocomotor__EndOfFrameCoroutine_d__52()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c54ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor___c.__ctor_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::FlyingLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::FlyingLocomotor___c::__ctor_b__57_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c54b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {"<.ctor>b__57_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::FlyingLocomotor___c.__ctor_b__57_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::FlyingLocomotor___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::FlyingLocomotor___c::__ctor_b__57_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c54bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {"<.ctor>b__57_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::FlyingLocomotor___c::setStaticF___9(::Oculus::Interaction::Locomotion::FlyingLocomotor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(std::forward<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::FlyingLocomotor___c* Oculus::Interaction::Locomotion::FlyingLocomotor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor___c::setStaticF___9__57_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__57_0", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::FlyingLocomotor___c::getStaticF___9__57_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__57_0", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor___c::setStaticF___9__57_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__57_1", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(std::forward<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* Oculus::Interaction::Locomotion::FlyingLocomotor___c::getStaticF___9__57_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__57_1", ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::FlyingLocomotor___c::__ctor_b__57_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {"<.ctor>b__57_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::FlyingLocomotor___c::__ctor_b__57_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>(),
                        {"<.ctor>b__57_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::Locomotion::FlyingLocomotor___c* Oculus::Interaction::Locomotion::FlyingLocomotor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::FlyingLocomotor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::FlyingLocomotor___c::FlyingLocomotor___c()   {
}
