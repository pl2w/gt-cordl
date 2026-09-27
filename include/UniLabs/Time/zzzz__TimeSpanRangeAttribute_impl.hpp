#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeSpanRangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_impl.hpp"
#include "UniLabs/Time/zzzz__TimeSpanRangeAttribute_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::TimeSpanRangeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanRangeAttribute::*)(::StringW, bool, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeSpanRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b6bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeSpanRangeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeSpanRangeAttribute::*)(::StringW, ::StringW, bool, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeSpanRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b6bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_MinGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinGetter;
}
constexpr ::StringW const& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_MinGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinGetter;
}
constexpr void UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_set_MinGetter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinGetter = value;
}
constexpr ::StringW& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_MaxGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetter;
}
constexpr ::StringW const& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_MaxGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGetter;
}
constexpr void UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_set_MaxGetter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxGetter = value;
}
constexpr ::UniLabs::Time::TimeUnit& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_SnappingUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnappingUnit;
}
constexpr ::UniLabs::Time::TimeUnit const& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_SnappingUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnappingUnit;
}
constexpr void UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_set_SnappingUnit(::UniLabs::Time::TimeUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SnappingUnit = value;
}
constexpr bool& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_Inline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inline;
}
constexpr bool const& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_Inline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inline;
}
constexpr void UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_set_Inline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Inline = value;
}
constexpr ::StringW& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_DisableMinMaxIf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableMinMaxIf;
}
constexpr ::StringW const& UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_get_DisableMinMaxIf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableMinMaxIf;
}
constexpr void UniLabs::Time::TimeSpanRangeAttribute::__cordl_internal_set_DisableMinMaxIf(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableMinMaxIf = value;
}
inline void UniLabs::Time::TimeSpanRangeAttribute::_ctor(::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxGetter, _cordl_inline, snappingUnit);
}
inline void UniLabs::Time::TimeSpanRangeAttribute::_ctor(::StringW  minGetter, ::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeSpanRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minGetter, maxGetter, _cordl_inline, snappingUnit);
}
inline ::UniLabs::Time::TimeSpanRangeAttribute* UniLabs::Time::TimeSpanRangeAttribute::New_ctor(::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanRangeAttribute*>(maxGetter, _cordl_inline, snappingUnit));
}
inline ::UniLabs::Time::TimeSpanRangeAttribute* UniLabs::Time::TimeSpanRangeAttribute::New_ctor(::StringW  minGetter, ::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeSpanRangeAttribute*>(minGetter, maxGetter, _cordl_inline, snappingUnit));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeSpanRangeAttribute::TimeSpanRangeAttribute()   {
}
