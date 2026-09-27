#pragma once
// IWYU pragma private; include "Fusion/DrawIfMode.hpp"
#include "Fusion/zzzz__DrawIfMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::DrawIfMode::DrawIfMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::DrawIfMode::DrawIfMode()   {
}
constexpr ::Fusion::DrawIfMode  Fusion::DrawIfMode::ReadOnly{static_cast<int32_t>(0x0)};
constexpr ::Fusion::DrawIfMode  Fusion::DrawIfMode::Hide{static_cast<int32_t>(0x1)};
