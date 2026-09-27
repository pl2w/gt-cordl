#pragma once
// IWYU pragma private; include "Fusion/InlineHelpAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(InlineHelpAttribute)
// Forward declare root types
namespace Fusion {
class InlineHelpAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::InlineHelpAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::InlineHelpAttribute*, "Fusion", "InlineHelpAttribute");
// [AttributeUsage((System.AttributeTargets)268)]
// Dependencies Fusion.DecoratingPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.InlineHelpAttribute
class CORDL_TYPE InlineHelpAttribute : public ::Fusion::DecoratingPropertyAttribute {
public:
// Declarations
/// @brief Field <ShowTypeHelp>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowTypeHelp_k__BackingField, put=__cordl_internal_set__ShowTypeHelp_k__BackingField)) bool  _ShowTypeHelp_k__BackingField;

static inline ::Fusion::InlineHelpAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__ShowTypeHelp_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowTypeHelp_k__BackingField() ;

constexpr void __cordl_internal_set__ShowTypeHelp_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f3d780, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineHelpAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineHelpAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineHelpAttribute(InlineHelpAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineHelpAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineHelpAttribute(InlineHelpAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31277};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ShowTypeHelp>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____ShowTypeHelp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::InlineHelpAttribute, ____ShowTypeHelp_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(sizeof(::Fusion::InlineHelpAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
