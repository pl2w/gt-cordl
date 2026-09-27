#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_Recipe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(MagicCauldron_Recipe)
namespace GlobalNamespace {
class MagicIngredientType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct MagicCauldron_Recipe;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MagicCauldron_Recipe);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron_Recipe, "", "MagicCauldron/Recipe");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MagicCauldron/Recipe
struct CORDL_TYPE MagicCauldron_Recipe {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron_Recipe() ;

// Ctor Parameters [CppParam { name: "recipeIngredients", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "successAudio", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }]
constexpr MagicCauldron_Recipe(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  recipeIngredients, ::UnityW<::UnityEngine::AudioClip>  successAudio) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field recipeIngredients, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  recipeIngredients;

/// @brief Field successAudio, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  successAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron_Recipe, recipeIngredients) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron_Recipe, successAudio) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron_Recipe) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
