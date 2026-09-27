#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRProfile_State.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRProfile_State::OVRProfile_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRProfile_State::OVRProfile_State()   {
}
constexpr ::GlobalNamespace::OVRProfile_State  GlobalNamespace::OVRProfile_State::NOT_TRIGGERED{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRProfile_State  GlobalNamespace::OVRProfile_State::LOADING{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRProfile_State  GlobalNamespace::OVRProfile_State::READY{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRProfile_State  GlobalNamespace::OVRProfile_State::ERROR{static_cast<int32_t>(0x3)};
