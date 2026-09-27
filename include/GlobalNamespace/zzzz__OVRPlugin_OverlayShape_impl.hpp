#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_OverlayShape.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_OverlayShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape::OVRPlugin_OverlayShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape::OVRPlugin_OverlayShape()   {
}
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::Quad{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::Cylinder{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::Cubemap{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::OffcenterCubemap{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::Equirect{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::ReconstructionPassthrough{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::SurfaceProjectedPassthrough{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::Fisheye{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::KeyboardHandsPassthrough{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayShape  GlobalNamespace::OVRPlugin_OverlayShape::KeyboardMaskedHandsPassthrough{static_cast<int32_t>(0xb)};
