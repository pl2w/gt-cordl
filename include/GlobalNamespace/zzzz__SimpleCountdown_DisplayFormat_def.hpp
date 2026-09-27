#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleCountdown_DisplayFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCountdown_DisplayFormat)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCountdown_DisplayFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCountdown_DisplayFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCountdown_DisplayFormat, "", "SimpleCountdown/DisplayFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SimpleCountdown/DisplayFormat
struct CORDL_TYPE SimpleCountdown_DisplayFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleCountdown_DisplayFormat_Unwrapped
enum struct __SimpleCountdown_DisplayFormat_Unwrapped : int32_t {
__E_DD_HH_MM_SS = static_cast<int32_t>(0x0),
__E_HH_MM_SS = static_cast<int32_t>(0x1),
__E_DD_HH_MM = static_cast<int32_t>(0x2),
__E_HH_MM = static_cast<int32_t>(0x3),
__E_MM_SS = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleCountdown_DisplayFormat_Unwrapped () const noexcept {
return static_cast<__SimpleCountdown_DisplayFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleCountdown_DisplayFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCountdown_DisplayFormat(int32_t  value__) noexcept;

/// @brief Field DD_HH_MM value: I32(2)
static ::GlobalNamespace::SimpleCountdown_DisplayFormat const DD_HH_MM;

/// @brief Field DD_HH_MM_SS value: I32(0)
static ::GlobalNamespace::SimpleCountdown_DisplayFormat const DD_HH_MM_SS;

/// @brief Field HH_MM value: I32(3)
static ::GlobalNamespace::SimpleCountdown_DisplayFormat const HH_MM;

/// @brief Field HH_MM_SS value: I32(1)
static ::GlobalNamespace::SimpleCountdown_DisplayFormat const HH_MM_SS;

/// @brief Field MM_SS value: I32(4)
static ::GlobalNamespace::SimpleCountdown_DisplayFormat const MM_SS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCountdown_DisplayFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCountdown_DisplayFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
