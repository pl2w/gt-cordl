#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_OccluderPass.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_OccluderPass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass::UniversalRenderer_OccluderPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass::UniversalRenderer_OccluderPass()   {
}
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass  GlobalNamespace::UniversalRenderer_OccluderPass::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass  GlobalNamespace::UniversalRenderer_OccluderPass::DepthPrepass{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass  GlobalNamespace::UniversalRenderer_OccluderPass::ForwardOpaque{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UniversalRenderer_OccluderPass  GlobalNamespace::UniversalRenderer_OccluderPass::GBuffer{static_cast<int32_t>(0x3)};
