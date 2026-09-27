#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RangeSliderAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__RangeSliderAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::RangeSliderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::RangeSliderAttribute::*)(float_t, float_t)>(&::Unity::Cinemachine::RangeSliderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb368c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RangeSliderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_get_Min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Min;
}
constexpr float_t const& Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_get_Min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Min;
}
constexpr void Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_set_Min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Min = value;
}
constexpr float_t& Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_get_Max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr float_t const& Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_get_Max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr void Unity::Cinemachine::RangeSliderAttribute::__cordl_internal_set_Max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Max = value;
}
inline void Unity::Cinemachine::RangeSliderAttribute::_ctor(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RangeSliderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::Unity::Cinemachine::RangeSliderAttribute* Unity::Cinemachine::RangeSliderAttribute::New_ctor(float_t  min, float_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::RangeSliderAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::RangeSliderAttribute::RangeSliderAttribute()   {
}
