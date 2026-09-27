#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPiece.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include "GlobalNamespace/zzzz__PieceFallbackInfo_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPiece)
namespace GlobalNamespace {
class BuilderArmShelf;
}
namespace GlobalNamespace {
class BuilderMaterialOptions;
}
namespace GlobalNamespace {
class BuilderPieceEffectInfo;
}
namespace GlobalNamespace {
class BuilderPiecePrivatePlot;
}
namespace GlobalNamespace {
struct BuilderPiece_State;
}
namespace GlobalNamespace {
class BuilderResources;
}
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
namespace GorillaTagScripts {
class BuilderPool;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Behaviour;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPiece;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPiece*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPiece*, "", "BuilderPiece");
// Dependencies BuilderPiece::State, PieceFallbackInfo, UnityEngine.Behaviour, UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPiece
class CORDL_TYPE BuilderPiece : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::BuilderPiece_State;

/// @brief Field activatedTimeStamp, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_activatedTimeStamp, put=__cordl_internal_set_activatedTimeStamp)) int32_t  activatedTimeStamp;

/// @brief Field areMeshesToggledOnPlace, offset 0x139, size 0x1 
 __declspec(property(get=__cordl_internal_get_areMeshesToggledOnPlace, put=__cordl_internal_set_areMeshesToggledOnPlace)) bool  areMeshesToggledOnPlace;

/// @brief Field armShelf, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_armShelf, put=__cordl_internal_set_armShelf)) ::UnityW<::GlobalNamespace::BuilderArmShelf>  armShelf;

/// @brief Field attachIndex, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachIndex, put=__cordl_internal_set_attachIndex)) int32_t  attachIndex;

/// @brief Field attachPlayerToPiece, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachPlayerToPiece, put=__cordl_internal_set_attachPlayerToPiece)) bool  attachPlayerToPiece;

/// @brief Field colliders, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field collidersEntered, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersEntered, put=__cordl_internal_set_collidersEntered)) ::System::Collections::Generic::HashSet_1<int32_t>*  collidersEntered;

/// @brief Field collisionEnterCooldown, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionEnterCooldown, put=__cordl_internal_set_collisionEnterCooldown)) float_t  collisionEnterCooldown;

/// @brief Field collisionEnterHistory, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionEnterHistory, put=__cordl_internal_set_collisionEnterHistory)) ::ArrayW<float_t>  collisionEnterHistory;

/// @brief Field collisionEnterLimit, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionEnterLimit, put=__cordl_internal_set_collisionEnterLimit)) int32_t  collisionEnterLimit;

/// @brief Field cost, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cost, put=__cordl_internal_set_cost)) ::UnityW<::GlobalNamespace::BuilderResources>  cost;

/// @brief Field currentColliderLayer, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentColliderLayer, put=__cordl_internal_set_currentColliderLayer)) int32_t  currentColliderLayer;

/// @brief Field desiredShelfOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_desiredShelfOffset, put=__cordl_internal_set_desiredShelfOffset)) ::UnityEngine::Vector3  desiredShelfOffset;

/// @brief Field desiredShelfRotationOffset, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_desiredShelfRotationOffset, put=__cordl_internal_set_desiredShelfRotationOffset)) ::UnityEngine::Vector3  desiredShelfRotationOffset;

/// @brief Field displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field fXInfo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fXInfo, put=__cordl_internal_set_fXInfo)) ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>  fXInfo;

/// @brief Field fallbackInfo, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get_fallbackInfo, put=__cordl_internal_set_fallbackInfo)) ::GlobalNamespace::PieceFallbackInfo  fallbackInfo;

/// @brief Field firstChildPiece, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstChildPiece, put=__cordl_internal_set_firstChildPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  firstChildPiece;

/// @brief Field forcedFrozen, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_forcedFrozen, put=__cordl_internal_set_forcedFrozen)) bool  forcedFrozen;

/// @brief Field functionalPieceComponent, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_functionalPieceComponent, put=__cordl_internal_set_functionalPieceComponent)) ::GlobalNamespace::IBuilderPieceFunctional*  functionalPieceComponent;

/// @brief Field functionalPieceState, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_functionalPieceState, put=__cordl_internal_set_functionalPieceState)) uint8_t  functionalPieceState;

/// @brief Field gridPlanes, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridPlanes, put=__cordl_internal_set_gridPlanes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  gridPlanes;

/// @brief Field heldByPlayerActorNumber, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldByPlayerActorNumber, put=__cordl_internal_set_heldByPlayerActorNumber)) int32_t  heldByPlayerActorNumber;

/// @brief Field heldInLeftHand, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_heldInLeftHand, put=__cordl_internal_set_heldInLeftHand)) bool  heldInLeftHand;

/// @brief Field isArmShelf, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_isArmShelf, put=__cordl_internal_set_isArmShelf)) bool  isArmShelf;

/// @brief Field isBuiltIntoTable, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBuiltIntoTable, put=__cordl_internal_set_isBuiltIntoTable)) bool  isBuiltIntoTable;

/// @brief Field isPrivatePlot, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPrivatePlot, put=__cordl_internal_set_isPrivatePlot)) bool  isPrivatePlot;

/// @brief Field isStatic, offset 0x1a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Field listeningToHandLinks, offset 0x1a9, size 0x1 
 __declspec(property(get=__cordl_internal_get_listeningToHandLinks, put=__cordl_internal_set_listeningToHandLinks)) bool  listeningToHandLinks;

/// @brief Field materialOptions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialOptions, put=__cordl_internal_set_materialOptions)) ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  materialOptions;

/// @brief Field materialSwapTargets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialSwapTargets, put=__cordl_internal_set_materialSwapTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  materialSwapTargets;

/// @brief Field materialType, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) int32_t  materialType;

/// @brief Field nextSiblingPiece, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSiblingPiece, put=__cordl_internal_set_nextSiblingPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  nextSiblingPiece;

/// @brief Field oldCollisionTimeIndex, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldCollisionTimeIndex, put=__cordl_internal_set_oldCollisionTimeIndex)) int32_t  oldCollisionTimeIndex;

/// @brief Field onlyWhenNotPlaced, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlyWhenNotPlaced, put=__cordl_internal_set_onlyWhenNotPlaced)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  onlyWhenNotPlaced;

/// @brief Field onlyWhenPlaced, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlyWhenPlaced, put=__cordl_internal_set_onlyWhenPlaced)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  onlyWhenPlaced;

/// @brief Field onlyWhenPlacedBehaviours, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlyWhenPlacedBehaviours, put=__cordl_internal_set_onlyWhenPlacedBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  onlyWhenPlacedBehaviours;

/// @brief Field overrideSavedPiece, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideSavedPiece, put=__cordl_internal_set_overrideSavedPiece)) bool  overrideSavedPiece;

/// @brief Field paintingCount, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_paintingCount, put=__cordl_internal_set_paintingCount)) int32_t  paintingCount;

/// @brief Field parentAttachIndex, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_parentAttachIndex, put=__cordl_internal_set_parentAttachIndex)) int32_t  parentAttachIndex;

/// @brief Field parentHeld, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHeld, put=__cordl_internal_set_parentHeld)) ::UnityW<::UnityEngine::Transform>  parentHeld;

/// @brief Field parentPiece, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentPiece, put=__cordl_internal_set_parentPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  parentPiece;

/// @brief Field pieceComponents, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceComponents, put=__cordl_internal_set_pieceComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  pieceComponents;

/// @brief Field pieceComponentsActive, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_pieceComponentsActive, put=__cordl_internal_set_pieceComponentsActive)) bool  pieceComponentsActive;

/// @brief Field pieceDataIndex, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceDataIndex, put=__cordl_internal_set_pieceDataIndex)) int32_t  pieceDataIndex;

/// @brief Field pieceFunctionComponents, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceFunctionComponents, put=__cordl_internal_set_pieceFunctionComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  pieceFunctionComponents;

/// @brief Field pieceId, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceId, put=__cordl_internal_set_pieceId)) int32_t  pieceId;

/// @brief Field pieceScale, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceScale, put=__cordl_internal_set_pieceScale)) float_t  pieceScale;

/// @brief Field pieceType, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceType, put=__cordl_internal_set_pieceType)) int32_t  pieceType;

/// @brief Field placedOnlyColliders, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_placedOnlyColliders, put=__cordl_internal_set_placedOnlyColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  placedOnlyColliders;

/// @brief Field plotComponent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_plotComponent, put=__cordl_internal_set_plotComponent)) ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>  plotComponent;

/// @brief Field potentialGrabChildCount, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_potentialGrabChildCount, put=__cordl_internal_set_potentialGrabChildCount)) int32_t  potentialGrabChildCount;

/// @brief Field potentialGrabCount, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_potentialGrabCount, put=__cordl_internal_set_potentialGrabCount)) int32_t  potentialGrabCount;

/// @brief Field preventSnapUntilMoved, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_preventSnapUntilMoved, put=__cordl_internal_set_preventSnapUntilMoved)) int32_t  preventSnapUntilMoved;

/// @brief Field preventSnapUntilMovedFromPos, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get_preventSnapUntilMovedFromPos, put=__cordl_internal_set_preventSnapUntilMovedFromPos)) ::UnityEngine::Vector3  preventSnapUntilMovedFromPos;

/// @brief Field privatePlotIndex, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_privatePlotIndex, put=__cordl_internal_set_privatePlotIndex)) int32_t  privatePlotIndex;

/// @brief Field renderingDirect, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingDirect, put=__cordl_internal_set_renderingDirect)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  renderingDirect;

/// @brief Field renderingIndirect, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingIndirect, put=__cordl_internal_set_renderingIndirect)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  renderingIndirect;

/// @brief Field renderingIndirectTransformIndex, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingIndirectTransformIndex, put=__cordl_internal_set_renderingIndirectTransformIndex)) ::System::Collections::Generic::List_1<int32_t>*  renderingIndirectTransformIndex;

/// @brief Field requestedParentPiece, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedParentPiece, put=__cordl_internal_set_requestedParentPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  requestedParentPiece;

/// @brief Field rigidBody, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field savedMaterialType, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedMaterialType, put=__cordl_internal_set_savedMaterialType)) int32_t  savedMaterialType;

/// @brief Field savedPieceType, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedPieceType, put=__cordl_internal_set_savedPieceType)) int32_t  savedPieceType;

/// @brief Field scaleRoot, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleRoot, put=__cordl_internal_set_scaleRoot)) ::UnityW<::UnityEngine::Transform>  scaleRoot;

/// @brief Field shelfOwner, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfOwner, put=__cordl_internal_set_shelfOwner)) int32_t  shelfOwner;

/// @brief Field state, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::BuilderPiece_State  state;

/// @brief Field suppressMaterialWarnings, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_suppressMaterialWarnings, put=__cordl_internal_set_suppressMaterialWarnings)) bool  suppressMaterialWarnings;

/// @brief Field surfaceOverrides, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceOverrides, put=__cordl_internal_set_surfaceOverrides)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*  surfaceOverrides;

/// @brief Field tableOwner, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableOwner, put=__cordl_internal_set_tableOwner)) ::UnityW<::GorillaTagScripts::BuilderTable>  tableOwner;

/// @brief Field tempRenderers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRenderers, put=setStaticF_tempRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  tempRenderers;

/// @brief Field tint, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tint, put=__cordl_internal_set_tint)) float_t  tint;

/// @brief Method AddChildCost, addr 0x57c6710, size 0x1e4, virtual false, abstract: false, final false
inline void AddChildCost(::ArrayW<int32_t>  costArray) ;

/// @brief Method AddPieceToParent, addr 0x57c27e0, size 0x114, virtual false, abstract: false, final false
inline void AddPieceToParent(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method Awake, addr 0x57bee78, size 0x9a0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BumpTwistToPositionRotation, addr 0x57c68f4, size 0x458, virtual false, abstract: false, final false
inline void BumpTwistToPositionRotation(uint8_t  twist, int8_t  xOffset, int8_t  zOffset, int32_t  potentialAttachIndex, ::GorillaTagScripts::BuilderAttachGridPlane*  potentialParentGridPlane, ::by_ref<::UnityEngine::Vector3>  localPosition, ::by_ref<::UnityEngine::Quaternion>  localRotation, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<::UnityEngine::Quaternion>  worldRotation) ;

/// @brief Method CanPlayerAttachPieceToPiece, addr 0x57c595c, size 0x160, virtual false, abstract: false, final false
static inline bool CanPlayerAttachPieceToPiece(int32_t  playerActorNumber, ::GlobalNamespace::BuilderPiece*  attachingPiece, ::GlobalNamespace::BuilderPiece*  attachToPiece) ;

/// @brief Method CanPlayerGrabPiece, addr 0x57c5da4, size 0x118, virtual false, abstract: false, final false
inline bool CanPlayerGrabPiece(int32_t  actorNumber, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method ClearCollisionHistory, addr 0x57bfc7c, size 0xcc, virtual false, abstract: false, final false
inline void ClearCollisionHistory() ;

/// @brief Method ClearParentHeld, addr 0x57c31e4, size 0x130, virtual false, abstract: false, final false
inline void ClearParentHeld() ;

/// @brief Method ClearParentPiece, addr 0x57c28f4, size 0x180, virtual false, abstract: false, final false
inline void ClearParentPiece(bool  ignoreSnaps) ;

/// @brief Method FindActiveRenderers, addr 0x57bf910, size 0x36c, virtual false, abstract: false, final false
inline void FindActiveRenderers() ;

/// @brief Method GetAttachIndex, addr 0x57c1700, size 0x8, virtual false, abstract: false, final false
inline int32_t GetAttachIndex() ;

/// @brief Method GetAttachedBuiltInPiece, addr 0x57c5abc, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetAttachedBuiltInPiece() ;

/// @brief Method GetBuilderPieceFromCollider, addr 0x57c5670, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BuilderPiece> GetBuilderPieceFromCollider(::UnityEngine::Collider*  collider) ;

/// @brief Method GetBuilderPieceFromTransform, addr 0x57c5740, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BuilderPiece> GetBuilderPieceFromTransform(::UnityEngine::Transform*  transform) ;

/// @brief Method GetChainCost, addr 0x57c656c, size 0x1a4, virtual false, abstract: false, final false
inline void GetChainCost(::ArrayW<int32_t>  costArray) ;

/// @brief Method GetChainCostAndCount, addr 0x57c61c0, size 0x1a8, virtual false, abstract: false, final false
inline int32_t GetChainCostAndCount(::ArrayW<int32_t>  costArray) ;

/// @brief Method GetChildCount, addr 0x57c2c2c, size 0x13c, virtual false, abstract: false, final false
inline int32_t GetChildCount() ;

/// @brief Method GetChildCountAndCost, addr 0x57c6368, size 0x204, virtual false, abstract: false, final false
inline int32_t GetChildCountAndCost(::ArrayW<int32_t>  costArray) ;

/// @brief Method GetExpectedGrabCollisionLayer, addr 0x57c3d48, size 0x16c, virtual false, abstract: false, final false
inline int32_t GetExpectedGrabCollisionLayer() ;

/// @brief Method GetParentAttachIndex, addr 0x57c1708, size 0x8, virtual false, abstract: false, final false
inline int32_t GetParentAttachIndex() ;

/// @brief Method GetParentPieceId, addr 0x57c1680, size 0x80, virtual false, abstract: false, final false
inline int32_t GetParentPieceId() ;

/// @brief Method GetPieceBumpOffset, addr 0x57c71f0, size 0x354, virtual false, abstract: false, final false
inline void GetPieceBumpOffset(uint8_t  twist, ::by_ref<int8_t>  xOffset, ::by_ref<int8_t>  zOffset) ;

/// @brief Method GetPieceId, addr 0x57c1678, size 0x8, virtual false, abstract: false, final false
inline int32_t GetPieceId() ;

/// @brief Method GetPiecePlacement, addr 0x57c6f0c, size 0x98, virtual false, abstract: false, final false
inline int32_t GetPiecePlacement() ;

/// @brief Method GetPieceTwist, addr 0x57c6fa4, size 0x24c, virtual false, abstract: false, final false
inline uint8_t GetPieceTwist() ;

/// @brief Method GetRootPiece, addr 0x57c2ba4, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetRootPiece() ;

/// @brief Method GetScale, addr 0x57c1b18, size 0x8, virtual false, abstract: false, final false
inline float_t GetScale() ;

/// @brief Method GetTable, addr 0x57bfd58, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::BuilderTable> GetTable() ;

/// @brief Method IsDroppedState, addr 0x57c33bc, size 0x18, virtual false, abstract: false, final false
static inline bool IsDroppedState(::GlobalNamespace::BuilderPiece_State  state) ;

/// @brief Method IsHeldBy, addr 0x57c3394, size 0x20, virtual false, abstract: false, final false
inline bool IsHeldBy(int32_t  actorNumber) ;

/// @brief Method IsHeldInLeftHand, addr 0x57c33b4, size 0x8, virtual false, abstract: false, final false
inline bool IsHeldInLeftHand() ;

/// @brief Method IsHeldLocal, addr 0x57c3314, size 0x80, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

/// @brief Method IsPieceMoving, addr 0x57c6014, size 0x1ac, virtual false, abstract: false, final false
inline bool IsPieceMoving() ;

/// @brief Method IsPrivatePlot, addr 0x57c592c, size 0x8, virtual false, abstract: false, final false
inline bool IsPrivatePlot() ;

/// @brief Method MakePieceRoot, addr 0x57c581c, size 0x110, virtual false, abstract: false, final false
static inline void MakePieceRoot(::GlobalNamespace::BuilderPiece*  piece) ;

static inline ::GlobalNamespace::BuilderPiece* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x57c43e8, size 0x1c0, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnCreate, addr 0x57c5338, size 0x110, virtual false, abstract: false, final false
inline void OnCreate() ;

/// @brief Method OnCreatedByPool, addr 0x57c0aa0, size 0x138, virtual false, abstract: false, final false
inline void OnCreatedByPool() ;

/// @brief Method OnGrabbedAsRoot, addr 0x57c2f5c, size 0x174, virtual false, abstract: false, final false
inline void OnGrabbedAsRoot() ;

/// @brief Method OnPlacementDeserialized, addr 0x57c5448, size 0x100, virtual false, abstract: false, final false
inline void OnPlacementDeserialized() ;

/// @brief Method OnReleasedAsRoot, addr 0x57c30d0, size 0x114, virtual false, abstract: false, final false
inline void OnReleasedAsRoot() ;

/// @brief Method OnReturnToPool, addr 0x57bfd60, size 0x37c, virtual false, abstract: false, final false
inline void OnReturnToPool() ;

/// @brief Method PaintingTint, addr 0x57c1b20, size 0x28, virtual false, abstract: false, final false
inline void PaintingTint(bool  enable) ;

/// @brief Method PlayDisconnectFx, addr 0x57c55f8, size 0x18, virtual false, abstract: false, final false
inline void PlayDisconnectFx() ;

/// @brief Method PlayFX, addr 0x57c5560, size 0x98, virtual false, abstract: false, final false
inline void PlayFX(::UnityEngine::GameObject*  fx) ;

/// @brief Method PlayGrabbedFx, addr 0x57c5610, size 0x18, virtual false, abstract: false, final false
inline void PlayGrabbedFx() ;

/// @brief Method PlayLocationLockFx, addr 0x57c5640, size 0x18, virtual false, abstract: false, final false
inline void PlayLocationLockFx() ;

/// @brief Method PlayPlacementFx, addr 0x57c5548, size 0x18, virtual false, abstract: false, final false
inline void PlayPlacementFx() ;

/// @brief Method PlayRecycleFx, addr 0x57c5658, size 0x18, virtual false, abstract: false, final false
inline void PlayRecycleFx() ;

/// @brief Method PlayTooHeavyFx, addr 0x57c5628, size 0x18, virtual false, abstract: false, final false
inline void PlayTooHeavyFx() ;

/// @brief Method PotentialGrab, addr 0x57c1c1c, size 0x34, virtual false, abstract: false, final false
inline void PotentialGrab(bool  enable) ;

/// @brief Method PotentialGrabChildren, addr 0x57c1c50, size 0xf8, virtual false, abstract: false, final false
static inline void PotentialGrabChildren(::GlobalNamespace::BuilderPiece*  piece, bool  enable) ;

/// @brief Method RefreshTint, addr 0x57c1b48, size 0xd4, virtual false, abstract: false, final false
inline void RefreshTint() ;

/// @brief Method RemoveOverlapsWithDifferentPieceRoot, addr 0x57c2a74, size 0x130, virtual false, abstract: false, final false
static inline void RemoveOverlapsWithDifferentPieceRoot(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  root, ::GorillaTagScripts::BuilderPool*  pool) ;

/// @brief Method RemovePieceFromParent, addr 0x57c2418, size 0x3c8, virtual false, abstract: false, final false
static inline void RemovePieceFromParent(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method SetActivateTimeStamp, addr 0x57c33d4, size 0x90, virtual false, abstract: false, final false
inline void SetActivateTimeStamp(int32_t  timeStamp) ;

/// @brief Method SetActive, addr 0x57bf818, size 0xf8, virtual false, abstract: false, final false
inline void SetActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  active) ;

/// @brief Method SetBehavioursEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Behaviour*>)
inline void SetBehavioursEnabled(::System::Collections::Generic::List_1<T>*  components, bool  enabled) ;

/// @brief Method SetChildrenCollisionLayer, addr 0x57c3eb4, size 0xbc, virtual false, abstract: false, final false
inline void SetChildrenCollisionLayer(int32_t  layer) ;

/// @brief Method SetChildrenState, addr 0x57c42c0, size 0x9c, virtual false, abstract: false, final false
inline void SetChildrenState(::GlobalNamespace::BuilderPiece_State  newState, bool  force) ;

/// @brief Method SetColliderLayers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void SetColliderLayers(::System::Collections::Generic::List_1<T>*  components, int32_t  layer) ;

/// @brief Method SetCollidersEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void SetCollidersEnabled(::System::Collections::Generic::List_1<T>*  components, bool  enabled) ;

/// @brief Method SetDirectRenderersVisible, addr 0x57c4628, size 0x154, virtual false, abstract: false, final false
inline void SetDirectRenderersVisible(bool  visible) ;

/// @brief Method SetFunctionalPieceState, addr 0x57c18f8, size 0x14c, virtual false, abstract: false, final false
inline void SetFunctionalPieceState(uint8_t  fState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method SetKinematic, addr 0x57c3f70, size 0x350, virtual false, abstract: false, final false
inline void SetKinematic(bool  kinematic, bool  destroyImmediate) ;

/// @brief Method SetMaterial, addr 0x57c0c7c, size 0x468, virtual false, abstract: false, final false
inline void SetMaterial(int32_t  inMaterialType, bool  force) ;

/// @brief Method SetParentHeld, addr 0x57c2d68, size 0x1f4, virtual false, abstract: false, final false
inline void SetParentHeld(::UnityEngine::Transform*  parentHeld, int32_t  heldByPlayerActorNumber, bool  heldInLeftHand) ;

/// @brief Method SetParentPiece, addr 0x57c2158, size 0x2c0, virtual false, abstract: false, final false
inline void SetParentPiece(int32_t  newAttachIndex, ::GlobalNamespace::BuilderPiece*  newParentPiece, int32_t  newParentAttachIndex) ;

/// @brief Method SetPieceActive, addr 0x57c1710, size 0x18c, virtual false, abstract: false, final false
inline void SetPieceActive(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  components, bool  active) ;

/// @brief Method SetScale, addr 0x57c1a44, size 0xd4, virtual false, abstract: false, final false
inline void SetScale(float_t  scale) ;

/// @brief Method SetState, addr 0x57c3464, size 0x8e4, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::BuilderPiece_State  newState, bool  force) ;

/// @brief Method SetStatic, addr 0x57c435c, size 0x8c, virtual false, abstract: false, final false
inline void SetStatic(bool  isStatic, bool  force) ;

/// @brief Method SetTable, addr 0x57bfd48, size 0x10, virtual false, abstract: false, final false
inline void SetTable(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method SetTint, addr 0x57c1d48, size 0x3c, virtual false, abstract: false, final false
inline void SetTint(float_t  tint) ;

/// @brief Method SetupPiece, addr 0x57c0bd8, size 0xa4, virtual false, abstract: false, final false
inline void SetupPiece(float_t  gridSize) ;

/// @brief Method TryGetPlotComponent, addr 0x57c5934, size 0x28, virtual false, abstract: false, final false
inline bool TryGetPlotComponent(::by_ref<::GlobalNamespace::BuilderPiecePrivatePlot*>  plot) ;

/// @brief Method TwistToLocalRotation, addr 0x57c6d4c, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion TwistToLocalRotation(uint8_t  twist, int32_t  potentialAttachIndex) ;

/// @brief Method UpdateCollidersEnabled, addr 0x57c189c, size 0x5c, virtual false, abstract: false, final false
inline void UpdateCollidersEnabled(bool  _enabled) ;

/// @brief Method UpdateGrabbedPieceCollisionLayer, addr 0x57c45a8, size 0x80, virtual false, abstract: false, final false
inline void UpdateGrabbedPieceCollisionLayer() ;

constexpr int32_t const& __cordl_internal_get_activatedTimeStamp() const;

constexpr int32_t& __cordl_internal_get_activatedTimeStamp() ;

constexpr bool const& __cordl_internal_get_areMeshesToggledOnPlace() const;

constexpr bool& __cordl_internal_get_areMeshesToggledOnPlace() ;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf> const& __cordl_internal_get_armShelf() const;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf>& __cordl_internal_get_armShelf() ;

constexpr int32_t const& __cordl_internal_get_attachIndex() const;

constexpr int32_t& __cordl_internal_get_attachIndex() ;

constexpr bool const& __cordl_internal_get_attachPlayerToPiece() const;

constexpr bool& __cordl_internal_get_attachPlayerToPiece() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_collidersEntered() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_collidersEntered() ;

constexpr float_t const& __cordl_internal_get_collisionEnterCooldown() const;

constexpr float_t& __cordl_internal_get_collisionEnterCooldown() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_collisionEnterHistory() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_collisionEnterHistory() ;

constexpr int32_t const& __cordl_internal_get_collisionEnterLimit() const;

constexpr int32_t& __cordl_internal_get_collisionEnterLimit() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& __cordl_internal_get_cost() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResources>& __cordl_internal_get_cost() ;

constexpr int32_t const& __cordl_internal_get_currentColliderLayer() const;

constexpr int32_t& __cordl_internal_get_currentColliderLayer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_desiredShelfOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_desiredShelfOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_desiredShelfRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_desiredShelfRotationOffset() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo> const& __cordl_internal_get_fXInfo() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>& __cordl_internal_get_fXInfo() ;

constexpr ::GlobalNamespace::PieceFallbackInfo const& __cordl_internal_get_fallbackInfo() const;

constexpr ::GlobalNamespace::PieceFallbackInfo& __cordl_internal_get_fallbackInfo() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_firstChildPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_firstChildPiece() ;

constexpr bool const& __cordl_internal_get_forcedFrozen() const;

constexpr bool& __cordl_internal_get_forcedFrozen() ;

constexpr ::GlobalNamespace::IBuilderPieceFunctional* const& __cordl_internal_get_functionalPieceComponent() const;

constexpr ::GlobalNamespace::IBuilderPieceFunctional*& __cordl_internal_get_functionalPieceComponent() ;

constexpr uint8_t const& __cordl_internal_get_functionalPieceState() const;

constexpr uint8_t& __cordl_internal_get_functionalPieceState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& __cordl_internal_get_gridPlanes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& __cordl_internal_get_gridPlanes() ;

constexpr int32_t const& __cordl_internal_get_heldByPlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_heldByPlayerActorNumber() ;

constexpr bool const& __cordl_internal_get_heldInLeftHand() const;

constexpr bool& __cordl_internal_get_heldInLeftHand() ;

constexpr bool const& __cordl_internal_get_isArmShelf() const;

constexpr bool& __cordl_internal_get_isArmShelf() ;

constexpr bool const& __cordl_internal_get_isBuiltIntoTable() const;

constexpr bool& __cordl_internal_get_isBuiltIntoTable() ;

constexpr bool const& __cordl_internal_get_isPrivatePlot() const;

constexpr bool& __cordl_internal_get_isPrivatePlot() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr bool const& __cordl_internal_get_listeningToHandLinks() const;

constexpr bool& __cordl_internal_get_listeningToHandLinks() ;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& __cordl_internal_get_materialOptions() const;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& __cordl_internal_get_materialOptions() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_materialSwapTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_materialSwapTargets() ;

constexpr int32_t const& __cordl_internal_get_materialType() const;

constexpr int32_t& __cordl_internal_get_materialType() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_nextSiblingPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_nextSiblingPiece() ;

constexpr int32_t const& __cordl_internal_get_oldCollisionTimeIndex() const;

constexpr int32_t& __cordl_internal_get_oldCollisionTimeIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_onlyWhenNotPlaced() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_onlyWhenNotPlaced() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_onlyWhenPlaced() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_onlyWhenPlaced() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>* const& __cordl_internal_get_onlyWhenPlacedBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*& __cordl_internal_get_onlyWhenPlacedBehaviours() ;

constexpr bool const& __cordl_internal_get_overrideSavedPiece() const;

constexpr bool& __cordl_internal_get_overrideSavedPiece() ;

constexpr int32_t const& __cordl_internal_get_paintingCount() const;

constexpr int32_t& __cordl_internal_get_paintingCount() ;

constexpr int32_t const& __cordl_internal_get_parentAttachIndex() const;

constexpr int32_t& __cordl_internal_get_parentAttachIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentHeld() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentHeld() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_parentPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_parentPiece() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>* const& __cordl_internal_get_pieceComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*& __cordl_internal_get_pieceComponents() ;

constexpr bool const& __cordl_internal_get_pieceComponentsActive() const;

constexpr bool& __cordl_internal_get_pieceComponentsActive() ;

constexpr int32_t const& __cordl_internal_get_pieceDataIndex() const;

constexpr int32_t& __cordl_internal_get_pieceDataIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_pieceFunctionComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_pieceFunctionComponents() ;

constexpr int32_t const& __cordl_internal_get_pieceId() const;

constexpr int32_t& __cordl_internal_get_pieceId() ;

constexpr float_t const& __cordl_internal_get_pieceScale() const;

constexpr float_t& __cordl_internal_get_pieceScale() ;

constexpr int32_t const& __cordl_internal_get_pieceType() const;

constexpr int32_t& __cordl_internal_get_pieceType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_placedOnlyColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_placedOnlyColliders() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot> const& __cordl_internal_get_plotComponent() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>& __cordl_internal_get_plotComponent() ;

constexpr int32_t const& __cordl_internal_get_potentialGrabChildCount() const;

constexpr int32_t& __cordl_internal_get_potentialGrabChildCount() ;

constexpr int32_t const& __cordl_internal_get_potentialGrabCount() const;

constexpr int32_t& __cordl_internal_get_potentialGrabCount() ;

constexpr int32_t const& __cordl_internal_get_preventSnapUntilMoved() const;

constexpr int32_t& __cordl_internal_get_preventSnapUntilMoved() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_preventSnapUntilMovedFromPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_preventSnapUntilMovedFromPos() ;

constexpr int32_t const& __cordl_internal_get_privatePlotIndex() const;

constexpr int32_t& __cordl_internal_get_privatePlotIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_renderingDirect() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_renderingDirect() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_renderingIndirect() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_renderingIndirect() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_renderingIndirectTransformIndex() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_renderingIndirectTransformIndex() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_requestedParentPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_requestedParentPiece() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr int32_t const& __cordl_internal_get_savedMaterialType() const;

constexpr int32_t& __cordl_internal_get_savedMaterialType() ;

constexpr int32_t const& __cordl_internal_get_savedPieceType() const;

constexpr int32_t& __cordl_internal_get_savedPieceType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleRoot() ;

constexpr int32_t const& __cordl_internal_get_shelfOwner() const;

constexpr int32_t& __cordl_internal_get_shelfOwner() ;

constexpr ::GlobalNamespace::BuilderPiece_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::BuilderPiece_State& __cordl_internal_get_state() ;

constexpr bool const& __cordl_internal_get_suppressMaterialWarnings() const;

constexpr bool& __cordl_internal_get_suppressMaterialWarnings() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>* const& __cordl_internal_get_surfaceOverrides() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*& __cordl_internal_get_surfaceOverrides() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_tableOwner() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_tableOwner() ;

constexpr float_t const& __cordl_internal_get_tint() const;

constexpr float_t& __cordl_internal_get_tint() ;

constexpr void __cordl_internal_set_activatedTimeStamp(int32_t  value) ;

constexpr void __cordl_internal_set_areMeshesToggledOnPlace(bool  value) ;

constexpr void __cordl_internal_set_armShelf(::UnityW<::GlobalNamespace::BuilderArmShelf>  value) ;

constexpr void __cordl_internal_set_attachIndex(int32_t  value) ;

constexpr void __cordl_internal_set_attachPlayerToPiece(bool  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_collidersEntered(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_collisionEnterCooldown(float_t  value) ;

constexpr void __cordl_internal_set_collisionEnterHistory(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_collisionEnterLimit(int32_t  value) ;

constexpr void __cordl_internal_set_cost(::UnityW<::GlobalNamespace::BuilderResources>  value) ;

constexpr void __cordl_internal_set_currentColliderLayer(int32_t  value) ;

constexpr void __cordl_internal_set_desiredShelfOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_desiredShelfRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_fXInfo(::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>  value) ;

constexpr void __cordl_internal_set_fallbackInfo(::GlobalNamespace::PieceFallbackInfo  value) ;

constexpr void __cordl_internal_set_firstChildPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_forcedFrozen(bool  value) ;

constexpr void __cordl_internal_set_functionalPieceComponent(::GlobalNamespace::IBuilderPieceFunctional*  value) ;

constexpr void __cordl_internal_set_functionalPieceState(uint8_t  value) ;

constexpr void __cordl_internal_set_gridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value) ;

constexpr void __cordl_internal_set_heldByPlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_heldInLeftHand(bool  value) ;

constexpr void __cordl_internal_set_isArmShelf(bool  value) ;

constexpr void __cordl_internal_set_isBuiltIntoTable(bool  value) ;

constexpr void __cordl_internal_set_isPrivatePlot(bool  value) ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

constexpr void __cordl_internal_set_listeningToHandLinks(bool  value) ;

constexpr void __cordl_internal_set_materialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value) ;

constexpr void __cordl_internal_set_materialSwapTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_materialType(int32_t  value) ;

constexpr void __cordl_internal_set_nextSiblingPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_oldCollisionTimeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_onlyWhenNotPlaced(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyWhenPlaced(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyWhenPlacedBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  value) ;

constexpr void __cordl_internal_set_overrideSavedPiece(bool  value) ;

constexpr void __cordl_internal_set_paintingCount(int32_t  value) ;

constexpr void __cordl_internal_set_parentAttachIndex(int32_t  value) ;

constexpr void __cordl_internal_set_parentHeld(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_pieceComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  value) ;

constexpr void __cordl_internal_set_pieceComponentsActive(bool  value) ;

constexpr void __cordl_internal_set_pieceDataIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pieceFunctionComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_pieceId(int32_t  value) ;

constexpr void __cordl_internal_set_pieceScale(float_t  value) ;

constexpr void __cordl_internal_set_pieceType(int32_t  value) ;

constexpr void __cordl_internal_set_placedOnlyColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_plotComponent(::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>  value) ;

constexpr void __cordl_internal_set_potentialGrabChildCount(int32_t  value) ;

constexpr void __cordl_internal_set_potentialGrabCount(int32_t  value) ;

constexpr void __cordl_internal_set_preventSnapUntilMoved(int32_t  value) ;

constexpr void __cordl_internal_set_preventSnapUntilMovedFromPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_privatePlotIndex(int32_t  value) ;

constexpr void __cordl_internal_set_renderingDirect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_renderingIndirect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_renderingIndirectTransformIndex(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_requestedParentPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_savedMaterialType(int32_t  value) ;

constexpr void __cordl_internal_set_savedPieceType(int32_t  value) ;

constexpr void __cordl_internal_set_scaleRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfOwner(int32_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::BuilderPiece_State  value) ;

constexpr void __cordl_internal_set_suppressMaterialWarnings(bool  value) ;

constexpr void __cordl_internal_set_surfaceOverrides(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*  value) ;

constexpr void __cordl_internal_set_tableOwner(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_tint(float_t  value) ;

/// @brief Method .ctor, addr 0x57c7544, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* getStaticF_tempRenderers() ;

static inline void setStaticF_tempRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPiece() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPiece", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPiece(BuilderPiece && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPiece", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPiece(BuilderPiece const& ) = delete;

/// @brief Field HEAVY_MASS offset 0xffffffff size 0x4
static constexpr float_t  HEAVY_MASS{static_cast<float_t>(10000.0f)};

/// @brief Field INVALID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID{static_cast<int32_t>(0xffffffff)};

/// @brief Field LIGHT_MASS offset 0xffffffff size 0x4
static constexpr float_t  LIGHT_MASS{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1605};

/// [Tooltip("Name for debug text")]
/// @brief Field displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___displayName;

/// [Tooltip("(Optional) scriptable object containing material swaps")]
/// @brief Field materialOptions, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  ___materialOptions;

/// [Tooltip("Builder Resources used by this object\nbuilderRscBasic for simple meshes\nbuilderRscDecorative for detailed meshes\nbuilderRscFunctional for extra scripts or effects")]
/// @brief Field cost, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResources>  ___cost;

/// [Tooltip("Spawn Offset")]
/// @brief Field desiredShelfOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___desiredShelfOffset;

/// [Tooltip("Spawn Offset")]
/// @brief Field desiredShelfRotationOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___desiredShelfRotationOffset;

/// [FormerlySerializedAs("vFXInfo")]
/// [Tooltip("sounds for block actions. everything uses BuilderPieceEffectInfo_Default")]
/// [SerializeField]
/// @brief Field fXInfo, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>  ___fXInfo;

/// @brief Field materialSwapTargets, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___materialSwapTargets;

/// @brief Field surfaceOverrides, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*  ___surfaceOverrides;

/// [Tooltip("parent object of everything scaled with the piece")]
/// @brief Field scaleRoot, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___scaleRoot;

/// [Tooltip("Is the block part of the room / immovable (used for the base terrain)")]
/// @brief Field isBuiltIntoTable, offset: 0x70, size: 0x1, def value: None
 bool  ___isBuiltIntoTable;

/// @brief Field isArmShelf, offset: 0x71, size: 0x1, def value: None
 bool  ___isArmShelf;

/// [HideInInspector]
/// @brief Field armShelf, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderArmShelf>  ___armShelf;

/// [Tooltip("Used to prevent log warnings from materials incompatible with the builder renderer\nAnything that needs text/transparency/or particles uses the normal rendering pipeline")]
/// @brief Field suppressMaterialWarnings, offset: 0x80, size: 0x1, def value: None
 bool  ___suppressMaterialWarnings;

/// [Tooltip("Only used by private plots")]
/// @brief Field isPrivatePlot, offset: 0x81, size: 0x1, def value: None
 bool  ___isPrivatePlot;

/// [HideInInspector]
/// @brief Field privatePlotIndex, offset: 0x84, size: 0x4, def value: None
 int32_t  ___privatePlotIndex;

/// [Tooltip("Only used by private plots")]
/// @brief Field plotComponent, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>  ___plotComponent;

/// [Tooltip("Add piece movement to player movement when touched")]
/// @brief Field attachPlayerToPiece, offset: 0x90, size: 0x1, def value: None
 bool  ___attachPlayerToPiece;

/// @brief Field pieceType, offset: 0x94, size: 0x4, def value: None
 int32_t  ___pieceType;

/// @brief Field pieceId, offset: 0x98, size: 0x4, def value: None
 int32_t  ___pieceId;

/// @brief Field pieceDataIndex, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___pieceDataIndex;

/// @brief Field materialType, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___materialType;

/// @brief Field heldByPlayerActorNumber, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___heldByPlayerActorNumber;

/// @brief Field heldInLeftHand, offset: 0xa8, size: 0x1, def value: None
 bool  ___heldInLeftHand;

/// @brief Field parentHeld, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentHeld;

/// [HideInInspector]
/// @brief Field parentPiece, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___parentPiece;

/// [HideInInspector]
/// @brief Field firstChildPiece, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___firstChildPiece;

/// [HideInInspector]
/// @brief Field nextSiblingPiece, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___nextSiblingPiece;

/// [HideInInspector]
/// @brief Field attachIndex, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___attachIndex;

/// [HideInInspector]
/// @brief Field parentAttachIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___parentAttachIndex;

/// @brief Field shelfOwner, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___shelfOwner;

/// [HideInInspector]
/// @brief Field gridPlanes, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  ___gridPlanes;

/// [HideInInspector]
/// @brief Field colliders, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field placedOnlyColliders, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___placedOnlyColliders;

/// @brief Field currentColliderLayer, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___currentColliderLayer;

/// [Tooltip("Components enabled when the block is snapped to the build table")]
/// @brief Field onlyWhenPlacedBehaviours, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  ___onlyWhenPlacedBehaviours;

/// [Tooltip("Game objects enabled when the block is snapped to the build table\nAny concave collision should be here")]
/// @brief Field onlyWhenPlaced, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___onlyWhenPlaced;

/// [Tooltip("Game objects enabled when the block is not snapped to the build table\n Convex collision should be here if there is concave collision when placed")]
/// @brief Field onlyWhenNotPlaced, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___onlyWhenNotPlaced;

/// @brief Field pieceComponents, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  ___pieceComponents;

/// @brief Field functionalPieceComponent, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::IBuilderPieceFunctional*  ___functionalPieceComponent;

/// @brief Field functionalPieceState, offset: 0x128, size: 0x1, def value: None
 uint8_t  ___functionalPieceState;

/// @brief Field pieceFunctionComponents, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___pieceFunctionComponents;

/// @brief Field pieceComponentsActive, offset: 0x138, size: 0x1, def value: None
 bool  ___pieceComponentsActive;

/// [Tooltip("Check if any renderers are in the onlyWhenPlaced or onlyWhenNotPlaced lists")]
/// @brief Field areMeshesToggledOnPlace, offset: 0x139, size: 0x1, def value: None
 bool  ___areMeshesToggledOnPlace;

/// @brief Field rigidBody, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field activatedTimeStamp, offset: 0x148, size: 0x4, def value: None
 int32_t  ___activatedTimeStamp;

/// [HideInInspector]
/// @brief Field preventSnapUntilMoved, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___preventSnapUntilMoved;

/// [HideInInspector]
/// @brief Field preventSnapUntilMovedFromPos, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___preventSnapUntilMovedFromPos;

/// [HideInInspector]
/// @brief Field requestedParentPiece, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___requestedParentPiece;

/// @brief Field tableOwner, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___tableOwner;

/// @brief Field fallbackInfo, offset: 0x170, size: 0x10, def value: None
 ::GlobalNamespace::PieceFallbackInfo  ___fallbackInfo;

/// @brief Field overrideSavedPiece, offset: 0x180, size: 0x1, def value: None
 bool  ___overrideSavedPiece;

/// @brief Field savedPieceType, offset: 0x184, size: 0x4, def value: None
 int32_t  ___savedPieceType;

/// @brief Field savedMaterialType, offset: 0x188, size: 0x4, def value: None
 int32_t  ___savedMaterialType;

/// @brief Field pieceScale, offset: 0x18c, size: 0x4, def value: None
 float_t  ___pieceScale;

/// @brief Field collisionEnterHistory, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<float_t>  ___collisionEnterHistory;

/// @brief Field collisionEnterLimit, offset: 0x198, size: 0x4, def value: None
 int32_t  ___collisionEnterLimit;

/// @brief Field collisionEnterCooldown, offset: 0x19c, size: 0x4, def value: None
 float_t  ___collisionEnterCooldown;

/// @brief Field oldCollisionTimeIndex, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___oldCollisionTimeIndex;

/// [HideInInspector]
/// @brief Field state, offset: 0x1a4, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPiece_State  ___state;

/// [HideInInspector]
/// @brief Field isStatic, offset: 0x1a8, size: 0x1, def value: None
 bool  ___isStatic;

/// @brief Field listeningToHandLinks, offset: 0x1a9, size: 0x1, def value: None
 bool  ___listeningToHandLinks;

/// [HideInInspector]
/// @brief Field renderingDirect, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___renderingDirect;

/// [HideInInspector]
/// @brief Field renderingIndirect, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___renderingIndirect;

/// [HideInInspector]
/// @brief Field renderingIndirectTransformIndex, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___renderingIndirectTransformIndex;

/// [HideInInspector]
/// @brief Field tint, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___tint;

/// @brief Field paintingCount, offset: 0x1cc, size: 0x4, def value: None
 int32_t  ___paintingCount;

/// @brief Field potentialGrabCount, offset: 0x1d0, size: 0x4, def value: None
 int32_t  ___potentialGrabCount;

/// @brief Field potentialGrabChildCount, offset: 0x1d4, size: 0x4, def value: None
 int32_t  ___potentialGrabChildCount;

/// @brief Field forcedFrozen, offset: 0x1d8, size: 0x1, def value: None
 bool  ___forcedFrozen;

/// @brief Field collidersEntered, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___collidersEntered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___materialOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___cost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___desiredShelfOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___desiredShelfRotationOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___fXInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___materialSwapTargets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___surfaceOverrides) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___scaleRoot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___isBuiltIntoTable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___isArmShelf) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___armShelf) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___suppressMaterialWarnings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___isPrivatePlot) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___privatePlotIndex) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___plotComponent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___attachPlayerToPiece) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceType) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceDataIndex) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___materialType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___heldByPlayerActorNumber) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___heldInLeftHand) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___parentHeld) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___parentPiece) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___firstChildPiece) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___nextSiblingPiece) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___attachIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___parentAttachIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___shelfOwner) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___gridPlanes) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___colliders) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___placedOnlyColliders) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___currentColliderLayer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___onlyWhenPlacedBehaviours) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___onlyWhenPlaced) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___onlyWhenNotPlaced) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceComponents) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___functionalPieceComponent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___functionalPieceState) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceFunctionComponents) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceComponentsActive) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___areMeshesToggledOnPlace) == 0x139, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___rigidBody) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___activatedTimeStamp) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___preventSnapUntilMoved) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___preventSnapUntilMovedFromPos) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___requestedParentPiece) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___tableOwner) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___fallbackInfo) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___overrideSavedPiece) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___savedPieceType) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___savedMaterialType) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___pieceScale) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___collisionEnterHistory) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___collisionEnterLimit) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___collisionEnterCooldown) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___oldCollisionTimeIndex) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___state) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___isStatic) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___listeningToHandLinks) == 0x1a9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___renderingDirect) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___renderingIndirect) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___renderingIndirectTransformIndex) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___tint) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___paintingCount) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___potentialGrabCount) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___potentialGrabChildCount) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___forcedFrozen) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPiece, ___collidersEntered) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPiece) == 0x1e8, "Size mismatch!");

} // namespace end def GlobalNamespace
