#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_GrabType_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_InterpolateState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableObject)
namespace GlobalNamespace {
class AdvancedItemState;
}
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IPreDisable;
}
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class TransferrableItemSlotTransformOverride;
}
namespace GlobalNamespace {
struct TransferrableObject_GrabType;
}
namespace GlobalNamespace {
struct TransferrableObject_InterpolateState;
}
namespace GlobalNamespace {
struct TransferrableObject_ItemStates;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
struct TransferrableObject_SyncOptions;
}
namespace GlobalNamespace {
class TransferrableObject___c;
}
namespace GlobalNamespace {
class TransferrableObject___c__DisplayClass161_0;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class WorldShareableItem;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace Sirenix::OdinInspector {
class ISelfValidator;
}
namespace Sirenix::OdinInspector {
class SelfValidationResult;
}
namespace System {
class Action;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
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
class TransferrableObject;
}
namespace GlobalNamespace {
class TransferrableObject___c;
}
namespace GlobalNamespace {
class TransferrableObject___c__DisplayClass161_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObject*);
MARK_REF_T(::GlobalNamespace::TransferrableObject___c*);
MARK_REF_T(::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject*, "", "TransferrableObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject___c*, "", "TransferrableObject/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*, "", "TransferrableObject/<>c__DisplayClass161_0");
// Dependencies BodyDockPositions::DropPositions, GorillaTag.CosmeticSystem.ECosmeticSelectSide, HoldableObject, System.Nullable`1<T>, TransferrableObject::GrabType, TransferrableObject::InterpolateState, TransferrableObject::ItemStates, TransferrableObject::PositionState, TransferrableObject::SyncOptions, UnityEngine.Behaviour, UnityEngine.GameObject, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObject
class CORDL_TYPE TransferrableObject : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
using GrabType = ::GlobalNamespace::TransferrableObject_GrabType;

using InterpolateState = ::GlobalNamespace::TransferrableObject_InterpolateState;

using ItemStates = ::GlobalNamespace::TransferrableObject_ItemStates;

using PositionState = ::GlobalNamespace::TransferrableObject_PositionState;

using SyncOptions = ::GlobalNamespace::TransferrableObject_SyncOptions;

using __c = ::GlobalNamespace::TransferrableObject___c;

using __c__DisplayClass161_0 = ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0;

/// @brief Field ClearLocalPositionOnReset, offset 0x248, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClearLocalPositionOnReset, put=__cordl_internal_set_ClearLocalPositionOnReset)) bool  ClearLocalPositionOnReset;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

/// @brief Field InitialDockObject, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialDockObject, put=__cordl_internal_set_InitialDockObject)) ::UnityW<::UnityEngine::Transform>  InitialDockObject;

 __declspec(property(get=get_IsLocalOwnedWorldShareable)) bool  IsLocalOwnedWorldShareable;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field OnDockedLocal, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDockedLocal, put=__cordl_internal_set_OnDockedLocal)) ::UnityEngine::Events::UnityEvent*  OnDockedLocal;

/// @brief Field OnDockedShared, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDockedShared, put=__cordl_internal_set_OnDockedShared)) ::UnityEngine::Events::UnityEvent*  OnDockedShared;

/// @brief Field OnHeldLocal, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHeldLocal, put=__cordl_internal_set_OnHeldLocal)) ::UnityEngine::Events::UnityEvent*  OnHeldLocal;

/// @brief Field OnHeldShared, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHeldShared, put=__cordl_internal_set_OnHeldShared)) ::UnityEngine::Events::UnityEvent*  OnHeldShared;

/// @brief Field OnItemStateBoolBFalse, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBFalse, put=__cordl_internal_set_OnItemStateBoolBFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBFalse;

/// @brief Field OnItemStateBoolBTrue, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBTrue, put=__cordl_internal_set_OnItemStateBoolBTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBTrue;

/// @brief Field OnItemStateBoolCFalse, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCFalse, put=__cordl_internal_set_OnItemStateBoolCFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCFalse;

/// @brief Field OnItemStateBoolCTrue, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCTrue, put=__cordl_internal_set_OnItemStateBoolCTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCTrue;

/// @brief Field OnItemStateBoolDFalse, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDFalse, put=__cordl_internal_set_OnItemStateBoolDFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDFalse;

/// @brief Field OnItemStateBoolDTrue, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDTrue, put=__cordl_internal_set_OnItemStateBoolDTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDTrue;

/// @brief Field OnItemStateBoolFalse, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolFalse, put=__cordl_internal_set_OnItemStateBoolFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolFalse;

/// @brief Field OnItemStateBoolTrue, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolTrue, put=__cordl_internal_set_OnItemStateBoolTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolTrue;

/// @brief Field OnItemStateIntChanged, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateIntChanged, put=__cordl_internal_set_OnItemStateIntChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnItemStateIntChanged;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x30c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x308, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field _defaultAnchor, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultAnchor, put=__cordl_internal_set__defaultAnchor)) ::UnityW<::UnityEngine::Transform>  _defaultAnchor;

/// @brief Field _isDefaultAnchorSet, offset 0x318, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefaultAnchorSet, put=__cordl_internal_set__isDefaultAnchorSet)) bool  _isDefaultAnchorSet;

/// @brief Field <isMyOnlineRigValid>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMyOnlineRigValid_k__BackingField, put=__cordl_internal_set__isMyOnlineRigValid_k__BackingField)) bool  _isMyOnlineRigValid_k__BackingField;

/// @brief Field <isMyRigValid>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMyRigValid_k__BackingField, put=__cordl_internal_set__isMyRigValid_k__BackingField)) bool  _isMyRigValid_k__BackingField;

/// @brief Field <isRigidbodySet>k__BackingField, offset 0x220, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRigidbodySet_k__BackingField, put=__cordl_internal_set__isRigidbodySet_k__BackingField)) bool  _isRigidbodySet_k__BackingField;

/// @brief Field _myOnlineRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__myOnlineRig, put=__cordl_internal_set__myOnlineRig)) ::UnityW<::GlobalNamespace::VRRig>  _myOnlineRig;

/// @brief Field _myRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__myRig, put=__cordl_internal_set__myRig)) ::UnityW<::GlobalNamespace::VRRig>  _myRig;

/// @brief Field <shouldUseGravity>k__BackingField, offset 0x221, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldUseGravity_k__BackingField, put=__cordl_internal_set__shouldUseGravity_k__BackingField)) bool  _shouldUseGravity_k__BackingField;

/// @brief Field advancedGrabState, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_advancedGrabState, put=__cordl_internal_set_advancedGrabState)) ::GlobalNamespace::AdvancedItemState*  advancedGrabState;

/// @brief Field allowPlayerStealing, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowPlayerStealing, put=__cordl_internal_set_allowPlayerStealing)) bool  allowPlayerStealing;

/// @brief Field allowReparenting, offset 0x223, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowReparenting, put=__cordl_internal_set_allowReparenting)) bool  allowReparenting;

/// @brief Field allowWorldSharableInstance, offset 0x226, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowWorldSharableInstance, put=__cordl_internal_set_allowWorldSharableInstance)) bool  allowWorldSharableInstance;

/// @brief Field anchor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::Transform>  anchor;

/// @brief Field anchorOverrides, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOverrides, put=__cordl_internal_set_anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  anchorOverrides;

/// @brief Field audioSrc, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSrc, put=__cordl_internal_set_audioSrc)) ::UnityW<::UnityEngine::AudioSource>  audioSrc;

/// @brief Field behavioursEnabledOnlyWhileDocked, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavioursEnabledOnlyWhileDocked, put=__cordl_internal_set_behavioursEnabledOnlyWhileDocked)) ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  behavioursEnabledOnlyWhileDocked;

/// @brief Field behavioursEnabledOnlyWhileHeld, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavioursEnabledOnlyWhileHeld, put=__cordl_internal_set_behavioursEnabledOnlyWhileHeld)) ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  behavioursEnabledOnlyWhileHeld;

/// @brief Field boolADebugName, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolADebugName, put=__cordl_internal_set_boolADebugName)) ::StringW  boolADebugName;

/// @brief Field boolBDebugName, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolBDebugName, put=__cordl_internal_set_boolBDebugName)) ::StringW  boolBDebugName;

/// @brief Field boolCDebugName, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolCDebugName, put=__cordl_internal_set_boolCDebugName)) ::StringW  boolCDebugName;

/// @brief Field boolDDebugName, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolDDebugName, put=__cordl_internal_set_boolDDebugName)) ::StringW  boolDDebugName;

/// @brief Field canAutoGrabLeft, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAutoGrabLeft, put=__cordl_internal_set_canAutoGrabLeft)) bool  canAutoGrabLeft;

/// @brief Field canAutoGrabRight, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAutoGrabRight, put=__cordl_internal_set_canAutoGrabRight)) bool  canAutoGrabRight;

/// @brief Field canDrop, offset 0x222, size 0x1 
 __declspec(property(get=__cordl_internal_get_canDrop, put=__cordl_internal_set_canDrop)) bool  canDrop;

/// @brief Field currentState, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::TransferrableObject_PositionState  currentState;

/// @brief Field detatchOnGrab, offset 0x225, size 0x1 
 __declspec(property(get=__cordl_internal_get_detatchOnGrab, put=__cordl_internal_set_detatchOnGrab)) bool  detatchOnGrab;

/// @brief Field disableItem, offset 0x246, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableItem, put=__cordl_internal_set_disableItem)) bool  disableItem;

/// @brief Field disableStealing, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableStealing, put=__cordl_internal_set_disableStealing)) bool  disableStealing;

/// @brief Field dockPositions, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dockPositions, put=__cordl_internal_set_dockPositions)) ::GlobalNamespace::BodyDockPositions_DropPositions  dockPositions;

/// @brief Field enabledOnFrame, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_enabledOnFrame, put=__cordl_internal_set_enabledOnFrame)) int32_t  enabledOnFrame;

/// @brief Field flipOnXForLeftArm, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnXForLeftArm, put=__cordl_internal_set_flipOnXForLeftArm)) bool  flipOnXForLeftArm;

/// @brief Field flipOnXForLeftHand, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnXForLeftHand, put=__cordl_internal_set_flipOnXForLeftHand)) bool  flipOnXForLeftHand;

/// @brief Field flipOnYForLeftHand, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnYForLeftHand, put=__cordl_internal_set_flipOnYForLeftHand)) bool  flipOnYForLeftHand;

/// @brief Field gameObjectsActiveOnlyWhileDocked, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectsActiveOnlyWhileDocked, put=__cordl_internal_set_gameObjectsActiveOnlyWhileDocked)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjectsActiveOnlyWhileDocked;

/// @brief Field gameObjectsActiveOnlyWhileHeld, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectsActiveOnlyWhileHeld, put=__cordl_internal_set_gameObjectsActiveOnlyWhileHeld)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjectsActiveOnlyWhileHeld;

/// @brief Field grabAnchor, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabAnchor, put=__cordl_internal_set_grabAnchor)) ::UnityW<::UnityEngine::Transform>  grabAnchor;

/// @brief Field gripInteractor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gripInteractor, put=__cordl_internal_set_gripInteractor)) ::UnityW<::GlobalNamespace::InteractionPoint>  gripInteractor;

/// @brief Field handPoseLeft, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPoseLeft, put=__cordl_internal_set_handPoseLeft)) ::UnityW<::UnityEngine::Transform>  handPoseLeft;

/// @brief Field handPoseLeftReferencePoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_handPoseLeftReferencePoint, put=setStaticF_handPoseLeftReferencePoint)) ::UnityEngine::Vector3  handPoseLeftReferencePoint;

/// @brief Field handPoseLeftReferenceRotation, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_handPoseLeftReferenceRotation, put=setStaticF_handPoseLeftReferenceRotation)) ::UnityEngine::Quaternion  handPoseLeftReferenceRotation;

/// @brief Field handPoseRight, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPoseRight, put=__cordl_internal_set_handPoseRight)) ::UnityW<::UnityEngine::Transform>  handPoseRight;

/// @brief Field handPoseRightReferencePoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_handPoseRightReferencePoint, put=setStaticF_handPoseRightReferencePoint)) ::UnityEngine::Vector3  handPoseRightReferencePoint;

/// @brief Field handPoseRightReferenceRotation, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_handPoseRightReferenceRotation, put=setStaticF_handPoseRightReferenceRotation)) ::UnityEngine::Quaternion  handPoseRightReferenceRotation;

/// @brief Field hysterisis, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_hysterisis, put=__cordl_internal_set_hysterisis)) float_t  hysterisis;

/// @brief Field indexTrigger, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_indexTrigger, put=__cordl_internal_set_indexTrigger)) float_t  indexTrigger;

/// @brief Field initMatrix, offset 0x154, size 0x40 
 __declspec(property(get=__cordl_internal_get_initMatrix, put=__cordl_internal_set_initMatrix)) ::UnityEngine::Matrix4x4  initMatrix;

/// @brief Field initOffset, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get_initOffset, put=__cordl_internal_set_initOffset)) ::UnityEngine::Vector3  initOffset;

/// @brief Field initRotation, offset 0x144, size 0x10 
 __declspec(property(get=__cordl_internal_get_initRotation, put=__cordl_internal_set_initRotation)) ::UnityEngine::Quaternion  initRotation;

/// @brief Field initState, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_initState, put=__cordl_internal_set_initState)) ::GlobalNamespace::TransferrableObject_PositionState  initState;

/// @brief Field interactEventName, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactEventName, put=__cordl_internal_set_interactEventName)) ::StringW  interactEventName;

/// @brief Field interpDt, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpDt, put=__cordl_internal_set_interpDt)) float_t  interpDt;

/// @brief Field interpStartPos, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get_interpStartPos, put=__cordl_internal_set_interpStartPos)) ::UnityEngine::Vector3  interpStartPos;

/// @brief Field interpStartRot, offset 0x124, size 0x10 
 __declspec(property(get=__cordl_internal_get_interpStartRot, put=__cordl_internal_set_interpStartRot)) ::UnityEngine::Quaternion  interpStartRot;

/// @brief Field interpState, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpState, put=__cordl_internal_set_interpState)) ::GlobalNamespace::TransferrableObject_InterpolateState  interpState;

/// @brief Field interpTime, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpTime, put=__cordl_internal_set_interpTime)) float_t  interpTime;

/// @brief Field isGrabAnchorSet, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabAnchorSet, put=__cordl_internal_set_isGrabAnchorSet)) bool  isGrabAnchorSet;

/// @brief Field isHover, offset 0x245, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHover, put=__cordl_internal_set_isHover)) bool  isHover;

 __declspec(property(get=get_isMyOnlineRigValid, put=set_isMyOnlineRigValid)) bool  isMyOnlineRigValid;

 __declspec(property(get=get_isMyRigValid, put=set_isMyRigValid)) bool  isMyRigValid;

 __declspec(property(get=get_isRigidbodySet, put=set_isRigidbodySet)) bool  isRigidbodySet;

/// @brief Field isSceneObject, offset 0x215, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSceneObject, put=__cordl_internal_set_isSceneObject)) bool  isSceneObject;

/// @brief Field itemState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemState, put=__cordl_internal_set_itemState)) ::GlobalNamespace::TransferrableObject_ItemStates  itemState;

/// @brief Field latched, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_latched, put=__cordl_internal_set_latched)) bool  latched;

/// @brief Field leftHandMatrix, offset 0x194, size 0x40 
 __declspec(property(get=__cordl_internal_get_leftHandMatrix, put=__cordl_internal_set_leftHandMatrix)) ::UnityEngine::Matrix4x4  leftHandMatrix;

/// @brief Field loaded, offset 0x247, size 0x1 
 __declspec(property(get=__cordl_internal_get_loaded, put=__cordl_internal_set_loaded)) bool  loaded;

/// @brief Field maxDistanceFromOriginBeforeRespawn, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromOriginBeforeRespawn, put=__cordl_internal_set_maxDistanceFromOriginBeforeRespawn)) float_t  maxDistanceFromOriginBeforeRespawn;

/// @brief Field maxDistanceFromTargetPlayerBeforeRespawn, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromTargetPlayerBeforeRespawn, put=__cordl_internal_set_maxDistanceFromTargetPlayerBeforeRespawn)) float_t  maxDistanceFromTargetPlayerBeforeRespawn;

/// @brief Field myIndex, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_myIndex, put=__cordl_internal_set_myIndex)) int32_t  myIndex;

 __declspec(property(get=get_myOnlineRig, put=set_myOnlineRig)) ::UnityW<::GlobalNamespace::VRRig>  myOnlineRig;

 __declspec(property(get=get_myRig, put=set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field myThreshold, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_myThreshold, put=__cordl_internal_set_myThreshold)) float_t  myThreshold;

/// @brief Field networkedStateEvents, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkedStateEvents, put=__cordl_internal_set_networkedStateEvents)) ::GlobalNamespace::TransferrableObject_SyncOptions  networkedStateEvents;

/// @brief Field objectIndex, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectIndex, put=__cordl_internal_set_objectIndex)) int32_t  objectIndex;

/// @brief Field originPoint, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_originPoint, put=__cordl_internal_set_originPoint)) ::UnityW<::UnityEngine::Transform>  originPoint;

/// @brief Field ownerRig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field positionInitialized, offset 0x214, size 0x1 
 __declspec(property(get=__cordl_internal_get_positionInitialized, put=__cordl_internal_set_positionInitialized)) bool  positionInitialized;

/// @brief Field previousItemState, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousItemState, put=__cordl_internal_set_previousItemState)) ::GlobalNamespace::TransferrableObject_ItemStates  previousItemState;

/// @brief Field previousState, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) ::GlobalNamespace::TransferrableObject_PositionState  previousState;

/// @brief Field resetOnDocked, offset 0x250, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetOnDocked, put=__cordl_internal_set_resetOnDocked)) bool  resetOnDocked;

/// @brief Field resetPositionAudioClip, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetPositionAudioClip, put=__cordl_internal_set_resetPositionAudioClip)) ::UnityW<::UnityEngine::AudioClip>  resetPositionAudioClip;

/// @brief Field rightHandMatrix, offset 0x1d4, size 0x40 
 __declspec(property(get=__cordl_internal_get_rightHandMatrix, put=__cordl_internal_set_rightHandMatrix)) ::UnityEngine::Matrix4x4  rightHandMatrix;

/// @brief Field rigidbodyInstance, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbodyInstance, put=__cordl_internal_set_rigidbodyInstance)) ::UnityW<::UnityEngine::Rigidbody>  rigidbodyInstance;

/// @brief Field shareable, offset 0x224, size 0x1 
 __declspec(property(get=__cordl_internal_get_shareable, put=__cordl_internal_set_shareable)) bool  shareable;

 __declspec(property(get=get_shouldUseGravity, put=set_shouldUseGravity)) bool  shouldUseGravity;

/// @brief Field startInterpolation, offset 0x2f4, size 0x1 
 __declspec(property(get=__cordl_internal_get_startInterpolation, put=__cordl_internal_set_startInterpolation)) bool  startInterpolation;

/// @brief Field storedZone, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_storedZone, put=__cordl_internal_set_storedZone)) ::GlobalNamespace::BodyDockPositions_DropPositions  storedZone;

/// @brief Field targetDockPositions, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetDockPositions, put=__cordl_internal_set_targetDockPositions)) ::UnityW<::GlobalNamespace::BodyDockPositions>  targetDockPositions;

/// @brief Field targetRig, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field targetRigSet, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetRigSet, put=__cordl_internal_set_targetRigSet)) bool  targetRigSet;

/// @brief Field testActivate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_testActivate, put=__cordl_internal_set_testActivate)) bool  testActivate;

/// @brief Field testDeactivate, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_testDeactivate, put=__cordl_internal_set_testDeactivate)) bool  testDeactivate;

/// @brief Field transferrableItemSlotTransformOverride, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableItemSlotTransformOverride, put=__cordl_internal_set_transferrableItemSlotTransformOverride)) ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  transferrableItemSlotTransformOverride;

/// @brief Field transferrableItemSlotTransformOverrideApplicable, offset 0x330, size 0x1 
 __declspec(property(get=__cordl_internal_get_transferrableItemSlotTransformOverrideApplicable, put=__cordl_internal_set_transferrableItemSlotTransformOverrideApplicable)) bool  transferrableItemSlotTransformOverrideApplicable;

/// @brief Field transferrableItemSlotTransformOverrideCachedMatrix, offset 0x320, size 0x10 
 __declspec(property(get=__cordl_internal_get_transferrableItemSlotTransformOverrideCachedMatrix, put=__cordl_internal_set_transferrableItemSlotTransformOverrideCachedMatrix)) ::System::Nullable_1<::UnityEngine::Matrix4x4>  transferrableItemSlotTransformOverrideCachedMatrix;

/// @brief Field useGrabType, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_useGrabType, put=__cordl_internal_set_useGrabType)) ::GlobalNamespace::TransferrableObject_GrabType  useGrabType;

/// @brief Field wasHeldLocal, offset 0x2e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeldLocal, put=__cordl_internal_set_wasHeldLocal)) bool  wasHeldLocal;

/// @brief Field wasHeldShared, offset 0x2e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeldShared, put=__cordl_internal_set_wasHeldShared)) bool  wasHeldShared;

/// @brief Field wasHover, offset 0x244, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHover, put=__cordl_internal_set_wasHover)) bool  wasHover;

/// @brief Field worldShareableInstance, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldShareableInstance, put=__cordl_internal_set_worldShareableInstance)) ::UnityW<::GlobalNamespace::WorldShareableItem>  worldShareableInstance;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPreDisable"
constexpr operator  ::GlobalNamespace::IPreDisable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Convert operator to "::Sirenix::OdinInspector::ISelfValidator"
constexpr operator  ::Sirenix::OdinInspector::ISelfValidator*() noexcept;

/// @brief Method ActivateItemFX, addr 0x5771a6c, size 0x2b4, virtual false, abstract: false, final false
inline void ActivateItemFX(float_t  hapticStrength, float_t  hapticDuration, int32_t  soundIndex, float_t  soundVolume) ;

/// @brief Method Attached, addr 0x576e330, size 0x34, virtual false, abstract: false, final false
inline bool Attached() ;

/// @brief Method AutoGrabTrue, addr 0x5771d24, size 0x14, virtual true, abstract: false, final false
inline bool AutoGrabTrue(bool  leftGrabbingHand) ;

/// @brief Method Awake, addr 0x57616c8, size 0x28, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x57727b0, size 0x30c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CanActivate, addr 0x5771d38, size 0x8, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x5771d40, size 0x8, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method CleanupDisable, addr 0x576d994, size 0x164, virtual false, abstract: false, final false
inline void CleanupDisable() ;

/// @brief Method DefaultAnchor, addr 0x576e27c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> DefaultAnchor() ;

/// @brief Method DropItem, addr 0x5762648, size 0x408, virtual true, abstract: false, final false
inline void DropItem() ;

/// @brief Method DropItemCleanup, addr 0x5771834, size 0x60, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method Dropped, addr 0x576e364, size 0x10, virtual false, abstract: false, final false
inline bool Dropped() ;

/// @brief Method FixTransformOverride, addr 0x576b55c, size 0x58, virtual false, abstract: false, final false
inline void FixTransformOverride() ;

/// @brief Method GetAnchor, addr 0x576d058, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos) ;

/// @brief Method GetDefaultTransformationMatrix, addr 0x576db24, size 0x34, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetDefaultTransformationMatrix() ;

/// @brief Method GetTargetDock, addr 0x576e4e0, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetTargetDock(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::BodyDockPositions*  dockPositions, ::GlobalNamespace::VRRigAnchorOverrides*  anchorOverrides) ;

/// @brief Method GetTargetDock, addr 0x576e444, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetTargetDock(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method GetTargetStorageZone, addr 0x576e374, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTargetStorageZone(::GlobalNamespace::BodyDockPositions_DropPositions  state) ;

/// @brief Method HandleLocalInput, addr 0x576ffac, size 0x52c, virtual false, abstract: false, final false
inline void HandleLocalInput() ;

/// @brief Method InHand, addr 0x576e31c, size 0x14, virtual false, abstract: false, final false
inline bool InHand() ;

/// @brief Method InLeftHand, addr 0x5771f8c, size 0x10, virtual false, abstract: false, final false
inline bool InLeftHand() ;

/// @brief Method InRightHand, addr 0x5771f9c, size 0x10, virtual false, abstract: false, final false
inline bool InRightHand() ;

/// @brief Method IsGrabbable, addr 0x5771f34, size 0x58, virtual true, abstract: false, final false
inline bool IsGrabbable() ;

/// @brief Method IsHeld, addr 0x5771e8c, size 0xa8, virtual true, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsLocalObject, addr 0x576d038, size 0x20, virtual false, abstract: false, final false
inline bool IsLocalObject() ;

/// @brief Method IsMyItem, addr 0x5771d5c, size 0x130, virtual true, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method LateUpdateLocal, addr 0x5762abc, size 0x1a4, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5770ba4, size 0x3a0, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateReplicatedSceneObject, addr 0x5770adc, size 0xc8, virtual false, abstract: false, final false
inline void LateUpdateReplicatedSceneObject() ;

/// @brief Method LateUpdateShared, addr 0x5762cb0, size 0x420, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

/// @brief Method LocalMyObjectValidation, addr 0x57704d8, size 0x4, virtual true, abstract: false, final false
inline void LocalMyObjectValidation() ;

/// @brief Method LocalPersistanceValidation, addr 0x57704dc, size 0x308, virtual true, abstract: false, final false
inline void LocalPersistanceValidation() ;

static inline ::GlobalNamespace::TransferrableObject* New_ctor() ;

/// @brief Method ObjectBeingTaken, addr 0x57707e4, size 0x2f8, virtual false, abstract: false, final false
inline void ObjectBeingTaken() ;

/// @brief Method OnActivate, addr 0x5771d48, size 0xc, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnChest, addr 0x5771fac, size 0x10, virtual false, abstract: false, final false
inline bool OnChest() ;

/// @brief Method OnDeactivate, addr 0x5771d54, size 0x8, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDespawn, addr 0x576c038, size 0x2c8, virtual true, abstract: false, final false
inline void OnDespawn() ;

/// @brief Method OnDestroy, addr 0x576d940, size 0x54, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x576d2a0, size 0x5a0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x576c304, size 0x2c4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnable_AfterAllCosmeticsSpawnedOrIsSceneObject, addr 0x576c5c8, size 0x91c, virtual true, abstract: false, final false
inline void OnEnable_AfterAllCosmeticsSpawnedOrIsSceneObject() ;

/// @brief Method OnGrab, addr 0x57630d4, size 0x764, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHandMatrixUpdate, addr 0x57714b0, size 0x4, virtual true, abstract: false, final false
inline void OnHandMatrixUpdate(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, bool  leftHand) ;

/// @brief Method OnHover, addr 0x5771894, size 0x1d8, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnItemDestroyedOrDisabled, addr 0x576e120, size 0x15c, virtual true, abstract: false, final false
inline void OnItemDestroyedOrDisabled() ;

/// @brief Method OnJoinedRoom, addr 0x576dd40, size 0x168, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x576dea8, size 0x244, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x57723e8, size 0x208, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x5772730, size 0x80, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x57725f0, size 0x140, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnNetworkItemStateChanged, addr 0x5770ff8, size 0x16c, virtual false, abstract: false, final false
inline void OnNetworkItemStateChanged(int32_t  stateBits) ;

/// @brief Method OnOwnershipRequest, addr 0x57721d0, size 0x218, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x57639ec, size 0x360, virtual true, abstract: false, final false
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnRelease, addr 0x57714b4, size 0x380, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnShoulder, addr 0x5771fbc, size 0x18, virtual false, abstract: false, final false
inline bool OnShoulder() ;

/// @brief Method OnSpawn, addr 0x57617f0, size 0x74c, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnStateChanged, addr 0x576f5d4, size 0x60, virtual true, abstract: false, final false
inline void OnStateChanged() ;

/// @brief Method OnWorldShareableItemSpawn, addr 0x576e118, size 0x4, virtual true, abstract: false, final false
inline void OnWorldShareableItemSpawn() ;

/// @brief Method OwningPlayer, addr 0x5771fd4, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* OwningPlayer() ;

/// @brief Method PlayDestroyedOrDisabledEffect, addr 0x576e11c, size 0x4, virtual true, abstract: false, final false
inline void PlayDestroyedOrDisabledEffect() ;

/// @brief Method PlayNote, addr 0x5771d20, size 0x4, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  volume) ;

/// @brief Method PreDisable, addr 0x576daf8, size 0x2c, virtual true, abstract: false, final false
inline void PreDisable() ;

/// @brief Method ReDock, addr 0x576fee0, size 0xcc, virtual false, abstract: false, final false
inline void ReDock() ;

/// @brief Method ResetStateBools, addr 0x576f634, size 0x2c, virtual false, abstract: false, final false
inline void ResetStateBools() ;

/// @brief Method ResetToDefaultState, addr 0x5771164, size 0x1dc, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method ResetToHome, addr 0x576f6ac, size 0x74, virtual true, abstract: false, final false
inline void ResetToHome() ;

/// @brief Method ResetXf, addr 0x576f720, size 0x7c0, virtual false, abstract: false, final false
inline void ResetXf() ;

/// @brief Method SetInitMatrix, addr 0x576bacc, size 0x56c, virtual false, abstract: false, final false
inline void SetInitMatrix() ;

/// @brief Method SetItemStateBool, addr 0x5772160, size 0x1c, virtual false, abstract: false, final false
inline void SetItemStateBool(bool  newState) ;

/// @brief Method SetItemStateBoolB, addr 0x577217c, size 0x1c, virtual false, abstract: false, final false
inline void SetItemStateBoolB(bool  newState) ;

/// @brief Method SetItemStateBoolC, addr 0x5772198, size 0x1c, virtual false, abstract: false, final false
inline void SetItemStateBoolC(bool  newState) ;

/// @brief Method SetItemStateBoolD, addr 0x57721b4, size 0x1c, virtual false, abstract: false, final false
inline void SetItemStateBoolD(bool  newState) ;

/// @brief Method SetItemStateInt, addr 0x576f660, size 0x4c, virtual false, abstract: false, final false
inline void SetItemStateInt(int32_t  newState) ;

/// @brief Method SetStateBit, addr 0x5772128, size 0x38, virtual false, abstract: false, final false
inline void SetStateBit(bool  value, int32_t  bitmask) ;

/// @brief Method SetTargetRig, addr 0x576b614, size 0x28c, virtual false, abstract: false, final false
inline void SetTargetRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method SetWorldShareableItem, addr 0x576e0ec, size 0x2c, virtual false, abstract: false, final false
inline void SetWorldShareableItem(::GlobalNamespace::WorldShareableItem*  item) ;

/// @brief Method SetupHandMatrix, addr 0x5771340, size 0x170, virtual false, abstract: false, final false
inline void SetupHandMatrix(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Quaternion  leftHandRot, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Quaternion  rightHandRot) ;

/// @brief Method SetupMatrixForFreeGrab, addr 0x576f43c, size 0x198, virtual false, abstract: false, final false
inline void SetupMatrixForFreeGrab(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Transform*  attachPoint, bool  leftHand) ;

/// @brief Method ShouldBeKinematic, addr 0x5763874, size 0x3c, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method SpawnShareableObject, addr 0x576db58, size 0x1e0, virtual false, abstract: false, final false
inline void SpawnShareableObject() ;

/// @brief Method SpawnTransferableObjectViews, addr 0x576d0e8, size 0x1b8, virtual false, abstract: false, final false
inline void SpawnTransferableObjectViews() ;

/// @brief Method Start, addr 0x576c300, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleNetworkedItemStateBool, addr 0x5772098, size 0x18, virtual false, abstract: false, final false
inline void ToggleNetworkedItemStateBool() ;

/// @brief Method ToggleNetworkedItemStateBoolB, addr 0x57720e0, size 0x18, virtual false, abstract: false, final false
inline void ToggleNetworkedItemStateBoolB() ;

/// @brief Method ToggleNetworkedItemStateBoolC, addr 0x57720f8, size 0x18, virtual false, abstract: false, final false
inline void ToggleNetworkedItemStateBoolC() ;

/// @brief Method ToggleNetworkedItemStateBoolD, addr 0x5772110, size 0x18, virtual false, abstract: false, final false
inline void ToggleNetworkedItemStateBoolD() ;

/// @brief Method ToggleStateBit, addr 0x57720b0, size 0x30, virtual false, abstract: false, final false
inline void ToggleStateBit(int32_t  bitmask) ;

/// @brief Method TriggeredLateUpdate, addr 0x5765e54, size 0x90, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

/// @brief Method UpdateFollowXform, addr 0x576e634, size 0xe08, virtual false, abstract: false, final false
inline void UpdateFollowXform() ;

/// @brief Method Validate, addr 0x576b5b4, size 0x4, virtual true, abstract: false, final true
inline void Validate(::Sirenix::OdinInspector::SelfValidationResult*  result) ;

/// @brief Method ValidateState, addr 0x5770f44, size 0xb4, virtual false, abstract: false, final false
inline bool ValidateState(::GlobalNamespace::TransferrableObject_PositionState  state) ;

/// @brief Method WorldShareableRequestOwnership, addr 0x576b92c, size 0x160, virtual false, abstract: false, final false
inline void WorldShareableRequestOwnership() ;

constexpr bool const& __cordl_internal_get_ClearLocalPositionOnReset() const;

constexpr bool& __cordl_internal_get_ClearLocalPositionOnReset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_InitialDockObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_InitialDockObject() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDockedLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDockedLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDockedShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDockedShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHeldLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHeldLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHeldShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHeldShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolBFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolBFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolBTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolBTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolCFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolCFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolCTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolCTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolDFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolDFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolDTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolDTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolTrue() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_OnItemStateIntChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_OnItemStateIntChanged() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__defaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__defaultAnchor() ;

constexpr bool const& __cordl_internal_get__isDefaultAnchorSet() const;

constexpr bool& __cordl_internal_get__isDefaultAnchorSet() ;

constexpr bool const& __cordl_internal_get__isMyOnlineRigValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__isMyOnlineRigValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isMyRigValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__isMyRigValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isRigidbodySet_k__BackingField() const;

constexpr bool& __cordl_internal_get__isRigidbodySet_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__myOnlineRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__myOnlineRig() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__myRig() ;

constexpr bool const& __cordl_internal_get__shouldUseGravity_k__BackingField() const;

constexpr bool& __cordl_internal_get__shouldUseGravity_k__BackingField() ;

constexpr ::GlobalNamespace::AdvancedItemState* const& __cordl_internal_get_advancedGrabState() const;

constexpr ::GlobalNamespace::AdvancedItemState*& __cordl_internal_get_advancedGrabState() ;

constexpr bool const& __cordl_internal_get_allowPlayerStealing() const;

constexpr bool& __cordl_internal_get_allowPlayerStealing() ;

constexpr bool const& __cordl_internal_get_allowReparenting() const;

constexpr bool& __cordl_internal_get_allowReparenting() ;

constexpr bool const& __cordl_internal_get_allowWorldSharableInstance() const;

constexpr bool& __cordl_internal_get_allowWorldSharableInstance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchor() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get_anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get_anchorOverrides() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSrc() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& __cordl_internal_get_behavioursEnabledOnlyWhileDocked() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& __cordl_internal_get_behavioursEnabledOnlyWhileDocked() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& __cordl_internal_get_behavioursEnabledOnlyWhileHeld() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& __cordl_internal_get_behavioursEnabledOnlyWhileHeld() ;

constexpr ::StringW const& __cordl_internal_get_boolADebugName() const;

constexpr ::StringW& __cordl_internal_get_boolADebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolBDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolBDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolCDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolCDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolDDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolDDebugName() ;

constexpr bool const& __cordl_internal_get_canAutoGrabLeft() const;

constexpr bool& __cordl_internal_get_canAutoGrabLeft() ;

constexpr bool const& __cordl_internal_get_canAutoGrabRight() const;

constexpr bool& __cordl_internal_get_canAutoGrabRight() ;

constexpr bool const& __cordl_internal_get_canDrop() const;

constexpr bool& __cordl_internal_get_canDrop() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_detatchOnGrab() const;

constexpr bool& __cordl_internal_get_detatchOnGrab() ;

constexpr bool const& __cordl_internal_get_disableItem() const;

constexpr bool& __cordl_internal_get_disableItem() ;

constexpr bool const& __cordl_internal_get_disableStealing() const;

constexpr bool& __cordl_internal_get_disableStealing() ;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& __cordl_internal_get_dockPositions() const;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& __cordl_internal_get_dockPositions() ;

constexpr int32_t const& __cordl_internal_get_enabledOnFrame() const;

constexpr int32_t& __cordl_internal_get_enabledOnFrame() ;

constexpr bool const& __cordl_internal_get_flipOnXForLeftArm() const;

constexpr bool& __cordl_internal_get_flipOnXForLeftArm() ;

constexpr bool const& __cordl_internal_get_flipOnXForLeftHand() const;

constexpr bool& __cordl_internal_get_flipOnXForLeftHand() ;

constexpr bool const& __cordl_internal_get_flipOnYForLeftHand() const;

constexpr bool& __cordl_internal_get_flipOnYForLeftHand() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjectsActiveOnlyWhileDocked() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjectsActiveOnlyWhileDocked() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjectsActiveOnlyWhileHeld() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjectsActiveOnlyWhileHeld() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabAnchor() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_gripInteractor() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_gripInteractor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handPoseLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handPoseLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handPoseRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handPoseRight() ;

constexpr float_t const& __cordl_internal_get_hysterisis() const;

constexpr float_t& __cordl_internal_get_hysterisis() ;

constexpr float_t const& __cordl_internal_get_indexTrigger() const;

constexpr float_t& __cordl_internal_get_indexTrigger() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_initMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_initMatrix() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initRotation() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_initState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_initState() ;

constexpr ::StringW const& __cordl_internal_get_interactEventName() const;

constexpr ::StringW& __cordl_internal_get_interactEventName() ;

constexpr float_t const& __cordl_internal_get_interpDt() const;

constexpr float_t& __cordl_internal_get_interpDt() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_interpStartPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_interpStartPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_interpStartRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_interpStartRot() ;

constexpr ::GlobalNamespace::TransferrableObject_InterpolateState const& __cordl_internal_get_interpState() const;

constexpr ::GlobalNamespace::TransferrableObject_InterpolateState& __cordl_internal_get_interpState() ;

constexpr float_t const& __cordl_internal_get_interpTime() const;

constexpr float_t& __cordl_internal_get_interpTime() ;

constexpr bool const& __cordl_internal_get_isGrabAnchorSet() const;

constexpr bool& __cordl_internal_get_isGrabAnchorSet() ;

constexpr bool const& __cordl_internal_get_isHover() const;

constexpr bool& __cordl_internal_get_isHover() ;

constexpr bool const& __cordl_internal_get_isSceneObject() const;

constexpr bool& __cordl_internal_get_isSceneObject() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_itemState() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_itemState() ;

constexpr bool const& __cordl_internal_get_latched() const;

constexpr bool& __cordl_internal_get_latched() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_leftHandMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_leftHandMatrix() ;

constexpr bool const& __cordl_internal_get_loaded() const;

constexpr bool& __cordl_internal_get_loaded() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromOriginBeforeRespawn() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromOriginBeforeRespawn() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromTargetPlayerBeforeRespawn() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromTargetPlayerBeforeRespawn() ;

constexpr int32_t const& __cordl_internal_get_myIndex() const;

constexpr int32_t& __cordl_internal_get_myIndex() ;

constexpr float_t const& __cordl_internal_get_myThreshold() const;

constexpr float_t& __cordl_internal_get_myThreshold() ;

constexpr ::GlobalNamespace::TransferrableObject_SyncOptions const& __cordl_internal_get_networkedStateEvents() const;

constexpr ::GlobalNamespace::TransferrableObject_SyncOptions& __cordl_internal_get_networkedStateEvents() ;

constexpr int32_t const& __cordl_internal_get_objectIndex() const;

constexpr int32_t& __cordl_internal_get_objectIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_originPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_originPoint() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr bool const& __cordl_internal_get_positionInitialized() const;

constexpr bool& __cordl_internal_get_positionInitialized() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_previousItemState() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_previousItemState() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_previousState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_previousState() ;

constexpr bool const& __cordl_internal_get_resetOnDocked() const;

constexpr bool& __cordl_internal_get_resetOnDocked() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_resetPositionAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_resetPositionAudioClip() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_rightHandMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_rightHandMatrix() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbodyInstance() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbodyInstance() ;

constexpr bool const& __cordl_internal_get_shareable() const;

constexpr bool& __cordl_internal_get_shareable() ;

constexpr bool const& __cordl_internal_get_startInterpolation() const;

constexpr bool& __cordl_internal_get_startInterpolation() ;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& __cordl_internal_get_storedZone() const;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& __cordl_internal_get_storedZone() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get_targetDockPositions() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get_targetDockPositions() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr bool const& __cordl_internal_get_targetRigSet() const;

constexpr bool& __cordl_internal_get_targetRigSet() ;

constexpr bool const& __cordl_internal_get_testActivate() const;

constexpr bool& __cordl_internal_get_testActivate() ;

constexpr bool const& __cordl_internal_get_testDeactivate() const;

constexpr bool& __cordl_internal_get_testDeactivate() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride> const& __cordl_internal_get_transferrableItemSlotTransformOverride() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>& __cordl_internal_get_transferrableItemSlotTransformOverride() ;

constexpr bool const& __cordl_internal_get_transferrableItemSlotTransformOverrideApplicable() const;

constexpr bool& __cordl_internal_get_transferrableItemSlotTransformOverrideApplicable() ;

constexpr ::System::Nullable_1<::UnityEngine::Matrix4x4> const& __cordl_internal_get_transferrableItemSlotTransformOverrideCachedMatrix() const;

constexpr ::System::Nullable_1<::UnityEngine::Matrix4x4>& __cordl_internal_get_transferrableItemSlotTransformOverrideCachedMatrix() ;

constexpr ::GlobalNamespace::TransferrableObject_GrabType const& __cordl_internal_get_useGrabType() const;

constexpr ::GlobalNamespace::TransferrableObject_GrabType& __cordl_internal_get_useGrabType() ;

constexpr bool const& __cordl_internal_get_wasHeldLocal() const;

constexpr bool& __cordl_internal_get_wasHeldLocal() ;

constexpr bool const& __cordl_internal_get_wasHeldShared() const;

constexpr bool& __cordl_internal_get_wasHeldShared() ;

constexpr bool const& __cordl_internal_get_wasHover() const;

constexpr bool& __cordl_internal_get_wasHover() ;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& __cordl_internal_get_worldShareableInstance() const;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& __cordl_internal_get_worldShareableInstance() ;

constexpr void __cordl_internal_set_ClearLocalPositionOnReset(bool  value) ;

constexpr void __cordl_internal_set_InitialDockObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_OnDockedLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnDockedShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnHeldLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnHeldShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolBFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolBTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolCFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolCTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolDFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolDTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateIntChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__defaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isDefaultAnchorSet(bool  value) ;

constexpr void __cordl_internal_set__isMyOnlineRigValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isMyRigValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isRigidbodySet_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__myOnlineRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__shouldUseGravity_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_advancedGrabState(::GlobalNamespace::AdvancedItemState*  value) ;

constexpr void __cordl_internal_set_allowPlayerStealing(bool  value) ;

constexpr void __cordl_internal_set_allowReparenting(bool  value) ;

constexpr void __cordl_internal_set_allowWorldSharableInstance(bool  value) ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

constexpr void __cordl_internal_set_audioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_behavioursEnabledOnlyWhileDocked(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value) ;

constexpr void __cordl_internal_set_behavioursEnabledOnlyWhileHeld(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value) ;

constexpr void __cordl_internal_set_boolADebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolBDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolCDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolDDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_canAutoGrabLeft(bool  value) ;

constexpr void __cordl_internal_set_canAutoGrabRight(bool  value) ;

constexpr void __cordl_internal_set_canDrop(bool  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_detatchOnGrab(bool  value) ;

constexpr void __cordl_internal_set_disableItem(bool  value) ;

constexpr void __cordl_internal_set_disableStealing(bool  value) ;

constexpr void __cordl_internal_set_dockPositions(::GlobalNamespace::BodyDockPositions_DropPositions  value) ;

constexpr void __cordl_internal_set_enabledOnFrame(int32_t  value) ;

constexpr void __cordl_internal_set_flipOnXForLeftArm(bool  value) ;

constexpr void __cordl_internal_set_flipOnXForLeftHand(bool  value) ;

constexpr void __cordl_internal_set_flipOnYForLeftHand(bool  value) ;

constexpr void __cordl_internal_set_gameObjectsActiveOnlyWhileDocked(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_gameObjectsActiveOnlyWhileHeld(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_grabAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gripInteractor(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_handPoseLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_handPoseRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hysterisis(float_t  value) ;

constexpr void __cordl_internal_set_indexTrigger(float_t  value) ;

constexpr void __cordl_internal_set_initMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_initOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_interactEventName(::StringW  value) ;

constexpr void __cordl_internal_set_interpDt(float_t  value) ;

constexpr void __cordl_internal_set_interpStartPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_interpStartRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_interpState(::GlobalNamespace::TransferrableObject_InterpolateState  value) ;

constexpr void __cordl_internal_set_interpTime(float_t  value) ;

constexpr void __cordl_internal_set_isGrabAnchorSet(bool  value) ;

constexpr void __cordl_internal_set_isHover(bool  value) ;

constexpr void __cordl_internal_set_isSceneObject(bool  value) ;

constexpr void __cordl_internal_set_itemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_latched(bool  value) ;

constexpr void __cordl_internal_set_leftHandMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_loaded(bool  value) ;

constexpr void __cordl_internal_set_maxDistanceFromOriginBeforeRespawn(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromTargetPlayerBeforeRespawn(float_t  value) ;

constexpr void __cordl_internal_set_myIndex(int32_t  value) ;

constexpr void __cordl_internal_set_myThreshold(float_t  value) ;

constexpr void __cordl_internal_set_networkedStateEvents(::GlobalNamespace::TransferrableObject_SyncOptions  value) ;

constexpr void __cordl_internal_set_objectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_originPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_positionInitialized(bool  value) ;

constexpr void __cordl_internal_set_previousItemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_previousState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_resetOnDocked(bool  value) ;

constexpr void __cordl_internal_set_resetPositionAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_rightHandMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_rigidbodyInstance(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_shareable(bool  value) ;

constexpr void __cordl_internal_set_startInterpolation(bool  value) ;

constexpr void __cordl_internal_set_storedZone(::GlobalNamespace::BodyDockPositions_DropPositions  value) ;

constexpr void __cordl_internal_set_targetDockPositions(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_targetRigSet(bool  value) ;

constexpr void __cordl_internal_set_testActivate(bool  value) ;

constexpr void __cordl_internal_set_testDeactivate(bool  value) ;

constexpr void __cordl_internal_set_transferrableItemSlotTransformOverride(::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  value) ;

constexpr void __cordl_internal_set_transferrableItemSlotTransformOverrideApplicable(bool  value) ;

constexpr void __cordl_internal_set_transferrableItemSlotTransformOverrideCachedMatrix(::System::Nullable_1<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_useGrabType(::GlobalNamespace::TransferrableObject_GrabType  value) ;

constexpr void __cordl_internal_set_wasHeldLocal(bool  value) ;

constexpr void __cordl_internal_set_wasHeldShared(bool  value) ;

constexpr void __cordl_internal_set_wasHover(bool  value) ;

constexpr void __cordl_internal_set_worldShareableInstance(::UnityW<::GlobalNamespace::WorldShareableItem>  value) ;

/// @brief Method .ctor, addr 0x5763dd8, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_handPoseLeftReferencePoint() ;

static inline ::UnityEngine::Quaternion getStaticF_handPoseLeftReferenceRotation() ;

static inline ::UnityEngine::Vector3 getStaticF_handPoseRightReferencePoint() ;

static inline ::UnityEngine::Quaternion getStaticF_handPoseRightReferenceRotation() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x576babc, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Method get_IsLocalOwnedWorldShareable, addr 0x576b8a0, size 0x8c, virtual false, abstract: false, final false
inline bool get_IsLocalOwnedWorldShareable() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x576baac, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_isMyOnlineRigValid, addr 0x576b604, size 0x8, virtual false, abstract: false, final false
inline bool get_isMyOnlineRigValid() ;

/// [CompilerGenerated]
/// @brief Method get_isMyRigValid, addr 0x576b5c8, size 0x8, virtual false, abstract: false, final false
inline bool get_isMyRigValid() ;

/// [CompilerGenerated]
/// @brief Method get_isRigidbodySet, addr 0x576ba8c, size 0x8, virtual false, abstract: false, final false
inline bool get_isRigidbodySet() ;

/// @brief Method get_myOnlineRig, addr 0x576b5d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_myOnlineRig() ;

/// @brief Method get_myRig, addr 0x576b5b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_myRig() ;

/// [CompilerGenerated]
/// @brief Method get_shouldUseGravity, addr 0x576ba9c, size 0x8, virtual false, abstract: false, final false
inline bool get_shouldUseGravity() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IPreDisable"
constexpr ::GlobalNamespace::IPreDisable* i___GlobalNamespace__IPreDisable() noexcept;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// @brief Convert to "::Sirenix::OdinInspector::ISelfValidator"
constexpr ::Sirenix::OdinInspector::ISelfValidator* i___Sirenix__OdinInspector__ISelfValidator() noexcept;

static inline void setStaticF_handPoseLeftReferencePoint(::UnityEngine::Vector3  value) ;

static inline void setStaticF_handPoseLeftReferenceRotation(::UnityEngine::Quaternion  value) ;

static inline void setStaticF_handPoseRightReferencePoint(::UnityEngine::Vector3  value) ;

static inline void setStaticF_handPoseRightReferenceRotation(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x576bac4, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x576bab4, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isMyOnlineRigValid, addr 0x576b60c, size 0x8, virtual false, abstract: false, final false
inline void set_isMyOnlineRigValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isMyRigValid, addr 0x576b5d0, size 0x8, virtual false, abstract: false, final false
inline void set_isMyRigValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isRigidbodySet, addr 0x576ba94, size 0x8, virtual false, abstract: false, final false
inline void set_isRigidbodySet(bool  value) ;

/// @brief Method set_myOnlineRig, addr 0x576b5e0, size 0x24, virtual false, abstract: false, final false
inline void set_myOnlineRig(::GlobalNamespace::VRRig*  value) ;

/// @brief Method set_myRig, addr 0x576b5c0, size 0x8, virtual false, abstract: false, final false
inline void set_myRig(::GlobalNamespace::VRRig*  value) ;

/// [CompilerGenerated]
/// @brief Method set_shouldUseGravity, addr 0x576baa4, size 0x8, virtual false, abstract: false, final false
inline void set_shouldUseGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObject(TransferrableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObject(TransferrableObject const& ) = delete;

/// @brief Field BOOL_A_BITMASK offset 0xffffffff size 0x4
static constexpr int32_t  BOOL_A_BITMASK{static_cast<int32_t>(0x1)};

/// @brief Field BOOL_B_BITMASK offset 0xffffffff size 0x4
static constexpr int32_t  BOOL_B_BITMASK{static_cast<int32_t>(0x2)};

/// @brief Field BOOL_C_BITMASK offset 0xffffffff size 0x4
static constexpr int32_t  BOOL_C_BITMASK{static_cast<int32_t>(0x4)};

/// @brief Field BOOL_D_BITMASK offset 0xffffffff size 0x4
static constexpr int32_t  BOOL_D_BITMASK{static_cast<int32_t>(0x8)};

/// @brief Field HELD_BIT_MASK offset 0xffffffff size 0x4
static constexpr int32_t  HELD_BIT_MASK{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1367};

/// @brief Field kPositionStateCount offset 0xffffffff size 0x4
static constexpr int32_t  kPositionStateCount{static_cast<int32_t>(0x8)};

/// @brief Field _myRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____myRig;

/// [CompilerGenerated]
/// @brief Field <isMyRigValid>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____isMyRigValid_k__BackingField;

/// @brief Field _myOnlineRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____myOnlineRig;

/// [CompilerGenerated]
/// @brief Field <isMyOnlineRigValid>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____isMyOnlineRigValid_k__BackingField;

/// @brief Field latched, offset: 0x39, size: 0x1, def value: None
 bool  ___latched;

/// @brief Field indexTrigger, offset: 0x3c, size: 0x4, def value: None
 float_t  ___indexTrigger;

/// @brief Field testActivate, offset: 0x40, size: 0x1, def value: None
 bool  ___testActivate;

/// @brief Field testDeactivate, offset: 0x41, size: 0x1, def value: None
 bool  ___testDeactivate;

/// [Tooltip("When the grip/trigger input is greater than this value the transferrable object is activated")]
/// @brief Field myThreshold, offset: 0x44, size: 0x4, def value: None
 float_t  ___myThreshold;

/// [Tooltip("When the grip/trigger input is less than (myThreshold - hysterisis) the transferrable object is deactivated")]
/// @brief Field hysterisis, offset: 0x48, size: 0x4, def value: None
 float_t  ___hysterisis;

/// [Tooltip("Set the x scale to -1 when held in left hand")]
/// @brief Field flipOnXForLeftHand, offset: 0x4c, size: 0x1, def value: None
 bool  ___flipOnXForLeftHand;

/// [Tooltip("Set the y scale to -1 when held in left hand")]
/// @brief Field flipOnYForLeftHand, offset: 0x4d, size: 0x1, def value: None
 bool  ___flipOnYForLeftHand;

/// [Tooltip("Set the x scale to -1 when docked on left arm")]
/// @brief Field flipOnXForLeftArm, offset: 0x4e, size: 0x1, def value: None
 bool  ___flipOnXForLeftArm;

/// [Tooltip("disable grabbing the item from out of your other hand")]
/// @brief Field disableStealing, offset: 0x4f, size: 0x1, def value: None
 bool  ___disableStealing;

/// [Tooltip("Allow other players to pick up this item")]
/// @brief Field allowPlayerStealing, offset: 0x50, size: 0x1, def value: None
 bool  ___allowPlayerStealing;

/// @brief Field initState, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___initState;

/// @brief Field itemState, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___itemState;

/// @brief Field previousItemState, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___previousItemState;

/// [DevInspectorShow]
/// @brief Field storedZone, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::BodyDockPositions_DropPositions  ___storedZone;

/// @brief Field previousState, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___previousState;

/// [DevInspectorYellow]
/// [DevInspectorShow]
/// @brief Field currentState, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___currentState;

/// @brief Field dockPositions, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::BodyDockPositions_DropPositions  ___dockPositions;

/// [DevInspectorCyan]
/// [DevInspectorShow]
/// @brief Field advancedGrabState, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::AdvancedItemState*  ___advancedGrabState;

/// [DevInspectorShow]
/// [DevInspectorCyan]
/// @brief Field targetRig, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// [HideInInspector]
/// @brief Field targetRigSet, offset: 0x80, size: 0x1, def value: None
 bool  ___targetRigSet;

/// @brief Field useGrabType, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_GrabType  ___useGrabType;

/// [DevInspectorShow]
/// [DevInspectorCyan]
/// @brief Field ownerRig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// [DebugReadout]
/// @brief Field targetDockPositions, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ___targetDockPositions;

/// @brief Field anchorOverrides, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ___anchorOverrides;

/// @brief Field canAutoGrabLeft, offset: 0xa0, size: 0x1, def value: None
 bool  ___canAutoGrabLeft;

/// @brief Field canAutoGrabRight, offset: 0xa1, size: 0x1, def value: None
 bool  ___canAutoGrabRight;

/// [DevInspectorShow]
/// @brief Field objectIndex, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___objectIndex;

/// @brief Field anchor, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchor;

/// [Tooltip("In Functional prefab, assign to the Collider to grab this object")]
/// @brief Field gripInteractor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___gripInteractor;

/// [Tooltip("(Optional) Use this to override the transform used when the object is in the hand.\nExample: \'GHOST BALLOON\' uses child \'grabPtAnchor\' which is the end of the balloon\'s string.")]
/// @brief Field grabAnchor, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabAnchor;

/// [Tooltip("(Optional) Use this (with the GorillaHandClosed_Left mesh) to intuitively define how\nthe player holds this object, by placing a representation of their hand gripping it.")]
/// @brief Field handPoseLeft, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handPoseLeft;

/// [Tooltip("(Optional) Use this (with the GorillaHandClosed_Right mesh) to intuitively define how\nthe player holds this object, by placing a representation of their hand gripping it.")]
/// @brief Field handPoseRight, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handPoseRight;

/// [HideInInspector]
/// @brief Field isGrabAnchorSet, offset: 0xd0, size: 0x1, def value: None
 bool  ___isGrabAnchorSet;

/// @brief Field transferrableItemSlotTransformOverride, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  ___transferrableItemSlotTransformOverride;

/// @brief Field myIndex, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___myIndex;

/// [Tooltip("(Optional) objects to enable when held in hand and disable when not in hand")]
/// @brief Field gameObjectsActiveOnlyWhileHeld, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjectsActiveOnlyWhileHeld;

/// [Tooltip("(Optional) objects to disable when held in hand and enable when not in hand")]
/// @brief Field gameObjectsActiveOnlyWhileDocked, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjectsActiveOnlyWhileDocked;

/// [Tooltip("(Optional) components to enable when held in hand and disable when not in hand")]
/// @brief Field behavioursEnabledOnlyWhileHeld, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  ___behavioursEnabledOnlyWhileHeld;

/// [Tooltip("(Optional) components to disable when held in hand and enable when not in hand")]
/// @brief Field behavioursEnabledOnlyWhileDocked, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  ___behavioursEnabledOnlyWhileDocked;

/// [SerializeField]
/// @brief Field worldShareableInstance, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldShareableItem>  ___worldShareableInstance;

/// @brief Field interpTime, offset: 0x110, size: 0x4, def value: None
 float_t  ___interpTime;

/// @brief Field interpDt, offset: 0x114, size: 0x4, def value: None
 float_t  ___interpDt;

/// @brief Field interpStartPos, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___interpStartPos;

/// @brief Field interpStartRot, offset: 0x124, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___interpStartRot;

/// @brief Field enabledOnFrame, offset: 0x134, size: 0x4, def value: None
 int32_t  ___enabledOnFrame;

/// @brief Field initOffset, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initOffset;

/// @brief Field initRotation, offset: 0x144, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initRotation;

/// @brief Field initMatrix, offset: 0x154, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___initMatrix;

/// @brief Field leftHandMatrix, offset: 0x194, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___leftHandMatrix;

/// @brief Field rightHandMatrix, offset: 0x1d4, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___rightHandMatrix;

/// @brief Field positionInitialized, offset: 0x214, size: 0x1, def value: None
 bool  ___positionInitialized;

/// @brief Field isSceneObject, offset: 0x215, size: 0x1, def value: None
 bool  ___isSceneObject;

/// @brief Field rigidbodyInstance, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbodyInstance;

/// [CompilerGenerated]
/// @brief Field <isRigidbodySet>k__BackingField, offset: 0x220, size: 0x1, def value: None
 bool  ____isRigidbodySet_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <shouldUseGravity>k__BackingField, offset: 0x221, size: 0x1, def value: None
 bool  ____shouldUseGravity_k__BackingField;

/// @brief Field canDrop, offset: 0x222, size: 0x1, def value: None
 bool  ___canDrop;

/// [Tooltip("completely drop the item instead of auto-returning to a stored zone")]
/// @brief Field allowReparenting, offset: 0x223, size: 0x1, def value: None
 bool  ___allowReparenting;

/// [Tooltip("(Scene object) has a worldSharableInstance")]
/// @brief Field shareable, offset: 0x224, size: 0x1, def value: None
 bool  ___shareable;

/// [Tooltip("(Balloon) Unparent this object from the rig when grabbed")]
/// @brief Field detatchOnGrab, offset: 0x225, size: 0x1, def value: None
 bool  ___detatchOnGrab;

/// [Tooltip("(Balloon) is this cosmetic droppable in the world")]
/// @brief Field allowWorldSharableInstance, offset: 0x226, size: 0x1, def value: None
 bool  ___allowWorldSharableInstance;

/// [ItemCanBeNull]
/// @brief Field originPoint, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___originPoint;

/// [ItemCanBeNull]
/// @brief Field maxDistanceFromOriginBeforeRespawn, offset: 0x230, size: 0x4, def value: None
 float_t  ___maxDistanceFromOriginBeforeRespawn;

/// @brief Field resetPositionAudioClip, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___resetPositionAudioClip;

/// @brief Field maxDistanceFromTargetPlayerBeforeRespawn, offset: 0x240, size: 0x4, def value: None
 float_t  ___maxDistanceFromTargetPlayerBeforeRespawn;

/// @brief Field wasHover, offset: 0x244, size: 0x1, def value: None
 bool  ___wasHover;

/// @brief Field isHover, offset: 0x245, size: 0x1, def value: None
 bool  ___isHover;

/// @brief Field disableItem, offset: 0x246, size: 0x1, def value: None
 bool  ___disableItem;

/// @brief Field loaded, offset: 0x247, size: 0x1, def value: None
 bool  ___loaded;

/// @brief Field ClearLocalPositionOnReset, offset: 0x248, size: 0x1, def value: None
 bool  ___ClearLocalPositionOnReset;

/// [SerializeField]
/// @brief Field networkedStateEvents, offset: 0x24c, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_SyncOptions  ___networkedStateEvents;

/// [SerializeField]
/// @brief Field resetOnDocked, offset: 0x250, size: 0x1, def value: None
 bool  ___resetOnDocked;

/// [SerializeField]
/// @brief Field boolADebugName, offset: 0x258, size: 0x8, def value: None
 ::StringW  ___boolADebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolTrue, offset: 0x260, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolFalse, offset: 0x268, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolFalse;

/// [SerializeField]
/// @brief Field boolBDebugName, offset: 0x270, size: 0x8, def value: None
 ::StringW  ___boolBDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolBTrue, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolBFalse, offset: 0x280, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBFalse;

/// [SerializeField]
/// @brief Field boolCDebugName, offset: 0x288, size: 0x8, def value: None
 ::StringW  ___boolCDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolCTrue, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolCFalse, offset: 0x298, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCFalse;

/// [SerializeField]
/// @brief Field boolDDebugName, offset: 0x2a0, size: 0x8, def value: None
 ::StringW  ___boolDDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolDTrue, offset: 0x2a8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolDFalse, offset: 0x2b0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDFalse;

/// [SerializeField]
/// @brief Field OnItemStateIntChanged, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnItemStateIntChanged;

/// [FormerlySerializedAs("OnUndocked")]
/// [SerializeField]
/// @brief Field OnHeldLocal, offset: 0x2c0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHeldLocal;

/// [SerializeField]
/// @brief Field OnHeldShared, offset: 0x2c8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHeldShared;

/// [FormerlySerializedAs("OnDocked")]
/// [SerializeField]
/// @brief Field OnDockedLocal, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDockedLocal;

/// [FormerlySerializedAs("OnDockedLocal")]
/// [SerializeField]
/// @brief Field OnDockedShared, offset: 0x2d8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDockedShared;

/// @brief Field wasHeldLocal, offset: 0x2e0, size: 0x1, def value: None
 bool  ___wasHeldLocal;

/// @brief Field wasHeldShared, offset: 0x2e1, size: 0x1, def value: None
 bool  ___wasHeldShared;

/// [Tooltip("(Optional) name broadcast by PlayerGameEvents")]
/// @brief Field interactEventName, offset: 0x2e8, size: 0x8, def value: None
 ::StringW  ___interactEventName;

/// [DevInspectorShow]
/// @brief Field interpState, offset: 0x2f0, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_InterpolateState  ___interpState;

/// @brief Field startInterpolation, offset: 0x2f4, size: 0x1, def value: None
 bool  ___startInterpolation;

/// @brief Field InitialDockObject, offset: 0x2f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___InitialDockObject;

/// @brief Field audioSrc, offset: 0x300, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSrc;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x308, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x30c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

/// @brief Field _defaultAnchor, offset: 0x310, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____defaultAnchor;

/// @brief Field _isDefaultAnchorSet, offset: 0x318, size: 0x1, def value: None
 bool  ____isDefaultAnchorSet;

/// @brief Field transferrableItemSlotTransformOverrideCachedMatrix, offset: 0x320, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Matrix4x4>  ___transferrableItemSlotTransformOverrideCachedMatrix;

/// @brief Field transferrableItemSlotTransformOverrideApplicable, offset: 0x330, size: 0x1, def value: None
 bool  ___transferrableItemSlotTransformOverrideApplicable;

/// @brief Size padding 0x368 - 0x338 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____myRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____isMyRigValid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____myOnlineRig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____isMyOnlineRigValid_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___latched) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___indexTrigger) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___testActivate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___testDeactivate) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___myThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___hysterisis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___flipOnXForLeftHand) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___flipOnYForLeftHand) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___flipOnXForLeftArm) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___disableStealing) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___allowPlayerStealing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___initState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___itemState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___previousItemState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___storedZone) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___previousState) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___currentState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___dockPositions) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___advancedGrabState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___targetRig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___targetRigSet) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___useGrabType) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___ownerRig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___targetDockPositions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___anchorOverrides) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___canAutoGrabLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___canAutoGrabRight) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___objectIndex) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___anchor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___gripInteractor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___grabAnchor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___handPoseLeft) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___handPoseRight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___isGrabAnchorSet) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___transferrableItemSlotTransformOverride) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___myIndex) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___gameObjectsActiveOnlyWhileHeld) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___gameObjectsActiveOnlyWhileDocked) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___behavioursEnabledOnlyWhileHeld) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___behavioursEnabledOnlyWhileDocked) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___worldShareableInstance) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interpTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interpDt) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interpStartPos) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interpStartRot) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___enabledOnFrame) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___initOffset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___initRotation) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___initMatrix) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___leftHandMatrix) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___rightHandMatrix) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___positionInitialized) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___isSceneObject) == 0x215, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___rigidbodyInstance) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____isRigidbodySet_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____shouldUseGravity_k__BackingField) == 0x221, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___canDrop) == 0x222, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___allowReparenting) == 0x223, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___shareable) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___detatchOnGrab) == 0x225, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___allowWorldSharableInstance) == 0x226, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___originPoint) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___maxDistanceFromOriginBeforeRespawn) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___resetPositionAudioClip) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___maxDistanceFromTargetPlayerBeforeRespawn) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___wasHover) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___isHover) == 0x245, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___disableItem) == 0x246, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___loaded) == 0x247, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___ClearLocalPositionOnReset) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___networkedStateEvents) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___resetOnDocked) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___boolADebugName) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolTrue) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolFalse) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___boolBDebugName) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolBTrue) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolBFalse) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___boolCDebugName) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolCTrue) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolCFalse) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___boolDDebugName) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolDTrue) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateBoolDFalse) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnItemStateIntChanged) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnHeldLocal) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnHeldShared) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnDockedLocal) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___OnDockedShared) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___wasHeldLocal) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___wasHeldShared) == 0x2e1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interactEventName) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___interpState) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___startInterpolation) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___InitialDockObject) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___audioSrc) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____IsSpawned_k__BackingField) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____CosmeticSelectedSide_k__BackingField) == 0x30c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____defaultAnchor) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ____isDefaultAnchorSet) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___transferrableItemSlotTransformOverrideCachedMatrix) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject, ___transferrableItemSlotTransformOverrideApplicable) == 0x330, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObject) == 0x368, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObject/<>c__DisplayClass161_0
class CORDL_TYPE TransferrableObject___c__DisplayClass161_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TransferrableObject>  __4__this;

/// @brief Field owner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::GlobalNamespace::NetPlayer*  owner;

static inline ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0* New_ctor() ;

/// @brief Method <SpawnTransferableObjectViews>b__0, addr 0x5772c14, size 0x50, virtual false, abstract: false, final false
inline void _SpawnTransferableObjectViews_b__0() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_owner() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x576dd38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject___c__DisplayClass161_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject___c__DisplayClass161_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObject___c__DisplayClass161_0(TransferrableObject___c__DisplayClass161_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject___c__DisplayClass161_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObject___c__DisplayClass161_0(TransferrableObject___c__DisplayClass161_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1366};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  _____4__this;

/// @brief Field owner, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___owner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObject___c__DisplayClass161_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObject___c__DisplayClass161_0, ___owner) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObject___c__DisplayClass161_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObject/<>c
class CORDL_TYPE TransferrableObject___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TransferrableObject___c*  __9;

/// @brief Field <>9__154_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__154_0, put=setStaticF___9__154_0)) ::System::Action*  __9__154_0;

/// @brief Field <>9__194_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__194_0, put=setStaticF___9__194_0)) ::System::Action*  __9__194_0;

/// @brief Field <>9__195_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__195_0, put=setStaticF___9__195_0)) ::System::Action*  __9__195_0;

/// @brief Field <>9__79_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__79_0, put=setStaticF___9__79_0)) ::System::Action*  __9__79_0;

static inline ::GlobalNamespace::TransferrableObject___c* New_ctor() ;

/// @brief Method <OnDisable>b__154_0, addr 0x5772c08, size 0x4, virtual false, abstract: false, final false
inline void _OnDisable_b__154_0() ;

/// @brief Method <OnGrab>b__195_0, addr 0x5772c10, size 0x4, virtual false, abstract: false, final false
inline void _OnGrab_b__195_0() ;

/// @brief Method <ResetToDefaultState>b__194_0, addr 0x5772c0c, size 0x4, virtual false, abstract: false, final false
inline void _ResetToDefaultState_b__194_0() ;

/// @brief Method <WorldShareableRequestOwnership>b__79_0, addr 0x5772c04, size 0x4, virtual false, abstract: false, final false
inline void _WorldShareableRequestOwnership_b__79_0() ;

/// @brief Method .ctor, addr 0x5772bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TransferrableObject___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__154_0() ;

static inline ::System::Action* getStaticF___9__194_0() ;

static inline ::System::Action* getStaticF___9__195_0() ;

static inline ::System::Action* getStaticF___9__79_0() ;

static inline void setStaticF___9(::GlobalNamespace::TransferrableObject___c*  value) ;

static inline void setStaticF___9__154_0(::System::Action*  value) ;

static inline void setStaticF___9__194_0(::System::Action*  value) ;

static inline void setStaticF___9__195_0(::System::Action*  value) ;

static inline void setStaticF___9__79_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObject___c(TransferrableObject___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObject___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObject___c(TransferrableObject___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TransferrableObject___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
