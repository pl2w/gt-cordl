#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/LckSimpleStabilizer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__LckSimpleStabilizer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckSimpleStabilizer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckSimpleStabilizer::*)()>(&::Liv::Lck::Smoothing::LckSimpleStabilizer::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d3db5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckSimpleStabilizer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckSimpleStabilizer::*)()>(&::Liv::Lck::Smoothing::LckSimpleStabilizer::LateUpdate)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d3dba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckSimpleStabilizer.ReachTargetInstantly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckSimpleStabilizer::*)()>(&::Liv::Lck::Smoothing::LckSimpleStabilizer::ReachTargetInstantly)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d3dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"ReachTargetInstantly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckSimpleStabilizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckSimpleStabilizer::*)()>(&::Liv::Lck::Smoothing::LckSimpleStabilizer::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d3de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__stabilizationTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__stabilizationTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationTarget;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__stabilizationTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stabilizationTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__targetToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__targetToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetToFollow;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__targetToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetToFollow = value;
}
constexpr float_t& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__followTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTime;
}
constexpr float_t const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__followTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTime;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__followTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTime = value;
}
constexpr float_t& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__rotateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateTime;
}
constexpr float_t const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__rotateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateTime;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__rotateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateTime = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocity = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__rotationVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationVelocity;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__rotationVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationVelocity;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__rotationVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationVelocity = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPosition;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPosition = value;
}
constexpr ::UnityEngine::Quaternion& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr ::UnityEngine::Quaternion const& Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_get__lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRotation;
}
constexpr void Liv::Lck::Smoothing::LckSimpleStabilizer::__cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRotation = value;
}
inline void Liv::Lck::Smoothing::LckSimpleStabilizer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckSimpleStabilizer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckSimpleStabilizer::ReachTargetInstantly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {"ReachTargetInstantly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckSimpleStabilizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckSimpleStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Smoothing::LckSimpleStabilizer* Liv::Lck::Smoothing::LckSimpleStabilizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Smoothing::LckSimpleStabilizer*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::LckSimpleStabilizer::LckSimpleStabilizer()   {
}
