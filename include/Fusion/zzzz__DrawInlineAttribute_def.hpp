#pragma once
// IWYU pragma private; include "Fusion/DrawInlineAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DrawInlineAttribute)
// Forward declare root types
namespace Fusion {
class DrawInlineAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::DrawInlineAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::DrawInlineAttribute*, "Fusion", "DrawInlineAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = false, Inherited = true)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DrawInlineAttribute
class CORDL_TYPE DrawInlineAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
static inline ::Fusion::DrawInlineAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3d62c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawInlineAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawInlineAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawInlineAttribute(DrawInlineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawInlineAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawInlineAttribute(DrawInlineAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DrawInlineAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
