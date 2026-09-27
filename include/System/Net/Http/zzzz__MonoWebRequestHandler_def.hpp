#pragma once
// IWYU pragma private; include "System/Net/Http/MonoWebRequestHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoWebRequestHandler)
namespace GlobalNamespace {
struct MonoWebRequestHandler__SendAsync_d__99;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Net::Http {
class MonoWebRequestHandler___c;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http {
class MonoWebRequestHandler;
}
namespace System::Net::Http {
class MonoWebRequestHandler___c;
}
// Write type traits
MARK_REF_T(::System::Net::Http::MonoWebRequestHandler*);
MARK_REF_T(::System::Net::Http::MonoWebRequestHandler___c*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::MonoWebRequestHandler*, "System.Net.Http", "MonoWebRequestHandler");
DEFINE_IL2CPP_CLASS(::System::Net::Http::MonoWebRequestHandler___c*, "System.Net.Http", "MonoWebRequestHandler/<>c");
// Dependencies System.Net.DecompressionMethods, System.Net.Security.AuthenticationLevel, System.Nullable`1<T>, System.Object, System.Security.Principal.TokenImpersonationLevel, System.TimeSpan
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MonoWebRequestHandler
class CORDL_TYPE MonoWebRequestHandler : public ::System::Object {
public:
// Declarations
using _SendAsync_d__99 = ::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99;

using __c = ::System::Net::Http::MonoWebRequestHandler___c;

 __declspec(property(get=get_CookieContainer)) ::System::Net::CookieContainer*  CookieContainer;

 __declspec(property(get=get_MaxRequestContentBufferSize)) int64_t  MaxRequestContentBufferSize;

 __declspec(property(get=get_SslOptions, put=set_SslOptions)) ::System::Net::Security::SslClientAuthenticationOptions*  SslOptions;

/// @brief Field allowAutoRedirect, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowAutoRedirect, put=__cordl_internal_set_allowAutoRedirect)) bool  allowAutoRedirect;

/// @brief Field allowPipelining, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowPipelining, put=__cordl_internal_set_allowPipelining)) bool  allowPipelining;

/// @brief Field authenticationLevel, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_authenticationLevel, put=__cordl_internal_set_authenticationLevel)) ::System::Net::Security::AuthenticationLevel  authenticationLevel;

/// @brief Field automaticDecompression, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_automaticDecompression, put=__cordl_internal_set_automaticDecompression)) ::System::Net::DecompressionMethods  automaticDecompression;

/// @brief Field cachePolicy, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachePolicy, put=__cordl_internal_set_cachePolicy)) ::System::Net::Cache::RequestCachePolicy*  cachePolicy;

/// @brief Field connectionGroupName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionGroupName, put=__cordl_internal_set_connectionGroupName)) ::StringW  connectionGroupName;

/// @brief Field continueTimeout, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueTimeout, put=__cordl_internal_set_continueTimeout)) ::System::TimeSpan  continueTimeout;

/// @brief Field cookieContainer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookieContainer, put=__cordl_internal_set_cookieContainer)) ::System::Net::CookieContainer*  cookieContainer;

/// @brief Field credentials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_credentials, put=__cordl_internal_set_credentials)) ::System::Net::ICredentials*  credentials;

/// @brief Field disposed, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field groupCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_groupCounter, put=setStaticF_groupCounter)) int64_t  groupCounter;

/// @brief Field impersonationLevel, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_impersonationLevel, put=__cordl_internal_set_impersonationLevel)) ::System::Security::Principal::TokenImpersonationLevel  impersonationLevel;

/// @brief Field maxAutomaticRedirections, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAutomaticRedirections, put=__cordl_internal_set_maxAutomaticRedirections)) int32_t  maxAutomaticRedirections;

/// @brief Field maxRequestContentBufferSize, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxRequestContentBufferSize, put=__cordl_internal_set_maxRequestContentBufferSize)) int64_t  maxRequestContentBufferSize;

/// @brief Field maxResponseHeadersLength, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxResponseHeadersLength, put=__cordl_internal_set_maxResponseHeadersLength)) int32_t  maxResponseHeadersLength;

/// @brief Field preAuthenticate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_preAuthenticate, put=__cordl_internal_set_preAuthenticate)) bool  preAuthenticate;

/// @brief Field proxy, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::System::Net::IWebProxy*  proxy;

/// @brief Field readWriteTimeout, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_readWriteTimeout, put=__cordl_internal_set_readWriteTimeout)) int32_t  readWriteTimeout;

/// @brief Field sentRequest, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_sentRequest, put=__cordl_internal_set_sentRequest)) bool  sentRequest;

/// @brief Field serverCertificateValidationCallback, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverCertificateValidationCallback, put=__cordl_internal_set_serverCertificateValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  serverCertificateValidationCallback;

/// @brief Field sslOptions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslOptions, put=__cordl_internal_set_sslOptions)) ::System::Net::Security::SslClientAuthenticationOptions*  sslOptions;

/// @brief Field timeout, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) ::System::Nullable_1<::System::TimeSpan>  timeout;

/// @brief Field unsafeAuthenticatedConnectionSharing, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_unsafeAuthenticatedConnectionSharing, put=__cordl_internal_set_unsafeAuthenticatedConnectionSharing)) bool  unsafeAuthenticatedConnectionSharing;

/// @brief Field useCookies, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCookies, put=__cordl_internal_set_useCookies)) bool  useCookies;

/// @brief Field useProxy, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProxy, put=__cordl_internal_set_useProxy)) bool  useProxy;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Net::Http::IMonoHttpClientHandler"
constexpr operator  ::System::Net::Http::IMonoHttpClientHandler*() noexcept;

/// @brief Method CreateResponseMessage, addr 0xa9dbc74, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Net::Http::HttpResponseMessage* CreateResponseMessage(::System::Net::HttpWebResponse*  wr, ::System::Net::Http::HttpRequestMessage*  requestMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CreateWebRequest, addr 0xa9daee8, size 0x894, virtual true, abstract: false, final false
inline ::System::Net::HttpWebRequest* CreateWebRequest(::System::Net::Http::HttpRequestMessage*  request) ;

/// @brief Method Dispose, addr 0xa9dacd8, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa9dace8, size 0x84, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnsureModifiability, addr 0xa9dab6c, size 0x58, virtual false, abstract: false, final false
inline void EnsureModifiability() ;

/// @brief Method GetConnectionKeepAlive, addr 0xa9dad6c, size 0x114, virtual false, abstract: false, final false
inline bool GetConnectionKeepAlive(::System::Net::Http::Headers::HttpRequestHeaders*  headers) ;

/// @brief Method MethodHasBody, addr 0xa9dc1dc, size 0x10c, virtual false, abstract: false, final false
static inline bool MethodHasBody(::System::Net::Http::HttpMethod*  method) ;

static inline ::System::Net::Http::MonoWebRequestHandler* New_ctor() ;

/// [AsyncStateMachine(typeof(System.Net.Http.MonoWebRequestHandler::<SendAsync>d__99))]
/// @brief Method SendAsync, addr 0xa9dc2e8, size 0x144, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout, addr 0xa9dc42c, size 0x70, virtual true, abstract: false, final true
inline void System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout(::System::TimeSpan  timeout) ;

/// [CompilerGenerated]
/// @brief Method <CreateWebRequest>b__96_0, addr 0xa9dc49c, size 0x64, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* _CreateWebRequest_b__96_0(::StringW  t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  lc, ::System::Security::Cryptography::X509Certificates::X509Certificate*  rc, ::ArrayW<::StringW>  ai) ;

constexpr bool const& __cordl_internal_get_allowAutoRedirect() const;

constexpr bool& __cordl_internal_get_allowAutoRedirect() ;

constexpr bool const& __cordl_internal_get_allowPipelining() const;

constexpr bool& __cordl_internal_get_allowPipelining() ;

constexpr ::System::Net::Security::AuthenticationLevel const& __cordl_internal_get_authenticationLevel() const;

constexpr ::System::Net::Security::AuthenticationLevel& __cordl_internal_get_authenticationLevel() ;

constexpr ::System::Net::DecompressionMethods const& __cordl_internal_get_automaticDecompression() const;

constexpr ::System::Net::DecompressionMethods& __cordl_internal_get_automaticDecompression() ;

constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get_cachePolicy() const;

constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get_cachePolicy() ;

constexpr ::StringW const& __cordl_internal_get_connectionGroupName() const;

constexpr ::StringW& __cordl_internal_get_connectionGroupName() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_continueTimeout() const;

constexpr ::System::TimeSpan& __cordl_internal_get_continueTimeout() ;

constexpr ::System::Net::CookieContainer* const& __cordl_internal_get_cookieContainer() const;

constexpr ::System::Net::CookieContainer*& __cordl_internal_get_cookieContainer() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get_credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get_credentials() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Security::Principal::TokenImpersonationLevel const& __cordl_internal_get_impersonationLevel() const;

constexpr ::System::Security::Principal::TokenImpersonationLevel& __cordl_internal_get_impersonationLevel() ;

constexpr int32_t const& __cordl_internal_get_maxAutomaticRedirections() const;

constexpr int32_t& __cordl_internal_get_maxAutomaticRedirections() ;

constexpr int64_t const& __cordl_internal_get_maxRequestContentBufferSize() const;

constexpr int64_t& __cordl_internal_get_maxRequestContentBufferSize() ;

constexpr int32_t const& __cordl_internal_get_maxResponseHeadersLength() const;

constexpr int32_t& __cordl_internal_get_maxResponseHeadersLength() ;

constexpr bool const& __cordl_internal_get_preAuthenticate() const;

constexpr bool& __cordl_internal_get_preAuthenticate() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get_proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy() ;

constexpr int32_t const& __cordl_internal_get_readWriteTimeout() const;

constexpr int32_t& __cordl_internal_get_readWriteTimeout() ;

constexpr bool const& __cordl_internal_get_sentRequest() const;

constexpr bool& __cordl_internal_get_sentRequest() ;

constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& __cordl_internal_get_serverCertificateValidationCallback() const;

constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get_serverCertificateValidationCallback() ;

constexpr ::System::Net::Security::SslClientAuthenticationOptions* const& __cordl_internal_get_sslOptions() const;

constexpr ::System::Net::Security::SslClientAuthenticationOptions*& __cordl_internal_get_sslOptions() ;

constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get_timeout() const;

constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get_timeout() ;

constexpr bool const& __cordl_internal_get_unsafeAuthenticatedConnectionSharing() const;

constexpr bool& __cordl_internal_get_unsafeAuthenticatedConnectionSharing() ;

constexpr bool const& __cordl_internal_get_useCookies() const;

constexpr bool& __cordl_internal_get_useCookies() ;

constexpr bool const& __cordl_internal_get_useProxy() const;

constexpr bool& __cordl_internal_get_useProxy() ;

constexpr void __cordl_internal_set_allowAutoRedirect(bool  value) ;

constexpr void __cordl_internal_set_allowPipelining(bool  value) ;

constexpr void __cordl_internal_set_authenticationLevel(::System::Net::Security::AuthenticationLevel  value) ;

constexpr void __cordl_internal_set_automaticDecompression(::System::Net::DecompressionMethods  value) ;

constexpr void __cordl_internal_set_cachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr void __cordl_internal_set_connectionGroupName(::StringW  value) ;

constexpr void __cordl_internal_set_continueTimeout(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_cookieContainer(::System::Net::CookieContainer*  value) ;

constexpr void __cordl_internal_set_credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_impersonationLevel(::System::Security::Principal::TokenImpersonationLevel  value) ;

constexpr void __cordl_internal_set_maxAutomaticRedirections(int32_t  value) ;

constexpr void __cordl_internal_set_maxRequestContentBufferSize(int64_t  value) ;

constexpr void __cordl_internal_set_maxResponseHeadersLength(int32_t  value) ;

constexpr void __cordl_internal_set_preAuthenticate(bool  value) ;

constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set_readWriteTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_sentRequest(bool  value) ;

constexpr void __cordl_internal_set_serverCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

constexpr void __cordl_internal_set_sslOptions(::System::Net::Security::SslClientAuthenticationOptions*  value) ;

constexpr void __cordl_internal_set_timeout(::System::Nullable_1<::System::TimeSpan>  value) ;

constexpr void __cordl_internal_set_unsafeAuthenticatedConnectionSharing(bool  value) ;

constexpr void __cordl_internal_set_useCookies(bool  value) ;

constexpr void __cordl_internal_set_useProxy(bool  value) ;

/// @brief Method .ctor, addr 0xa9da104, size 0x1d8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int64_t getStaticF_groupCounter() ;

/// @brief Method get_CookieContainer, addr 0xa9dabc4, size 0x70, virtual true, abstract: false, final true
inline ::System::Net::CookieContainer* get_CookieContainer() ;

/// @brief Method get_MaxRequestContentBufferSize, addr 0xa9dac34, size 0x8, virtual true, abstract: false, final true
inline int64_t get_MaxRequestContentBufferSize() ;

/// @brief Method get_SslOptions, addr 0xa9dac3c, size 0x70, virtual true, abstract: false, final true
inline ::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Net::Http::IMonoHttpClientHandler"
constexpr ::System::Net::Http::IMonoHttpClientHandler* i___System__Net__Http__IMonoHttpClientHandler() noexcept;

static inline void setStaticF_groupCounter(int64_t  value) ;

/// @brief Method set_SslOptions, addr 0xa9dacac, size 0x2c, virtual true, abstract: false, final true
inline void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoWebRequestHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoWebRequestHandler(MonoWebRequestHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoWebRequestHandler(MonoWebRequestHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30709};

/// @brief Field allowAutoRedirect, offset: 0x10, size: 0x1, def value: None
 bool  ___allowAutoRedirect;

/// @brief Field automaticDecompression, offset: 0x14, size: 0x4, def value: None
 ::System::Net::DecompressionMethods  ___automaticDecompression;

/// @brief Field cookieContainer, offset: 0x18, size: 0x8, def value: None
 ::System::Net::CookieContainer*  ___cookieContainer;

/// @brief Field credentials, offset: 0x20, size: 0x8, def value: None
 ::System::Net::ICredentials*  ___credentials;

/// @brief Field maxAutomaticRedirections, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxAutomaticRedirections;

/// @brief Field maxRequestContentBufferSize, offset: 0x30, size: 0x8, def value: None
 int64_t  ___maxRequestContentBufferSize;

/// @brief Field preAuthenticate, offset: 0x38, size: 0x1, def value: None
 bool  ___preAuthenticate;

/// @brief Field proxy, offset: 0x40, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ___proxy;

/// @brief Field useCookies, offset: 0x48, size: 0x1, def value: None
 bool  ___useCookies;

/// @brief Field useProxy, offset: 0x49, size: 0x1, def value: None
 bool  ___useProxy;

/// @brief Field sslOptions, offset: 0x50, size: 0x8, def value: None
 ::System::Net::Security::SslClientAuthenticationOptions*  ___sslOptions;

/// @brief Field allowPipelining, offset: 0x58, size: 0x1, def value: None
 bool  ___allowPipelining;

/// @brief Field cachePolicy, offset: 0x60, size: 0x8, def value: None
 ::System::Net::Cache::RequestCachePolicy*  ___cachePolicy;

/// @brief Field authenticationLevel, offset: 0x68, size: 0x4, def value: None
 ::System::Net::Security::AuthenticationLevel  ___authenticationLevel;

/// @brief Field continueTimeout, offset: 0x70, size: 0x8, def value: None
 ::System::TimeSpan  ___continueTimeout;

/// @brief Field impersonationLevel, offset: 0x78, size: 0x4, def value: None
 ::System::Security::Principal::TokenImpersonationLevel  ___impersonationLevel;

/// @brief Field maxResponseHeadersLength, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___maxResponseHeadersLength;

/// @brief Field readWriteTimeout, offset: 0x80, size: 0x4, def value: None
 int32_t  ___readWriteTimeout;

/// @brief Field serverCertificateValidationCallback, offset: 0x88, size: 0x8, def value: None
 ::System::Net::Security::RemoteCertificateValidationCallback*  ___serverCertificateValidationCallback;

/// @brief Field unsafeAuthenticatedConnectionSharing, offset: 0x90, size: 0x1, def value: None
 bool  ___unsafeAuthenticatedConnectionSharing;

/// @brief Field sentRequest, offset: 0x91, size: 0x1, def value: None
 bool  ___sentRequest;

/// @brief Field connectionGroupName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___connectionGroupName;

/// @brief Field timeout, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<::System::TimeSpan>  ___timeout;

/// @brief Field disposed, offset: 0xb0, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___allowAutoRedirect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___automaticDecompression) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___cookieContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___credentials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxAutomaticRedirections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxRequestContentBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___preAuthenticate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___proxy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___useCookies) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___useProxy) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___sslOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___allowPipelining) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___cachePolicy) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___authenticationLevel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___continueTimeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___impersonationLevel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___maxResponseHeadersLength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___readWriteTimeout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___serverCertificateValidationCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___unsafeAuthenticatedConnectionSharing) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___sentRequest) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___connectionGroupName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___timeout) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MonoWebRequestHandler, ___disposed) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::MonoWebRequestHandler) == 0xb8, "Size mismatch!");

} // namespace end def System::Net::Http
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MonoWebRequestHandler/<>c
class CORDL_TYPE MonoWebRequestHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::Http::MonoWebRequestHandler___c*  __9;

/// @brief Field <>9__95_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__95_0, put=setStaticF___9__95_0)) ::System::Func_2<::StringW,bool>*  __9__95_0;

/// @brief Field <>9__96_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__96_1, put=setStaticF___9__96_1)) ::System::Func_2<::StringW,bool>*  __9__96_1;

/// @brief Field <>9__99_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__99_0, put=setStaticF___9__99_0)) ::System::Action_1<::System::Object*>*  __9__99_0;

static inline ::System::Net::Http::MonoWebRequestHandler___c* New_ctor() ;

/// @brief Method <CreateWebRequest>b__96_1, addr 0xa9dc5c0, size 0x4c, virtual false, abstract: false, final false
inline bool _CreateWebRequest_b__96_1(::StringW  l) ;

/// @brief Method <GetConnectionKeepAlive>b__95_0, addr 0xa9dc570, size 0x50, virtual false, abstract: false, final false
inline bool _GetConnectionKeepAlive_b__95_0(::StringW  l) ;

/// @brief Method <SendAsync>b__99_0, addr 0xa9dc60c, size 0x88, virtual false, abstract: false, final false
inline void _SendAsync_b__99_0(::System::Object*  l) ;

/// @brief Method .ctor, addr 0xa9dc568, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::Http::MonoWebRequestHandler___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__95_0() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__96_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__99_0() ;

static inline void setStaticF___9(::System::Net::Http::MonoWebRequestHandler___c*  value) ;

static inline void setStaticF___9__95_0(::System::Func_2<::StringW,bool>*  value) ;

static inline void setStaticF___9__96_1(::System::Func_2<::StringW,bool>*  value) ;

static inline void setStaticF___9__99_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoWebRequestHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoWebRequestHandler___c(MonoWebRequestHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoWebRequestHandler___c(MonoWebRequestHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Http::MonoWebRequestHandler___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Http
