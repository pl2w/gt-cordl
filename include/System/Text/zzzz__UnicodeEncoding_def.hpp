#pragma once
// IWYU pragma private; include "System/Text/UnicodeEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeEncoding)
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class UnicodeEncoding_Decoder;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Text {
class UnicodeEncoding_Decoder;
}
// Write type traits
MARK_REF_T(::System::Text::UnicodeEncoding*);
MARK_REF_T(::System::Text::UnicodeEncoding_Decoder*);
DEFINE_IL2CPP_CLASS(::System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
DEFINE_IL2CPP_CLASS(::System::Text::UnicodeEncoding_Decoder*, "System.Text", "UnicodeEncoding/Decoder");
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UnicodeEncoding
class CORDL_TYPE UnicodeEncoding : public ::System::Text::Encoding {
public:
// Declarations
using Decoder = ::System::Text::UnicodeEncoding_Decoder;

 __declspec(property(get=get_Preamble)) ::System::ReadOnlySpan_1<uint8_t>  Preamble;

/// @brief Field bigEndian, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_bigEndian, put=__cordl_internal_set_bigEndian)) bool  bigEndian;

/// @brief Field byteOrderMark, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_byteOrderMark, put=__cordl_internal_set_byteOrderMark)) bool  byteOrderMark;

/// @brief Field highLowPatternMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_highLowPatternMask, put=setStaticF_highLowPatternMask)) uint64_t  highLowPatternMask;

/// @brief Field isThrowException, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isThrowException, put=__cordl_internal_set_isThrowException)) bool  isThrowException;

/// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_bigEndianDefault, put=setStaticF_s_bigEndianDefault)) ::System::Text::UnicodeEncoding*  s_bigEndianDefault;

/// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_bigEndianPreamble, put=setStaticF_s_bigEndianPreamble)) ::ArrayW<uint8_t>  s_bigEndianPreamble;

/// @brief Field s_littleEndianDefault, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_littleEndianDefault, put=setStaticF_s_littleEndianDefault)) ::System::Text::UnicodeEncoding*  s_littleEndianDefault;

/// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_littleEndianPreamble, put=setStaticF_s_littleEndianPreamble)) ::ArrayW<uint8_t>  s_littleEndianPreamble;

/// @brief Method Equals, addr 0xa14cb18, size 0x10c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetByteCount, addr 0xa149b04, size 0x188, virtual true, abstract: false, final false
inline int32_t GetByteCount(::ArrayW<char16_t>  chars, int32_t  index, int32_t  count) ;

/// [CLSCompliant(false)]
/// @brief Method GetByteCount, addr 0xa149d18, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count) ;

/// @brief Method GetByteCount, addr 0xa14aaf8, size 0x51c, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetByteCount, addr 0xa149c8c, size 0x8c, virtual true, abstract: false, final false
inline int32_t GetByteCount(::StringW  s) ;

/// @brief Method GetBytes, addr 0xa14a030, size 0x274, virtual true, abstract: false, final false
inline int32_t GetBytes(::ArrayW<char16_t>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// [CLSCompliant(false)]
/// @brief Method GetBytes, addr 0xa14a2a4, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount) ;

/// @brief Method GetBytes, addr 0xa14b014, size 0x69c, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetBytes, addr 0xa149de8, size 0x248, virtual true, abstract: false, final false
inline int32_t GetBytes(::StringW  s, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetCharCount, addr 0xa14a39c, size 0x188, virtual true, abstract: false, final false
inline int32_t GetCharCount(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

/// [CLSCompliant(false)]
/// @brief Method GetCharCount, addr 0xa14a524, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count) ;

/// @brief Method GetCharCount, addr 0xa14b71c, size 0x644, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetChars, addr 0xa14a5f4, size 0x278, virtual true, abstract: false, final false
inline int32_t GetChars(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t>  chars, int32_t  charIndex) ;

/// [CLSCompliant(false)]
/// @brief Method GetChars, addr 0xa14a86c, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount) ;

/// @brief Method GetChars, addr 0xa14bd60, size 0x7d8, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetDecoder, addr 0xa14c600, size 0x64, virtual true, abstract: false, final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetEncoder, addr 0xa14c5a4, size 0x5c, virtual true, abstract: false, final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetHashCode, addr 0xa14cc24, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaxByteCount, addr 0xa14c91c, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount, addr 0xa14ca18, size 0x100, virtual true, abstract: false, final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method GetPreamble, addr 0xa14c674, size 0x11c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetPreamble() ;

/// @brief Method GetString, addr 0xa14a964, size 0x194, virtual true, abstract: false, final false
inline ::StringW GetString(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

static inline ::System::Text::UnicodeEncoding* New_ctor() ;

static inline ::System::Text::UnicodeEncoding* New_ctor(bool  bigEndian, bool  byteOrderMark) ;

static inline ::System::Text::UnicodeEncoding* New_ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes) ;

/// @brief Method SetDefaultFallbacks, addr 0xa149a18, size 0xec, virtual true, abstract: false, final false
inline void SetDefaultFallbacks() ;

constexpr bool const& __cordl_internal_get_bigEndian() const;

constexpr bool& __cordl_internal_get_bigEndian() ;

constexpr bool const& __cordl_internal_get_byteOrderMark() const;

constexpr bool& __cordl_internal_get_byteOrderMark() ;

constexpr bool const& __cordl_internal_get_isThrowException() const;

constexpr bool& __cordl_internal_get_isThrowException() ;

constexpr void __cordl_internal_set_bigEndian(bool  value) ;

constexpr void __cordl_internal_set_byteOrderMark(bool  value) ;

constexpr void __cordl_internal_set_isThrowException(bool  value) ;

/// @brief Method .ctor, addr 0xa149890, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1498dc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(bool  bigEndian, bool  byteOrderMark) ;

/// @brief Method .ctor, addr 0xa149920, size 0x70, virtual false, abstract: false, final false
inline void _ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes) ;

static inline uint64_t getStaticF_highLowPatternMask() ;

static inline ::System::Text::UnicodeEncoding* getStaticF_s_bigEndianDefault() ;

static inline ::ArrayW<uint8_t> getStaticF_s_bigEndianPreamble() ;

static inline ::System::Text::UnicodeEncoding* getStaticF_s_littleEndianDefault() ;

static inline ::ArrayW<uint8_t> getStaticF_s_littleEndianPreamble() ;

/// @brief Method get_Preamble, addr 0xa14c790, size 0x18c, virtual true, abstract: false, final false
inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

static inline void setStaticF_highLowPatternMask(uint64_t  value) ;

static inline void setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding*  value) ;

static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding*  value) ;

static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnicodeEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnicodeEncoding(UnicodeEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnicodeEncoding(UnicodeEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6010};

/// @brief Field isThrowException, offset: 0x38, size: 0x1, def value: None
 bool  ___isThrowException;

/// @brief Field bigEndian, offset: 0x39, size: 0x1, def value: None
 bool  ___bigEndian;

/// @brief Field byteOrderMark, offset: 0x3a, size: 0x1, def value: None
 bool  ___byteOrderMark;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UnicodeEncoding, ___isThrowException) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___bigEndian) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___byteOrderMark) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::System::Text::UnicodeEncoding) == 0x40, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.DecoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UnicodeEncoding/Decoder
class CORDL_TYPE UnicodeEncoding_Decoder : public ::System::Text::DecoderNLS {
public:
// Declarations
 __declspec(property(get=get_HasState)) bool  HasState;

/// @brief Field lastByte, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastByte, put=__cordl_internal_set_lastByte)) int32_t  lastByte;

/// @brief Field lastChar, offset 0x34, size 0x2 
 __declspec(property(get=__cordl_internal_get_lastChar, put=__cordl_internal_set_lastChar)) char16_t  lastChar;

static inline ::System::Text::UnicodeEncoding_Decoder* New_ctor(::System::Text::UnicodeEncoding*  encoding) ;

/// @brief Method Reset, addr 0xa14ce54, size 0x28, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_lastByte() const;

constexpr int32_t& __cordl_internal_get_lastByte() ;

constexpr char16_t const& __cordl_internal_get_lastChar() const;

constexpr char16_t& __cordl_internal_get_lastChar() ;

constexpr void __cordl_internal_set_lastByte(int32_t  value) ;

constexpr void __cordl_internal_set_lastChar(char16_t  value) ;

/// @brief Method .ctor, addr 0xa14c664, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UnicodeEncoding*  encoding) ;

/// @brief Method get_HasState, addr 0xa14ce7c, size 0x24, virtual true, abstract: false, final false
inline bool get_HasState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnicodeEncoding_Decoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding_Decoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnicodeEncoding_Decoder(UnicodeEncoding_Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding_Decoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnicodeEncoding_Decoder(UnicodeEncoding_Decoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6009};

/// @brief Field lastByte, offset: 0x30, size: 0x4, def value: None
 int32_t  ___lastByte;

/// @brief Field lastChar, offset: 0x34, size: 0x2, def value: None
 char16_t  ___lastChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UnicodeEncoding_Decoder, ___lastByte) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding_Decoder, ___lastChar) == 0x34, "Offset mismatch!");

static_assert(sizeof(::System::Text::UnicodeEncoding_Decoder) == 0x38, "Size mismatch!");

} // namespace end def System::Text
