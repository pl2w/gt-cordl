#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_CreateState.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_CreateState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState::OVRPassthroughColorLut_CreateState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState::OVRPassthroughColorLut_CreateState()   {
}
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState  GlobalNamespace::OVRPassthroughColorLut_CreateState::Invalid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState  GlobalNamespace::OVRPassthroughColorLut_CreateState::Pending{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState  GlobalNamespace::OVRPassthroughColorLut_CreateState::Created{static_cast<int32_t>(0x2)};
