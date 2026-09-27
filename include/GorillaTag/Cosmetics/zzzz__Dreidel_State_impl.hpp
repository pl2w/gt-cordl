#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Dreidel_State::Dreidel_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Dreidel_State::Dreidel_State()   {
}
constexpr ::GlobalNamespace::Dreidel_State  GlobalNamespace::Dreidel_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Dreidel_State  GlobalNamespace::Dreidel_State::FindingSurface{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Dreidel_State  GlobalNamespace::Dreidel_State::Spinning{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Dreidel_State  GlobalNamespace::Dreidel_State::Falling{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Dreidel_State  GlobalNamespace::Dreidel_State::Fallen{static_cast<int32_t>(0x4)};
