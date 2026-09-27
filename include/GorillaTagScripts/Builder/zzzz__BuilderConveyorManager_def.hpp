#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderConveyorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderConveyorManager)
namespace GlobalNamespace {
struct BuilderConveyorManager_EvaluateSplineJob;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderConveyorManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderConveyorManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderConveyorManager*, "GorillaTagScripts.Builder", "BuilderConveyorManager");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Jobs.TransformAccessArray, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Splines.NativeSpline, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderConveyorManager
class CORDL_TYPE BuilderConveyorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EvaluateSplineJob = ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  _instance_k__BackingField;

/// @brief Field conveyorIndices, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_conveyorIndices, put=__cordl_internal_set_conveyorIndices)) ::Unity::Collections::NativeList_1<int32_t>  conveyorIndices;

/// @brief Field conveyorRotations, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_conveyorRotations, put=__cordl_internal_set_conveyorRotations)) ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  conveyorRotations;

/// @brief Field conveyorSplines, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_conveyorSplines, put=__cordl_internal_set_conveyorSplines)) ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  conveyorSplines;

/// @brief Field isSetup, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSetup, put=__cordl_internal_set_isSetup)) bool  isSetup;

/// @brief Field jobShelfOffsets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_jobShelfOffsets, put=__cordl_internal_set_jobShelfOffsets)) ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  jobShelfOffsets;

/// @brief Field jobSplineTimes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_jobSplineTimes, put=__cordl_internal_set_jobSplineTimes)) ::Unity::Collections::NativeList_1<float_t>  jobSplineTimes;

/// @brief Field maxItemCount, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxItemCount, put=__cordl_internal_set_maxItemCount)) int32_t  maxItemCount;

/// @brief Field pieceTransforms, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceTransforms, put=__cordl_internal_set_pieceTransforms)) ::UnityEngine::Jobs::TransformAccessArray  pieceTransforms;

/// @brief Field shelfSlice, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfSlice, put=__cordl_internal_set_shelfSlice)) int32_t  shelfSlice;

/// @brief Field table, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Method AddPieceToJob, addr 0x5c20194, size 0x140, virtual false, abstract: false, final false
inline void AddPieceToJob(::GlobalNamespace::BuilderPiece*  piece, float_t  splineTime, int32_t  conveyorID) ;

/// @brief Method Awake, addr 0x5c1efd4, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConstructJobHandle, addr 0x5c20038, size 0x114, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ConstructJobHandle() ;

/// @brief Method GetPieceCreateTimestamp, addr 0x5c1faac, size 0x2c8, virtual false, abstract: false, final false
inline int32_t GetPieceCreateTimestamp(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method GetSplineProgressForPiece, addr 0x5c1f980, size 0x12c, virtual false, abstract: false, final false
inline float_t GetSplineProgressForPiece(::GlobalNamespace::BuilderPiece*  piece) ;

static inline ::GorillaTagScripts::Builder::BuilderConveyorManager* New_ctor() ;

/// @brief Method OnClearTable, addr 0x5c1fd74, size 0x1e0, virtual false, abstract: false, final false
inline void OnClearTable() ;

/// @brief Method OnDestroy, addr 0x5c1ff54, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemovePieceFromJob, addr 0x5c202d4, size 0x18c, virtual false, abstract: false, final false
inline void RemovePieceFromJob(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePieceFromJobAtIndex, addr 0x5c1f5c0, size 0xe0, virtual false, abstract: false, final false
inline void RemovePieceFromJobAtIndex(int32_t  index) ;

/// @brief Method Setup, addr 0x5c1f6a0, size 0x2e0, virtual false, abstract: false, final false
inline void Setup(::GorillaTagScripts::BuilderTable*  mytable) ;

/// @brief Method UpdateManager, addr 0x5c1f170, size 0x450, virtual false, abstract: false, final false
inline void UpdateManager() ;

constexpr ::Unity::Collections::NativeList_1<int32_t> const& __cordl_internal_get_conveyorIndices() const;

constexpr ::Unity::Collections::NativeList_1<int32_t>& __cordl_internal_get_conveyorIndices() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> const& __cordl_internal_get_conveyorRotations() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& __cordl_internal_get_conveyorRotations() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline> const& __cordl_internal_get_conveyorSplines() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>& __cordl_internal_get_conveyorSplines() ;

constexpr bool const& __cordl_internal_get_isSetup() const;

constexpr bool& __cordl_internal_get_isSetup() ;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Vector3> const& __cordl_internal_get_jobShelfOffsets() const;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>& __cordl_internal_get_jobShelfOffsets() ;

constexpr ::Unity::Collections::NativeList_1<float_t> const& __cordl_internal_get_jobSplineTimes() const;

constexpr ::Unity::Collections::NativeList_1<float_t>& __cordl_internal_get_jobSplineTimes() ;

constexpr int32_t const& __cordl_internal_get_maxItemCount() const;

constexpr int32_t& __cordl_internal_get_maxItemCount() ;

constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get_pieceTransforms() const;

constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get_pieceTransforms() ;

constexpr int32_t const& __cordl_internal_get_shelfSlice() const;

constexpr int32_t& __cordl_internal_get_shelfSlice() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr void __cordl_internal_set_conveyorIndices(::Unity::Collections::NativeList_1<int32_t>  value) ;

constexpr void __cordl_internal_set_conveyorRotations(::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_conveyorSplines(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  value) ;

constexpr void __cordl_internal_set_isSetup(bool  value) ;

constexpr void __cordl_internal_set_jobShelfOffsets(::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_jobSplineTimes(::Unity::Collections::NativeList_1<float_t>  value) ;

constexpr void __cordl_internal_set_maxItemCount(int32_t  value) ;

constexpr void __cordl_internal_set_pieceTransforms(::UnityEngine::Jobs::TransformAccessArray  value) ;

constexpr void __cordl_internal_set_shelfSlice(int32_t  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

/// @brief Method .ctor, addr 0x5c20460, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5c1ef34, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5c1ef7c, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GorillaTagScripts::Builder::BuilderConveyorManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderConveyorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderConveyorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderConveyorManager(BuilderConveyorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderConveyorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderConveyorManager(BuilderConveyorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4145};

/// @brief Field conveyorSplines, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  ___conveyorSplines;

/// @brief Field conveyorRotations, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  ___conveyorRotations;

/// @brief Field conveyorIndices, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  ___conveyorIndices;

/// @brief Field jobSplineTimes, offset: 0x48, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<float_t>  ___jobSplineTimes;

/// @brief Field jobShelfOffsets, offset: 0x50, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  ___jobShelfOffsets;

/// @brief Field pieceTransforms, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  ___pieceTransforms;

/// @brief Field table, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field isSetup, offset: 0x68, size: 0x1, def value: None
 bool  ___isSetup;

/// @brief Field maxItemCount, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___maxItemCount;

/// @brief Field shelfSlice, offset: 0x70, size: 0x4, def value: None
 int32_t  ___shelfSlice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___conveyorSplines) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___conveyorRotations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___conveyorIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___jobSplineTimes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___jobShelfOffsets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___pieceTransforms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___table) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___isSetup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___maxItemCount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderConveyorManager, ___shelfSlice) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderConveyorManager) == 0x78, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
