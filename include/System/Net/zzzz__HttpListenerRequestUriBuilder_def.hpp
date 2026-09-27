#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequestUriBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequestUriBuilder)
namespace GlobalNamespace {
struct HttpListenerRequestUriBuilder_EncodingType;
}
namespace GlobalNamespace {
struct HttpListenerRequestUriBuilder_ParsingResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class HttpListenerRequestUriBuilder;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListenerRequestUriBuilder*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerRequestUriBuilder*, "System.Net", "HttpListenerRequestUriBuilder");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerRequestUriBuilder
class CORDL_TYPE HttpListenerRequestUriBuilder : public ::System::Object {
public:
// Declarations
using EncodingType = ::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType;

using ParsingResult = ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult;

/// @brief Field ansiEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ansiEncoding, put=setStaticF_ansiEncoding)) ::System::Text::Encoding*  ansiEncoding;

/// @brief Field cookedUriHost, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookedUriHost, put=__cordl_internal_set_cookedUriHost)) ::StringW  cookedUriHost;

/// @brief Field cookedUriPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookedUriPath, put=__cordl_internal_set_cookedUriPath)) ::StringW  cookedUriPath;

/// @brief Field cookedUriQuery, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookedUriQuery, put=__cordl_internal_set_cookedUriQuery)) ::StringW  cookedUriQuery;

/// @brief Field cookedUriScheme, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookedUriScheme, put=__cordl_internal_set_cookedUriScheme)) ::StringW  cookedUriScheme;

/// @brief Field rawOctets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawOctets, put=__cordl_internal_set_rawOctets)) ::System::Collections::Generic::List_1<uint8_t>*  rawOctets;

/// @brief Field rawPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawPath, put=__cordl_internal_set_rawPath)) ::StringW  rawPath;

/// @brief Field rawUri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawUri, put=__cordl_internal_set_rawUri)) ::StringW  rawUri;

/// @brief Field requestUri, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestUri, put=__cordl_internal_set_requestUri)) ::System::Uri*  requestUri;

/// @brief Field requestUriString, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestUriString, put=__cordl_internal_set_requestUriString)) ::System::Text::StringBuilder*  requestUriString;

/// @brief Field useCookedRequestUrl, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useCookedRequestUrl, put=setStaticF_useCookedRequestUrl)) bool  useCookedRequestUrl;

/// @brief Field utf8Encoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_utf8Encoding, put=setStaticF_utf8Encoding)) ::System::Text::Encoding*  utf8Encoding;

/// @brief Method AddPercentEncodedOctetToRawOctetsList, addr 0xac58e90, size 0x15c, virtual false, abstract: false, final false
inline bool AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding*  encoding, ::StringW  escapedCharacter) ;

/// @brief Method AddSlashToAsteriskOnlyPath, addr 0xac57a38, size 0x78, virtual false, abstract: false, final false
static inline ::StringW AddSlashToAsteriskOnlyPath(::StringW  path) ;

/// @brief Method AppendOctetsPercentEncoded, addr 0xac58fec, size 0x334, virtual false, abstract: false, final false
static inline void AppendOctetsPercentEncoded(::System::Text::StringBuilder*  target, ::System::Collections::Generic::IEnumerable_1<uint8_t>*  octets) ;

/// @brief Method AppendUnicodeCodePointValuePercentEncoded, addr 0xac58b58, size 0x338, virtual false, abstract: false, final false
inline bool AppendUnicodeCodePointValuePercentEncoded(::StringW  codePoint) ;

/// @brief Method Build, addr 0xac57b40, size 0xe8, virtual false, abstract: false, final false
inline ::System::Uri* Build() ;

/// @brief Method BuildRequestUriUsingCookedPath, addr 0xac57c28, size 0x274, virtual false, abstract: false, final false
inline void BuildRequestUriUsingCookedPath() ;

/// @brief Method BuildRequestUriUsingRawPath, addr 0xac5840c, size 0x288, virtual false, abstract: false, final false
inline ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult BuildRequestUriUsingRawPath(::System::Text::Encoding*  encoding) ;

/// @brief Method BuildRequestUriUsingRawPath, addr 0xac57e9c, size 0x378, virtual false, abstract: false, final false
inline void BuildRequestUriUsingRawPath() ;

/// @brief Method EmptyDecodeAndAppendRawOctetsList, addr 0xac587e0, size 0x378, virtual false, abstract: false, final false
inline bool EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding*  encoding) ;

/// @brief Method GetEncoding, addr 0xac5838c, size 0x80, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* GetEncoding(::GlobalNamespace::HttpListenerRequestUriBuilder_EncodingType  type) ;

/// @brief Method GetOctetsAsString, addr 0xac59320, size 0x3b4, virtual false, abstract: false, final false
static inline ::StringW GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<uint8_t>*  octets) ;

/// @brief Method GetPath, addr 0xac5821c, size 0x170, virtual false, abstract: false, final false
static inline ::StringW GetPath(::StringW  uriString) ;

/// @brief Method GetRequestUri, addr 0xac57ab0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Uri* GetRequestUri(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery) ;

/// @brief Method LogWarning, addr 0xac58214, size 0x8, virtual false, abstract: false, final false
inline void LogWarning(::StringW  methodName, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::System::Net::HttpListenerRequestUriBuilder* New_ctor(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery) ;

/// @brief Method ParseRawPath, addr 0xac58694, size 0x14c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HttpListenerRequestUriBuilder_ParsingResult ParseRawPath(::System::Text::Encoding*  encoding) ;

constexpr ::StringW const& __cordl_internal_get_cookedUriHost() const;

constexpr ::StringW& __cordl_internal_get_cookedUriHost() ;

constexpr ::StringW const& __cordl_internal_get_cookedUriPath() const;

constexpr ::StringW& __cordl_internal_get_cookedUriPath() ;

constexpr ::StringW const& __cordl_internal_get_cookedUriQuery() const;

constexpr ::StringW& __cordl_internal_get_cookedUriQuery() ;

constexpr ::StringW const& __cordl_internal_get_cookedUriScheme() const;

constexpr ::StringW& __cordl_internal_get_cookedUriScheme() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_rawOctets() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_rawOctets() ;

constexpr ::StringW const& __cordl_internal_get_rawPath() const;

constexpr ::StringW& __cordl_internal_get_rawPath() ;

constexpr ::StringW const& __cordl_internal_get_rawUri() const;

constexpr ::StringW& __cordl_internal_get_rawUri() ;

constexpr ::System::Uri* const& __cordl_internal_get_requestUri() const;

constexpr ::System::Uri*& __cordl_internal_get_requestUri() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_requestUriString() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_requestUriString() ;

constexpr void __cordl_internal_set_cookedUriHost(::StringW  value) ;

constexpr void __cordl_internal_set_cookedUriPath(::StringW  value) ;

constexpr void __cordl_internal_set_cookedUriQuery(::StringW  value) ;

constexpr void __cordl_internal_set_cookedUriScheme(::StringW  value) ;

constexpr void __cordl_internal_set_rawOctets(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_rawPath(::StringW  value) ;

constexpr void __cordl_internal_set_rawUri(::StringW  value) ;

constexpr void __cordl_internal_set_requestUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_requestUriString(::System::Text::StringBuilder*  value) ;

/// @brief Method .ctor, addr 0xac57938, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery) ;

static inline ::System::Text::Encoding* getStaticF_ansiEncoding() ;

static inline bool getStaticF_useCookedRequestUrl() ;

static inline ::System::Text::Encoding* getStaticF_utf8Encoding() ;

static inline void setStaticF_ansiEncoding(::System::Text::Encoding*  value) ;

static inline void setStaticF_useCookedRequestUrl(bool  value) ;

static inline void setStaticF_utf8Encoding(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequestUriBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10498};

/// @brief Field rawUri, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___rawUri;

/// @brief Field cookedUriScheme, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___cookedUriScheme;

/// @brief Field cookedUriHost, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___cookedUriHost;

/// @brief Field cookedUriPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___cookedUriPath;

/// @brief Field cookedUriQuery, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___cookedUriQuery;

/// @brief Field requestUriString, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___requestUriString;

/// @brief Field rawOctets, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___rawOctets;

/// @brief Field rawPath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___rawPath;

/// @brief Field requestUri, offset: 0x50, size: 0x8, def value: None
 ::System::Uri*  ___requestUri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriHost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriQuery) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUriString) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawOctets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUri) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpListenerRequestUriBuilder) == 0x58, "Size mismatch!");

} // namespace end def System::Net
