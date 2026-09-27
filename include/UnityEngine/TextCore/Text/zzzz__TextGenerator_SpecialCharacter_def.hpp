#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerator_SpecialCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerator_SpecialCharacter)
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextGenerator_SpecialCharacter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextGenerator_SpecialCharacter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextGenerator_SpecialCharacter, "UnityEngine.TextCore.Text", "TextGenerator/SpecialCharacter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextGenerator/SpecialCharacter
struct CORDL_TYPE TextGenerator_SpecialCharacter {
public:
// Declarations
/// @brief Method .ctor, addr 0xb6ea3cc, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::TextCore::Text::Character*  character, int32_t  materialIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextGenerator_SpecialCharacter() ;

// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextGenerator_SpecialCharacter(::UnityEngine::TextCore::Text::Character*  character, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset, ::UnityW<::UnityEngine::Material>  material, int32_t  materialIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field character, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::TextCore::Text::Character*  character;

/// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset;

/// @brief Field material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field materialIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  materialIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextGenerator_SpecialCharacter, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextGenerator_SpecialCharacter, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextGenerator_SpecialCharacter, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextGenerator_SpecialCharacter, materialIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextGenerator_SpecialCharacter) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
