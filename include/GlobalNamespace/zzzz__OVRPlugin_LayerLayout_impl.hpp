#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerLayout.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout::OVRPlugin_LayerLayout(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout::OVRPlugin_LayerLayout()   {
}
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout  GlobalNamespace::OVRPlugin_LayerLayout::Stereo{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout  GlobalNamespace::OVRPlugin_LayerLayout::Mono{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout  GlobalNamespace::OVRPlugin_LayerLayout::DoubleWide{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout  GlobalNamespace::OVRPlugin_LayerLayout::Array{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_LayerLayout  GlobalNamespace::OVRPlugin_LayerLayout::EnumSize{static_cast<int32_t>(0xf)};
