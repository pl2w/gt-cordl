#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilterQuaternion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterQuaternion_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilterQuaternion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::KalmanFilterQuaternion::*)(::UnityEngine::Quaternion, float_t)>(&::Liv::Lck::Smoothing::KalmanFilterQuaternion::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d3d894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilterQuaternion.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Liv::Lck::Smoothing::KalmanFilterQuaternion::*)(::UnityEngine::Quaternion, float_t, float_t)>(&::Liv::Lck::Smoothing::KalmanFilterQuaternion::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d3d8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__estimationErrorCovariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimationErrorCovariance;
}
constexpr float_t const& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__estimationErrorCovariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimationErrorCovariance;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_set__estimationErrorCovariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____estimationErrorCovariance = value;
}
constexpr float_t& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__kalmanGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kalmanGain;
}
constexpr float_t const& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__kalmanGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kalmanGain;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_set__kalmanGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kalmanGain = value;
}
constexpr ::UnityEngine::Quaternion& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__filteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredValue;
}
constexpr ::UnityEngine::Quaternion const& Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_get__filteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredValue;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterQuaternion::__cordl_internal_set__filteredValue(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filteredValue = value;
}
inline void Liv::Lck::Smoothing::KalmanFilterQuaternion::_ctor(::UnityEngine::Quaternion  initialEstimate, float_t  initialCovariance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialEstimate, initialCovariance);
}
inline ::UnityEngine::Quaternion Liv::Lck::Smoothing::KalmanFilterQuaternion::Update(::UnityEngine::Quaternion  measurement, float_t  deltaTime, float_t  smoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, measurement, deltaTime, smoothing);
}
inline ::Liv::Lck::Smoothing::KalmanFilterQuaternion* Liv::Lck::Smoothing::KalmanFilterQuaternion::New_ctor(::UnityEngine::Quaternion  initialEstimate, float_t  initialCovariance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(initialEstimate, initialCovariance));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion::KalmanFilterQuaternion()   {
}
