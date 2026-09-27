#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObjectGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Behaviour;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectGroup*, "", "ObjectGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectGroup
class CORDL_TYPE ObjectGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field behaviours, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviours, put=__cordl_internal_set_behaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  behaviours;

/// @brief Field colliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects;

/// @brief Field renderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field syncWithGroupState, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncWithGroupState, put=__cordl_internal_set_syncWithGroupState)) bool  syncWithGroupState;

static inline ::GlobalNamespace::ObjectGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a1ed8c, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a1eac0, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetObjectStates, addr 0x5a1ead4, size 0x2b8, virtual false, abstract: false, final false
inline void SetObjectStates(bool  active) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>* const& __cordl_internal_get_behaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*& __cordl_internal_get_behaviours() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr bool const& __cordl_internal_get_syncWithGroupState() const;

constexpr bool& __cordl_internal_get_syncWithGroupState() ;

constexpr void __cordl_internal_set_behaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_gameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_syncWithGroupState(bool  value) ;

/// @brief Method .ctor, addr 0x5a1eda0, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectGroup(ObjectGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectGroup(ObjectGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2831};

/// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___gameObjects;

/// @brief Field behaviours, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  ___behaviours;

/// @brief Field renderers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// @brief Field colliders, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field syncWithGroupState, offset: 0x40, size: 0x1, def value: None
 bool  ___syncWithGroupState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectGroup, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectGroup, ___behaviours) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectGroup, ___renderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectGroup, ___colliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectGroup, ___syncWithGroupState) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectGroup) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
