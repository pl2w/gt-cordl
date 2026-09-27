#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandStatus.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HandStatus::OVRPlugin_HandStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HandStatus::OVRPlugin_HandStatus()   {
}
constexpr ::GlobalNamespace::OVRPlugin_HandStatus  GlobalNamespace::OVRPlugin_HandStatus::HandTracked{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_HandStatus  GlobalNamespace::OVRPlugin_HandStatus::InputStateValid{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_HandStatus  GlobalNamespace::OVRPlugin_HandStatus::SystemGestureInProgress{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRPlugin_HandStatus  GlobalNamespace::OVRPlugin_HandStatus::DominantHand{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::OVRPlugin_HandStatus  GlobalNamespace::OVRPlugin_HandStatus::MenuPressed{static_cast<int32_t>(0x100)};
