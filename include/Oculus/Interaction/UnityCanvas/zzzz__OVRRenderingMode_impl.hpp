#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/OVRRenderingMode.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__OVRRenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode::OVRRenderingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode::OVRRenderingMode()   {
}
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  Oculus::Interaction::UnityCanvas::OVRRenderingMode::AlphaBlended{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  Oculus::Interaction::UnityCanvas::OVRRenderingMode::AlphaCutout{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  Oculus::Interaction::UnityCanvas::OVRRenderingMode::Opaque{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  Oculus::Interaction::UnityCanvas::OVRRenderingMode::Overlay{static_cast<int32_t>(0x64)};
constexpr ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  Oculus::Interaction::UnityCanvas::OVRRenderingMode::Underlay{static_cast<int32_t>(0x65)};
