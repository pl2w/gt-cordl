#pragma once
// IWYU pragma private; include "Drawing/AllowedDelay.hpp"
#include "Drawing/zzzz__AllowedDelay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::AllowedDelay::AllowedDelay(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Drawing::AllowedDelay::AllowedDelay()   {
}
constexpr ::Drawing::AllowedDelay  Drawing::AllowedDelay::EndOfFrame{static_cast<int32_t>(0x0)};
constexpr ::Drawing::AllowedDelay  Drawing::AllowedDelay::Infinite{static_cast<int32_t>(0x1)};
