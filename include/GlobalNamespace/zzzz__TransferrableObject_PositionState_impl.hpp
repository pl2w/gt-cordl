#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject_PositionState.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransferrableObject_PositionState::TransferrableObject_PositionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObject_PositionState::TransferrableObject_PositionState()   {
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::OnLeftArm{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::OnRightArm{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::InLeftHand{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::InRightHand{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::OnChest{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::OnLeftShoulder{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::OnRightShoulder{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::Dropped{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::TransferrableObject_PositionState  GlobalNamespace::TransferrableObject_PositionState::None{static_cast<int32_t>(0x0)};
