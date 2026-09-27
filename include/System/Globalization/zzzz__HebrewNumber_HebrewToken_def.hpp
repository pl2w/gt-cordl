#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber_HebrewToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber_HebrewToken)
// Forward declare root types
namespace GlobalNamespace {
struct HebrewNumber_HebrewToken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HebrewNumber_HebrewToken);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HebrewNumber_HebrewToken, "System.Globalization", "HebrewNumber/HebrewToken");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HebrewToken
struct CORDL_TYPE HebrewNumber_HebrewToken {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __HebrewNumber_HebrewToken_Unwrapped
enum struct __HebrewNumber_HebrewToken_Unwrapped : int16_t {
__E_Invalid = static_cast<int16_t>(0xffff),
__E_Digit400 = static_cast<int16_t>(0x0),
__E_Digit200_300 = static_cast<int16_t>(0x1),
__E_Digit100 = static_cast<int16_t>(0x2),
__E_Digit10 = static_cast<int16_t>(0x3),
__E_Digit1 = static_cast<int16_t>(0x4),
__E_Digit6_7 = static_cast<int16_t>(0x5),
__E_Digit7 = static_cast<int16_t>(0x6),
__E_Digit9 = static_cast<int16_t>(0x7),
__E_SingleQuote = static_cast<int16_t>(0x8),
__E_DoubleQuote = static_cast<int16_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HebrewNumber_HebrewToken_Unwrapped () const noexcept {
return static_cast<__HebrewNumber_HebrewToken_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HebrewNumber_HebrewToken() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr HebrewNumber_HebrewToken(int16_t  value__) noexcept;

/// @brief Field Digit1 value: I16(4)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit1;

/// @brief Field Digit10 value: I16(3)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit10;

/// @brief Field Digit100 value: I16(2)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit100;

/// @brief Field Digit200_300 value: I16(1)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit200_300;

/// @brief Field Digit400 value: I16(0)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit400;

/// @brief Field Digit6_7 value: I16(5)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit6_7;

/// @brief Field Digit7 value: I16(6)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit7;

/// @brief Field Digit9 value: I16(7)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Digit9;

/// @brief Field DoubleQuote value: I16(9)
static ::GlobalNamespace::HebrewNumber_HebrewToken const DoubleQuote;

/// @brief Field Invalid value: I16(-1)
static ::GlobalNamespace::HebrewNumber_HebrewToken const Invalid;

/// @brief Field SingleQuote value: I16(8)
static ::GlobalNamespace::HebrewNumber_HebrewToken const SingleQuote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HebrewNumber_HebrewToken, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HebrewNumber_HebrewToken) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
