#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StreetLightSaber_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__StreetLightSaber_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StreetLightSaber_State::StreetLightSaber_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreetLightSaber_State::StreetLightSaber_State()   {
}
constexpr ::GlobalNamespace::StreetLightSaber_State  GlobalNamespace::StreetLightSaber_State::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StreetLightSaber_State  GlobalNamespace::StreetLightSaber_State::Green{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StreetLightSaber_State  GlobalNamespace::StreetLightSaber_State::Red{static_cast<int32_t>(0x2)};
