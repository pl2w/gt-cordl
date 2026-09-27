#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LogLevel.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LogLevel::OVRPlugin_LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LogLevel::OVRPlugin_LogLevel()   {
}
constexpr ::GlobalNamespace::OVRPlugin_LogLevel  GlobalNamespace::OVRPlugin_LogLevel::Debug{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_LogLevel  GlobalNamespace::OVRPlugin_LogLevel::Info{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_LogLevel  GlobalNamespace::OVRPlugin_LogLevel::Error{static_cast<int32_t>(0x2)};
