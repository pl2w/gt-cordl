#pragma once
// IWYU pragma private; include "Meta/WitAi/Composer/Attributes/VersionTagDropdownAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(VersionTagDropdownAttribute)
// Forward declare root types
namespace Meta::WitAi::Composer::Attributes {
class VersionTagDropdownAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute*, "Meta.WitAi.Composer.Attributes", "VersionTagDropdownAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace Meta::WitAi::Composer::Attributes {
// Is value type: false
// CS Name: Meta.WitAi.Composer.Attributes.VersionTagDropdownAttribute
class CORDL_TYPE VersionTagDropdownAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9ef8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionTagDropdownAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionTagDropdownAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionTagDropdownAttribute(VersionTagDropdownAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionTagDropdownAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionTagDropdownAttribute(VersionTagDropdownAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25742};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Composer::Attributes
