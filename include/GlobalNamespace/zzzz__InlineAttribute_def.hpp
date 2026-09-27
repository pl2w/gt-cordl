#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InlineAttribute)
// Forward declare root types
namespace GlobalNamespace {
class InlineAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InlineAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InlineAttribute*, "", "InlineAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: InlineAttribute
class CORDL_TYPE InlineAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field asGroup, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_asGroup, put=__cordl_internal_set_asGroup)) bool  asGroup;

/// @brief Field keepLabel, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepLabel, put=__cordl_internal_set_keepLabel)) bool  keepLabel;

static inline ::GlobalNamespace::InlineAttribute* New_ctor(bool  keepLabel, bool  asGroup) ;

constexpr bool const& __cordl_internal_get_asGroup() const;

constexpr bool& __cordl_internal_get_asGroup() ;

constexpr bool const& __cordl_internal_get_keepLabel() const;

constexpr bool& __cordl_internal_get_keepLabel() ;

constexpr void __cordl_internal_set_asGroup(bool  value) ;

constexpr void __cordl_internal_set_keepLabel(bool  value) ;

/// @brief Method .ctor, addr 0x56466ac, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  keepLabel, bool  asGroup) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineAttribute(InlineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineAttribute(InlineAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{683};

/// @brief Field keepLabel, offset: 0x10, size: 0x1, def value: None
 bool  ___keepLabel;

/// @brief Field asGroup, offset: 0x11, size: 0x1, def value: None
 bool  ___asGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InlineAttribute, ___keepLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InlineAttribute, ___asGroup) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InlineAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
