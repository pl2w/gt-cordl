#pragma once
// IWYU pragma private; include "Oculus/Interaction/CollisionInteractionRegistry_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractableRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
CORDL_MODULE_EXPORT(CollisionInteractionRegistry_2)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace Oculus::Interaction {
class IInteractable;
}
namespace Oculus::Interaction {
class InteractableTriggerBroadcaster;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class CollisionInteractionRegistry_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::CollisionInteractionRegistry_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::CollisionInteractionRegistry_2, "Oculus.Interaction", "CollisionInteractionRegistry`2");
// Dependencies Oculus.Interaction.InteractableRegistry`2::InteractableSet<TInteractor, TInteractable>, Oculus.Interaction.InteractableRegistry`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.CollisionInteractionRegistry`2<TInteractor,TInteractable>
class CORDL_TYPE CollisionInteractionRegistry_2 : public ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable> {
public:
// Declarations
/// @brief Field _broadcasters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__broadcasters, put=__cordl_internal_set__broadcasters)) ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  _broadcasters;

/// @brief Field _empty, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__empty, put=setStaticF__empty)) ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  _empty;

/// @brief Field _rigidbodyCollisionMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodyCollisionMap, put=__cordl_internal_set__rigidbodyCollisionMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*  _rigidbodyCollisionMap;

/// @brief Method HandleTriggerEntered, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandleTriggerEntered(::Oculus::Interaction::IInteractable*  interactable, ::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method HandleTriggerExited, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandleTriggerExited(::Oculus::Interaction::IInteractable*  interactable, ::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> List(TInteractor  interactor) ;

static inline ::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Register(TInteractable  interactable) ;

/// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Unregister(TInteractable  interactable) ;

constexpr ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>* const& __cordl_internal_get__broadcasters() const;

constexpr ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*& __cordl_internal_get__broadcasters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>* const& __cordl_internal_get__rigidbodyCollisionMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*& __cordl_internal_get__rigidbodyCollisionMap() ;

constexpr void __cordl_internal_set__broadcasters(::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  value) ;

constexpr void __cordl_internal_set__rigidbodyCollisionMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> getStaticF__empty() ;

static inline void setStaticF__empty(::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionInteractionRegistry_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionInteractionRegistry_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionInteractionRegistry_2(CollisionInteractionRegistry_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionInteractionRegistry_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionInteractionRegistry_2(CollisionInteractionRegistry_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15749};

/// @brief Field _rigidbodyCollisionMap, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*  ____rigidbodyCollisionMap;

/// @brief Field _broadcasters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  ____broadcasters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
