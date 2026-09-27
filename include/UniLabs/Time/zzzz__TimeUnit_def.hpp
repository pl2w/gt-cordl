#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeUnit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeUnit)
// Forward declare root types
namespace UniLabs::Time {
struct TimeUnit;
}
// Write type traits
MARK_VAL_T(::UniLabs::Time::TimeUnit);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeUnit, "UniLabs.Time", "TimeUnit");
// Dependencies 
namespace UniLabs::Time {
// Is value type: true
// CS Name: UniLabs.Time.TimeUnit
struct CORDL_TYPE TimeUnit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeUnit_Unwrapped
enum struct __TimeUnit_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Milliseconds = static_cast<int32_t>(0x1),
__E_Seconds = static_cast<int32_t>(0x2),
__E_Minutes = static_cast<int32_t>(0x3),
__E_Hours = static_cast<int32_t>(0x4),
__E_Days = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeUnit_Unwrapped () const noexcept {
return static_cast<__TimeUnit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeUnit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeUnit(int32_t  value__) noexcept;

/// @brief Field Days value: I32(5)
static ::UniLabs::Time::TimeUnit const Days;

/// @brief Field Hours value: I32(4)
static ::UniLabs::Time::TimeUnit const Hours;

/// @brief Field Milliseconds value: I32(1)
static ::UniLabs::Time::TimeUnit const Milliseconds;

/// @brief Field Minutes value: I32(3)
static ::UniLabs::Time::TimeUnit const Minutes;

/// @brief Field None value: I32(0)
static ::UniLabs::Time::TimeUnit const None;

/// @brief Field Seconds value: I32(2)
static ::UniLabs::Time::TimeUnit const Seconds;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::TimeUnit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::TimeUnit) == 0x4, "Size mismatch!");

} // namespace end def UniLabs::Time
