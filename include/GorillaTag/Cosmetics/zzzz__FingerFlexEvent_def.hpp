#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_FingerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent)
namespace GlobalNamespace {
struct FingerFlexEvent_EventType;
}
namespace GlobalNamespace {
struct FingerFlexEvent_FingerType;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class FingerFlexEvent_Listener;
}
namespace GorillaTag::Cosmetics {
class IHeldItem;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class FingerFlexEvent;
}
namespace GorillaTag::Cosmetics {
class FingerFlexEvent_Listener;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::FingerFlexEvent*);
MARK_REF_T(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::FingerFlexEvent*, "GorillaTag.Cosmetics", "FingerFlexEvent");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*, "GorillaTag.Cosmetics", "FingerFlexEvent/Listener");
// Dependencies GorillaTag.Cosmetics.FingerFlexEvent::FingerType, GorillaTag.Cosmetics.FingerFlexEvent::Listener, MonoBehaviourTick
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent
class CORDL_TYPE FingerFlexEvent : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using EventType = ::GlobalNamespace::FingerFlexEvent_EventType;

using FingerType = ::GlobalNamespace::FingerFlexEvent_FingerType;

using Listener = ::GorillaTag::Cosmetics::FingerFlexEvent_Listener;

/// @brief Field _rig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field eventListeners, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventListeners, put=__cordl_internal_set_eventListeners)) ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>  eventListeners;

/// @brief Field fingerType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerType, put=__cordl_internal_set_fingerType)) ::GlobalNamespace::FingerFlexEvent_FingerType  fingerType;

/// @brief Field ignoreTransferable, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreTransferable, put=__cordl_internal_set_ignoreTransferable)) bool  ignoreTransferable;

/// @brief Field myHeldItem, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHeldItem, put=__cordl_internal_set_myHeldItem)) ::GorillaTag::Cosmetics::IHeldItem*  myHeldItem;

/// @brief Field parentTransferable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Method Awake, addr 0x5d96860, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckFingerValue, addr 0x5d96f7c, size 0x130, virtual false, abstract: false, final false
inline void CheckFingerValue(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener, float_t  fingerValue, bool  isLeft, ::by_ref<float_t>  lastValue) ;

/// @brief Method FingerFlexValidation, addr 0x5d96e54, size 0x128, virtual false, abstract: false, final false
inline bool FingerFlexValidation(bool  isLeftHand) ;

/// @brief Method FireEvents, addr 0x5d96a04, size 0x30c, virtual false, abstract: false, final false
inline void FireEvents(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener) ;

/// @brief Method FireEvents, addr 0x5d96d10, size 0x144, virtual false, abstract: false, final false
inline void FireEvents(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener, float_t  leftFinger, float_t  rightFinger) ;

/// @brief Method IsMyItem, addr 0x5d96920, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

static inline ::GorillaTag::Cosmetics::FingerFlexEvent* New_ctor() ;

/// @brief Method Tick, addr 0x5d969a8, size 0x5c, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*> const& __cordl_internal_get_eventListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>& __cordl_internal_get_eventListeners() ;

constexpr ::GlobalNamespace::FingerFlexEvent_FingerType const& __cordl_internal_get_fingerType() const;

constexpr ::GlobalNamespace::FingerFlexEvent_FingerType& __cordl_internal_get_fingerType() ;

constexpr bool const& __cordl_internal_get_ignoreTransferable() const;

constexpr bool& __cordl_internal_get_ignoreTransferable() ;

constexpr ::GorillaTag::Cosmetics::IHeldItem* const& __cordl_internal_get_myHeldItem() const;

constexpr ::GorillaTag::Cosmetics::IHeldItem*& __cordl_internal_get_myHeldItem() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>  value) ;

constexpr void __cordl_internal_set_fingerType(::GlobalNamespace::FingerFlexEvent_FingerType  value) ;

constexpr void __cordl_internal_set_ignoreTransferable(bool  value) ;

constexpr void __cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d970ac, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexEvent(FingerFlexEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexEvent(FingerFlexEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4934};

/// [SerializeField]
/// @brief Field ignoreTransferable, offset: 0x21, size: 0x1, def value: None
 bool  ___ignoreTransferable;

/// [SerializeField]
/// @brief Field fingerType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::FingerFlexEvent_FingerType  ___fingerType;

/// @brief Field eventListeners, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>  ___eventListeners;

/// @brief Field _rig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// @brief Field parentTransferable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

/// @brief Field myHeldItem, offset: 0x40, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::IHeldItem*  ___myHeldItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ___ignoreTransferable) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ___fingerType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ___eventListeners) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ____rig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ___parentTransferable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent, ___myHeldItem) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::FingerFlexEvent) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.FingerFlexEvent::EventType, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent/Listener
class CORDL_TYPE FingerFlexEvent_Listener : public ::System::Object {
public:
// Declarations
/// @brief Field checkLeftHand, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkLeftHand, put=__cordl_internal_set_checkLeftHand)) bool  checkLeftHand;

/// @brief Field eventType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::FingerFlexEvent_EventType  eventType;

/// @brief Field fingerFlexValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerFlexValue, put=__cordl_internal_set_fingerFlexValue)) float_t  fingerFlexValue;

/// @brief Field fingerLeftLastValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerLeftLastValue, put=__cordl_internal_set_fingerLeftLastValue)) float_t  fingerLeftLastValue;

/// @brief Field fingerReleaseValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerReleaseValue, put=__cordl_internal_set_fingerReleaseValue)) float_t  fingerReleaseValue;

/// @brief Field fingerRightLastValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerRightLastValue, put=__cordl_internal_set_fingerRightLastValue)) float_t  fingerRightLastValue;

/// @brief Field fireOnlyWhileHeld, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireOnlyWhileHeld, put=__cordl_internal_set_fireOnlyWhileHeld)) bool  fireOnlyWhileHeld;

/// @brief Field frameCounter, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCounter, put=__cordl_internal_set_frameCounter)) int32_t  frameCounter;

/// @brief Field frameInterval, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameInterval, put=__cordl_internal_set_frameInterval)) int32_t  frameInterval;

/// @brief Field listenerComponent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerComponent, put=__cordl_internal_set_listenerComponent)) ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  listenerComponent;

/// @brief Field syncForEveryoneInRoom, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncForEveryoneInRoom, put=__cordl_internal_set_syncForEveryoneInRoom)) bool  syncForEveryoneInRoom;

static inline ::GorillaTag::Cosmetics::FingerFlexEvent_Listener* New_ctor() ;

constexpr bool const& __cordl_internal_get_checkLeftHand() const;

constexpr bool& __cordl_internal_get_checkLeftHand() ;

constexpr ::GlobalNamespace::FingerFlexEvent_EventType const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::FingerFlexEvent_EventType& __cordl_internal_get_eventType() ;

constexpr float_t const& __cordl_internal_get_fingerFlexValue() const;

constexpr float_t& __cordl_internal_get_fingerFlexValue() ;

constexpr float_t const& __cordl_internal_get_fingerLeftLastValue() const;

constexpr float_t& __cordl_internal_get_fingerLeftLastValue() ;

constexpr float_t const& __cordl_internal_get_fingerReleaseValue() const;

constexpr float_t& __cordl_internal_get_fingerReleaseValue() ;

constexpr float_t const& __cordl_internal_get_fingerRightLastValue() const;

constexpr float_t& __cordl_internal_get_fingerRightLastValue() ;

constexpr bool const& __cordl_internal_get_fireOnlyWhileHeld() const;

constexpr bool& __cordl_internal_get_fireOnlyWhileHeld() ;

constexpr int32_t const& __cordl_internal_get_frameCounter() const;

constexpr int32_t& __cordl_internal_get_frameCounter() ;

constexpr int32_t const& __cordl_internal_get_frameInterval() const;

constexpr int32_t& __cordl_internal_get_frameInterval() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& __cordl_internal_get_listenerComponent() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& __cordl_internal_get_listenerComponent() ;

constexpr bool const& __cordl_internal_get_syncForEveryoneInRoom() const;

constexpr bool& __cordl_internal_get_syncForEveryoneInRoom() ;

constexpr void __cordl_internal_set_checkLeftHand(bool  value) ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::FingerFlexEvent_EventType  value) ;

constexpr void __cordl_internal_set_fingerFlexValue(float_t  value) ;

constexpr void __cordl_internal_set_fingerLeftLastValue(float_t  value) ;

constexpr void __cordl_internal_set_fingerReleaseValue(float_t  value) ;

constexpr void __cordl_internal_set_fingerRightLastValue(float_t  value) ;

constexpr void __cordl_internal_set_fireOnlyWhileHeld(bool  value) ;

constexpr void __cordl_internal_set_frameCounter(int32_t  value) ;

constexpr void __cordl_internal_set_frameInterval(int32_t  value) ;

constexpr void __cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value) ;

constexpr void __cordl_internal_set_syncForEveryoneInRoom(bool  value) ;

/// @brief Method .ctor, addr 0x5d97118, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexEvent_Listener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent_Listener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexEvent_Listener(FingerFlexEvent_Listener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent_Listener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexEvent_Listener(FingerFlexEvent_Listener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4931};

/// @brief Field eventType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::FingerFlexEvent_EventType  ___eventType;

/// @brief Field listenerComponent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  ___listenerComponent;

/// @brief Field fingerFlexValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___fingerFlexValue;

/// @brief Field fingerReleaseValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___fingerReleaseValue;

/// [Tooltip("How many frames should pass to fire a finger flex stayed event")]
/// @brief Field frameInterval, offset: 0x28, size: 0x4, def value: None
 int32_t  ___frameInterval;

/// [Tooltip("This event will be fired for everyone in the room (synced) by default unless you uncheck this box so that it will be fired only for the local player.")]
/// @brief Field syncForEveryoneInRoom, offset: 0x2c, size: 0x1, def value: None
 bool  ___syncForEveryoneInRoom;

/// [Tooltip("Fire these events only when the item is held in hand, only works if there is a transferable component somewhere on the object or its parent.")]
/// @brief Field fireOnlyWhileHeld, offset: 0x2d, size: 0x1, def value: None
 bool  ___fireOnlyWhileHeld;

/// [Tooltip("Whether to check the left hand or the right hand, only works if \"ignoreTransferable\" is true.")]
/// @brief Field checkLeftHand, offset: 0x2e, size: 0x1, def value: None
 bool  ___checkLeftHand;

/// @brief Field frameCounter, offset: 0x30, size: 0x4, def value: None
 int32_t  ___frameCounter;

/// @brief Field fingerRightLastValue, offset: 0x34, size: 0x4, def value: None
 float_t  ___fingerRightLastValue;

/// @brief Field fingerLeftLastValue, offset: 0x38, size: 0x4, def value: None
 float_t  ___fingerLeftLastValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___eventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___listenerComponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___fingerFlexValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___fingerReleaseValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___frameInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___syncForEveryoneInRoom) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___fireOnlyWhileHeld) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___checkLeftHand) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___frameCounter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___fingerRightLastValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener, ___fingerLeftLastValue) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::FingerFlexEvent_Listener) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
