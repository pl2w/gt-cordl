#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer_DrawBatch.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderParams_impl.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_DrawBatch_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_DynamicEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submeshCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrices", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupIds", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibility", ty: "::Unity::Collections::NativeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gpuMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrixBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderParams", ty: "::UnityEngine::RenderParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "needsUpload", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dynamicEntries", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DynamicEntry>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IndirectMeshRenderer_DrawBatch::IndirectMeshRenderer_DrawBatch(::UnityW<::UnityEngine::Mesh>  mesh, ::UnityW<::UnityEngine::Material>  material, int32_t  submeshCount, int32_t  layer, ::Unity::Collections::NativeList_1<::UnityEngine::Matrix4x4>  matrices, ::Unity::Collections::NativeList_1<int32_t>  groupIds, ::Unity::Collections::NativeList_1<uint8_t>  visibility, int32_t  visibleCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  gpuMatrices, ::UnityEngine::GraphicsBuffer*  matrixBuffer, ::UnityEngine::GraphicsBuffer*  commandBuffer, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  commandData, ::UnityEngine::RenderParams  renderParams, bool  dirty, bool  needsUpload, ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DynamicEntry>*  dynamicEntries) noexcept  {
this->mesh = mesh;
this->material = material;
this->submeshCount = submeshCount;
this->layer = layer;
this->matrices = matrices;
this->groupIds = groupIds;
this->visibility = visibility;
this->visibleCount = visibleCount;
this->gpuMatrices = gpuMatrices;
this->matrixBuffer = matrixBuffer;
this->commandBuffer = commandBuffer;
this->commandData = commandData;
this->renderParams = renderParams;
this->dirty = dirty;
this->needsUpload = needsUpload;
this->dynamicEntries = dynamicEntries;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectMeshRenderer_DrawBatch::IndirectMeshRenderer_DrawBatch()   {
}
