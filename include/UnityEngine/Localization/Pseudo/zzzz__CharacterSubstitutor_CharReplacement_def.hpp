#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/CharacterSubstitutor_CharReplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CharacterSubstitutor_CharReplacement)
// Forward declare root types
namespace GlobalNamespace {
struct CharacterSubstitutor_CharReplacement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CharacterSubstitutor_CharReplacement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CharacterSubstitutor_CharReplacement, "UnityEngine.Localization.Pseudo", "CharacterSubstitutor/CharReplacement");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Pseudo.CharacterSubstitutor/CharReplacement
struct CORDL_TYPE CharacterSubstitutor_CharReplacement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CharacterSubstitutor_CharReplacement() ;

// Ctor Parameters [CppParam { name: "original", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "replacement", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr CharacterSubstitutor_CharReplacement(char16_t  original, char16_t  replacement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field original, offset: 0x0, size: 0x2, def value: None
 char16_t  original;

/// @brief Field replacement, offset: 0x2, size: 0x2, def value: None
 char16_t  replacement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CharacterSubstitutor_CharReplacement, original) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CharacterSubstitutor_CharReplacement, replacement) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CharacterSubstitutor_CharReplacement) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
