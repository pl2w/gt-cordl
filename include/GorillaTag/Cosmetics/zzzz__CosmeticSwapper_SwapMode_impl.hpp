#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper_SwapMode.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_SwapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode::CosmeticSwapper_SwapMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode::CosmeticSwapper_SwapMode()   {
}
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode  GlobalNamespace::CosmeticSwapper_SwapMode::AllAtOnce{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode  GlobalNamespace::CosmeticSwapper_SwapMode::StepByStep{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode  GlobalNamespace::CosmeticSwapper_SwapMode::Random{static_cast<int32_t>(0x2)};
