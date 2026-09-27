#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer_RenderMode.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_RenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode::GizmoRenderer_RenderMode(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode::GizmoRenderer_RenderMode()   {
}
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode  GlobalNamespace::GizmoRenderer_RenderMode::Never{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode  GlobalNamespace::GizmoRenderer_RenderMode::InEditor{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode  GlobalNamespace::GizmoRenderer_RenderMode::InBuild{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode  GlobalNamespace::GizmoRenderer_RenderMode::Always{static_cast<uint32_t>(0x3u)};
