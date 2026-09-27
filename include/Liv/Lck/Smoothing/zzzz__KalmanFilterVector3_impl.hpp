#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilterVector3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterVector3_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilterVector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::KalmanFilterVector3::*)(::UnityEngine::Vector3, float_t)>(&::Liv::Lck::Smoothing::KalmanFilterVector3::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d3d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterVector3*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::KalmanFilterVector3.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Liv::Lck::Smoothing::KalmanFilterVector3::*)(::UnityEngine::Vector3, float_t, float_t)>(&::Liv::Lck::Smoothing::KalmanFilterVector3::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d3da74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterVector3*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Smoothing::KalmanFilter*& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterX;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterX;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_set__filterX(::Liv::Lck::Smoothing::KalmanFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterX = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilter*& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterY;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterY;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_set__filterY(::Liv::Lck::Smoothing::KalmanFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterY = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilter*& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterZ;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_get__filterZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterZ;
}
constexpr void Liv::Lck::Smoothing::KalmanFilterVector3::__cordl_internal_set__filterZ(::Liv::Lck::Smoothing::KalmanFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterZ = value;
}
inline void Liv::Lck::Smoothing::KalmanFilterVector3::_ctor(::UnityEngine::Vector3  initialEstimate, float_t  initialCovariance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterVector3*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialEstimate, initialCovariance);
}
inline ::UnityEngine::Vector3 Liv::Lck::Smoothing::KalmanFilterVector3::Update(::UnityEngine::Vector3  measurement, float_t  deltaTime, float_t  smoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::KalmanFilterVector3*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, measurement, deltaTime, smoothing);
}
inline ::Liv::Lck::Smoothing::KalmanFilterVector3* Liv::Lck::Smoothing::KalmanFilterVector3::New_ctor(::UnityEngine::Vector3  initialEstimate, float_t  initialCovariance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Smoothing::KalmanFilterVector3*>(initialEstimate, initialCovariance));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3::KalmanFilterVector3()   {
}
