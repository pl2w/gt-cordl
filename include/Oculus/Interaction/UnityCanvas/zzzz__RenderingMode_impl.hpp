#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/RenderingMode.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__RenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::UnityCanvas::RenderingMode::RenderingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::RenderingMode::RenderingMode()   {
}
constexpr ::Oculus::Interaction::UnityCanvas::RenderingMode  Oculus::Interaction::UnityCanvas::RenderingMode::AlphaBlended{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::UnityCanvas::RenderingMode  Oculus::Interaction::UnityCanvas::RenderingMode::AlphaCutout{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::UnityCanvas::RenderingMode  Oculus::Interaction::UnityCanvas::RenderingMode::Opaque{static_cast<int32_t>(0x2)};
