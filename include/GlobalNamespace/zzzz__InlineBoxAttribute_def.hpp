#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineBoxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InlineBoxAttribute)
// Forward declare root types
namespace GlobalNamespace {
class InlineBoxAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InlineBoxAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InlineBoxAttribute*, "", "InlineBoxAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: InlineBoxAttribute
class CORDL_TYPE InlineBoxAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::InlineBoxAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x56466dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineBoxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineBoxAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineBoxAttribute(InlineBoxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineBoxAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineBoxAttribute(InlineBoxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InlineBoxAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
