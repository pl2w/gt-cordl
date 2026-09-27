#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_PassthroughInitializationState.hpp"
#include "GlobalNamespace/zzzz__OVRManager_PassthroughInitializationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState::OVRManager_PassthroughInitializationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState::OVRManager_PassthroughInitializationState()   {
}
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState  GlobalNamespace::OVRManager_PassthroughInitializationState::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState  GlobalNamespace::OVRManager_PassthroughInitializationState::Pending{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState  GlobalNamespace::OVRManager_PassthroughInitializationState::Initialized{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState  GlobalNamespace::OVRManager_PassthroughInitializationState::Failed{static_cast<int32_t>(0x3)};
