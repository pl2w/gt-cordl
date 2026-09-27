#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderConveyor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderConveyor)
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
struct BuilderPieceSet_BuilderPieceCategory;
}
namespace GlobalNamespace {
struct BuilderPieceSet_PieceInfo;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderSetSelector;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderConveyor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderConveyor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderConveyor*, "", "BuilderConveyor");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Splines.BezierCurve, UnityEngine.Splines.NativeSpline, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderConveyor
class CORDL_TYPE BuilderConveyor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _evaluateCurve, offset 0xb0, size 0x30 
 __declspec(property(get=__cordl_internal_get__evaluateCurve, put=__cordl_internal_set__evaluateCurve)) ::UnityEngine::Splines::BezierCurve  _evaluateCurve;

/// @brief Field _includeCategories, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__includeCategories, put=__cordl_internal_set__includeCategories)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  _includeCategories;

/// @brief Field conveyorMoveSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_conveyorMoveSpeed, put=__cordl_internal_set_conveyorMoveSpeed)) float_t  conveyorMoveSpeed;

/// @brief Field currentDisplayGroup, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDisplayGroup, put=__cordl_internal_set_currentDisplayGroup)) ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  currentDisplayGroup;

/// @brief Field grabbedPieceMaterials, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedPieceMaterials, put=__cordl_internal_set_grabbedPieceMaterials)) ::System::Collections::Generic::Queue_1<int32_t>*  grabbedPieceMaterials;

/// @brief Field grabbedPieceTypes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedPieceTypes, put=__cordl_internal_set_grabbedPieceTypes)) ::System::Collections::Generic::Queue_1<int32_t>*  grabbedPieceTypes;

/// @brief Field initialized, offset 0xa5, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field loopCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopCount, put=__cordl_internal_set_loopCount)) int32_t  loopCount;

/// @brief Field maxItemsOnSpline, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxItemsOnSpline, put=__cordl_internal_set_maxItemsOnSpline)) int32_t  maxItemsOnSpline;

/// @brief Field moveDirection, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_moveDirection, put=__cordl_internal_set_moveDirection)) ::UnityEngine::Vector3  moveDirection;

/// @brief Field nativeSpline, offset 0xe0, size 0x48 
 __declspec(property(get=__cordl_internal_get_nativeSpline, put=__cordl_internal_set_nativeSpline)) ::UnityEngine::Splines::NativeSpline  nativeSpline;

/// @brief Field nextPieceToSpawn, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPieceToSpawn, put=__cordl_internal_set_nextPieceToSpawn)) int32_t  nextPieceToSpawn;

/// @brief Field nextSpawnTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSpawnTime, put=__cordl_internal_set_nextSpawnTime)) double_t  nextSpawnTime;

/// @brief Field piecesInSet, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecesInSet, put=__cordl_internal_set_piecesInSet)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  piecesInSet;

/// @brief Field piecesOnConveyor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecesOnConveyor, put=__cordl_internal_set_piecesOnConveyor)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  piecesOnConveyor;

/// @brief Field setSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_setSelector, put=__cordl_internal_set_setSelector)) ::UnityW<::GlobalNamespace::BuilderSetSelector>  setSelector;

/// @brief Field shelfID, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfID, put=__cordl_internal_set_shelfID)) int32_t  shelfID;

/// @brief Field shouldVerifySetSelection, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldVerifySetSelection, put=__cordl_internal_set_shouldVerifySetSelection)) bool  shouldVerifySetSelection;

/// @brief Field spawnDelay, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnDelay, put=__cordl_internal_set_spawnDelay)) float_t  spawnDelay;

/// @brief Field spawnTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTransform, put=__cordl_internal_set_spawnTransform)) ::UnityW<::UnityEngine::Transform>  spawnTransform;

/// @brief Field spline, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  spline;

/// @brief Field splineLength, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_splineLength, put=__cordl_internal_set_splineLength)) float_t  splineLength;

/// @brief Field table, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field waitForResourceChange, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitForResourceChange, put=__cordl_internal_set_waitForResourceChange)) bool  waitForResourceChange;

/// @brief Method EvaluateSpline, addr 0x57b6c30, size 0x104, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateSpline(float_t  t) ;

/// @brief Method FindNextAffordablePieceType, addr 0x57b75e8, size 0x28c, virtual false, abstract: false, final false
inline void FindNextAffordablePieceType(::by_ref<int32_t>  pieceType, ::by_ref<int32_t>  materialType) ;

/// @brief Method GetFrameMovement, addr 0x57b6534, size 0x10, virtual false, abstract: false, final false
inline float_t GetFrameMovement() ;

/// @brief Method GetMaterialType, addr 0x57b7874, size 0x218, virtual false, abstract: false, final false
inline int32_t GetMaterialType(::GlobalNamespace::BuilderPieceSet_PieceInfo  info) ;

/// @brief Method GetMaxItemsOnConveyor, addr 0x57b6444, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetMaxItemsOnConveyor() ;

/// @brief Method GetSelectedDisplayGroupID, addr 0x57b6884, size 0x24, virtual false, abstract: false, final false
inline int32_t GetSelectedDisplayGroupID() ;

/// @brief Method GetSpawnTransform, addr 0x57b6ed8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnTransform() ;

/// @brief Method InitIfNeeded, addr 0x57b5e7c, size 0x5c4, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GlobalNamespace::BuilderConveyor* New_ctor() ;

/// @brief Method OnAvailableResourcesChange, addr 0x57b6ed0, size 0x8, virtual false, abstract: false, final false
inline void OnAvailableResourcesChange() ;

/// @brief Method OnClearTable, addr 0x57b7350, size 0x98, virtual false, abstract: false, final false
inline void OnClearTable() ;

/// @brief Method OnDestroy, addr 0x57b6544, size 0xec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSelectedSetChange, addr 0x57b6630, size 0x38, virtual false, abstract: false, final false
inline void OnSelectedSetChange(int32_t  displayGroupID) ;

/// @brief Method OnShelfPieceCreated, addr 0x57b6ee0, size 0x3b8, virtual false, abstract: false, final false
inline void OnShelfPieceCreated(::GlobalNamespace::BuilderPiece*  piece, float_t  timeOffset) ;

/// @brief Method OnShelfPieceRecycled, addr 0x57b7298, size 0xb8, virtual false, abstract: false, final false
inline void OnShelfPieceRecycled(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePieceFromConveyor, addr 0x57b6a38, size 0x1f8, virtual false, abstract: false, final false
inline void RemovePieceFromConveyor(::UnityEngine::Transform*  pieceTransform) ;

/// @brief Method ResetConveyorState, addr 0x57b73e8, size 0x200, virtual false, abstract: false, final false
inline void ResetConveyorState() ;

/// @brief Method SetSelection, addr 0x57b6668, size 0x21c, virtual false, abstract: false, final false
inline void SetSelection(int32_t  displayGroupID) ;

/// @brief Method Setup, addr 0x57b6440, size 0x4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SpawnNextPiece, addr 0x57b6e6c, size 0x58, virtual false, abstract: false, final false
inline void SpawnNextPiece() ;

/// @brief Method Start, addr 0x57b5e78, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateConveyor, addr 0x57b68a8, size 0x190, virtual false, abstract: false, final false
inline void UpdateConveyor() ;

/// @brief Method UpdateShelfSliced, addr 0x57b6d34, size 0x138, virtual false, abstract: false, final false
inline void UpdateShelfSliced() ;

/// @brief Method VerifySetSelection, addr 0x57b6ec4, size 0xc, virtual false, abstract: false, final false
inline void VerifySetSelection() ;

constexpr ::UnityEngine::Splines::BezierCurve const& __cordl_internal_get__evaluateCurve() const;

constexpr ::UnityEngine::Splines::BezierCurve& __cordl_internal_get__evaluateCurve() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* const& __cordl_internal_get__includeCategories() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*& __cordl_internal_get__includeCategories() ;

constexpr float_t const& __cordl_internal_get_conveyorMoveSpeed() const;

constexpr float_t& __cordl_internal_get_conveyorMoveSpeed() ;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* const& __cordl_internal_get_currentDisplayGroup() const;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*& __cordl_internal_get_currentDisplayGroup() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_grabbedPieceMaterials() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_grabbedPieceMaterials() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_grabbedPieceTypes() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_grabbedPieceTypes() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr int32_t const& __cordl_internal_get_loopCount() const;

constexpr int32_t& __cordl_internal_get_loopCount() ;

constexpr int32_t const& __cordl_internal_get_maxItemsOnSpline() const;

constexpr int32_t& __cordl_internal_get_maxItemsOnSpline() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_moveDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_moveDirection() ;

constexpr ::UnityEngine::Splines::NativeSpline const& __cordl_internal_get_nativeSpline() const;

constexpr ::UnityEngine::Splines::NativeSpline& __cordl_internal_get_nativeSpline() ;

constexpr int32_t const& __cordl_internal_get_nextPieceToSpawn() const;

constexpr int32_t& __cordl_internal_get_nextPieceToSpawn() ;

constexpr double_t const& __cordl_internal_get_nextSpawnTime() const;

constexpr double_t& __cordl_internal_get_nextSpawnTime() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>* const& __cordl_internal_get_piecesInSet() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*& __cordl_internal_get_piecesInSet() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_piecesOnConveyor() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_piecesOnConveyor() ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector> const& __cordl_internal_get_setSelector() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector>& __cordl_internal_get_setSelector() ;

constexpr int32_t const& __cordl_internal_get_shelfID() const;

constexpr int32_t& __cordl_internal_get_shelfID() ;

constexpr bool const& __cordl_internal_get_shouldVerifySetSelection() const;

constexpr bool& __cordl_internal_get_shouldVerifySetSelection() ;

constexpr float_t const& __cordl_internal_get_spawnDelay() const;

constexpr float_t& __cordl_internal_get_spawnDelay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnTransform() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_spline() ;

constexpr float_t const& __cordl_internal_get_splineLength() const;

constexpr float_t& __cordl_internal_get_splineLength() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr bool const& __cordl_internal_get_waitForResourceChange() const;

constexpr bool& __cordl_internal_get_waitForResourceChange() ;

constexpr void __cordl_internal_set__evaluateCurve(::UnityEngine::Splines::BezierCurve  value) ;

constexpr void __cordl_internal_set__includeCategories(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  value) ;

constexpr void __cordl_internal_set_conveyorMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_currentDisplayGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  value) ;

constexpr void __cordl_internal_set_grabbedPieceMaterials(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_grabbedPieceTypes(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_loopCount(int32_t  value) ;

constexpr void __cordl_internal_set_maxItemsOnSpline(int32_t  value) ;

constexpr void __cordl_internal_set_moveDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_nativeSpline(::UnityEngine::Splines::NativeSpline  value) ;

constexpr void __cordl_internal_set_nextPieceToSpawn(int32_t  value) ;

constexpr void __cordl_internal_set_nextSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_piecesInSet(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  value) ;

constexpr void __cordl_internal_set_piecesOnConveyor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_setSelector(::UnityW<::GlobalNamespace::BuilderSetSelector>  value) ;

constexpr void __cordl_internal_set_shelfID(int32_t  value) ;

constexpr void __cordl_internal_set_shouldVerifySetSelection(bool  value) ;

constexpr void __cordl_internal_set_spawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_splineLength(float_t  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_waitForResourceChange(bool  value) ;

/// @brief Method .ctor, addr 0x57b7a8c, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderConveyor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderConveyor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderConveyor(BuilderConveyor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderConveyor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderConveyor(BuilderConveyor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1582};

/// [Header("Set Selection")]
/// [SerializeField]
/// @brief Field setSelector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetSelector>  ___setSelector;

/// @brief Field _includeCategories, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  ____includeCategories;

/// [HideInInspector]
/// @brief Field table, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field shelfID, offset: 0x38, size: 0x4, def value: None
 int32_t  ___shelfID;

/// [Header("Conveyor Properties")]
/// [SerializeField]
/// @brief Field spawnTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnTransform;

/// [SerializeField]
/// @brief Field spline, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___spline;

/// @brief Field conveyorMoveSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___conveyorMoveSpeed;

/// @brief Field spawnDelay, offset: 0x54, size: 0x4, def value: None
 float_t  ___spawnDelay;

/// @brief Field nextSpawnTime, offset: 0x58, size: 0x8, def value: None
 double_t  ___nextSpawnTime;

/// @brief Field nextPieceToSpawn, offset: 0x60, size: 0x4, def value: None
 int32_t  ___nextPieceToSpawn;

/// @brief Field currentDisplayGroup, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  ___currentDisplayGroup;

/// @brief Field loopCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___loopCount;

/// @brief Field piecesInSet, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  ___piecesInSet;

/// @brief Field grabbedPieceTypes, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ___grabbedPieceTypes;

/// @brief Field grabbedPieceMaterials, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ___grabbedPieceMaterials;

/// @brief Field piecesOnConveyor, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___piecesOnConveyor;

/// @brief Field moveDirection, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___moveDirection;

/// @brief Field waitForResourceChange, offset: 0xa4, size: 0x1, def value: None
 bool  ___waitForResourceChange;

/// @brief Field initialized, offset: 0xa5, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field splineLength, offset: 0xa8, size: 0x4, def value: None
 float_t  ___splineLength;

/// @brief Field maxItemsOnSpline, offset: 0xac, size: 0x4, def value: None
 int32_t  ___maxItemsOnSpline;

/// @brief Field _evaluateCurve, offset: 0xb0, size: 0x30, def value: None
 ::UnityEngine::Splines::BezierCurve  ____evaluateCurve;

/// @brief Field nativeSpline, offset: 0xe0, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  ___nativeSpline;

/// @brief Field shouldVerifySetSelection, offset: 0x128, size: 0x1, def value: None
 bool  ___shouldVerifySetSelection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___setSelector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ____includeCategories) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___table) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___shelfID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___spawnTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___spline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___conveyorMoveSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___spawnDelay) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___nextSpawnTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___nextPieceToSpawn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___currentDisplayGroup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___loopCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___piecesInSet) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___grabbedPieceTypes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___grabbedPieceMaterials) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___piecesOnConveyor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___moveDirection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___waitForResourceChange) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___initialized) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___splineLength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___maxItemsOnSpline) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ____evaluateCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___nativeSpline) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderConveyor, ___shouldVerifySetSelection) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderConveyor) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
