#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFlagSpawn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaFlagSpawn)
// Forward declare root types
namespace GlobalNamespace {
class GorillaFlagSpawn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFlagSpawn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFlagSpawn*, "", "GorillaFlagSpawn");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFlagSpawn
class CORDL_TYPE GorillaFlagSpawn : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isRedFlagSpawn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRedFlagSpawn, put=__cordl_internal_set_isRedFlagSpawn)) bool  isRedFlagSpawn;

static inline ::GlobalNamespace::GorillaFlagSpawn* New_ctor() ;

constexpr bool const& __cordl_internal_get_isRedFlagSpawn() const;

constexpr bool& __cordl_internal_get_isRedFlagSpawn() ;

constexpr void __cordl_internal_set_isRedFlagSpawn(bool  value) ;

/// @brief Method .ctor, addr 0x580270c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFlagSpawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFlagSpawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFlagSpawn(GorillaFlagSpawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFlagSpawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFlagSpawn(GorillaFlagSpawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1678};

/// @brief Field isRedFlagSpawn, offset: 0x20, size: 0x1, def value: None
 bool  ___isRedFlagSpawn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFlagSpawn, ___isRedFlagSpawn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFlagSpawn) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
