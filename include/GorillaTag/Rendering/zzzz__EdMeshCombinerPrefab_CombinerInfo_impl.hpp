#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CombinerInfo.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CombinerInfo_def.hpp"
#include "GlobalNamespace/zzzz__EdMeshCombinerModifierUVOffset_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvOffsetModifier", ty: "::UnityW<::GlobalNamespace::EdMeshCombinerModifierUVOffset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subMeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isSkinnedMesh", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo::EdMeshCombinerPrefab_CombinerInfo(::UnityW<::UnityEngine::MeshFilter>  meshFilter, ::UnityW<::UnityEngine::Renderer>  renderer, ::UnityW<::GlobalNamespace::EdMeshCombinerModifierUVOffset>  uvOffsetModifier, int32_t  subMeshIndex, bool  isSkinnedMesh, int32_t  layer) noexcept  {
this->meshFilter = meshFilter;
this->renderer = renderer;
this->uvOffsetModifier = uvOffsetModifier;
this->subMeshIndex = subMeshIndex;
this->isSkinnedMesh = isSkinnedMesh;
this->layer = layer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo::EdMeshCombinerPrefab_CombinerInfo()   {
}
