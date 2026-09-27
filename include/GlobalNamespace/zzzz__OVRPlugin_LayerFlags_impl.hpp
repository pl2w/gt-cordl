#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerFlags.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags::OVRPlugin_LayerFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags::OVRPlugin_LayerFlags()   {
}
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::Static{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::LoadingScreen{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::SymmetricFov{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::TextureOriginAtBottomLeft{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::ChromaticAberrationCorrection{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::NoAllocation{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::ProtectedContent{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::AndroidSurfaceSwapChain{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::OVRPlugin_LayerFlags  GlobalNamespace::OVRPlugin_LayerFlags::BicubicFiltering{static_cast<int32_t>(0x4000)};
