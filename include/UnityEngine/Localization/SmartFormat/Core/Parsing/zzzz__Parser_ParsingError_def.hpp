#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Parser_ParsingError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Parser_ParsingError)
// Forward declare root types
namespace GlobalNamespace {
struct Parser_ParsingError;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Parser_ParsingError);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Parser_ParsingError, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser/ParsingError");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser/ParsingError
struct CORDL_TYPE Parser_ParsingError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Parser_ParsingError_Unwrapped
enum struct __Parser_ParsingError_Unwrapped : int32_t {
__E_TooManyClosingBraces = static_cast<int32_t>(0x1),
__E_TrailingOperatorsInSelector = static_cast<int32_t>(0x2),
__E_InvalidCharactersInSelector = static_cast<int32_t>(0x3),
__E_MissingClosingBrace = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Parser_ParsingError_Unwrapped () const noexcept {
return static_cast<__Parser_ParsingError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Parser_ParsingError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Parser_ParsingError(int32_t  value__) noexcept;

/// @brief Field InvalidCharactersInSelector value: I32(3)
static ::GlobalNamespace::Parser_ParsingError const InvalidCharactersInSelector;

/// @brief Field MissingClosingBrace value: I32(4)
static ::GlobalNamespace::Parser_ParsingError const MissingClosingBrace;

/// @brief Field TooManyClosingBraces value: I32(1)
static ::GlobalNamespace::Parser_ParsingError const TooManyClosingBraces;

/// @brief Field TrailingOperatorsInSelector value: I32(2)
static ::GlobalNamespace::Parser_ParsingError const TrailingOperatorsInSelector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Parser_ParsingError, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Parser_ParsingError) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
