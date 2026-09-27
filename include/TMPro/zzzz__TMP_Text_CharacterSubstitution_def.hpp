#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_CharacterSubstitution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text_CharacterSubstitution)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Text_CharacterSubstitution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Text_CharacterSubstitution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Text_CharacterSubstitution, "TMPro", "TMP_Text/CharacterSubstitution");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Text/CharacterSubstitution
struct CORDL_TYPE TMP_Text_CharacterSubstitution {
public:
// Declarations
/// @brief Method .ctor, addr 0xb3a79d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  index, uint32_t  unicode) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_Text_CharacterSubstitution() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Text_CharacterSubstitution(int32_t  index, uint32_t  unicode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23030};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
 uint32_t  unicode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Text_CharacterSubstitution, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_CharacterSubstitution, unicode) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Text_CharacterSubstitution) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
