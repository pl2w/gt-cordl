#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderRoom)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderRoom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderRoom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRoom*, "", "BuilderRoom");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderRoom
class CORDL_TYPE BuilderRoom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disableColliderRoots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableColliderRoots, put=__cordl_internal_set_disableColliderRoots)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  disableColliderRoots;

/// @brief Field disableGameObjectsForScene, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableGameObjectsForScene, put=__cordl_internal_set_disableGameObjectsForScene)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  disableGameObjectsForScene;

/// @brief Field disableObjectsForPersistent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableObjectsForPersistent, put=__cordl_internal_set_disableObjectsForPersistent)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  disableObjectsForPersistent;

/// @brief Field disableRenderRoots, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableRenderRoots, put=__cordl_internal_set_disableRenderRoots)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  disableRenderRoots;

/// @brief Field disabledCollidersForScene, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledCollidersForScene, put=__cordl_internal_set_disabledCollidersForScene)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  disabledCollidersForScene;

/// @brief Field disabledRenderersForPersistent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledRenderersForPersistent, put=__cordl_internal_set_disabledRenderersForPersistent)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  disabledRenderersForPersistent;

static inline ::GlobalNamespace::BuilderRoom* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_disableColliderRoots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_disableColliderRoots() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_disableGameObjectsForScene() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_disableGameObjectsForScene() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_disableObjectsForPersistent() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_disableObjectsForPersistent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_disableRenderRoots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_disableRenderRoots() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_disabledCollidersForScene() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_disabledCollidersForScene() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_disabledRenderersForPersistent() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_disabledRenderersForPersistent() ;

constexpr void __cordl_internal_set_disableColliderRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_disableGameObjectsForScene(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_disableObjectsForPersistent(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_disableRenderRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_disabledCollidersForScene(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_disabledRenderersForPersistent(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

/// @brief Method .ctor, addr 0x57d78b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderRoom(BuilderRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderRoom(BuilderRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1630};

/// @brief Field disableColliderRoots, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___disableColliderRoots;

/// @brief Field disableRenderRoots, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___disableRenderRoots;

/// @brief Field disableGameObjectsForScene, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___disableGameObjectsForScene;

/// @brief Field disableObjectsForPersistent, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___disableObjectsForPersistent;

/// @brief Field disabledRenderersForPersistent, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___disabledRenderersForPersistent;

/// @brief Field disabledCollidersForScene, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___disabledCollidersForScene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disableColliderRoots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disableRenderRoots) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disableGameObjectsForScene) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disableObjectsForPersistent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disabledRenderersForPersistent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoom, ___disabledCollidersForScene) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRoom) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
