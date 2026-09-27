#pragma once
// IWYU pragma private; include "Fusion/ExpandableEnumAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ExpandableEnumAttribute)
// Forward declare root types
namespace Fusion {
class ExpandableEnumAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ExpandableEnumAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ExpandableEnumAttribute*, "Fusion", "ExpandableEnumAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ExpandableEnumAttribute
class CORDL_TYPE ExpandableEnumAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
/// @brief Field <AlwaysExpanded>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__AlwaysExpanded_k__BackingField, put=__cordl_internal_set__AlwaysExpanded_k__BackingField)) bool  _AlwaysExpanded_k__BackingField;

/// @brief Field <ShowFlagsButtons>k__BackingField, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowFlagsButtons_k__BackingField, put=__cordl_internal_set__ShowFlagsButtons_k__BackingField)) bool  _ShowFlagsButtons_k__BackingField;

/// @brief Field <ShowInlineHelp>k__BackingField, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowInlineHelp_k__BackingField, put=__cordl_internal_set__ShowInlineHelp_k__BackingField)) bool  _ShowInlineHelp_k__BackingField;

static inline ::Fusion::ExpandableEnumAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__AlwaysExpanded_k__BackingField() const;

constexpr bool& __cordl_internal_get__AlwaysExpanded_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowFlagsButtons_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowFlagsButtons_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowInlineHelp_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowInlineHelp_k__BackingField() ;

constexpr void __cordl_internal_set__AlwaysExpanded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowFlagsButtons_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowInlineHelp_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f3d74c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpandableEnumAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpandableEnumAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandableEnumAttribute(ExpandableEnumAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableEnumAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandableEnumAttribute(ExpandableEnumAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31275};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AlwaysExpanded>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____AlwaysExpanded_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ShowFlagsButtons>k__BackingField, offset: 0x16, size: 0x1, def value: None
 bool  ____ShowFlagsButtons_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ShowInlineHelp>k__BackingField, offset: 0x17, size: 0x1, def value: None
 bool  ____ShowInlineHelp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ExpandableEnumAttribute, ____AlwaysExpanded_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::ExpandableEnumAttribute, ____ShowFlagsButtons_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Fusion::ExpandableEnumAttribute, ____ShowInlineHelp_k__BackingField) == 0x17, "Offset mismatch!");

static_assert(sizeof(::Fusion::ExpandableEnumAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
