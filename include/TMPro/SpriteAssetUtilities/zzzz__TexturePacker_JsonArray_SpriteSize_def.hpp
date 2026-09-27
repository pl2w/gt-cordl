#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray_SpriteSize)
// Forward declare root types
namespace GlobalNamespace {
struct TexturePacker_JsonArray_SpriteSize;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TexturePacker_JsonArray_SpriteSize);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TexturePacker_JsonArray_SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteSize");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize
struct CORDL_TYPE TexturePacker_JsonArray_SpriteSize {
public:
// Declarations
/// @brief Method ToString, addr 0xb3aec34, size 0xac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray_SpriteSize() ;

// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TexturePacker_JsonArray_SpriteSize(float_t  w, float_t  h) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field w, offset: 0x0, size: 0x4, def value: None
 float_t  w;

/// @brief Field h, offset: 0x4, size: 0x4, def value: None
 float_t  h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteSize, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_SpriteSize, h) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TexturePacker_JsonArray_SpriteSize) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
