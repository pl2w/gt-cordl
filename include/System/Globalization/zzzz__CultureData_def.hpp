#pragma once
// IWYU pragma private; include "System/Globalization/CultureData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CalendarData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureData)
namespace GlobalNamespace {
struct CultureData_NumberFormatEntryManaged;
}
namespace System::Globalization {
class CalendarData;
}
namespace System::Globalization {
struct CalendarId;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::Globalization {
class CultureData;
}
// Write type traits
MARK_REF_T(::System::Globalization::CultureData*);
DEFINE_IL2CPP_CLASS(::System::Globalization::CultureData*, "System.Globalization", "CultureData");
// Dependencies System.Globalization.CalendarData, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CultureData
class CORDL_TYPE CultureData : public ::System::Object {
public:
// Declarations
using NumberFormatEntryManaged = ::GlobalNamespace::CultureData_NumberFormatEntryManaged;

 __declspec(property(get=get_CalendarIds)) ::ArrayW<int32_t>  CalendarIds;

 __declspec(property(get=get_CultureName)) ::StringW  CultureName;

 __declspec(property(get=get_IFIRSTDAYOFWEEK)) int32_t  IFIRSTDAYOFWEEK;

 __declspec(property(get=get_IFIRSTWEEKOFYEAR)) int32_t  IFIRSTWEEKOFYEAR;

 __declspec(property(get=get_IsInvariantCulture)) bool  IsInvariantCulture;

 __declspec(property(get=get_LongTimes)) ::ArrayW<::StringW>  LongTimes;

 __declspec(property(get=get_SAM1159)) ::StringW  SAM1159;

 __declspec(property(get=get_SCOMPAREINFO)) ::StringW  SCOMPAREINFO;

 __declspec(property(get=get_SISO639LANGNAME)) ::StringW  SISO639LANGNAME;

 __declspec(property(get=get_SPM2359)) ::StringW  SPM2359;

 __declspec(property(get=get_STEXTINFO)) ::StringW  STEXTINFO;

 __declspec(property(get=get_ShortTimes)) ::ArrayW<::StringW>  ShortTimes;

 __declspec(property(get=get_TimeSeparator)) ::StringW  TimeSeparator;

 __declspec(property(get=get_UseUserOverride)) bool  UseUserOverride;

/// @brief Field bUseOverrides, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_bUseOverrides, put=__cordl_internal_set_bUseOverrides)) bool  bUseOverrides;

/// @brief Field calendarId, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_calendarId, put=__cordl_internal_set_calendarId)) int32_t  calendarId;

/// @brief Field calendars, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_calendars, put=__cordl_internal_set_calendars)) ::ArrayW<::System::Globalization::CalendarData*>  calendars;

/// @brief Field iDefaultAnsiCodePage, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_iDefaultAnsiCodePage, put=__cordl_internal_set_iDefaultAnsiCodePage)) int32_t  iDefaultAnsiCodePage;

/// @brief Field iDefaultEbcdicCodePage, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_iDefaultEbcdicCodePage, put=__cordl_internal_set_iDefaultEbcdicCodePage)) int32_t  iDefaultEbcdicCodePage;

/// @brief Field iDefaultMacCodePage, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_iDefaultMacCodePage, put=__cordl_internal_set_iDefaultMacCodePage)) int32_t  iDefaultMacCodePage;

/// @brief Field iDefaultOemCodePage, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_iDefaultOemCodePage, put=__cordl_internal_set_iDefaultOemCodePage)) int32_t  iDefaultOemCodePage;

/// @brief Field iFirstDayOfWeek, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_iFirstDayOfWeek, put=__cordl_internal_set_iFirstDayOfWeek)) int32_t  iFirstDayOfWeek;

/// @brief Field iFirstWeekOfYear, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_iFirstWeekOfYear, put=__cordl_internal_set_iFirstWeekOfYear)) int32_t  iFirstWeekOfYear;

/// @brief Field isRightToLeft, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRightToLeft, put=__cordl_internal_set_isRightToLeft)) bool  isRightToLeft;

/// @brief Field numberIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_numberIndex, put=__cordl_internal_set_numberIndex)) int32_t  numberIndex;

/// @brief Field sAM1159, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sAM1159, put=__cordl_internal_set_sAM1159)) ::StringW  sAM1159;

/// @brief Field sISO639Language, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sISO639Language, put=__cordl_internal_set_sISO639Language)) ::StringW  sISO639Language;

/// @brief Field sListSeparator, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sListSeparator, put=__cordl_internal_set_sListSeparator)) ::StringW  sListSeparator;

/// @brief Field sPM2359, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sPM2359, put=__cordl_internal_set_sPM2359)) ::StringW  sPM2359;

/// @brief Field sRealName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sRealName, put=__cordl_internal_set_sRealName)) ::StringW  sRealName;

/// @brief Field sTimeSeparator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sTimeSeparator, put=__cordl_internal_set_sTimeSeparator)) ::StringW  sTimeSeparator;

/// @brief Field s_Invariant, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Invariant, put=setStaticF_s_Invariant)) ::System::Globalization::CultureData*  s_Invariant;

/// @brief Field saLongTimes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_saLongTimes, put=__cordl_internal_set_saLongTimes)) ::ArrayW<::StringW>  saLongTimes;

/// @brief Field saShortTimes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_saShortTimes, put=__cordl_internal_set_saShortTimes)) ::ArrayW<::StringW>  saShortTimes;

/// @brief Field waCalendars, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_waCalendars, put=__cordl_internal_set_waCalendars)) ::ArrayW<int32_t>  waCalendars;

/// @brief Method AbbrevEraNames, addr 0xa24bb80, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AbbrevEraNames(int32_t  calendarId) ;

/// @brief Method AbbreviatedDayNames, addr 0xa24bc28, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AbbreviatedDayNames(int32_t  calendarId) ;

/// @brief Method AbbreviatedEnglishEraNames, addr 0xa24bb9c, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AbbreviatedEnglishEraNames(int32_t  calendarId) ;

/// @brief Method AbbreviatedGenitiveMonthNames, addr 0xa24bc98, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AbbreviatedGenitiveMonthNames(int32_t  calendarId) ;

/// @brief Method AbbreviatedMonthNames, addr 0xa24bc7c, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AbbreviatedMonthNames(int32_t  calendarId) ;

/// @brief Method DateSeparator, addr 0xa24bcec, size 0xac, virtual false, abstract: false, final false
inline ::StringW DateSeparator(int32_t  calendarId) ;

/// @brief Method DayNames, addr 0xa24bc0c, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> DayNames(int32_t  calendarId) ;

/// @brief Method EraNames, addr 0xa24bb64, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> EraNames(int32_t  calendarId) ;

/// @brief Method GenitiveMonthNames, addr 0xa24bc60, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GenitiveMonthNames(int32_t  calendarId) ;

/// @brief Method GetCalendar, addr 0xa24b6d4, size 0x134, virtual false, abstract: false, final false
inline ::System::Globalization::CalendarData* GetCalendar(int32_t  calendarId) ;

/// @brief Method GetCalendarIds, addr 0xa24ba30, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<::System::Globalization::CalendarId> GetCalendarIds() ;

/// @brief Method GetCultureData, addr 0xa24b4ac, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureData* GetCultureData(::StringW  cultureName, bool  useUserOverride) ;

/// @brief Method GetCultureData, addr 0xa24b59c, size 0x134, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureData* GetCultureData(::StringW  cultureName, bool  useUserOverride, int32_t  datetimeIndex, int32_t  calendarId, int32_t  numberIndex, ::StringW  iso2lang, int32_t  ansiCodePage, int32_t  oemCodePage, int32_t  macCodePage, int32_t  ebcdicCodePage, bool  rightToLeft, ::StringW  listSeparator) ;

/// @brief Method GetDateSeparator, addr 0xa24bd98, size 0x48, virtual false, abstract: false, final false
static inline ::StringW GetDateSeparator(::StringW  format) ;

/// @brief Method GetNFIValues, addr 0xa24c268, size 0x258, virtual false, abstract: false, final false
inline void GetNFIValues(::System::Globalization::NumberFormatInfo*  nfi) ;

/// @brief Method GetSeparator, addr 0xa24bde0, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetSeparator(::StringW  format, ::StringW  timeParts) ;

/// @brief Method IndexOfTimePart, addr 0xa24bec0, size 0xec, virtual false, abstract: false, final false
static inline int32_t IndexOfTimePart(::StringW  format, int32_t  startIndex, ::StringW  timeParts) ;

/// @brief Method LeapYearMonthNames, addr 0xa24bcb4, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> LeapYearMonthNames(int32_t  calendarId) ;

/// @brief Method LongDates, addr 0xa24bbd4, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> LongDates(int32_t  calendarId) ;

/// @brief Method MonthDay, addr 0xa24bcd0, size 0x1c, virtual false, abstract: false, final false
inline ::StringW MonthDay(int32_t  calendarId) ;

/// @brief Method MonthNames, addr 0xa24bc44, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> MonthNames(int32_t  calendarId) ;

static inline ::System::Globalization::CultureData* New_ctor(::StringW  name) ;

/// @brief Method ReescapeWin32String, addr 0xa24c154, size 0x4, virtual false, abstract: false, final false
static inline ::StringW ReescapeWin32String(::StringW  str) ;

/// @brief Method ReescapeWin32Strings, addr 0xa24c150, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> ReescapeWin32Strings(::ArrayW<::StringW>  array) ;

/// @brief Method ShortDates, addr 0xa24bbb8, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> ShortDates(int32_t  calendarId) ;

/// @brief Method UnescapeNlsString, addr 0xa24bfac, size 0x1a4, virtual false, abstract: false, final false
static inline ::StringW UnescapeNlsString(::StringW  str, int32_t  start, int32_t  end) ;

/// @brief Method YearMonths, addr 0xa24bbf0, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> YearMonths(int32_t  calendarId) ;

constexpr bool const& __cordl_internal_get_bUseOverrides() const;

constexpr bool& __cordl_internal_get_bUseOverrides() ;

constexpr int32_t const& __cordl_internal_get_calendarId() const;

constexpr int32_t& __cordl_internal_get_calendarId() ;

constexpr ::ArrayW<::System::Globalization::CalendarData*> const& __cordl_internal_get_calendars() const;

constexpr ::ArrayW<::System::Globalization::CalendarData*>& __cordl_internal_get_calendars() ;

constexpr int32_t const& __cordl_internal_get_iDefaultAnsiCodePage() const;

constexpr int32_t& __cordl_internal_get_iDefaultAnsiCodePage() ;

constexpr int32_t const& __cordl_internal_get_iDefaultEbcdicCodePage() const;

constexpr int32_t& __cordl_internal_get_iDefaultEbcdicCodePage() ;

constexpr int32_t const& __cordl_internal_get_iDefaultMacCodePage() const;

constexpr int32_t& __cordl_internal_get_iDefaultMacCodePage() ;

constexpr int32_t const& __cordl_internal_get_iDefaultOemCodePage() const;

constexpr int32_t& __cordl_internal_get_iDefaultOemCodePage() ;

constexpr int32_t const& __cordl_internal_get_iFirstDayOfWeek() const;

constexpr int32_t& __cordl_internal_get_iFirstDayOfWeek() ;

constexpr int32_t const& __cordl_internal_get_iFirstWeekOfYear() const;

constexpr int32_t& __cordl_internal_get_iFirstWeekOfYear() ;

constexpr bool const& __cordl_internal_get_isRightToLeft() const;

constexpr bool& __cordl_internal_get_isRightToLeft() ;

constexpr int32_t const& __cordl_internal_get_numberIndex() const;

constexpr int32_t& __cordl_internal_get_numberIndex() ;

constexpr ::StringW const& __cordl_internal_get_sAM1159() const;

constexpr ::StringW& __cordl_internal_get_sAM1159() ;

constexpr ::StringW const& __cordl_internal_get_sISO639Language() const;

constexpr ::StringW& __cordl_internal_get_sISO639Language() ;

constexpr ::StringW const& __cordl_internal_get_sListSeparator() const;

constexpr ::StringW& __cordl_internal_get_sListSeparator() ;

constexpr ::StringW const& __cordl_internal_get_sPM2359() const;

constexpr ::StringW& __cordl_internal_get_sPM2359() ;

constexpr ::StringW const& __cordl_internal_get_sRealName() const;

constexpr ::StringW& __cordl_internal_get_sRealName() ;

constexpr ::StringW const& __cordl_internal_get_sTimeSeparator() const;

constexpr ::StringW& __cordl_internal_get_sTimeSeparator() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_saLongTimes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_saLongTimes() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_saShortTimes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_saShortTimes() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_waCalendars() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_waCalendars() ;

constexpr void __cordl_internal_set_bUseOverrides(bool  value) ;

constexpr void __cordl_internal_set_calendarId(int32_t  value) ;

constexpr void __cordl_internal_set_calendars(::ArrayW<::System::Globalization::CalendarData*>  value) ;

constexpr void __cordl_internal_set_iDefaultAnsiCodePage(int32_t  value) ;

constexpr void __cordl_internal_set_iDefaultEbcdicCodePage(int32_t  value) ;

constexpr void __cordl_internal_set_iDefaultMacCodePage(int32_t  value) ;

constexpr void __cordl_internal_set_iDefaultOemCodePage(int32_t  value) ;

constexpr void __cordl_internal_set_iFirstDayOfWeek(int32_t  value) ;

constexpr void __cordl_internal_set_iFirstWeekOfYear(int32_t  value) ;

constexpr void __cordl_internal_set_isRightToLeft(bool  value) ;

constexpr void __cordl_internal_set_numberIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sAM1159(::StringW  value) ;

constexpr void __cordl_internal_set_sISO639Language(::StringW  value) ;

constexpr void __cordl_internal_set_sListSeparator(::StringW  value) ;

constexpr void __cordl_internal_set_sPM2359(::StringW  value) ;

constexpr void __cordl_internal_set_sRealName(::StringW  value) ;

constexpr void __cordl_internal_set_sTimeSeparator(::StringW  value) ;

constexpr void __cordl_internal_set_saLongTimes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_saShortTimes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_waCalendars(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa24b0b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method create_group_sizes_array, addr 0xa24c1b4, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> create_group_sizes_array(int32_t  gs0, int32_t  gs1) ;

/// @brief Method fill_culture_data, addr 0xa24b6d0, size 0x4, virtual false, abstract: false, final false
inline void fill_culture_data(int32_t  datetimeIndex) ;

/// @brief Method fill_number_data, addr 0xa24c4c0, size 0x4, virtual false, abstract: false, final false
static inline uint8_t* fill_number_data(int32_t  index, ::by_ref<::GlobalNamespace::CultureData_NumberFormatEntryManaged>  nfe) ;

static inline ::System::Globalization::CultureData* getStaticF_s_Invariant() ;

/// @brief Method get_CalendarIds, addr 0xa24b868, size 0x1c8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_CalendarIds() ;

/// @brief Method get_CultureName, addr 0xa24bb0c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CultureName() ;

/// @brief Method get_IFIRSTDAYOFWEEK, addr 0xa24b840, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IFIRSTDAYOFWEEK() ;

/// @brief Method get_IFIRSTWEEKOFYEAR, addr 0xa24b848, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IFIRSTWEEKOFYEAR() ;

/// @brief Method get_Invariant, addr 0xa24b0e0, size 0x3cc, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureData* get_Invariant() ;

/// @brief Method get_IsInvariantCulture, addr 0xa24bb00, size 0xc, virtual false, abstract: false, final false
inline bool get_IsInvariantCulture() ;

/// @brief Method get_LongTimes, addr 0xa24b808, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_LongTimes() ;

/// @brief Method get_SAM1159, addr 0xa24b850, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SAM1159() ;

/// @brief Method get_SCOMPAREINFO, addr 0xa24bb14, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_SCOMPAREINFO() ;

/// @brief Method get_SISO639LANGNAME, addr 0xa24b838, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SISO639LANGNAME() ;

/// @brief Method get_SPM2359, addr 0xa24b858, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SPM2359() ;

/// @brief Method get_STEXTINFO, addr 0xa24bb54, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_STEXTINFO() ;

/// @brief Method get_ShortTimes, addr 0xa24b820, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ShortTimes() ;

/// @brief Method get_TimeSeparator, addr 0xa24b860, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TimeSeparator() ;

/// @brief Method get_UseUserOverride, addr 0xa24bb5c, size 0x8, virtual false, abstract: false, final false
inline bool get_UseUserOverride() ;

/// @brief Method idx2string, addr 0xa24c170, size 0x44, virtual false, abstract: false, final false
static inline ::StringW idx2string(uint8_t*  data, int32_t  idx) ;

static inline void setStaticF_s_Invariant(::System::Globalization::CultureData*  value) ;

/// @brief Method strlen, addr 0xa24c158, size 0x18, virtual false, abstract: false, final false
static inline int32_t strlen(uint8_t*  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CultureData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CultureData(CultureData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CultureData(CultureData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6765};

/// @brief Field sAM1159, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sAM1159;

/// @brief Field sPM2359, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sPM2359;

/// @brief Field sTimeSeparator, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sTimeSeparator;

/// @brief Field saLongTimes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___saLongTimes;

/// @brief Field saShortTimes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___saShortTimes;

/// @brief Field iFirstDayOfWeek, offset: 0x38, size: 0x4, def value: None
 int32_t  ___iFirstDayOfWeek;

/// @brief Field iFirstWeekOfYear, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___iFirstWeekOfYear;

/// @brief Field waCalendars, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___waCalendars;

/// @brief Field calendars, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Globalization::CalendarData*>  ___calendars;

/// @brief Field sISO639Language, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___sISO639Language;

/// @brief Field sRealName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___sRealName;

/// @brief Field bUseOverrides, offset: 0x60, size: 0x1, def value: None
 bool  ___bUseOverrides;

/// @brief Field calendarId, offset: 0x64, size: 0x4, def value: None
 int32_t  ___calendarId;

/// @brief Field numberIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___numberIndex;

/// @brief Field iDefaultAnsiCodePage, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___iDefaultAnsiCodePage;

/// @brief Field iDefaultOemCodePage, offset: 0x70, size: 0x4, def value: None
 int32_t  ___iDefaultOemCodePage;

/// @brief Field iDefaultMacCodePage, offset: 0x74, size: 0x4, def value: None
 int32_t  ___iDefaultMacCodePage;

/// @brief Field iDefaultEbcdicCodePage, offset: 0x78, size: 0x4, def value: None
 int32_t  ___iDefaultEbcdicCodePage;

/// @brief Field isRightToLeft, offset: 0x7c, size: 0x1, def value: None
 bool  ___isRightToLeft;

/// @brief Field sListSeparator, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___sListSeparator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CultureData, ___sAM1159) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sPM2359) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sTimeSeparator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___saLongTimes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___saShortTimes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iFirstDayOfWeek) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iFirstWeekOfYear) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___waCalendars) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___calendars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sISO639Language) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sRealName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___bUseOverrides) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___calendarId) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___numberIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultAnsiCodePage) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultOemCodePage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultMacCodePage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___iDefaultEbcdicCodePage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___isRightToLeft) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureData, ___sListSeparator) == 0x80, "Offset mismatch!");

static_assert(sizeof(::System::Globalization::CultureData) == 0x88, "Size mismatch!");

} // namespace end def System::Globalization
