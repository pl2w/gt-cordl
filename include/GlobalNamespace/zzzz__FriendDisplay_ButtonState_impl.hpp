#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendDisplay_ButtonState.hpp"
#include "GlobalNamespace/zzzz__FriendDisplay_ButtonState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendDisplay_ButtonState::FriendDisplay_ButtonState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendDisplay_ButtonState::FriendDisplay_ButtonState()   {
}
constexpr ::GlobalNamespace::FriendDisplay_ButtonState  GlobalNamespace::FriendDisplay_ButtonState::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendDisplay_ButtonState  GlobalNamespace::FriendDisplay_ButtonState::Active{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendDisplay_ButtonState  GlobalNamespace::FriendDisplay_ButtonState::Alert{static_cast<int32_t>(0x2)};
