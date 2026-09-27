#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderFindPotentialSnaps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacementData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue`1_ParallelWriter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderFindPotentialSnaps)
namespace GorillaTagScripts {
struct BuilderGridPlaneData;
}
namespace GorillaTagScripts {
struct BuilderPotentialPlacementData;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderFindPotentialSnaps;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderFindPotentialSnaps);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderFindPotentialSnaps, "GorillaTagScripts", "BuilderFindPotentialSnaps");
// [BurstCompile]
// Dependencies GorillaTagScripts.BuilderGridPlaneData, GorillaTagScripts.BuilderPotentialPlacementData, GorillaTagScripts.BuilderTable::SnapParams, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1::ParallelWriter<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderFindPotentialSnaps
struct CORDL_TYPE BuilderFindPotentialSnaps {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5baa1b0, size 0x1b0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method Rotate180, addr 0x5baad48, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate180(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method Rotate270, addr 0x5baad5c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate270(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method Rotate90, addr 0x5baad68, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate90(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method TryPlaceGridPlaneOnGridPlane, addr 0x5baa360, size 0x9e8, virtual false, abstract: false, final false
inline bool TryPlaceGridPlaneOnGridPlane(::by_ref<::GorillaTagScripts::BuilderGridPlaneData>  gridPlane, ::by_ref<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlane, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacementData>  potentialPlacement) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderFindPotentialSnaps() ;

// Ctor Parameters [CppParam { name: "gridSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currSnapParams", ty: "::GlobalNamespace::BuilderTable_SnapParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "gridPlanes", ty: "::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "checkGridPlanes", ty: "::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToLocalPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "potentialPlacements", ty: "::GlobalNamespace::NativeQueue_1_ParallelWriter<::GorillaTagScripts::BuilderPotentialPlacementData>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderFindPotentialSnaps(float_t  gridSize, ::GlobalNamespace::BuilderTable_SnapParams  currSnapParams, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlanes, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlanes, ::UnityEngine::Vector3  worldToLocalPos, ::UnityEngine::Quaternion  worldToLocalRot, ::UnityEngine::Vector3  localToWorldPos, ::UnityEngine::Quaternion  localToWorldRot, ::GlobalNamespace::NativeQueue_1_ParallelWriter<::GorillaTagScripts::BuilderPotentialPlacementData>  potentialPlacements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// [ReadOnly]
/// @brief Field gridSize, offset: 0x0, size: 0x4, def value: None
 float_t  gridSize;

/// [ReadOnly]
/// @brief Field currSnapParams, offset: 0x4, size: 0x28, def value: None
 ::GlobalNamespace::BuilderTable_SnapParams  currSnapParams;

/// [ReadOnly]
/// @brief Field gridPlanes, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlanes;

/// [ReadOnly]
/// @brief Field checkGridPlanes, offset: 0x38, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlanes;

/// [ReadOnly]
/// @brief Field worldToLocalPos, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  worldToLocalPos;

/// [ReadOnly]
/// @brief Field worldToLocalRot, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  worldToLocalRot;

/// [ReadOnly]
/// @brief Field localToWorldPos, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  localToWorldPos;

/// [ReadOnly]
/// @brief Field localToWorldRot, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localToWorldRot;

/// @brief Field potentialPlacements, offset: 0x78, size: 0x10, def value: None
 ::GlobalNamespace::NativeQueue_1_ParallelWriter<::GorillaTagScripts::BuilderPotentialPlacementData>  potentialPlacements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, gridSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, currSnapParams) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, gridPlanes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, checkGridPlanes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, worldToLocalPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, worldToLocalRot) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, localToWorldPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, localToWorldRot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFindPotentialSnaps, potentialPlacements) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderFindPotentialSnaps) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts
