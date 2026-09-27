#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchHandGrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
CORDL_MODULE_EXPORT(TouchHandGrabInteractable)
namespace Oculus::Interaction {
class ColliderGroup;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Oculus::Interaction {
class TouchHandGrabInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TouchHandGrabInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchHandGrabInteractable*, "Oculus.Interaction", "TouchHandGrabInteractable");
// Dependencies Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchHandGrabInteractable
class CORDL_TYPE TouchHandGrabInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>,::UnityW<::Oculus::Interaction::TouchHandGrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_ColliderGroup)) ::Oculus::Interaction::ColliderGroup*  ColliderGroup;

/// @brief Field _boundsCollider, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundsCollider, put=__cordl_internal_set__boundsCollider)) ::UnityW<::UnityEngine::Collider>  _boundsCollider;

/// @brief Field _colliderGroup, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliderGroup, put=__cordl_internal_set__colliderGroup)) ::Oculus::Interaction::ColliderGroup*  _colliderGroup;

/// @brief Field _colliders, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _colliders;

/// @brief Method InjectAllTouchHandGrabInteractable, addr 0xa4658c0, size 0x30, virtual false, abstract: false, final false
inline void InjectAllTouchHandGrabInteractable(::UnityEngine::Collider*  boundsCollider, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders) ;

/// @brief Method InjectBoundsCollider, addr 0xa4658f0, size 0x8, virtual false, abstract: false, final false
inline void InjectBoundsCollider(::UnityEngine::Collider*  boundsCollider) ;

/// @brief Method InjectColliders, addr 0xa4658f8, size 0x8, virtual false, abstract: false, final false
inline void InjectColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders) ;

static inline ::Oculus::Interaction::TouchHandGrabInteractable* New_ctor() ;

/// @brief Method Start, addr 0xa46582c, size 0x94, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__boundsCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__boundsCollider() ;

constexpr ::Oculus::Interaction::ColliderGroup* const& __cordl_internal_get__colliderGroup() const;

constexpr ::Oculus::Interaction::ColliderGroup*& __cordl_internal_get__colliderGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__colliders() ;

constexpr void __cordl_internal_set__boundsCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__colliderGroup(::Oculus::Interaction::ColliderGroup*  value) ;

constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method .ctor, addr 0xa465900, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColliderGroup, addr 0xa465824, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ColliderGroup* get_ColliderGroup() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchHandGrabInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchHandGrabInteractable(TouchHandGrabInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchHandGrabInteractable(TouchHandGrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15888};

/// [SerializeField]
/// @brief Field _boundsCollider, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____boundsCollider;

/// [SerializeField]
/// @brief Field _colliders, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____colliders;

/// @brief Field _colliderGroup, offset: 0xd8, size: 0x8, def value: None
 ::Oculus::Interaction::ColliderGroup*  ____colliderGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractable, ____boundsCollider) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractable, ____colliders) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractable, ____colliderGroup) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractable) == 0xe0, "Size mismatch!");

} // namespace end def Oculus::Interaction
