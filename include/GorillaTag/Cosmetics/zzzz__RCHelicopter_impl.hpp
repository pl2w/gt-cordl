#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCHelicopter.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCHelicopter_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter.AuthorityBeginDocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)()>(&::GorillaTag::Cosmetics::RCHelicopter::AuthorityBeginDocked)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d69448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)()>(&::GorillaTag::Cosmetics::RCHelicopter::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d69524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)(float_t)>(&::GorillaTag::Cosmetics::RCHelicopter::SharedUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d695ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)()>(&::GorillaTag::Cosmetics::RCHelicopter::FixedUpdate)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x5d69658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::RCHelicopter::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d69b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCHelicopter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCHelicopter::*)()>(&::GorillaTag::Cosmetics::RCHelicopter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d69bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxAscendSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAscendSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxAscendSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAscendSpeed;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_maxAscendSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAscendSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_ascendAccelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendAccelTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_ascendAccelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendAccelTime;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_ascendAccelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascendAccelTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_gravityCompensation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensation;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_gravityCompensation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensation;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_gravityCompensation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCompensation = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxTurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnRate;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxTurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnRate;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_maxTurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnAccelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccelTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnAccelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccelTime;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_turnAccelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnAccelTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxHorizontalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxHorizontalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalSpeed;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_maxHorizontalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHorizontalSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_horizontalAccelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAccelTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_horizontalAccelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAccelTime;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_horizontalAccelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalAccelTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxHorizontalTiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalTiltAngle;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_maxHorizontalTiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalTiltAngle;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_maxHorizontalTiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHorizontalTiltAngle = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_mainPropellerSpinRateRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainPropellerSpinRateRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_mainPropellerSpinRateRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainPropellerSpinRateRange;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_mainPropellerSpinRateRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainPropellerSpinRateRange = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_backPropellerSpinRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backPropellerSpinRate;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_backPropellerSpinRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backPropellerSpinRate;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_backPropellerSpinRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backPropellerSpinRate = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_verticalPropeller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPropeller;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_verticalPropeller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPropeller;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_verticalPropeller(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalPropeller = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnPropeller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnPropeller;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnPropeller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnPropeller;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_turnPropeller(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnPropeller = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_verticalPropellerBaseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPropellerBaseRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_verticalPropellerBaseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalPropellerBaseRotation;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_verticalPropellerBaseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalPropellerBaseRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnPropellerBaseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnPropellerBaseRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnPropellerBaseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnPropellerBaseRotation;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_turnPropellerBaseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnPropellerBaseRotation = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnRate;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnRate;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_turnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_ascendAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendAccel;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_ascendAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendAccel;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_ascendAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascendAccel = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccel;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_turnAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccel;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_turnAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnAccel = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_horizontalAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAccel;
}
constexpr float_t const& GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_get_horizontalAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAccel;
}
constexpr void GorillaTag::Cosmetics::RCHelicopter::__cordl_internal_set_horizontalAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalAccel = value;
}
inline void GorillaTag::Cosmetics::RCHelicopter::AuthorityBeginDocked()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCHelicopter::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCHelicopter::SharedUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GorillaTag::Cosmetics::RCHelicopter::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCHelicopter::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::RCHelicopter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCHelicopter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RCHelicopter* GorillaTag::Cosmetics::RCHelicopter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RCHelicopter*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RCHelicopter::RCHelicopter()   {
}
