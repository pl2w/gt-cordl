#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeSpanDrawerSettingsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_impl.hpp"
#include "UniLabs/Time/zzzz__TimeSpanDrawerSettingsAttribute_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::TimeSpanDrawerSettingsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanDrawerSettingsAttribute::*)()>(&::UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeSpanDrawerSettingsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanDrawerSettingsAttribute::*)(::UniLabs::Time::TimeUnit, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b6be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeSpanDrawerSettingsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanDrawerSettingsAttribute::*)(::UniLabs::Time::TimeUnit, bool)>(&::UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b6be58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeSpanDrawerSettingsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanDrawerSettingsAttribute::*)(bool)>(&::UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b6be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UniLabs::Time::TimeUnit& UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_get_HighestUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HighestUnit;
}
constexpr ::UniLabs::Time::TimeUnit const& UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_get_HighestUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HighestUnit;
}
constexpr void UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_set_HighestUnit(::UniLabs::Time::TimeUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HighestUnit = value;
}
constexpr ::UniLabs::Time::TimeUnit& UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_get_LowestUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LowestUnit;
}
constexpr ::UniLabs::Time::TimeUnit const& UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_get_LowestUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LowestUnit;
}
constexpr void UniLabs::Time::TimeSpanDrawerSettingsAttribute::__cordl_internal_set_LowestUnit(::UniLabs::Time::TimeUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LowestUnit = value;
}
inline void UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor(::UniLabs::Time::TimeUnit  highestUnit, ::UniLabs::Time::TimeUnit  lowestUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highestUnit, lowestUnit);
}
inline void UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor(::UniLabs::Time::TimeUnit  highestUnit, bool  drawMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highestUnit, drawMilliseconds);
}
inline void UniLabs::Time::TimeSpanDrawerSettingsAttribute::_ctor(bool  drawMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawMilliseconds);
}
inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* UniLabs::Time::TimeSpanDrawerSettingsAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>());
}
inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* UniLabs::Time::TimeSpanDrawerSettingsAttribute::New_ctor(::UniLabs::Time::TimeUnit  highestUnit, ::UniLabs::Time::TimeUnit  lowestUnit)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(highestUnit, lowestUnit));
}
inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* UniLabs::Time::TimeSpanDrawerSettingsAttribute::New_ctor(::UniLabs::Time::TimeUnit  highestUnit, bool  drawMilliseconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(highestUnit, drawMilliseconds));
}
inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* UniLabs::Time::TimeSpanDrawerSettingsAttribute::New_ctor(bool  drawMilliseconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanDrawerSettingsAttribute*>(drawMilliseconds));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeSpanDrawerSettingsAttribute::TimeSpanDrawerSettingsAttribute()   {
}
