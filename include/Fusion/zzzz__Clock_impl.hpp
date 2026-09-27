#pragma once
// IWYU pragma private; include "Fusion/Clock.hpp"
#include "Fusion/zzzz__Clock_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Clock::Clock(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Clock::Clock()   {
}
constexpr ::Fusion::Clock  Fusion::Clock::Input{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Clock  Fusion::Clock::Local{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Clock  Fusion::Clock::Remote{static_cast<int32_t>(0x2)};
