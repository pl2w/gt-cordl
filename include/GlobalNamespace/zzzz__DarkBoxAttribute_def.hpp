#pragma once
// IWYU pragma private; include "GlobalNamespace/DarkBoxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DarkBoxAttribute)
// Forward declare root types
namespace GlobalNamespace {
class DarkBoxAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DarkBoxAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DarkBoxAttribute*, "", "DarkBoxAttribute");
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DarkBoxAttribute
class CORDL_TYPE DarkBoxAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field withBorders, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_withBorders, put=__cordl_internal_set_withBorders)) bool  withBorders;

static inline ::GlobalNamespace::DarkBoxAttribute* New_ctor() ;

static inline ::GlobalNamespace::DarkBoxAttribute* New_ctor(bool  withBorders) ;

constexpr bool const& __cordl_internal_get_withBorders() const;

constexpr bool& __cordl_internal_get_withBorders() ;

constexpr void __cordl_internal_set_withBorders(bool  value) ;

/// @brief Method .ctor, addr 0x5646674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x564667c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  withBorders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DarkBoxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DarkBoxAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DarkBoxAttribute(DarkBoxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DarkBoxAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DarkBoxAttribute(DarkBoxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{681};

/// @brief Field withBorders, offset: 0x10, size: 0x1, def value: None
 bool  ___withBorders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DarkBoxAttribute, ___withBorders) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DarkBoxAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
