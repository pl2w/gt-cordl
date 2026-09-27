#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorGrabber.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActorGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActorGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersGrabber_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x55f75c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::LateUpdate)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x55f76fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.FindGrabTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersActor> (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::FindGrabTargets)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x55f85d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"FindGrabTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.DoHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::DoHover)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55f8a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.DoGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::DoGrab)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x55f9110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.ApplyGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)(::GlobalNamespace::CrittersActor*, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersActorGrabber::ApplyGrab)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x55f9360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"ApplyGrab", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.DoRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::DoRelease)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x55f8a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.CheckApplyQueuedGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::CheckApplyQueuedGrab)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x55f8e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"CheckApplyQueuedGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.VerifyExistingGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::VerifyExistingGrab)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x55f8474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"VerifyExistingGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.PlayHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)(::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::CrittersActorGrabber::PlayHaptics)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55f9708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"PlayHaptics", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.StopHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::StopHaptics)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55f97fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"StopHaptics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.PlayHapticsOnLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::PlayHapticsOnLoop)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55f98d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"PlayHapticsOnLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CrittersActorGrabber::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55f9948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.ActivateJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)(::GlobalNamespace::CrittersActor*, ::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorGrabber::ActivateJoints)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55f9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"ActivateJoints", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.DoesActorActivateJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersActorGrabber::*)(::GlobalNamespace::CrittersActor*, ::by_ref<::GlobalNamespace::CrittersActor*>)>(&::GlobalNamespace::CrittersActorGrabber::DoesActorActivateJoint)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x55f9a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoesActorActivateJoint", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CrittersActor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.AddGrabberPhysicsTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorGrabber::AddGrabberPhysicsTrigger)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55f964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"AddGrabberPhysicsTrigger", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.RemoveGrabberPhysicsTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::RemoveGrabberPhysicsTrigger)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55f9564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"RemoveGrabberPhysicsTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber.NewJointMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::NewJointMethod)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x55f7d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"NewJointMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber::*)()>(&::GlobalNamespace::CrittersActorGrabber::_ctor)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x55f9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbing;
}
constexpr bool const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbing;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_isGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGrabbing = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr bool& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_grabRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabRadius = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabBreakRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabBreakRadius;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabBreakRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabBreakRadius;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_grabBreakRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabBreakRadius = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabDetachFromBagDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDetachFromBagDist;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabDetachFromBagDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDetachFromBagDist;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_grabDetachFromBagDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDetachFromBagDist = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_transformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_transformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformToFollow = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_estimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_estimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimator;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_estimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___estimator = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_grabber(::UnityW<::GlobalNamespace::CrittersGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabber = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_vibrationStartDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationStartDistance;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_vibrationStartDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationStartDistance;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_vibrationStartDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationStartDistance = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_vibrationEndDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationEndDistance;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_vibrationEndDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationEndDistance;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_vibrationEndDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationEndDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_otherHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHand;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_otherHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHand;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_otherHand(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherHand = value;
}
constexpr bool& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isHandGrabbingDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandGrabbingDisabled;
}
constexpr bool const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_isHandGrabbingDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandGrabbingDisabled;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_isHandGrabbingDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHandGrabbingDisabled = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_grabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_grabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDuration = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_remainingGrabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingGrabDuration;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_remainingGrabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingGrabDuration;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_remainingGrabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingGrabDuration = value;
}
constexpr bool& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_playingHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingHaptics;
}
constexpr bool const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_playingHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingHaptics;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_playingHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingHaptics = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsClip;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_hapticsClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsClip = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsStrength;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsStrength;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_hapticsStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsStrength = value;
}
constexpr float_t& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsLength;
}
constexpr float_t const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_hapticsLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsLength;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_hapticsLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsLength = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_haptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haptics;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_haptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haptics;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_haptics(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___haptics = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_triggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_triggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCollider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_validGrabTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validGrabTarget;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_validGrabTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validGrabTarget;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_validGrabTarget(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validGrabTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_lastHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHover;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_lastHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHover;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_lastHover(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHover = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_localGrabOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_localGrabOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabOffset;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_localGrabOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localGrabOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedGrab;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedGrab;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_queuedGrab(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedGrab = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedRelativeGrabOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedRelativeGrabOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedRelativeGrabOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedRelativeGrabOffset;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_queuedRelativeGrabOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedRelativeGrabOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedRelativeGrabRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedRelativeGrabRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_queuedRelativeGrabRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedRelativeGrabRotation;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_queuedRelativeGrabRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedRelativeGrabRotation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_actorsStillPresent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsStillPresent;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersActorGrabber::__cordl_internal_get_actorsStillPresent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorsStillPresent;
}
constexpr void GlobalNamespace::CrittersActorGrabber::__cordl_internal_set_actorsStillPresent(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorsStillPresent = value;
}
inline void GlobalNamespace::CrittersActorGrabber::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::CrittersActor> GlobalNamespace::CrittersActorGrabber::FindGrabTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"FindGrabTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersActor>>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::DoHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::DoGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::ApplyGrab(::GlobalNamespace::CrittersActor*  grabTarget, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"ApplyGrab", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabTarget, localRotation, localOffset);
}
inline void GlobalNamespace::CrittersActorGrabber::DoRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::CheckApplyQueuedGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"CheckApplyQueuedGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::VerifyExistingGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"VerifyExistingGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::PlayHaptics(::UnityEngine::AudioClip*  clip, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"PlayHaptics", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, strength);
}
inline void GlobalNamespace::CrittersActorGrabber::StopHaptics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"StopHaptics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CrittersActorGrabber::PlayHapticsOnLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"PlayHapticsOnLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CrittersActorGrabber::ActivateJoints(::GlobalNamespace::CrittersActor*  rigidJoint, ::GlobalNamespace::CrittersActor*  softJoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"ActivateJoints", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidJoint, softJoint);
}
inline bool GlobalNamespace::CrittersActorGrabber::DoesActorActivateJoint(::GlobalNamespace::CrittersActor*  potentialBagActor, ::by_ref<::GlobalNamespace::CrittersActor*>  heldStorableActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"DoesActorActivateJoint", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CrittersActor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, potentialBagActor, heldStorableActor);
}
inline void GlobalNamespace::CrittersActorGrabber::AddGrabberPhysicsTrigger(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"AddGrabberPhysicsTrigger", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersActorGrabber::RemoveGrabberPhysicsTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"RemoveGrabberPhysicsTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::NewJointMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {"NewJointMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersActorGrabber* GlobalNamespace::CrittersActorGrabber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorGrabber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorGrabber::CrittersActorGrabber()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)(int32_t)>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55fa10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)()>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55fa134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)()>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55fa138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)()>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fa25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)()>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55fa264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::*)()>(&::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fa29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40::CrittersActorGrabber__PlayHapticsOnLoop_d__40()   {
}
