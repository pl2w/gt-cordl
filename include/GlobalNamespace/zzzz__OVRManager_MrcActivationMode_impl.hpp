#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_MrcActivationMode.hpp"
#include "GlobalNamespace/zzzz__OVRManager_MrcActivationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode::OVRManager_MrcActivationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode::OVRManager_MrcActivationMode()   {
}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode  GlobalNamespace::OVRManager_MrcActivationMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode  GlobalNamespace::OVRManager_MrcActivationMode::Disabled{static_cast<int32_t>(0x1)};
