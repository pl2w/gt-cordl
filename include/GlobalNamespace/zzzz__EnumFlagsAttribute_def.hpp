#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumFlagsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(EnumFlagsAttribute)
// Forward declare root types
namespace GlobalNamespace {
class EnumFlagsAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnumFlagsAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnumFlagsAttribute*, "", "EnumFlagsAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnumFlagsAttribute
class CORDL_TYPE EnumFlagsAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GlobalNamespace::EnumFlagsAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5b07c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumFlagsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumFlagsAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumFlagsAttribute(EnumFlagsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumFlagsAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumFlagsAttribute(EnumFlagsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnumFlagsAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
