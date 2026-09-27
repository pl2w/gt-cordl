#pragma once
// IWYU pragma private; include "System/Number.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Number)
namespace GlobalNamespace {
struct Number_BigInteger;
}
namespace GlobalNamespace {
struct Number_DiyFp;
}
namespace GlobalNamespace {
struct Number_FloatingPointInfo;
}
namespace GlobalNamespace {
struct Number_NumberBufferKind;
}
namespace GlobalNamespace {
struct Number_NumberBuffer;
}
namespace GlobalNamespace {
struct Number_ParsingStatus;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Number_Grisu3;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System {
class Number;
}
namespace System {
class Number_Grisu3;
}
// Write type traits
MARK_REF_T(::System::Number*);
MARK_REF_T(::System::Number_Grisu3*);
DEFINE_IL2CPP_CLASS(::System::Number*, "System", "Number");
DEFINE_IL2CPP_CLASS(::System::Number_Grisu3*, "System", "Number/Grisu3");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Number
class CORDL_TYPE Number : public ::System::Object {
public:
// Declarations
using BigInteger = ::GlobalNamespace::Number_BigInteger;

using DiyFp = ::GlobalNamespace::Number_DiyFp;

using FloatingPointInfo = ::GlobalNamespace::Number_FloatingPointInfo;

using NumberBuffer = ::GlobalNamespace::Number_NumberBuffer;

using NumberBufferKind = ::GlobalNamespace::Number_NumberBufferKind;

using ParsingStatus = ::GlobalNamespace::Number_ParsingStatus;

using Grisu3 = ::System::Number_Grisu3;

/// @brief Field s_Pow10DoubleTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pow10DoubleTable, put=setStaticF_s_Pow10DoubleTable)) ::ArrayW<double_t>  s_Pow10DoubleTable;

/// @brief Field s_Pow10SingleTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pow10SingleTable, put=setStaticF_s_Pow10SingleTable)) ::ArrayW<float_t>  s_Pow10SingleTable;

/// @brief Field s_negCurrencyFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_negCurrencyFormats, put=setStaticF_s_negCurrencyFormats)) ::ArrayW<::StringW>  s_negCurrencyFormats;

/// @brief Field s_negNumberFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_negNumberFormats, put=setStaticF_s_negNumberFormats)) ::ArrayW<::StringW>  s_negNumberFormats;

/// @brief Field s_negPercentFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_negPercentFormats, put=setStaticF_s_negPercentFormats)) ::ArrayW<::StringW>  s_negPercentFormats;

/// @brief Field s_posCurrencyFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_posCurrencyFormats, put=setStaticF_s_posCurrencyFormats)) ::ArrayW<::StringW>  s_posCurrencyFormats;

/// @brief Field s_posPercentFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_posPercentFormats, put=setStaticF_s_posPercentFormats)) ::ArrayW<::StringW>  s_posPercentFormats;

/// @brief Field s_singleDigitStringCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_singleDigitStringCache, put=setStaticF_s_singleDigitStringCache)) ::ArrayW<::StringW>  s_singleDigitStringCache;

/// @brief Method AccumulateDecimalDigitsIntoBigInteger, addr 0xb99edcc, size 0x15c, virtual false, abstract: false, final false
static inline void AccumulateDecimalDigitsIntoBigInteger(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, uint32_t  firstIndex, uint32_t  lastIndex, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method AssembleFloatingPointBits, addr 0xb99f02c, size 0x274, virtual false, abstract: false, final false
static inline uint64_t AssembleFloatingPointBits(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint64_t  initialMantissa, int32_t  initialExponent, bool  hasZeroTail) ;

/// @brief Method ConvertBigIntegerToFloatingPointBits, addr 0xb99f39c, size 0x204, virtual false, abstract: false, final false
static inline uint64_t ConvertBigIntegerToFloatingPointBits(::by_ref<::GlobalNamespace::Number_BigInteger>  value, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint32_t  integerBitsOfPrecision, bool  hasNonZeroFractionalPart) ;

/// @brief Method DecimalToNumber, addr 0xb996fcc, size 0x210, virtual false, abstract: false, final false
static inline void DecimalToNumber(::by_ref<::System::Decimal>  d, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method DigitsToUInt32, addr 0xb99ef30, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t DigitsToUInt32(uint8_t*  p, int32_t  count) ;

/// @brief Method DigitsToUInt64, addr 0xb99f5cc, size 0x40, virtual false, abstract: false, final false
static inline uint64_t DigitsToUInt64(uint8_t*  p, int32_t  count) ;

/// @brief Method Dragon4, addr 0xb995164, size 0x7f8, virtual false, abstract: false, final false
static inline uint32_t Dragon4(uint64_t  mantissa, int32_t  exponent, uint32_t  mantissaHighBitIdx, bool  hasUnequalMargins, int32_t  cutoffNumber, bool  isSignificantDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  decimalExponent) ;

/// @brief Method Dragon4Double, addr 0xb994fc8, size 0x164, virtual false, abstract: false, final false
static inline void Dragon4Double(double_t  value, int32_t  cutoffNumber, bool  isSignificantDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method Dragon4Single, addr 0xb99595c, size 0x12c, virtual false, abstract: false, final false
static inline void Dragon4Single(float_t  value, int32_t  cutoffNumber, bool  isSignificantDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method ExtractFractionAndBiasedExponent, addr 0xb995a88, size 0x8c, virtual false, abstract: false, final false
static inline uint32_t ExtractFractionAndBiasedExponent(float_t  value, ::by_ref<int32_t>  exponent) ;

/// @brief Method ExtractFractionAndBiasedExponent, addr 0xb99512c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t ExtractFractionAndBiasedExponent(double_t  value, ::by_ref<int32_t>  exponent) ;

/// @brief Method FastAllocateString, addr 0xb99d488, size 0x14, virtual false, abstract: false, final false
static inline ::StringW FastAllocateString(int32_t  length) ;

/// @brief Method FindSection, addr 0xb99e9c4, size 0x144, virtual false, abstract: false, final false
static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t>  format, int32_t  section) ;

/// @brief Method FormatCurrency, addr 0xb99d7e0, size 0x270, virtual false, abstract: false, final false
static inline void FormatCurrency(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatDecimal, addr 0xb996cec, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW FormatDecimal(::System::Decimal  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatDouble, addr 0xb998c90, size 0x2cc, virtual false, abstract: false, final false
static inline ::StringW FormatDouble(::by_ref<::System::Text::ValueStringBuilder>  sb, double_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatDouble, addr 0xb998b50, size 0x140, virtual false, abstract: false, final false
static inline ::StringW FormatDouble(double_t  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatExponent, addr 0xb99eb08, size 0x2a0, virtual false, abstract: false, final false
static inline void FormatExponent(::by_ref<::System::Text::ValueStringBuilder>  sb, ::System::Globalization::NumberFormatInfo*  info, int32_t  value, char16_t  expChar, int32_t  minDigits, bool  positiveSign) ;

/// @brief Method FormatFixed, addr 0xb99da50, size 0x51c, virtual false, abstract: false, final false
static inline void FormatFixed(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::ArrayW<int32_t>  groupDigits, ::StringW  sDecimal, ::StringW  sGroup) ;

/// @brief Method FormatGeneral, addr 0xb99e3fc, size 0x358, virtual false, abstract: false, final false
static inline void FormatGeneral(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar, bool  bSuppressScientific) ;

/// @brief Method FormatInt32, addr 0xb9998b0, size 0x410, virtual false, abstract: false, final false
static inline ::StringW FormatInt32(int32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method FormatInt64, addr 0xb99b308, size 0x320, virtual false, abstract: false, final false
static inline ::StringW FormatInt64(int64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method FormatNumber, addr 0xb99df6c, size 0x24c, virtual false, abstract: false, final false
static inline void FormatNumber(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatPercent, addr 0xb99e754, size 0x270, virtual false, abstract: false, final false
static inline void FormatPercent(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatScientific, addr 0xb99e1b8, size 0x244, virtual false, abstract: false, final false
static inline void FormatScientific(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar) ;

/// @brief Method FormatSingle, addr 0xb999480, size 0x2d4, virtual false, abstract: false, final false
static inline ::StringW FormatSingle(::by_ref<::System::Text::ValueStringBuilder>  sb, float_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatSingle, addr 0xb999340, size 0x140, virtual false, abstract: false, final false
static inline ::StringW FormatSingle(float_t  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatUInt32, addr 0xb99abb8, size 0x380, virtual false, abstract: false, final false
static inline ::StringW FormatUInt32(uint32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method FormatUInt64, addr 0xb99cc44, size 0x2a0, virtual false, abstract: false, final false
static inline ::StringW FormatUInt64(uint64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method GetException, addr 0xb9a4c8c, size 0x128, virtual false, abstract: false, final false
static inline ::System::Exception* GetException(::GlobalNamespace::Number_ParsingStatus  status, ::System::TypeCode  type) ;

/// @brief Method GetFloatingPointMaxDigitsAndPrecision, addr 0xb999190, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t GetFloatingPointMaxDigitsAndPrecision(char16_t  fmt, ::by_ref<int32_t>  precision, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<bool>  isSignificantDigits) ;

/// @brief Method High32, addr 0xb99d684, size 0x8, virtual false, abstract: false, final false
static inline uint32_t High32(uint64_t  value) ;

/// @brief Method Int32BitsToSingle, addr 0xb9a4df4, size 0x8, virtual false, abstract: false, final false
static inline float_t Int32BitsToSingle(int32_t  value) ;

/// @brief Method Int32ToHexChars, addr 0xb99d4f0, size 0x54, virtual false, abstract: false, final false
static inline char16_t* Int32ToHexChars(char16_t*  buffer, uint32_t  value, int32_t  hexBase, int32_t  digits) ;

/// @brief Method Int32ToHexStr, addr 0xb99a0a0, size 0x150, virtual false, abstract: false, final false
static inline ::StringW Int32ToHexStr(int32_t  value, char16_t  hexBase, int32_t  digits) ;

/// @brief Method Int32ToNumber, addr 0xb99d374, size 0x114, virtual false, abstract: false, final false
static inline void Int32ToNumber(int32_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method Int64DivMod1E9, addr 0xb99d64c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t Int64DivMod1E9(::by_ref<uint64_t>  value) ;

/// @brief Method Int64ToHexStr, addr 0xb99bc60, size 0x258, virtual false, abstract: false, final false
static inline ::StringW Int64ToHexStr(int64_t  value, char16_t  hexBase, int32_t  digits) ;

/// @brief Method Int64ToNumber, addr 0xb99beb8, size 0x1b8, virtual false, abstract: false, final false
static inline void Int64ToNumber(int64_t  input, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method IsDigit, addr 0xb9a1120, size 0x10, virtual false, abstract: false, final false
static inline bool IsDigit(int32_t  ch) ;

/// @brief Method IsNegative, addr 0xb994fa8, size 0xc, virtual false, abstract: false, final false
static inline bool IsNegative(double_t  d) ;

/// @brief Method IsNegativeInfinity, addr 0xb994fb4, size 0x14, virtual false, abstract: false, final false
static inline bool IsNegativeInfinity(float_t  f) ;

/// @brief Method IsSpaceReplacingChar, addr 0xb9a4c74, size 0x18, virtual false, abstract: false, final false
static inline bool IsSpaceReplacingChar(char16_t  c) ;

/// @brief Method IsWhite, addr 0xb9a1030, size 0x14, virtual false, abstract: false, final false
static inline bool IsWhite(int32_t  ch) ;

/// @brief Method Low32, addr 0xb99d68c, size 0x4, virtual false, abstract: false, final false
static inline uint32_t Low32(uint64_t  value) ;

/// @brief Method MatchChars, addr 0xb9a1044, size 0xdc, virtual false, abstract: false, final false
static inline char16_t* MatchChars(char16_t*  p, char16_t*  pEnd, ::StringW  value) ;

/// @brief Method NegativeInt32ToDecStr, addr 0xb999ecc, size 0x1d4, virtual false, abstract: false, final false
static inline ::StringW NegativeInt32ToDecStr(int32_t  value, int32_t  digits, ::StringW  sNegative) ;

/// @brief Method NegativeInt64ToDecStr, addr 0xb99b94c, size 0x314, virtual false, abstract: false, final false
static inline ::StringW NegativeInt64ToDecStr(int64_t  input, int32_t  digits, ::StringW  sNegative) ;

/// @brief Method NumberToDouble, addr 0xb9a4ae8, size 0xc4, virtual false, abstract: false, final false
static inline double_t NumberToDouble(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method NumberToFloatingPointBits, addr 0xb99f60c, size 0x2b8, virtual false, abstract: false, final false
static inline uint64_t NumberToFloatingPointBits(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info) ;

/// @brief Method NumberToFloatingPointBitsSlow, addr 0xb99f8c4, size 0x4b8, virtual false, abstract: false, final false
static inline uint64_t NumberToFloatingPointBitsSlow(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint32_t  positiveExponent, uint32_t  integerDigitsPresent, uint32_t  fractionalDigitsPresent) ;

/// @brief Method NumberToSingle, addr 0xb9a4bac, size 0xc8, virtual false, abstract: false, final false
static inline float_t NumberToSingle(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method NumberToString, addr 0xb9971dc, size 0x5c0, virtual false, abstract: false, final false
static inline void NumberToString(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, char16_t  format, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method NumberToStringFormat, addr 0xb99779c, size 0x11a0, virtual false, abstract: false, final false
static inline void NumberToStringFormat(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseDecimal, addr 0xb9a38fc, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Decimal ParseDecimal(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseDouble, addr 0xb9a3dd0, size 0xac, virtual false, abstract: false, final false
static inline double_t ParseDouble(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseFormatSpecifier, addr 0xb996e88, size 0x144, virtual false, abstract: false, final false
static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<int32_t>  digits) ;

/// @brief Method ParseInt32, addr 0xb9a0660, size 0xb4, virtual false, abstract: false, final false
static inline int32_t ParseInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseInt64, addr 0xb9a075c, size 0xb4, virtual false, abstract: false, final false
static inline int64_t ParseInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseSingle, addr 0xb9a4488, size 0xac, virtual false, abstract: false, final false
static inline float_t ParseSingle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseUInt32, addr 0xb9a0810, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t ParseUInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseUInt64, addr 0xb9a08c4, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t ParseUInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method RightShiftWithRounding, addr 0xb99f2e0, size 0xbc, virtual false, abstract: false, final false
static inline uint64_t RightShiftWithRounding(uint64_t  value, int32_t  shift, bool  hasZeroTail) ;

/// @brief Method RoundNumber, addr 0xb99d690, size 0x150, virtual false, abstract: false, final false
static inline void RoundNumber(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  pos, bool  isCorrectlyRounded) ;

/// @brief Method ShouldRoundUp, addr 0xb9a036c, size 0x10, virtual false, abstract: false, final false
static inline bool ShouldRoundUp(bool  lsbBit, bool  roundBit, bool  hasTailBits) ;

/// @brief Method SingleToInt32Bits, addr 0xb99edc4, size 0x8, virtual false, abstract: false, final false
static inline int32_t SingleToInt32Bits(float_t  value) ;

/// @brief Method ThrowOverflowException, addr 0xb9a4db4, size 0x40, virtual false, abstract: false, final false
static inline void ThrowOverflowException(::System::TypeCode  type) ;

/// @brief Method ThrowOverflowOrFormatException, addr 0xb9a0714, size 0x48, virtual false, abstract: false, final false
static inline void ThrowOverflowOrFormatException(::GlobalNamespace::Number_ParsingStatus  status, ::System::TypeCode  type) ;

/// @brief Method TrailingZeros, addr 0xb9a1d78, size 0x8c, virtual false, abstract: false, final false
static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t>  value, int32_t  index) ;

/// @brief Method TryCopyTo, addr 0xb9990b8, size 0xd8, virtual false, abstract: false, final false
static inline bool TryCopyTo(::StringW  source, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatDecimal, addr 0xb99893c, size 0x1c0, virtual false, abstract: false, final false
static inline bool TryFormatDecimal(::System::Decimal  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatDouble, addr 0xb998f5c, size 0x15c, virtual false, abstract: false, final false
static inline bool TryFormatDouble(double_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatInt32, addr 0xb99a1f0, size 0x488, virtual false, abstract: false, final false
static inline bool TryFormatInt32(int32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatInt64, addr 0xb99c070, size 0x374, virtual false, abstract: false, final false
static inline bool TryFormatInt64(int64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatSingle, addr 0xb999754, size 0x15c, virtual false, abstract: false, final false
static inline bool TryFormatSingle(float_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatUInt32, addr 0xb99af38, size 0x3d0, virtual false, abstract: false, final false
static inline bool TryFormatUInt32(uint32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryFormatUInt64, addr 0xb99d090, size 0x2e4, virtual false, abstract: false, final false
static inline bool TryFormatUInt64(uint64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryInt32ToHexStr, addr 0xb99aa48, size 0x170, virtual false, abstract: false, final false
static inline bool TryInt32ToHexStr(int32_t  value, char16_t  hexBase, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryInt64ToHexStr, addr 0xb99c9e8, size 0x25c, virtual false, abstract: false, final false
static inline bool TryInt64ToHexStr(int64_t  value, char16_t  hexBase, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryNegativeInt32ToDecStr, addr 0xb99a85c, size 0x1ec, virtual false, abstract: false, final false
static inline bool TryNegativeInt32ToDecStr(int32_t  value, int32_t  digits, ::StringW  sNegative, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryNegativeInt64ToDecStr, addr 0xb99c6bc, size 0x32c, virtual false, abstract: false, final false
static inline bool TryNegativeInt64ToDecStr(int64_t  input, int32_t  digits, ::StringW  sNegative, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryNumberToDecimal, addr 0xb9a3b0c, size 0x2c4, virtual false, abstract: false, final false
static inline bool TryNumberToDecimal(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<::System::Decimal>  value) ;

/// @brief Method TryNumberToInt32, addr 0xb9a03cc, size 0xac, virtual false, abstract: false, final false
static inline bool TryNumberToInt32(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<int32_t>  value) ;

/// @brief Method TryNumberToInt64, addr 0xb9a0478, size 0xa8, virtual false, abstract: false, final false
static inline bool TryNumberToInt64(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<int64_t>  value) ;

/// @brief Method TryNumberToUInt32, addr 0xb9a0520, size 0xa0, virtual false, abstract: false, final false
static inline bool TryNumberToUInt32(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<uint32_t>  value) ;

/// @brief Method TryNumberToUInt64, addr 0xb9a05c0, size 0xa0, virtual false, abstract: false, final false
static inline bool TryNumberToUInt64(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<uint64_t>  value) ;

/// @brief Method TryParseDecimal, addr 0xb9a39e4, size 0x128, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseDecimal(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryParseDouble, addr 0xb9a3e7c, size 0x60c, virtual false, abstract: false, final false
static inline bool TryParseDouble(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<double_t>  result) ;

/// @brief Method TryParseInt32, addr 0xb9a1130, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result) ;

/// @brief Method TryParseInt32IntegerStyle, addr 0xb9a1230, size 0x5a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result) ;

/// @brief Method TryParseInt32Number, addr 0xb9a1b30, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt32Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result) ;

/// @brief Method TryParseInt64, addr 0xb9a23ac, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result) ;

/// @brief Method TryParseInt64IntegerStyle, addr 0xb9a1e04, size 0x5a8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result) ;

/// @brief Method TryParseInt64Number, addr 0xb9a280c, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseInt64Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result) ;

/// @brief Method TryParseNumber, addr 0xb9a0978, size 0x6b8, virtual false, abstract: false, final false
static inline bool TryParseNumber(::by_ref<char16_t*>  str, char16_t*  strEnd, ::System::Globalization::NumberStyles  styles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method TryParseSingle, addr 0xb9a4534, size 0x5b4, virtual false, abstract: false, final false
static inline bool TryParseSingle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<float_t>  result) ;

/// @brief Method TryParseUInt32, addr 0xb9a2930, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result) ;

/// @brief Method TryParseUInt32HexNumberStyle, addr 0xb9a17d0, size 0x360, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<uint32_t>  result) ;

/// @brief Method TryParseUInt32IntegerStyle, addr 0xb9a2a24, size 0x5cc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result) ;

/// @brief Method TryParseUInt32Number, addr 0xb9a2ff0, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt32Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result) ;

/// @brief Method TryParseUInt64, addr 0xb9a3114, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result) ;

/// @brief Method TryParseUInt64HexNumberStyle, addr 0xb9a24ac, size 0x360, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<uint64_t>  result) ;

/// @brief Method TryParseUInt64IntegerStyle, addr 0xb9a3208, size 0x5d0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result) ;

/// @brief Method TryParseUInt64Number, addr 0xb9a37d8, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_ParsingStatus TryParseUInt64Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result) ;

/// @brief Method TryStringToNumber, addr 0xb9a1c54, size 0x124, virtual false, abstract: false, final false
static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method TryUInt32ToDecStr, addr 0xb99a678, size 0x1e4, virtual false, abstract: false, final false
static inline bool TryUInt32ToDecStr(uint32_t  value, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryUInt64ToDecStr, addr 0xb99c3e4, size 0x2d8, virtual false, abstract: false, final false
static inline bool TryUInt64ToDecStr(uint64_t  value, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method UInt32ToDecChars, addr 0xb99d49c, size 0x54, virtual false, abstract: false, final false
static inline char16_t* UInt32ToDecChars(char16_t*  bufferEnd, uint32_t  value, int32_t  digits) ;

/// @brief Method UInt32ToDecChars, addr 0xb998afc, size 0x54, virtual false, abstract: false, final false
static inline uint8_t* UInt32ToDecChars(uint8_t*  bufferEnd, uint32_t  value, int32_t  digits) ;

/// @brief Method UInt32ToDecStr, addr 0xb999cc0, size 0x20c, virtual false, abstract: false, final false
static inline ::StringW UInt32ToDecStr(uint32_t  value, int32_t  digits) ;

/// @brief Method UInt32ToNumber, addr 0xb99d544, size 0x108, virtual false, abstract: false, final false
static inline void UInt32ToNumber(uint32_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method UInt64ToDecStr, addr 0xb99b628, size 0x324, virtual false, abstract: false, final false
static inline ::StringW UInt64ToDecStr(uint64_t  value, int32_t  digits) ;

/// @brief Method UInt64ToNumber, addr 0xb99cee4, size 0x1ac, virtual false, abstract: false, final false
static inline void UInt64ToNumber(uint64_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// [CompilerGenerated]
/// @brief Method <RoundNumber>g__ShouldRoundUp|70_0, addr 0xb99eda8, size 0x1c, virtual false, abstract: false, final false
static inline bool _RoundNumber_g__ShouldRoundUp_70_0(uint8_t*  _dig, int32_t  _i, ::GlobalNamespace::Number_NumberBufferKind  numberKind, bool  _isCorrectlyRounded) ;

static inline ::ArrayW<double_t> getStaticF_s_Pow10DoubleTable() ;

static inline ::ArrayW<float_t> getStaticF_s_Pow10SingleTable() ;

static inline ::ArrayW<::StringW> getStaticF_s_negCurrencyFormats() ;

static inline ::ArrayW<::StringW> getStaticF_s_negNumberFormats() ;

static inline ::ArrayW<::StringW> getStaticF_s_negPercentFormats() ;

static inline ::ArrayW<::StringW> getStaticF_s_posCurrencyFormats() ;

static inline ::ArrayW<::StringW> getStaticF_s_posPercentFormats() ;

static inline ::ArrayW<::StringW> getStaticF_s_singleDigitStringCache() ;

/// @brief Method get_CharToHexLookup, addr 0xb9a037c, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CharToHexLookup() ;

static inline void setStaticF_s_Pow10DoubleTable(::ArrayW<double_t>  value) ;

static inline void setStaticF_s_Pow10SingleTable(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_singleDigitStringCache(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Number() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Number(Number && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Number(Number const& ) = delete;

/// @brief Field CharStackBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  CharStackBufferSize{static_cast<int32_t>(0x20)};

/// @brief Field DecimalNumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  DecimalNumberBufferLength{static_cast<int32_t>(0x1f)};

/// @brief Field DecimalPrecision offset 0xffffffff size 0x4
static constexpr int32_t  DecimalPrecision{static_cast<int32_t>(0x1d)};

/// @brief Field DefaultPrecisionExponentialFormat offset 0xffffffff size 0x4
static constexpr int32_t  DefaultPrecisionExponentialFormat{static_cast<int32_t>(0x6)};

/// @brief Field DoubleMaxExponent offset 0xffffffff size 0x4
static constexpr int32_t  DoubleMaxExponent{static_cast<int32_t>(0x135)};

/// @brief Field DoubleMinExponent offset 0xffffffff size 0x4
static constexpr int32_t  DoubleMinExponent{static_cast<int32_t>(0xfffffebc)};

/// @brief Field DoubleNumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  DoubleNumberBufferLength{static_cast<int32_t>(0x301)};

/// @brief Field DoublePrecision offset 0xffffffff size 0x4
static constexpr int32_t  DoublePrecision{static_cast<int32_t>(0x11)};

/// @brief Field DoublePrecisionCustomFormat offset 0xffffffff size 0x4
static constexpr int32_t  DoublePrecisionCustomFormat{static_cast<int32_t>(0xf)};

/// @brief Field FloatingPointMaxExponent offset 0xffffffff size 0x4
static constexpr int32_t  FloatingPointMaxExponent{static_cast<int32_t>(0x135)};

/// @brief Field FloatingPointMinExponent offset 0xffffffff size 0x4
static constexpr int32_t  FloatingPointMinExponent{static_cast<int32_t>(0xfffffebc)};

/// @brief Field Int32NumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  Int32NumberBufferLength{static_cast<int32_t>(0xb)};

/// @brief Field Int32Precision offset 0xffffffff size 0x4
static constexpr int32_t  Int32Precision{static_cast<int32_t>(0xa)};

/// @brief Field Int64NumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  Int64NumberBufferLength{static_cast<int32_t>(0x14)};

/// @brief Field Int64Precision offset 0xffffffff size 0x4
static constexpr int32_t  Int64Precision{static_cast<int32_t>(0x13)};

/// @brief Field MaxUInt32DecDigits offset 0xffffffff size 0x4
static constexpr int32_t  MaxUInt32DecDigits{static_cast<int32_t>(0xa)};

/// @brief Field PosNumberFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  PosNumberFormat{u"#"};

/// @brief Field SingleMaxExponent offset 0xffffffff size 0x4
static constexpr int32_t  SingleMaxExponent{static_cast<int32_t>(0x27)};

/// @brief Field SingleMinExponent offset 0xffffffff size 0x4
static constexpr int32_t  SingleMinExponent{static_cast<int32_t>(0xffffffd3)};

/// @brief Field SingleNumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  SingleNumberBufferLength{static_cast<int32_t>(0x72)};

/// @brief Field SinglePrecision offset 0xffffffff size 0x4
static constexpr int32_t  SinglePrecision{static_cast<int32_t>(0x9)};

/// @brief Field SinglePrecisionCustomFormat offset 0xffffffff size 0x4
static constexpr int32_t  SinglePrecisionCustomFormat{static_cast<int32_t>(0x7)};

/// @brief Field UInt32NumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  UInt32NumberBufferLength{static_cast<int32_t>(0xb)};

/// @brief Field UInt32Precision offset 0xffffffff size 0x4
static constexpr int32_t  UInt32Precision{static_cast<int32_t>(0xa)};

/// @brief Field UInt64NumberBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  UInt64NumberBufferLength{static_cast<int32_t>(0x15)};

/// @brief Field UInt64Precision offset 0xffffffff size 0x4
static constexpr int32_t  UInt64Precision{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Number) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Number/Grisu3
class CORDL_TYPE Number_Grisu3 : public ::System::Object {
public:
// Declarations
/// @brief Field s_CachedPowersBinaryExponent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedPowersBinaryExponent, put=setStaticF_s_CachedPowersBinaryExponent)) ::ArrayW<int16_t>  s_CachedPowersBinaryExponent;

/// @brief Field s_CachedPowersDecimalExponent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedPowersDecimalExponent, put=setStaticF_s_CachedPowersDecimalExponent)) ::ArrayW<int16_t>  s_CachedPowersDecimalExponent;

/// @brief Field s_CachedPowersSignificand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedPowersSignificand, put=setStaticF_s_CachedPowersSignificand)) ::ArrayW<uint64_t>  s_CachedPowersSignificand;

/// @brief Field s_SmallPowersOfTen, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SmallPowersOfTen, put=setStaticF_s_SmallPowersOfTen)) ::ArrayW<uint32_t>  s_SmallPowersOfTen;

/// @brief Method BiggestPowerTen, addr 0xb9a72d0, size 0xec, virtual false, abstract: false, final false
static inline uint32_t BiggestPowerTen(uint32_t  number, int32_t  numberBits, ::by_ref<int32_t>  exponentPlusOne) ;

/// @brief Method GetCachedPowerForBinaryExponentRange, addr 0xb9a6c88, size 0x138, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_DiyFp GetCachedPowerForBinaryExponentRange(int32_t  minExponent, int32_t  maxExponent, ::by_ref<int32_t>  decimalExponent) ;

/// @brief Method IsNegative, addr 0xb9a6760, size 0xc, virtual false, abstract: false, final false
static inline bool IsNegative(double_t  d) ;

/// @brief Method IsNegativeInfinity, addr 0xb9a676c, size 0x14, virtual false, abstract: false, final false
static inline bool IsNegativeInfinity(float_t  f) ;

/// @brief Method TryDigitGenCounted, addr 0xb9a6dc0, size 0x2b0, virtual false, abstract: false, final false
static inline bool TryDigitGenCounted(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, int32_t  requestedDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  kappa) ;

/// @brief Method TryDigitGenShortest, addr 0xb9a7070, size 0x260, virtual false, abstract: false, final false
static inline bool TryDigitGenShortest(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  low, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  high, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  kappa) ;

/// @brief Method TryRoundWeedCounted, addr 0xb9a73bc, size 0xec, virtual false, abstract: false, final false
static inline bool TryRoundWeedCounted(::System::Span_1<uint8_t>  buffer, int32_t  length, uint64_t  rest, uint64_t  tenKappa, uint64_t  unit, ::by_ref<int32_t>  kappa) ;

/// @brief Method TryRoundWeedShortest, addr 0xb9a74a8, size 0xe8, virtual false, abstract: false, final false
static inline bool TryRoundWeedShortest(::System::Span_1<uint8_t>  buffer, int32_t  length, uint64_t  distanceTooHighW, uint64_t  unsafeInterval, uint64_t  rest, uint64_t  tenKappa, uint64_t  unit) ;

/// @brief Method TryRunCounted, addr 0xb9a6a20, size 0xe4, virtual false, abstract: false, final false
static inline bool TryRunCounted(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, int32_t  requestedDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  decimalExponent) ;

/// @brief Method TryRunDouble, addr 0xb9a6780, size 0x184, virtual false, abstract: false, final false
static inline bool TryRunDouble(double_t  value, int32_t  requestedDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

/// @brief Method TryRunShortest, addr 0xb9a6904, size 0x11c, virtual false, abstract: false, final false
static inline bool TryRunShortest(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  boundaryMinus, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  boundaryPlus, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  decimalExponent) ;

/// @brief Method TryRunSingle, addr 0xb9a6b04, size 0x184, virtual false, abstract: false, final false
static inline bool TryRunSingle(float_t  value, int32_t  requestedDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number) ;

static inline ::ArrayW<int16_t> getStaticF_s_CachedPowersBinaryExponent() ;

static inline ::ArrayW<int16_t> getStaticF_s_CachedPowersDecimalExponent() ;

static inline ::ArrayW<uint64_t> getStaticF_s_CachedPowersSignificand() ;

static inline ::ArrayW<uint32_t> getStaticF_s_SmallPowersOfTen() ;

static inline void setStaticF_s_CachedPowersBinaryExponent(::ArrayW<int16_t>  value) ;

static inline void setStaticF_s_CachedPowersDecimalExponent(::ArrayW<int16_t>  value) ;

static inline void setStaticF_s_CachedPowersSignificand(::ArrayW<uint64_t>  value) ;

static inline void setStaticF_s_SmallPowersOfTen(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Number_Grisu3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Number_Grisu3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Number_Grisu3(Number_Grisu3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Number_Grisu3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Number_Grisu3(Number_Grisu3 const& ) = delete;

/// @brief Field CachedPowersDecimalExponentDistance offset 0xffffffff size 0x4
static constexpr int32_t  CachedPowersDecimalExponentDistance{static_cast<int32_t>(0x8)};

/// @brief Field CachedPowersMinDecimalExponent offset 0xffffffff size 0x4
static constexpr int32_t  CachedPowersMinDecimalExponent{static_cast<int32_t>(0xfffffea4)};

/// @brief Field CachedPowersOffset offset 0xffffffff size 0x4
static constexpr int32_t  CachedPowersOffset{static_cast<int32_t>(0x15c)};

/// @brief Field CachedPowersPowerMaxDecimalExponent offset 0xffffffff size 0x4
static constexpr int32_t  CachedPowersPowerMaxDecimalExponent{static_cast<int32_t>(0x154)};

/// @brief Field D1Log210 offset 0xffffffff size 0x8
static constexpr double_t  D1Log210{static_cast<double_t>(0.3010299956639812)};

/// @brief Field MaximalTargetExponent offset 0xffffffff size 0x4
static constexpr int32_t  MaximalTargetExponent{static_cast<int32_t>(0xffffffe0)};

/// @brief Field MinimalTargetExponent offset 0xffffffff size 0x4
static constexpr int32_t  MinimalTargetExponent{static_cast<int32_t>(0xffffffc4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Number_Grisu3) == 0x10, "Size mismatch!");

} // namespace end def System
