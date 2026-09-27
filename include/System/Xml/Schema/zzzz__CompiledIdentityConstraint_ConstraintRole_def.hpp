#pragma once
// IWYU pragma private; include "System/Xml/Schema/CompiledIdentityConstraint_ConstraintRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompiledIdentityConstraint_ConstraintRole)
// Forward declare root types
namespace GlobalNamespace {
struct CompiledIdentityConstraint_ConstraintRole;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole, "System.Xml.Schema", "CompiledIdentityConstraint/ConstraintRole");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.CompiledIdentityConstraint/ConstraintRole
struct CORDL_TYPE CompiledIdentityConstraint_ConstraintRole {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompiledIdentityConstraint_ConstraintRole_Unwrapped
enum struct __CompiledIdentityConstraint_ConstraintRole_Unwrapped : int32_t {
__E_Unique = static_cast<int32_t>(0x0),
__E_Key = static_cast<int32_t>(0x1),
__E_Keyref = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompiledIdentityConstraint_ConstraintRole_Unwrapped () const noexcept {
return static_cast<__CompiledIdentityConstraint_ConstraintRole_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompiledIdentityConstraint_ConstraintRole() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompiledIdentityConstraint_ConstraintRole(int32_t  value__) noexcept;

/// @brief Field Key value: I32(1)
static ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole const Key;

/// @brief Field Keyref value: I32(2)
static ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole const Keyref;

/// @brief Field Unique value: I32(0)
static ::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole const Unique;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompiledIdentityConstraint_ConstraintRole) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
