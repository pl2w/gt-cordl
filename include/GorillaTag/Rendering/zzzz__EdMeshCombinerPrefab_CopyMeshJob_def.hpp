#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CopyMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTVertexDataStream0_def.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStream1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdMeshCombinerPrefab_CopyMeshJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CopyMeshJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, "GorillaTag.Rendering", "EdMeshCombinerPrefab/CopyMeshJob");
// [BurstCompile]
// Dependencies GTVertexDataStream0, GTVertexDataStream1, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4, UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Mesh::MeshDataArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.EdMeshCombinerPrefab/CopyMeshJob
struct CORDL_TYPE EdMeshCombinerPrefab_CopyMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5d58f90, size 0xf0c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerPrefab_CopyMeshJob() ;

// Ctor Parameters [CppParam { name: "meshDataArray", ty: "::GlobalNamespace::Mesh_MeshDataArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceSubmeshIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceTransforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightmapScaleOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseColors", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "atlasSlices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvModifiersMinMax", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "isCandleFlame", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "randSeed", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dst0", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream0>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dst1", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream1>", modifiers: "", def_value: None, comment: None }, CppParam { name: "idxDst32", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "idxDst16", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "use32BitIndices", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EdMeshCombinerPrefab_CopyMeshJob(::GlobalNamespace::Mesh_MeshDataArray  meshDataArray, ::Unity::Collections::NativeArray_1<int32_t>  sourceSubmeshIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  sourceTransforms, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lightmapScaleOffsets, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  baseColors, ::Unity::Collections::NativeArray_1<int32_t>  atlasSlices, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  uvModifiersMinMax, bool  isCandleFlame, uint32_t  randSeed, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream0>  dst0, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream1>  dst1, ::Unity::Collections::NativeArray_1<int32_t>  idxDst32, ::Unity::Collections::NativeArray_1<uint16_t>  idxDst16, bool  use32BitIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// [ReadOnly]
/// @brief Field meshDataArray, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::Mesh_MeshDataArray  meshDataArray;

/// [ReadOnly]
/// @brief Field sourceSubmeshIndices, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  sourceSubmeshIndices;

/// [ReadOnly]
/// @brief Field sourceTransforms, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  sourceTransforms;

/// [ReadOnly]
/// @brief Field lightmapScaleOffsets, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lightmapScaleOffsets;

/// [ReadOnly]
/// @brief Field baseColors, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  baseColors;

/// [ReadOnly]
/// @brief Field atlasSlices, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  atlasSlices;

/// [ReadOnly]
/// @brief Field uvModifiersMinMax, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  uvModifiersMinMax;

/// @brief Field isCandleFlame, offset: 0x70, size: 0x1, def value: None
 bool  isCandleFlame;

/// @brief Field randSeed, offset: 0x74, size: 0x4, def value: None
 uint32_t  randSeed;

/// [WriteOnly]
/// [NativeDisableContainerSafetyRestriction]
/// @brief Field dst0, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream0>  dst0;

/// [WriteOnly]
/// [NativeDisableContainerSafetyRestriction]
/// @brief Field dst1, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream1>  dst1;

/// [WriteOnly]
/// [NativeDisableContainerSafetyRestriction]
/// @brief Field idxDst32, offset: 0x98, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  idxDst32;

/// [WriteOnly]
/// [NativeDisableContainerSafetyRestriction]
/// @brief Field idxDst16, offset: 0xa8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  idxDst16;

/// @brief Field use32BitIndices, offset: 0xb8, size: 0x1, def value: None
 bool  use32BitIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, meshDataArray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, sourceSubmeshIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, sourceTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, lightmapScaleOffsets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, baseColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, atlasSlices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, uvModifiersMinMax) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, isCandleFlame) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, randSeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, dst0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, dst1) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, idxDst32) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, idxDst16) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob, use32BitIndices) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
