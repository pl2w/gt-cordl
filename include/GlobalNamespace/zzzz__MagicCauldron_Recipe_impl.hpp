#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_Recipe.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_Recipe_def.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "recipeIngredients", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "successAudio", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MagicCauldron_Recipe::MagicCauldron_Recipe(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  recipeIngredients, ::UnityW<::UnityEngine::AudioClip>  successAudio) noexcept  {
this->recipeIngredients = recipeIngredients;
this->successAudio = successAudio;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron_Recipe::MagicCauldron_Recipe()   {
}
