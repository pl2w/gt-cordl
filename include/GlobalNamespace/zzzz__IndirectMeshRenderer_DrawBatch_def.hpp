#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer_DrawBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderParams_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectMeshRenderer_DrawBatch)
namespace GlobalNamespace {
struct IndirectMeshRenderer_DynamicEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct IndirectMeshRenderer_DrawBatch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IndirectMeshRenderer_DrawBatch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, "", "IndirectMeshRenderer/DrawBatch");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.GraphicsBuffer::IndirectDrawIndexedArgs, UnityEngine.Matrix4x4, UnityEngine.RenderParams
namespace GlobalNamespace {
// Is value type: true
// CS Name: IndirectMeshRenderer/DrawBatch
struct CORDL_TYPE IndirectMeshRenderer_DrawBatch {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshRenderer_DrawBatch() ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "submeshCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrices", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupIds", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibility", ty: "::Unity::Collections::NativeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gpuMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrixBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderParams", ty: "::UnityEngine::RenderParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "dirty", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "needsUpload", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dynamicEntries", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DynamicEntry>*", modifiers: "", def_value: None, comment: None }]
constexpr IndirectMeshRenderer_DrawBatch(::UnityW<::UnityEngine::Mesh>  mesh, ::UnityW<::UnityEngine::Material>  material, int32_t  submeshCount, int32_t  layer, ::Unity::Collections::NativeList_1<::UnityEngine::Matrix4x4>  matrices, ::Unity::Collections::NativeList_1<int32_t>  groupIds, ::Unity::Collections::NativeList_1<uint8_t>  visibility, int32_t  visibleCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  gpuMatrices, ::UnityEngine::GraphicsBuffer*  matrixBuffer, ::UnityEngine::GraphicsBuffer*  commandBuffer, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  commandData, ::UnityEngine::RenderParams  renderParams, bool  dirty, bool  needsUpload, ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DynamicEntry>*  dynamicEntries) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field material, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field submeshCount, offset: 0x10, size: 0x4, def value: None
 int32_t  submeshCount;

/// @brief Field layer, offset: 0x14, size: 0x4, def value: None
 int32_t  layer;

/// @brief Field matrices, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Matrix4x4>  matrices;

/// @brief Field groupIds, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  groupIds;

/// @brief Field visibility, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint8_t>  visibility;

/// @brief Field visibleCount, offset: 0x30, size: 0x4, def value: None
 int32_t  visibleCount;

/// @brief Field gpuMatrices, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  gpuMatrices;

/// @brief Field matrixBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  matrixBuffer;

/// @brief Field commandBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  commandBuffer;

/// @brief Field commandData, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  commandData;

/// @brief Field renderParams, offset: 0x68, size: 0x78, def value: None
 ::UnityEngine::RenderParams  renderParams;

/// @brief Field dirty, offset: 0xe0, size: 0x1, def value: None
 bool  dirty;

/// @brief Field needsUpload, offset: 0xe1, size: 0x1, def value: None
 bool  needsUpload;

/// @brief Field dynamicEntries, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DynamicEntry>*  dynamicEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, material) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, submeshCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, layer) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, matrices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, groupIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, visibility) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, visibleCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, gpuMatrices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, matrixBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, commandBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, commandData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, renderParams) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, dirty) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, needsUpload) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch, dynamicEntries) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndirectMeshRenderer_DrawBatch) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
