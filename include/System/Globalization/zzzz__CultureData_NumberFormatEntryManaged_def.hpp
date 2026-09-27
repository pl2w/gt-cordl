#pragma once
// IWYU pragma private; include "System/Globalization/CultureData_NumberFormatEntryManaged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CultureData_NumberFormatEntryManaged)
// Forward declare root types
namespace GlobalNamespace {
struct CultureData_NumberFormatEntryManaged;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CultureData_NumberFormatEntryManaged);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CultureData_NumberFormatEntryManaged, "System.Globalization", "CultureData/NumberFormatEntryManaged");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.CultureData/NumberFormatEntryManaged
struct CORDL_TYPE CultureData_NumberFormatEntryManaged {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CultureData_NumberFormatEntryManaged() ;

// Ctor Parameters [CppParam { name: "currency_decimal_digits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_decimal_separator", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_group_separator", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_group_sizes0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_group_sizes1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_negative_pattern", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_positive_pattern", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currency_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nan_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "negative_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "negative_sign", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_decimal_digits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_decimal_separator", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_group_separator", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_group_sizes0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_group_sizes1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "number_negative_pattern", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "per_mille_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "percent_negative_pattern", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "percent_positive_pattern", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "percent_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "positive_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "positive_sign", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CultureData_NumberFormatEntryManaged(int32_t  currency_decimal_digits, int32_t  currency_decimal_separator, int32_t  currency_group_separator, int32_t  currency_group_sizes0, int32_t  currency_group_sizes1, int32_t  currency_negative_pattern, int32_t  currency_positive_pattern, int32_t  currency_symbol, int32_t  nan_symbol, int32_t  negative_infinity_symbol, int32_t  negative_sign, int32_t  number_decimal_digits, int32_t  number_decimal_separator, int32_t  number_group_separator, int32_t  number_group_sizes0, int32_t  number_group_sizes1, int32_t  number_negative_pattern, int32_t  per_mille_symbol, int32_t  percent_negative_pattern, int32_t  percent_positive_pattern, int32_t  percent_symbol, int32_t  positive_infinity_symbol, int32_t  positive_sign) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5c};

/// @brief Field currency_decimal_digits, offset: 0x0, size: 0x4, def value: None
 int32_t  currency_decimal_digits;

/// @brief Field currency_decimal_separator, offset: 0x4, size: 0x4, def value: None
 int32_t  currency_decimal_separator;

/// @brief Field currency_group_separator, offset: 0x8, size: 0x4, def value: None
 int32_t  currency_group_separator;

/// @brief Field currency_group_sizes0, offset: 0xc, size: 0x4, def value: None
 int32_t  currency_group_sizes0;

/// @brief Field currency_group_sizes1, offset: 0x10, size: 0x4, def value: None
 int32_t  currency_group_sizes1;

/// @brief Field currency_negative_pattern, offset: 0x14, size: 0x4, def value: None
 int32_t  currency_negative_pattern;

/// @brief Field currency_positive_pattern, offset: 0x18, size: 0x4, def value: None
 int32_t  currency_positive_pattern;

/// @brief Field currency_symbol, offset: 0x1c, size: 0x4, def value: None
 int32_t  currency_symbol;

/// @brief Field nan_symbol, offset: 0x20, size: 0x4, def value: None
 int32_t  nan_symbol;

/// @brief Field negative_infinity_symbol, offset: 0x24, size: 0x4, def value: None
 int32_t  negative_infinity_symbol;

/// @brief Field negative_sign, offset: 0x28, size: 0x4, def value: None
 int32_t  negative_sign;

/// @brief Field number_decimal_digits, offset: 0x2c, size: 0x4, def value: None
 int32_t  number_decimal_digits;

/// @brief Field number_decimal_separator, offset: 0x30, size: 0x4, def value: None
 int32_t  number_decimal_separator;

/// @brief Field number_group_separator, offset: 0x34, size: 0x4, def value: None
 int32_t  number_group_separator;

/// @brief Field number_group_sizes0, offset: 0x38, size: 0x4, def value: None
 int32_t  number_group_sizes0;

/// @brief Field number_group_sizes1, offset: 0x3c, size: 0x4, def value: None
 int32_t  number_group_sizes1;

/// @brief Field number_negative_pattern, offset: 0x40, size: 0x4, def value: None
 int32_t  number_negative_pattern;

/// @brief Field per_mille_symbol, offset: 0x44, size: 0x4, def value: None
 int32_t  per_mille_symbol;

/// @brief Field percent_negative_pattern, offset: 0x48, size: 0x4, def value: None
 int32_t  percent_negative_pattern;

/// @brief Field percent_positive_pattern, offset: 0x4c, size: 0x4, def value: None
 int32_t  percent_positive_pattern;

/// @brief Field percent_symbol, offset: 0x50, size: 0x4, def value: None
 int32_t  percent_symbol;

/// @brief Field positive_infinity_symbol, offset: 0x54, size: 0x4, def value: None
 int32_t  positive_infinity_symbol;

/// @brief Field positive_sign, offset: 0x58, size: 0x4, def value: None
 int32_t  positive_sign;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_decimal_digits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_decimal_separator) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_group_separator) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_group_sizes0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_group_sizes1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_negative_pattern) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_positive_pattern) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, currency_symbol) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, nan_symbol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, negative_infinity_symbol) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, negative_sign) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_decimal_digits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_decimal_separator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_group_separator) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_group_sizes0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_group_sizes1) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, number_negative_pattern) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, per_mille_symbol) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, percent_negative_pattern) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, percent_positive_pattern) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, percent_symbol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, positive_infinity_symbol) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CultureData_NumberFormatEntryManaged, positive_sign) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CultureData_NumberFormatEntryManaged) == 0x5c, "Size mismatch!");

} // namespace end def GlobalNamespace
