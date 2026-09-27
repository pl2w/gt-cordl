#pragma once
// IWYU pragma private; include "System/Xml/XmlConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConvert)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml {
struct ExceptionType;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
class ArgumentException;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlConvert;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlConvert*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlConvert
class CORDL_TYPE XmlConvert : public ::System::Object {
public:
// Declarations
/// @brief Field WhitespaceChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhitespaceChars, put=setStaticF_WhitespaceChars)) ::ArrayW<char16_t>  WhitespaceChars;

/// @brief Field c_DecodeCharPattern, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_c_DecodeCharPattern, put=setStaticF_c_DecodeCharPattern)) ::System::Text::RegularExpressions::Regex*  c_DecodeCharPattern;

/// @brief Field c_EncodeCharPattern, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_c_EncodeCharPattern, put=setStaticF_c_EncodeCharPattern)) ::System::Text::RegularExpressions::Regex*  c_EncodeCharPattern;

/// @brief Field c_EncodedCharLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_c_EncodedCharLength, put=setStaticF_c_EncodedCharLength)) int32_t  c_EncodedCharLength;

/// @brief Field crt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crt, put=setStaticF_crt)) ::ArrayW<char16_t>  crt;

/// @brief Field s_allDateTimeFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_allDateTimeFormats, put=setStaticF_s_allDateTimeFormats)) ::ArrayW<::StringW>  s_allDateTimeFormats;

/// @brief Field xmlCharType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_xmlCharType, put=setStaticF_xmlCharType)) ::System::Xml::XmlCharType  xmlCharType;

/// @brief Method CreateAllDateTimeFormats, addr 0xabf2c74, size 0x598, virtual false, abstract: false, final false
static inline void CreateAllDateTimeFormats() ;

/// @brief Method CreateException, addr 0xabf43a4, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::StringW  arg, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateException, addr 0xabf44e0, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::ArrayW<::StringW>  args, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateException, addr 0xabef768, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::ArrayW<::StringW>  args, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateException, addr 0xabf4008, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Exception* CreateException(::StringW  res, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateInvalidCharException, addr 0xabf4258, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(::StringW  data, int32_t  invCharPos, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidCharException, addr 0xabf480c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(char16_t  invChar, char16_t  nextChar) ;

/// @brief Method CreateInvalidCharException, addr 0xabf4874, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidCharException(char16_t  invChar, char16_t  nextChar, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0xabf4644, size 0x58, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0xabf469c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidHighSurrogateCharException, addr 0xabf4708, size 0x104, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t  hi, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method CreateInvalidNameArgumentException, addr 0xabf4b74, size 0xb0, virtual false, abstract: false, final false
static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW  name, ::StringW  argumentName) ;

/// @brief Method CreateInvalidNameCharException, addr 0xabef314, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidNameCharException(::StringW  name, int32_t  index, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0xabf4568, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0xabf45d0, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method CreateInvalidSurrogatePairException, addr 0xabf40c8, size 0x190, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t  low, char16_t  hi, ::System::Xml::ExceptionType  exceptionType, int32_t  lineNo, int32_t  linePos) ;

/// @brief Method DecodeName, addr 0xabee770, size 0x900, virtual false, abstract: false, final false
static inline ::StringW DecodeName(::StringW  name) ;

/// @brief Method DoubleToInt64Bits, addr 0xabf3e08, size 0x8, virtual false, abstract: false, final false
static inline int64_t DoubleToInt64Bits(double_t  value) ;

/// @brief Method EncodeLocalName, addr 0xabee714, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW EncodeLocalName(::StringW  name) ;

/// @brief Method EncodeName, addr 0xabedcc0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW EncodeName(::StringW  name) ;

/// @brief Method EncodeName, addr 0xabedd1c, size 0x9f8, virtual false, abstract: false, final false
static inline ::StringW EncodeName(::StringW  name, bool  first, bool  local) ;

/// @brief Method FromBinHexString, addr 0xabef09c, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBinHexString(::StringW  s) ;

/// @brief Method FromBinHexString, addr 0xabef0f4, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromBinHexString(::StringW  s, bool  allowOddCount) ;

/// @brief Method FromHex, addr 0xabef070, size 0x2c, virtual false, abstract: false, final false
static inline int32_t FromHex(char16_t  digit) ;

/// @brief Method IsNegativeZero, addr 0xabf0280, size 0x74, virtual false, abstract: false, final false
static inline bool IsNegativeZero(double_t  value) ;

/// @brief Method SplitString, addr 0xabf3d98, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitString(::StringW  value) ;

/// @brief Method StrEqual, addr 0xabf3bf0, size 0xd0, virtual false, abstract: false, final false
static inline bool StrEqual(::ArrayW<char16_t>  chars, int32_t  strPos1, int32_t  strLen1, ::StringW  str2) ;

/// @brief Method SwitchToLocalTime, addr 0xabf0714, size 0xd8, virtual false, abstract: false, final false
static inline ::System::DateTime SwitchToLocalTime(::System::DateTime  value) ;

/// @brief Method SwitchToUtcTime, addr 0xabf07ec, size 0xd8, virtual false, abstract: false, final false
static inline ::System::DateTime SwitchToUtcTime(::System::DateTime  value) ;

/// @brief Method ToBinHexString, addr 0xabef160, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToBinHexString(::ArrayW<uint8_t>  inArray) ;

/// @brief Method ToBoolean, addr 0xabf0980, size 0x1c0, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  s) ;

/// @brief Method ToByte, addr 0xabf1a64, size 0x28, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  s) ;

/// @brief Method ToChar, addr 0xabf0de0, size 0xbc, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  s) ;

/// [Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
/// @brief Method ToDateTime, addr 0xabf320c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s) ;

/// @brief Method ToDateTime, addr 0xabf330c, size 0x23c, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s, ::System::Xml::XmlDateTimeSerializationMode  dateTimeOption) ;

/// @brief Method ToDateTime, addr 0xabf3268, size 0xa4, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  s, ::ArrayW<::StringW>  formats) ;

/// @brief Method ToDateTimeOffset, addr 0xabf3548, size 0xc8, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW  s) ;

/// @brief Method ToDecimal, addr 0xabf100c, size 0x70, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  s) ;

/// @brief Method ToDouble, addr 0xabf2404, size 0x118, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  s) ;

/// @brief Method ToGuid, addr 0xabf3610, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Guid ToGuid(::StringW  s) ;

/// @brief Method ToInt16, addr 0xabf15b4, size 0x28, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  s) ;

/// @brief Method ToInt32, addr 0xabf1744, size 0x28, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  s) ;

/// @brief Method ToInt64, addr 0xabf18d4, size 0x28, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  s) ;

/// @brief Method ToInteger, addr 0xabf1218, size 0x70, virtual false, abstract: false, final false
static inline ::System::Decimal ToInteger(::StringW  s) ;

/// [CLSCompliant(false)]
/// @brief Method ToSByte, addr 0xabf1424, size 0x28, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  s) ;

/// @brief Method ToSingle, addr 0xabf20a4, size 0x118, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  s) ;

/// @brief Method ToString, addr 0xabf04ec, size 0x228, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::System::Xml::XmlDateTimeSerializationMode  dateTimeOption) ;

/// @brief Method ToString, addr 0xabf0448, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::StringW  format) ;

/// @brief Method ToString, addr 0xabf08d4, size 0x88, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0xabeff90, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0xabf095c, size 0x24, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value) ;

/// @brief Method ToString, addr 0xabf03f0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value) ;

/// @brief Method ToString, addr 0xabefeec, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0xabeff54, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0xabf02f4, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0xabf0184, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0xabf0058, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(int16_t  value) ;

/// @brief Method ToString, addr 0xabf0084, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0xabf00b0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xabf002c, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xabf0104, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xabf0130, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xabf015c, size 0x28, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value) ;

/// @brief Method ToString, addr 0xabf00d8, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value) ;

/// @brief Method ToTimeSpan, addr 0xabf2984, size 0x1ac, virtual false, abstract: false, final false
static inline ::System::TimeSpan ToTimeSpan(::StringW  s) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt16, addr 0xabf1bf4, size 0x28, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  s) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt32, addr 0xabf1d84, size 0x28, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  s) ;

/// [CLSCompliant(false)]
/// @brief Method ToUInt64, addr 0xabf1f14, size 0x28, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  s) ;

/// @brief Method ToUri, addr 0xabf3818, size 0x1ac, virtual false, abstract: false, final false
static inline ::System::Uri* ToUri(::StringW  s) ;

/// @brief Method ToXPathDouble, addr 0xabf2764, size 0x220, virtual false, abstract: false, final false
static inline double_t ToXPathDouble(::System::Object*  o) ;

/// @brief Method TrimString, addr 0xabf0b40, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW TrimString(::StringW  value) ;

/// @brief Method TrimStringEnd, addr 0xabf3d2c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW TrimStringEnd(::StringW  value) ;

/// @brief Method TrimStringStart, addr 0xabf3cc0, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW TrimStringStart(::StringW  value) ;

/// @brief Method TryToBoolean, addr 0xabf0bac, size 0x234, virtual false, abstract: false, final false
static inline ::System::Exception* TryToBoolean(::StringW  s, ::by_ref<bool>  result) ;

/// @brief Method TryToByte, addr 0xabf1a8c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToByte(::StringW  s, ::by_ref<uint8_t>  result) ;

/// @brief Method TryToChar, addr 0xabf0e9c, size 0x170, virtual false, abstract: false, final false
static inline ::System::Exception* TryToChar(::StringW  s, ::by_ref<char16_t>  result) ;

/// @brief Method TryToDecimal, addr 0xabf107c, size 0x19c, virtual false, abstract: false, final false
static inline ::System::Exception* TryToDecimal(::StringW  s, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryToDouble, addr 0xabf251c, size 0x248, virtual false, abstract: false, final false
static inline ::System::Exception* TryToDouble(::StringW  s, ::by_ref<double_t>  result) ;

/// @brief Method TryToGuid, addr 0xabf363c, size 0x1dc, virtual false, abstract: false, final false
static inline ::System::Exception* TryToGuid(::StringW  s, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryToInt16, addr 0xabf15dc, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt16(::StringW  s, ::by_ref<int16_t>  result) ;

/// @brief Method TryToInt32, addr 0xabf176c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt32(::StringW  s, ::by_ref<int32_t>  result) ;

/// @brief Method TryToInt64, addr 0xabf18fc, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInt64(::StringW  s, ::by_ref<int64_t>  result) ;

/// @brief Method TryToInteger, addr 0xabf1288, size 0x19c, virtual false, abstract: false, final false
static inline ::System::Exception* TryToInteger(::StringW  s, ::by_ref<::System::Decimal>  result) ;

/// @brief Method TryToSByte, addr 0xabf144c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToSByte(::StringW  s, ::by_ref<int8_t>  result) ;

/// @brief Method TryToSingle, addr 0xabf21bc, size 0x248, virtual false, abstract: false, final false
static inline ::System::Exception* TryToSingle(::StringW  s, ::by_ref<float_t>  result) ;

/// @brief Method TryToTimeSpan, addr 0xabf2b30, size 0xac, virtual false, abstract: false, final false
static inline ::System::Exception* TryToTimeSpan(::StringW  s, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method TryToUInt16, addr 0xabf1c1c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt16(::StringW  s, ::by_ref<uint16_t>  result) ;

/// @brief Method TryToUInt32, addr 0xabf1dac, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt32(::StringW  s, ::by_ref<uint32_t>  result) ;

/// @brief Method TryToUInt64, addr 0xabf1f3c, size 0x168, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUInt64(::StringW  s, ::by_ref<uint64_t>  result) ;

/// @brief Method TryToUri, addr 0xabf39c4, size 0x22c, virtual false, abstract: false, final false
static inline ::System::Exception* TryToUri(::StringW  s, ::by_ref<::System::Uri*>  result) ;

/// @brief Method TryVerifyNCName, addr 0xabef9ec, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNCName(::StringW  name) ;

/// @brief Method TryVerifyNMTOKEN, addr 0xabefcfc, size 0x128, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNMTOKEN(::StringW  name) ;

/// @brief Method TryVerifyName, addr 0xabef3d8, size 0x150, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyName(::StringW  name) ;

/// @brief Method TryVerifyNormalizedString, addr 0xabefe24, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyNormalizedString(::StringW  str) ;

/// @brief Method TryVerifyTOKEN, addr 0xabefbc8, size 0x134, virtual false, abstract: false, final false
static inline ::System::Exception* TryVerifyTOKEN(::StringW  token) ;

/// @brief Method VerifyCharData, addr 0xabf3e10, size 0x1f8, virtual false, abstract: false, final false
static inline void VerifyCharData(::StringW  data, ::System::Xml::ExceptionType  invCharExceptionType, ::System::Xml::ExceptionType  invSurrogateExceptionType) ;

/// @brief Method VerifyNCName, addr 0xabef840, size 0x58, virtual false, abstract: false, final false
static inline ::StringW VerifyNCName(::StringW  name) ;

/// @brief Method VerifyNCName, addr 0xabef898, size 0x154, virtual false, abstract: false, final false
static inline ::StringW VerifyNCName(::StringW  name, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method VerifyName, addr 0xabef1c0, size 0x150, virtual false, abstract: false, final false
static inline ::StringW VerifyName(::StringW  name) ;

/// @brief Method VerifyQName, addr 0xabef638, size 0x130, virtual false, abstract: false, final false
static inline ::StringW VerifyQName(::StringW  name, ::System::Xml::ExceptionType  exceptionType) ;

/// @brief Method VerifyTOKEN, addr 0xabefa94, size 0x134, virtual false, abstract: false, final false
static inline ::StringW VerifyTOKEN(::StringW  token) ;

static inline ::ArrayW<char16_t> getStaticF_WhitespaceChars() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern() ;

static inline int32_t getStaticF_c_EncodedCharLength() ;

static inline ::ArrayW<char16_t> getStaticF_crt() ;

static inline ::ArrayW<::StringW> getStaticF_s_allDateTimeFormats() ;

static inline ::System::Xml::XmlCharType getStaticF_xmlCharType() ;

/// @brief Method get_AllDateTimeFormats, addr 0xabf2bdc, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_AllDateTimeFormats() ;

static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_c_EncodedCharLength(int32_t  value) ;

static inline void setStaticF_crt(::ArrayW<char16_t>  value) ;

static inline void setStaticF_s_allDateTimeFormats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlConvert(XmlConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlConvert(XmlConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConvert) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
