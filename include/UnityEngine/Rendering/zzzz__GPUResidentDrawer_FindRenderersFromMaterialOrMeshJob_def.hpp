#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet`1_ReadOnly_def.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, "UnityEngine.Rendering", "GPUResidentDrawer/FindRenderersFromMaterialOrMeshJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeHashSet`1::ReadOnly<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, UnityEngine.Rendering.SmallIntegerArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/FindRenderersFromMaterialOrMeshJob
struct CORDL_TYPE GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr operator  ::Unity::Jobs::IJobParallelForBatch*() ;

/// @brief Method Execute, addr 0xb1edf6c, size 0x378, virtual true, abstract: false, final true
inline void Execute(int32_t  startIndex, int32_t  count) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob() ;

// Ctor Parameters [CppParam { name: "materialIDs", ty: "::GlobalNamespace::NativeHashSet_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIDArrays", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshIDArray", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererGroupIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sortedExcludeRendererIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "selectedRenderGroupsForMaterials", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "selectedRenderGroupsForMeshes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob(::GlobalNamespace::NativeHashSet_1_ReadOnly<int32_t>  materialIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDArray, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  sortedExcludeRendererIDs, ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMaterials, ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMeshes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// [ReadOnly]
/// @brief Field materialIDs, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::NativeHashSet_1_ReadOnly<int32_t>  materialIDs;

/// [ReadOnly]
/// @brief Field materialIDArrays, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays;

/// [ReadOnly]
/// @brief Field meshIDs, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs;

/// [ReadOnly]
/// @brief Field meshIDArray, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDArray;

/// [ReadOnly]
/// @brief Field rendererGroupIDs, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs;

/// [ReadOnly]
/// @brief Field sortedExcludeRendererIDs, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  sortedExcludeRendererIDs;

/// [WriteOnly]
/// @brief Field selectedRenderGroupsForMaterials, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMaterials;

/// [WriteOnly]
/// @brief Field selectedRenderGroupsForMeshes, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  selectedRenderGroupsForMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, materialIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, materialIDArrays) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, meshIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, meshIDArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, rendererGroupIDs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, sortedExcludeRendererIDs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, selectedRenderGroupsForMaterials) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob, selectedRenderGroupsForMeshes) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUResidentDrawer_FindRenderersFromMaterialOrMeshJob) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
