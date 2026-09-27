#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_DateMapping_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UmAlQuraCalendar)
namespace GlobalNamespace {
struct UmAlQuraCalendar_DateMapping;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class UmAlQuraCalendar;
}
// Write type traits
MARK_REF_T(::System::Globalization::UmAlQuraCalendar*);
DEFINE_IL2CPP_CLASS(::System::Globalization::UmAlQuraCalendar*, "System.Globalization", "UmAlQuraCalendar");
// Dependencies System.DateTime, System.Globalization.Calendar, System.Globalization.UmAlQuraCalendar::DateMapping
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.UmAlQuraCalendar
class CORDL_TYPE UmAlQuraCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
using DateMapping = ::GlobalNamespace::UmAlQuraCalendar_DateMapping;

 __declspec(property(get=get_BaseCalendarID)) int32_t  BaseCalendarID;

 __declspec(property(get=get_Eras)) ::ArrayW<int32_t>  Eras;

/// @brief Field HijriYearInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HijriYearInfo, put=setStaticF_HijriYearInfo)) ::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>  HijriYearInfo;

 __declspec(property(get=get_MaxSupportedDateTime)) ::System::DateTime  MaxSupportedDateTime;

 __declspec(property(get=get_MinSupportedDateTime)) ::System::DateTime  MinSupportedDateTime;

 __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax)) int32_t  TwoDigitYearMax;

 __declspec(property(get=get_ID)) int32_t  _cordl_ID;

/// @brief Field maxDate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_maxDate, put=setStaticF_maxDate)) ::System::DateTime  maxDate;

/// @brief Field minDate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_minDate, put=setStaticF_minDate)) ::System::DateTime  minDate;

/// @brief Method CheckEraRange, addr 0xa249868, size 0x78, virtual false, abstract: false, final false
static inline void CheckEraRange(int32_t  era) ;

/// @brief Method CheckTicksRange, addr 0xa249688, size 0x1e0, virtual false, abstract: false, final false
static inline void CheckTicksRange(int64_t  ticks) ;

/// @brief Method CheckYearMonthRange, addr 0xa249a20, size 0xdc, virtual false, abstract: false, final false
static inline void CheckYearMonthRange(int32_t  year, int32_t  month, int32_t  era) ;

/// @brief Method CheckYearRange, addr 0xa2498e0, size 0x140, virtual false, abstract: false, final false
static inline void CheckYearRange(int32_t  year, int32_t  era) ;

/// @brief Method ConvertGregorianToHijri, addr 0xa249afc, size 0x2ec, virtual false, abstract: false, final false
static inline void ConvertGregorianToHijri(::System::DateTime  time, ::by_ref<int32_t>  HijriYear, ::by_ref<int32_t>  HijriMonth, ::by_ref<int32_t>  HijriDay) ;

/// @brief Method ConvertHijriToGregorian, addr 0xa249470, size 0x154, virtual false, abstract: false, final false
static inline void ConvertHijriToGregorian(int32_t  HijriYear, int32_t  HijriMonth, int32_t  HijriDay, ::by_ref<int32_t>  yg, ::by_ref<int32_t>  mg, ::by_ref<int32_t>  dg) ;

/// @brief Method GetAbsoluteDateUmAlQura, addr 0xa2495c4, size 0xc4, virtual false, abstract: false, final false
static inline int64_t GetAbsoluteDateUmAlQura(int32_t  year, int32_t  month, int32_t  day) ;

/// @brief Method GetDatePart, addr 0xa249de8, size 0x188, virtual true, abstract: false, final false
inline int32_t GetDatePart(::System::DateTime  time, int32_t  part) ;

/// @brief Method GetDayOfMonth, addr 0xa249f70, size 0x14, virtual true, abstract: false, final false
inline int32_t GetDayOfMonth(::System::DateTime  time) ;

/// @brief Method GetDayOfWeek, addr 0xa249f84, size 0xa8, virtual true, abstract: false, final false
inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime  time) ;

/// @brief Method GetDaysInMonth, addr 0xa24a02c, size 0xb4, virtual true, abstract: false, final false
inline int32_t GetDaysInMonth(int32_t  year, int32_t  month, int32_t  era) ;

/// @brief Method GetDaysInYear, addr 0xa24a180, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetDaysInYear(int32_t  year, int32_t  era) ;

/// @brief Method GetEra, addr 0xa24a1ec, size 0x94, virtual true, abstract: false, final false
inline int32_t GetEra(::System::DateTime  time) ;

/// @brief Method GetMonth, addr 0xa24a2e4, size 0x14, virtual true, abstract: false, final false
inline int32_t GetMonth(::System::DateTime  time) ;

/// @brief Method GetMonthsInYear, addr 0xa24a2f8, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetMonthsInYear(int32_t  year, int32_t  era) ;

/// @brief Method GetYear, addr 0xa24a364, size 0x14, virtual true, abstract: false, final false
inline int32_t GetYear(::System::DateTime  time) ;

/// @brief Method InitDateMapping, addr 0xa24923c, size 0x160, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping> InitDateMapping() ;

/// @brief Method IsLeapYear, addr 0xa24a378, size 0x78, virtual true, abstract: false, final false
inline bool IsLeapYear(int32_t  year, int32_t  era) ;

static inline ::System::Globalization::UmAlQuraCalendar* New_ctor() ;

/// @brief Method RealGetDaysInYear, addr 0xa24a0e0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t RealGetDaysInYear(int32_t  year) ;

/// @brief Method ToDateTime, addr 0xa24a3f0, size 0x240, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, int32_t  era) ;

/// @brief Method ToFourDigitYear, addr 0xa24a788, size 0x130, virtual true, abstract: false, final false
inline int32_t ToFourDigitYear(int32_t  year) ;

/// @brief Method .ctor, addr 0xa24944c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping> getStaticF_HijriYearInfo() ;

static inline ::System::DateTime getStaticF_maxDate() ;

static inline ::System::DateTime getStaticF_minDate() ;

/// @brief Method get_BaseCalendarID, addr 0xa249460, size 0x8, virtual true, abstract: false, final false
inline int32_t get_BaseCalendarID() ;

/// @brief Method get_Eras, addr 0xa24a280, size 0x64, virtual true, abstract: false, final false
inline ::ArrayW<int32_t> get_Eras() ;

/// @brief Method get_ID, addr 0xa249468, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ID() ;

/// @brief Method get_MaxSupportedDateTime, addr 0xa2493f4, size 0x58, virtual true, abstract: false, final false
inline ::System::DateTime get_MaxSupportedDateTime() ;

/// @brief Method get_MinSupportedDateTime, addr 0xa24939c, size 0x58, virtual true, abstract: false, final false
inline ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_TwoDigitYearMax, addr 0xa24a630, size 0x44, virtual true, abstract: false, final false
inline int32_t get_TwoDigitYearMax() ;

static inline void setStaticF_HijriYearInfo(::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>  value) ;

static inline void setStaticF_maxDate(::System::DateTime  value) ;

static inline void setStaticF_minDate(::System::DateTime  value) ;

/// @brief Method set_TwoDigitYearMax, addr 0xa24a674, size 0x114, virtual true, abstract: false, final false
inline void set_TwoDigitYearMax(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UmAlQuraCalendar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UmAlQuraCalendar(UmAlQuraCalendar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UmAlQuraCalendar(UmAlQuraCalendar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::UmAlQuraCalendar) == 0x20, "Size mismatch!");

} // namespace end def System::Globalization
