#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyTransferrableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__LegacyTransferrableObject_InterpolateState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyTransferrableObject)
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class EquipmentInteractor;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct LegacyTransferrableObject_InterpolateState;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LegacyTransferrableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegacyTransferrableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegacyTransferrableObject*, "", "LegacyTransferrableObject");
// Dependencies BodyDockPositions::DropPositions, HoldableObject, LegacyTransferrableObject::InterpolateState, TransferrableObject::ItemStates, TransferrableObject::PositionState, UnityEngine.GameObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegacyTransferrableObject
class CORDL_TYPE LegacyTransferrableObject : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
using InterpolateState = ::GlobalNamespace::LegacyTransferrableObject_InterpolateState;

/// @brief Field anchor, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::Transform>  anchor;

/// @brief Field anchorOverrides, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOverrides, put=__cordl_internal_set_anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  anchorOverrides;

/// @brief Field canAutoGrabLeft, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAutoGrabLeft, put=__cordl_internal_set_canAutoGrabLeft)) bool  canAutoGrabLeft;

/// @brief Field canAutoGrabRight, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAutoGrabRight, put=__cordl_internal_set_canAutoGrabRight)) bool  canAutoGrabRight;

/// @brief Field canDrop, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_canDrop, put=__cordl_internal_set_canDrop)) bool  canDrop;

/// @brief Field currentState, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::TransferrableObject_PositionState  currentState;

/// @brief Field detatchOnGrab, offset 0xfe, size 0x1 
 __declspec(property(get=__cordl_internal_get_detatchOnGrab, put=__cordl_internal_set_detatchOnGrab)) bool  detatchOnGrab;

/// @brief Field disableItem, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableItem, put=__cordl_internal_set_disableItem)) bool  disableItem;

/// @brief Field disableStealing, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableStealing, put=__cordl_internal_set_disableStealing)) bool  disableStealing;

/// @brief Field dockPositions, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_dockPositions, put=__cordl_internal_set_dockPositions)) ::GlobalNamespace::BodyDockPositions_DropPositions  dockPositions;

/// @brief Field enabledOnFrame, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_enabledOnFrame, put=__cordl_internal_set_enabledOnFrame)) int32_t  enabledOnFrame;

/// @brief Field flipOnXForLeftArm, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnXForLeftArm, put=__cordl_internal_set_flipOnXForLeftArm)) bool  flipOnXForLeftArm;

/// @brief Field flipOnXForLeftHand, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnXForLeftHand, put=__cordl_internal_set_flipOnXForLeftHand)) bool  flipOnXForLeftHand;

/// @brief Field flipOnYForLeftHand, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipOnYForLeftHand, put=__cordl_internal_set_flipOnYForLeftHand)) bool  flipOnYForLeftHand;

/// @brief Field gameObjectsActiveOnlyWhileHeld, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectsActiveOnlyWhileHeld, put=__cordl_internal_set_gameObjectsActiveOnlyWhileHeld)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjectsActiveOnlyWhileHeld;

/// @brief Field grabAnchor, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabAnchor, put=__cordl_internal_set_grabAnchor)) ::UnityW<::UnityEngine::Transform>  grabAnchor;

/// @brief Field gripInteractor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_gripInteractor, put=__cordl_internal_set_gripInteractor)) ::UnityW<::GlobalNamespace::InteractionPoint>  gripInteractor;

/// @brief Field hysterisis, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_hysterisis, put=__cordl_internal_set_hysterisis)) float_t  hysterisis;

/// @brief Field indexTrigger, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_indexTrigger, put=__cordl_internal_set_indexTrigger)) float_t  indexTrigger;

/// @brief Field initOffset, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get_initOffset, put=__cordl_internal_set_initOffset)) ::UnityEngine::Vector3  initOffset;

/// @brief Field initRotation, offset 0xec, size 0x10 
 __declspec(property(get=__cordl_internal_get_initRotation, put=__cordl_internal_set_initRotation)) ::UnityEngine::Quaternion  initRotation;

/// @brief Field initState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_initState, put=__cordl_internal_set_initState)) ::GlobalNamespace::TransferrableObject_PositionState  initState;

/// @brief Field interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactor, put=__cordl_internal_set_interactor)) ::UnityW<::GlobalNamespace::EquipmentInteractor>  interactor;

/// @brief Field interpDt, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpDt, put=__cordl_internal_set_interpDt)) float_t  interpDt;

/// @brief Field interpStartPos, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_interpStartPos, put=__cordl_internal_set_interpStartPos)) ::UnityEngine::Vector3  interpStartPos;

/// @brief Field interpStartRot, offset 0xcc, size 0x10 
 __declspec(property(get=__cordl_internal_get_interpStartRot, put=__cordl_internal_set_interpStartRot)) ::UnityEngine::Quaternion  interpStartRot;

/// @brief Field interpState, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpState, put=__cordl_internal_set_interpState)) ::GlobalNamespace::LegacyTransferrableObject_InterpolateState  interpState;

/// @brief Field interpTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpTime, put=__cordl_internal_set_interpTime)) float_t  interpTime;

/// @brief Field isHover, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHover, put=__cordl_internal_set_isHover)) bool  isHover;

/// @brief Field itemState, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemState, put=__cordl_internal_set_itemState)) ::GlobalNamespace::TransferrableObject_ItemStates  itemState;

/// @brief Field latched, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_latched, put=__cordl_internal_set_latched)) bool  latched;

/// @brief Field myIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_myIndex, put=__cordl_internal_set_myIndex)) int32_t  myIndex;

/// @brief Field myOnlineRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myOnlineRig, put=__cordl_internal_set_myOnlineRig)) ::UnityW<::GlobalNamespace::VRRig>  myOnlineRig;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field myThreshold, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_myThreshold, put=__cordl_internal_set_myThreshold)) float_t  myThreshold;

/// @brief Field objectIndex, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectIndex, put=__cordl_internal_set_objectIndex)) int32_t  objectIndex;

/// @brief Field previousState, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) ::GlobalNamespace::TransferrableObject_PositionState  previousState;

/// @brief Field shareable, offset 0xfd, size 0x1 
 __declspec(property(get=__cordl_internal_get_shareable, put=__cordl_internal_set_shareable)) bool  shareable;

/// @brief Field storedZone, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_storedZone, put=__cordl_internal_set_storedZone)) ::GlobalNamespace::BodyDockPositions_DropPositions  storedZone;

/// @brief Field targetDock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetDock, put=__cordl_internal_set_targetDock)) ::UnityW<::GlobalNamespace::BodyDockPositions>  targetDock;

/// @brief Field targetRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field testActivate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_testActivate, put=__cordl_internal_set_testActivate)) bool  testActivate;

/// @brief Field testDeactivate, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_testDeactivate, put=__cordl_internal_set_testDeactivate)) bool  testDeactivate;

/// @brief Field wasHover, offset 0xff, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHover, put=__cordl_internal_set_wasHover)) bool  wasHover;

/// @brief Field worldShareableInstance, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldShareableInstance, put=__cordl_internal_set_worldShareableInstance)) ::UnityW<::UnityEngine::GameObject>  worldShareableInstance;

/// @brief Method ActivateItemFX, addr 0x575c090, size 0x180, virtual false, abstract: false, final false
inline void ActivateItemFX(float_t  hapticStrength, float_t  hapticDuration, int32_t  soundIndex, float_t  soundVolume) ;

/// @brief Method Attached, addr 0x575a934, size 0x34, virtual false, abstract: false, final false
inline bool Attached() ;

/// @brief Method AutoGrabTrue, addr 0x575c214, size 0x14, virtual true, abstract: false, final false
inline bool AutoGrabTrue(bool  leftGrabbingHand) ;

/// @brief Method Awake, addr 0x5759de8, size 0x54, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanActivate, addr 0x575c228, size 0x8, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x575c230, size 0x8, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method DefaultAnchor, addr 0x575a8a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> DefaultAnchor() ;

/// @brief Method DropItem, addr 0x575afe0, size 0x24, virtual false, abstract: false, final false
inline void DropItem() ;

/// @brief Method DropItemCleanup, addr 0x575be54, size 0x64, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method Dropped, addr 0x575a968, size 0x10, virtual false, abstract: false, final false
inline bool Dropped() ;

/// @brief Method GetAnchor, addr 0x575a2ac, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos) ;

/// @brief Method HandleLocalInput, addr 0x575b294, size 0x1d8, virtual false, abstract: false, final false
inline void HandleLocalInput() ;

/// @brief Method InHand, addr 0x575a920, size 0x14, virtual false, abstract: false, final false
inline bool InHand() ;

/// @brief Method InLeftHand, addr 0x575c484, size 0x10, virtual false, abstract: false, final false
inline bool InLeftHand() ;

/// @brief Method InRightHand, addr 0x575c494, size 0x10, virtual false, abstract: false, final false
inline bool InRightHand() ;

/// @brief Method IsHeld, addr 0x575c2d4, size 0x1b0, virtual true, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsMyItem, addr 0x575c24c, size 0x88, virtual true, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method LateUpdate, addr 0x575a7a0, size 0x100, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateLocal, addr 0x575b46c, size 0xb0, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x575b51c, size 0x1d0, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x575b004, size 0x11c, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::LegacyTransferrableObject* New_ctor() ;

/// @brief Method OnActivate, addr 0x575c238, size 0xc, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnChest, addr 0x575c4a4, size 0x10, virtual false, abstract: false, final false
inline bool OnChest() ;

/// @brief Method OnDeactivate, addr 0x575c244, size 0x8, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x575a5f0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x575a024, size 0x288, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x575b6fc, size 0x394, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x575beb8, size 0x1d8, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnJoinedRoom, addr 0x575a5fc, size 0x74, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x575a670, size 0xf0, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerLeftRoom, addr 0x575a760, size 0x10, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnRelease, addr 0x575ba90, size 0x3c4, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnShoulder, addr 0x575c4b4, size 0x18, virtual false, abstract: false, final false
inline bool OnShoulder() ;

/// @brief Method OnWorldShareableItemDeallocated, addr 0x575a79c, size 0x4, virtual true, abstract: false, final false
inline void OnWorldShareableItemDeallocated(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnWorldShareableItemSpawn, addr 0x575a798, size 0x4, virtual true, abstract: false, final false
inline void OnWorldShareableItemSpawn() ;

/// @brief Method OwningPlayer, addr 0x575c4cc, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* OwningPlayer() ;

/// @brief Method PlayNote, addr 0x575c210, size 0x4, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  volume) ;

/// @brief Method ReDock, addr 0x575b264, size 0x30, virtual false, abstract: false, final false
inline void ReDock() ;

/// @brief Method ResetToDefaultState, addr 0x575b6ec, size 0x10, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method ResetXf, addr 0x575b120, size 0x144, virtual false, abstract: false, final false
inline void ResetXf() ;

/// @brief Method SetWorldShareableItem, addr 0x575a770, size 0x28, virtual false, abstract: false, final false
inline void SetWorldShareableItem(::UnityEngine::GameObject*  item) ;

/// @brief Method SpawnShareableObject, addr 0x575a33c, size 0x2b4, virtual false, abstract: false, final false
inline void SpawnShareableObject() ;

/// @brief Method Start, addr 0x5759e3c, size 0x1e8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFollowXform, addr 0x575a978, size 0x668, virtual false, abstract: false, final false
inline void UpdateFollowXform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchor() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get_anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get_anchorOverrides() ;

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

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjectsActiveOnlyWhileHeld() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjectsActiveOnlyWhileHeld() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabAnchor() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_gripInteractor() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_gripInteractor() ;

constexpr float_t const& __cordl_internal_get_hysterisis() const;

constexpr float_t& __cordl_internal_get_hysterisis() ;

constexpr float_t const& __cordl_internal_get_indexTrigger() const;

constexpr float_t& __cordl_internal_get_indexTrigger() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initRotation() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_initState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_initState() ;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& __cordl_internal_get_interactor() const;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& __cordl_internal_get_interactor() ;

constexpr float_t const& __cordl_internal_get_interpDt() const;

constexpr float_t& __cordl_internal_get_interpDt() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_interpStartPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_interpStartPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_interpStartRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_interpStartRot() ;

constexpr ::GlobalNamespace::LegacyTransferrableObject_InterpolateState const& __cordl_internal_get_interpState() const;

constexpr ::GlobalNamespace::LegacyTransferrableObject_InterpolateState& __cordl_internal_get_interpState() ;

constexpr float_t const& __cordl_internal_get_interpTime() const;

constexpr float_t& __cordl_internal_get_interpTime() ;

constexpr bool const& __cordl_internal_get_isHover() const;

constexpr bool& __cordl_internal_get_isHover() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_itemState() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_itemState() ;

constexpr bool const& __cordl_internal_get_latched() const;

constexpr bool& __cordl_internal_get_latched() ;

constexpr int32_t const& __cordl_internal_get_myIndex() const;

constexpr int32_t& __cordl_internal_get_myIndex() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myOnlineRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myOnlineRig() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_myThreshold() const;

constexpr float_t& __cordl_internal_get_myThreshold() ;

constexpr int32_t const& __cordl_internal_get_objectIndex() const;

constexpr int32_t& __cordl_internal_get_objectIndex() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_previousState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_previousState() ;

constexpr bool const& __cordl_internal_get_shareable() const;

constexpr bool& __cordl_internal_get_shareable() ;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& __cordl_internal_get_storedZone() const;

constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& __cordl_internal_get_storedZone() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get_targetDock() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get_targetDock() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr bool const& __cordl_internal_get_testActivate() const;

constexpr bool& __cordl_internal_get_testActivate() ;

constexpr bool const& __cordl_internal_get_testDeactivate() const;

constexpr bool& __cordl_internal_get_testDeactivate() ;

constexpr bool const& __cordl_internal_get_wasHover() const;

constexpr bool& __cordl_internal_get_wasHover() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_worldShareableInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_worldShareableInstance() ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

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

constexpr void __cordl_internal_set_gameObjectsActiveOnlyWhileHeld(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_grabAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gripInteractor(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_hysterisis(float_t  value) ;

constexpr void __cordl_internal_set_indexTrigger(float_t  value) ;

constexpr void __cordl_internal_set_initOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_interactor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value) ;

constexpr void __cordl_internal_set_interpDt(float_t  value) ;

constexpr void __cordl_internal_set_interpStartPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_interpStartRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_interpState(::GlobalNamespace::LegacyTransferrableObject_InterpolateState  value) ;

constexpr void __cordl_internal_set_interpTime(float_t  value) ;

constexpr void __cordl_internal_set_isHover(bool  value) ;

constexpr void __cordl_internal_set_itemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_latched(bool  value) ;

constexpr void __cordl_internal_set_myIndex(int32_t  value) ;

constexpr void __cordl_internal_set_myOnlineRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_myThreshold(float_t  value) ;

constexpr void __cordl_internal_set_objectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_previousState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_shareable(bool  value) ;

constexpr void __cordl_internal_set_storedZone(::GlobalNamespace::BodyDockPositions_DropPositions  value) ;

constexpr void __cordl_internal_set_targetDock(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_testActivate(bool  value) ;

constexpr void __cordl_internal_set_testDeactivate(bool  value) ;

constexpr void __cordl_internal_set_wasHover(bool  value) ;

constexpr void __cordl_internal_set_worldShareableInstance(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x575c590, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyTransferrableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyTransferrableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyTransferrableObject(LegacyTransferrableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyTransferrableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyTransferrableObject(LegacyTransferrableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1331};

/// @brief Field kPositionStateCount offset 0xffffffff size 0x4
static constexpr int32_t  kPositionStateCount{static_cast<int32_t>(0x8)};

/// @brief Field interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EquipmentInteractor>  ___interactor;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field myOnlineRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myOnlineRig;

/// @brief Field latched, offset: 0x38, size: 0x1, def value: None
 bool  ___latched;

/// @brief Field indexTrigger, offset: 0x3c, size: 0x4, def value: None
 float_t  ___indexTrigger;

/// @brief Field testActivate, offset: 0x40, size: 0x1, def value: None
 bool  ___testActivate;

/// @brief Field testDeactivate, offset: 0x41, size: 0x1, def value: None
 bool  ___testDeactivate;

/// @brief Field myThreshold, offset: 0x44, size: 0x4, def value: None
 float_t  ___myThreshold;

/// @brief Field hysterisis, offset: 0x48, size: 0x4, def value: None
 float_t  ___hysterisis;

/// @brief Field flipOnXForLeftHand, offset: 0x4c, size: 0x1, def value: None
 bool  ___flipOnXForLeftHand;

/// @brief Field flipOnYForLeftHand, offset: 0x4d, size: 0x1, def value: None
 bool  ___flipOnYForLeftHand;

/// @brief Field flipOnXForLeftArm, offset: 0x4e, size: 0x1, def value: None
 bool  ___flipOnXForLeftArm;

/// @brief Field disableStealing, offset: 0x4f, size: 0x1, def value: None
 bool  ___disableStealing;

/// @brief Field initState, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___initState;

/// @brief Field itemState, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___itemState;

/// @brief Field storedZone, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::BodyDockPositions_DropPositions  ___storedZone;

/// @brief Field previousState, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___previousState;

/// @brief Field currentState, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___currentState;

/// @brief Field dockPositions, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::BodyDockPositions_DropPositions  ___dockPositions;

/// @brief Field targetRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field targetDock, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ___targetDock;

/// @brief Field anchorOverrides, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ___anchorOverrides;

/// @brief Field canAutoGrabLeft, offset: 0x80, size: 0x1, def value: None
 bool  ___canAutoGrabLeft;

/// @brief Field canAutoGrabRight, offset: 0x81, size: 0x1, def value: None
 bool  ___canAutoGrabRight;

/// @brief Field objectIndex, offset: 0x84, size: 0x4, def value: None
 int32_t  ___objectIndex;

/// [Tooltip("In Holdables.prefab, assign to the parent of this transform.\nExample: \'Holdables/YellowHandBootsRight\' is the anchor of \'Holdables/YellowHandBootsRight/YELLOW HAND BOOTS\'")]
/// @brief Field anchor, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchor;

/// [Tooltip("In Holdables.prefab, assign to the Collider to grab this object")]
/// @brief Field gripInteractor, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___gripInteractor;

/// [Tooltip("(Optional) Use this to override the transform used when the object is in the hand.\nExample: \'GHOST BALLOON\' uses child \'grabPtAnchor\' which is the end of the balloon\'s string.")]
/// @brief Field grabAnchor, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabAnchor;

/// @brief Field myIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___myIndex;

/// [Tooltip("(Optional)")]
/// @brief Field gameObjectsActiveOnlyWhileHeld, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjectsActiveOnlyWhileHeld;

/// @brief Field worldShareableInstance, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___worldShareableInstance;

/// @brief Field interpTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___interpTime;

/// @brief Field interpDt, offset: 0xbc, size: 0x4, def value: None
 float_t  ___interpDt;

/// @brief Field interpStartPos, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___interpStartPos;

/// @brief Field interpStartRot, offset: 0xcc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___interpStartRot;

/// @brief Field enabledOnFrame, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___enabledOnFrame;

/// @brief Field initOffset, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initOffset;

/// @brief Field initRotation, offset: 0xec, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initRotation;

/// @brief Field canDrop, offset: 0xfc, size: 0x1, def value: None
 bool  ___canDrop;

/// @brief Field shareable, offset: 0xfd, size: 0x1, def value: None
 bool  ___shareable;

/// @brief Field detatchOnGrab, offset: 0xfe, size: 0x1, def value: None
 bool  ___detatchOnGrab;

/// @brief Field wasHover, offset: 0xff, size: 0x1, def value: None
 bool  ___wasHover;

/// @brief Field isHover, offset: 0x100, size: 0x1, def value: None
 bool  ___isHover;

/// @brief Field disableItem, offset: 0x101, size: 0x1, def value: None
 bool  ___disableItem;

/// @brief Field interpState, offset: 0x104, size: 0x4, def value: None
 ::GlobalNamespace::LegacyTransferrableObject_InterpolateState  ___interpState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___myOnlineRig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___latched) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___indexTrigger) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___testActivate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___testDeactivate) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___myThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___hysterisis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___flipOnXForLeftHand) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___flipOnYForLeftHand) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___flipOnXForLeftArm) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___disableStealing) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___initState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___itemState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___storedZone) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___previousState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___currentState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___dockPositions) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___targetRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___targetDock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___anchorOverrides) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___canAutoGrabLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___canAutoGrabRight) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___objectIndex) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___anchor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___gripInteractor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___grabAnchor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___myIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___gameObjectsActiveOnlyWhileHeld) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___worldShareableInstance) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interpTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interpDt) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interpStartPos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interpStartRot) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___enabledOnFrame) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___initOffset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___initRotation) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___canDrop) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___shareable) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___detatchOnGrab) == 0xfe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___wasHover) == 0xff, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___isHover) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___disableItem) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject, ___interpState) == 0x104, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegacyTransferrableObject) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
