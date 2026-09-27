#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon_BarrelCannonState.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState::BarrelCannon_BarrelCannonState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState::BarrelCannon_BarrelCannonState()   {
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::Loaded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::MovingToFirePosition{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::Firing{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::PostFireCooldown{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState  GlobalNamespace::BarrelCannon_BarrelCannonState::ReturningToIdlePosition{static_cast<int32_t>(0x5)};
