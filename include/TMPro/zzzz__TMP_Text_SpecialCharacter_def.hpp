#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_SpecialCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text_SpecialCharacter)
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Text_SpecialCharacter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Text_SpecialCharacter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Text_SpecialCharacter, "TMPro", "TMP_Text/SpecialCharacter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Text/SpecialCharacter
struct CORDL_TYPE TMP_Text_SpecialCharacter {
public:
// Declarations
/// @brief Method .ctor, addr 0xb3a79dc, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::TMPro::TMP_Character*  character, int32_t  materialIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_Text_SpecialCharacter() ;

// Ctor Parameters [CppParam { name: "character", ty: "::TMPro::TMP_Character*", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Text_SpecialCharacter(::TMPro::TMP_Character*  character, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset, ::UnityW<::UnityEngine::Material>  material, int32_t  materialIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field character, offset: 0x0, size: 0x8, def value: None
 ::TMPro::TMP_Character*  character;

/// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  fontAsset;

/// @brief Field material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field materialIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  materialIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Text_SpecialCharacter, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_SpecialCharacter, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_SpecialCharacter, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_SpecialCharacter, materialIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Text_SpecialCharacter) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
