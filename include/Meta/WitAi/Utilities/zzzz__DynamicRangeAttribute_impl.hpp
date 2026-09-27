#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/DynamicRangeAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__DynamicRangeAttribute_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::DynamicRangeAttribute.set_RangeProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::DynamicRangeAttribute::*)(::StringW)>(&::Meta::WitAi::Utilities::DynamicRangeAttribute::set_RangeProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e84970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_RangeProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::DynamicRangeAttribute.set_DefaultMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::DynamicRangeAttribute::*)(float_t)>(&::Meta::WitAi::Utilities::DynamicRangeAttribute::set_DefaultMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e84978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_DefaultMin", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::DynamicRangeAttribute.set_DefaultMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::DynamicRangeAttribute::*)(float_t)>(&::Meta::WitAi::Utilities::DynamicRangeAttribute::set_DefaultMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e84980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_DefaultMax", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::DynamicRangeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::DynamicRangeAttribute::*)(::StringW, float_t, float_t)>(&::Meta::WitAi::Utilities::DynamicRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e84988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__RangeProperty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RangeProperty_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__RangeProperty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RangeProperty_k__BackingField;
}
constexpr void Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_set__RangeProperty_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RangeProperty_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__DefaultMin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultMin_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__DefaultMin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultMin_k__BackingField;
}
constexpr void Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_set__DefaultMin_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultMin_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__DefaultMax_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultMax_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_get__DefaultMax_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultMax_k__BackingField;
}
constexpr void Meta::WitAi::Utilities::DynamicRangeAttribute::__cordl_internal_set__DefaultMax_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultMax_k__BackingField = value;
}
inline void Meta::WitAi::Utilities::DynamicRangeAttribute::set_RangeProperty(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_RangeProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Utilities::DynamicRangeAttribute::set_DefaultMin(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_DefaultMin", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Utilities::DynamicRangeAttribute::set_DefaultMax(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {"set_DefaultMax", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Utilities::DynamicRangeAttribute::_ctor(::StringW  rangeProperty, float_t  defaultMin, float_t  defaultMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rangeProperty, defaultMin, defaultMax);
}
inline ::Meta::WitAi::Utilities::DynamicRangeAttribute* Meta::WitAi::Utilities::DynamicRangeAttribute::New_ctor(::StringW  rangeProperty, float_t  defaultMin, float_t  defaultMax)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::DynamicRangeAttribute*>(rangeProperty, defaultMin, defaultMax));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::DynamicRangeAttribute::DynamicRangeAttribute()   {
}
