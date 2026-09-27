#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_OptionalBool.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_OptionalBool_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_OptionalBool::OVRPlugin_OptionalBool(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_OptionalBool::OVRPlugin_OptionalBool()   {
}
constexpr ::GlobalNamespace::OVRPlugin_OptionalBool  GlobalNamespace::OVRPlugin_OptionalBool::False{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_OptionalBool  GlobalNamespace::OVRPlugin_OptionalBool::True{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_OptionalBool  GlobalNamespace::OVRPlugin_OptionalBool::Unknown{static_cast<int32_t>(0x2)};
