#pragma once
// IWYU pragma private; include "Oculus/Interaction/ObjectPull.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__ObjectPull_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::ObjectPull::*)()>(&::Oculus::Interaction::ObjectPull::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa47543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ObjectPull::*)()>(&::Oculus::Interaction::ObjectPull::get_Stopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa475450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPull::*)(float_t, float_t)>(&::Oculus::Interaction::ObjectPull::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa47534c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPull::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::ObjectPull::MoveTo)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa475458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPull::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::ObjectPull::UpdateTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa475698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPull::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::ObjectPull::StopAndSetPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4756b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ObjectPull.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ObjectPull::*)()>(&::Oculus::Interaction::ObjectPull::Tick)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa4756d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::ObjectPull::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& Oculus::Interaction::ObjectPull::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr float_t& Oculus::Interaction::ObjectPull::__cordl_internal_get__deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr float_t const& Oculus::Interaction::ObjectPull::__cordl_internal_get__deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZone = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::ObjectPull::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::ObjectPull::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__current(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::ObjectPull::__cordl_internal_get__grabberStartPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabberStartPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::ObjectPull::__cordl_internal_get__grabberStartPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabberStartPose;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__grabberStartPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabberStartPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::ObjectPull::__cordl_internal_get__grabbableStartPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableStartPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::ObjectPull::__cordl_internal_get__grabbableStartPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableStartPose;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__grabbableStartPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbableStartPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::ObjectPull::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::ObjectPull::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__target(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Plane& Oculus::Interaction::ObjectPull::__cordl_internal_get__pullingPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pullingPlane;
}
constexpr ::UnityEngine::Plane const& Oculus::Interaction::ObjectPull::__cordl_internal_get__pullingPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pullingPlane;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__pullingPlane(::UnityEngine::Plane  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pullingPlane = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::ObjectPull::__cordl_internal_get__translationDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationDelta;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::ObjectPull::__cordl_internal_get__translationDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationDelta;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__translationDelta(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____translationDelta = value;
}
constexpr float_t& Oculus::Interaction::ObjectPull::__cordl_internal_get__lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTime;
}
constexpr float_t const& Oculus::Interaction::ObjectPull::__cordl_internal_get__lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTime;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTime = value;
}
constexpr float_t& Oculus::Interaction::ObjectPull::__cordl_internal_get__originalDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalDistance;
}
constexpr float_t const& Oculus::Interaction::ObjectPull::__cordl_internal_get__originalDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalDistance;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__originalDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalDistance = value;
}
constexpr bool& Oculus::Interaction::ObjectPull::__cordl_internal_get__reachedGrabber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedGrabber;
}
constexpr bool const& Oculus::Interaction::ObjectPull::__cordl_internal_get__reachedGrabber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedGrabber;
}
constexpr void Oculus::Interaction::ObjectPull::__cordl_internal_set__reachedGrabber(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reachedGrabber = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::ObjectPull::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::ObjectPull::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ObjectPull::_ctor(float_t  speed, float_t  deadZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed, deadZone);
}
inline void Oculus::Interaction::ObjectPull::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::ObjectPull::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::ObjectPull::StopAndSetPose(::UnityEngine::Pose  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::ObjectPull::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ObjectPull*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ObjectPull* Oculus::Interaction::ObjectPull::New_ctor(float_t  speed, float_t  deadZone)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ObjectPull*>(speed, deadZone));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::ObjectPull::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::ObjectPull::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ObjectPull::ObjectPull()   {
}
