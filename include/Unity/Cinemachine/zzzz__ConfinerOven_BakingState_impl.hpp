#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_BakingState.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfinerOven_BakingState::ConfinerOven_BakingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfinerOven_BakingState::ConfinerOven_BakingState()   {
}
constexpr ::GlobalNamespace::ConfinerOven_BakingState  GlobalNamespace::ConfinerOven_BakingState::BAKING{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConfinerOven_BakingState  GlobalNamespace::ConfinerOven_BakingState::BAKED{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConfinerOven_BakingState  GlobalNamespace::ConfinerOven_BakingState::TIMEOUT{static_cast<int32_t>(0x2)};
