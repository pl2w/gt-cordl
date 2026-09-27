#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeSpanFormatOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormatOptions)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
struct TimeSpanFormatOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, "UnityEngine.Localization.SmartFormat.Utilities", "TimeSpanFormatOptions");
// [Flags]
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions
struct CORDL_TYPE TimeSpanFormatOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeSpanFormatOptions_Unwrapped
enum struct __TimeSpanFormatOptions_Unwrapped : int32_t {
__E_InheritDefaults = static_cast<int32_t>(0x0),
__E_Abbreviate = static_cast<int32_t>(0x1),
__E_AbbreviateOff = static_cast<int32_t>(0x2),
__E_LessThan = static_cast<int32_t>(0x4),
__E_LessThanOff = static_cast<int32_t>(0x8),
__E_TruncateShortest = static_cast<int32_t>(0x10),
__E_TruncateAuto = static_cast<int32_t>(0x20),
__E_TruncateFill = static_cast<int32_t>(0x40),
__E_TruncateFull = static_cast<int32_t>(0x80),
__E_RangeMilliSeconds = static_cast<int32_t>(0x100),
__E_RangeSeconds = static_cast<int32_t>(0x200),
__E_RangeMinutes = static_cast<int32_t>(0x400),
__E_RangeHours = static_cast<int32_t>(0x800),
__E_RangeDays = static_cast<int32_t>(0x1000),
__E_RangeWeeks = static_cast<int32_t>(0x2000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSpanFormatOptions_Unwrapped () const noexcept {
return static_cast<__TimeSpanFormatOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormatOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanFormatOptions(int32_t  value__) noexcept;

/// @brief Field Abbreviate value: I32(1)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const Abbreviate;

/// @brief Field AbbreviateOff value: I32(2)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const AbbreviateOff;

/// @brief Field InheritDefaults value: I32(0)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const InheritDefaults;

/// @brief Field LessThan value: I32(4)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const LessThan;

/// @brief Field LessThanOff value: I32(8)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const LessThanOff;

/// @brief Field RangeDays value: I32(4096)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeDays;

/// @brief Field RangeHours value: I32(2048)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeHours;

/// @brief Field RangeMilliSeconds value: I32(256)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeMilliSeconds;

/// @brief Field RangeMinutes value: I32(1024)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeMinutes;

/// @brief Field RangeSeconds value: I32(512)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeSeconds;

/// @brief Field RangeWeeks value: I32(8192)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeWeeks;

/// @brief Field TruncateAuto value: I32(32)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const TruncateAuto;

/// @brief Field TruncateFill value: I32(64)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const TruncateFill;

/// @brief Field TruncateFull value: I32(128)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const TruncateFull;

/// @brief Field TruncateShortest value: I32(16)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const TruncateShortest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
