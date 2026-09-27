#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnCollisionEventsCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_HandSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OnCollisionEventsCosmetic)
namespace GlobalNamespace {
struct OnCollisionEventsCosmetic_EventType;
}
namespace GlobalNamespace {
struct OnCollisionEventsCosmetic_HandSource;
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
class OnCollisionEventsCosmetic_Listener;
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
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class OnCollisionEventsCosmetic;
}
namespace GorillaTag::Cosmetics {
class OnCollisionEventsCosmetic_Listener;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*);
MARK_REF_T(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*, "GorillaTag.Cosmetics", "OnCollisionEventsCosmetic");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*, "GorillaTag.Cosmetics", "OnCollisionEventsCosmetic/Listener");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GorillaTag.Cosmetics.OnCollisionEventsCosmetic::Listener, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.OnCollisionEventsCosmetic
class CORDL_TYPE OnCollisionEventsCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventType = ::GlobalNamespace::OnCollisionEventsCosmetic_EventType;

using HandSource = ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource;

using Listener = ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener;

/// @brief Field enterListeners, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterListeners, put=__cordl_internal_set_enterListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  enterListeners;

/// @brief Field eventListeners, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventListeners, put=__cordl_internal_set_eventListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  eventListeners;

/// @brief Field exitListeners, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitListeners, put=__cordl_internal_set_exitListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  exitListeners;

/// @brief Field myCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field myHeldItem, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHeldItem, put=__cordl_internal_set_myHeldItem)) ::GorillaTag::Cosmetics::IHeldItem*  myHeldItem;

/// @brief Field parentTransferable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Field rig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field stayListeners, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stayListeners, put=__cordl_internal_set_stayListeners)) ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  stayListeners;

/// @brief Method Awake, addr 0x5d9a8d0, size 0x64c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompareTagAny, addr 0x5d9b5f0, size 0x188, virtual false, abstract: false, final false
static inline bool CompareTagAny(::UnityEngine::GameObject*  go, ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet) ;

/// @brief Method Dispatch, addr 0x5d9b034, size 0x53c, virtual false, abstract: false, final false
inline void Dispatch(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  listeners, ::UnityEngine::Collision*  collision) ;

/// @brief Method IsCollisionUsable, addr 0x5d9af5c, size 0xd8, virtual false, abstract: false, final false
static inline bool IsCollisionUsable(::UnityEngine::Collision*  collision) ;

/// @brief Method IsMyItem, addr 0x5d9a848, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method IsTagValid, addr 0x5d9b778, size 0x64, virtual false, abstract: false, final false
inline bool IsTagValid(::UnityEngine::GameObject*  obj, ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*  listener) ;

static inline ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5d9af1c, size 0x40, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x5d9b5b0, size 0x40, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionStay, addr 0x5d9b570, size 0x40, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& __cordl_internal_get_enterListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& __cordl_internal_get_enterListeners() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& __cordl_internal_get_eventListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& __cordl_internal_get_eventListeners() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& __cordl_internal_get_exitListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& __cordl_internal_get_exitListeners() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::GorillaTag::Cosmetics::IHeldItem* const& __cordl_internal_get_myHeldItem() const;

constexpr ::GorillaTag::Cosmetics::IHeldItem*& __cordl_internal_get_myHeldItem() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& __cordl_internal_get_stayListeners() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& __cordl_internal_get_stayListeners() ;

constexpr void __cordl_internal_set_enterListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_exitListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_stayListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value) ;

/// @brief Method .ctor, addr 0x5d9b7dc, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCollisionEventsCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCollisionEventsCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCollisionEventsCosmetic(OnCollisionEventsCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCollisionEventsCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCollisionEventsCosmetic(OnCollisionEventsCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4955};

/// [Tooltip("List of per-condition listeners. Each entry specifies when (Enter/Stay/Exit), what to collide with (layers/tags), and which UnityEvents to fire.")]
/// @brief Field eventListeners, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  ___eventListeners;

/// @brief Field enterListeners, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  ___enterListeners;

/// @brief Field stayListeners, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  ___stayListeners;

/// @brief Field exitListeners, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  ___exitListeners;

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
static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___eventListeners) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___enterListeners) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___stayListeners) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___exitListeners) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___myCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___rig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___parentTransferable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic, ___myHeldItem) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.OnCollisionEventsCosmetic::EventType, GorillaTag.Cosmetics.OnCollisionEventsCosmetic::HandSource, System.Object, UnityEngine.LayerMask
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.OnCollisionEventsCosmetic/Listener
class CORDL_TYPE OnCollisionEventsCosmetic_Listener : public ::System::Object {
public:
// Declarations
/// @brief Field collisionLayerMask, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayerMask, put=__cordl_internal_set_collisionLayerMask)) ::UnityEngine::LayerMask  collisionLayerMask;

/// @brief Field collisionTagsList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionTagsList, put=__cordl_internal_set_collisionTagsList)) ::System::Collections::Generic::List_1<::StringW>*  collisionTagsList;

/// @brief Field eventType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::OnCollisionEventsCosmetic_EventType  eventType;

/// @brief Field fireOnlyWhileHeld, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireOnlyWhileHeld, put=__cordl_internal_set_fireOnlyWhileHeld)) bool  fireOnlyWhileHeld;

/// @brief Field handSource, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSource, put=__cordl_internal_set_handSource)) ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource  handSource;

/// @brief Field listenerComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerComponent, put=__cordl_internal_set_listenerComponent)) ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*  listenerComponent;

/// @brief Field listenerComponentContactPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerComponentContactPoint, put=__cordl_internal_set_listenerComponentContactPoint)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  listenerComponentContactPoint;

/// @brief Field onCollidedVRRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCollidedVRRig, put=__cordl_internal_set_onCollidedVRRig)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  onCollidedVRRig;

/// @brief Field syncForEveryoneInRoom, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncForEveryoneInRoom, put=__cordl_internal_set_syncForEveryoneInRoom)) bool  syncForEveryoneInRoom;

/// @brief Field tagSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagSet, put=__cordl_internal_set_tagSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet;

static inline ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener* New_ctor() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayerMask() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_collisionTagsList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_collisionTagsList() ;

constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType& __cordl_internal_get_eventType() ;

constexpr bool const& __cordl_internal_get_fireOnlyWhileHeld() const;

constexpr bool& __cordl_internal_get_fireOnlyWhileHeld() ;

constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource const& __cordl_internal_get_handSource() const;

constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource& __cordl_internal_get_handSource() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>* const& __cordl_internal_get_listenerComponent() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*& __cordl_internal_get_listenerComponent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_listenerComponentContactPoint() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_listenerComponentContactPoint() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_onCollidedVRRig() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_onCollidedVRRig() ;

constexpr bool const& __cordl_internal_get_syncForEveryoneInRoom() const;

constexpr bool& __cordl_internal_get_syncForEveryoneInRoom() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_tagSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_tagSet() ;

constexpr void __cordl_internal_set_collisionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_collisionTagsList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::OnCollisionEventsCosmetic_EventType  value) ;

constexpr void __cordl_internal_set_fireOnlyWhileHeld(bool  value) ;

constexpr void __cordl_internal_set_handSource(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource  value) ;

constexpr void __cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*  value) ;

constexpr void __cordl_internal_set_listenerComponentContactPoint(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onCollidedVRRig(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_syncForEveryoneInRoom(bool  value) ;

constexpr void __cordl_internal_set_tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5d9b988, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCollisionEventsCosmetic_Listener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCollisionEventsCosmetic_Listener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCollisionEventsCosmetic_Listener(OnCollisionEventsCosmetic_Listener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCollisionEventsCosmetic_Listener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCollisionEventsCosmetic_Listener(OnCollisionEventsCosmetic_Listener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4952};

/// [Tooltip("Only collisions with objects on these layers will be considered.")]
/// @brief Field collisionLayerMask, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayerMask;

/// [Tooltip("Optional tag whitelist. If non-empty, collisions must match at least one of these tags.")]
/// @brief Field collisionTagsList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___collisionTagsList;

/// [Tooltip("Choose which collision phase triggers this listener: Enter, Stay, or Exit.")]
/// @brief Field eventType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OnCollisionEventsCosmetic_EventType  ___eventType;

/// @brief Field listenerComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*  ___listenerComponent;

/// @brief Field listenerComponentContactPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___listenerComponentContactPoint;

/// @brief Field onCollidedVRRig, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___onCollidedVRRig;

/// [Tooltip("If true, fire for everyone in the room. If false, only fire when this item is owned locally (offline rig).")]
/// @brief Field syncForEveryoneInRoom, offset: 0x40, size: 0x1, def value: None
 bool  ___syncForEveryoneInRoom;

/// [Tooltip("If true, only fire while this item is held. Requires a TransferrableObject on this object or a parent.")]
/// @brief Field fireOnlyWhileHeld, offset: 0x41, size: 0x1, def value: None
 bool  ___fireOnlyWhileHeld;

/// [Tooltip("Which hand determines the isLeftHand argument passed to the event.")]
/// @brief Field handSource, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource  ___handSource;

/// @brief Field tagSet, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___tagSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___collisionLayerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___collisionTagsList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___eventType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___listenerComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___listenerComponentContactPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___onCollidedVRRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___syncForEveryoneInRoom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___fireOnlyWhileHeld) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___handSource) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener, ___tagSet) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
