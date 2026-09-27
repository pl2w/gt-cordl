#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_XrApi.hpp"
#include "GlobalNamespace/zzzz__OVRManager_XrApi_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRManager_XrApi::OVRManager_XrApi(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_XrApi::OVRManager_XrApi()   {
}
constexpr ::GlobalNamespace::OVRManager_XrApi  GlobalNamespace::OVRManager_XrApi::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRManager_XrApi  GlobalNamespace::OVRManager_XrApi::CAPI{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRManager_XrApi  GlobalNamespace::OVRManager_XrApi::VRAPI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRManager_XrApi  GlobalNamespace::OVRManager_XrApi::OpenXR{static_cast<int32_t>(0x3)};
