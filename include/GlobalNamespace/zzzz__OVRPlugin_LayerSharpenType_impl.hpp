#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSharpenType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerSharpenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType::OVRPlugin_LayerSharpenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType::OVRPlugin_LayerSharpenType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType  GlobalNamespace::OVRPlugin_LayerSharpenType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType  GlobalNamespace::OVRPlugin_LayerSharpenType::Normal{static_cast<int32_t>(0x2000)};
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType  GlobalNamespace::OVRPlugin_LayerSharpenType::Quality{static_cast<int32_t>(0x10000)};
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType  GlobalNamespace::OVRPlugin_LayerSharpenType::Automatic{static_cast<int32_t>(0x40000)};
