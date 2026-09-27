#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaModifyDayNightTrigger.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaModifyDayNightTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaModifyDayNightTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaModifyDayNightTrigger::*)()>(&::GlobalNamespace::GorillaModifyDayNightTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5919e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaModifyDayNightTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaModifyDayNightTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaModifyDayNightTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaModifyDayNightTrigger::*)()>(&::GlobalNamespace::GorillaModifyDayNightTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5919fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaModifyDayNightTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_clearModifiedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearModifiedTime;
}
constexpr bool const& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_clearModifiedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearModifiedTime;
}
constexpr void GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_set_clearModifiedTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearModifiedTime = value;
}
constexpr int32_t& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_timeOfDayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_timeOfDayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayIndex;
}
constexpr void GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_set_timeOfDayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDayIndex = value;
}
constexpr bool& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_setFixedWeather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setFixedWeather;
}
constexpr bool const& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_setFixedWeather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setFixedWeather;
}
constexpr void GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_set_setFixedWeather(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setFixedWeather = value;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_fixedWeather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeather;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_get_fixedWeather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedWeather;
}
constexpr void GlobalNamespace::GorillaModifyDayNightTrigger::__cordl_internal_set_fixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedWeather = value;
}
inline void GlobalNamespace::GorillaModifyDayNightTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaModifyDayNightTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaModifyDayNightTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaModifyDayNightTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaModifyDayNightTrigger* GlobalNamespace::GorillaModifyDayNightTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaModifyDayNightTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaModifyDayNightTrigger::GorillaModifyDayNightTrigger()   {
}
