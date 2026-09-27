#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoor_DoorState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoor_DoorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState::BuilderPieceDoor_DoorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState::BuilderPieceDoor_DoorState()   {
}
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState  GlobalNamespace::BuilderPieceDoor_DoorState::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState  GlobalNamespace::BuilderPieceDoor_DoorState::Closing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState  GlobalNamespace::BuilderPieceDoor_DoorState::Open{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState  GlobalNamespace::BuilderPieceDoor_DoorState::Opening{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPieceDoor_DoorState  GlobalNamespace::BuilderPieceDoor_DoorState::HeldOpen{static_cast<int32_t>(0x4)};
