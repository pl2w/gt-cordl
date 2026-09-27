#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSettings_FontReferenceMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TextSettings_FontReferenceMap)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextSettings_FontReferenceMap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextSettings_FontReferenceMap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextSettings_FontReferenceMap, "UnityEngine.TextCore.Text", "TextSettings/FontReferenceMap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextSettings/FontReferenceMap
struct CORDL_TYPE TextSettings_FontReferenceMap {
public:
// Declarations
/// @brief Method .ctor, addr 0xb6e7418, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Font*  font, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextSettings_FontReferenceMap() ;

// Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None, comment: None }]
constexpr TextSettings_FontReferenceMap(::UnityW<::UnityEngine::Font>  font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field font, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Font>  font;

/// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextSettings_FontReferenceMap, font) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextSettings_FontReferenceMap, fontAsset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextSettings_FontReferenceMap) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
