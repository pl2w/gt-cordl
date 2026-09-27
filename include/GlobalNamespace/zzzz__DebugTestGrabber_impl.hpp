#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugTestGrabber.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DebugTestGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActorGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersGrabber_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugTestGrabber.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTestGrabber::*)()>(&::GlobalNamespace::DebugTestGrabber::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56f8bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugTestGrabber.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTestGrabber::*)()>(&::GlobalNamespace::DebugTestGrabber::LateUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x56f8c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugTestGrabber.DoGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTestGrabber::*)()>(&::GlobalNamespace::DebugTestGrabber::DoGrab)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x56f8fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"DoGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugTestGrabber.DoRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTestGrabber::*)()>(&::GlobalNamespace::DebugTestGrabber::DoRelease)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x56f8e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"DoRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugTestGrabber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugTestGrabber::*)()>(&::GlobalNamespace::DebugTestGrabber::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56f927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbing;
}
constexpr bool const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbing;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_isGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGrabbing = value;
}
constexpr bool& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_setIsGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setIsGrabbing;
}
constexpr bool const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_setIsGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setIsGrabbing;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_setIsGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setIsGrabbing = value;
}
constexpr bool& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_setRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRelease;
}
constexpr bool const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_setRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRelease;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_setRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setRelease = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr bool& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
constexpr float_t& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr float_t const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_grabRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabRadius = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_transformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_transformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformToFollow = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_estimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_estimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimator;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_estimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___estimator = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_grabber(::UnityW<::GlobalNamespace::CrittersGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabber = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_otherHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHand;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_otherHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHand;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_otherHand(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherHand = value;
}
constexpr bool& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isHandGrabbingDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandGrabbingDisabled;
}
constexpr bool const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_isHandGrabbingDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandGrabbingDisabled;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_isHandGrabbingDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHandGrabbingDisabled = value;
}
constexpr float_t& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr float_t const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_grabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_grabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDuration = value;
}
constexpr float_t& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_remainingGrabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingGrabDuration;
}
constexpr float_t const& GlobalNamespace::DebugTestGrabber::__cordl_internal_get_remainingGrabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingGrabDuration;
}
constexpr void GlobalNamespace::DebugTestGrabber::__cordl_internal_set_remainingGrabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingGrabDuration = value;
}
inline void GlobalNamespace::DebugTestGrabber::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugTestGrabber::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugTestGrabber::DoGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"DoGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugTestGrabber::DoRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {"DoRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DebugTestGrabber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugTestGrabber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugTestGrabber* GlobalNamespace::DebugTestGrabber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DebugTestGrabber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugTestGrabber::DebugTestGrabber()   {
}
