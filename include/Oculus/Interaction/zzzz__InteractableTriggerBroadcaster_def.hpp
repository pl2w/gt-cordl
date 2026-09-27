#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableTriggerBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractableTriggerBroadcaster)
namespace Oculus::Interaction {
class IInteractable;
}
namespace Oculus::Interaction {
class InteractableTriggerBroadcaster___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractableTriggerBroadcaster;
}
namespace Oculus::Interaction {
class InteractableTriggerBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableTriggerBroadcaster*);
MARK_REF_T(::Oculus::Interaction::InteractableTriggerBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableTriggerBroadcaster*, "Oculus.Interaction", "InteractableTriggerBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableTriggerBroadcaster___c*, "Oculus.Interaction", "InteractableTriggerBroadcaster/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableTriggerBroadcaster
class CORDL_TYPE InteractableTriggerBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::InteractableTriggerBroadcaster___c;

/// @brief Field WhenTriggerEntered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenTriggerEntered, put=__cordl_internal_set_WhenTriggerEntered)) ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  WhenTriggerEntered;

/// @brief Field WhenTriggerExited, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenTriggerExited, put=__cordl_internal_set_WhenTriggerExited)) ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  WhenTriggerExited;

/// @brief Field _broadcasters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__broadcasters, put=setStaticF__broadcasters)) ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  _broadcasters;

/// @brief Field _forcedGlobalPhysicsUpdate, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get__forcedGlobalPhysicsUpdate, put=__cordl_internal_set__forcedGlobalPhysicsUpdate)) bool  _forcedGlobalPhysicsUpdate;

/// @brief Field _interactable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) ::Oculus::Interaction::IInteractable*  _interactable;

/// @brief Field _rigidbodies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodies, put=__cordl_internal_set__rigidbodies)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  _rigidbodies;

/// @brief Field _rigidbodyTriggers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodyTriggers, put=__cordl_internal_set__rigidbodyTriggers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*  _rigidbodyTriggers;

/// @brief Field _skippedPhysics, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__skippedPhysics, put=__cordl_internal_set__skippedPhysics)) bool  _skippedPhysics;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method FixedUpdate, addr 0xa4187e4, size 0x74, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method ForceGlobalUpdateTriggers, addr 0xa418d24, size 0x164, virtual false, abstract: false, final false
static inline void ForceGlobalUpdateTriggers() ;

/// @brief Method InjectAllInteractableTriggerBroadcaster, addr 0xa418e88, size 0x8, virtual false, abstract: false, final false
inline void InjectAllInteractableTriggerBroadcaster(::Oculus::Interaction::IInteractable*  interactable) ;

/// @brief Method InjectInteractable, addr 0xa418e90, size 0x8, virtual false, abstract: false, final false
inline void InjectInteractable(::Oculus::Interaction::IInteractable*  interactable) ;

static inline ::Oculus::Interaction::InteractableTriggerBroadcaster* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa418cf0, size 0x34, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa418aec, size 0x204, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa418750, size 0x94, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerStay, addr 0xa418610, size 0x140, virtual true, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  collider) ;

/// @brief Method Start, addr 0xa418520, size 0xf0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateTriggers, addr 0xa418858, size 0x294, virtual false, abstract: false, final false
inline void UpdateTriggers() ;

constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get_WhenTriggerEntered() const;

constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get_WhenTriggerEntered() ;

constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get_WhenTriggerExited() const;

constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get_WhenTriggerExited() ;

constexpr bool const& __cordl_internal_get__forcedGlobalPhysicsUpdate() const;

constexpr bool& __cordl_internal_get__forcedGlobalPhysicsUpdate() ;

constexpr ::Oculus::Interaction::IInteractable* const& __cordl_internal_get__interactable() const;

constexpr ::Oculus::Interaction::IInteractable*& __cordl_internal_get__interactable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get__rigidbodies() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get__rigidbodies() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>* const& __cordl_internal_get__rigidbodyTriggers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*& __cordl_internal_get__rigidbodyTriggers() ;

constexpr bool const& __cordl_internal_get__skippedPhysics() const;

constexpr bool& __cordl_internal_get__skippedPhysics() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenTriggerEntered(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value) ;

constexpr void __cordl_internal_set_WhenTriggerExited(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value) ;

constexpr void __cordl_internal_set__forcedGlobalPhysicsUpdate(bool  value) ;

constexpr void __cordl_internal_set__interactable(::Oculus::Interaction::IInteractable*  value) ;

constexpr void __cordl_internal_set__rigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

constexpr void __cordl_internal_set__rigidbodyTriggers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*  value) ;

constexpr void __cordl_internal_set__skippedPhysics(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa418e98, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>* getStaticF__broadcasters() ;

static inline void setStaticF__broadcasters(::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableTriggerBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableTriggerBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableTriggerBroadcaster(InteractableTriggerBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableTriggerBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableTriggerBroadcaster(InteractableTriggerBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15784};

/// @brief Field WhenTriggerEntered, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  ___WhenTriggerEntered;

/// @brief Field WhenTriggerExited, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  ___WhenTriggerExited;

/// @brief Field _interactable, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractable*  ____interactable;

/// @brief Field _rigidbodyTriggers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*  ____rigidbodyTriggers;

/// @brief Field _rigidbodies, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  ____rigidbodies;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _skippedPhysics, offset: 0x49, size: 0x1, def value: None
 bool  ____skippedPhysics;

/// @brief Field _forcedGlobalPhysicsUpdate, offset: 0x4a, size: 0x1, def value: None
 bool  ____forcedGlobalPhysicsUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ___WhenTriggerEntered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ___WhenTriggerExited) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____interactable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____rigidbodyTriggers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____rigidbodies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____started) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____skippedPhysics) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableTriggerBroadcaster, ____forcedGlobalPhysicsUpdate) == 0x4a, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableTriggerBroadcaster) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableTriggerBroadcaster/<>c
class CORDL_TYPE InteractableTriggerBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::InteractableTriggerBroadcaster___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  __9__19_0;

/// @brief Field <>9__19_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_1, put=setStaticF___9__19_1)) ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  __9__19_1;

static inline ::Oculus::Interaction::InteractableTriggerBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__19_0, addr 0xa41912c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__19_0(::Oculus::Interaction::IInteractable*  _p0_, ::UnityEngine::Rigidbody*  _p1_) ;

/// @brief Method <.ctor>b__19_1, addr 0xa419130, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__19_1(::Oculus::Interaction::IInteractable*  _p0_, ::UnityEngine::Rigidbody*  _p1_) ;

/// @brief Method .ctor, addr 0xa419124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractableTriggerBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* getStaticF___9__19_0() ;

static inline ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* getStaticF___9__19_1() ;

static inline void setStaticF___9(::Oculus::Interaction::InteractableTriggerBroadcaster___c*  value) ;

static inline void setStaticF___9__19_0(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value) ;

static inline void setStaticF___9__19_1(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableTriggerBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableTriggerBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableTriggerBroadcaster___c(InteractableTriggerBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableTriggerBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableTriggerBroadcaster___c(InteractableTriggerBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15783};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractableTriggerBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
