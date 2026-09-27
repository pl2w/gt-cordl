#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialCombinerPerRendererInfo.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialCombinerPerRendererInfo_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sliceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oldMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wasMeshCombined", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MaterialCombinerPerRendererInfo::MaterialCombinerPerRendererInfo(::UnityW<::UnityEngine::Renderer>  renderer, int32_t  slotIndex, int32_t  sliceIndex, ::UnityEngine::Color  baseColor, ::UnityW<::UnityEngine::Material>  oldMat, bool  wasMeshCombined) noexcept  {
this->renderer = renderer;
this->slotIndex = slotIndex;
this->sliceIndex = sliceIndex;
this->baseColor = baseColor;
this->oldMat = oldMat;
this->wasMeshCombined = wasMeshCombined;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialCombinerPerRendererInfo::MaterialCombinerPerRendererInfo()   {
}
