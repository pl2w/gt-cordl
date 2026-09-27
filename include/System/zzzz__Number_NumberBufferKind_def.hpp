#pragma once
// IWYU pragma private; include "System/Number_NumberBufferKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_NumberBufferKind)
// Forward declare root types
namespace GlobalNamespace {
struct Number_NumberBufferKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_NumberBufferKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_NumberBufferKind, "System", "Number/NumberBufferKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/NumberBufferKind
struct CORDL_TYPE Number_NumberBufferKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Number_NumberBufferKind_Unwrapped
enum struct __Number_NumberBufferKind_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x0u),
__E_Integer = static_cast<uint8_t>(0x1u),
__E_Decimal = static_cast<uint8_t>(0x2u),
__E_FloatingPoint = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Number_NumberBufferKind_Unwrapped () const noexcept {
return static_cast<__Number_NumberBufferKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Number_NumberBufferKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Number_NumberBufferKind(uint8_t  value__) noexcept;

/// @brief Field Decimal value: U8(2)
static ::GlobalNamespace::Number_NumberBufferKind const Decimal;

/// @brief Field FloatingPoint value: U8(3)
static ::GlobalNamespace::Number_NumberBufferKind const FloatingPoint;

/// @brief Field Integer value: U8(1)
static ::GlobalNamespace::Number_NumberBufferKind const Integer;

/// @brief Field Unknown value: U8(0)
static ::GlobalNamespace::Number_NumberBufferKind const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_NumberBufferKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_NumberBufferKind) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
