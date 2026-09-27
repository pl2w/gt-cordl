#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_AuthorizationState_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest)
namespace GlobalNamespace {
struct HttpWebRequest_AuthorizationState;
}
namespace GlobalNamespace {
struct HttpWebRequest_NtlmAuthState;
}
namespace GlobalNamespace {
struct HttpWebRequest__GetResponseFromData_d__244;
}
namespace GlobalNamespace {
struct HttpWebRequest__MyGetResponseAsync_d__243;
}
namespace GlobalNamespace {
template<typename T>
struct HttpWebRequest__RunWithTimeoutWorker_d__241_1;
}
namespace GlobalNamespace {
struct HttpWebRequest___GetRewriteHandler_b__271_0_d;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net {
class HttpContinueDelegate;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
template<typename T>
class HttpWebRequest___c__241_1;
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
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class TransportContext;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
template<typename T>
class HttpWebRequest___c__241_1;
}
// Write type traits
MARK_REF_T(::System::Net::HttpWebRequest*);
MARK_GEN_REF_T_PTR(::System::Net::HttpWebRequest___c__241_1);
DEFINE_IL2CPP_CLASS(::System::Net::HttpWebRequest*, "System.Net", "HttpWebRequest");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Net::HttpWebRequest___c__241_1, "System.Net", "HttpWebRequest/<>c__241`1");
// Dependencies System.Net.DecompressionMethods, System.Net.HttpWebRequest::AuthorizationState, System.Net.WebRequest
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpWebRequest
class CORDL_TYPE HttpWebRequest : public ::System::Net::WebRequest {
public:
// Declarations
using AuthorizationState = ::GlobalNamespace::HttpWebRequest_AuthorizationState;

using NtlmAuthState = ::GlobalNamespace::HttpWebRequest_NtlmAuthState;

using _GetResponseFromData_d__244 = ::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244;

using _MyGetResponseAsync_d__243 = ::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243;

template<typename T>
using _RunWithTimeoutWorker_d__241_1 = ::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>;

using __GetRewriteHandler_b__271_0_d = ::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d;

template<typename T>
using __c__241_1 = ::System::Net::HttpWebRequest___c__241_1<T>;

 __declspec(property(get=get_Aborted)) bool  Aborted;

 __declspec(property(get=get_Accept, put=set_Accept)) ::StringW  Accept;

 __declspec(property(get=get_Address, put=set_Address)) ::System::Uri*  Address;

 __declspec(property(get=get_AllowAutoRedirect, put=set_AllowAutoRedirect)) bool  AllowAutoRedirect;

 __declspec(property(get=get_AllowReadStreamBuffering, put=set_AllowReadStreamBuffering)) bool  AllowReadStreamBuffering;

 __declspec(property(get=get_AllowWriteStreamBuffering, put=set_AllowWriteStreamBuffering)) bool  AllowWriteStreamBuffering;

 __declspec(property(get=get_AuthUri)) ::System::Uri*  AuthUri;

 __declspec(property(get=get_AutomaticDecompression, put=set_AutomaticDecompression)) ::System::Net::DecompressionMethods  AutomaticDecompression;

 __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(get=get_Connection, put=set_Connection)) ::StringW  Connection;

 __declspec(property(get=get_ConnectionGroupName, put=set_ConnectionGroupName)) ::StringW  ConnectionGroupName;

 __declspec(property(get=get_ContentLength, put=set_ContentLength)) int64_t  ContentLength;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_ContinueDelegate, put=set_ContinueDelegate)) ::System::Net::HttpContinueDelegate*  ContinueDelegate;

/// @brief [MonoTODO]
 __declspec(property(get=get_ContinueTimeout, put=set_ContinueTimeout)) int32_t  ContinueTimeout;

 __declspec(property(get=get_CookieContainer, put=set_CookieContainer)) ::System::Net::CookieContainer*  CookieContainer;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_Date, put=set_Date)) ::System::DateTime  Date;

 __declspec(property(get=get_Expect, put=set_Expect)) ::StringW  Expect;

 __declspec(property(get=get_ExpectContinue, put=set_ExpectContinue)) bool  ExpectContinue;

 __declspec(property(get=get_FinishedReading, put=set_FinishedReading)) bool  FinishedReading;

 __declspec(property(get=get_GotRequestStream)) bool  GotRequestStream;

 __declspec(property(get=get_HaveResponse)) bool  HaveResponse;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_Host, put=set_Host)) ::StringW  Host;

 __declspec(property(get=get_IfModifiedSince, put=set_IfModifiedSince)) ::System::DateTime  IfModifiedSince;

 __declspec(property(get=get_InternalAllowBuffering)) bool  InternalAllowBuffering;

 __declspec(property(put=set_InternalContentLength)) int64_t  InternalContentLength;

 __declspec(property(get=get_KeepAlive, put=set_KeepAlive)) bool  KeepAlive;

 __declspec(property(get=get_MaximumAutomaticRedirections, put=set_MaximumAutomaticRedirections)) int32_t  MaximumAutomaticRedirections;

/// @brief [MonoTODO("Use this")]
 __declspec(property(get=get_MaximumResponseHeadersLength, put=set_MaximumResponseHeadersLength)) int32_t  MaximumResponseHeadersLength;

 __declspec(property(get=get_MediaType, put=set_MediaType)) ::StringW  MediaType;

 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_MethodWithBuffer)) bool  MethodWithBuffer;

 __declspec(property(get=get_Pipelined, put=set_Pipelined)) bool  Pipelined;

 __declspec(property(get=get_PreAuthenticate, put=set_PreAuthenticate)) bool  PreAuthenticate;

 __declspec(property(get=get_ProtocolVersion, put=set_ProtocolVersion)) ::System::Version*  ProtocolVersion;

 __declspec(property(get=get_Proxy, put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_ProxyQuery)) bool  ProxyQuery;

 __declspec(property(get=get_ReadWriteTimeout, put=set_ReadWriteTimeout)) int32_t  ReadWriteTimeout;

 __declspec(property(get=get_Referer, put=set_Referer)) ::StringW  Referer;

 __declspec(property(get=get_RequestUri)) ::System::Uri*  RequestUri;

/// @brief Field ResendContentFactory, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResendContentFactory, put=__cordl_internal_set_ResendContentFactory)) ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*  ResendContentFactory;

 __declspec(property(get=get_ReuseConnection, put=set_ReuseConnection)) bool  ReuseConnection;

 __declspec(property(get=get_SendChunked, put=set_SendChunked)) bool  SendChunked;

 __declspec(property(get=get_ServerCertValidationCallback)) ::System::Net::ServerCertValidationCallback*  ServerCertValidationCallback;

 __declspec(property(get=get_ServerCertificateValidationCallback, put=set_ServerCertificateValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  ServerCertificateValidationCallback;

 __declspec(property(get=get_ServicePoint)) ::System::Net::ServicePoint*  ServicePoint;

 __declspec(property(get=get_ServicePointNoLock)) ::System::Net::ServicePoint*  ServicePointNoLock;

 __declspec(property(get=get_SupportsCookieContainer)) bool  SupportsCookieContainer;

 __declspec(property(get=get_ThrowOnError, put=set_ThrowOnError)) bool  ThrowOnError;

 __declspec(property(get=get_Timeout, put=set_Timeout)) int32_t  Timeout;

 __declspec(property(get=get_TlsProvider)) ::Mono::Net::Security::MobileTlsProvider*  TlsProvider;

 __declspec(property(get=get_TlsSettings)) ::Mono::Security::Interface::MonoTlsSettings*  TlsSettings;

 __declspec(property(get=get_TransferEncoding, put=set_TransferEncoding)) ::StringW  TransferEncoding;

 __declspec(property(get=get_UnsafeAuthenticatedConnectionSharing, put=set_UnsafeAuthenticatedConnectionSharing)) bool  UnsafeAuthenticatedConnectionSharing;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

 __declspec(property(get=get_UserAgent, put=set_UserAgent)) ::StringW  UserAgent;

/// @brief Field <ReuseConnection>k__BackingField, offset 0x196, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReuseConnection_k__BackingField, put=__cordl_internal_set__ReuseConnection_k__BackingField)) bool  _ReuseConnection_k__BackingField;

/// @brief Field <ThrowOnError>k__BackingField, offset 0x194, size 0x1 
 __declspec(property(get=__cordl_internal_get__ThrowOnError_k__BackingField, put=__cordl_internal_set__ThrowOnError_k__BackingField)) bool  _ThrowOnError_k__BackingField;

/// @brief Field ID, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) int32_t  _cordl_ID;

/// @brief Field aborted, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_aborted, put=__cordl_internal_set_aborted)) int32_t  aborted;

/// @brief Field actualUri, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_actualUri, put=__cordl_internal_set_actualUri)) ::System::Uri*  actualUri;

/// @brief Field actualVersion, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_actualVersion, put=__cordl_internal_set_actualVersion)) ::System::Version*  actualVersion;

/// @brief Field allowAutoRedirect, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowAutoRedirect, put=__cordl_internal_set_allowAutoRedirect)) bool  allowAutoRedirect;

/// @brief Field allowBuffering, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowBuffering, put=__cordl_internal_set_allowBuffering)) bool  allowBuffering;

/// @brief Field allowReadStreamBuffering, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowReadStreamBuffering, put=__cordl_internal_set_allowReadStreamBuffering)) bool  allowReadStreamBuffering;

/// @brief Field auth_state, offset 0x168, size 0x10 
 __declspec(property(get=__cordl_internal_get_auth_state, put=__cordl_internal_set_auth_state)) ::GlobalNamespace::HttpWebRequest_AuthorizationState  auth_state;

/// @brief Field auto_decomp, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_auto_decomp, put=__cordl_internal_set_auto_decomp)) ::System::Net::DecompressionMethods  auto_decomp;

/// @brief Field certValidationCallback, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_certValidationCallback, put=__cordl_internal_set_certValidationCallback)) ::System::Net::ServerCertValidationCallback*  certValidationCallback;

/// @brief Field certificates, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificates, put=__cordl_internal_set_certificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates;

/// @brief Field connectionGroup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionGroup, put=__cordl_internal_set_connectionGroup)) ::StringW  connectionGroup;

/// @brief Field contentLength, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentLength, put=__cordl_internal_set_contentLength)) int64_t  contentLength;

/// @brief Field continueDelegate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueDelegate, put=__cordl_internal_set_continueDelegate)) ::System::Net::HttpContinueDelegate*  continueDelegate;

/// @brief Field continueTimeout, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_continueTimeout, put=__cordl_internal_set_continueTimeout)) int32_t  continueTimeout;

/// @brief Field cookieContainer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookieContainer, put=__cordl_internal_set_cookieContainer)) ::System::Net::CookieContainer*  cookieContainer;

/// @brief Field credentials, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_credentials, put=__cordl_internal_set_credentials)) ::System::Net::ICredentials*  credentials;

/// @brief Field currentOperation, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOperation, put=__cordl_internal_set_currentOperation)) ::System::Net::WebOperation*  currentOperation;

/// @brief Field defaultCachePolicy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultCachePolicy, put=setStaticF_defaultCachePolicy)) ::System::Net::Cache::RequestCachePolicy*  defaultCachePolicy;

/// @brief Field defaultMaxResponseHeadersLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultMaxResponseHeadersLength, put=setStaticF_defaultMaxResponseHeadersLength)) int32_t  defaultMaxResponseHeadersLength;

/// @brief Field defaultMaximumErrorResponseLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultMaximumErrorResponseLength, put=setStaticF_defaultMaximumErrorResponseLength)) int32_t  defaultMaximumErrorResponseLength;

/// @brief Field expectContinue, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_expectContinue, put=__cordl_internal_set_expectContinue)) bool  expectContinue;

/// @brief Field finished_reading, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_finished_reading, put=__cordl_internal_set_finished_reading)) bool  finished_reading;

/// @brief Field force_version, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_force_version, put=__cordl_internal_set_force_version)) bool  force_version;

/// @brief Field getResponseCalled, offset 0x125, size 0x1 
 __declspec(property(get=__cordl_internal_get_getResponseCalled, put=__cordl_internal_set_getResponseCalled)) bool  getResponseCalled;

/// @brief Field gotRequestStream, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_gotRequestStream, put=__cordl_internal_set_gotRequestStream)) bool  gotRequestStream;

/// @brief Field haveContentLength, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_haveContentLength, put=__cordl_internal_set_haveContentLength)) bool  haveContentLength;

/// @brief Field haveResponse, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_haveResponse, put=__cordl_internal_set_haveResponse)) bool  haveResponse;

/// @brief Field hostChanged, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_hostChanged, put=__cordl_internal_set_hostChanged)) bool  hostChanged;

/// @brief Field hostHasPort, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_hostHasPort, put=__cordl_internal_set_hostHasPort)) bool  hostHasPort;

/// @brief Field hostUri, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostUri, put=__cordl_internal_set_hostUri)) ::System::Uri*  hostUri;

/// @brief Field initialMethod, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialMethod, put=__cordl_internal_set_initialMethod)) ::StringW  initialMethod;

/// @brief Field keepAlive, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepAlive, put=__cordl_internal_set_keepAlive)) bool  keepAlive;

/// @brief Field locker, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_locker, put=__cordl_internal_set_locker)) ::System::Object*  locker;

/// @brief Field maxAutoRedirect, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAutoRedirect, put=__cordl_internal_set_maxAutoRedirect)) int32_t  maxAutoRedirect;

/// @brief Field maxResponseHeadersLength, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxResponseHeadersLength, put=__cordl_internal_set_maxResponseHeadersLength)) int32_t  maxResponseHeadersLength;

/// @brief Field mediaType, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mediaType, put=__cordl_internal_set_mediaType)) ::StringW  mediaType;

/// @brief Field method, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::StringW  method;

/// @brief Field pipelined, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_pipelined, put=__cordl_internal_set_pipelined)) bool  pipelined;

/// @brief Field preAuthenticate, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_preAuthenticate, put=__cordl_internal_set_preAuthenticate)) bool  preAuthenticate;

/// @brief Field proxy, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::System::Net::IWebProxy*  proxy;

/// @brief Field proxy_auth_state, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get_proxy_auth_state, put=__cordl_internal_set_proxy_auth_state)) ::GlobalNamespace::HttpWebRequest_AuthorizationState  proxy_auth_state;

/// @brief Field readWriteTimeout, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_readWriteTimeout, put=__cordl_internal_set_readWriteTimeout)) int32_t  readWriteTimeout;

/// @brief Field redirects, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_redirects, put=__cordl_internal_set_redirects)) int32_t  redirects;

/// @brief Field requestSent, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestSent, put=__cordl_internal_set_requestSent)) bool  requestSent;

/// @brief Field requestUri, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestUri, put=__cordl_internal_set_requestUri)) ::System::Uri*  requestUri;

/// @brief Field responseTask, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseTask, put=__cordl_internal_set_responseTask)) ::System::Net::WebCompletionSource*  responseTask;

/// @brief Field sendChunked, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendChunked, put=__cordl_internal_set_sendChunked)) bool  sendChunked;

/// @brief Field servicePoint, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_servicePoint, put=__cordl_internal_set_servicePoint)) ::System::Net::ServicePoint*  servicePoint;

/// @brief Field timeout, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) int32_t  timeout;

/// @brief Field tlsProvider, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_tlsProvider, put=__cordl_internal_set_tlsProvider)) ::Mono::Net::Security::MobileTlsProvider*  tlsProvider;

/// @brief Field tlsSettings, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_tlsSettings, put=__cordl_internal_set_tlsSettings)) ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings;

/// @brief Field unsafe_auth_blah, offset 0x195, size 0x1 
 __declspec(property(get=__cordl_internal_get_unsafe_auth_blah, put=__cordl_internal_set_unsafe_auth_blah)) bool  unsafe_auth_blah;

/// @brief Field usedPreAuth, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_usedPreAuth, put=__cordl_internal_set_usedPreAuth)) bool  usedPreAuth;

/// @brief Field version, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::System::Version*  version;

/// @brief Field webHeaders, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_webHeaders, put=__cordl_internal_set_webHeaders)) ::System::Net::WebHeaderCollection*  webHeaders;

/// @brief Field webResponse, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_webResponse, put=__cordl_internal_set_webResponse)) ::System::Net::HttpWebResponse*  webResponse;

/// @brief Field writeStream, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeStream, put=__cordl_internal_set_writeStream)) ::System::Net::WebRequestStream*  writeStream;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Abort, addr 0xaca482c, size 0x11c, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method AddRange, addr 0xaca30f4, size 0x60, virtual false, abstract: false, final false
inline void AddRange(int32_t  from, int32_t  to) ;

/// @brief Method AddRange, addr 0xaca3408, size 0x60, virtual false, abstract: false, final false
inline void AddRange(int64_t  from, int64_t  to) ;

/// @brief Method AddRange, addr 0xaca2e08, size 0x58, virtual false, abstract: false, final false
inline void AddRange(int32_t  range) ;

/// @brief Method AddRange, addr 0xaca33b0, size 0x58, virtual false, abstract: false, final false
inline void AddRange(int64_t  range) ;

/// @brief Method AddRange, addr 0xaca33a4, size 0xc, virtual false, abstract: false, final false
inline void AddRange(::StringW  rangeSpecifier, int32_t  from, int32_t  to) ;

/// @brief Method AddRange, addr 0xaca3154, size 0x248, virtual false, abstract: false, final false
inline void AddRange(::StringW  rangeSpecifier, int64_t  from, int64_t  to) ;

/// @brief Method AddRange, addr 0xaca339c, size 0x8, virtual false, abstract: false, final false
inline void AddRange(::StringW  rangeSpecifier, int32_t  range) ;

/// @brief Method AddRange, addr 0xaca2e60, size 0x294, virtual false, abstract: false, final false
inline void AddRange(::StringW  rangeSpecifier, int64_t  range) ;

/// @brief Method BeginGetRequestStream, addr 0xaca3af8, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginGetResponse, addr 0xaca4400, size 0x170, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CheckAuthorization, addr 0xaca5dc4, size 0x18, virtual false, abstract: false, final false
inline bool CheckAuthorization(::System::Net::WebResponse*  response, ::System::Net::HttpStatusCode  code) ;

/// @brief Method CheckFinalStatus, addr 0xaca62f4, size 0x498, virtual false, abstract: false, final false
inline ::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> CheckFinalStatus(::System::Net::HttpWebResponse*  response) ;

/// @brief Method CheckRequestStarted, addr 0xaca0d8c, size 0x58, virtual false, abstract: false, final false
inline void CheckRequestStarted() ;

/// @brief Method CreateRequestAbortedException, addr 0xaca3a3c, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Net::WebException* CreateRequestAbortedException() ;

/// @brief Method DoContinueDelegate, addr 0xaca49b8, size 0x1c, virtual false, abstract: false, final false
inline void DoContinueDelegate(int32_t  statusCode, ::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method DoPreAuthenticate, addr 0xaca55ec, size 0x200, virtual false, abstract: false, final false
inline void DoPreAuthenticate() ;

/// @brief Method EndGetRequestStream, addr 0xaca3bb0, size 0x120, virtual true, abstract: false, final false
inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndGetRequestStream, addr 0xaca4690, size 0x8c, virtual false, abstract: false, final false
inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult*  asyncResult, ::by_ref<::System::Net::TransportContext*>  context) ;

/// @brief Method EndGetResponse, addr 0xaca4570, size 0x120, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult*  asyncResult) ;

/// @brief Method FlattenException, addr 0xaca41a4, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Exception* FlattenException(::System::Exception*  e) ;

/// @brief Method GenerateConnectionGroup, addr 0xaca6820, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* GenerateConnectionGroup(::StringW  connectionGroupName, bool  unsafeConnectionGroup, bool  isInternalGroup) ;

/// @brief Method GetHeaders, addr 0xaca4f9c, size 0x650, virtual false, abstract: false, final false
inline ::StringW GetHeaders() ;

/// @brief Method GetMustImplement, addr 0xaca0e24, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* GetMustImplement() ;

/// @brief Method GetObjectData, addr 0xaca4980, size 0x38, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetRequestHeaders, addr 0xaca57ec, size 0x340, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRequestHeaders() ;

/// @brief Method GetRequestStream, addr 0xaca3d54, size 0x100, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetRequestStream() ;

/// [MonoTODO]
/// @brief Method GetRequestStream, addr 0xaca3e54, size 0x38, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetRequestStream(::by_ref<::System::Net::TransportContext*>  context) ;

/// @brief Method GetRequestStreamAsync, addr 0xaca3e8c, size 0x98, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync() ;

/// @brief Method GetResponse, addr 0xaca471c, size 0x100, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetResponse() ;

/// [AsyncStateMachine(typeof(System.Net.HttpWebRequest::<GetResponseFromData>d__244))]
/// @brief Method GetResponseFromData, addr 0xaca4054, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>* GetResponseFromData(::System::Net::WebResponseStream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetRewriteHandler, addr 0xaca60fc, size 0x1f8, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> GetRewriteHandler(::System::Net::HttpWebResponse*  response, bool  redirect) ;

/// @brief Method GetServicePoint, addr 0xaca2698, size 0x140, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* GetServicePoint() ;

/// @brief Method GetWebException, addr 0xaca3cd0, size 0x84, virtual false, abstract: false, final false
inline ::System::Net::WebException* GetWebException(::System::Exception*  e) ;

/// @brief Method GetWebException, addr 0xaca4260, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Net::WebException* GetWebException(::System::Exception*  e, bool  aborted) ;

/// @brief Method HandleNtlmAuth, addr 0xaca5b2c, size 0x298, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Net::WebOperation*,bool> HandleNtlmAuth(::System::Net::WebResponseStream*  stream, ::System::Net::HttpWebResponse*  response, ::System::Net::BufferOffsetSize*  writeBuffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method MyGetRequestStreamAsync, addr 0xaca36a0, size 0x374, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* MyGetRequestStreamAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.HttpWebRequest::<MyGetResponseAsync>d__243))]
/// @brief Method MyGetResponseAsync, addr 0xaca3f24, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* MyGetResponseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
static inline ::System::Net::HttpWebRequest* New_ctor() ;

/// @brief [Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
static inline ::System::Net::HttpWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

static inline ::System::Net::HttpWebRequest* New_ctor(::System::Uri*  uri) ;

static inline ::System::Net::HttpWebRequest* New_ctor(::System::Uri*  uri, ::Mono::Net::Security::MobileTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  settings) ;

/// @brief Method Redirect, addr 0xaca4a58, size 0x544, virtual false, abstract: false, final false
inline bool Redirect(::System::Net::HttpStatusCode  code, ::System::Net::WebResponse*  response) ;

/// @brief Method ResetAuthorization, addr 0xaca09d0, size 0x74, virtual false, abstract: false, final false
inline void ResetAuthorization() ;

/// @brief Method RewriteRedirectToGet, addr 0xaca49d4, size 0x84, virtual false, abstract: false, final false
inline void RewriteRedirectToGet() ;

/// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*  func) ;

/// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*  func, int32_t  timeout, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.HttpWebRequest::<RunWithTimeoutWorker>d__241`1<T>))]
/// @brief Method RunWithTimeoutWorker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T>*  workerTask, int32_t  timeout, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::System::Threading::CancellationTokenSource*  cts) ;

/// @brief Method SendRequest, addr 0xaca3468, size 0x238, virtual false, abstract: false, final false
inline ::System::Net::WebOperation* SendRequest(bool  redirecting, ::System::Net::BufferOffsetSize*  writeBuffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetDateHeaderHelper, addr 0xaca1578, size 0x98, virtual false, abstract: false, final false
inline void SetDateHeaderHelper(::StringW  headerName, ::System::DateTime  dateTime) ;

/// @brief Method SetSpecialHeaders, addr 0xaca0c18, size 0xc0, virtual false, abstract: false, final false
inline void SetSpecialHeaders(::StringW  HeaderName, ::StringW  value) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xaca4948, size 0x38, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method TryGetHostUri, addr 0xaca1be4, size 0xd0, virtual false, abstract: false, final false
inline bool TryGetHostUri(::StringW  hostName, ::by_ref<::System::Uri*>  hostUri) ;

/// [CompilerGenerated]
/// [AsyncStateMachine(typeof(System.Net.HttpWebRequest::<<GetRewriteHandler>b__271_0>d))]
/// @brief Method <GetRewriteHandler>b__271_0, addr 0xaca68fc, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* _GetRewriteHandler_b__271_0() ;

/// [CompilerGenerated]
/// @brief Method <RunWithTimeout>b__242_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool _RunWithTimeout_b__242_0() ;

constexpr ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>* const& __cordl_internal_get_ResendContentFactory() const;

constexpr ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*& __cordl_internal_get_ResendContentFactory() ;

constexpr bool const& __cordl_internal_get__ReuseConnection_k__BackingField() const;

constexpr bool& __cordl_internal_get__ReuseConnection_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ThrowOnError_k__BackingField() const;

constexpr bool& __cordl_internal_get__ThrowOnError_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

constexpr int32_t& __cordl_internal_get__cordl_ID() ;

constexpr int32_t const& __cordl_internal_get_aborted() const;

constexpr int32_t& __cordl_internal_get_aborted() ;

constexpr ::System::Uri* const& __cordl_internal_get_actualUri() const;

constexpr ::System::Uri*& __cordl_internal_get_actualUri() ;

constexpr ::System::Version* const& __cordl_internal_get_actualVersion() const;

constexpr ::System::Version*& __cordl_internal_get_actualVersion() ;

constexpr bool const& __cordl_internal_get_allowAutoRedirect() const;

constexpr bool& __cordl_internal_get_allowAutoRedirect() ;

constexpr bool const& __cordl_internal_get_allowBuffering() const;

constexpr bool& __cordl_internal_get_allowBuffering() ;

constexpr bool const& __cordl_internal_get_allowReadStreamBuffering() const;

constexpr bool& __cordl_internal_get_allowReadStreamBuffering() ;

constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState const& __cordl_internal_get_auth_state() const;

constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState& __cordl_internal_get_auth_state() ;

constexpr ::System::Net::DecompressionMethods const& __cordl_internal_get_auto_decomp() const;

constexpr ::System::Net::DecompressionMethods& __cordl_internal_get_auto_decomp() ;

constexpr ::System::Net::ServerCertValidationCallback* const& __cordl_internal_get_certValidationCallback() const;

constexpr ::System::Net::ServerCertValidationCallback*& __cordl_internal_get_certValidationCallback() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get_certificates() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get_certificates() ;

constexpr ::StringW const& __cordl_internal_get_connectionGroup() const;

constexpr ::StringW& __cordl_internal_get_connectionGroup() ;

constexpr int64_t const& __cordl_internal_get_contentLength() const;

constexpr int64_t& __cordl_internal_get_contentLength() ;

constexpr ::System::Net::HttpContinueDelegate* const& __cordl_internal_get_continueDelegate() const;

constexpr ::System::Net::HttpContinueDelegate*& __cordl_internal_get_continueDelegate() ;

constexpr int32_t const& __cordl_internal_get_continueTimeout() const;

constexpr int32_t& __cordl_internal_get_continueTimeout() ;

constexpr ::System::Net::CookieContainer* const& __cordl_internal_get_cookieContainer() const;

constexpr ::System::Net::CookieContainer*& __cordl_internal_get_cookieContainer() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get_credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get_credentials() ;

constexpr ::System::Net::WebOperation* const& __cordl_internal_get_currentOperation() const;

constexpr ::System::Net::WebOperation*& __cordl_internal_get_currentOperation() ;

constexpr bool const& __cordl_internal_get_expectContinue() const;

constexpr bool& __cordl_internal_get_expectContinue() ;

constexpr bool const& __cordl_internal_get_finished_reading() const;

constexpr bool& __cordl_internal_get_finished_reading() ;

constexpr bool const& __cordl_internal_get_force_version() const;

constexpr bool& __cordl_internal_get_force_version() ;

constexpr bool const& __cordl_internal_get_getResponseCalled() const;

constexpr bool& __cordl_internal_get_getResponseCalled() ;

constexpr bool const& __cordl_internal_get_gotRequestStream() const;

constexpr bool& __cordl_internal_get_gotRequestStream() ;

constexpr bool const& __cordl_internal_get_haveContentLength() const;

constexpr bool& __cordl_internal_get_haveContentLength() ;

constexpr bool const& __cordl_internal_get_haveResponse() const;

constexpr bool& __cordl_internal_get_haveResponse() ;

constexpr bool const& __cordl_internal_get_hostChanged() const;

constexpr bool& __cordl_internal_get_hostChanged() ;

constexpr bool const& __cordl_internal_get_hostHasPort() const;

constexpr bool& __cordl_internal_get_hostHasPort() ;

constexpr ::System::Uri* const& __cordl_internal_get_hostUri() const;

constexpr ::System::Uri*& __cordl_internal_get_hostUri() ;

constexpr ::StringW const& __cordl_internal_get_initialMethod() const;

constexpr ::StringW& __cordl_internal_get_initialMethod() ;

constexpr bool const& __cordl_internal_get_keepAlive() const;

constexpr bool& __cordl_internal_get_keepAlive() ;

constexpr ::System::Object* const& __cordl_internal_get_locker() const;

constexpr ::System::Object*& __cordl_internal_get_locker() ;

constexpr int32_t const& __cordl_internal_get_maxAutoRedirect() const;

constexpr int32_t& __cordl_internal_get_maxAutoRedirect() ;

constexpr int32_t const& __cordl_internal_get_maxResponseHeadersLength() const;

constexpr int32_t& __cordl_internal_get_maxResponseHeadersLength() ;

constexpr ::StringW const& __cordl_internal_get_mediaType() const;

constexpr ::StringW& __cordl_internal_get_mediaType() ;

constexpr ::StringW const& __cordl_internal_get_method() const;

constexpr ::StringW& __cordl_internal_get_method() ;

constexpr bool const& __cordl_internal_get_pipelined() const;

constexpr bool& __cordl_internal_get_pipelined() ;

constexpr bool const& __cordl_internal_get_preAuthenticate() const;

constexpr bool& __cordl_internal_get_preAuthenticate() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get_proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy() ;

constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState const& __cordl_internal_get_proxy_auth_state() const;

constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState& __cordl_internal_get_proxy_auth_state() ;

constexpr int32_t const& __cordl_internal_get_readWriteTimeout() const;

constexpr int32_t& __cordl_internal_get_readWriteTimeout() ;

constexpr int32_t const& __cordl_internal_get_redirects() const;

constexpr int32_t& __cordl_internal_get_redirects() ;

constexpr bool const& __cordl_internal_get_requestSent() const;

constexpr bool& __cordl_internal_get_requestSent() ;

constexpr ::System::Uri* const& __cordl_internal_get_requestUri() const;

constexpr ::System::Uri*& __cordl_internal_get_requestUri() ;

constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_responseTask() const;

constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_responseTask() ;

constexpr bool const& __cordl_internal_get_sendChunked() const;

constexpr bool& __cordl_internal_get_sendChunked() ;

constexpr ::System::Net::ServicePoint* const& __cordl_internal_get_servicePoint() const;

constexpr ::System::Net::ServicePoint*& __cordl_internal_get_servicePoint() ;

constexpr int32_t const& __cordl_internal_get_timeout() const;

constexpr int32_t& __cordl_internal_get_timeout() ;

constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get_tlsProvider() const;

constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get_tlsProvider() ;

constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_tlsSettings() const;

constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_tlsSettings() ;

constexpr bool const& __cordl_internal_get_unsafe_auth_blah() const;

constexpr bool& __cordl_internal_get_unsafe_auth_blah() ;

constexpr bool const& __cordl_internal_get_usedPreAuth() const;

constexpr bool& __cordl_internal_get_usedPreAuth() ;

constexpr ::System::Version* const& __cordl_internal_get_version() const;

constexpr ::System::Version*& __cordl_internal_get_version() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_webHeaders() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_webHeaders() ;

constexpr ::System::Net::HttpWebResponse* const& __cordl_internal_get_webResponse() const;

constexpr ::System::Net::HttpWebResponse*& __cordl_internal_get_webResponse() ;

constexpr ::System::Net::WebRequestStream* const& __cordl_internal_get_writeStream() const;

constexpr ::System::Net::WebRequestStream*& __cordl_internal_get_writeStream() ;

constexpr void __cordl_internal_set_ResendContentFactory(::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set__ReuseConnection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ThrowOnError_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cordl_ID(int32_t  value) ;

constexpr void __cordl_internal_set_aborted(int32_t  value) ;

constexpr void __cordl_internal_set_actualUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_actualVersion(::System::Version*  value) ;

constexpr void __cordl_internal_set_allowAutoRedirect(bool  value) ;

constexpr void __cordl_internal_set_allowBuffering(bool  value) ;

constexpr void __cordl_internal_set_allowReadStreamBuffering(bool  value) ;

constexpr void __cordl_internal_set_auth_state(::GlobalNamespace::HttpWebRequest_AuthorizationState  value) ;

constexpr void __cordl_internal_set_auto_decomp(::System::Net::DecompressionMethods  value) ;

constexpr void __cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback*  value) ;

constexpr void __cordl_internal_set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set_connectionGroup(::StringW  value) ;

constexpr void __cordl_internal_set_contentLength(int64_t  value) ;

constexpr void __cordl_internal_set_continueDelegate(::System::Net::HttpContinueDelegate*  value) ;

constexpr void __cordl_internal_set_continueTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_cookieContainer(::System::Net::CookieContainer*  value) ;

constexpr void __cordl_internal_set_credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set_currentOperation(::System::Net::WebOperation*  value) ;

constexpr void __cordl_internal_set_expectContinue(bool  value) ;

constexpr void __cordl_internal_set_finished_reading(bool  value) ;

constexpr void __cordl_internal_set_force_version(bool  value) ;

constexpr void __cordl_internal_set_getResponseCalled(bool  value) ;

constexpr void __cordl_internal_set_gotRequestStream(bool  value) ;

constexpr void __cordl_internal_set_haveContentLength(bool  value) ;

constexpr void __cordl_internal_set_haveResponse(bool  value) ;

constexpr void __cordl_internal_set_hostChanged(bool  value) ;

constexpr void __cordl_internal_set_hostHasPort(bool  value) ;

constexpr void __cordl_internal_set_hostUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_initialMethod(::StringW  value) ;

constexpr void __cordl_internal_set_keepAlive(bool  value) ;

constexpr void __cordl_internal_set_locker(::System::Object*  value) ;

constexpr void __cordl_internal_set_maxAutoRedirect(int32_t  value) ;

constexpr void __cordl_internal_set_maxResponseHeadersLength(int32_t  value) ;

constexpr void __cordl_internal_set_mediaType(::StringW  value) ;

constexpr void __cordl_internal_set_method(::StringW  value) ;

constexpr void __cordl_internal_set_pipelined(bool  value) ;

constexpr void __cordl_internal_set_preAuthenticate(bool  value) ;

constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set_proxy_auth_state(::GlobalNamespace::HttpWebRequest_AuthorizationState  value) ;

constexpr void __cordl_internal_set_readWriteTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_redirects(int32_t  value) ;

constexpr void __cordl_internal_set_requestSent(bool  value) ;

constexpr void __cordl_internal_set_requestUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_responseTask(::System::Net::WebCompletionSource*  value) ;

constexpr void __cordl_internal_set_sendChunked(bool  value) ;

constexpr void __cordl_internal_set_servicePoint(::System::Net::ServicePoint*  value) ;

constexpr void __cordl_internal_set_timeout(int32_t  value) ;

constexpr void __cordl_internal_set_tlsProvider(::Mono::Net::Security::MobileTlsProvider*  value) ;

constexpr void __cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings*  value) ;

constexpr void __cordl_internal_set_unsafe_auth_blah(bool  value) ;

constexpr void __cordl_internal_set_usedPreAuth(bool  value) ;

constexpr void __cordl_internal_set_version(::System::Version*  value) ;

constexpr void __cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set_webResponse(::System::Net::HttpWebResponse*  value) ;

constexpr void __cordl_internal_set_writeStream(::System::Net::WebRequestStream*  value) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief Method .ctor, addr 0xaca6a14, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// [Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
/// @brief Method .ctor, addr 0xaca0a84, size 0x164, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method .ctor, addr 0xaca03ac, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri) ;

/// @brief Method .ctor, addr 0xaca0a44, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri, ::Mono::Net::Security::MobileTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  settings) ;

static inline ::System::Net::Cache::RequestCachePolicy* getStaticF_defaultCachePolicy() ;

static inline int32_t getStaticF_defaultMaxResponseHeadersLength() ;

static inline int32_t getStaticF_defaultMaximumErrorResponseLength() ;

/// @brief Method get_Aborted, addr 0xaca3a14, size 0x28, virtual false, abstract: false, final false
inline bool get_Aborted() ;

/// @brief Method get_Accept, addr 0xaca0cd8, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_Accept() ;

/// @brief Method get_Address, addr 0xaca0de4, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_Address() ;

/// @brief Method get_AllowAutoRedirect, addr 0xaca0df4, size 0x8, virtual true, abstract: false, final false
inline bool get_AllowAutoRedirect() ;

/// @brief Method get_AllowReadStreamBuffering, addr 0xaca0e14, size 0x8, virtual true, abstract: false, final false
inline bool get_AllowReadStreamBuffering() ;

/// @brief Method get_AllowWriteStreamBuffering, addr 0xaca0e04, size 0x8, virtual true, abstract: false, final false
inline bool get_AllowWriteStreamBuffering() ;

/// @brief Method get_AuthUri, addr 0xaca2d34, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_AuthUri() ;

/// @brief Method get_AutomaticDecompression, addr 0xaca0e78, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::DecompressionMethods get_AutomaticDecompression() ;

/// @brief Method get_ClientCertificates, addr 0xaca0fc4, size 0x70, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method get_Connection, addr 0xaca108c, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_Connection() ;

/// @brief Method get_ConnectionGroupName, addr 0xaca126c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_ConnectionGroupName() ;

/// @brief Method get_ContentLength, addr 0xaca127c, size 0x8, virtual true, abstract: false, final false
inline int64_t get_ContentLength() ;

/// @brief Method get_ContentType, addr 0xaca1328, size 0x54, virtual true, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_ContinueDelegate, addr 0xaca13d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::HttpContinueDelegate* get_ContinueDelegate() ;

/// @brief Method get_ContinueTimeout, addr 0xaca221c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ContinueTimeout() ;

/// @brief Method get_CookieContainer, addr 0xaca13e4, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::CookieContainer* get_CookieContainer() ;

/// @brief Method get_Credentials, addr 0xaca13f4, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_Date, addr 0xaca1404, size 0x11c, virtual false, abstract: false, final false
inline ::System::DateTime get_Date() ;

/// @brief Method get_DefaultMaximumErrorResponseLength, addr 0xaca1610, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_DefaultMaximumErrorResponseLength() ;

/// @brief Method get_DefaultMaximumResponseHeadersLength, addr 0xaca20d0, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_DefaultMaximumResponseHeadersLength() ;

/// @brief Method get_Expect, addr 0xaca16c4, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_Expect() ;

/// @brief Method get_ExpectContinue, addr 0xaca2d24, size 0x8, virtual false, abstract: false, final false
inline bool get_ExpectContinue() ;

/// @brief Method get_FinishedReading, addr 0xaca481c, size 0x8, virtual false, abstract: false, final false
inline bool get_FinishedReading() ;

/// @brief Method get_GotRequestStream, addr 0xaca2d1c, size 0x8, virtual false, abstract: false, final false
inline bool get_GotRequestStream() ;

/// @brief Method get_HaveResponse, addr 0xaca1840, size 0x8, virtual true, abstract: false, final false
inline bool get_HaveResponse() ;

/// @brief Method get_Headers, addr 0xaca1848, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method get_Host, addr 0xaca195c, size 0x114, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_IfModifiedSince, addr 0xaca1cb4, size 0x140, virtual false, abstract: false, final false
inline ::System::DateTime get_IfModifiedSince() ;

/// @brief Method get_InternalAllowBuffering, addr 0xaca0ea4, size 0x14, virtual false, abstract: false, final false
inline bool get_InternalAllowBuffering() ;

/// @brief Method get_KeepAlive, addr 0xaca1fb4, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepAlive() ;

/// @brief Method get_MaximumAutomaticRedirections, addr 0xaca1fc4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaximumAutomaticRedirections() ;

/// @brief Method get_MaximumResponseHeadersLength, addr 0xaca2040, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaximumResponseHeadersLength() ;

/// @brief Method get_MediaType, addr 0xaca22ac, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MediaType() ;

/// @brief Method get_Method, addr 0xaca22bc, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Method() ;

/// @brief Method get_MethodWithBuffer, addr 0xaca0eb8, size 0xfc, virtual false, abstract: false, final false
inline bool get_MethodWithBuffer() ;

/// @brief Method get_Pipelined, addr 0xaca2510, size 0x8, virtual false, abstract: false, final false
inline bool get_Pipelined() ;

/// @brief Method get_PreAuthenticate, addr 0xaca2520, size 0x8, virtual true, abstract: false, final false
inline bool get_PreAuthenticate() ;

/// @brief Method get_ProtocolVersion, addr 0xaca2530, size 0x8, virtual false, abstract: false, final false
inline ::System::Version* get_ProtocolVersion() ;

/// @brief Method get_Proxy, addr 0xaca264c, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::IWebProxy* get_Proxy() ;

/// @brief Method get_ProxyQuery, addr 0xaca2d3c, size 0x30, virtual false, abstract: false, final false
inline bool get_ProxyQuery() ;

/// @brief Method get_ReadWriteTimeout, addr 0xaca2184, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ReadWriteTimeout() ;

/// @brief Method get_Referer, addr 0xaca27d8, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_Referer() ;

/// @brief Method get_RequestUri, addr 0xaca28c8, size 0x8, virtual true, abstract: false, final false
inline ::System::Uri* get_RequestUri() ;

/// [CompilerGenerated]
/// @brief Method get_ReuseConnection, addr 0xaca6810, size 0x8, virtual false, abstract: false, final false
inline bool get_ReuseConnection() ;

/// @brief Method get_SendChunked, addr 0xaca28d0, size 0x8, virtual false, abstract: false, final false
inline bool get_SendChunked() ;

/// @brief Method get_ServerCertValidationCallback, addr 0xaca2d6c, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback() ;

/// @brief Method get_ServerCertificateValidationCallback, addr 0xaca2d74, size 0x18, virtual false, abstract: false, final false
inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback() ;

/// @brief Method get_ServicePoint, addr 0xaca28fc, size 0x4, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* get_ServicePoint() ;

/// @brief Method get_ServicePointNoLock, addr 0xaca2900, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* get_ServicePointNoLock() ;

/// @brief Method get_SupportsCookieContainer, addr 0xaca2908, size 0x8, virtual true, abstract: false, final false
inline bool get_SupportsCookieContainer() ;

/// [CompilerGenerated]
/// @brief Method get_ThrowOnError, addr 0xaca1318, size 0x8, virtual false, abstract: false, final false
inline bool get_ThrowOnError() ;

/// @brief Method get_Timeout, addr 0xaca2910, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Timeout() ;

/// @brief Method get_TlsProvider, addr 0xaca0fb4, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Net::Security::MobileTlsProvider* get_TlsProvider() ;

/// @brief Method get_TlsSettings, addr 0xaca0fbc, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings() ;

/// @brief Method get_TransferEncoding, addr 0xaca2974, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_TransferEncoding() ;

/// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0xaca2d0c, size 0x8, virtual false, abstract: false, final false
inline bool get_UnsafeAuthenticatedConnectionSharing() ;

/// @brief Method get_UseDefaultCredentials, addr 0xaca2b64, size 0x78, virtual true, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Method get_UserAgent, addr 0xaca2c5c, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_UserAgent() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

static inline void setStaticF_defaultMaxResponseHeadersLength(int32_t  value) ;

static inline void setStaticF_defaultMaximumErrorResponseLength(int32_t  value) ;

/// @brief Method set_Accept, addr 0xaca0d2c, size 0x60, virtual false, abstract: false, final false
inline void set_Accept(::StringW  value) ;

/// @brief Method set_Address, addr 0xaca0dec, size 0x8, virtual false, abstract: false, final false
inline void set_Address(::System::Uri*  value) ;

/// @brief Method set_AllowAutoRedirect, addr 0xaca0dfc, size 0x8, virtual true, abstract: false, final false
inline void set_AllowAutoRedirect(bool  value) ;

/// @brief Method set_AllowReadStreamBuffering, addr 0xaca0e1c, size 0x8, virtual true, abstract: false, final false
inline void set_AllowReadStreamBuffering(bool  value) ;

/// @brief Method set_AllowWriteStreamBuffering, addr 0xaca0e0c, size 0x8, virtual true, abstract: false, final false
inline void set_AllowWriteStreamBuffering(bool  value) ;

/// @brief Method set_AutomaticDecompression, addr 0xaca0e80, size 0x24, virtual false, abstract: false, final false
inline void set_AutomaticDecompression(::System::Net::DecompressionMethods  value) ;

/// @brief Method set_ClientCertificates, addr 0xaca1034, size 0x58, virtual false, abstract: false, final false
inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

/// @brief Method set_Connection, addr 0xaca10e0, size 0x18c, virtual false, abstract: false, final false
inline void set_Connection(::StringW  value) ;

/// @brief Method set_ConnectionGroupName, addr 0xaca1274, size 0x8, virtual true, abstract: false, final false
inline void set_ConnectionGroupName(::StringW  value) ;

/// @brief Method set_ContentLength, addr 0xaca1284, size 0x8c, virtual true, abstract: false, final false
inline void set_ContentLength(int64_t  value) ;

/// @brief Method set_ContentType, addr 0xaca137c, size 0x58, virtual true, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// @brief Method set_ContinueDelegate, addr 0xaca13dc, size 0x8, virtual false, abstract: false, final false
inline void set_ContinueDelegate(::System::Net::HttpContinueDelegate*  value) ;

/// @brief Method set_ContinueTimeout, addr 0xaca2224, size 0x88, virtual false, abstract: false, final false
inline void set_ContinueTimeout(int32_t  value) ;

/// @brief Method set_CookieContainer, addr 0xaca13ec, size 0x8, virtual true, abstract: false, final false
inline void set_CookieContainer(::System::Net::CookieContainer*  value) ;

/// @brief Method set_Credentials, addr 0xaca13fc, size 0x8, virtual true, abstract: false, final false
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_Date, addr 0xaca1520, size 0x58, virtual false, abstract: false, final false
inline void set_Date(::System::DateTime  value) ;

/// @brief Method set_DefaultMaximumErrorResponseLength, addr 0xaca1668, size 0x5c, virtual false, abstract: false, final false
static inline void set_DefaultMaximumErrorResponseLength(int32_t  value) ;

/// @brief Method set_DefaultMaximumResponseHeadersLength, addr 0xaca2128, size 0x5c, virtual false, abstract: false, final false
static inline void set_DefaultMaximumResponseHeadersLength(int32_t  value) ;

/// @brief Method set_Expect, addr 0xaca1718, size 0x128, virtual false, abstract: false, final false
inline void set_Expect(::StringW  value) ;

/// @brief Method set_ExpectContinue, addr 0xaca2d2c, size 0x8, virtual false, abstract: false, final false
inline void set_ExpectContinue(bool  value) ;

/// @brief Method set_FinishedReading, addr 0xaca4824, size 0x8, virtual false, abstract: false, final false
inline void set_FinishedReading(bool  value) ;

/// @brief Method set_Headers, addr 0xaca1850, size 0x10c, virtual true, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// @brief Method set_Host, addr 0xaca1a70, size 0x174, virtual false, abstract: false, final false
inline void set_Host(::StringW  value) ;

/// @brief Method set_IfModifiedSince, addr 0xaca1ee0, size 0xd4, virtual false, abstract: false, final false
inline void set_IfModifiedSince(::System::DateTime  value) ;

/// @brief Method set_InternalContentLength, addr 0xaca1310, size 0x8, virtual false, abstract: false, final false
inline void set_InternalContentLength(int64_t  value) ;

/// @brief Method set_KeepAlive, addr 0xaca1fbc, size 0x8, virtual false, abstract: false, final false
inline void set_KeepAlive(bool  value) ;

/// @brief Method set_MaximumAutomaticRedirections, addr 0xaca1fcc, size 0x74, virtual false, abstract: false, final false
inline void set_MaximumAutomaticRedirections(int32_t  value) ;

/// @brief Method set_MaximumResponseHeadersLength, addr 0xaca2048, size 0x88, virtual false, abstract: false, final false
inline void set_MaximumResponseHeadersLength(int32_t  value) ;

/// @brief Method set_MediaType, addr 0xaca22b4, size 0x8, virtual false, abstract: false, final false
inline void set_MediaType(::StringW  value) ;

/// @brief Method set_Method, addr 0xaca22c4, size 0x24c, virtual true, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// @brief Method set_Pipelined, addr 0xaca2518, size 0x8, virtual false, abstract: false, final false
inline void set_Pipelined(bool  value) ;

/// @brief Method set_PreAuthenticate, addr 0xaca2528, size 0x8, virtual true, abstract: false, final false
inline void set_PreAuthenticate(bool  value) ;

/// @brief Method set_ProtocolVersion, addr 0xaca2538, size 0x114, virtual false, abstract: false, final false
inline void set_ProtocolVersion(::System::Version*  value) ;

/// @brief Method set_Proxy, addr 0xaca2654, size 0x44, virtual true, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_ReadWriteTimeout, addr 0xaca218c, size 0x90, virtual false, abstract: false, final false
inline void set_ReadWriteTimeout(int32_t  value) ;

/// @brief Method set_Referer, addr 0xaca282c, size 0x9c, virtual false, abstract: false, final false
inline void set_Referer(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReuseConnection, addr 0xaca6818, size 0x8, virtual false, abstract: false, final false
inline void set_ReuseConnection(bool  value) ;

/// @brief Method set_SendChunked, addr 0xaca28d8, size 0x24, virtual false, abstract: false, final false
inline void set_SendChunked(bool  value) ;

/// @brief Method set_ServerCertificateValidationCallback, addr 0xaca2d8c, size 0x7c, virtual false, abstract: false, final false
inline void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThrowOnError, addr 0xaca1320, size 0x8, virtual false, abstract: false, final false
inline void set_ThrowOnError(bool  value) ;

/// @brief Method set_Timeout, addr 0xaca2918, size 0x5c, virtual true, abstract: false, final false
inline void set_Timeout(int32_t  value) ;

/// @brief Method set_TransferEncoding, addr 0xaca29c8, size 0x19c, virtual false, abstract: false, final false
inline void set_TransferEncoding(::StringW  value) ;

/// @brief Method set_UnsafeAuthenticatedConnectionSharing, addr 0xaca2d14, size 0x8, virtual false, abstract: false, final false
inline void set_UnsafeAuthenticatedConnectionSharing(bool  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xaca2bdc, size 0x80, virtual true, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

/// @brief Method set_UserAgent, addr 0xaca2cb0, size 0x5c, virtual false, abstract: false, final false
inline void set_UserAgent(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpWebRequest(HttpWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpWebRequest(HttpWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10698};

/// @brief Field requestUri, offset: 0x38, size: 0x8, def value: None
 ::System::Uri*  ___requestUri;

/// @brief Field actualUri, offset: 0x40, size: 0x8, def value: None
 ::System::Uri*  ___actualUri;

/// @brief Field hostChanged, offset: 0x48, size: 0x1, def value: None
 bool  ___hostChanged;

/// @brief Field allowAutoRedirect, offset: 0x49, size: 0x1, def value: None
 bool  ___allowAutoRedirect;

/// @brief Field allowBuffering, offset: 0x4a, size: 0x1, def value: None
 bool  ___allowBuffering;

/// @brief Field allowReadStreamBuffering, offset: 0x4b, size: 0x1, def value: None
 bool  ___allowReadStreamBuffering;

/// @brief Field certificates, offset: 0x50, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ___certificates;

/// @brief Field connectionGroup, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___connectionGroup;

/// @brief Field haveContentLength, offset: 0x60, size: 0x1, def value: None
 bool  ___haveContentLength;

/// @brief Field contentLength, offset: 0x68, size: 0x8, def value: None
 int64_t  ___contentLength;

/// @brief Field continueDelegate, offset: 0x70, size: 0x8, def value: None
 ::System::Net::HttpContinueDelegate*  ___continueDelegate;

/// @brief Field cookieContainer, offset: 0x78, size: 0x8, def value: None
 ::System::Net::CookieContainer*  ___cookieContainer;

/// @brief Field credentials, offset: 0x80, size: 0x8, def value: None
 ::System::Net::ICredentials*  ___credentials;

/// @brief Field haveResponse, offset: 0x88, size: 0x1, def value: None
 bool  ___haveResponse;

/// @brief Field requestSent, offset: 0x89, size: 0x1, def value: None
 bool  ___requestSent;

/// @brief Field webHeaders, offset: 0x90, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ___webHeaders;

/// @brief Field keepAlive, offset: 0x98, size: 0x1, def value: None
 bool  ___keepAlive;

/// @brief Field maxAutoRedirect, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___maxAutoRedirect;

/// @brief Field mediaType, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___mediaType;

/// @brief Field method, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___method;

/// @brief Field initialMethod, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___initialMethod;

/// @brief Field pipelined, offset: 0xb8, size: 0x1, def value: None
 bool  ___pipelined;

/// @brief Field preAuthenticate, offset: 0xb9, size: 0x1, def value: None
 bool  ___preAuthenticate;

/// @brief Field usedPreAuth, offset: 0xba, size: 0x1, def value: None
 bool  ___usedPreAuth;

/// @brief Field version, offset: 0xc0, size: 0x8, def value: None
 ::System::Version*  ___version;

/// @brief Field force_version, offset: 0xc8, size: 0x1, def value: None
 bool  ___force_version;

/// @brief Field actualVersion, offset: 0xd0, size: 0x8, def value: None
 ::System::Version*  ___actualVersion;

/// @brief Field proxy, offset: 0xd8, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ___proxy;

/// @brief Field sendChunked, offset: 0xe0, size: 0x1, def value: None
 bool  ___sendChunked;

/// @brief Field servicePoint, offset: 0xe8, size: 0x8, def value: None
 ::System::Net::ServicePoint*  ___servicePoint;

/// @brief Field timeout, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___timeout;

/// @brief Field continueTimeout, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___continueTimeout;

/// @brief Field writeStream, offset: 0xf8, size: 0x8, def value: None
 ::System::Net::WebRequestStream*  ___writeStream;

/// @brief Field webResponse, offset: 0x100, size: 0x8, def value: None
 ::System::Net::HttpWebResponse*  ___webResponse;

/// @brief Field responseTask, offset: 0x108, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  ___responseTask;

/// @brief Field currentOperation, offset: 0x110, size: 0x8, def value: None
 ::System::Net::WebOperation*  ___currentOperation;

/// @brief Field aborted, offset: 0x118, size: 0x4, def value: None
 int32_t  ___aborted;

/// @brief Field gotRequestStream, offset: 0x11c, size: 0x1, def value: None
 bool  ___gotRequestStream;

/// @brief Field redirects, offset: 0x120, size: 0x4, def value: None
 int32_t  ___redirects;

/// @brief Field expectContinue, offset: 0x124, size: 0x1, def value: None
 bool  ___expectContinue;

/// @brief Field getResponseCalled, offset: 0x125, size: 0x1, def value: None
 bool  ___getResponseCalled;

/// @brief Field locker, offset: 0x128, size: 0x8, def value: None
 ::System::Object*  ___locker;

/// @brief Field finished_reading, offset: 0x130, size: 0x1, def value: None
 bool  ___finished_reading;

/// @brief Field auto_decomp, offset: 0x134, size: 0x4, def value: None
 ::System::Net::DecompressionMethods  ___auto_decomp;

/// @brief Field maxResponseHeadersLength, offset: 0x138, size: 0x4, def value: None
 int32_t  ___maxResponseHeadersLength;

/// @brief Field readWriteTimeout, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___readWriteTimeout;

/// @brief Field tlsProvider, offset: 0x140, size: 0x8, def value: None
 ::Mono::Net::Security::MobileTlsProvider*  ___tlsProvider;

/// @brief Field tlsSettings, offset: 0x148, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsSettings*  ___tlsSettings;

/// @brief Field certValidationCallback, offset: 0x150, size: 0x8, def value: None
 ::System::Net::ServerCertValidationCallback*  ___certValidationCallback;

/// @brief Field hostHasPort, offset: 0x158, size: 0x1, def value: None
 bool  ___hostHasPort;

/// @brief Field hostUri, offset: 0x160, size: 0x8, def value: None
 ::System::Uri*  ___hostUri;

/// @brief Field auth_state, offset: 0x168, size: 0x10, def value: None
 ::GlobalNamespace::HttpWebRequest_AuthorizationState  ___auth_state;

/// @brief Field proxy_auth_state, offset: 0x178, size: 0x10, def value: None
 ::GlobalNamespace::HttpWebRequest_AuthorizationState  ___proxy_auth_state;

/// @brief Field ResendContentFactory, offset: 0x188, size: 0x8, def value: None
 ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*  ___ResendContentFactory;

/// @brief Field ID, offset: 0x190, size: 0x4, def value: None
 int32_t  ____cordl_ID;

/// [CompilerGenerated]
/// @brief Field <ThrowOnError>k__BackingField, offset: 0x194, size: 0x1, def value: None
 bool  ____ThrowOnError_k__BackingField;

/// @brief Field unsafe_auth_blah, offset: 0x195, size: 0x1, def value: None
 bool  ___unsafe_auth_blah;

/// [CompilerGenerated]
/// @brief Field <ReuseConnection>k__BackingField, offset: 0x196, size: 0x1, def value: None
 bool  ____ReuseConnection_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest, ___requestUri) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___actualUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___allowAutoRedirect) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___allowBuffering) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___allowReadStreamBuffering) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___certificates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___connectionGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___haveContentLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___contentLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___continueDelegate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___cookieContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___credentials) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___haveResponse) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___requestSent) == 0x89, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___webHeaders) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___keepAlive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___maxAutoRedirect) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___mediaType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___method) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___initialMethod) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___pipelined) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___preAuthenticate) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___usedPreAuth) == 0xba, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___version) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___force_version) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___actualVersion) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___proxy) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___sendChunked) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___servicePoint) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___timeout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___continueTimeout) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___writeStream) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___webResponse) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___responseTask) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___currentOperation) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___aborted) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___gotRequestStream) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___redirects) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___expectContinue) == 0x124, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___getResponseCalled) == 0x125, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___locker) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___finished_reading) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___auto_decomp) == 0x134, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___maxResponseHeadersLength) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___readWriteTimeout) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___tlsProvider) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___tlsSettings) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___certValidationCallback) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostHasPort) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostUri) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___auth_state) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___proxy_auth_state) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___ResendContentFactory) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ____cordl_ID) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ____ThrowOnError_k__BackingField) == 0x194, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___unsafe_auth_blah) == 0x195, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ____ReuseConnection_k__BackingField) == 0x196, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpWebRequest) == 0x198, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Net.HttpWebRequest/<>c__241`1<T>
class CORDL_TYPE HttpWebRequest___c__241_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::HttpWebRequest___c__241_1<T>*  __9;

/// @brief Field <>9__241_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__241_0, put=setStaticF___9__241_0)) ::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*  __9__241_0;

static inline ::System::Net::HttpWebRequest___c__241_1<T>* New_ctor() ;

/// @brief Method <RunWithTimeoutWorker>b__241_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> _RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T>*  t) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::HttpWebRequest___c__241_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>* getStaticF___9__241_0() ;

static inline void setStaticF___9(::System::Net::HttpWebRequest___c__241_1<T>*  value) ;

static inline void setStaticF___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest___c__241_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest___c__241_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpWebRequest___c__241_1(HttpWebRequest___c__241_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest___c__241_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpWebRequest___c__241_1(HttpWebRequest___c__241_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
