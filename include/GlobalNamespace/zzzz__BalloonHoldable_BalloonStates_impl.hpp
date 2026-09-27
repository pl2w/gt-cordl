#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonHoldable_BalloonStates.hpp"
#include "GlobalNamespace/zzzz__BalloonHoldable_BalloonStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates::BalloonHoldable_BalloonStates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates::BalloonHoldable_BalloonStates()   {
}
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::Pop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::Waiting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::WaitForOwnershipTransfer{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::WaitForReDock{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::Refilling{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates  GlobalNamespace::BalloonHoldable_BalloonStates::Returning{static_cast<int32_t>(0x6)};
