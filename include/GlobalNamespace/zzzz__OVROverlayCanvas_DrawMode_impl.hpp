#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_DrawMode.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_DrawMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode::OVROverlayCanvas_DrawMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode::OVROverlayCanvas_DrawMode()   {
}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::Opaque{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::OpaqueWithClip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::Transparent{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::TransparentDefaultAlpha{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::TransparentCorrectAlpha{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode  GlobalNamespace::OVROverlayCanvas_DrawMode::AlphaToMask{static_cast<int32_t>(0x4)};
