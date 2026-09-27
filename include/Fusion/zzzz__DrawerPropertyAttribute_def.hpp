#pragma once
// IWYU pragma private; include "Fusion/DrawerPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DrawerPropertyAttribute)
// Forward declare root types
namespace Fusion {
class DrawerPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::DrawerPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::DrawerPropertyAttribute*, "Fusion", "DrawerPropertyAttribute");
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DrawerPropertyAttribute
class CORDL_TYPE DrawerPropertyAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::DrawerPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3d3c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawerPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawerPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawerPropertyAttribute(DrawerPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawerPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawerPropertyAttribute(DrawerPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DrawerPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
