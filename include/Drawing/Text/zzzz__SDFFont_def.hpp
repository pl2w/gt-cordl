#pragma once
// IWYU pragma private; include "Drawing/Text/SDFFont.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/Text/zzzz__SDFCharacter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFFont)
namespace Drawing::Text {
struct SDFCharacter;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Drawing::Text {
struct SDFFont;
}
// Write type traits
MARK_VAL_T(::Drawing::Text::SDFFont);
DEFINE_IL2CPP_CLASS(::Drawing::Text::SDFFont, "Drawing.Text", "SDFFont");
// Dependencies Drawing.Text.SDFCharacter
namespace Drawing::Text {
// Is value type: true
// CS Name: Drawing.Text.SDFFont
struct CORDL_TYPE SDFFont {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SDFFont() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bold", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "italic", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "characters", ty: "::ArrayW<::Drawing::Text::SDFCharacter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }]
constexpr SDFFont(::StringW  name, int32_t  size, int32_t  width, int32_t  height, bool  bold, bool  italic, ::ArrayW<::Drawing::Text::SDFCharacter>  characters, ::UnityW<::UnityEngine::Material>  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field size, offset: 0x8, size: 0x4, def value: None
 int32_t  size;

/// @brief Field width, offset: 0xc, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x10, size: 0x4, def value: None
 int32_t  height;

/// @brief Field bold, offset: 0x14, size: 0x1, def value: None
 bool  bold;

/// @brief Field italic, offset: 0x15, size: 0x1, def value: None
 bool  italic;

/// @brief Field characters, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Drawing::Text::SDFCharacter>  characters;

/// @brief Field material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Text::SDFFont, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, width) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, height) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, bold) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, italic) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, characters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFFont, material) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::Text::SDFFont) == 0x28, "Size mismatch!");

} // namespace end def Drawing::Text
