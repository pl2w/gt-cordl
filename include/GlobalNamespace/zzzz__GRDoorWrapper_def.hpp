#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDoorWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRDoorWrapper)
namespace GlobalNamespace {
class GRDoor;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDoorWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDoorWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDoorWrapper*, "", "GRDoorWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDoorWrapper
class CORDL_TYPE GRDoorWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field grDoor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_grDoor, put=__cordl_internal_set_grDoor)) ::GlobalNamespace::GRDoor*  grDoor;

static inline ::GlobalNamespace::GRDoorWrapper* New_ctor() ;

/// @brief Method ToggleDoor, addr 0x56bd028, size 0x1c, virtual false, abstract: false, final false
inline void ToggleDoor(bool  value) ;

constexpr ::GlobalNamespace::GRDoor* const& __cordl_internal_get_grDoor() const;

constexpr ::GlobalNamespace::GRDoor*& __cordl_internal_get_grDoor() ;

constexpr void __cordl_internal_set_grDoor(::GlobalNamespace::GRDoor*  value) ;

/// @brief Method .ctor, addr 0x56bd044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDoorWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDoorWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDoorWrapper(GRDoorWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDoorWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDoorWrapper(GRDoorWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{984};

/// [SerializeField]
/// @brief Field grDoor, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GRDoor*  ___grDoor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDoorWrapper, ___grDoor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDoorWrapper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
