#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup_RenderMode.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode::BakeryLightmapGroup_RenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode::BakeryLightmapGroup_RenderMode()   {
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::FullLighting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::Indirect{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::Shadowmask{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::Subtractive{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::AmbientOcclusionOnly{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode  GlobalNamespace::BakeryLightmapGroup_RenderMode::Auto{static_cast<int32_t>(0x3e8)};
