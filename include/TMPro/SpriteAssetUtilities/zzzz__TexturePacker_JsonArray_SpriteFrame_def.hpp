#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray_SpriteFrame)
// Forward declare root types
namespace GlobalNamespace {
struct TexturePacker_JsonArray_SpriteFrame;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteFrame");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame
struct CORDL_TYPE TexturePacker_JsonArray_SpriteFrame {
public:
// Declarations
/// @brief Method ToString, addr 0xb3aea2c, size 0x208, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray_SpriteFrame() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TexturePacker_JsonArray_SpriteFrame(float_t  x, float_t  y, float_t  w, float_t  h) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field w, offset: 0x8, size: 0x4, def value: None
 float_t  w;

/// @brief Field h, offset: 0xc, size: 0x4, def value: None
 float_t  h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame, w) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame, h) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
