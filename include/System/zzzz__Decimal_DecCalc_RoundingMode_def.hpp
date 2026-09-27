#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_RoundingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal_DecCalc_RoundingMode)
// Forward declare root types
namespace GlobalNamespace {
struct DecCalc_Decimal_RoundingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecCalc_Decimal_RoundingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecCalc_Decimal_RoundingMode, "System", "Decimal/DecCalc/RoundingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Decimal/DecCalc/RoundingMode
struct CORDL_TYPE DecCalc_Decimal_RoundingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DecCalc_Decimal_RoundingMode_Unwrapped
enum struct __DecCalc_Decimal_RoundingMode_Unwrapped : int32_t {
__E_ToEven = static_cast<int32_t>(0x0),
__E_AwayFromZero = static_cast<int32_t>(0x1),
__E_Truncate = static_cast<int32_t>(0x2),
__E_Floor = static_cast<int32_t>(0x3),
__E_Ceiling = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DecCalc_Decimal_RoundingMode_Unwrapped () const noexcept {
return static_cast<__DecCalc_Decimal_RoundingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DecCalc_Decimal_RoundingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecCalc_Decimal_RoundingMode(int32_t  value__) noexcept;

/// @brief Field AwayFromZero value: I32(1)
static ::GlobalNamespace::DecCalc_Decimal_RoundingMode const AwayFromZero;

/// @brief Field Ceiling value: I32(4)
static ::GlobalNamespace::DecCalc_Decimal_RoundingMode const Ceiling;

/// @brief Field Floor value: I32(3)
static ::GlobalNamespace::DecCalc_Decimal_RoundingMode const Floor;

/// @brief Field ToEven value: I32(0)
static ::GlobalNamespace::DecCalc_Decimal_RoundingMode const ToEven;

/// @brief Field Truncate value: I32(2)
static ::GlobalNamespace::DecCalc_Decimal_RoundingMode const Truncate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecCalc_Decimal_RoundingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecCalc_Decimal_RoundingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
