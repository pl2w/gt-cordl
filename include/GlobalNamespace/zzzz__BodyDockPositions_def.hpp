#pragma once
// IWYU pragma private; include "GlobalNamespace/BodyDockPositions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyDockPositions)
namespace GlobalNamespace {
class BodyDockPositions_DockingResult;
}
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class WorldShareableItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class BodyDockPositions_DockingResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BodyDockPositions*);
MARK_REF_T(::GlobalNamespace::BodyDockPositions_DockingResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyDockPositions*, "", "BodyDockPositions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyDockPositions_DockingResult*, "", "BodyDockPositions/DockingResult");
// Dependencies TransferrableObject, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BodyDockPositions
class CORDL_TYPE BodyDockPositions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DockingResult = ::GlobalNamespace::BodyDockPositions_DockingResult;

using DropPositions = ::GlobalNamespace::BodyDockPositions_DropPositions;

 __declspec(property(get=get_PreviousLeftHandThrowableDisabledTime)) float_t  PreviousLeftHandThrowableDisabledTime;

 __declspec(property(get=get_PreviousLeftHandThrowableIndex)) int32_t  PreviousLeftHandThrowableIndex;

 __declspec(property(get=get_PreviousRightHandThrowableDisabledTime)) float_t  PreviousRightHandThrowableDisabledTime;

 __declspec(property(get=get_PreviousRightHandThrowableIndex)) int32_t  PreviousRightHandThrowableIndex;

/// @brief Field SharableItemInstance, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharableItemInstance, put=__cordl_internal_set_SharableItemInstance)) ::UnityW<::UnityEngine::GameObject>  SharableItemInstance;

/// @brief Field _allObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__allObjects, put=__cordl_internal_set__allObjects)) ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>  _allObjects;

 __declspec(property(get=get_allObjects, put=set_allObjects)) ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>  allObjects;

/// @brief Field chestTransform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestTransform, put=__cordl_internal_set_chestTransform)) ::UnityW<::UnityEngine::Transform>  chestTransform;

/// @brief Field leftArmTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmTransform, put=__cordl_internal_set_leftArmTransform)) ::UnityW<::UnityEngine::Transform>  leftArmTransform;

/// @brief Field leftBackSharableItem, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftBackSharableItem, put=__cordl_internal_set_leftBackSharableItem)) ::UnityW<::GlobalNamespace::WorldShareableItem>  leftBackSharableItem;

/// @brief Field leftBackTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftBackTransform, put=__cordl_internal_set_leftBackTransform)) ::UnityW<::UnityEngine::Transform>  leftBackTransform;

/// @brief Field leftHandThrowables, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandThrowables, put=__cordl_internal_set_leftHandThrowables)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  leftHandThrowables;

/// @brief Field leftHandTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTransform, put=__cordl_internal_set_leftHandTransform)) ::UnityW<::UnityEngine::Transform>  leftHandTransform;

/// @brief Field myRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field objectsToDisable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToDisable, put=__cordl_internal_set_objectsToDisable)) ::System::Collections::Generic::List_1<int32_t>*  objectsToDisable;

/// @brief Field objectsToEnable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToEnable, put=__cordl_internal_set_objectsToEnable)) ::System::Collections::Generic::List_1<int32_t>*  objectsToEnable;

/// @brief Field rightArmTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmTransform, put=__cordl_internal_set_rightArmTransform)) ::UnityW<::UnityEngine::Transform>  rightArmTransform;

/// @brief Field rightBackShareableItem, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightBackShareableItem, put=__cordl_internal_set_rightBackShareableItem)) ::UnityW<::GlobalNamespace::WorldShareableItem>  rightBackShareableItem;

/// @brief Field rightBackTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightBackTransform, put=__cordl_internal_set_rightBackTransform)) ::UnityW<::UnityEngine::Transform>  rightBackTransform;

/// @brief Field rightHandThrowables, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandThrowables, put=__cordl_internal_set_rightHandThrowables)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  rightHandThrowables;

/// @brief Field rightHandTransform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTransform, put=__cordl_internal_set_rightHandTransform)) ::UnityW<::UnityEngine::Transform>  rightHandTransform;

/// @brief Field throwableDisabledIndex, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwableDisabledIndex, put=__cordl_internal_set_throwableDisabledIndex)) ::ArrayW<int32_t>  throwableDisabledIndex;

/// @brief Field throwableDisabledTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwableDisabledTime, put=__cordl_internal_set_throwableDisabledTime)) ::ArrayW<float_t>  throwableDisabledTime;

/// @brief Method AllItemsIndexValid, addr 0x5753210, size 0x30, virtual false, abstract: false, final false
inline bool AllItemsIndexValid(int32_t  allItemsIndex) ;

/// @brief Method AllocateSharableInstance, addr 0x5751e38, size 0x274, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::WorldShareableItem> AllocateSharableInstance(::GlobalNamespace::BodyDockPositions_DropPositions  position, ::GlobalNamespace::NetPlayer*  owner) ;

/// @brief Method Awake, addr 0x5751b28, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeallocateSharableInstance, addr 0x57520ac, size 0x1b8, virtual false, abstract: false, final false
inline void DeallocateSharableInstance(::GlobalNamespace::WorldShareableItem*  worldShareable) ;

/// @brief Method DeallocateSharableInstances, addr 0x5751cdc, size 0x158, virtual false, abstract: false, final false
inline void DeallocateSharableInstances() ;

/// @brief Method DisableAllTransferableItems, addr 0x57530a0, size 0x170, virtual false, abstract: false, final false
inline void DisableAllTransferableItems() ;

/// @brief Method DisableTransferrableItem, addr 0x57538fc, size 0x154, virtual false, abstract: false, final false
inline bool DisableTransferrableItem(::StringW  transferrableItemName) ;

/// @brief Method DisableTransferrableItem, addr 0x5752a70, size 0x128, virtual false, abstract: false, final false
inline void DisableTransferrableItem(int32_t  index) ;

/// @brief Method DropZoneStorageUsed, addr 0x5752274, size 0x2ac, virtual false, abstract: false, final false
inline int32_t DropZoneStorageUsed(::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition) ;

/// @brief Method EnableTransferrableGameObject, addr 0x5752b98, size 0x1e8, virtual false, abstract: false, final false
inline void EnableTransferrableGameObject(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  dropZone, ::GlobalNamespace::TransferrableObject_PositionState  startingPosition) ;

/// @brief Method EnableTransferrableItem, addr 0x5752808, size 0x268, virtual false, abstract: false, final false
inline int32_t EnableTransferrableItem(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  startingPosition, ::GlobalNamespace::TransferrableObject_PositionState  startingState) ;

/// @brief Method FirstAvailablePosition, addr 0x5753280, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DropPositions FirstAvailablePosition(int32_t  allItemIndex) ;

/// @brief Method GetLeftHandThrowable, addr 0x5754480, size 0x2c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetLeftHandThrowable() ;

/// @brief Method GetLeftHandThrowable, addr 0x57544ac, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetLeftHandThrowable(int32_t  throwableIndex) ;

/// @brief Method GetRightHandThrowable, addr 0x5754558, size 0x2c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetRightHandThrowable() ;

/// @brief Method GetRightHandThrowable, addr 0x5754584, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetRightHandThrowable(int32_t  throwableIndex) ;

/// @brief Method IsPositionLeft, addr 0x5752264, size 0x10, virtual false, abstract: false, final false
static inline bool IsPositionLeft(::GlobalNamespace::BodyDockPositions_DropPositions  pos) ;

/// @brief Method ItemActive, addr 0x5752d80, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DropPositions ItemActive(int32_t  allItemsIndex) ;

/// @brief Method ItemPositionInUse, addr 0x5752520, size 0x2a0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TransferrableObject> ItemPositionInUse(::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition) ;

/// @brief Method MapDropPositionToState, addr 0x57527c0, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_PositionState MapDropPositionToState(::GlobalNamespace::BodyDockPositions_DropPositions  pos) ;

/// @brief Method MoveTransferableItem, addr 0x57540ec, size 0x48, virtual false, abstract: false, final false
inline void MoveTransferableItem(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  newPosition, ::GlobalNamespace::TransferrableObject_PositionState  newPositionState) ;

static inline ::GlobalNamespace::BodyDockPositions* New_ctor() ;

/// @brief Method OfflineItemActive, addr 0x5752e0c, size 0x294, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BodyDockPositions_DropPositions OfflineItemActive(int32_t  allItemsIndex) ;

/// @brief Method OnLeftRoom, addr 0x5751e34, size 0x4, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5751ca4, size 0x38, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OppositePosition, addr 0x5753a50, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DropPositions OppositePosition(::GlobalNamespace::BodyDockPositions_DropPositions  pos) ;

/// @brief Method PositionAvailable, addr 0x5753240, size 0x40, virtual false, abstract: false, final false
inline bool PositionAvailable(int32_t  allItemIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  startPos) ;

/// @brief Method RefreshTransferrableItems, addr 0x574b000, size 0x88c, virtual false, abstract: false, final false
inline void RefreshTransferrableItems() ;

/// @brief Method ReturnTransferrableItemIndex, addr 0x575436c, size 0x6c, virtual false, abstract: false, final false
inline int32_t ReturnTransferrableItemIndex(int32_t  allItemsIndex) ;

/// @brief Method ToggleTransferrableItem, addr 0x5753cb4, size 0x438, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DockingResult* ToggleTransferrableItem(::StringW  transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions  startingPos, bool  bothHands) ;

/// @brief Method ToggleWithHandedness, addr 0x5753a9c, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DockingResult* ToggleWithHandedness(::StringW  transferrableItemName, bool  isLeftHand, bool  bothHands) ;

/// @brief Method TransferrableItem, addr 0x57538cc, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TransferrableObject> TransferrableItem(int32_t  allItemsIndex) ;

/// @brief Method TransferrableItemActive, addr 0x5753748, size 0x18, virtual false, abstract: false, final false
inline bool TransferrableItemActive(int32_t  allItemsIndex) ;

/// @brief Method TransferrableItemActive, addr 0x57535ec, size 0x15c, virtual false, abstract: false, final false
inline bool TransferrableItemActive(::StringW  transferrableItemName) ;

/// @brief Method TransferrableItemActiveAtPos, addr 0x5753760, size 0x168, virtual false, abstract: false, final false
inline bool TransferrableItemActiveAtPos(::StringW  transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition) ;

/// @brief Method TransferrableItemDisable, addr 0x57532dc, size 0x38, virtual false, abstract: false, final false
inline int32_t TransferrableItemDisable(int32_t  allItemsIndex) ;

/// @brief Method TransferrableItemDisableAtPosition, addr 0x5753314, size 0x28, virtual false, abstract: false, final false
inline void TransferrableItemDisableAtPosition(::GlobalNamespace::BodyDockPositions_DropPositions  dropPositions) ;

/// @brief Method TransferrableItemEnableAtPosition, addr 0x575333c, size 0x10c, virtual false, abstract: false, final false
inline void TransferrableItemEnableAtPosition(::StringW  itemName, ::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition) ;

/// @brief Method TransferrableItemPosition, addr 0x57538c8, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DropPositions TransferrableItemPosition(int32_t  allItemsIndex) ;

/// @brief Method TransferrableObjectIndexFromName, addr 0x5753448, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* TransferrableObjectIndexFromName(::StringW  transObjectName) ;

/// @brief Method UpdateHandState, addr 0x5754134, size 0x238, virtual false, abstract: false, final false
inline void UpdateHandState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_SharableItemInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_SharableItemInstance() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>> const& __cordl_internal_get__allObjects() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>& __cordl_internal_get__allObjects() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArmTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArmTransform() ;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& __cordl_internal_get_leftBackSharableItem() const;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& __cordl_internal_get_leftBackSharableItem() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftBackTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftBackTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_leftHandThrowables() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_leftHandThrowables() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_objectsToDisable() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_objectsToDisable() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_objectsToEnable() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_objectsToEnable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArmTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArmTransform() ;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& __cordl_internal_get_rightBackShareableItem() const;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& __cordl_internal_get_rightBackShareableItem() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightBackTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightBackTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_rightHandThrowables() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_rightHandThrowables() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_throwableDisabledIndex() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_throwableDisabledIndex() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_throwableDisabledTime() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_throwableDisabledTime() ;

constexpr void __cordl_internal_set_SharableItemInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__allObjects(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>  value) ;

constexpr void __cordl_internal_set_chestTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftArmTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftBackSharableItem(::UnityW<::GlobalNamespace::WorldShareableItem>  value) ;

constexpr void __cordl_internal_set_leftBackTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHandThrowables(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_objectsToDisable(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_objectsToEnable(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_rightArmTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightBackShareableItem(::UnityW<::GlobalNamespace::WorldShareableItem>  value) ;

constexpr void __cordl_internal_set_rightBackTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandThrowables(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_throwableDisabledIndex(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_throwableDisabledTime(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x5754630, size 0x134, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PreviousLeftHandThrowableDisabledTime, addr 0x575442c, size 0x28, virtual false, abstract: false, final false
inline float_t get_PreviousLeftHandThrowableDisabledTime() ;

/// @brief Method get_PreviousLeftHandThrowableIndex, addr 0x57543d8, size 0x28, virtual false, abstract: false, final false
inline int32_t get_PreviousLeftHandThrowableIndex() ;

/// @brief Method get_PreviousRightHandThrowableDisabledTime, addr 0x5754454, size 0x2c, virtual false, abstract: false, final false
inline float_t get_PreviousRightHandThrowableDisabledTime() ;

/// @brief Method get_PreviousRightHandThrowableIndex, addr 0x5754400, size 0x2c, virtual false, abstract: false, final false
inline int32_t get_PreviousRightHandThrowableIndex() ;

/// @brief Method get_allObjects, addr 0x5751b18, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>> get_allObjects() ;

/// @brief Method set_allObjects, addr 0x5751b20, size 0x8, virtual false, abstract: false, final false
inline void set_allObjects(::ArrayW<::GlobalNamespace::TransferrableObject*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyDockPositions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyDockPositions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyDockPositions(BodyDockPositions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyDockPositions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyDockPositions(BodyDockPositions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1314};

/// @brief Field myRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field leftHandThrowables, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___leftHandThrowables;

/// @brief Field rightHandThrowables, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___rightHandThrowables;

/// [FormerlySerializedAs("allObjects")]
/// @brief Field _allObjects, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>  ____allObjects;

/// @brief Field objectsToEnable, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___objectsToEnable;

/// @brief Field objectsToDisable, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___objectsToDisable;

/// @brief Field leftHandTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandTransform;

/// @brief Field rightHandTransform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandTransform;

/// @brief Field chestTransform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chestTransform;

/// @brief Field leftArmTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArmTransform;

/// @brief Field rightArmTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArmTransform;

/// @brief Field leftBackTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftBackTransform;

/// @brief Field rightBackTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightBackTransform;

/// @brief Field leftBackSharableItem, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldShareableItem>  ___leftBackSharableItem;

/// @brief Field rightBackShareableItem, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldShareableItem>  ___rightBackShareableItem;

/// @brief Field SharableItemInstance, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___SharableItemInstance;

/// @brief Field throwableDisabledIndex, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___throwableDisabledIndex;

/// @brief Field throwableDisabledTime, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___throwableDisabledTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___myRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___leftHandThrowables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___rightHandThrowables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ____allObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___objectsToEnable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___objectsToDisable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___leftHandTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___rightHandTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___chestTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___leftArmTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___rightArmTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___leftBackTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___rightBackTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___leftBackSharableItem) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___rightBackShareableItem) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___SharableItemInstance) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___throwableDisabledIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions, ___throwableDisabledTime) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyDockPositions) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BodyDockPositions/DockingResult
class CORDL_TYPE BodyDockPositions_DockingResult : public ::System::Object {
public:
// Declarations
/// @brief Field dockedPosition, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockedPosition, put=__cordl_internal_set_dockedPosition)) ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  dockedPosition;

/// @brief Field positionsDisabled, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionsDisabled, put=__cordl_internal_set_positionsDisabled)) ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  positionsDisabled;

static inline ::GlobalNamespace::BodyDockPositions_DockingResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>* const& __cordl_internal_get_dockedPosition() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*& __cordl_internal_get_dockedPosition() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>* const& __cordl_internal_get_positionsDisabled() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*& __cordl_internal_get_positionsDisabled() ;

constexpr void __cordl_internal_set_dockedPosition(::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  value) ;

constexpr void __cordl_internal_set_positionsDisabled(::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  value) ;

/// @brief Method .ctor, addr 0x5753c00, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyDockPositions_DockingResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyDockPositions_DockingResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyDockPositions_DockingResult(BodyDockPositions_DockingResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyDockPositions_DockingResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyDockPositions_DockingResult(BodyDockPositions_DockingResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1313};

/// @brief Field positionsDisabled, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  ___positionsDisabled;

/// @brief Field dockedPosition, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  ___dockedPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyDockPositions_DockingResult, ___positionsDisabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyDockPositions_DockingResult, ___dockedPosition) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyDockPositions_DockingResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
