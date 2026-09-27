#pragma once
// IWYU pragma private; include "BoingKit/BoingEffector.hpp"
#include "BoingKit/zzzz__BoingBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingEffector_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingEffector.get_LinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::get_LinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e15dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"get_LinearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector.get_LinearSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::get_LinearSpeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e15db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"get_LinearSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e15e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e15ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e1612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e16224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingEffector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingEffector::*)()>(&::BoingKit::BoingEffector::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e162e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_FullEffectRadiusRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullEffectRadiusRatio;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_FullEffectRadiusRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullEffectRadiusRatio;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_FullEffectRadiusRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullEffectRadiusRatio = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_MaxImpulseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxImpulseSpeed;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_MaxImpulseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxImpulseSpeed;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_MaxImpulseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxImpulseSpeed = value;
}
constexpr bool& BoingKit::BoingEffector::__cordl_internal_get_ContinuousMotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinuousMotion;
}
constexpr bool const& BoingKit::BoingEffector::__cordl_internal_get_ContinuousMotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinuousMotion;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_ContinuousMotion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContinuousMotion = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_MoveDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveDistance;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_MoveDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveDistance;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_MoveDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoveDistance = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_LinearImpulse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearImpulse;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_LinearImpulse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearImpulse;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_LinearImpulse(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearImpulse = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_RotationAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationAngle;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_RotationAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationAngle;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_RotationAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationAngle = value;
}
constexpr float_t& BoingKit::BoingEffector::__cordl_internal_get_AngularImpulse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularImpulse;
}
constexpr float_t const& BoingKit::BoingEffector::__cordl_internal_get_AngularImpulse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularImpulse;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_AngularImpulse(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AngularImpulse = value;
}
constexpr bool& BoingKit::BoingEffector::__cordl_internal_get_DrawAffectedReactorFieldGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawAffectedReactorFieldGizmos;
}
constexpr bool const& BoingKit::BoingEffector::__cordl_internal_get_DrawAffectedReactorFieldGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawAffectedReactorFieldGizmos;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_DrawAffectedReactorFieldGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawAffectedReactorFieldGizmos = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingEffector::__cordl_internal_get_m_currPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currPosition;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingEffector::__cordl_internal_get_m_currPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currPosition;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_m_currPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currPosition = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingEffector::__cordl_internal_get_m_prevPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevPosition;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingEffector::__cordl_internal_get_m_prevPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevPosition;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_m_prevPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevPosition = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingEffector::__cordl_internal_get_m_linearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_linearVelocity;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingEffector::__cordl_internal_get_m_linearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_linearVelocity;
}
constexpr void BoingKit::BoingEffector::__cordl_internal_set_m_linearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_linearVelocity = value;
}
inline ::UnityEngine::Vector3 BoingKit::BoingEffector::get_LinearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"get_LinearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t BoingKit::BoingEffector::get_LinearSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"get_LinearSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BoingKit::BoingEffector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingEffector::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingEffector::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingEffector::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingEffector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingEffector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingEffector* BoingKit::BoingEffector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingEffector*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingEffector::BoingEffector()   {
}
