#pragma once
// IWYU pragma private; include "GorillaTag/DayNightWatchWearable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__DayNightWatchWearable_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::DayNightWatchWearable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DayNightWatchWearable::*)()>(&::GorillaTag::DayNightWatchWearable::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d286ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DayNightWatchWearable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DayNightWatchWearable::*)()>(&::GorillaTag::DayNightWatchWearable::Update)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5d287a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DayNightWatchWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DayNightWatchWearable::*)()>(&::GorillaTag::DayNightWatchWearable::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d289ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::DayNightWatchWearable::__cordl_internal_get_clockNeedle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockNeedle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_clockNeedle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockNeedle;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_clockNeedle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockNeedle = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::DayNightWatchWearable::__cordl_internal_get_needleRotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needleRotationAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_needleRotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needleRotationAxis;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_needleRotationAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needleRotationAxis = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GorillaTag::DayNightWatchWearable::__cordl_internal_get_dayNightManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_dayNightManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightManager = value;
}
constexpr float_t& GorillaTag::DayNightWatchWearable::__cordl_internal_get_rotationDegree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDegree;
}
constexpr float_t const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_rotationDegree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDegree;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_rotationDegree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDegree = value;
}
constexpr ::StringW& GorillaTag::DayNightWatchWearable::__cordl_internal_get_currentTimeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimeOfDay;
}
constexpr ::StringW const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_currentTimeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimeOfDay;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_currentTimeOfDay(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTimeOfDay = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::DayNightWatchWearable::__cordl_internal_get_initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::DayNightWatchWearable::__cordl_internal_get_initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr void GorillaTag::DayNightWatchWearable::__cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRotation = value;
}
inline void GorillaTag::DayNightWatchWearable::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DayNightWatchWearable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DayNightWatchWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DayNightWatchWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DayNightWatchWearable* GorillaTag::DayNightWatchWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DayNightWatchWearable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DayNightWatchWearable::DayNightWatchWearable()   {
}
