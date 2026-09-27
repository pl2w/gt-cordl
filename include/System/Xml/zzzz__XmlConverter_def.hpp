#pragma once
// IWYU pragma private; include "System/Xml/XmlConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConverter)
namespace System::Text {
class Base64Encoding;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Xml {
class UniqueId;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
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
// Forward declare root types
namespace System::Xml {
class XmlConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlConverter*, "System.Xml", "XmlConverter");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlConverter
class CORDL_TYPE XmlConverter : public ::System::Object {
public:
// Declarations
/// @brief Field base64Encoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base64Encoding, put=setStaticF_base64Encoding)) ::System::Text::Base64Encoding*  base64Encoding;

/// @brief Field unicodeEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unicodeEncoding, put=setStaticF_unicodeEncoding)) ::System::Text::UnicodeEncoding*  unicodeEncoding;

/// @brief Field utf8Encoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_utf8Encoding, put=setStaticF_utf8Encoding)) ::System::Text::UTF8Encoding*  utf8Encoding;

/// @brief Field whiteSpaceChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_whiteSpaceChars, put=setStaticF_whiteSpaceChars)) ::ArrayW<char16_t>  whiteSpaceChars;

/// @brief Method IsNegativeZero, addr 0xaa25adc, size 0x14, virtual false, abstract: false, final false
static inline bool IsNegativeZero(double_t  value) ;

/// @brief Method IsNegativeZero, addr 0xaa25ac8, size 0x14, virtual false, abstract: false, final false
static inline bool IsNegativeZero(float_t  value) ;

/// @brief Method IsWhitespace, addr 0xaa1e120, size 0x20, virtual false, abstract: false, final false
static inline bool IsWhitespace(char16_t  ch) ;

/// @brief Method IsWhitespace, addr 0xaa262f4, size 0xdc, virtual false, abstract: false, final false
static inline bool IsWhitespace(::StringW  s) ;

/// @brief Method StripWhitespace, addr 0xaa263d0, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW StripWhitespace(::StringW  s) ;

/// @brief Method ToAsciiChars, addr 0xaa25d70, size 0x80, virtual false, abstract: false, final false
static inline int32_t ToAsciiChars(::StringW  s, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToBoolean, addr 0xaa22310, size 0xc4, virtual false, abstract: false, final false
static inline bool ToBoolean(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToBoolean, addr 0xaa221dc, size 0x134, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBytes, addr 0xaa24660, size 0x120, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytes(::StringW  value) ;

/// @brief Method ToChars, addr 0xaa1d174, size 0x158, virtual false, abstract: false, final false
static inline int32_t ToChars(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::ArrayW<char16_t>  chars, int32_t  charOffset) ;

/// @brief Method ToChars, addr 0xaa24abc, size 0x424, virtual false, abstract: false, final false
static inline int32_t ToChars(::System::DateTime  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa25f28, size 0xe8, virtual false, abstract: false, final false
static inline int32_t ToChars(::System::Decimal  value, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa255dc, size 0x114, virtual false, abstract: false, final false
static inline int32_t ToChars(bool  value, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa25c38, size 0x138, virtual false, abstract: false, final false
static inline int32_t ToChars(double_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa25df0, size 0x138, virtual false, abstract: false, final false
static inline int32_t ToChars(float_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa25838, size 0x98, virtual false, abstract: false, final false
static inline int32_t ToChars(int32_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa25a30, size 0x98, virtual false, abstract: false, final false
static inline int32_t ToChars(int64_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToChars, addr 0xaa26010, size 0x94, virtual false, abstract: false, final false
static inline int32_t ToChars(uint64_t  value, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToCharsD2, addr 0xaa260a4, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ToCharsD2(int32_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToCharsD4, addr 0xaa26148, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ToCharsD4(int32_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToCharsD7, addr 0xaa261e8, size 0x10c, virtual false, abstract: false, final false
static inline int32_t ToCharsD7(int32_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToCharsR, addr 0xaa256f0, size 0x148, virtual false, abstract: false, final false
static inline int32_t ToCharsR(int32_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToCharsR, addr 0xaa258d0, size 0x160, virtual false, abstract: false, final false
static inline int32_t ToCharsR(int64_t  value, ::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToDateTime, addr 0xaa23654, size 0xbc, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToDateTime, addr 0xaa23520, size 0x134, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value) ;

/// @brief Method ToDateTime, addr 0xaa23398, size 0x130, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(int64_t  value) ;

/// @brief Method ToDecimal, addr 0xaa23328, size 0x70, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToDecimal, addr 0xaa231dc, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value) ;

/// @brief Method ToDouble, addr 0xaa22fc4, size 0xbc, virtual false, abstract: false, final false
static inline double_t ToDouble(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToDouble, addr 0xaa22e78, size 0x14c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToGuid, addr 0xaa24460, size 0x70, virtual false, abstract: false, final false
static inline ::System::Guid ToGuid(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToGuid, addr 0xaa2430c, size 0x154, virtual false, abstract: false, final false
static inline ::System::Guid ToGuid(::StringW  value) ;

/// @brief Method ToInfinity, addr 0xaa25af0, size 0xdc, virtual false, abstract: false, final false
static inline int32_t ToInfinity(bool  isNegative, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method ToInt32, addr 0xaa22520, size 0xbc, virtual false, abstract: false, final false
static inline int32_t ToInt32(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToInt32, addr 0xaa223d4, size 0x14c, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32D2, addr 0xaa25490, size 0x64, virtual false, abstract: false, final false
static inline int32_t ToInt32D2(::ArrayW<uint8_t>  chars, int32_t  offset) ;

/// @brief Method ToInt32D4, addr 0xaa254f4, size 0x6c, virtual false, abstract: false, final false
static inline int32_t ToInt32D4(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method ToInt32D7, addr 0xaa25560, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ToInt32D7(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method ToInt64, addr 0xaa22878, size 0xbc, virtual false, abstract: false, final false
static inline int64_t ToInt64(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToInt64, addr 0xaa2272c, size 0x14c, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToSingle, addr 0xaa22c40, size 0xbc, virtual false, abstract: false, final false
static inline float_t ToSingle(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToSingle, addr 0xaa22af4, size 0x14c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToString, addr 0xaa1e810, size 0x140, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToString, addr 0xaa2532c, size 0x164, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<::System::Object*>  objects) ;

/// @brief Method ToString, addr 0xaa24a20, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value) ;

/// @brief Method ToString, addr 0xaa24900, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0xaa249d8, size 0x24, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value) ;

/// @brief Method ToString, addr 0xaa24ee0, size 0x44c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ToString, addr 0xaa24968, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value) ;

/// @brief Method ToString, addr 0xaa249c0, size 0x18, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Xml::UniqueId*  value) ;

/// @brief Method ToString, addr 0xaa24780, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0xaa248a0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0xaa24840, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0xaa247e8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0xaa234c8, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// @brief Method ToString, addr 0xaa249fc, size 0x24, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value) ;

/// @brief Method ToStringUnicode, addr 0xaa1d4b4, size 0x140, virtual false, abstract: false, final false
static inline ::StringW ToStringUnicode(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToTimeSpan, addr 0xaa2429c, size 0x70, virtual false, abstract: false, final false
static inline ::System::TimeSpan ToTimeSpan(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToTimeSpan, addr 0xaa24150, size 0x14c, virtual false, abstract: false, final false
static inline ::System::TimeSpan ToTimeSpan(::StringW  value) ;

/// @brief Method ToUInt64, addr 0xaa245f0, size 0x70, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToUInt64, addr 0xaa244d0, size 0x120, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value) ;

/// @brief Method ToUniqueId, addr 0xaa240e0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Xml::UniqueId* ToUniqueId(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ToUniqueId, addr 0xaa23dc8, size 0x164, virtual false, abstract: false, final false
static inline ::System::Xml::UniqueId* ToUniqueId(::StringW  value) ;

/// @brief Method ToZero, addr 0xaa25bcc, size 0x6c, virtual false, abstract: false, final false
static inline int32_t ToZero(bool  isNegative, ::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method Trim, addr 0xaa23f2c, size 0x1b4, virtual false, abstract: false, final false
static inline ::StringW Trim(::StringW  s) ;

/// @brief Method TryParseDateTime, addr 0xaa23710, size 0x6b8, virtual false, abstract: false, final false
static inline bool TryParseDateTime(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count, ::by_ref<::System::DateTime>  result) ;

/// @brief Method TryParseDouble, addr 0xaa23080, size 0x15c, virtual false, abstract: false, final false
static inline bool TryParseDouble(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count, ::by_ref<double_t>  result) ;

/// @brief Method TryParseInt32, addr 0xaa225dc, size 0x150, virtual false, abstract: false, final false
static inline bool TryParseInt32(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count, ::by_ref<int32_t>  result) ;

/// @brief Method TryParseInt64, addr 0xaa22934, size 0x1c0, virtual false, abstract: false, final false
static inline bool TryParseInt64(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count, ::by_ref<int64_t>  result) ;

/// @brief Method TryParseSingle, addr 0xaa22cfc, size 0x17c, virtual false, abstract: false, final false
static inline bool TryParseSingle(::ArrayW<uint8_t>  chars, int32_t  offset, int32_t  count, ::by_ref<float_t>  result) ;

static inline ::System::Text::Base64Encoding* getStaticF_base64Encoding() ;

static inline ::System::Text::UnicodeEncoding* getStaticF_unicodeEncoding() ;

static inline ::System::Text::UTF8Encoding* getStaticF_utf8Encoding() ;

static inline ::ArrayW<char16_t> getStaticF_whiteSpaceChars() ;

/// @brief Method get_Base64Encoding, addr 0xaa21f7c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Text::Base64Encoding* get_Base64Encoding() ;

/// @brief Method get_UTF8Encoding, addr 0xaa22040, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Text::UTF8Encoding* get_UTF8Encoding() ;

/// @brief Method get_UnicodeEncoding, addr 0xaa2210c, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Text::UnicodeEncoding* get_UnicodeEncoding() ;

static inline void setStaticF_base64Encoding(::System::Text::Base64Encoding*  value) ;

static inline void setStaticF_unicodeEncoding(::System::Text::UnicodeEncoding*  value) ;

static inline void setStaticF_utf8Encoding(::System::Text::UTF8Encoding*  value) ;

static inline void setStaticF_whiteSpaceChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlConverter(XmlConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlConverter(XmlConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConverter) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
