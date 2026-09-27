#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderTrafficLight_LightState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderTrafficLight_LightState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState::BuilderTrafficLight_LightState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState::BuilderTrafficLight_LightState()   {
}
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState  GlobalNamespace::BuilderTrafficLight_LightState::Red{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState  GlobalNamespace::BuilderTrafficLight_LightState::Yellow{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState  GlobalNamespace::BuilderTrafficLight_LightState::Green{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderTrafficLight_LightState  GlobalNamespace::BuilderTrafficLight_LightState::Off{static_cast<int32_t>(0x3)};
