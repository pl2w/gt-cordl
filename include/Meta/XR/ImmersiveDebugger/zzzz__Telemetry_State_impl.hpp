#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Telemetry_State.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Telemetry_State::Telemetry_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_State::Telemetry_State()   {
}
constexpr ::GlobalNamespace::Telemetry_State  GlobalNamespace::Telemetry_State::OnStart{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Telemetry_State  GlobalNamespace::Telemetry_State::OnFocusLost{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Telemetry_State  GlobalNamespace::Telemetry_State::OnDisable{static_cast<int32_t>(0x2)};
