#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_TextureCopySchedules.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_ColorCopySchedule_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_DepthCopySchedule_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_TextureCopySchedules_def.hpp"
// Ctor Parameters [CppParam { name: "depth", ty: "::GlobalNamespace::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::GlobalNamespace::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderer_TextureCopySchedules::UniversalRenderer_TextureCopySchedules(::GlobalNamespace::UniversalRenderer_DepthCopySchedule  depth, ::GlobalNamespace::UniversalRenderer_ColorCopySchedule  color) noexcept  {
this->depth = depth;
this->color = color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderer_TextureCopySchedules::UniversalRenderer_TextureCopySchedules()   {
}
