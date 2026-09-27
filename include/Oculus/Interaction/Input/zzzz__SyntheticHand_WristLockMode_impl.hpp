#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SyntheticHand_WristLockMode.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_WristLockMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SyntheticHand_WristLockMode::SyntheticHand_WristLockMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyntheticHand_WristLockMode::SyntheticHand_WristLockMode()   {
}
constexpr ::GlobalNamespace::SyntheticHand_WristLockMode  GlobalNamespace::SyntheticHand_WristLockMode::Position{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SyntheticHand_WristLockMode  GlobalNamespace::SyntheticHand_WristLockMode::Rotation{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SyntheticHand_WristLockMode  GlobalNamespace::SyntheticHand_WristLockMode::Full{static_cast<int32_t>(0x3)};
