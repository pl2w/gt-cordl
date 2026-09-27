#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureBlitter_BlitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlitter_BlitInfo)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlitter_BlitInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlitter_BlitInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlitter_BlitInfo, "UnityEngine.UIElements.UIR", "TextureBlitter/BlitInfo");
// Dependencies UnityEngine.Color, UnityEngine.RectInt, UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo
struct CORDL_TYPE TextureBlitter_BlitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlitter_BlitInfo() ;

// Ctor Parameters [CppParam { name: "src", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None, comment: None }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlitter_BlitInfo(::UnityW<::UnityEngine::Texture>  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, int32_t  border, ::UnityEngine::Color  tint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field src, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  src;

/// @brief Field srcRect, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::RectInt  srcRect;

/// @brief Field dstPos, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  dstPos;

/// @brief Field border, offset: 0x20, size: 0x4, def value: None
 int32_t  border;

/// @brief Field tint, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  tint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlitter_BlitInfo, src) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureBlitter_BlitInfo, srcRect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureBlitter_BlitInfo, dstPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureBlitter_BlitInfo, border) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureBlitter_BlitInfo, tint) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlitter_BlitInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
