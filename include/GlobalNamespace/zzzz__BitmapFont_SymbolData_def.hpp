#pragma once
// IWYU pragma private; include "GlobalNamespace/BitmapFont_SymbolData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitmapFont_SymbolData)
// Forward declare root types
namespace GlobalNamespace {
struct BitmapFont_SymbolData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitmapFont_SymbolData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitmapFont_SymbolData, "", "BitmapFont/SymbolData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BitmapFont/SymbolData
struct CORDL_TYPE BitmapFont_SymbolData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BitmapFont_SymbolData() ;

// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "xadvance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "yoffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BitmapFont_SymbolData(char16_t  character, int32_t  id, int32_t  width, int32_t  height, int32_t  x, int32_t  y, int32_t  xadvance, int32_t  yoffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field character, offset: 0x0, size: 0x2, def value: None
 char16_t  character;

/// [Space]
/// @brief Field id, offset: 0x4, size: 0x4, def value: None
 int32_t  id;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 int32_t  height;

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x14, size: 0x4, def value: None
 int32_t  y;

/// @brief Field xadvance, offset: 0x18, size: 0x4, def value: None
 int32_t  xadvance;

/// @brief Field yoffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  yoffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, id) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, height) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, xadvance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont_SymbolData, yoffset) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitmapFont_SymbolData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
