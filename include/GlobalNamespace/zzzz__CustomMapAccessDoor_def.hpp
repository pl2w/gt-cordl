#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapAccessDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomMapAccessDoor)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapAccessDoor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapAccessDoor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapAccessDoor*, "", "CustomMapAccessDoor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapAccessDoor
class CORDL_TYPE CustomMapAccessDoor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field closedDoorObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_closedDoorObject, put=__cordl_internal_set_closedDoorObject)) ::UnityW<::UnityEngine::GameObject>  closedDoorObject;

/// @brief Field openDoorObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_openDoorObject, put=__cordl_internal_set_openDoorObject)) ::UnityW<::UnityEngine::GameObject>  openDoorObject;

/// @brief Method CloseDoor, addr 0x59a7c3c, size 0xc4, virtual false, abstract: false, final false
inline void CloseDoor() ;

static inline ::GlobalNamespace::CustomMapAccessDoor* New_ctor() ;

/// @brief Method OpenDoor, addr 0x59a7b78, size 0xc4, virtual false, abstract: false, final false
inline void OpenDoor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_closedDoorObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_closedDoorObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_openDoorObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_openDoorObject() ;

constexpr void __cordl_internal_set_closedDoorObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_openDoorObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59a7d00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapAccessDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapAccessDoor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapAccessDoor(CustomMapAccessDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapAccessDoor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapAccessDoor(CustomMapAccessDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2639};

/// @brief Field openDoorObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___openDoorObject;

/// @brief Field closedDoorObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___closedDoorObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapAccessDoor, ___openDoorObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapAccessDoor, ___closedDoorObject) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapAccessDoor) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
