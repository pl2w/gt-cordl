#pragma once
// IWYU pragma private; include "GorillaTagScripts/FindNearbyPiecesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPlayerData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPrivatePlotData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindNearbyPiecesJob)
namespace GlobalNamespace {
template<typename T>
struct NativeList_1_ParallelWriter;
}
namespace GorillaTagScripts {
struct BuilderGridPlaneData;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
struct FindNearbyPiecesJob;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::FindNearbyPiecesJob);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::FindNearbyPiecesJob, "GorillaTagScripts", "FindNearbyPiecesJob");
// [BurstCompile]
// Dependencies GorillaTagScripts.BuilderGridPlaneData, GorillaTagScripts.BuilderPieceData, GorillaTagScripts.BuilderPlayerData, GorillaTagScripts.BuilderPrivatePlotData, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.FindNearbyPiecesJob
struct CORDL_TYPE FindNearbyPiecesJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method CanPiecesPotentiallySnap, addr 0x5bab344, size 0x5c, virtual false, abstract: false, final false
inline bool CanPiecesPotentiallySnap(int32_t  localActorNumber, int32_t  pieceInHandIndex, int32_t  attachToPieceIndex, int32_t  attachToPieceRootIndex, int32_t  requestedParentPieceIndex, bool  isLeft) ;

/// @brief Method CanPlayerAttachToPlot, addr 0x5bab52c, size 0x44, virtual false, abstract: false, final false
inline bool CanPlayerAttachToPlot(int32_t  privatePlotIndex, int32_t  actorNumber) ;

/// @brief Method CanPlayerAttachToRootPiece, addr 0x5bab3a0, size 0xf8, virtual false, abstract: false, final false
inline bool CanPlayerAttachToRootPiece(int32_t  playerActorNumber, int32_t  attachToPieceRootIndex, bool  isLeft) ;

/// @brief Method CheckGridPlane, addr 0x5bab194, size 0x170, virtual false, abstract: false, final false
inline void CheckGridPlane(int32_t  gridPlaneIndex, int32_t  handPieceIndex, ::UnityEngine::Jobs::TransformAccess  transform, ::UnityEngine::Vector3  handPos, bool  isLeft, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlanes) ;

/// @brief Method Execute, addr 0x5bab114, size 0x80, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Method GetAttachedBuiltInPiece, addr 0x5bab498, size 0x60, virtual false, abstract: false, final false
inline int32_t GetAttachedBuiltInPiece(int32_t  pieceIndex) ;

/// @brief Method GetPlayerIndex, addr 0x5bab4f8, size 0x34, virtual false, abstract: false, final false
inline int32_t GetPlayerIndex(int32_t  playerActorNumber) ;

/// @brief Method GetRootPieceIndex, addr 0x5bab304, size 0x40, virtual false, abstract: false, final false
inline int32_t GetRootPieceIndex(int32_t  pieceIndex) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr FindNearbyPiecesJob() ;

// Ctor Parameters [CppParam { name: "distanceThreshSq", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftPieceInHandIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightPieceInHandIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPlayerPlotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPlayerActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPieceData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gridPlaneData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "privatePlotData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPrivatePlotData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPlayerData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandGridPlanes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightHandGridPlanes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: None, comment: None }]
constexpr FindNearbyPiecesJob(float_t  distanceThreshSq, ::UnityEngine::Vector3  leftHandPos, int32_t  leftPieceInHandIndex, ::UnityEngine::Vector3  rightHandPos, int32_t  rightPieceInHandIndex, int32_t  localPlayerPlotIndex, int32_t  localPlayerActorNumber, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPieceData>  pieceData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPrivatePlotData>  privatePlotData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPlayerData>  playerData, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  leftHandGridPlanes, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  rightHandGridPlanes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3957};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// [ReadOnly]
/// @brief Field distanceThreshSq, offset: 0x0, size: 0x4, def value: None
 float_t  distanceThreshSq;

/// [ReadOnly]
/// @brief Field leftHandPos, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  leftHandPos;

/// [ReadOnly]
/// @brief Field leftPieceInHandIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  leftPieceInHandIndex;

/// [ReadOnly]
/// @brief Field rightHandPos, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  rightHandPos;

/// [ReadOnly]
/// @brief Field rightPieceInHandIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  rightPieceInHandIndex;

/// [ReadOnly]
/// @brief Field localPlayerPlotIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  localPlayerPlotIndex;

/// [ReadOnly]
/// @brief Field localPlayerActorNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  localPlayerActorNumber;

/// [ReadOnly]
/// @brief Field pieceData, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPieceData>  pieceData;

/// [ReadOnly]
/// @brief Field gridPlaneData, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData;

/// [ReadOnly]
/// @brief Field privatePlotData, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPrivatePlotData>  privatePlotData;

/// [ReadOnly]
/// @brief Field playerData, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPlayerData>  playerData;

/// @brief Field leftHandGridPlanes, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  leftHandGridPlanes;

/// @brief Field rightHandGridPlanes, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  rightHandGridPlanes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, distanceThreshSq) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, leftHandPos) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, leftPieceInHandIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, rightHandPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, rightPieceInHandIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, localPlayerPlotIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, localPlayerActorNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, pieceData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, gridPlaneData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, privatePlotData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, playerData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, leftHandGridPlanes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FindNearbyPiecesJob, rightHandGridPlanes) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::FindNearbyPiecesJob) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts
