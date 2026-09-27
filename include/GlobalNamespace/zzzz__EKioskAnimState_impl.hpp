#pragma once
// IWYU pragma private; include "GlobalNamespace/EKioskAnimState.hpp"
#include "GlobalNamespace/zzzz__EKioskAnimState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EKioskAnimState::EKioskAnimState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EKioskAnimState::EKioskAnimState()   {
}
constexpr ::GlobalNamespace::EKioskAnimState  GlobalNamespace::EKioskAnimState::Closing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EKioskAnimState  GlobalNamespace::EKioskAnimState::Opening{static_cast<int32_t>(0x1)};
