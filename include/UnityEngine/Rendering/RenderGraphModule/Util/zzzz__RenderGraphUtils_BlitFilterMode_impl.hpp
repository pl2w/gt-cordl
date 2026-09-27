#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils_BlitFilterMode.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_BlitFilterMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode::RenderGraphUtils_BlitFilterMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode::RenderGraphUtils_BlitFilterMode()   {
}
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode  GlobalNamespace::RenderGraphUtils_BlitFilterMode::ClampNearest{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode  GlobalNamespace::RenderGraphUtils_BlitFilterMode::ClampBilinear{static_cast<int32_t>(0x1)};
