#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ColorBox)
// Forward declare root types
namespace GlobalNamespace {
class ColorBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorBox*, "", "ColorBox");
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorBox
class CORDL_TYPE ColorBox : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::ColorBox* New_ctor() ;

/// @brief Method .ctor, addr 0x56466a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorBox(ColorBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorBox(ColorBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorBox) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
