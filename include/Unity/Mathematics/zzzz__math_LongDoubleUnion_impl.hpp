#pragma once
// IWYU pragma private; include "Unity/Mathematics/math_LongDoubleUnion.hpp"
#include "Unity/Mathematics/zzzz__math_LongDoubleUnion_def.hpp"
constexpr int64_t& GlobalNamespace::math_LongDoubleUnion::__cordl_internal_get_longValue()  {
return this->___longValue;
}
constexpr int64_t const& GlobalNamespace::math_LongDoubleUnion::__cordl_internal_get_longValue() const {
return this->___longValue;
}
constexpr void GlobalNamespace::math_LongDoubleUnion::__cordl_internal_set_longValue(int64_t  value)  {
this->___longValue = value;
}
constexpr double_t& GlobalNamespace::math_LongDoubleUnion::__cordl_internal_get_doubleValue()  {
return this->___doubleValue;
}
constexpr double_t const& GlobalNamespace::math_LongDoubleUnion::__cordl_internal_get_doubleValue() const {
return this->___doubleValue;
}
constexpr void GlobalNamespace::math_LongDoubleUnion::__cordl_internal_set_doubleValue(double_t  value)  {
this->___doubleValue = value;
}
// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::math_LongDoubleUnion::math_LongDoubleUnion(int64_t  longValue, double_t  doubleValue) noexcept  {
this->longValue = longValue;
this->doubleValue = doubleValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::math_LongDoubleUnion::math_LongDoubleUnion()   {
}
