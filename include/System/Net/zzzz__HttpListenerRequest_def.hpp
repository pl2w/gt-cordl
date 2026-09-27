#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequest)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListenerRequest_Context;
}
namespace System::Net {
class HttpListenerRequest_GCCDelegate;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class TransportContext;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Security::Authentication::ExtendedProtection {
struct ChannelBindingKind;
}
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpListenerRequest;
}
namespace System::Net {
class HttpListenerRequest_Context;
}
namespace System::Net {
class HttpListenerRequest_GCCDelegate;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListenerRequest*);
MARK_REF_T(::System::Net::HttpListenerRequest_Context*);
MARK_REF_T(::System::Net::HttpListenerRequest_GCCDelegate*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerRequest*, "System.Net", "HttpListenerRequest");
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerRequest_Context*, "System.Net", "HttpListenerRequest/Context");
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerRequest_GCCDelegate*, "System.Net", "HttpListenerRequest/GCCDelegate");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerRequest
class CORDL_TYPE HttpListenerRequest : public ::System::Object {
public:
// Declarations
using Context = ::System::Net::HttpListenerRequest_Context;

using GCCDelegate = ::System::Net::HttpListenerRequest_GCCDelegate;

 __declspec(property(get=get_AcceptTypes)) ::ArrayW<::StringW>  AcceptTypes;

 __declspec(property(get=get_ClientCertificateError)) int32_t  ClientCertificateError;

 __declspec(property(get=get_ContentEncoding)) ::System::Text::Encoding*  ContentEncoding;

 __declspec(property(get=get_ContentLength64)) int64_t  ContentLength64;

 __declspec(property(get=get_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_Cookies)) ::System::Net::CookieCollection*  Cookies;

 __declspec(property(get=get_HasEntityBody)) bool  HasEntityBody;

 __declspec(property(get=get_Headers)) ::System::Collections::Specialized::NameValueCollection*  Headers;

 __declspec(property(get=get_HttpMethod)) ::StringW  HttpMethod;

 __declspec(property(get=get_InputStream)) ::System::IO::Stream*  InputStream;

/// @brief [MonoTODO("Always returns false")]
 __declspec(property(get=get_IsAuthenticated)) bool  IsAuthenticated;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsSecureConnection)) bool  IsSecureConnection;

/// @brief [MonoTODO]
 __declspec(property(get=get_IsWebSocketRequest)) bool  IsWebSocketRequest;

 __declspec(property(get=get_KeepAlive)) bool  KeepAlive;

 __declspec(property(get=get_LocalEndPoint)) ::System::Net::IPEndPoint*  LocalEndPoint;

 __declspec(property(get=get_ProtocolVersion)) ::System::Version*  ProtocolVersion;

 __declspec(property(get=get_QueryString)) ::System::Collections::Specialized::NameValueCollection*  QueryString;

 __declspec(property(get=get_RawUrl)) ::StringW  RawUrl;

 __declspec(property(get=get_RemoteEndPoint)) ::System::Net::IPEndPoint*  RemoteEndPoint;

/// @brief [MonoTODO("Always returns Guid.Empty")]
 __declspec(property(get=get_RequestTraceIdentifier)) ::System::Guid  RequestTraceIdentifier;

/// @brief [MonoTODO]
 __declspec(property(get=get_ServiceName)) ::StringW  ServiceName;

 __declspec(property(get=get_TransportContext)) ::System::Net::TransportContext*  TransportContext;

 __declspec(property(get=get_Url)) ::System::Uri*  Url;

 __declspec(property(get=get_UrlReferrer)) ::System::Uri*  UrlReferrer;

 __declspec(property(get=get_UserAgent)) ::StringW  UserAgent;

 __declspec(property(get=get_UserHostAddress)) ::StringW  UserHostAddress;

 __declspec(property(get=get_UserHostName)) ::StringW  UserHostName;

 __declspec(property(get=get_UserLanguages)) ::ArrayW<::StringW>  UserLanguages;

/// @brief Field _100continue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__100continue, put=setStaticF__100continue)) ::ArrayW<uint8_t>  _100continue;

/// @brief Field accept_types, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_accept_types, put=__cordl_internal_set_accept_types)) ::ArrayW<::StringW>  accept_types;

/// @brief Field cl_set, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_cl_set, put=__cordl_internal_set_cl_set)) bool  cl_set;

/// @brief Field content_encoding, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_content_encoding, put=__cordl_internal_set_content_encoding)) ::System::Text::Encoding*  content_encoding;

/// @brief Field content_length, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_content_length, put=__cordl_internal_set_content_length)) int64_t  content_length;

/// @brief Field context, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::System::Net::HttpListenerContext*  context;

/// @brief Field cookies, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookies, put=__cordl_internal_set_cookies)) ::System::Net::CookieCollection*  cookies;

/// @brief Field gcc_delegate, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_gcc_delegate, put=__cordl_internal_set_gcc_delegate)) ::System::Net::HttpListenerRequest_GCCDelegate*  gcc_delegate;

/// @brief Field headers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Net::WebHeaderCollection*  headers;

/// @brief Field input_stream, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_input_stream, put=__cordl_internal_set_input_stream)) ::System::IO::Stream*  input_stream;

/// @brief Field is_chunked, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_is_chunked, put=__cordl_internal_set_is_chunked)) bool  is_chunked;

/// @brief Field ka_set, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_ka_set, put=__cordl_internal_set_ka_set)) bool  ka_set;

/// @brief Field keep_alive, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_keep_alive, put=__cordl_internal_set_keep_alive)) bool  keep_alive;

/// @brief Field method, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::StringW  method;

/// @brief Field query_string, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_query_string, put=__cordl_internal_set_query_string)) ::System::Collections::Specialized::NameValueCollection*  query_string;

/// @brief Field raw_url, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_raw_url, put=__cordl_internal_set_raw_url)) ::StringW  raw_url;

/// @brief Field referrer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_referrer, put=__cordl_internal_set_referrer)) ::System::Uri*  referrer;

/// @brief Field separators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_separators, put=setStaticF_separators)) ::ArrayW<char16_t>  separators;

/// @brief Field url, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::System::Uri*  url;

/// @brief Field user_languages, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_user_languages, put=__cordl_internal_set_user_languages)) ::ArrayW<::StringW>  user_languages;

/// @brief Field version, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::System::Version*  version;

/// @brief Method AddHeader, addr 0xac9c740, size 0x924, virtual false, abstract: false, final false
inline void AddHeader(::StringW  header) ;

/// @brief Method BeginGetClientCertificate, addr 0xac9d86c, size 0xc0, virtual false, abstract: false, final false
inline ::System::IAsyncResult* BeginGetClientCertificate(::System::AsyncCallback*  requestCallback, ::System::Object*  state) ;

/// @brief Method CreateQueryString, addr 0xac9bb14, size 0x234, virtual false, abstract: false, final false
inline void CreateQueryString(::StringW  query) ;

/// @brief Method EndGetClientCertificate, addr 0xac9d9e4, size 0x88, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* EndGetClientCertificate(::System::IAsyncResult*  asyncResult) ;

/// @brief Method FinishInitialization, addr 0xac9bfec, size 0x62c, virtual false, abstract: false, final false
inline bool FinishInitialization() ;

/// @brief Method FlushInput, addr 0xac9d064, size 0x2d4, virtual false, abstract: false, final false
inline bool FlushInput() ;

/// @brief Method GetClientCertificate, addr 0xac9da78, size 0x24, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* GetClientCertificate() ;

/// @brief Method GetClientCertificateAsync, addr 0xac9db08, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetClientCertificateAsync() ;

/// @brief Method IsPredefinedScheme, addr 0xac9bdf0, size 0x1fc, virtual false, abstract: false, final false
static inline bool IsPredefinedScheme(::StringW  scheme) ;

/// @brief Method MaybeUri, addr 0xac9bd48, size 0xa8, virtual false, abstract: false, final false
static inline bool MaybeUri(::StringW  s) ;

static inline ::System::Net::HttpListenerRequest* New_ctor() ;

static inline ::System::Net::HttpListenerRequest* New_ctor(::System::Net::HttpListenerContext*  context) ;

/// @brief Method SetRequestLine, addr 0xac9b78c, size 0x388, virtual false, abstract: false, final false
inline void SetRequestLine(::StringW  req) ;

/// @brief Method Unquote, addr 0xac9c6d4, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW Unquote(::StringW  str) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_accept_types() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_accept_types() ;

constexpr bool const& __cordl_internal_get_cl_set() const;

constexpr bool& __cordl_internal_get_cl_set() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_content_encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_content_encoding() ;

constexpr int64_t const& __cordl_internal_get_content_length() const;

constexpr int64_t& __cordl_internal_get_content_length() ;

constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context() ;

constexpr ::System::Net::CookieCollection* const& __cordl_internal_get_cookies() const;

constexpr ::System::Net::CookieCollection*& __cordl_internal_get_cookies() ;

constexpr ::System::Net::HttpListenerRequest_GCCDelegate* const& __cordl_internal_get_gcc_delegate() const;

constexpr ::System::Net::HttpListenerRequest_GCCDelegate*& __cordl_internal_get_gcc_delegate() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_headers() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_headers() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_input_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_input_stream() ;

constexpr bool const& __cordl_internal_get_is_chunked() const;

constexpr bool& __cordl_internal_get_is_chunked() ;

constexpr bool const& __cordl_internal_get_ka_set() const;

constexpr bool& __cordl_internal_get_ka_set() ;

constexpr bool const& __cordl_internal_get_keep_alive() const;

constexpr bool& __cordl_internal_get_keep_alive() ;

constexpr ::StringW const& __cordl_internal_get_method() const;

constexpr ::StringW& __cordl_internal_get_method() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get_query_string() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get_query_string() ;

constexpr ::StringW const& __cordl_internal_get_raw_url() const;

constexpr ::StringW& __cordl_internal_get_raw_url() ;

constexpr ::System::Uri* const& __cordl_internal_get_referrer() const;

constexpr ::System::Uri*& __cordl_internal_get_referrer() ;

constexpr ::System::Uri* const& __cordl_internal_get_url() const;

constexpr ::System::Uri*& __cordl_internal_get_url() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_user_languages() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_user_languages() ;

constexpr ::System::Version* const& __cordl_internal_get_version() const;

constexpr ::System::Version*& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_accept_types(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_cl_set(bool  value) ;

constexpr void __cordl_internal_set_content_encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set_content_length(int64_t  value) ;

constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext*  value) ;

constexpr void __cordl_internal_set_cookies(::System::Net::CookieCollection*  value) ;

constexpr void __cordl_internal_set_gcc_delegate(::System::Net::HttpListenerRequest_GCCDelegate*  value) ;

constexpr void __cordl_internal_set_headers(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set_input_stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_is_chunked(bool  value) ;

constexpr void __cordl_internal_set_ka_set(bool  value) ;

constexpr void __cordl_internal_set_keep_alive(bool  value) ;

constexpr void __cordl_internal_set_method(::StringW  value) ;

constexpr void __cordl_internal_set_query_string(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set_raw_url(::StringW  value) ;

constexpr void __cordl_internal_set_referrer(::System::Uri*  value) ;

constexpr void __cordl_internal_set_url(::System::Uri*  value) ;

constexpr void __cordl_internal_set_user_languages(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_version(::System::Version*  value) ;

/// @brief Method .ctor, addr 0xac9dcf8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac9a8c8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::Net::HttpListenerContext*  context) ;

static inline ::ArrayW<uint8_t> getStaticF__100continue() ;

static inline ::ArrayW<char16_t> getStaticF_separators() ;

/// @brief Method get_AcceptTypes, addr 0xac9d418, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_AcceptTypes() ;

/// @brief Method get_ClientCertificateError, addr 0xac9d420, size 0x94, virtual false, abstract: false, final false
inline int32_t get_ClientCertificateError() ;

/// @brief Method get_ContentEncoding, addr 0xac9d4b4, size 0x30, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_ContentEncoding() ;

/// @brief Method get_ContentLength64, addr 0xac9d4e4, size 0x18, virtual false, abstract: false, final false
inline int64_t get_ContentLength64() ;

/// @brief Method get_ContentType, addr 0xac9d4fc, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_Cookies, addr 0xac9d550, size 0x70, virtual false, abstract: false, final false
inline ::System::Net::CookieCollection* get_Cookies() ;

/// @brief Method get_HasEntityBody, addr 0xac9d338, size 0x24, virtual false, abstract: false, final false
inline bool get_HasEntityBody() ;

/// @brief Method get_Headers, addr 0xac9d5c0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::NameValueCollection* get_Headers() ;

/// @brief Method get_HttpMethod, addr 0xac9d5c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HttpMethod() ;

/// @brief Method get_InputStream, addr 0xac9d35c, size 0xbc, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_InputStream() ;

/// @brief Method get_IsAuthenticated, addr 0xac9d5d0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAuthenticated() ;

/// @brief Method get_IsLocal, addr 0xac9d5d8, size 0x48, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// @brief Method get_IsSecureConnection, addr 0xac9c68c, size 0x24, virtual false, abstract: false, final false
inline bool get_IsSecureConnection() ;

/// @brief Method get_IsWebSocketRequest, addr 0xac9db00, size 0x8, virtual false, abstract: false, final false
inline bool get_IsWebSocketRequest() ;

/// @brief Method get_KeepAlive, addr 0xac9d644, size 0x15c, virtual false, abstract: false, final false
inline bool get_KeepAlive() ;

/// @brief Method get_LocalEndPoint, addr 0xac9c6b0, size 0x24, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_LocalEndPoint() ;

/// @brief Method get_ProtocolVersion, addr 0xac9d7a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Version* get_ProtocolVersion() ;

/// @brief Method get_QueryString, addr 0xac9d7a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::NameValueCollection* get_QueryString() ;

/// @brief Method get_RawUrl, addr 0xac9d7b0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RawUrl() ;

/// @brief Method get_RemoteEndPoint, addr 0xac9d620, size 0x24, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_RemoteEndPoint() ;

/// @brief Method get_RequestTraceIdentifier, addr 0xac9d7b8, size 0x48, virtual false, abstract: false, final false
inline ::System::Guid get_RequestTraceIdentifier() ;

/// @brief Method get_ServiceName, addr 0xac9da9c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ServiceName() ;

/// @brief Method get_TransportContext, addr 0xac9daa4, size 0x54, virtual false, abstract: false, final false
inline ::System::Net::TransportContext* get_TransportContext() ;

/// @brief Method get_Url, addr 0xac9d800, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_Url() ;

/// @brief Method get_UrlReferrer, addr 0xac9d808, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_UrlReferrer() ;

/// @brief Method get_UserAgent, addr 0xac9d810, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_UserAgent() ;

/// @brief Method get_UserHostAddress, addr 0xac9c66c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_UserHostAddress() ;

/// @brief Method get_UserHostName, addr 0xac9c618, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_UserHostName() ;

/// @brief Method get_UserLanguages, addr 0xac9d864, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_UserLanguages() ;

static inline void setStaticF__100continue(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_separators(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerRequest(HttpListenerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerRequest(HttpListenerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10686};

/// @brief Field accept_types, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___accept_types;

/// @brief Field content_encoding, offset: 0x18, size: 0x8, def value: None
 ::System::Text::Encoding*  ___content_encoding;

/// @brief Field content_length, offset: 0x20, size: 0x8, def value: None
 int64_t  ___content_length;

/// @brief Field cl_set, offset: 0x28, size: 0x1, def value: None
 bool  ___cl_set;

/// @brief Field cookies, offset: 0x30, size: 0x8, def value: None
 ::System::Net::CookieCollection*  ___cookies;

/// @brief Field headers, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ___headers;

/// @brief Field method, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___method;

/// @brief Field input_stream, offset: 0x48, size: 0x8, def value: None
 ::System::IO::Stream*  ___input_stream;

/// @brief Field version, offset: 0x50, size: 0x8, def value: None
 ::System::Version*  ___version;

/// @brief Field query_string, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ___query_string;

/// @brief Field raw_url, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___raw_url;

/// @brief Field url, offset: 0x68, size: 0x8, def value: None
 ::System::Uri*  ___url;

/// @brief Field referrer, offset: 0x70, size: 0x8, def value: None
 ::System::Uri*  ___referrer;

/// @brief Field user_languages, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___user_languages;

/// @brief Field context, offset: 0x80, size: 0x8, def value: None
 ::System::Net::HttpListenerContext*  ___context;

/// @brief Field is_chunked, offset: 0x88, size: 0x1, def value: None
 bool  ___is_chunked;

/// @brief Field ka_set, offset: 0x89, size: 0x1, def value: None
 bool  ___ka_set;

/// @brief Field keep_alive, offset: 0x8a, size: 0x1, def value: None
 bool  ___keep_alive;

/// @brief Field gcc_delegate, offset: 0x90, size: 0x8, def value: None
 ::System::Net::HttpListenerRequest_GCCDelegate*  ___gcc_delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerRequest, ___accept_types) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___content_encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___content_length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___cl_set) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___cookies) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___method) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___input_stream) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___version) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___query_string) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___raw_url) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___url) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___referrer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___user_languages) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___context) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___is_chunked) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___ka_set) == 0x89, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___keep_alive) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequest, ___gcc_delegate) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpListenerRequest) == 0x98, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerRequest/GCCDelegate
class CORDL_TYPE HttpListenerRequest_GCCDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac9d9c8, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac9da6c, size 0xc, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac9dd68, size 0x14, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Invoke() ;

static inline ::System::Net::HttpListenerRequest_GCCDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac9d92c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequest_GCCDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest_GCCDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerRequest_GCCDelegate(HttpListenerRequest_GCCDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest_GCCDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerRequest_GCCDelegate(HttpListenerRequest_GCCDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpListenerRequest_GCCDelegate) == 0x80, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.TransportContext
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerRequest/Context
class CORDL_TYPE HttpListenerRequest_Context : public ::System::Net::TransportContext {
public:
// Declarations
/// @brief Method GetChannelBinding, addr 0xac9dd30, size 0x38, virtual true, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind) ;

static inline ::System::Net::HttpListenerRequest_Context* New_ctor() ;

/// @brief Method .ctor, addr 0xac9daf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerRequest_Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest_Context", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerRequest_Context(HttpListenerRequest_Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest_Context", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerRequest_Context(HttpListenerRequest_Context const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpListenerRequest_Context) == 0x10, "Size mismatch!");

} // namespace end def System::Net
