#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_MrcCameraType.hpp"
#include "GlobalNamespace/zzzz__OVRManager_MrcCameraType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRManager_MrcCameraType::OVRManager_MrcCameraType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_MrcCameraType::OVRManager_MrcCameraType()   {
}
constexpr ::GlobalNamespace::OVRManager_MrcCameraType  GlobalNamespace::OVRManager_MrcCameraType::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRManager_MrcCameraType  GlobalNamespace::OVRManager_MrcCameraType::Foreground{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRManager_MrcCameraType  GlobalNamespace::OVRManager_MrcCameraType::Background{static_cast<int32_t>(0x2)};
