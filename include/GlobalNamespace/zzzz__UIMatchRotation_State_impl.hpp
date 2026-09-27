#pragma once
// IWYU pragma private; include "GlobalNamespace/UIMatchRotation_State.hpp"
#include "GlobalNamespace/zzzz__UIMatchRotation_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIMatchRotation_State::UIMatchRotation_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIMatchRotation_State::UIMatchRotation_State()   {
}
constexpr ::GlobalNamespace::UIMatchRotation_State  GlobalNamespace::UIMatchRotation_State::Ready{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UIMatchRotation_State  GlobalNamespace::UIMatchRotation_State::Rotating{static_cast<int32_t>(0x1)};
