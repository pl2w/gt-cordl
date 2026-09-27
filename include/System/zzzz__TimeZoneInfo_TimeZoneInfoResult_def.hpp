#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TimeZoneInfoResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo_TimeZoneInfoResult)
// Forward declare root types
namespace GlobalNamespace {
struct TimeZoneInfo_TimeZoneInfoResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult, "System", "TimeZoneInfo/TimeZoneInfoResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.TimeZoneInfo/TimeZoneInfoResult
struct CORDL_TYPE TimeZoneInfo_TimeZoneInfoResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeZoneInfo_TimeZoneInfoResult_Unwrapped
enum struct __TimeZoneInfo_TimeZoneInfoResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_TimeZoneNotFoundException = static_cast<int32_t>(0x1),
__E_InvalidTimeZoneException = static_cast<int32_t>(0x2),
__E_SecurityException = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeZoneInfo_TimeZoneInfoResult_Unwrapped () const noexcept {
return static_cast<__TimeZoneInfo_TimeZoneInfoResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TimeZoneInfoResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeZoneInfo_TimeZoneInfoResult(int32_t  value__) noexcept;

/// @brief Field InvalidTimeZoneException value: I32(2)
static ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult const InvalidTimeZoneException;

/// @brief Field SecurityException value: I32(3)
static ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult const SecurityException;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult const Success;

/// @brief Field TimeZoneNotFoundException value: I32(1)
static ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult const TimeZoneNotFoundException;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
