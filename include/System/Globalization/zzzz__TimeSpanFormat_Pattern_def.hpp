#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat_Pattern.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat_Pattern)
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanFormat_Pattern;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanFormat_Pattern);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanFormat_Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanFormat/Pattern
struct CORDL_TYPE TimeSpanFormat_Pattern {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeSpanFormat_Pattern_Unwrapped
enum struct __TimeSpanFormat_Pattern_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Minimum = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSpanFormat_Pattern_Unwrapped () const noexcept {
return static_cast<__TimeSpanFormat_Pattern_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormat_Pattern() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanFormat_Pattern(int32_t  value__) noexcept;

/// @brief Field Full value: I32(2)
static ::GlobalNamespace::TimeSpanFormat_Pattern const Full;

/// @brief Field Minimum value: I32(1)
static ::GlobalNamespace::TimeSpanFormat_Pattern const Minimum;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TimeSpanFormat_Pattern const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanFormat_Pattern, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanFormat_Pattern) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
