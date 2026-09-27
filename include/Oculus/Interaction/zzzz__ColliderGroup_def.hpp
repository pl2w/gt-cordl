#pragma once
// IWYU pragma private; include "Oculus/Interaction/ColliderGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColliderGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Oculus::Interaction {
class ColliderGroup;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ColliderGroup*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ColliderGroup*, "Oculus.Interaction", "ColliderGroup");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ColliderGroup
class CORDL_TYPE ColliderGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityW<::UnityEngine::Collider>  Bounds;

 __declspec(property(get=get_Colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  Colliders;

/// @brief Field _boundsCollider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundsCollider, put=__cordl_internal_set__boundsCollider)) ::UnityW<::UnityEngine::Collider>  _boundsCollider;

/// @brief Field _colliders, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _colliders;

static inline ::Oculus::Interaction::ColliderGroup* New_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::UnityEngine::Collider*  boundsCollider) ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__boundsCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__boundsCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__colliders() ;

constexpr void __cordl_internal_set__boundsCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method .ctor, addr 0xa4007a8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::UnityEngine::Collider*  boundsCollider) ;

/// @brief Method get_Bounds, addr 0xa400798, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_Bounds() ;

/// @brief Method get_Colliders, addr 0xa4007a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_Colliders() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderGroup(ColliderGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderGroup(ColliderGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15695};

/// @brief Field _boundsCollider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____boundsCollider;

/// @brief Field _colliders, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____colliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ColliderGroup, ____boundsCollider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ColliderGroup, ____colliders) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ColliderGroup) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
