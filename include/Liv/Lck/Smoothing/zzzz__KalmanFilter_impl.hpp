#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilter_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::KalmanFilter::*)(float_t, float_t)>(&::Liv::Lck::Smoothing::KalmanFilter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d3d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Smoothing::KalmanFilter::*)(float_t, float_t, float_t)>(&::Liv::Lck::Smoothing::KalmanFilter::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d3d82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilter*>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__estimationErrorCovariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimationErrorCovariance;
}
constexpr float_t const& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__estimationErrorCovariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimationErrorCovariance;
}
constexpr void Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_set__estimationErrorCovariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____estimationErrorCovariance = value;
}
constexpr float_t& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__filteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredValue;
}
constexpr float_t const& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__filteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteredValue;
}
constexpr void Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_set__filteredValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filteredValue = value;
}
constexpr float_t& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__kalmanGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kalmanGain;
}
constexpr float_t const& Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_get__kalmanGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kalmanGain;
}
constexpr void Liv::Lck::Smoothing::KalmanFilter::__cordl_internal_set__kalmanGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kalmanGain = value;
}
inline void Liv::Lck::Smoothing::KalmanFilter::_ctor(float_t  initialEstimate, float_t  initialCovariance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialEstimate, initialCovariance);
}
inline float_t Liv::Lck::Smoothing::KalmanFilter::Update(float_t  measurement, float_t  deltaTime, float_t  smoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilter*>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, measurement, deltaTime, smoothing);
}
inline ::Liv::Lck::Smoothing::KalmanFilter* Liv::Lck::Smoothing::KalmanFilter::New_ctor(float_t  initialEstimate, float_t  initialCovariance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Smoothing::KalmanFilter*>(initialEstimate, initialCovariance));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::KalmanFilter::KalmanFilter()   {
}
