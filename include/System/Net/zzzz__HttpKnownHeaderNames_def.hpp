#pragma once
// IWYU pragma private; include "System/Net/HttpKnownHeaderNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpKnownHeaderNames)
// Forward declare root types
namespace System::Net {
class HttpKnownHeaderNames;
}
// Write type traits
MARK_REF_T(::System::Net::HttpKnownHeaderNames*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpKnownHeaderNames*, "System.Net", "HttpKnownHeaderNames");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpKnownHeaderNames
class CORDL_TYPE HttpKnownHeaderNames : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpKnownHeaderNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpKnownHeaderNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpKnownHeaderNames(HttpKnownHeaderNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpKnownHeaderNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpKnownHeaderNames(HttpKnownHeaderNames const& ) = delete;

/// @brief Field Accept offset 0xffffffff size 0x8
static constexpr ::ConstString  Accept{u"Accept"};

/// @brief Field AcceptCharset offset 0xffffffff size 0x8
static constexpr ::ConstString  AcceptCharset{u"Accept-Charset"};

/// @brief Field AcceptEncoding offset 0xffffffff size 0x8
static constexpr ::ConstString  AcceptEncoding{u"Accept-Encoding"};

/// @brief Field AcceptLanguage offset 0xffffffff size 0x8
static constexpr ::ConstString  AcceptLanguage{u"Accept-Language"};

/// @brief Field AcceptRanges offset 0xffffffff size 0x8
static constexpr ::ConstString  AcceptRanges{u"Accept-Ranges"};

/// @brief Field Age offset 0xffffffff size 0x8
static constexpr ::ConstString  Age{u"Age"};

/// @brief Field Allow offset 0xffffffff size 0x8
static constexpr ::ConstString  Allow{u"Allow"};

/// @brief Field Authorization offset 0xffffffff size 0x8
static constexpr ::ConstString  Authorization{u"Authorization"};

/// @brief Field CacheControl offset 0xffffffff size 0x8
static constexpr ::ConstString  CacheControl{u"Cache-Control"};

/// @brief Field Connection offset 0xffffffff size 0x8
static constexpr ::ConstString  Connection{u"Connection"};

/// @brief Field ContentDisposition offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentDisposition{u"Content-Disposition"};

/// @brief Field ContentEncoding offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentEncoding{u"Content-Encoding"};

/// @brief Field ContentLanguage offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentLanguage{u"Content-Language"};

/// @brief Field ContentLength offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentLength{u"Content-Length"};

/// @brief Field ContentLocation offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentLocation{u"Content-Location"};

/// @brief Field ContentMD5 offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentMD5{u"Content-MD5"};

/// @brief Field ContentRange offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentRange{u"Content-Range"};

/// @brief Field ContentType offset 0xffffffff size 0x8
static constexpr ::ConstString  ContentType{u"Content-Type"};

/// @brief Field Cookie offset 0xffffffff size 0x8
static constexpr ::ConstString  Cookie{u"Cookie"};

/// @brief Field Cookie2 offset 0xffffffff size 0x8
static constexpr ::ConstString  Cookie2{u"Cookie2"};

/// @brief Field Date offset 0xffffffff size 0x8
static constexpr ::ConstString  Date{u"Date"};

/// @brief Field ETag offset 0xffffffff size 0x8
static constexpr ::ConstString  ETag{u"ETag"};

/// @brief Field Expect offset 0xffffffff size 0x8
static constexpr ::ConstString  Expect{u"Expect"};

/// @brief Field Expires offset 0xffffffff size 0x8
static constexpr ::ConstString  Expires{u"Expires"};

/// @brief Field From offset 0xffffffff size 0x8
static constexpr ::ConstString  From{u"From"};

/// @brief Field Host offset 0xffffffff size 0x8
static constexpr ::ConstString  Host{u"Host"};

/// @brief Field IfMatch offset 0xffffffff size 0x8
static constexpr ::ConstString  IfMatch{u"If-Match"};

/// @brief Field IfModifiedSince offset 0xffffffff size 0x8
static constexpr ::ConstString  IfModifiedSince{u"If-Modified-Since"};

/// @brief Field IfNoneMatch offset 0xffffffff size 0x8
static constexpr ::ConstString  IfNoneMatch{u"If-None-Match"};

/// @brief Field IfRange offset 0xffffffff size 0x8
static constexpr ::ConstString  IfRange{u"If-Range"};

/// @brief Field IfUnmodifiedSince offset 0xffffffff size 0x8
static constexpr ::ConstString  IfUnmodifiedSince{u"If-Unmodified-Since"};

/// @brief Field KeepAlive offset 0xffffffff size 0x8
static constexpr ::ConstString  KeepAlive{u"Keep-Alive"};

/// @brief Field LastModified offset 0xffffffff size 0x8
static constexpr ::ConstString  LastModified{u"Last-Modified"};

/// @brief Field Location offset 0xffffffff size 0x8
static constexpr ::ConstString  Location{u"Location"};

/// @brief Field MaxForwards offset 0xffffffff size 0x8
static constexpr ::ConstString  MaxForwards{u"Max-Forwards"};

/// @brief Field Origin offset 0xffffffff size 0x8
static constexpr ::ConstString  Origin{u"Origin"};

/// @brief Field P3P offset 0xffffffff size 0x8
static constexpr ::ConstString  P3P{u"P3P"};

/// @brief Field Pragma offset 0xffffffff size 0x8
static constexpr ::ConstString  Pragma{u"Pragma"};

/// @brief Field ProxyAuthenticate offset 0xffffffff size 0x8
static constexpr ::ConstString  ProxyAuthenticate{u"Proxy-Authenticate"};

/// @brief Field ProxyAuthorization offset 0xffffffff size 0x8
static constexpr ::ConstString  ProxyAuthorization{u"Proxy-Authorization"};

/// @brief Field ProxyConnection offset 0xffffffff size 0x8
static constexpr ::ConstString  ProxyConnection{u"Proxy-Connection"};

/// @brief Field Range offset 0xffffffff size 0x8
static constexpr ::ConstString  Range{u"Range"};

/// @brief Field Referer offset 0xffffffff size 0x8
static constexpr ::ConstString  Referer{u"Referer"};

/// @brief Field RetryAfter offset 0xffffffff size 0x8
static constexpr ::ConstString  RetryAfter{u"Retry-After"};

/// @brief Field SecWebSocketAccept offset 0xffffffff size 0x8
static constexpr ::ConstString  SecWebSocketAccept{u"Sec-WebSocket-Accept"};

/// @brief Field SecWebSocketExtensions offset 0xffffffff size 0x8
static constexpr ::ConstString  SecWebSocketExtensions{u"Sec-WebSocket-Extensions"};

/// @brief Field SecWebSocketKey offset 0xffffffff size 0x8
static constexpr ::ConstString  SecWebSocketKey{u"Sec-WebSocket-Key"};

/// @brief Field SecWebSocketProtocol offset 0xffffffff size 0x8
static constexpr ::ConstString  SecWebSocketProtocol{u"Sec-WebSocket-Protocol"};

/// @brief Field SecWebSocketVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  SecWebSocketVersion{u"Sec-WebSocket-Version"};

/// @brief Field Server offset 0xffffffff size 0x8
static constexpr ::ConstString  Server{u"Server"};

/// @brief Field SetCookie offset 0xffffffff size 0x8
static constexpr ::ConstString  SetCookie{u"Set-Cookie"};

/// @brief Field SetCookie2 offset 0xffffffff size 0x8
static constexpr ::ConstString  SetCookie2{u"Set-Cookie2"};

/// @brief Field TE offset 0xffffffff size 0x8
static constexpr ::ConstString  TE{u"TE"};

/// @brief Field Trailer offset 0xffffffff size 0x8
static constexpr ::ConstString  Trailer{u"Trailer"};

/// @brief Field TransferEncoding offset 0xffffffff size 0x8
static constexpr ::ConstString  TransferEncoding{u"Transfer-Encoding"};

/// @brief Field Upgrade offset 0xffffffff size 0x8
static constexpr ::ConstString  Upgrade{u"Upgrade"};

/// @brief Field UserAgent offset 0xffffffff size 0x8
static constexpr ::ConstString  UserAgent{u"User-Agent"};

/// @brief Field Vary offset 0xffffffff size 0x8
static constexpr ::ConstString  Vary{u"Vary"};

/// @brief Field Via offset 0xffffffff size 0x8
static constexpr ::ConstString  Via{u"Via"};

/// @brief Field WWWAuthenticate offset 0xffffffff size 0x8
static constexpr ::ConstString  WWWAuthenticate{u"WWW-Authenticate"};

/// @brief Field Warning offset 0xffffffff size 0x8
static constexpr ::ConstString  Warning{u"Warning"};

/// @brief Field XAspNetVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  XAspNetVersion{u"X-AspNet-Version"};

/// @brief Field XPoweredBy offset 0xffffffff size 0x8
static constexpr ::ConstString  XPoweredBy{u"X-Powered-By"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpKnownHeaderNames) == 0x10, "Size mismatch!");

} // namespace end def System::Net
