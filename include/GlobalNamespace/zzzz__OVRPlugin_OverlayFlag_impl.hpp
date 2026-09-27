#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_OverlayFlag.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_OverlayFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag::OVRPlugin_OverlayFlag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag::OVRPlugin_OverlayFlag()   {
}
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::OnTop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::HeadLocked{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::NoDepth{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ExpensiveSuperSample{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::EfficientSuperSample{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::EfficientSharpen{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::BicubicFiltering{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ExpensiveSharpen{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::SecureContent{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ShapeFlag_Quad{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ShapeFlag_Cylinder{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ShapeFlag_Cubemap{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ShapeFlag_OffcenterCubemap{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::ShapeFlagRangeMask{static_cast<int32_t>(0xf0)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::Hidden{static_cast<int32_t>(0x200)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::AutoFiltering{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::OVRPlugin_OverlayFlag  GlobalNamespace::OVRPlugin_OverlayFlag::PremultipliedAlpha{static_cast<int32_t>(0x100000)};
