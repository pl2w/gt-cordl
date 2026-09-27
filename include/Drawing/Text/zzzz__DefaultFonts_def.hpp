#pragma once
// IWYU pragma private; include "Drawing/Text/DefaultFonts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultFonts)
namespace Drawing::Text {
struct SDFFont;
}
// Forward declare root types
namespace Drawing::Text {
class DefaultFonts;
}
// Write type traits
MARK_REF_T(::Drawing::Text::DefaultFonts*);
DEFINE_IL2CPP_CLASS(::Drawing::Text::DefaultFonts*, "Drawing.Text", "DefaultFonts");
// Dependencies System.Object
namespace Drawing::Text {
// Is value type: false
// CS Name: Drawing.Text.DefaultFonts
class CORDL_TYPE DefaultFonts : public ::System::Object {
public:
// Declarations
/// @brief Method LoadDefaultFont, addr 0x55dc894, size 0x339c, virtual false, abstract: false, final false
static inline ::Drawing::Text::SDFFont LoadDefaultFont() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultFonts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultFonts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultFonts(DefaultFonts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultFonts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultFonts(DefaultFonts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Text::DefaultFonts) == 0x10, "Size mismatch!");

} // namespace end def Drawing::Text
