#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Meta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteSize_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray_Meta)
// Forward declare root types
namespace GlobalNamespace {
struct TexturePacker_JsonArray_Meta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TexturePacker_JsonArray_Meta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TexturePacker_JsonArray_Meta, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Meta");
// Dependencies TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteSize
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Meta
struct CORDL_TYPE TexturePacker_JsonArray_Meta {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray_Meta() ;

// Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "image", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "smartupdate", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr TexturePacker_JsonArray_Meta(::StringW  app, ::StringW  version, ::StringW  image, ::StringW  format, ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize  size, float_t  scale, ::StringW  smartupdate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field app, offset: 0x0, size: 0x8, def value: None
 ::StringW  app;

/// @brief Field version, offset: 0x8, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field image, offset: 0x10, size: 0x8, def value: None
 ::StringW  image;

/// @brief Field format, offset: 0x18, size: 0x8, def value: None
 ::StringW  format;

/// @brief Field size, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize  size;

/// @brief Field scale, offset: 0x28, size: 0x4, def value: None
 float_t  scale;

/// @brief Field smartupdate, offset: 0x30, size: 0x8, def value: None
 ::StringW  smartupdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, app) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Meta, smartupdate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TexturePacker_JsonArray_Meta) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
