#pragma once
// IWYU pragma private; include "System/Net/WebUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebUtility)
namespace System::IO {
class TextWriter;
}
namespace System::Net::Configuration {
struct UnicodeDecodingConformance;
}
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
namespace System::Net {
class WebUtility_HtmlEntities;
}
namespace System::Net {
class WebUtility_UrlDecoder;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Net {
class WebUtility;
}
namespace System::Net {
class WebUtility_HtmlEntities;
}
namespace System::Net {
class WebUtility_UrlDecoder;
}
// Write type traits
MARK_REF_T(::System::Net::WebUtility*);
MARK_REF_T(::System::Net::WebUtility_HtmlEntities*);
MARK_REF_T(::System::Net::WebUtility_UrlDecoder*);
DEFINE_IL2CPP_CLASS(::System::Net::WebUtility*, "System.Net", "WebUtility");
DEFINE_IL2CPP_CLASS(::System::Net::WebUtility_HtmlEntities*, "System.Net", "WebUtility/HtmlEntities");
DEFINE_IL2CPP_CLASS(::System::Net::WebUtility_UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
// Dependencies System.Net.Configuration.UnicodeDecodingConformance, System.Net.Configuration.UnicodeEncodingConformance, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebUtility
class CORDL_TYPE WebUtility : public ::System::Object {
public:
// Declarations
using HtmlEntities = ::System::Net::WebUtility_HtmlEntities;

using UrlDecoder = ::System::Net::WebUtility_UrlDecoder;

/// @brief Field _htmlDecodeConformance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__htmlDecodeConformance, put=setStaticF__htmlDecodeConformance)) ::System::Net::Configuration::UnicodeDecodingConformance  _htmlDecodeConformance;

/// @brief Field _htmlEncodeConformance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__htmlEncodeConformance, put=setStaticF__htmlEncodeConformance)) ::System::Net::Configuration::UnicodeEncodingConformance  _htmlEncodeConformance;

/// @brief Field _htmlEntityEndingChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__htmlEntityEndingChars, put=setStaticF__htmlEntityEndingChars)) ::ArrayW<char16_t>  _htmlEntityEndingChars;

/// @brief Method ConvertSmpToUtf16, addr 0xac6e430, size 0x38, virtual false, abstract: false, final false
static inline void ConvertSmpToUtf16(uint32_t  smpChar, ::by_ref<char16_t>  leadingSurrogate, ::by_ref<char16_t>  trailingSurrogate) ;

/// @brief Method GetNextUnicodeScalarValueFromUtf16Surrogate, addr 0xac6dcac, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetNextUnicodeScalarValueFromUtf16Surrogate(::by_ref<char16_t*>  pch, ::by_ref<int32_t>  charsRemaining) ;

/// @brief Method HexToInt, addr 0xac6eecc, size 0x34, virtual false, abstract: false, final false
static inline int32_t HexToInt(char16_t  h) ;

/// @brief Method HtmlDecode, addr 0xac6dd4c, size 0x118, virtual false, abstract: false, final false
static inline ::StringW HtmlDecode(::StringW  value) ;

/// @brief Method HtmlDecode, addr 0xac6df64, size 0x3e8, virtual false, abstract: false, final false
static inline void HtmlDecode(::StringW  value, ::System::IO::TextWriter*  output) ;

/// @brief Method HtmlEncode, addr 0xac6d5b4, size 0x120, virtual false, abstract: false, final false
static inline ::StringW HtmlEncode(::StringW  value) ;

/// @brief Method HtmlEncode, addr 0xac6d80c, size 0x3bc, virtual false, abstract: false, final false
static inline void HtmlEncode(::StringW  value, ::System::IO::TextWriter*  output) ;

/// @brief Method IndexOfHtmlEncodingChars, addr 0xac6d6d4, size 0x138, virtual false, abstract: false, final false
static inline int32_t IndexOfHtmlEncodingChars(::StringW  s, int32_t  startPos) ;

/// @brief Method IntToHex, addr 0xac6ead4, size 0x18, virtual false, abstract: false, final false
static inline char16_t IntToHex(int32_t  n) ;

/// @brief Method IsUrlSafeChar, addr 0xac6ea68, size 0x6c, virtual false, abstract: false, final false
static inline bool IsUrlSafeChar(char16_t  ch) ;

/// @brief Method StringRequiresHtmlDecoding, addr 0xac6de64, size 0x100, virtual false, abstract: false, final false
static inline bool StringRequiresHtmlDecoding(::StringW  s) ;

/// @brief Method UrlDecode, addr 0xac6f2a4, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW UrlDecode(::StringW  encodedValue) ;

/// @brief Method UrlDecodeInternal, addr 0xac6f068, size 0x23c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlDecodeInternal(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count) ;

/// @brief Method UrlDecodeInternal, addr 0xac6ec20, size 0x224, virtual false, abstract: false, final false
static inline ::StringW UrlDecodeInternal(::StringW  value, ::System::Text::Encoding*  encoding) ;

/// @brief Method UrlDecodeToBytes, addr 0xac6f320, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlDecodeToBytes(::ArrayW<uint8_t>  encodedValue, int32_t  offset, int32_t  count) ;

/// @brief Method UrlEncode, addr 0xac6e620, size 0x368, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlEncode(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count) ;

/// @brief Method UrlEncode, addr 0xac6e550, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlEncode(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count, bool  alwaysCreateNewReturnValue) ;

/// @brief Method UrlEncode, addr 0xac6eaec, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW UrlEncode(::StringW  value) ;

/// @brief Method UrlEncodeToBytes, addr 0xac6ebb0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlEncodeToBytes(::ArrayW<uint8_t>  value, int32_t  offset, int32_t  count) ;

/// @brief Method ValidateUrlEncodingParameters, addr 0xac6e988, size 0xe0, virtual false, abstract: false, final false
static inline bool ValidateUrlEncodingParameters(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count) ;

static inline ::System::Net::Configuration::UnicodeDecodingConformance getStaticF__htmlDecodeConformance() ;

static inline ::System::Net::Configuration::UnicodeEncodingConformance getStaticF__htmlEncodeConformance() ;

static inline ::ArrayW<char16_t> getStaticF__htmlEntityEndingChars() ;

/// @brief Method get_HtmlDecodeConformance, addr 0xac6e34c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Net::Configuration::UnicodeDecodingConformance get_HtmlDecodeConformance() ;

/// @brief Method get_HtmlEncodeConformance, addr 0xac6dbc8, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance() ;

static inline void setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance  value) ;

static inline void setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance  value) ;

static inline void setStaticF__htmlEntityEndingChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtility(WebUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtility(WebUtility const& ) = delete;

/// @brief Field HIGH_SURROGATE_START offset 0xffffffff size 0x2
static constexpr char16_t  HIGH_SURROGATE_START{u'\u{fffd}'};

/// @brief Field LOW_SURROGATE_END offset 0xffffffff size 0x2
static constexpr char16_t  LOW_SURROGATE_END{u'\u{fffd}'};

/// @brief Field LOW_SURROGATE_START offset 0xffffffff size 0x2
static constexpr char16_t  LOW_SURROGATE_START{u'\u{fffd}'};

/// @brief Field UNICODE_PLANE00_END offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE00_END{static_cast<int32_t>(0xffff)};

/// @brief Field UNICODE_PLANE01_START offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE01_START{static_cast<int32_t>(0x10000)};

/// @brief Field UNICODE_PLANE16_END offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE16_END{static_cast<int32_t>(0x10ffff)};

/// @brief Field UnicodeReplacementChar offset 0xffffffff size 0x4
static constexpr int32_t  UnicodeReplacementChar{static_cast<int32_t>(0xfffd)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebUtility) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebUtility/HtmlEntities
class CORDL_TYPE WebUtility_HtmlEntities : public ::System::Object {
public:
// Declarations
/// @brief Field entities, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_entities, put=setStaticF_entities)) ::ArrayW<int64_t>  entities;

/// @brief Field entities_values, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_entities_values, put=setStaticF_entities_values)) ::ArrayW<char16_t>  entities_values;

/// @brief Method CalculateKeyValue, addr 0xac6f4b0, size 0x94, virtual false, abstract: false, final false
static inline int64_t CalculateKeyValue(::StringW  s) ;

/// @brief Method Lookup, addr 0xac6e468, size 0xe8, virtual false, abstract: false, final false
static inline char16_t Lookup(::StringW  entity) ;

static inline ::ArrayW<int64_t> getStaticF_entities() ;

static inline ::ArrayW<char16_t> getStaticF_entities_values() ;

static inline void setStaticF_entities(::ArrayW<int64_t>  value) ;

static inline void setStaticF_entities_values(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebUtility_HtmlEntities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebUtility_HtmlEntities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtility_HtmlEntities(WebUtility_HtmlEntities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility_HtmlEntities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtility_HtmlEntities(WebUtility_HtmlEntities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebUtility_HtmlEntities) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebUtility/UrlDecoder
class CORDL_TYPE WebUtility_UrlDecoder : public ::System::Object {
public:
// Declarations
/// @brief Field _bufferSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _byteBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteBuffer, put=__cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t>  _byteBuffer;

/// @brief Field _charBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__charBuffer, put=__cordl_internal_set__charBuffer)) ::ArrayW<char16_t>  _charBuffer;

/// @brief Field _encoding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _numBytes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__numBytes, put=__cordl_internal_set__numBytes)) int32_t  _numBytes;

/// @brief Field _numChars, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__numChars, put=__cordl_internal_set__numChars)) int32_t  _numChars;

/// @brief Method AddByte, addr 0xac6ef00, size 0xac, virtual false, abstract: false, final false
inline void AddByte(uint8_t  b) ;

/// @brief Method AddChar, addr 0xac6efac, size 0x60, virtual false, abstract: false, final false
inline void AddChar(char16_t  ch) ;

/// @brief Method FlushBytes, addr 0xac6f450, size 0x60, virtual false, abstract: false, final false
inline void FlushBytes() ;

/// @brief Method GetString, addr 0xac6f00c, size 0x5c, virtual false, abstract: false, final false
inline ::StringW GetString() ;

static inline ::System::Net::WebUtility_UrlDecoder* New_ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding) ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__byteBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__byteBuffer() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__charBuffer() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__charBuffer() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr int32_t const& __cordl_internal_get__numBytes() const;

constexpr int32_t& __cordl_internal_get__numBytes() ;

constexpr int32_t const& __cordl_internal_get__numChars() const;

constexpr int32_t& __cordl_internal_get__numChars() ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__numBytes(int32_t  value) ;

constexpr void __cordl_internal_set__numChars(int32_t  value) ;

/// @brief Method .ctor, addr 0xac6ee44, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebUtility_UrlDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebUtility_UrlDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtility_UrlDecoder(WebUtility_UrlDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility_UrlDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtility_UrlDecoder(WebUtility_UrlDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10574};

/// @brief Field _bufferSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _numChars, offset: 0x14, size: 0x4, def value: None
 int32_t  ____numChars;

/// @brief Field _charBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____charBuffer;

/// @brief Field _numBytes, offset: 0x20, size: 0x4, def value: None
 int32_t  ____numBytes;

/// @brief Field _byteBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____byteBuffer;

/// @brief Field _encoding, offset: 0x30, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____bufferSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____numChars) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____charBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____numBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____byteBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebUtility_UrlDecoder, ____encoding) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebUtility_UrlDecoder) == 0x38, "Size mismatch!");

} // namespace end def System::Net
