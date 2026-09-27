#pragma once
// IWYU pragma private; include "System/DateTimeParse_DTT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParse_DTT)
// Forward declare root types
namespace GlobalNamespace {
struct DateTimeParse_DTT;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DateTimeParse_DTT);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DateTimeParse_DTT, "System", "DateTimeParse/DTT");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DateTimeParse/DTT
struct CORDL_TYPE DateTimeParse_DTT {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimeParse_DTT_Unwrapped
enum struct __DateTimeParse_DTT_Unwrapped : int32_t {
__E_End = static_cast<int32_t>(0x0),
__E_NumEnd = static_cast<int32_t>(0x1),
__E_NumAmpm = static_cast<int32_t>(0x2),
__E_NumSpace = static_cast<int32_t>(0x3),
__E_NumDatesep = static_cast<int32_t>(0x4),
__E_NumTimesep = static_cast<int32_t>(0x5),
__E_MonthEnd = static_cast<int32_t>(0x6),
__E_MonthSpace = static_cast<int32_t>(0x7),
__E_MonthDatesep = static_cast<int32_t>(0x8),
__E_NumDatesuff = static_cast<int32_t>(0x9),
__E_NumTimesuff = static_cast<int32_t>(0xa),
__E_DayOfWeek = static_cast<int32_t>(0xb),
__E_YearSpace = static_cast<int32_t>(0xc),
__E_YearDateSep = static_cast<int32_t>(0xd),
__E_YearEnd = static_cast<int32_t>(0xe),
__E_TimeZone = static_cast<int32_t>(0xf),
__E_Era = static_cast<int32_t>(0x10),
__E_NumUTCTimeMark = static_cast<int32_t>(0x11),
__E_Unk = static_cast<int32_t>(0x12),
__E_NumLocalTimeMark = static_cast<int32_t>(0x13),
__E_Max = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeParse_DTT_Unwrapped () const noexcept {
return static_cast<__DateTimeParse_DTT_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse_DTT() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DateTimeParse_DTT(int32_t  value__) noexcept;

/// @brief Field DayOfWeek value: I32(11)
static ::GlobalNamespace::DateTimeParse_DTT const DayOfWeek;

/// @brief Field End value: I32(0)
static ::GlobalNamespace::DateTimeParse_DTT const End;

/// @brief Field Era value: I32(16)
static ::GlobalNamespace::DateTimeParse_DTT const Era;

/// @brief Field Max value: I32(20)
static ::GlobalNamespace::DateTimeParse_DTT const Max;

/// @brief Field MonthDatesep value: I32(8)
static ::GlobalNamespace::DateTimeParse_DTT const MonthDatesep;

/// @brief Field MonthEnd value: I32(6)
static ::GlobalNamespace::DateTimeParse_DTT const MonthEnd;

/// @brief Field MonthSpace value: I32(7)
static ::GlobalNamespace::DateTimeParse_DTT const MonthSpace;

/// @brief Field NumAmpm value: I32(2)
static ::GlobalNamespace::DateTimeParse_DTT const NumAmpm;

/// @brief Field NumDatesep value: I32(4)
static ::GlobalNamespace::DateTimeParse_DTT const NumDatesep;

/// @brief Field NumDatesuff value: I32(9)
static ::GlobalNamespace::DateTimeParse_DTT const NumDatesuff;

/// @brief Field NumEnd value: I32(1)
static ::GlobalNamespace::DateTimeParse_DTT const NumEnd;

/// @brief Field NumLocalTimeMark value: I32(19)
static ::GlobalNamespace::DateTimeParse_DTT const NumLocalTimeMark;

/// @brief Field NumSpace value: I32(3)
static ::GlobalNamespace::DateTimeParse_DTT const NumSpace;

/// @brief Field NumTimesep value: I32(5)
static ::GlobalNamespace::DateTimeParse_DTT const NumTimesep;

/// @brief Field NumTimesuff value: I32(10)
static ::GlobalNamespace::DateTimeParse_DTT const NumTimesuff;

/// @brief Field NumUTCTimeMark value: I32(17)
static ::GlobalNamespace::DateTimeParse_DTT const NumUTCTimeMark;

/// @brief Field TimeZone value: I32(15)
static ::GlobalNamespace::DateTimeParse_DTT const TimeZone;

/// @brief Field Unk value: I32(18)
static ::GlobalNamespace::DateTimeParse_DTT const Unk;

/// @brief Field YearDateSep value: I32(13)
static ::GlobalNamespace::DateTimeParse_DTT const YearDateSep;

/// @brief Field YearEnd value: I32(14)
static ::GlobalNamespace::DateTimeParse_DTT const YearEnd;

/// @brief Field YearSpace value: I32(12)
static ::GlobalNamespace::DateTimeParse_DTT const YearSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DateTimeParse_DTT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DateTimeParse_DTT) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
