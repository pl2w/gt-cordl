#pragma once
// IWYU pragma private; include "System/DateTimeParse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeParse_DS_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParse)
namespace GlobalNamespace {
struct DateTimeParse_DS;
}
namespace GlobalNamespace {
struct DateTimeParse_DTT;
}
namespace GlobalNamespace {
struct DateTimeParse_TM;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class DateTimeParse_MatchNumberDelegate;
}
namespace System {
class DateTimeParse___c;
}
namespace System {
struct DateTimeRawInfo;
}
namespace System {
struct DateTimeResult;
}
namespace System {
struct DateTimeToken;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct ParsingInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct __DTString;
}
// Forward declare root types
namespace System {
class DateTimeParse;
}
namespace System {
class DateTimeParse_MatchNumberDelegate;
}
namespace System {
class DateTimeParse___c;
}
// Write type traits
MARK_REF_T(::System::DateTimeParse*);
MARK_REF_T(::System::DateTimeParse_MatchNumberDelegate*);
MARK_REF_T(::System::DateTimeParse___c*);
DEFINE_IL2CPP_CLASS(::System::DateTimeParse*, "System", "DateTimeParse");
DEFINE_IL2CPP_CLASS(::System::DateTimeParse_MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
DEFINE_IL2CPP_CLASS(::System::DateTimeParse___c*, "System", "DateTimeParse/<>c");
// Dependencies System.DateTimeParse::DS, System.Object
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse
class CORDL_TYPE DateTimeParse : public ::System::Object {
public:
// Declarations
using DS = ::GlobalNamespace::DateTimeParse_DS;

using DTT = ::GlobalNamespace::DateTimeParse_DTT;

using TM = ::GlobalNamespace::DateTimeParse_TM;

using MatchNumberDelegate = ::System::DateTimeParse_MatchNumberDelegate;

using __c = ::System::DateTimeParse___c;

/// @brief Field dateParsingStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dateParsingStates, put=setStaticF_dateParsingStates)) ::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>  dateParsingStates;

/// @brief Field m_hebrewNumberParser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_hebrewNumberParser, put=setStaticF_m_hebrewNumberParser)) ::System::DateTimeParse_MatchNumberDelegate*  m_hebrewNumberParser;

/// @brief Method AdjustHour, addr 0xa2cdd54, size 0x4c, virtual false, abstract: false, final false
static inline bool AdjustHour(::by_ref<int32_t>  hour, ::GlobalNamespace::DateTimeParse_TM  timeMark) ;

/// @brief Method AdjustTimeMark, addr 0xa2cdc94, size 0xc0, virtual false, abstract: false, final false
static inline void AdjustTimeMark(::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method AdjustTimeZoneToLocal, addr 0xa2cfc78, size 0x29c, virtual false, abstract: false, final false
static inline bool AdjustTimeZoneToLocal(::by_ref<::System::DateTimeResult>  result, bool  bTimeOnly) ;

/// @brief Method AdjustTimeZoneToUniversal, addr 0xa2cfb64, size 0x114, virtual false, abstract: false, final false
static inline bool AdjustTimeZoneToUniversal(::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method CheckDefaultDateTime, addr 0xa2cf464, size 0x288, virtual false, abstract: false, final false
static inline bool CheckDefaultDateTime(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::Calendar*>  cal, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method CheckNewValue, addr 0xa2d12d0, size 0xb0, virtual false, abstract: false, final false
static inline bool CheckNewValue(::by_ref<int32_t>  currentValue, int32_t  newValue, char16_t  patternChar, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method DateTimeOffsetTimeZonePostProcessing, addr 0xa2cf938, size 0x22c, virtual false, abstract: false, final false
static inline bool DateTimeOffsetTimeZonePostProcessing(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method DetermineTimeZoneAdjustments, addr 0xa2cf6ec, size 0x24c, virtual false, abstract: false, final false
static inline bool DetermineTimeZoneAdjustments(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::System::Globalization::DateTimeStyles  styles, bool  bTimeOnly) ;

/// @brief Method DoStrictParse, addr 0xa2c98a4, size 0x828, virtual false, abstract: false, final false
static inline bool DoStrictParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  formatParam, ::System::Globalization::DateTimeStyles  styles, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method ExpandPredefinedFormat, addr 0xa2d1380, size 0x3d8, virtual false, abstract: false, final false
static inline ::StringW ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Globalization::DateTimeFormatInfo*>  dtfi, ::by_ref<::System::ParsingInfo>  parseInfo, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method GetDateOfDSN, addr 0xa2cdef0, size 0x58, virtual false, abstract: false, final false
static inline bool GetDateOfDSN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetDateOfNDS, addr 0xa2cdf48, size 0xb4, virtual false, abstract: false, final false
static inline bool GetDateOfNDS(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetDateOfNNDS, addr 0xa2cdffc, size 0x22c, virtual false, abstract: false, final false
static inline bool GetDateOfNNDS(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDateTimeNow, addr 0xa2cc9f0, size 0x100, virtual false, abstract: false, final false
static inline ::System::DateTime GetDateTimeNow(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles) ;

/// @brief Method GetDateTimeParseException, addr 0xa2c96d0, size 0x1d4, virtual false, abstract: false, final false
static inline ::System::Exception* GetDateTimeParseException(::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method GetDayOfMN, addr 0xa2ccf2c, size 0x224, virtual false, abstract: false, final false
static inline bool GetDayOfMN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfMNN, addr 0xa2cd4d4, size 0x2e4, virtual false, abstract: false, final false
static inline bool GetDayOfMNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfNM, addr 0xa2cd2b0, size 0x224, virtual false, abstract: false, final false
static inline bool GetDayOfNM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfNN, addr 0xa2ccaf0, size 0x184, virtual false, abstract: false, final false
static inline bool GetDayOfNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfNNN, addr 0xa2ccc74, size 0x2b8, virtual false, abstract: false, final false
static inline bool GetDayOfNNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfNNY, addr 0xa2cd8fc, size 0x184, virtual false, abstract: false, final false
static inline bool GetDayOfNNY(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDayOfYM, addr 0xa2cdbf8, size 0x9c, virtual false, abstract: false, final false
static inline bool GetDayOfYM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetDayOfYMN, addr 0xa2cda80, size 0xbc, virtual false, abstract: false, final false
static inline bool GetDayOfYMN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetDayOfYN, addr 0xa2cdb3c, size 0xbc, virtual false, abstract: false, final false
static inline bool GetDayOfYN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetDayOfYNN, addr 0xa2cd7b8, size 0x144, virtual false, abstract: false, final false
static inline bool GetDayOfYNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetDefaultYear, addr 0xa2cc954, size 0x9c, virtual false, abstract: false, final false
static inline void GetDefaultYear(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles) ;

/// @brief Method GetHebrewDayOfNM, addr 0xa2cd150, size 0x160, virtual false, abstract: false, final false
static inline bool GetHebrewDayOfNM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetJapaneseCalendarDefaultInstance, addr 0xa2cbcc4, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Globalization::Calendar* GetJapaneseCalendarDefaultInstance() ;

/// @brief Method GetMonthDayOrder, addr 0xa2cc4b4, size 0x1f8, virtual false, abstract: false, final false
static inline bool GetMonthDayOrder(::StringW  pattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order) ;

/// @brief Method GetTaiwanCalendarDefaultInstance, addr 0xa2cbdac, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Globalization::Calendar* GetTaiwanCalendarDefaultInstance() ;

/// @brief Method GetTimeOfN, addr 0xa2cdda0, size 0x5c, virtual false, abstract: false, final false
static inline bool GetTimeOfN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetTimeOfNN, addr 0xa2cddfc, size 0x70, virtual false, abstract: false, final false
static inline bool GetTimeOfNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetTimeOfNNN, addr 0xa2cde6c, size 0x84, virtual false, abstract: false, final false
static inline bool GetTimeOfNNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw) ;

/// @brief Method GetTimeZoneName, addr 0xa2ca4e8, size 0xb0, virtual false, abstract: false, final false
static inline bool GetTimeZoneName(::by_ref<::System::__DTString>  str) ;

/// @brief Method GetYearMonthDayOrder, addr 0xa2cc068, size 0x290, virtual false, abstract: false, final false
static inline bool GetYearMonthDayOrder(::StringW  datePattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order) ;

/// @brief Method GetYearMonthOrder, addr 0xa2cc2f8, size 0x1bc, virtual false, abstract: false, final false
static inline bool GetYearMonthOrder(::StringW  pattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order) ;

/// @brief Method HandleTimeZone, addr 0xa2ca9b0, size 0x188, virtual false, abstract: false, final false
static inline bool HandleTimeZone(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method IsDigit, addr 0xa2ca598, size 0x14, virtual false, abstract: false, final false
static inline bool IsDigit(char16_t  ch) ;

/// @brief Method Lex, addr 0xa2cab38, size 0xe10, virtual false, abstract: false, final false
static inline bool Lex(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeToken>  dtok, ::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeFormatInfo*>  dtfi, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method MatchAbbreviatedDayName, addr 0xa2d0b84, size 0x164, virtual false, abstract: false, final false
static inline bool MatchAbbreviatedDayName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result) ;

/// @brief Method MatchAbbreviatedMonthName, addr 0xa2d0768, size 0x1e4, virtual false, abstract: false, final false
static inline bool MatchAbbreviatedMonthName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result) ;

/// @brief Method MatchAbbreviatedTimeMark, addr 0xa2d1184, size 0x14c, virtual false, abstract: false, final false
static inline bool MatchAbbreviatedTimeMark(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::GlobalNamespace::DateTimeParse_TM>  result) ;

/// @brief Method MatchDayName, addr 0xa2d0ce8, size 0x164, virtual false, abstract: false, final false
static inline bool MatchDayName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result) ;

/// @brief Method MatchEraName, addr 0xa2d0e4c, size 0x19c, virtual false, abstract: false, final false
static inline bool MatchEraName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result) ;

/// @brief Method MatchHebrewDigits, addr 0xa2cffa4, size 0x110, virtual false, abstract: false, final false
static inline bool MatchHebrewDigits(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  number) ;

/// @brief Method MatchMonthName, addr 0xa2d094c, size 0x238, virtual false, abstract: false, final false
static inline bool MatchMonthName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result) ;

/// @brief Method MatchTimeMark, addr 0xa2d0fe8, size 0x19c, virtual false, abstract: false, final false
static inline bool MatchTimeMark(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::GlobalNamespace::DateTimeParse_TM>  result) ;

/// @brief Method MatchWord, addr 0xa2ca338, size 0x1b0, virtual false, abstract: false, final false
static inline bool MatchWord(::by_ref<::System::__DTString>  str, ::StringW  target) ;

/// @brief Method Parse, addr 0xa2bd8fc, size 0xf0, virtual false, abstract: false, final false
static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method Parse, addr 0xa2c24b0, size 0x108, virtual false, abstract: false, final false
static inline ::System::DateTime Parse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method ParseByFormat, addr 0xa2d1860, size 0x1174, virtual false, abstract: false, final false
static inline bool ParseByFormat(::by_ref<::System::__DTString>  str, ::by_ref<::System::__DTString>  format, ::by_ref<::System::ParsingInfo>  parseInfo, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method ParseDigits, addr 0xa2cff14, size 0x90, virtual false, abstract: false, final false
static inline bool ParseDigits(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  result) ;

/// @brief Method ParseDigits, addr 0xa2d00b4, size 0x1a4, virtual false, abstract: false, final false
static inline bool ParseDigits(::by_ref<::System::__DTString>  str, int32_t  minDigitLen, int32_t  maxDigitLen, ::by_ref<int32_t>  result) ;

/// @brief Method ParseExact, addr 0xa2bdd74, size 0x108, virtual false, abstract: false, final false
static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style) ;

/// @brief Method ParseExact, addr 0xa2c27d0, size 0x154, virtual false, abstract: false, final false
static inline ::System::DateTime ParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method ParseExactMultiple, addr 0xa2be154, size 0xf8, virtual false, abstract: false, final false
static inline ::System::DateTime ParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style) ;

/// @brief Method ParseExactMultiple, addr 0xa2c2ad4, size 0x14c, virtual false, abstract: false, final false
static inline ::System::DateTime ParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method ParseFraction, addr 0xa2ca5ac, size 0xec, virtual false, abstract: false, final false
static inline bool ParseFraction(::by_ref<::System::__DTString>  str, ::by_ref<double_t>  result) ;

/// @brief Method ParseFractionExact, addr 0xa2d0258, size 0x264, virtual false, abstract: false, final false
static inline bool ParseFractionExact(::by_ref<::System::__DTString>  str, int32_t  maxDigitLen, ::by_ref<double_t>  result) ;

/// @brief Method ParseISO8601, addr 0xa2cee54, size 0x610, virtual false, abstract: false, final false
static inline bool ParseISO8601(::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method ParseJapaneseEraStart, addr 0xa2d1758, size 0x108, virtual false, abstract: false, final false
static inline bool ParseJapaneseEraStart(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method ParseSign, addr 0xa2d04bc, size 0xb8, virtual false, abstract: false, final false
static inline bool ParseSign(::by_ref<::System::__DTString>  str, ::by_ref<bool>  result) ;

/// @brief Method ParseTimeZone, addr 0xa2ca698, size 0x318, virtual false, abstract: false, final false
static inline bool ParseTimeZone(::by_ref<::System::__DTString>  str, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method ParseTimeZoneOffset, addr 0xa2d0574, size 0x1f4, virtual false, abstract: false, final false
static inline bool ParseTimeZoneOffset(::by_ref<::System::__DTString>  str, int32_t  len, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method ProcessDateTimeSuffix, addr 0xa2ce228, size 0xf8, virtual false, abstract: false, final false
static inline bool ProcessDateTimeSuffix(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::DateTimeToken>  dtok) ;

/// @brief Method ProcessHebrewTerminalState, addr 0xa2ce320, size 0x3b4, virtual false, abstract: false, final false
static inline bool ProcessHebrewTerminalState(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method ProcessTerminalState, addr 0xa2cb948, size 0x37c, virtual false, abstract: false, final false
static inline bool ProcessTerminalState(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method SetDateDMY, addr 0xa2cc85c, size 0x7c, virtual false, abstract: false, final false
static inline bool SetDateDMY(::by_ref<::System::DateTimeResult>  result, int32_t  day, int32_t  month, int32_t  year) ;

/// @brief Method SetDateMDY, addr 0xa2cc7e0, size 0x7c, virtual false, abstract: false, final false
static inline bool SetDateMDY(::by_ref<::System::DateTimeResult>  result, int32_t  month, int32_t  day, int32_t  year) ;

/// @brief Method SetDateYDM, addr 0xa2cc8d8, size 0x7c, virtual false, abstract: false, final false
static inline bool SetDateYDM(::by_ref<::System::DateTimeResult>  result, int32_t  year, int32_t  day, int32_t  month) ;

/// @brief Method SetDateYMD, addr 0xa2cc770, size 0x70, virtual false, abstract: false, final false
static inline bool SetDateYMD(::by_ref<::System::DateTimeResult>  result, int32_t  year, int32_t  month, int32_t  day) ;

/// @brief Method TryAdjustYear, addr 0xa2cc6ac, size 0xc4, virtual false, abstract: false, final false
static inline bool TryAdjustYear(::by_ref<::System::DateTimeResult>  result, int32_t  year, ::by_ref<int32_t>  adjustedYear) ;

/// @brief Method TryParse, addr 0xa2bed0c, size 0x110, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTime>  result) ;

/// @brief Method TryParse, addr 0xa2c39d4, size 0x164, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method TryParse, addr 0xa2ce6d4, size 0x780, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method TryParseExact, addr 0xa2bf0f0, size 0x128, virtual false, abstract: false, final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result) ;

/// @brief Method TryParseExact, addr 0xa2c3d28, size 0x17c, virtual false, abstract: false, final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method TryParseExact, addr 0xa2c95cc, size 0x104, virtual false, abstract: false, final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method TryParseExactMultiple, addr 0xa2bf364, size 0x120, virtual false, abstract: false, final false
static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result) ;

/// @brief Method TryParseExactMultiple, addr 0xa2c4068, size 0x16c, virtual false, abstract: false, final false
static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset) ;

/// @brief Method TryParseExactMultiple, addr 0xa2ca0cc, size 0x26c, virtual false, abstract: false, final false
static inline bool TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTimeResult>  result) ;

/// @brief Method TryParseQuoteString, addr 0xa2d29d4, size 0xf0, virtual false, abstract: false, final false
static inline bool TryParseQuoteString(::System::ReadOnlySpan_1<char16_t>  format, int32_t  pos, ::System::Text::StringBuilder*  result, ::by_ref<int32_t>  returnValue) ;

/// @brief Method VerifyValidPunctuation, addr 0xa2cbe94, size 0x1d4, virtual false, abstract: false, final false
static inline bool VerifyValidPunctuation(::by_ref<::System::__DTString>  str) ;

static inline ::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>> getStaticF_dateParsingStates() ;

static inline ::System::DateTimeParse_MatchNumberDelegate* getStaticF_m_hebrewNumberParser() ;

static inline void setStaticF_dateParsingStates(::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>  value) ;

static inline void setStaticF_m_hebrewNumberParser(::System::DateTimeParse_MatchNumberDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeParse(DateTimeParse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeParse(DateTimeParse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DateTimeParse) == 0x10, "Size mismatch!");

} // namespace end def System
// [CompilerGenerated]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse/<>c
class CORDL_TYPE DateTimeParse___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::DateTimeParse___c*  __9;

/// @brief Field <>9__98_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__98_0, put=setStaticF___9__98_0)) ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*  __9__98_0;

static inline ::System::DateTimeParse___c* New_ctor() ;

/// @brief Method <DoStrictParse>b__98_0, addr 0xa2d34e4, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTimeParse_MatchNumberDelegate* _DoStrictParse_b__98_0() ;

/// @brief Method .ctor, addr 0xa2d34dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTimeParse___c* getStaticF___9() ;

static inline ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* getStaticF___9__98_0() ;

static inline void setStaticF___9(::System::DateTimeParse___c*  value) ;

static inline void setStaticF___9__98_0(::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeParse___c(DateTimeParse___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeParse___c(DateTimeParse___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DateTimeParse___c) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.DateTimeParse/MatchNumberDelegate
class CORDL_TYPE DateTimeParse_MatchNumberDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa2d3460, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  result) ;

static inline ::System::DateTimeParse_MatchNumberDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa2d33ac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse_MatchNumberDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse_MatchNumberDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeParse_MatchNumberDelegate(DateTimeParse_MatchNumberDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeParse_MatchNumberDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeParse_MatchNumberDelegate(DateTimeParse_MatchNumberDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DateTimeParse_MatchNumberDelegate) == 0x80, "Size mismatch!");

} // namespace end def System
