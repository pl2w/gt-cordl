#pragma once
// IWYU pragma private; include "Fusion/UnityAddressablesRuntimeKeyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(UnityAddressablesRuntimeKeyAttribute)
// Forward declare root types
namespace Fusion {
class UnityAddressablesRuntimeKeyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityAddressablesRuntimeKeyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityAddressablesRuntimeKeyAttribute*, "Fusion", "UnityAddressablesRuntimeKeyAttribute");
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityAddressablesRuntimeKeyAttribute
class CORDL_TYPE UnityAddressablesRuntimeKeyAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::UnityAddressablesRuntimeKeyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3d86c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAddressablesRuntimeKeyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAddressablesRuntimeKeyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAddressablesRuntimeKeyAttribute(UnityAddressablesRuntimeKeyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAddressablesRuntimeKeyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAddressablesRuntimeKeyAttribute(UnityAddressablesRuntimeKeyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31287};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnityAddressablesRuntimeKeyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
