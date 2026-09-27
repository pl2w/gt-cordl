#pragma once
// IWYU pragma private; include "BoingKit/Codec_IntFloat.hpp"
#include "BoingKit/zzzz__Codec_IntFloat_def.hpp"
constexpr int32_t& GlobalNamespace::Codec_IntFloat::__cordl_internal_get_IntValue()  {
return this->___IntValue;
}
constexpr int32_t const& GlobalNamespace::Codec_IntFloat::__cordl_internal_get_IntValue() const {
return this->___IntValue;
}
constexpr void GlobalNamespace::Codec_IntFloat::__cordl_internal_set_IntValue(int32_t  value)  {
this->___IntValue = value;
}
constexpr float_t& GlobalNamespace::Codec_IntFloat::__cordl_internal_get_FloatValue()  {
return this->___FloatValue;
}
constexpr float_t const& GlobalNamespace::Codec_IntFloat::__cordl_internal_get_FloatValue() const {
return this->___FloatValue;
}
constexpr void GlobalNamespace::Codec_IntFloat::__cordl_internal_set_FloatValue(float_t  value)  {
this->___FloatValue = value;
}
// Ctor Parameters [CppParam { name: "IntValue", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FloatValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Codec_IntFloat::Codec_IntFloat(int32_t  IntValue, float_t  FloatValue) noexcept  {
this->IntValue = IntValue;
this->FloatValue = FloatValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Codec_IntFloat::Codec_IntFloat()   {
}
