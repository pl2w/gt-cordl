#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__OverlapSphereCommand_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__SpherecastCommand_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceInteractor)
namespace GlobalNamespace {
class BuilderBumpGlow;
}
namespace GlobalNamespace {
class BuilderLaserSight;
}
namespace GlobalNamespace {
struct BuilderPieceInteractor_HandState;
}
namespace GlobalNamespace {
struct BuilderPieceInteractor_HandType;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class EquipmentInteractor;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GorillaTagScripts {
struct BuilderPotentialPlacement;
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
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceInteractor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceInteractor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceInteractor*, "", "BuilderPieceInteractor");
// Dependencies GorillaTagScripts.BuilderGridPlaneData, GorillaTagScripts.BuilderPieceData, GorillaTagScripts.BuilderPotentialPlacement, System.Collections.Generic.List`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Jobs.JobHandle, UnityEngine.Collider, UnityEngine.ColliderHit, UnityEngine.MonoBehaviour, UnityEngine.OverlapSphereCommand, UnityEngine.RaycastHit, UnityEngine.SpherecastCommand
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceInteractor
class CORDL_TYPE BuilderPieceInteractor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandState = ::GlobalNamespace::BuilderPieceInteractor_HandState;

using HandType = ::GlobalNamespace::BuilderPieceInteractor_HandType;

/// @brief Field allPotentialPlacements, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allPotentialPlacements, put=setStaticF_allPotentialPlacements)) ::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>  allPotentialPlacements;

/// @brief Field checkNearbyPiecesHandle, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_checkNearbyPiecesHandle, put=__cordl_internal_set_checkNearbyPiecesHandle)) ::Unity::Jobs::JobHandle  checkNearbyPiecesHandle;

/// @brief Field checkPiecesInSphere, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_checkPiecesInSphere, put=__cordl_internal_set_checkPiecesInSphere)) ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  checkPiecesInSphere;

/// @brief Field checkPiecesInSphereResults, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_checkPiecesInSphereResults, put=__cordl_internal_set_checkPiecesInSphereResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  checkPiecesInSphereResults;

/// @brief Field collisionDisabledPiecesLeft, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionDisabledPiecesLeft, put=__cordl_internal_set_collisionDisabledPiecesLeft)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  collisionDisabledPiecesLeft;

/// @brief Field collisionDisabledPiecesRight, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionDisabledPiecesRight, put=__cordl_internal_set_collisionDisabledPiecesRight)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  collisionDisabledPiecesRight;

/// @brief Field currentTable, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTable, put=__cordl_internal_set_currentTable)) ::UnityW<::GorillaTagScripts::BuilderTable>  currentTable;

/// @brief Field delayedPlacementTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_delayedPlacementTime, put=__cordl_internal_set_delayedPlacementTime)) ::System::Collections::Generic::List_1<float_t>*  delayedPlacementTime;

/// @brief Field delayedPotentialPlacement, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_delayedPotentialPlacement, put=__cordl_internal_set_delayedPotentialPlacement)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  delayedPotentialPlacement;

/// @brief Field emptyRaycastHit, offset 0x148, size 0x2c 
 __declspec(property(get=__cordl_internal_get_emptyRaycastHit, put=__cordl_internal_set_emptyRaycastHit)) ::UnityEngine::RaycastHit  emptyRaycastHit;

/// @brief Field equipmentInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_equipmentInteractor, put=__cordl_internal_set_equipmentInteractor)) ::UnityW<::GlobalNamespace::EquipmentInteractor>  equipmentInteractor;

/// @brief Field findNearbyJobHandle, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_findNearbyJobHandle, put=__cordl_internal_set_findNearbyJobHandle)) ::Unity::Jobs::JobHandle  findNearbyJobHandle;

/// @brief Field findPiecesToGrab, offset 0x138, size 0x10 
 __declspec(property(get=__cordl_internal_get_findPiecesToGrab, put=__cordl_internal_set_findPiecesToGrab)) ::Unity::Jobs::JobHandle  findPiecesToGrab;

/// @brief Field glowBumpPrefab, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_glowBumpPrefab, put=__cordl_internal_set_glowBumpPrefab)) ::UnityW<::GlobalNamespace::BuilderBumpGlow>  glowBumpPrefab;

/// @brief Field glowBumps, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_glowBumps, put=__cordl_internal_set_glowBumps)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*  glowBumps;

/// @brief Field grabSphereCast, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_grabSphereCast, put=__cordl_internal_set_grabSphereCast)) ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>  grabSphereCast;

/// @brief Field grabSphereCastResults, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_grabSphereCastResults, put=__cordl_internal_set_grabSphereCastResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  grabSphereCastResults;

/// @brief Field handGridPlaneData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handGridPlaneData, put=setStaticF_handGridPlaneData)) ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  handGridPlaneData;

/// @brief Field handPieceData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handPieceData, put=setStaticF_handPieceData)) ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  handPieceData;

/// @brief Field handState, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_handState, put=__cordl_internal_set_handState)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*  handState;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field heldChainCost, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldChainCost, put=__cordl_internal_set_heldChainCost)) ::System::Collections::Generic::List_1<::ArrayW<int32_t>>*  heldChainCost;

/// @brief Field heldChainLength, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldChainLength, put=__cordl_internal_set_heldChainLength)) ::ArrayW<int32_t>  heldChainLength;

/// @brief Field heldCurrentPos, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldCurrentPos, put=__cordl_internal_set_heldCurrentPos)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  heldCurrentPos;

/// @brief Field heldCurrentRot, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldCurrentRot, put=__cordl_internal_set_heldCurrentRot)) ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  heldCurrentRot;

/// @brief Field heldInitialPos, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldInitialPos, put=__cordl_internal_set_heldInitialPos)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  heldInitialPos;

/// @brief Field heldInitialRot, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldInitialRot, put=__cordl_internal_set_heldInitialRot)) ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  heldInitialRot;

/// @brief Field heldPiece, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldPiece, put=__cordl_internal_set_heldPiece)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  heldPiece;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  instance;

/// @brief Field isRigSmall, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRigSmall, put=__cordl_internal_set_isRigSmall)) bool  isRigSmall;

/// @brief Field laserSight, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserSight, put=__cordl_internal_set_laserSight)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*  laserSight;

/// @brief Field laserSightLeft, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserSightLeft, put=__cordl_internal_set_laserSightLeft)) ::UnityW<::GlobalNamespace::BuilderLaserSight>  laserSightLeft;

/// @brief Field laserSightRight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserSightRight, put=__cordl_internal_set_laserSightRight)) ::UnityW<::GlobalNamespace::BuilderLaserSight>  laserSightRight;

/// @brief Field localAttachableGridPlaneData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localAttachableGridPlaneData, put=setStaticF_localAttachableGridPlaneData)) ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  localAttachableGridPlaneData;

/// @brief Field localAttachablePieceData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localAttachablePieceData, put=setStaticF_localAttachablePieceData)) ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  localAttachablePieceData;

/// @brief Field maxHoldablePieceStackCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHoldablePieceStackCount, put=__cordl_internal_set_maxHoldablePieceStackCount)) int32_t  maxHoldablePieceStackCount;

/// @brief Field potentialGrabbedOffsetDist, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_potentialGrabbedOffsetDist, put=__cordl_internal_set_potentialGrabbedOffsetDist)) ::System::Collections::Generic::List_1<float_t>*  potentialGrabbedOffsetDist;

/// @brief Field potentialHeldPiece, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_potentialHeldPiece, put=__cordl_internal_set_potentialHeldPiece)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  potentialHeldPiece;

/// @brief Field prevPotentialPlacement, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevPotentialPlacement, put=__cordl_internal_set_prevPotentialPlacement)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  prevPotentialPlacement;

/// @brief Field tempDisableColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempDisableColliders, put=setStaticF_tempDisableColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  tempDisableColliders;

/// @brief Field tempHitResults, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempHitResults, put=setStaticF_tempHitResults)) ::ArrayW<::UnityEngine::RaycastHit>  tempHitResults;

/// @brief Field tempPieceSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPieceSet, put=setStaticF_tempPieceSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  tempPieceSet;

/// @brief Field velocityEstimator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  velocityEstimator;

/// @brief Field velocityEstimatorLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorLeft, put=__cordl_internal_set_velocityEstimatorLeft)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimatorLeft;

/// @brief Field velocityEstimatorRight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorRight, put=__cordl_internal_set_velocityEstimatorRight)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimatorRight;

/// @brief Method AddGlowBumps, addr 0x57cd6f8, size 0x820, virtual false, abstract: false, final false
inline void AddGlowBumps(int32_t  handIndex, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPotentialPlacements) ;

/// @brief Method AddPieceToHand, addr 0x57ce56c, size 0x190, virtual false, abstract: false, final false
inline void AddPieceToHand(::GlobalNamespace::BuilderPiece*  piece, int32_t  handIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method AddPieceToHeld, addr 0x57ce430, size 0x13c, virtual false, abstract: false, final false
inline void AddPieceToHeld(::GlobalNamespace::BuilderPiece*  piece, bool  isLeft, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method Awake, addr 0x57c7720, size 0x12cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BlockSnowballCreation, addr 0x57c9838, size 0x208, virtual false, abstract: false, final false
inline bool BlockSnowballCreation() ;

/// @brief Method CalcLocalGridPlanes, addr 0x57c8fa0, size 0x4e8, virtual false, abstract: false, final false
inline void CalcLocalGridPlanes() ;

/// @brief Method CalcPieceLocalPosAndRot, addr 0x57cd31c, size 0x184, virtual false, abstract: false, final false
inline void CalcPieceLocalPosAndRot(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Transform*  attachPoint, ::by_ref<::UnityEngine::Vector3>  localPosition, ::by_ref<::UnityEngine::Quaternion>  localRotation) ;

/// @brief Method ClearGlowBumps, addr 0x57cd4a0, size 0x258, virtual false, abstract: false, final false
inline void ClearGlowBumps(int32_t  handIndex) ;

/// @brief Method ClearUnSnapOffset, addr 0x57cdfe8, size 0x6c, virtual false, abstract: false, final false
inline void ClearUnSnapOffset(int32_t  handIndex, ::GlobalNamespace::BuilderPiece*  potentialGrabPiece) ;

/// @brief Method DisableCollisionsWithHand, addr 0x57ce8b0, size 0x3c8, virtual false, abstract: false, final false
inline void DisableCollisionsWithHand(bool  leftHand) ;

/// @brief Method DisableCollisionsWithHands, addr 0x57ce890, size 0x20, virtual false, abstract: false, final false
inline void DisableCollisionsWithHands() ;

/// @brief Method GetIsHolding, addr 0x57c89ec, size 0xac, virtual false, abstract: false, final false
inline bool GetIsHolding(::UnityEngine::XR::XRNode  node) ;

static inline ::GlobalNamespace::BuilderPieceInteractor* New_ctor() ;

/// @brief Method OnCountChangedForRoot, addr 0x57cd0ec, size 0x230, virtual false, abstract: false, final false
inline void OnCountChangedForRoot(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method OnDestroy, addr 0x57c9488, size 0x3b0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLateUpdate, addr 0x57c9a40, size 0x740, virtual false, abstract: false, final false
inline void OnLateUpdate() ;

/// @brief Method PreInteract, addr 0x57c8a98, size 0x4, virtual false, abstract: false, final false
inline void PreInteract() ;

/// @brief Method RemovePieceFromHand, addr 0x57ce054, size 0xa4, virtual false, abstract: false, final false
inline void RemovePieceFromHand(::GlobalNamespace::BuilderPiece*  piece, int32_t  handIndex) ;

/// @brief Method RemovePieceFromHeld, addr 0x57ce6fc, size 0xd0, virtual false, abstract: false, final false
inline void RemovePieceFromHeld(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePiecesFromHands, addr 0x57ce7cc, size 0xc4, virtual false, abstract: false, final false
inline void RemovePiecesFromHands() ;

/// @brief Method SetHandState, addr 0x57ccda0, size 0x34c, virtual false, abstract: false, final false
inline void SetHandState(int32_t  handIndex, ::GlobalNamespace::BuilderPieceInteractor_HandState  newState) ;

/// @brief Method StartFindNearbyPieces, addr 0x57c8a9c, size 0x504, virtual false, abstract: false, final false
inline void StartFindNearbyPieces() ;

/// @brief Method UpdateGlowBumps, addr 0x57cdf18, size 0xd0, virtual false, abstract: false, final false
inline void UpdateGlowBumps(int32_t  handIndex, float_t  intensity) ;

/// @brief Method UpdateHandState, addr 0x57ca180, size 0x2c00, virtual false, abstract: false, final false
inline void UpdateHandState(::GlobalNamespace::BuilderPieceInteractor_HandType  handType, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Vector3  palmForwardLocal, ::UnityEngine::Transform*  handAttachPoint, bool  isGrabbing, bool  wasGrabPressed, ::GlobalNamespace::IHoldableObject*  heldEquipment, bool  grabDisabled) ;

/// @brief Method UpdatePieceDisables, addr 0x57ccd80, size 0x20, virtual false, abstract: false, final false
inline void UpdatePieceDisables() ;

/// @brief Method UpdatePieceDisablesForHand, addr 0x57cec78, size 0x300, virtual false, abstract: false, final false
inline void UpdatePieceDisablesForHand(bool  leftHand) ;

/// @brief Method UpdatePullApartOffset, addr 0x57ce0f8, size 0x338, virtual false, abstract: false, final false
inline void UpdatePullApartOffset(int32_t  handIndex, ::GlobalNamespace::BuilderPiece*  potentialGrabPiece, ::UnityEngine::Vector3  pullApartDiff) ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_checkNearbyPiecesHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_checkNearbyPiecesHandle() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> const& __cordl_internal_get_checkPiecesInSphere() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>& __cordl_internal_get_checkPiecesInSphere() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> const& __cordl_internal_get_checkPiecesInSphereResults() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>& __cordl_internal_get_checkPiecesInSphereResults() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_collisionDisabledPiecesLeft() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_collisionDisabledPiecesLeft() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_collisionDisabledPiecesRight() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_collisionDisabledPiecesRight() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_currentTable() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_currentTable() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_delayedPlacementTime() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_delayedPlacementTime() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& __cordl_internal_get_delayedPotentialPlacement() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& __cordl_internal_get_delayedPotentialPlacement() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_emptyRaycastHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_emptyRaycastHit() ;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& __cordl_internal_get_equipmentInteractor() const;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& __cordl_internal_get_equipmentInteractor() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_findNearbyJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_findNearbyJobHandle() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_findPiecesToGrab() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_findPiecesToGrab() ;

constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow> const& __cordl_internal_get_glowBumpPrefab() const;

constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow>& __cordl_internal_get_glowBumpPrefab() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>* const& __cordl_internal_get_glowBumps() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*& __cordl_internal_get_glowBumps() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand> const& __cordl_internal_get_grabSphereCast() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>& __cordl_internal_get_grabSphereCast() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get_grabSphereCastResults() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get_grabSphereCastResults() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>* const& __cordl_internal_get_handState() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*& __cordl_internal_get_handState() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<int32_t>>* const& __cordl_internal_get_heldChainCost() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<int32_t>>*& __cordl_internal_get_heldChainCost() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_heldChainLength() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_heldChainLength() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_heldCurrentPos() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_heldCurrentPos() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& __cordl_internal_get_heldCurrentRot() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __cordl_internal_get_heldCurrentRot() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_heldInitialPos() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_heldInitialPos() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& __cordl_internal_get_heldInitialRot() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __cordl_internal_get_heldInitialRot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_heldPiece() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_heldPiece() ;

constexpr bool const& __cordl_internal_get_isRigSmall() const;

constexpr bool& __cordl_internal_get_isRigSmall() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>* const& __cordl_internal_get_laserSight() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*& __cordl_internal_get_laserSight() ;

constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight> const& __cordl_internal_get_laserSightLeft() const;

constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight>& __cordl_internal_get_laserSightLeft() ;

constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight> const& __cordl_internal_get_laserSightRight() const;

constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight>& __cordl_internal_get_laserSightRight() ;

constexpr int32_t const& __cordl_internal_get_maxHoldablePieceStackCount() const;

constexpr int32_t& __cordl_internal_get_maxHoldablePieceStackCount() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_potentialGrabbedOffsetDist() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_potentialGrabbedOffsetDist() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_potentialHeldPiece() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_potentialHeldPiece() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& __cordl_internal_get_prevPotentialPlacement() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& __cordl_internal_get_prevPotentialPlacement() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>* const& __cordl_internal_get_velocityEstimator() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*& __cordl_internal_get_velocityEstimator() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimatorLeft() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimatorLeft() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimatorRight() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimatorRight() ;

constexpr void __cordl_internal_set_checkNearbyPiecesHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_checkPiecesInSphere(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  value) ;

constexpr void __cordl_internal_set_checkPiecesInSphereResults(::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  value) ;

constexpr void __cordl_internal_set_collisionDisabledPiecesLeft(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_collisionDisabledPiecesRight(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_currentTable(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_delayedPlacementTime(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_delayedPotentialPlacement(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value) ;

constexpr void __cordl_internal_set_emptyRaycastHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_equipmentInteractor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value) ;

constexpr void __cordl_internal_set_findNearbyJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_findPiecesToGrab(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_glowBumpPrefab(::UnityW<::GlobalNamespace::BuilderBumpGlow>  value) ;

constexpr void __cordl_internal_set_glowBumps(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*  value) ;

constexpr void __cordl_internal_set_grabSphereCast(::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>  value) ;

constexpr void __cordl_internal_set_grabSphereCastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_handState(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*  value) ;

constexpr void __cordl_internal_set_heldChainCost(::System::Collections::Generic::List_1<::ArrayW<int32_t>>*  value) ;

constexpr void __cordl_internal_set_heldChainLength(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_heldCurrentPos(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_heldCurrentRot(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_heldInitialPos(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_heldInitialRot(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_heldPiece(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_isRigSmall(bool  value) ;

constexpr void __cordl_internal_set_laserSight(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*  value) ;

constexpr void __cordl_internal_set_laserSightLeft(::UnityW<::GlobalNamespace::BuilderLaserSight>  value) ;

constexpr void __cordl_internal_set_laserSightRight(::UnityW<::GlobalNamespace::BuilderLaserSight>  value) ;

constexpr void __cordl_internal_set_maxHoldablePieceStackCount(int32_t  value) ;

constexpr void __cordl_internal_set_potentialGrabbedOffsetDist(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_potentialHeldPiece(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_prevPotentialPlacement(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  value) ;

constexpr void __cordl_internal_set_velocityEstimatorLeft(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_velocityEstimatorRight(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x57cef78, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*> getStaticF_allPotentialPlacements() ;

static inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>> getStaticF_handGridPlaneData() ;

static inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>> getStaticF_handPieceData() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::BuilderPieceInteractor> getStaticF_instance() ;

static inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>> getStaticF_localAttachableGridPlaneData() ;

static inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>> getStaticF_localAttachablePieceData() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_tempDisableColliders() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_tempHitResults() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_tempPieceSet() ;

static inline void setStaticF_allPotentialPlacements(::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>  value) ;

static inline void setStaticF_handGridPlaneData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  value) ;

static inline void setStaticF_handPieceData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value) ;

static inline void setStaticF_localAttachableGridPlaneData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  value) ;

static inline void setStaticF_localAttachablePieceData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  value) ;

static inline void setStaticF_tempDisableColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

static inline void setStaticF_tempPieceSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceInteractor(BuilderPieceInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceInteractor(BuilderPieceInteractor const& ) = delete;

/// @brief Field GRAB_CAST_RADIUS offset 0xffffffff size 0x4
static constexpr float_t  GRAB_CAST_RADIUS{static_cast<float_t>(0.0375f)};

/// @brief Field MAX_GRAB_CAST_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_GRAB_CAST_RESULTS{static_cast<int32_t>(0x40)};

/// @brief Field MAX_GRID_PLANES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_GRID_PLANES{static_cast<int32_t>(0x2000)};

/// @brief Field MAX_SPHERE_CHECK_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SPHERE_CHECK_RESULTS{static_cast<int32_t>(0x400)};

/// @brief Field NUM_HANDS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_HANDS{static_cast<int32_t>(0x2)};

/// @brief Field PIECE_DISTANCE_DISABLE offset 0xffffffff size 0x4
static constexpr float_t  PIECE_DISTANCE_DISABLE{static_cast<float_t>(0.15f)};

/// @brief Field PIECE_DISTANCE_ENABLE offset 0xffffffff size 0x4
static constexpr float_t  PIECE_DISTANCE_ENABLE{static_cast<float_t>(0.2f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1609};

/// @brief Field equipmentInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EquipmentInteractor>  ___equipmentInteractor;

/// @brief Field velocityEstimatorLeft, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimatorLeft;

/// @brief Field velocityEstimatorRight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimatorRight;

/// @brief Field laserSightLeft, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderLaserSight>  ___laserSightLeft;

/// @brief Field laserSightRight, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderLaserSight>  ___laserSightRight;

/// @brief Field maxHoldablePieceStackCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___maxHoldablePieceStackCount;

/// @brief Field velocityEstimator, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  ___velocityEstimator;

/// @brief Field handState, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*  ___handState;

/// @brief Field heldPiece, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___heldPiece;

/// @brief Field potentialHeldPiece, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___potentialHeldPiece;

/// @brief Field potentialGrabbedOffsetDist, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___potentialGrabbedOffsetDist;

/// @brief Field heldInitialRot, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  ___heldInitialRot;

/// @brief Field heldCurrentRot, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  ___heldCurrentRot;

/// @brief Field heldInitialPos, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___heldInitialPos;

/// @brief Field heldCurrentPos, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___heldCurrentPos;

/// @brief Field delayedPotentialPlacement, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  ___delayedPotentialPlacement;

/// @brief Field delayedPlacementTime, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___delayedPlacementTime;

/// @brief Field prevPotentialPlacement, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  ___prevPotentialPlacement;

/// @brief Field laserSight, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*  ___laserSight;

/// @brief Field heldChainLength, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___heldChainLength;

/// @brief Field heldChainCost, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<int32_t>>*  ___heldChainCost;

/// @brief Field findNearbyJobHandle, offset: 0xc8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___findNearbyJobHandle;

/// @brief Field collisionDisabledPiecesLeft, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___collisionDisabledPiecesLeft;

/// @brief Field collisionDisabledPiecesRight, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___collisionDisabledPiecesRight;

/// @brief Field checkPiecesInSphere, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  ___checkPiecesInSphere;

/// @brief Field checkPiecesInSphereResults, offset: 0xf8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  ___checkPiecesInSphereResults;

/// @brief Field checkNearbyPiecesHandle, offset: 0x108, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___checkNearbyPiecesHandle;

/// @brief Field grabSphereCast, offset: 0x118, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>  ___grabSphereCast;

/// @brief Field grabSphereCastResults, offset: 0x128, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ___grabSphereCastResults;

/// @brief Field findPiecesToGrab, offset: 0x138, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___findPiecesToGrab;

/// @brief Field emptyRaycastHit, offset: 0x148, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___emptyRaycastHit;

/// @brief Field glowBumpPrefab, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderBumpGlow>  ___glowBumpPrefab;

/// @brief Field glowBumps, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*  ___glowBumps;

/// @brief Field isRigSmall, offset: 0x188, size: 0x1, def value: None
 bool  ___isRigSmall;

/// @brief Field currentTable, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___currentTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___equipmentInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___velocityEstimatorLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___velocityEstimatorRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___laserSightLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___laserSightRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___maxHoldablePieceStackCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___velocityEstimator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___handState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldPiece) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___potentialHeldPiece) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___potentialGrabbedOffsetDist) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldInitialRot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldCurrentRot) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldInitialPos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldCurrentPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___delayedPotentialPlacement) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___delayedPlacementTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___prevPotentialPlacement) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___laserSight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldChainLength) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___heldChainCost) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___findNearbyJobHandle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___collisionDisabledPiecesLeft) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___collisionDisabledPiecesRight) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___checkPiecesInSphere) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___checkPiecesInSphereResults) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___checkNearbyPiecesHandle) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___grabSphereCast) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___grabSphereCastResults) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___findPiecesToGrab) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___emptyRaycastHit) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___glowBumpPrefab) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___glowBumps) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___isRigSmall) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor, ___currentTable) == 0x190, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceInteractor) == 0x198, "Size mismatch!");

} // namespace end def GlobalNamespace
