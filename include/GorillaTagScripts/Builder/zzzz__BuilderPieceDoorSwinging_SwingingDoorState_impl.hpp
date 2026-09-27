#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceDoorSwinging_SwingingDoorState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceDoorSwinging_SwingingDoorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::BuilderPieceDoorSwinging_SwingingDoorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::BuilderPieceDoorSwinging_SwingingDoorState()   {
}
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::ClosingOut{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::OpenOut{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::OpeningOut{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::HeldOpenOut{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::ClosingIn{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::OpenIn{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::OpeningIn{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState  GlobalNamespace::BuilderPieceDoorSwinging_SwingingDoorState::HeldOpenIn{static_cast<int32_t>(0x8)};
