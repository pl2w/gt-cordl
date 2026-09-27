#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_RuntimeResources.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_RuntimeResources_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L1_G_ry", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L2_0", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L2_2", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "L2_3", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProbeOcclusion", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Validity", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkyOcclusionL0L1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkyPrecomputedDirections", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "QualityLeakReductionData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeReferenceVolume_RuntimeResources::ProbeReferenceVolume_RuntimeResources(::UnityEngine::ComputeBuffer*  index, ::UnityEngine::ComputeBuffer*  cellIndices, ::UnityW<::UnityEngine::RenderTexture>  L0_L1rx, ::UnityW<::UnityEngine::RenderTexture>  L1_G_ry, ::UnityW<::UnityEngine::RenderTexture>  L1_B_rz, ::UnityW<::UnityEngine::RenderTexture>  L2_0, ::UnityW<::UnityEngine::RenderTexture>  L2_1, ::UnityW<::UnityEngine::RenderTexture>  L2_2, ::UnityW<::UnityEngine::RenderTexture>  L2_3, ::UnityW<::UnityEngine::RenderTexture>  ProbeOcclusion, ::UnityW<::UnityEngine::RenderTexture>  Validity, ::UnityW<::UnityEngine::RenderTexture>  SkyOcclusionL0L1, ::UnityW<::UnityEngine::RenderTexture>  SkyShadingDirectionIndices, ::UnityEngine::ComputeBuffer*  SkyPrecomputedDirections, ::UnityEngine::ComputeBuffer*  QualityLeakReductionData) noexcept  {
this->index = index;
this->cellIndices = cellIndices;
this->L0_L1rx = L0_L1rx;
this->L1_G_ry = L1_G_ry;
this->L1_B_rz = L1_B_rz;
this->L2_0 = L2_0;
this->L2_1 = L2_1;
this->L2_2 = L2_2;
this->L2_3 = L2_3;
this->ProbeOcclusion = ProbeOcclusion;
this->Validity = Validity;
this->SkyOcclusionL0L1 = SkyOcclusionL0L1;
this->SkyShadingDirectionIndices = SkyShadingDirectionIndices;
this->SkyPrecomputedDirections = SkyPrecomputedDirections;
this->QualityLeakReductionData = QualityLeakReductionData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeReferenceVolume_RuntimeResources::ProbeReferenceVolume_RuntimeResources()   {
}
