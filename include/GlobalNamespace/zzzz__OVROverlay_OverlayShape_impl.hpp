#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay_OverlayShape.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVROverlay_OverlayShape::OVROverlay_OverlayShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_OverlayShape::OVROverlay_OverlayShape()   {
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::Quad{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::Cylinder{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::Cubemap{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::OffcenterCubemap{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::Equirect{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::ReconstructionPassthrough{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::SurfaceProjectedPassthrough{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::Fisheye{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::KeyboardHandsPassthrough{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::OVROverlay_OverlayShape  GlobalNamespace::OVROverlay_OverlayShape::KeyboardMaskedHandsPassthrough{static_cast<int32_t>(0xb)};
