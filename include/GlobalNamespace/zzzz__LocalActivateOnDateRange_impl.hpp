#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalActivateOnDateRange.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalActivateOnDateRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalActivateOnDateRange.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalActivateOnDateRange::*)()>(&::GlobalNamespace::LocalActivateOnDateRange::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x567bb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalActivateOnDateRange.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalActivateOnDateRange::*)()>(&::GlobalNamespace::LocalActivateOnDateRange::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalActivateOnDateRange.InitActiveTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalActivateOnDateRange::*)()>(&::GlobalNamespace::LocalActivateOnDateRange::InitActiveTimes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x567bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"InitActiveTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalActivateOnDateRange.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalActivateOnDateRange::*)()>(&::GlobalNamespace::LocalActivateOnDateRange::LateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x567bc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalActivateOnDateRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalActivateOnDateRange::*)()>(&::GlobalNamespace::LocalActivateOnDateRange::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x567bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationYear;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationYear;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationYear = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationMonth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationMonth;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationMonth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationMonth;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationMonth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationMonth = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationDay;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationDay;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationDay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationDay = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationHour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationHour;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationHour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationHour;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationHour(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationHour = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationMinute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationMinute;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationMinute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationMinute;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationMinute(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationMinute = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationSecond;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationSecond;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationSecond = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationYear;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationYear;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationYear = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationMonth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationMonth;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationMonth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationMonth;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationMonth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationMonth = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationDay;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationDay;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationDay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationDay = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationHour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationHour;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationHour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationHour;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationHour(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationHour = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationMinute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationMinute;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationMinute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationMinute;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationMinute(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationMinute = value;
}
constexpr int32_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationSecond;
}
constexpr int32_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationSecond;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationSecond = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_gameObjectsToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsToActivate;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_gameObjectsToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsToActivate;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_gameObjectsToActivate(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectsToActivate = value;
}
constexpr bool& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr ::System::DateTime& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr ::System::DateTime const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_activationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_activationTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTime = value;
}
constexpr ::System::DateTime& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationTime;
}
constexpr ::System::DateTime const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_deactivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivationTime;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_deactivationTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivationTime = value;
}
constexpr double_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_dbgTimeUntilActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgTimeUntilActivation;
}
constexpr double_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_dbgTimeUntilActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgTimeUntilActivation;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_dbgTimeUntilActivation(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dbgTimeUntilActivation = value;
}
constexpr double_t& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_dbgTimeUntilDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgTimeUntilDeactivation;
}
constexpr double_t const& GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_get_dbgTimeUntilDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgTimeUntilDeactivation;
}
constexpr void GlobalNamespace::LocalActivateOnDateRange::__cordl_internal_set_dbgTimeUntilDeactivation(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dbgTimeUntilDeactivation = value;
}
inline void GlobalNamespace::LocalActivateOnDateRange::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalActivateOnDateRange::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalActivateOnDateRange::InitActiveTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"InitActiveTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalActivateOnDateRange::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalActivateOnDateRange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalActivateOnDateRange*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalActivateOnDateRange* GlobalNamespace::LocalActivateOnDateRange::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalActivateOnDateRange*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalActivateOnDateRange::LocalActivateOnDateRange()   {
}
