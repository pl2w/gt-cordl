#pragma once
// IWYU pragma private; include "Meta/XR/Eye.hpp"
#include "Meta/XR/zzzz__Eye_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Eye::Eye(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Eye::Eye()   {
}
constexpr ::Meta::XR::Eye  Meta::XR::Eye::Left{static_cast<int32_t>(0x0)};
constexpr ::Meta::XR::Eye  Meta::XR::Eye::Right{static_cast<int32_t>(0x1)};
constexpr ::Meta::XR::Eye  Meta::XR::Eye::Both{static_cast<int32_t>(0x2)};
