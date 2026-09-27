#pragma once
// IWYU pragma private; include "Fusion/RangeExAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__RangeExAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::RangeExAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RangeExAttribute::*)(double_t, double_t)>(&::Fusion::RangeExAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f3d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RangeExAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::RangeExAttribute::__cordl_internal_get__Max_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Max_k__BackingField;
}
constexpr double_t const& Fusion::RangeExAttribute::__cordl_internal_get__Max_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Max_k__BackingField;
}
constexpr void Fusion::RangeExAttribute::__cordl_internal_set__Max_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Max_k__BackingField = value;
}
constexpr double_t& Fusion::RangeExAttribute::__cordl_internal_get__Min_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Min_k__BackingField;
}
constexpr double_t const& Fusion::RangeExAttribute::__cordl_internal_get__Min_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Min_k__BackingField;
}
constexpr void Fusion::RangeExAttribute::__cordl_internal_set__Min_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Min_k__BackingField = value;
}
constexpr bool& Fusion::RangeExAttribute::__cordl_internal_get_ClampMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampMin;
}
constexpr bool const& Fusion::RangeExAttribute::__cordl_internal_get_ClampMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampMin;
}
constexpr void Fusion::RangeExAttribute::__cordl_internal_set_ClampMin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClampMin = value;
}
constexpr bool& Fusion::RangeExAttribute::__cordl_internal_get_ClampMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampMax;
}
constexpr bool const& Fusion::RangeExAttribute::__cordl_internal_get_ClampMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampMax;
}
constexpr void Fusion::RangeExAttribute::__cordl_internal_set_ClampMax(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClampMax = value;
}
constexpr bool& Fusion::RangeExAttribute::__cordl_internal_get_UseSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSlider;
}
constexpr bool const& Fusion::RangeExAttribute::__cordl_internal_get_UseSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSlider;
}
constexpr void Fusion::RangeExAttribute::__cordl_internal_set_UseSlider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSlider = value;
}
inline void Fusion::RangeExAttribute::_ctor(double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RangeExAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::Fusion::RangeExAttribute* Fusion::RangeExAttribute::New_ctor(double_t  min, double_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RangeExAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::Fusion::RangeExAttribute::RangeExAttribute()   {
}
