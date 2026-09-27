#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime_DateTimeTypeCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime_DateTimeTypeCode)
// Forward declare root types
namespace GlobalNamespace {
struct XsdDateTime_DateTimeTypeCode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdDateTime_DateTimeTypeCode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdDateTime_DateTimeTypeCode, "System.Xml.Schema", "XsdDateTime/DateTimeTypeCode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/DateTimeTypeCode
struct CORDL_TYPE XsdDateTime_DateTimeTypeCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdDateTime_DateTimeTypeCode_Unwrapped
enum struct __XsdDateTime_DateTimeTypeCode_Unwrapped : int32_t {
__E_DateTime = static_cast<int32_t>(0x0),
__E_Time = static_cast<int32_t>(0x1),
__E_Date = static_cast<int32_t>(0x2),
__E_GYearMonth = static_cast<int32_t>(0x3),
__E_GYear = static_cast<int32_t>(0x4),
__E_GMonthDay = static_cast<int32_t>(0x5),
__E_GDay = static_cast<int32_t>(0x6),
__E_GMonth = static_cast<int32_t>(0x7),
__E_XdrDateTime = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDateTime_DateTimeTypeCode_Unwrapped () const noexcept {
return static_cast<__XsdDateTime_DateTimeTypeCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdDateTime_DateTimeTypeCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDateTime_DateTimeTypeCode(int32_t  value__) noexcept;

/// @brief Field Date value: I32(2)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const Date;

/// @brief Field DateTime value: I32(0)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const DateTime;

/// @brief Field GDay value: I32(6)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const GDay;

/// @brief Field GMonth value: I32(7)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const GMonth;

/// @brief Field GMonthDay value: I32(5)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const GMonthDay;

/// @brief Field GYear value: I32(4)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const GYear;

/// @brief Field GYearMonth value: I32(3)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const GYearMonth;

/// @brief Field Time value: I32(1)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const Time;

/// @brief Field XdrDateTime value: I32(8)
static ::GlobalNamespace::XsdDateTime_DateTimeTypeCode const XdrDateTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdDateTime_DateTimeTypeCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdDateTime_DateTimeTypeCode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
