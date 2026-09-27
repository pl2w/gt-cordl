#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberFormatKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_NumberFormatKind)
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_NumberFormatKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_NumberFormatKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_NumberFormatKind, "Unity.Burst", "BurstString/NumberFormatKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberFormatKind
struct CORDL_TYPE BurstString_NumberFormatKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __BurstString_NumberFormatKind_Unwrapped
enum struct __BurstString_NumberFormatKind_Unwrapped : uint8_t {
__E_General = static_cast<uint8_t>(0x0u),
__E_Decimal = static_cast<uint8_t>(0x1u),
__E_DecimalForceSigned = static_cast<uint8_t>(0x2u),
__E_Hexadecimal = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BurstString_NumberFormatKind_Unwrapped () const noexcept {
return static_cast<__BurstString_NumberFormatKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_NumberFormatKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_NumberFormatKind(uint8_t  value__) noexcept;

/// @brief Field Decimal value: U8(1)
static ::GlobalNamespace::BurstString_NumberFormatKind const Decimal;

/// @brief Field DecimalForceSigned value: U8(2)
static ::GlobalNamespace::BurstString_NumberFormatKind const DecimalForceSigned;

/// @brief Field General value: U8(0)
static ::GlobalNamespace::BurstString_NumberFormatKind const General;

/// @brief Field Hexadecimal value: U8(3)
static ::GlobalNamespace::BurstString_NumberFormatKind const Hexadecimal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_NumberFormatKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_NumberFormatKind) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
