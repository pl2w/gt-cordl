#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectingUtilities_CharacterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectingUtilities_CharacterType)
// Forward declare root types
namespace GlobalNamespace {
struct TextSelectingUtilities_CharacterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextSelectingUtilities_CharacterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextSelectingUtilities_CharacterType, "UnityEngine", "TextSelectingUtilities/CharacterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextSelectingUtilities/CharacterType
struct CORDL_TYPE TextSelectingUtilities_CharacterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextSelectingUtilities_CharacterType_Unwrapped
enum struct __TextSelectingUtilities_CharacterType_Unwrapped : int32_t {
__E_LetterLike = static_cast<int32_t>(0x0),
__E_Symbol = static_cast<int32_t>(0x1),
__E_Symbol2 = static_cast<int32_t>(0x2),
__E_WhiteSpace = static_cast<int32_t>(0x3),
__E_NewLine = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextSelectingUtilities_CharacterType_Unwrapped () const noexcept {
return static_cast<__TextSelectingUtilities_CharacterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextSelectingUtilities_CharacterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextSelectingUtilities_CharacterType(int32_t  value__) noexcept;

/// @brief Field LetterLike value: I32(0)
static ::GlobalNamespace::TextSelectingUtilities_CharacterType const LetterLike;

/// @brief Field NewLine value: I32(4)
static ::GlobalNamespace::TextSelectingUtilities_CharacterType const NewLine;

/// @brief Field Symbol value: I32(1)
static ::GlobalNamespace::TextSelectingUtilities_CharacterType const Symbol;

/// @brief Field Symbol2 value: I32(2)
static ::GlobalNamespace::TextSelectingUtilities_CharacterType const Symbol2;

/// @brief Field WhiteSpace value: I32(3)
static ::GlobalNamespace::TextSelectingUtilities_CharacterType const WhiteSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextSelectingUtilities_CharacterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextSelectingUtilities_CharacterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
