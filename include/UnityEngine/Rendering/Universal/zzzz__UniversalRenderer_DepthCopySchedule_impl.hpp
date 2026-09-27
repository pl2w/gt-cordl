#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_DepthCopySchedule.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_DepthCopySchedule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule::UniversalRenderer_DepthCopySchedule(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule::UniversalRenderer_DepthCopySchedule()   {
}
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::DuringPrepass{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::AfterPrepass{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::AfterGBuffer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::AfterOpaques{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::AfterSkybox{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::AfterTransparents{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  GlobalNamespace::UniversalRenderer_DepthCopySchedule::None{static_cast<int32_t>(0x6)};
