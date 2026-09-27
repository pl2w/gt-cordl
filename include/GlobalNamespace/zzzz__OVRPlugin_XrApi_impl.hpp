#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_XrApi.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_XrApi_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_XrApi::OVRPlugin_XrApi(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_XrApi::OVRPlugin_XrApi()   {
}
constexpr ::GlobalNamespace::OVRPlugin_XrApi  GlobalNamespace::OVRPlugin_XrApi::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_XrApi  GlobalNamespace::OVRPlugin_XrApi::CAPI{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_XrApi  GlobalNamespace::OVRPlugin_XrApi::VRAPI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_XrApi  GlobalNamespace::OVRPlugin_XrApi::OpenXR{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_XrApi  GlobalNamespace::OVRPlugin_XrApi::EnumSize{static_cast<int32_t>(0x7fffffff)};
