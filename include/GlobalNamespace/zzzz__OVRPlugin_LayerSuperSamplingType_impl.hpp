#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSuperSamplingType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerSuperSamplingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType::OVRPlugin_LayerSuperSamplingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType::OVRPlugin_LayerSuperSamplingType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType  GlobalNamespace::OVRPlugin_LayerSuperSamplingType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType  GlobalNamespace::OVRPlugin_LayerSuperSamplingType::Normal{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType  GlobalNamespace::OVRPlugin_LayerSuperSamplingType::Quality{static_cast<int32_t>(0x100)};
