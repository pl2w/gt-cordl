#pragma once
// IWYU pragma private; include "System/Globalization/FormatProvider_Number_NumberBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatProvider_Number_NumberBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct Number_FormatProvider_NumberBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_FormatProvider_NumberBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_FormatProvider_NumberBuffer, "System.Globalization", "FormatProvider/Number/NumberBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.FormatProvider/Number/NumberBuffer
struct CORDL_TYPE Number_FormatProvider_NumberBuffer {
public:
// Declarations
 __declspec(property(get=get_digits)) char16_t*  digits;

/// @brief Method get_digits, addr 0xaa02e3c, size 0x8, virtual false, abstract: false, final false
inline char16_t* get_digits() ;

// Ctor Parameters []
// @brief default ctor
constexpr Number_FormatProvider_NumberBuffer() ;

// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideDigits", ty: "char16_t*", modifiers: "", def_value: None, comment: None }]
constexpr Number_FormatProvider_NumberBuffer(int32_t  precision, int32_t  scale, bool  sign, char16_t*  overrideDigits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31676};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field precision, offset: 0x0, size: 0x4, def value: None
 int32_t  precision;

/// @brief Field scale, offset: 0x4, size: 0x4, def value: None
 int32_t  scale;

/// @brief Field sign, offset: 0x8, size: 0x1, def value: None
 bool  sign;

/// @brief Field overrideDigits, offset: 0x10, size: 0x8, def value: None
 char16_t*  overrideDigits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_FormatProvider_NumberBuffer, precision) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FormatProvider_NumberBuffer, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FormatProvider_NumberBuffer, sign) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_FormatProvider_NumberBuffer, overrideDigits) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_FormatProvider_NumberBuffer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
