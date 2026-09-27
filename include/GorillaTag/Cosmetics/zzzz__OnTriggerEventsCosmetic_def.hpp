#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnTriggerEventsCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_HandSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OnTriggerEventsCosmetic)
namespace GlobalNamespace {
struct OnTriggerEventsCosmetic_EventType;
}
namespace GlobalNamespace {
struct OnTriggerEventsCosmetic_HandSource;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IHeldItem;
}
namespace GorillaTag::Cosmetics {
class OnTriggerEventsCosmetic_Listener;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class OnTriggerEventsCosmetic;
}
namespace GorillaTag::Cosmetics {
class OnTriggerEventsCosmetic_Listener;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*);
MARK_REF_T(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*, "GorillaTag.Cosmetics", "OnTriggerEventsCosmetic");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*, "GorillaTag.Cosmetics", "OnTriggerEventsCosmetic/Listener");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GorillaTag.Cosmetics.OnTriggerEventsCosmetic::Listener, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.OnTriggerEventsCosmetic
class CORDL_TYPE OnTriggerEventsCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventType = ::GlobalNamespace::OnTriggerEventsCosmetic_EventType;

using HandSource = ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource;

using Listener = ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener;

/// @brief Field enterListeners, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterListeners, put=__cordl_internal_set_enterListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  enterListeners;

/// @brief Field eventListeners, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventListeners, put=__cordl_internal_set_eventListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  eventListeners;

/// @brief Field exitListeners, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitListeners, put=__cordl_internal_set_exitListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  exitListeners;

/// @brief Field myCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field myHeldItem, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHeldItem, put=__cordl_internal_set_myHeldItem)) ::GorillaTag::Cosmetics::IHeldItem*  myHeldItem;

/// @brief Field parentTransferable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Field rig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field stayListeners, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stayListeners, put=__cordl_internal_set_stayListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  stayListeners;

/// @brief Method Awake, addr 0x5d9baa0, size 0x81c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompareTagAny, addr 0x5d9c860, size 0x188, virtual false, abstract: false, final false
static inline bool CompareTagAny(::UnityEngine::GameObject*  go, ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet) ;

/// @brief Method Dispatch, addr 0x5d9c3bc, size 0x424, virtual false, abstract: false, final false
inline void Dispatch(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  listeners, ::UnityEngine::Collider*  other) ;

/// @brief Method IsMyItem, addr 0x5d9ba18, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method IsOtherUsable, addr 0x5d9c2fc, size 0xc0, virtual false, abstract: false, final false
static inline bool IsOtherUsable(::UnityEngine::Collider*  other) ;

/// @brief Method IsTagValid, addr 0x5d9c9e8, size 0x64, virtual false, abstract: false, final false
inline bool IsTagValid(::UnityEngine::GameObject*  obj, ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*  listener) ;

static inline ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d9c2bc, size 0x40, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d9c820, size 0x40, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5d9c7e0, size 0x40, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& __cordl_internal_get_enterListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& __cordl_internal_get_enterListeners() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& __cordl_internal_get_eventListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& __cordl_internal_get_eventListeners() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& __cordl_internal_get_exitListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& __cordl_internal_get_exitListeners() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::GorillaTag::Cosmetics::IHeldItem* const& __cordl_internal_get_myHeldItem() const;

constexpr ::GorillaTag::Cosmetics::IHeldItem*& __cordl_internal_get_myHeldItem() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& __cordl_internal_get_stayListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& __cordl_internal_get_stayListeners() ;

constexpr void __cordl_internal_set_enterListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_exitListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_stayListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value) ;

/// @brief Method .ctor, addr 0x5d9ca4c, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnTriggerEventsCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnTriggerEventsCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnTriggerEventsCosmetic(OnTriggerEventsCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnTriggerEventsCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnTriggerEventsCosmetic(OnTriggerEventsCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4959};

/// [Tooltip("List of per-condition listeners. Each entry specifies when (Enter/Stay/Exit), what to trigger with (layers/tags), and which UnityEvents to fire.")]
/// @brief Field eventListeners, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  ___eventListeners;

/// @brief Field enterListeners, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  ___enterListeners;

/// @brief Field stayListeners, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  ___stayListeners;

/// @brief Field exitListeners, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  ___exitListeners;

/// @brief Field myCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// @brief Field rig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field parentTransferable, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

/// @brief Field myHeldItem, offset: 0x58, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::IHeldItem*  ___myHeldItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___eventListeners) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___enterListeners) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___stayListeners) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___exitListeners) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___myCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___rig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___parentTransferable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic, ___myHeldItem) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.OnTriggerEventsCosmetic::EventType, GorillaTag.Cosmetics.OnTriggerEventsCosmetic::HandSource, System.Object, UnityEngine.LayerMask
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.OnTriggerEventsCosmetic/Listener
class CORDL_TYPE OnTriggerEventsCosmetic_Listener : public ::System::Object {
public:
// Declarations
/// @brief Field eventType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::OnTriggerEventsCosmetic_EventType  eventType;

/// @brief Field fireOnlyWhileHeld, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireOnlyWhileHeld, put=__cordl_internal_set_fireOnlyWhileHeld)) bool  fireOnlyWhileHeld;

/// @brief Field handSource, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSource, put=__cordl_internal_set_handSource)) ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource  handSource;

/// @brief Field listenerComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerComponent, put=__cordl_internal_set_listenerComponent)) ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*  listenerComponent;

/// @brief Field listenerComponentContactPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerComponentContactPoint, put=__cordl_internal_set_listenerComponentContactPoint)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  listenerComponentContactPoint;

/// @brief Field onTriggeredVRRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTriggeredVRRig, put=__cordl_internal_set_onTriggeredVRRig)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  onTriggeredVRRig;

/// @brief Field syncForEveryoneInRoom, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncForEveryoneInRoom, put=__cordl_internal_set_syncForEveryoneInRoom)) bool  syncForEveryoneInRoom;

/// @brief Field tagSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagSet, put=__cordl_internal_set_tagSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet;

/// @brief Field triggerLayerMask, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerLayerMask, put=__cordl_internal_set_triggerLayerMask)) ::UnityEngine::LayerMask  triggerLayerMask;

/// @brief Field triggerTagsList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerTagsList, put=__cordl_internal_set_triggerTagsList)) ::System::Collections::Generic::List_1<::StringW>*  triggerTagsList;

static inline ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener* New_ctor() ;

constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType& __cordl_internal_get_eventType() ;

constexpr bool const& __cordl_internal_get_fireOnlyWhileHeld() const;

constexpr bool& __cordl_internal_get_fireOnlyWhileHeld() ;

constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource const& __cordl_internal_get_handSource() const;

constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource& __cordl_internal_get_handSource() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_listenerComponent() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_listenerComponent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_listenerComponentContactPoint() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_listenerComponentContactPoint() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_onTriggeredVRRig() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_onTriggeredVRRig() ;

constexpr bool const& __cordl_internal_get_syncForEveryoneInRoom() const;

constexpr bool& __cordl_internal_get_syncForEveryoneInRoom() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_tagSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_tagSet() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_triggerLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_triggerLayerMask() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_triggerTagsList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_triggerTagsList() ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::OnTriggerEventsCosmetic_EventType  value) ;

constexpr void __cordl_internal_set_fireOnlyWhileHeld(bool  value) ;

constexpr void __cordl_internal_set_handSource(::GlobalNamespace::OnTriggerEventsCosmetic_HandSource  value) ;

constexpr void __cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_listenerComponentContactPoint(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onTriggeredVRRig(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_syncForEveryoneInRoom(bool  value) ;

constexpr void __cordl_internal_set_tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_triggerLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_triggerTagsList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5d9cbf8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnTriggerEventsCosmetic_Listener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnTriggerEventsCosmetic_Listener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnTriggerEventsCosmetic_Listener(OnTriggerEventsCosmetic_Listener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnTriggerEventsCosmetic_Listener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnTriggerEventsCosmetic_Listener(OnTriggerEventsCosmetic_Listener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4956};

/// [Tooltip("Only trigger interactions with objects on these layers.")]
/// @brief Field triggerLayerMask, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___triggerLayerMask;

/// [Tooltip("Optional tag whitelist. If non-empty, triggers must match at least one of these tags.")]
/// @brief Field triggerTagsList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___triggerTagsList;

/// [Tooltip("Choose which trigger phase invokes this listener: Enter, Stay, or Exit.")]
/// @brief Field eventType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OnTriggerEventsCosmetic_EventType  ___eventType;

/// @brief Field listenerComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*  ___listenerComponent;

/// @brief Field listenerComponentContactPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___listenerComponentContactPoint;

/// @brief Field onTriggeredVRRig, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___onTriggeredVRRig;

/// [Tooltip("If true, fire for everyone in the room. If false, only fire when this item is owned locally (offline rig).")]
/// @brief Field syncForEveryoneInRoom, offset: 0x40, size: 0x1, def value: None
 bool  ___syncForEveryoneInRoom;

/// [Tooltip("If true, only fire while this item is held. Requires a TransferrableObject on this object or a parent.")]
/// @brief Field fireOnlyWhileHeld, offset: 0x41, size: 0x1, def value: None
 bool  ___fireOnlyWhileHeld;

/// [Tooltip("Which hand determines the isLeftHand argument passed to the event.")]
/// @brief Field handSource, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource  ___handSource;

/// @brief Field tagSet, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___tagSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___triggerLayerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___triggerTagsList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___eventType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___listenerComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___listenerComponentContactPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___onTriggeredVRRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___syncForEveryoneInRoom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___fireOnlyWhileHeld) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___handSource) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener, ___tagSet) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
