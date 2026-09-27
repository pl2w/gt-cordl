#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BlendFactor.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BlendFactor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor::OVRPlugin_BlendFactor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor::OVRPlugin_BlendFactor()   {
}
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::Zero{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::One{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::SrcAlpha{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::OneMinusSrcAlpha{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::DstAlpha{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_BlendFactor  GlobalNamespace::OVRPlugin_BlendFactor::OneMinusDstAlpha{static_cast<int32_t>(0x5)};
