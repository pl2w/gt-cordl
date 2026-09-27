#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderAttachGridPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderAttachGridPlane)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct SnapBounds;
}
namespace GorillaTagScripts::Builder {
class BuilderMovingPart;
}
namespace GorillaTagScripts {
class BuilderItem;
}
namespace GorillaTagScripts {
class BuilderPool;
}
namespace GorillaTagScripts {
class SnapOverlap;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderAttachGridPlane*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderAttachGridPlane*, "GorillaTagScripts", "BuilderAttachGridPlane");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderAttachGridPlane
class CORDL_TYPE BuilderAttachGridPlane : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attachIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachIndex, put=__cordl_internal_set_attachIndex)) int32_t  attachIndex;

/// @brief Field boundingRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_boundingRadius, put=__cordl_internal_set_boundingRadius)) float_t  boundingRadius;

/// @brief Field center, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityW<::UnityEngine::Transform>  center;

/// @brief Field childPieceCount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_childPieceCount, put=__cordl_internal_set_childPieceCount)) int32_t  childPieceCount;

/// @brief Field connected, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_connected, put=__cordl_internal_set_connected)) ::ArrayW<bool>  connected;

/// @brief Field firstOverlap, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstOverlap, put=__cordl_internal_set_firstOverlap)) ::GorillaTagScripts::SnapOverlap*  firstOverlap;

/// @brief Field gridPlaneDataIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridPlaneDataIndex, put=__cordl_internal_set_gridPlaneDataIndex)) int32_t  gridPlaneDataIndex;

/// @brief Field isMoving, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMoving, put=__cordl_internal_set_isMoving)) bool  isMoving;

/// @brief Field item, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::UnityW<::GorillaTagScripts::BuilderItem>  item;

/// @brief Field length, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field lengthOffset, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lengthOffset, put=__cordl_internal_set_lengthOffset)) float_t  lengthOffset;

/// @brief Field male, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_male, put=__cordl_internal_set_male)) bool  male;

/// @brief Field movesOnPlace, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_movesOnPlace, put=__cordl_internal_set_movesOnPlace)) bool  movesOnPlace;

/// @brief Field movingPart, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_movingPart, put=__cordl_internal_set_movingPart)) ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>  movingPart;

/// @brief Field piece, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

/// @brief Field pieceToGridPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_pieceToGridPosition, put=__cordl_internal_set_pieceToGridPosition)) ::UnityEngine::Vector3  pieceToGridPosition;

/// @brief Field pieceToGridRotation, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_pieceToGridRotation, put=__cordl_internal_set_pieceToGridRotation)) ::UnityEngine::Quaternion  pieceToGridRotation;

/// @brief Field width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Field widthOffset, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_widthOffset, put=__cordl_internal_set_widthOffset)) float_t  widthOffset;

/// @brief Method AddSnapOverlap, addr 0x5b836f8, size 0x74, virtual false, abstract: false, final false
inline void AddSnapOverlap(::GorillaTagScripts::SnapOverlap*  newOverlap) ;

/// @brief Method Awake, addr 0x5b82d78, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcGridOverlap, addr 0x5b83ab8, size 0x570, virtual false, abstract: false, final false
inline void CalcGridOverlap(::GorillaTagScripts::BuilderAttachGridPlane*  otherGridPlane, ::UnityEngine::Vector3  otherPieceLocalPos, ::UnityEngine::Quaternion  otherPieceLocalRot, float_t  gridSize, ::by_ref<::UnityEngine::Vector2Int>  min, ::by_ref<::UnityEngine::Vector2Int>  max) ;

/// @brief Method ChangeChildPieceCount, addr 0x5b83604, size 0xf4, virtual false, abstract: false, final false
inline void ChangeChildPieceCount(int32_t  delta) ;

/// @brief Method GetChildCount, addr 0x5b835fc, size 0x8, virtual false, abstract: false, final false
inline int32_t GetChildCount() ;

/// @brief Method GetGridPosition, addr 0x5b83528, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGridPosition(int32_t  x, int32_t  z, float_t  gridSize) ;

/// @brief Method GetMovingParentGrid, addr 0x5b84128, size 0x138, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane> GetMovingParentGrid() ;

/// @brief Method IsAttachedToMovingGrid, addr 0x5b84028, size 0x100, virtual false, abstract: false, final false
inline bool IsAttachedToMovingGrid() ;

/// @brief Method IsConnected, addr 0x5b83964, size 0x154, virtual false, abstract: false, final false
inline bool IsConnected(::GlobalNamespace::SnapBounds  bounds) ;

static inline ::GorillaTagScripts::BuilderAttachGridPlane* New_ctor() ;

/// @brief Method OnReturnToPool, addr 0x5b83028, size 0x118, virtual false, abstract: false, final false
inline void OnReturnToPool(::GorillaTagScripts::BuilderPool*  pool) ;

/// @brief Method RemoveSnapsWithDifferentRoot, addr 0x5b8376c, size 0x1f8, virtual false, abstract: false, final false
inline void RemoveSnapsWithDifferentRoot(::GlobalNamespace::BuilderPiece*  root, ::GorillaTagScripts::BuilderPool*  pool) ;

/// @brief Method RemoveSnapsWithPiece, addr 0x5b83140, size 0x1a8, virtual false, abstract: false, final false
inline void RemoveSnapsWithPiece(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderPool*  pool) ;

/// @brief Method SetConnected, addr 0x5b832e8, size 0x150, virtual false, abstract: false, final false
inline void SetConnected(::GlobalNamespace::SnapBounds  bounds, bool  connect) ;

/// @brief Method Setup, addr 0x5b82e08, size 0x220, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::BuilderPiece*  piece, int32_t  attachIndex, float_t  gridSize) ;

constexpr int32_t const& __cordl_internal_get_attachIndex() const;

constexpr int32_t& __cordl_internal_get_attachIndex() ;

constexpr float_t const& __cordl_internal_get_boundingRadius() const;

constexpr float_t& __cordl_internal_get_boundingRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_center() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_center() ;

constexpr int32_t const& __cordl_internal_get_childPieceCount() const;

constexpr int32_t& __cordl_internal_get_childPieceCount() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_connected() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_connected() ;

constexpr ::GorillaTagScripts::SnapOverlap* const& __cordl_internal_get_firstOverlap() const;

constexpr ::GorillaTagScripts::SnapOverlap*& __cordl_internal_get_firstOverlap() ;

constexpr int32_t const& __cordl_internal_get_gridPlaneDataIndex() const;

constexpr int32_t& __cordl_internal_get_gridPlaneDataIndex() ;

constexpr bool const& __cordl_internal_get_isMoving() const;

constexpr bool& __cordl_internal_get_isMoving() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderItem> const& __cordl_internal_get_item() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderItem>& __cordl_internal_get_item() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr float_t const& __cordl_internal_get_lengthOffset() const;

constexpr float_t& __cordl_internal_get_lengthOffset() ;

constexpr bool const& __cordl_internal_get_male() const;

constexpr bool& __cordl_internal_get_male() ;

constexpr bool const& __cordl_internal_get_movesOnPlace() const;

constexpr bool& __cordl_internal_get_movesOnPlace() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart> const& __cordl_internal_get_movingPart() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>& __cordl_internal_get_movingPart() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pieceToGridPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pieceToGridPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pieceToGridRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pieceToGridRotation() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr float_t const& __cordl_internal_get_widthOffset() const;

constexpr float_t& __cordl_internal_get_widthOffset() ;

constexpr void __cordl_internal_set_attachIndex(int32_t  value) ;

constexpr void __cordl_internal_set_boundingRadius(float_t  value) ;

constexpr void __cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_childPieceCount(int32_t  value) ;

constexpr void __cordl_internal_set_connected(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_firstOverlap(::GorillaTagScripts::SnapOverlap*  value) ;

constexpr void __cordl_internal_set_gridPlaneDataIndex(int32_t  value) ;

constexpr void __cordl_internal_set_isMoving(bool  value) ;

constexpr void __cordl_internal_set_item(::UnityW<::GorillaTagScripts::BuilderItem>  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_lengthOffset(float_t  value) ;

constexpr void __cordl_internal_set_male(bool  value) ;

constexpr void __cordl_internal_set_movesOnPlace(bool  value) ;

constexpr void __cordl_internal_set_movingPart(::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>  value) ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_pieceToGridPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pieceToGridRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

constexpr void __cordl_internal_set_widthOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x5b84260, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderAttachGridPlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderAttachGridPlane", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderAttachGridPlane(BuilderAttachGridPlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderAttachGridPlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderAttachGridPlane(BuilderAttachGridPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3926};

/// [Tooltip("Are the snap points in this grid \"outies\"")]
/// @brief Field male, offset: 0x20, size: 0x1, def value: None
 bool  ___male;

/// [Tooltip("(Optional) midpoint of the grid")]
/// @brief Field center, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___center;

/// [Tooltip("number of snap points wide (local X-axis)")]
/// @brief Field width, offset: 0x30, size: 0x4, def value: None
 int32_t  ___width;

/// [Tooltip("number of snap points long (local z-axis)")]
/// @brief Field length, offset: 0x34, size: 0x4, def value: None
 int32_t  ___length;

/// @brief Field gridPlaneDataIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___gridPlaneDataIndex;

/// @brief Field item, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderItem>  ___item;

/// @brief Field piece, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

/// @brief Field attachIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___attachIndex;

/// @brief Field boundingRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___boundingRadius;

/// @brief Field pieceToGridPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pieceToGridPosition;

/// @brief Field pieceToGridRotation, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___pieceToGridRotation;

/// @brief Field connected, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<bool>  ___connected;

/// @brief Field firstOverlap, offset: 0x80, size: 0x8, def value: None
 ::GorillaTagScripts::SnapOverlap*  ___firstOverlap;

/// @brief Field widthOffset, offset: 0x88, size: 0x4, def value: None
 float_t  ___widthOffset;

/// @brief Field lengthOffset, offset: 0x8c, size: 0x4, def value: None
 float_t  ___lengthOffset;

/// @brief Field childPieceCount, offset: 0x90, size: 0x4, def value: None
 int32_t  ___childPieceCount;

/// [HideInInspector]
/// @brief Field isMoving, offset: 0x94, size: 0x1, def value: None
 bool  ___isMoving;

/// [HideInInspector]
/// @brief Field movesOnPlace, offset: 0x95, size: 0x1, def value: None
 bool  ___movesOnPlace;

/// [HideInInspector]
/// @brief Field movingPart, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>  ___movingPart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___male) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___center) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___width) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___gridPlaneDataIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___item) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___piece) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___attachIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___boundingRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___pieceToGridPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___pieceToGridRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___connected) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___firstOverlap) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___widthOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___lengthOffset) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___childPieceCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___isMoving) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___movesOnPlace) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderAttachGridPlane, ___movingPart) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderAttachGridPlane) == 0xa0, "Size mismatch!");

} // namespace end def GorillaTagScripts
