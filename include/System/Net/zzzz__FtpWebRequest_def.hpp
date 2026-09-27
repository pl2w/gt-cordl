#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__FtpWebRequest_RequestStage_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FtpWebRequest)
namespace GlobalNamespace {
struct FtpWebRequest_RequestStage;
}
namespace GlobalNamespace {
struct FtpWebRequest__CreateConnectionAsync_d__86;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class FtpMethodInfo;
}
namespace System::Net {
class FtpWebRequest___c;
}
namespace System::Net {
class FtpWebResponse;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class TimerThread_Callback;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class TimerThread_Timer;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebResponse;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class FtpWebRequest___c;
}
// Write type traits
MARK_REF_T(::System::Net::FtpWebRequest*);
MARK_REF_T(::System::Net::FtpWebRequest___c*);
DEFINE_IL2CPP_CLASS(::System::Net::FtpWebRequest*, "System.Net", "FtpWebRequest");
DEFINE_IL2CPP_CLASS(::System::Net::FtpWebRequest___c*, "System.Net", "FtpWebRequest/<>c");
// Dependencies System.DateTime, System.Net.FtpWebRequest::RequestStage, System.Net.WebRequest
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebRequest
class CORDL_TYPE FtpWebRequest : public ::System::Net::WebRequest {
public:
// Declarations
using RequestStage = ::GlobalNamespace::FtpWebRequest_RequestStage;

using _CreateConnectionAsync_d__86 = ::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86;

using __c = ::System::Net::FtpWebRequest___c;

 __declspec(property(get=get_Aborted)) bool  Aborted;

 __declspec(property(get=get_CachePolicy, put=set_CachePolicy)) ::System::Net::Cache::RequestCachePolicy*  CachePolicy;

 __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(get=get_ConnectionGroupName, put=set_ConnectionGroupName)) ::StringW  ConnectionGroupName;

 __declspec(property(get=get_ContentLength, put=set_ContentLength)) int64_t  ContentLength;

 __declspec(property(get=get_ContentOffset, put=set_ContentOffset)) int64_t  ContentOffset;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_EnableSsl, put=set_EnableSsl)) bool  EnableSsl;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_InUse)) bool  InUse;

 __declspec(property(get=get_KeepAlive, put=set_KeepAlive)) bool  KeepAlive;

 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_MethodInfo)) ::System::Net::FtpMethodInfo*  MethodInfo;

 __declspec(property(get=get_PreAuthenticate, put=set_PreAuthenticate)) bool  PreAuthenticate;

 __declspec(property(get=get_Proxy, put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_ReadWriteTimeout, put=set_ReadWriteTimeout)) int32_t  ReadWriteTimeout;

 __declspec(property(get=get_RemainingTimeout)) int32_t  RemainingTimeout;

 __declspec(property(get=get_RenameTo, put=set_RenameTo)) ::StringW  RenameTo;

 __declspec(property(get=get_RequestUri)) ::System::Uri*  RequestUri;

 __declspec(property(get=get_ServicePoint)) ::System::Net::ServicePoint*  ServicePoint;

 __declspec(property(get=get_Timeout, put=set_Timeout)) int32_t  Timeout;

 __declspec(property(get=get_TimerQueue)) ::System::Net::TimerThread_Queue*  TimerQueue;

 __declspec(property(get=get_UseBinary, put=set_UseBinary)) bool  UseBinary;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

 __declspec(property(get=get_UsePassive, put=set_UsePassive)) bool  UsePassive;

/// @brief Field _aborted, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__aborted, put=__cordl_internal_set__aborted)) bool  _aborted;

/// @brief Field _async, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__async, put=__cordl_internal_set__async)) bool  _async;

/// @brief Field _authInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__authInfo, put=__cordl_internal_set__authInfo)) ::System::Net::ICredentials*  _authInfo;

/// @brief Field _binary, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__binary, put=__cordl_internal_set__binary)) bool  _binary;

/// @brief Field _clientCertificates, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientCertificates, put=__cordl_internal_set__clientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  _clientCertificates;

/// @brief Field _connection, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__connection, put=__cordl_internal_set__connection)) ::System::Net::FtpControlStream*  _connection;

/// @brief Field _connectionGroupName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionGroupName, put=__cordl_internal_set__connectionGroupName)) ::StringW  _connectionGroupName;

/// @brief Field _contentLength, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentLength, put=__cordl_internal_set__contentLength)) int64_t  _contentLength;

/// @brief Field _contentOffset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentOffset, put=__cordl_internal_set__contentOffset)) int64_t  _contentOffset;

/// @brief Field _enableSsl, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableSsl, put=__cordl_internal_set__enableSsl)) bool  _enableSsl;

/// @brief Field _exception, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__exception, put=__cordl_internal_set__exception)) ::System::Exception*  _exception;

/// @brief Field _ftpRequestHeaders, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ftpRequestHeaders, put=__cordl_internal_set__ftpRequestHeaders)) ::System::Net::WebHeaderCollection*  _ftpRequestHeaders;

/// @brief Field _ftpWebResponse, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ftpWebResponse, put=__cordl_internal_set__ftpWebResponse)) ::System::Net::FtpWebResponse*  _ftpWebResponse;

/// @brief Field _getRequestStreamStarted, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__getRequestStreamStarted, put=__cordl_internal_set__getRequestStreamStarted)) bool  _getRequestStreamStarted;

/// @brief Field _getResponseStarted, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__getResponseStarted, put=__cordl_internal_set__getResponseStarted)) bool  _getResponseStarted;

/// @brief Field _methodInfo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__methodInfo, put=__cordl_internal_set__methodInfo)) ::System::Net::FtpMethodInfo*  _methodInfo;

/// @brief Field _onceFailed, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get__onceFailed, put=__cordl_internal_set__onceFailed)) bool  _onceFailed;

/// @brief Field _passive, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__passive, put=__cordl_internal_set__passive)) bool  _passive;

/// @brief Field _readAsyncResult, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__readAsyncResult, put=__cordl_internal_set__readAsyncResult)) ::System::Net::LazyAsyncResult*  _readAsyncResult;

/// @brief Field _readWriteTimeout, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__readWriteTimeout, put=__cordl_internal_set__readWriteTimeout)) int32_t  _readWriteTimeout;

/// @brief Field _remainingTimeout, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__remainingTimeout, put=__cordl_internal_set__remainingTimeout)) int32_t  _remainingTimeout;

/// @brief Field _renameTo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__renameTo, put=__cordl_internal_set__renameTo)) ::StringW  _renameTo;

/// @brief Field _requestCompleteAsyncResult, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestCompleteAsyncResult, put=__cordl_internal_set__requestCompleteAsyncResult)) ::System::Net::LazyAsyncResult*  _requestCompleteAsyncResult;

/// @brief Field _requestStage, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__requestStage, put=__cordl_internal_set__requestStage)) ::GlobalNamespace::FtpWebRequest_RequestStage  _requestStage;

/// @brief Field _servicePoint, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__servicePoint, put=__cordl_internal_set__servicePoint)) ::System::Net::ServicePoint*  _servicePoint;

/// @brief Field _startTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) ::System::DateTime  _startTime;

/// @brief Field _stream, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _syncObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncObject, put=__cordl_internal_set__syncObject)) ::System::Object*  _syncObject;

/// @brief Field _timedOut, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get__timedOut, put=__cordl_internal_set__timedOut)) bool  _timedOut;

/// @brief Field _timeout, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeout, put=__cordl_internal_set__timeout)) int32_t  _timeout;

/// @brief Field _timerCallback, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerCallback, put=__cordl_internal_set__timerCallback)) ::System::Net::TimerThread_Callback*  _timerCallback;

/// @brief Field _timerQueue, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerQueue, put=__cordl_internal_set__timerQueue)) ::System::Net::TimerThread_Queue*  _timerQueue;

/// @brief Field _uri, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__uri, put=__cordl_internal_set__uri)) ::System::Uri*  _uri;

/// @brief Field _writeAsyncResult, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeAsyncResult, put=__cordl_internal_set__writeAsyncResult)) ::System::Net::ContextAwareResult*  _writeAsyncResult;

/// @brief Field s_DefaultTimerQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultTimerQueue, put=setStaticF_s_DefaultTimerQueue)) ::System::Net::TimerThread_Queue*  s_DefaultTimerQueue;

/// @brief Field s_defaultFtpNetworkCredential, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_defaultFtpNetworkCredential, put=setStaticF_s_defaultFtpNetworkCredential)) ::System::Net::NetworkCredential*  s_defaultFtpNetworkCredential;

/// @brief Method Abort, addr 0xadc19c8, size 0x4a4, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method AsyncRequestCallback, addr 0xadc0b74, size 0xa30, virtual false, abstract: false, final false
inline void AsyncRequestCallback(::System::Object*  obj) ;

/// @brief Method AttemptedRecovery, addr 0xadc066c, size 0x254, virtual false, abstract: false, final false
inline bool AttemptedRecovery(::System::Exception*  e) ;

/// @brief Method BeginGetRequestStream, addr 0xadbf688, size 0x548, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginGetResponse, addr 0xadbe5c8, size 0x6c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CheckError, addr 0xadbd318, size 0x14, virtual false, abstract: false, final false
inline void CheckError() ;

/// @brief Method CreateConnection, addr 0xadc00e8, size 0x164, virtual false, abstract: false, final false
inline ::System::Net::FtpControlStream* CreateConnection() ;

/// [AsyncStateMachine(typeof(System.Net.FtpWebRequest::<CreateConnectionAsync>d__86))]
/// @brief Method CreateConnectionAsync, addr 0xadc0040, size 0xa8, virtual false, abstract: false, final false
inline void CreateConnectionAsync() ;

/// @brief Method DataStreamClosed, addr 0xadc24a4, size 0x80, virtual false, abstract: false, final false
inline void DataStreamClosed(::System::Net::CloseExState  closeState) ;

/// @brief Method EndGetRequestStream, addr 0xadbfbd0, size 0x470, virtual true, abstract: false, final false
inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndGetResponse, addr 0xadbec88, size 0x400, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EnsureFtpWebResponse, addr 0xadbdcf4, size 0x51c, virtual false, abstract: false, final false
inline void EnsureFtpWebResponse(::System::Exception*  exception) ;

/// @brief Method FinishRequestStage, addr 0xadbd32c, size 0x42c, virtual false, abstract: false, final false
inline ::GlobalNamespace::FtpWebRequest_RequestStage FinishRequestStage(::GlobalNamespace::FtpWebRequest_RequestStage  stage) ;

/// @brief Method GetRequestStream, addr 0xadbf088, size 0x600, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetRequestStream() ;

/// @brief Method GetResponse, addr 0xadbcb48, size 0x7d0, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetResponse() ;

static inline ::System::Net::FtpWebRequest* New_ctor() ;

static inline ::System::Net::FtpWebRequest* New_ctor(::System::Uri*  uri) ;

/// @brief Method RequestCallback, addr 0xadb3bfc, size 0x10, virtual false, abstract: false, final false
inline void RequestCallback(::System::Object*  obj) ;

/// @brief Method SetException, addr 0xadbe210, size 0x3b8, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SubmitRequest, addr 0xadbd758, size 0x59c, virtual false, abstract: false, final false
inline void SubmitRequest(bool  isAsync) ;

/// @brief Method SyncRequestCallback, addr 0xadc15a4, size 0x424, virtual false, abstract: false, final false
inline void SyncRequestCallback(::System::Object*  obj) ;

/// @brief Method TimedSubmitRequestHelper, addr 0xadc029c, size 0x3d0, virtual false, abstract: false, final false
inline ::System::IO::Stream* TimedSubmitRequestHelper(bool  isAsync) ;

/// @brief Method TimerCallback, addr 0xadc0a30, size 0x10c, virtual false, abstract: false, final false
inline void TimerCallback(::System::Net::TimerThread_Timer*  timer, int32_t  timeNoticed, ::System::Object*  context) ;

/// @brief Method TranslateConnectException, addr 0xadc08c0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Exception* TranslateConnectException(::System::Exception*  e) ;

constexpr bool const& __cordl_internal_get__aborted() const;

constexpr bool& __cordl_internal_get__aborted() ;

constexpr bool const& __cordl_internal_get__async() const;

constexpr bool& __cordl_internal_get__async() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get__authInfo() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get__authInfo() ;

constexpr bool const& __cordl_internal_get__binary() const;

constexpr bool& __cordl_internal_get__binary() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__clientCertificates() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__clientCertificates() ;

constexpr ::System::Net::FtpControlStream* const& __cordl_internal_get__connection() const;

constexpr ::System::Net::FtpControlStream*& __cordl_internal_get__connection() ;

constexpr ::StringW const& __cordl_internal_get__connectionGroupName() const;

constexpr ::StringW& __cordl_internal_get__connectionGroupName() ;

constexpr int64_t const& __cordl_internal_get__contentLength() const;

constexpr int64_t& __cordl_internal_get__contentLength() ;

constexpr int64_t const& __cordl_internal_get__contentOffset() const;

constexpr int64_t& __cordl_internal_get__contentOffset() ;

constexpr bool const& __cordl_internal_get__enableSsl() const;

constexpr bool& __cordl_internal_get__enableSsl() ;

constexpr ::System::Exception* const& __cordl_internal_get__exception() const;

constexpr ::System::Exception*& __cordl_internal_get__exception() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__ftpRequestHeaders() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__ftpRequestHeaders() ;

constexpr ::System::Net::FtpWebResponse* const& __cordl_internal_get__ftpWebResponse() const;

constexpr ::System::Net::FtpWebResponse*& __cordl_internal_get__ftpWebResponse() ;

constexpr bool const& __cordl_internal_get__getRequestStreamStarted() const;

constexpr bool& __cordl_internal_get__getRequestStreamStarted() ;

constexpr bool const& __cordl_internal_get__getResponseStarted() const;

constexpr bool& __cordl_internal_get__getResponseStarted() ;

constexpr ::System::Net::FtpMethodInfo* const& __cordl_internal_get__methodInfo() const;

constexpr ::System::Net::FtpMethodInfo*& __cordl_internal_get__methodInfo() ;

constexpr bool const& __cordl_internal_get__onceFailed() const;

constexpr bool& __cordl_internal_get__onceFailed() ;

constexpr bool const& __cordl_internal_get__passive() const;

constexpr bool& __cordl_internal_get__passive() ;

constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get__readAsyncResult() const;

constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get__readAsyncResult() ;

constexpr int32_t const& __cordl_internal_get__readWriteTimeout() const;

constexpr int32_t& __cordl_internal_get__readWriteTimeout() ;

constexpr int32_t const& __cordl_internal_get__remainingTimeout() const;

constexpr int32_t& __cordl_internal_get__remainingTimeout() ;

constexpr ::StringW const& __cordl_internal_get__renameTo() const;

constexpr ::StringW& __cordl_internal_get__renameTo() ;

constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get__requestCompleteAsyncResult() const;

constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get__requestCompleteAsyncResult() ;

constexpr ::GlobalNamespace::FtpWebRequest_RequestStage const& __cordl_internal_get__requestStage() const;

constexpr ::GlobalNamespace::FtpWebRequest_RequestStage& __cordl_internal_get__requestStage() ;

constexpr ::System::Net::ServicePoint* const& __cordl_internal_get__servicePoint() const;

constexpr ::System::Net::ServicePoint*& __cordl_internal_get__servicePoint() ;

constexpr ::System::DateTime const& __cordl_internal_get__startTime() const;

constexpr ::System::DateTime& __cordl_internal_get__startTime() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::System::Object* const& __cordl_internal_get__syncObject() const;

constexpr ::System::Object*& __cordl_internal_get__syncObject() ;

constexpr bool const& __cordl_internal_get__timedOut() const;

constexpr bool& __cordl_internal_get__timedOut() ;

constexpr int32_t const& __cordl_internal_get__timeout() const;

constexpr int32_t& __cordl_internal_get__timeout() ;

constexpr ::System::Net::TimerThread_Callback* const& __cordl_internal_get__timerCallback() const;

constexpr ::System::Net::TimerThread_Callback*& __cordl_internal_get__timerCallback() ;

constexpr ::System::Net::TimerThread_Queue* const& __cordl_internal_get__timerQueue() const;

constexpr ::System::Net::TimerThread_Queue*& __cordl_internal_get__timerQueue() ;

constexpr ::System::Uri* const& __cordl_internal_get__uri() const;

constexpr ::System::Uri*& __cordl_internal_get__uri() ;

constexpr ::System::Net::ContextAwareResult* const& __cordl_internal_get__writeAsyncResult() const;

constexpr ::System::Net::ContextAwareResult*& __cordl_internal_get__writeAsyncResult() ;

constexpr void __cordl_internal_set__aborted(bool  value) ;

constexpr void __cordl_internal_set__async(bool  value) ;

constexpr void __cordl_internal_set__authInfo(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set__binary(bool  value) ;

constexpr void __cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set__connection(::System::Net::FtpControlStream*  value) ;

constexpr void __cordl_internal_set__connectionGroupName(::StringW  value) ;

constexpr void __cordl_internal_set__contentLength(int64_t  value) ;

constexpr void __cordl_internal_set__contentOffset(int64_t  value) ;

constexpr void __cordl_internal_set__enableSsl(bool  value) ;

constexpr void __cordl_internal_set__exception(::System::Exception*  value) ;

constexpr void __cordl_internal_set__ftpRequestHeaders(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__ftpWebResponse(::System::Net::FtpWebResponse*  value) ;

constexpr void __cordl_internal_set__getRequestStreamStarted(bool  value) ;

constexpr void __cordl_internal_set__getResponseStarted(bool  value) ;

constexpr void __cordl_internal_set__methodInfo(::System::Net::FtpMethodInfo*  value) ;

constexpr void __cordl_internal_set__onceFailed(bool  value) ;

constexpr void __cordl_internal_set__passive(bool  value) ;

constexpr void __cordl_internal_set__readAsyncResult(::System::Net::LazyAsyncResult*  value) ;

constexpr void __cordl_internal_set__readWriteTimeout(int32_t  value) ;

constexpr void __cordl_internal_set__remainingTimeout(int32_t  value) ;

constexpr void __cordl_internal_set__renameTo(::StringW  value) ;

constexpr void __cordl_internal_set__requestCompleteAsyncResult(::System::Net::LazyAsyncResult*  value) ;

constexpr void __cordl_internal_set__requestStage(::GlobalNamespace::FtpWebRequest_RequestStage  value) ;

constexpr void __cordl_internal_set__servicePoint(::System::Net::ServicePoint*  value) ;

constexpr void __cordl_internal_set__startTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__syncObject(::System::Object*  value) ;

constexpr void __cordl_internal_set__timedOut(bool  value) ;

constexpr void __cordl_internal_set__timeout(int32_t  value) ;

constexpr void __cordl_internal_set__timerCallback(::System::Net::TimerThread_Callback*  value) ;

constexpr void __cordl_internal_set__timerQueue(::System::Net::TimerThread_Queue*  value) ;

constexpr void __cordl_internal_set__uri(::System::Uri*  value) ;

constexpr void __cordl_internal_set__writeAsyncResult(::System::Net::ContextAwareResult*  value) ;

/// @brief Method .ctor, addr 0xadc2644, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xadbc740, size 0x408, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri) ;

static inline ::System::Net::TimerThread_Queue* getStaticF_s_DefaultTimerQueue() ;

static inline ::System::Net::NetworkCredential* getStaticF_s_defaultFtpNetworkCredential() ;

/// @brief Method get_Aborted, addr 0xadbc738, size 0x8, virtual false, abstract: false, final false
inline bool get_Aborted() ;

/// @brief Method get_CachePolicy, addr 0xadc1ed4, size 0x4c, virtual true, abstract: false, final false
inline ::System::Net::Cache::RequestCachePolicy* get_CachePolicy() ;

/// @brief Method get_ClientCertificates, addr 0xadb6860, size 0xfc, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method get_ConnectionGroupName, addr 0xadbc64c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_ConnectionGroupName() ;

/// @brief Method get_ContentLength, addr 0xadbc5d4, size 0x8, virtual true, abstract: false, final false
inline int64_t get_ContentLength() ;

/// @brief Method get_ContentOffset, addr 0xadbc52c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ContentOffset() ;

/// @brief Method get_ContentType, addr 0xadc21a0, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_Credentials, addr 0xadbc214, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_DefaultCachePolicy, addr 0xadbbefc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy() ;

/// @brief Method get_EnableSsl, addr 0xadc20b8, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableSsl() ;

/// @brief Method get_Headers, addr 0xadc2128, size 0x70, virtual true, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method get_InUse, addr 0xadbc114, size 0x20, virtual false, abstract: false, final false
inline bool get_InUse() ;

/// @brief Method get_KeepAlive, addr 0xadc1e6c, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepAlive() ;

/// @brief Method get_Method, addr 0xadbbf50, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_Method() ;

/// @brief Method get_MethodInfo, addr 0xadbbef4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::FtpMethodInfo* get_MethodInfo() ;

/// @brief Method get_PreAuthenticate, addr 0xadc2240, size 0x28, virtual true, abstract: false, final false
inline bool get_PreAuthenticate() ;

/// @brief Method get_Proxy, addr 0xadbc5e4, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::IWebProxy* get_Proxy() ;

/// @brief Method get_ReadWriteTimeout, addr 0xadbc464, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ReadWriteTimeout() ;

/// @brief Method get_RemainingTimeout, addr 0xadbc45c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RemainingTimeout() ;

/// @brief Method get_RenameTo, addr 0xadbc134, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RenameTo() ;

/// @brief Method get_RequestUri, addr 0xadbc368, size 0x8, virtual true, abstract: false, final false
inline ::System::Uri* get_RequestUri() ;

/// @brief Method get_ServicePoint, addr 0xadbc6b8, size 0x80, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* get_ServicePoint() ;

/// @brief Method get_Timeout, addr 0xadbc370, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Timeout() ;

/// @brief Method get_TimerQueue, addr 0xadc09b0, size 0x80, virtual false, abstract: false, final false
inline ::System::Net::TimerThread_Queue* get_TimerQueue() ;

/// @brief Method get_UseBinary, addr 0xadc1f80, size 0x8, virtual false, abstract: false, final false
inline bool get_UseBinary() ;

/// @brief Method get_UseDefaultCredentials, addr 0xadc21f0, size 0x28, virtual true, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Method get_UsePassive, addr 0xadc1ff0, size 0x8, virtual false, abstract: false, final false
inline bool get_UsePassive() ;

static inline void setStaticF_s_DefaultTimerQueue(::System::Net::TimerThread_Queue*  value) ;

static inline void setStaticF_s_defaultFtpNetworkCredential(::System::Net::NetworkCredential*  value) ;

/// @brief Method set_CachePolicy, addr 0xadc1f20, size 0x60, virtual true, abstract: false, final false
inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

/// @brief Method set_ClientCertificates, addr 0xadc2060, size 0x58, virtual false, abstract: false, final false
inline void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

/// @brief Method set_ConnectionGroupName, addr 0xadbc654, size 0x64, virtual true, abstract: false, final false
inline void set_ConnectionGroupName(::StringW  value) ;

/// @brief Method set_ContentLength, addr 0xadbc5dc, size 0x8, virtual true, abstract: false, final false
inline void set_ContentLength(int64_t  value) ;

/// @brief Method set_ContentOffset, addr 0xadbc534, size 0xa0, virtual false, abstract: false, final false
inline void set_ContentOffset(int64_t  value) ;

/// @brief Method set_ContentType, addr 0xadc21c8, size 0x28, virtual true, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// @brief Method set_Credentials, addr 0xadbc21c, size 0x14c, virtual true, abstract: false, final false
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_DefaultCachePolicy, addr 0xadbbf4c, size 0x4, virtual false, abstract: false, final false
static inline void set_DefaultCachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

/// @brief Method set_EnableSsl, addr 0xadc20c0, size 0x68, virtual false, abstract: false, final false
inline void set_EnableSsl(bool  value) ;

/// @brief Method set_Headers, addr 0xadc2198, size 0x8, virtual true, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// @brief Method set_KeepAlive, addr 0xadc1e74, size 0x60, virtual false, abstract: false, final false
inline void set_KeepAlive(bool  value) ;

/// @brief Method set_Method, addr 0xadbbf68, size 0x1ac, virtual true, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// @brief Method set_PreAuthenticate, addr 0xadc2268, size 0x28, virtual true, abstract: false, final false
inline void set_PreAuthenticate(bool  value) ;

/// @brief Method set_Proxy, addr 0xadbc5ec, size 0x60, virtual true, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_ReadWriteTimeout, addr 0xadbc46c, size 0xc0, virtual false, abstract: false, final false
inline void set_ReadWriteTimeout(int32_t  value) ;

/// @brief Method set_RenameTo, addr 0xadbc13c, size 0xd8, virtual false, abstract: false, final false
inline void set_RenameTo(::StringW  value) ;

/// @brief Method set_Timeout, addr 0xadbc378, size 0xe4, virtual true, abstract: false, final false
inline void set_Timeout(int32_t  value) ;

/// @brief Method set_UseBinary, addr 0xadc1f88, size 0x68, virtual false, abstract: false, final false
inline void set_UseBinary(bool  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xadc2218, size 0x28, virtual true, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

/// @brief Method set_UsePassive, addr 0xadc1ff8, size 0x68, virtual false, abstract: false, final false
inline void set_UsePassive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FtpWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FtpWebRequest(FtpWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FtpWebRequest(FtpWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10434};

/// @brief Field s_DefaultTimeout offset 0xffffffff size 0x4
static constexpr int32_t  s_DefaultTimeout{static_cast<int32_t>(0x186a0)};

/// @brief Field _syncObject, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ____syncObject;

/// @brief Field _authInfo, offset: 0x40, size: 0x8, def value: None
 ::System::Net::ICredentials*  ____authInfo;

/// @brief Field _uri, offset: 0x48, size: 0x8, def value: None
 ::System::Uri*  ____uri;

/// @brief Field _methodInfo, offset: 0x50, size: 0x8, def value: None
 ::System::Net::FtpMethodInfo*  ____methodInfo;

/// @brief Field _renameTo, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____renameTo;

/// @brief Field _getRequestStreamStarted, offset: 0x60, size: 0x1, def value: None
 bool  ____getRequestStreamStarted;

/// @brief Field _getResponseStarted, offset: 0x61, size: 0x1, def value: None
 bool  ____getResponseStarted;

/// @brief Field _startTime, offset: 0x68, size: 0x8, def value: None
 ::System::DateTime  ____startTime;

/// @brief Field _timeout, offset: 0x70, size: 0x4, def value: None
 int32_t  ____timeout;

/// @brief Field _remainingTimeout, offset: 0x74, size: 0x4, def value: None
 int32_t  ____remainingTimeout;

/// @brief Field _contentLength, offset: 0x78, size: 0x8, def value: None
 int64_t  ____contentLength;

/// @brief Field _contentOffset, offset: 0x80, size: 0x8, def value: None
 int64_t  ____contentOffset;

/// @brief Field _clientCertificates, offset: 0x88, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ____clientCertificates;

/// @brief Field _passive, offset: 0x90, size: 0x1, def value: None
 bool  ____passive;

/// @brief Field _binary, offset: 0x91, size: 0x1, def value: None
 bool  ____binary;

/// @brief Field _connectionGroupName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____connectionGroupName;

/// @brief Field _servicePoint, offset: 0xa0, size: 0x8, def value: None
 ::System::Net::ServicePoint*  ____servicePoint;

/// @brief Field _async, offset: 0xa8, size: 0x1, def value: None
 bool  ____async;

/// @brief Field _aborted, offset: 0xa9, size: 0x1, def value: None
 bool  ____aborted;

/// @brief Field _timedOut, offset: 0xaa, size: 0x1, def value: None
 bool  ____timedOut;

/// @brief Field _exception, offset: 0xb0, size: 0x8, def value: None
 ::System::Exception*  ____exception;

/// @brief Field _timerQueue, offset: 0xb8, size: 0x8, def value: None
 ::System::Net::TimerThread_Queue*  ____timerQueue;

/// @brief Field _timerCallback, offset: 0xc0, size: 0x8, def value: None
 ::System::Net::TimerThread_Callback*  ____timerCallback;

/// @brief Field _enableSsl, offset: 0xc8, size: 0x1, def value: None
 bool  ____enableSsl;

/// @brief Field _connection, offset: 0xd0, size: 0x8, def value: None
 ::System::Net::FtpControlStream*  ____connection;

/// @brief Field _stream, offset: 0xd8, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _requestStage, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::FtpWebRequest_RequestStage  ____requestStage;

/// @brief Field _onceFailed, offset: 0xe4, size: 0x1, def value: None
 bool  ____onceFailed;

/// @brief Field _ftpRequestHeaders, offset: 0xe8, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____ftpRequestHeaders;

/// @brief Field _ftpWebResponse, offset: 0xf0, size: 0x8, def value: None
 ::System::Net::FtpWebResponse*  ____ftpWebResponse;

/// @brief Field _readWriteTimeout, offset: 0xf8, size: 0x4, def value: None
 int32_t  ____readWriteTimeout;

/// @brief Field _writeAsyncResult, offset: 0x100, size: 0x8, def value: None
 ::System::Net::ContextAwareResult*  ____writeAsyncResult;

/// @brief Field _readAsyncResult, offset: 0x108, size: 0x8, def value: None
 ::System::Net::LazyAsyncResult*  ____readAsyncResult;

/// @brief Field _requestCompleteAsyncResult, offset: 0x110, size: 0x8, def value: None
 ::System::Net::LazyAsyncResult*  ____requestCompleteAsyncResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpWebRequest, ____syncObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____authInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____uri) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____methodInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____renameTo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____getRequestStreamStarted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____getResponseStarted) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____startTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____remainingTimeout) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____contentLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____contentOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____clientCertificates) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____passive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____binary) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____connectionGroupName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____servicePoint) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____async) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____aborted) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timedOut) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____exception) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timerQueue) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timerCallback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____enableSsl) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____connection) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____stream) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____requestStage) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____onceFailed) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____ftpRequestHeaders) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____ftpWebResponse) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____readWriteTimeout) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____writeAsyncResult) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____readAsyncResult) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____requestCompleteAsyncResult) == 0x110, "Offset mismatch!");

static_assert(sizeof(::System::Net::FtpWebRequest) == 0x118, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebRequest/<>c
class CORDL_TYPE FtpWebRequest___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::FtpWebRequest___c*  __9;

/// @brief Field <>9__114_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__114_0, put=setStaticF___9__114_0)) ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>*  __9__114_0;

static inline ::System::Net::FtpWebRequest___c* New_ctor() ;

/// @brief Method .ctor, addr 0xadc2a68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_ClientCertificates>b__114_0, addr 0xadc2a70, size 0x54, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _get_ClientCertificates_b__114_0() ;

static inline ::System::Net::FtpWebRequest___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* getStaticF___9__114_0() ;

static inline void setStaticF___9(::System::Net::FtpWebRequest___c*  value) ;

static inline void setStaticF___9__114_0(::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FtpWebRequest___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FtpWebRequest___c(FtpWebRequest___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FtpWebRequest___c(FtpWebRequest___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::FtpWebRequest___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net
