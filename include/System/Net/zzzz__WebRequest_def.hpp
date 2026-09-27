#pragma once
// IWYU pragma private; include "System/Net/WebRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequest)
namespace System::Collections {
class ArrayList;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Cache {
class RequestCacheProtocol;
}
namespace System::Net::Security {
struct AuthenticationLevel;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class IAutoWebProxy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class ProxyChain;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebProxy;
}
namespace System::Net {
class WebRequest_DesignerWebRequestCreate;
}
namespace System::Net {
class WebRequest_WebProxyWrapperOpaque;
}
namespace System::Net {
class WebRequest_WebProxyWrapper;
}
namespace System::Net {
class WebRequest___c__DisplayClass78_0;
}
namespace System::Net {
class WebRequest___c__DisplayClass79_0;
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
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
namespace System::Security::Principal {
class WindowsIdentity;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
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
class WebRequest;
}
namespace System::Net {
class WebRequest_DesignerWebRequestCreate;
}
namespace System::Net {
class WebRequest_WebProxyWrapper;
}
namespace System::Net {
class WebRequest_WebProxyWrapperOpaque;
}
namespace System::Net {
class WebRequest___c__DisplayClass78_0;
}
namespace System::Net {
class WebRequest___c__DisplayClass79_0;
}
// Write type traits
MARK_REF_T(::System::Net::WebRequest*);
MARK_REF_T(::System::Net::WebRequest_DesignerWebRequestCreate*);
MARK_REF_T(::System::Net::WebRequest_WebProxyWrapper*);
MARK_REF_T(::System::Net::WebRequest_WebProxyWrapperOpaque*);
MARK_REF_T(::System::Net::WebRequest___c__DisplayClass78_0*);
MARK_REF_T(::System::Net::WebRequest___c__DisplayClass79_0*);
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest*, "System.Net", "WebRequest");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest_DesignerWebRequestCreate*, "System.Net", "WebRequest/DesignerWebRequestCreate");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest_WebProxyWrapper*, "System.Net", "WebRequest/WebProxyWrapper");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest_WebProxyWrapperOpaque*, "System.Net", "WebRequest/WebProxyWrapperOpaque");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest___c__DisplayClass78_0*, "System.Net", "WebRequest/<>c__DisplayClass78_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebRequest___c__DisplayClass79_0*, "System.Net", "WebRequest/<>c__DisplayClass79_0");
// Dependencies System.MarshalByRefObject, System.Net.Security.AuthenticationLevel, System.Security.Principal.TokenImpersonationLevel
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest
class CORDL_TYPE WebRequest : public ::System::MarshalByRefObject {
public:
// Declarations
using DesignerWebRequestCreate = ::System::Net::WebRequest_DesignerWebRequestCreate;

using WebProxyWrapper = ::System::Net::WebRequest_WebProxyWrapper;

using WebProxyWrapperOpaque = ::System::Net::WebRequest_WebProxyWrapperOpaque;

using __c__DisplayClass78_0 = ::System::Net::WebRequest___c__DisplayClass78_0;

using __c__DisplayClass79_0 = ::System::Net::WebRequest___c__DisplayClass79_0;

 __declspec(property(get=get_AuthenticationLevel, put=set_AuthenticationLevel)) ::System::Net::Security::AuthenticationLevel  AuthenticationLevel;

 __declspec(property(get=get_CachePolicy, put=set_CachePolicy)) ::System::Net::Cache::RequestCachePolicy*  CachePolicy;

 __declspec(property(get=get_CacheProtocol, put=set_CacheProtocol)) ::System::Net::Cache::RequestCacheProtocol*  CacheProtocol;

 __declspec(property(get=get_ConnectionGroupName, put=set_ConnectionGroupName)) ::StringW  ConnectionGroupName;

 __declspec(property(get=get_ContentLength, put=set_ContentLength)) int64_t  ContentLength;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::StringW  ContentType;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
 __declspec(property(get=get_CreatorInstance)) ::System::Net::IWebRequestCreate*  CreatorInstance;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_ImpersonationLevel, put=set_ImpersonationLevel)) ::System::Security::Principal::TokenImpersonationLevel  ImpersonationLevel;

 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_PreAuthenticate, put=set_PreAuthenticate)) bool  PreAuthenticate;

 __declspec(property(get=get_Proxy, put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_RequestUri)) ::System::Uri*  RequestUri;

 __declspec(property(get=get_Timeout, put=set_Timeout)) int32_t  Timeout;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

/// @brief Field m_AuthenticationLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AuthenticationLevel, put=__cordl_internal_set_m_AuthenticationLevel)) ::System::Net::Security::AuthenticationLevel  m_AuthenticationLevel;

/// @brief Field m_CacheBinding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CacheBinding, put=__cordl_internal_set_m_CacheBinding)) ::System::Net::Cache::RequestCacheBinding*  m_CacheBinding;

/// @brief Field m_CachePolicy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachePolicy, put=__cordl_internal_set_m_CachePolicy)) ::System::Net::Cache::RequestCachePolicy*  m_CachePolicy;

/// @brief Field m_CacheProtocol, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CacheProtocol, put=__cordl_internal_set_m_CacheProtocol)) ::System::Net::Cache::RequestCacheProtocol*  m_CacheProtocol;

/// @brief Field m_ImpersonationLevel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ImpersonationLevel, put=__cordl_internal_set_m_ImpersonationLevel)) ::System::Security::Principal::TokenImpersonationLevel  m_ImpersonationLevel;

/// @brief Field s_DefaultTimerQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultTimerQueue, put=setStaticF_s_DefaultTimerQueue)) ::System::Net::TimerThread_Queue*  s_DefaultTimerQueue;

/// @brief Field s_DefaultWebProxy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultWebProxy, put=setStaticF_s_DefaultWebProxy)) ::System::Net::IWebProxy*  s_DefaultWebProxy;

/// @brief Field s_DefaultWebProxyInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_DefaultWebProxyInitialized, put=setStaticF_s_DefaultWebProxyInitialized)) bool  s_DefaultWebProxyInitialized;

/// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InternalSyncObject, put=setStaticF_s_InternalSyncObject)) ::System::Object*  s_InternalSyncObject;

/// @brief Field s_PrefixList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PrefixList, put=setStaticF_s_PrefixList)) ::System::Collections::ArrayList*  s_PrefixList;

/// @brief Field webRequestCreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_webRequestCreate, put=setStaticF_webRequestCreate)) ::System::Net::WebRequest_DesignerWebRequestCreate*  webRequestCreate;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Abort, addr 0xac6c13c, size 0x28, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method BeginGetRequestStream, addr 0xac6bb54, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginGetResponse, addr 0xac6bb04, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method Create, addr 0xac6a99c, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Net::WebRequest* Create(::System::Uri*  requestUri) ;

/// @brief Method Create, addr 0xac6a494, size 0x298, virtual false, abstract: false, final false
static inline ::System::Net::WebRequest* Create(::System::Uri*  requestUri, bool  useUriBase) ;

/// @brief Method Create, addr 0xac6a8cc, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Net::WebRequest* Create(::StringW  requestUriString) ;

/// @brief Method CreateDefault, addr 0xac6aa74, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Net::WebRequest* CreateDefault(::System::Uri*  requestUri) ;

/// @brief Method CreateHttp, addr 0xac6ac18, size 0x1f8, virtual false, abstract: false, final false
static inline ::System::Net::HttpWebRequest* CreateHttp(::System::Uri*  requestUri) ;

/// @brief Method CreateHttp, addr 0xac6ab4c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Net::HttpWebRequest* CreateHttp(::StringW  requestUriString) ;

/// @brief Method EndGetRequestStream, addr 0xac6bb7c, size 0x28, virtual true, abstract: false, final false
inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndGetResponse, addr 0xac6bb2c, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult*  asyncResult) ;

/// @brief Method GetObjectData, addr 0xac6b544, size 0x4, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetRequestStream, addr 0xac6bab4, size 0x28, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetRequestStream() ;

/// @brief Method GetRequestStreamAsync, addr 0xac6bba4, size 0x29c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync() ;

/// @brief Method GetResponse, addr 0xac6badc, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetResponse() ;

/// @brief Method GetResponseAsync, addr 0xac6be98, size 0x29c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* GetResponseAsync() ;

/// @brief Method GetSystemWebProxy, addr 0xac6c59c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* GetSystemWebProxy() ;

/// @brief Method InternalGetSystemWebProxy, addr 0xac6c5ec, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* InternalGetSystemWebProxy() ;

/// @brief Method InternalSetCachePolicy, addr 0xac6b69c, size 0xd0, virtual false, abstract: false, final false
inline void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy*  policy) ;

static inline ::System::Net::WebRequest* New_ctor() ;

static inline ::System::Net::WebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method PopulatePrefixList, addr 0xac6b2ec, size 0x220, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* PopulatePrefixList() ;

/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Method RegisterPortableWebRequestCreator, addr 0xac6a36c, size 0x4, virtual false, abstract: false, final false
static inline void RegisterPortableWebRequestCreator(::System::Net::IWebRequestCreate*  creator) ;

/// @brief Method RegisterPrefix, addr 0xac6ae10, size 0x470, virtual false, abstract: false, final false
static inline bool RegisterPrefix(::StringW  prefix, ::System::Net::IWebRequestCreate*  creator) ;

/// @brief Method SafeCaptureIdenity, addr 0xac6be48, size 0x50, virtual false, abstract: false, final false
inline ::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity() ;

/// @brief Method SetupCacheProtocol, addr 0xac6c5f4, size 0xe8, virtual false, abstract: false, final false
inline void SetupCacheProtocol(::System::Uri*  uri) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xac6b538, size 0xc, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// [CompilerGenerated]
/// @brief Method <GetRequestStreamAsync>b__78_0, addr 0xac6c9d4, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__78_0() ;

/// [CompilerGenerated]
/// @brief Method <GetResponseAsync>b__79_0, addr 0xac6cac8, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__79_0() ;

constexpr ::System::Net::Security::AuthenticationLevel const& __cordl_internal_get_m_AuthenticationLevel() const;

constexpr ::System::Net::Security::AuthenticationLevel& __cordl_internal_get_m_AuthenticationLevel() ;

constexpr ::System::Net::Cache::RequestCacheBinding* const& __cordl_internal_get_m_CacheBinding() const;

constexpr ::System::Net::Cache::RequestCacheBinding*& __cordl_internal_get_m_CacheBinding() ;

constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get_m_CachePolicy() const;

constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get_m_CachePolicy() ;

constexpr ::System::Net::Cache::RequestCacheProtocol* const& __cordl_internal_get_m_CacheProtocol() const;

constexpr ::System::Net::Cache::RequestCacheProtocol*& __cordl_internal_get_m_CacheProtocol() ;

constexpr ::System::Security::Principal::TokenImpersonationLevel const& __cordl_internal_get_m_ImpersonationLevel() const;

constexpr ::System::Security::Principal::TokenImpersonationLevel& __cordl_internal_get_m_ImpersonationLevel() ;

constexpr void __cordl_internal_set_m_AuthenticationLevel(::System::Net::Security::AuthenticationLevel  value) ;

constexpr void __cordl_internal_set_m_CacheBinding(::System::Net::Cache::RequestCacheBinding*  value) ;

constexpr void __cordl_internal_set_m_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr void __cordl_internal_set_m_CacheProtocol(::System::Net::Cache::RequestCacheProtocol*  value) ;

constexpr void __cordl_internal_set_m_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel  value) ;

/// @brief Method .ctor, addr 0xac6b50c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac6b530, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

static inline ::System::Net::TimerThread_Queue* getStaticF_s_DefaultTimerQueue() ;

static inline ::System::Net::IWebProxy* getStaticF_s_DefaultWebProxy() ;

static inline bool getStaticF_s_DefaultWebProxyInitialized() ;

static inline ::System::Object* getStaticF_s_InternalSyncObject() ;

static inline ::System::Collections::ArrayList* getStaticF_s_PrefixList() ;

static inline ::System::Net::WebRequest_DesignerWebRequestCreate* getStaticF_webRequestCreate() ;

/// @brief Method get_AuthenticationLevel, addr 0xac6c174, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Security::AuthenticationLevel get_AuthenticationLevel() ;

/// @brief Method get_CachePolicy, addr 0xac6b690, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::Cache::RequestCachePolicy* get_CachePolicy() ;

/// @brief Method get_CacheProtocol, addr 0xac6c164, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol() ;

/// @brief Method get_ConnectionGroupName, addr 0xac6b7e4, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_ConnectionGroupName() ;

/// @brief Method get_ContentLength, addr 0xac6b884, size 0x28, virtual true, abstract: false, final false
inline int64_t get_ContentLength() ;

/// @brief Method get_ContentType, addr 0xac6b8d4, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_ContentType() ;

/// @brief Method get_CreatorInstance, addr 0xac6a314, size 0x58, virtual true, abstract: false, final false
inline ::System::Net::IWebRequestCreate* get_CreatorInstance() ;

/// @brief Method get_Credentials, addr 0xac6b924, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_DefaultCachePolicy, addr 0xac6b548, size 0x78, virtual false, abstract: false, final false
static inline ::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy() ;

/// @brief Method get_DefaultTimerQueue, addr 0xac6a43c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::TimerThread_Queue* get_DefaultTimerQueue() ;

/// @brief Method get_DefaultWebProxy, addr 0xac6c4fc, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* get_DefaultWebProxy() ;

/// @brief Method get_Headers, addr 0xac6b834, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method get_ImpersonationLevel, addr 0xac6c184, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Principal::TokenImpersonationLevel get_ImpersonationLevel() ;

/// @brief Method get_InternalDefaultWebProxy, addr 0xac6c194, size 0x1d4, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* get_InternalDefaultWebProxy() ;

/// @brief Method get_InternalSyncObject, addr 0xac6a370, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Object* get_InternalSyncObject() ;

/// @brief Method get_Method, addr 0xac6b76c, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_Method() ;

/// @brief Method get_PreAuthenticate, addr 0xac6ba14, size 0x28, virtual true, abstract: false, final false
inline bool get_PreAuthenticate() ;

/// @brief Method get_PrefixList, addr 0xac6a72c, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* get_PrefixList() ;

/// @brief Method get_Proxy, addr 0xac6b9c4, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::IWebProxy* get_Proxy() ;

/// @brief Method get_RequestUri, addr 0xac6b7bc, size 0x28, virtual true, abstract: false, final false
inline ::System::Uri* get_RequestUri() ;

/// @brief Method get_Timeout, addr 0xac6ba64, size 0x28, virtual true, abstract: false, final false
inline int32_t get_Timeout() ;

/// @brief Method get_UseDefaultCredentials, addr 0xac6b974, size 0x28, virtual true, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_s_DefaultTimerQueue(::System::Net::TimerThread_Queue*  value) ;

static inline void setStaticF_s_DefaultWebProxy(::System::Net::IWebProxy*  value) ;

static inline void setStaticF_s_DefaultWebProxyInitialized(bool  value) ;

static inline void setStaticF_s_InternalSyncObject(::System::Object*  value) ;

static inline void setStaticF_s_PrefixList(::System::Collections::ArrayList*  value) ;

static inline void setStaticF_webRequestCreate(::System::Net::WebRequest_DesignerWebRequestCreate*  value) ;

/// @brief Method set_AuthenticationLevel, addr 0xac6c17c, size 0x8, virtual false, abstract: false, final false
inline void set_AuthenticationLevel(::System::Net::Security::AuthenticationLevel  value) ;

/// @brief Method set_CachePolicy, addr 0xac6b698, size 0x4, virtual true, abstract: false, final false
inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

/// @brief Method set_CacheProtocol, addr 0xac6c16c, size 0x8, virtual false, abstract: false, final false
inline void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol*  value) ;

/// @brief Method set_ConnectionGroupName, addr 0xac6b80c, size 0x28, virtual true, abstract: false, final false
inline void set_ConnectionGroupName(::StringW  value) ;

/// @brief Method set_ContentLength, addr 0xac6b8ac, size 0x28, virtual true, abstract: false, final false
inline void set_ContentLength(int64_t  value) ;

/// @brief Method set_ContentType, addr 0xac6b8fc, size 0x28, virtual true, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

/// @brief Method set_Credentials, addr 0xac6b94c, size 0x28, virtual true, abstract: false, final false
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_DefaultCachePolicy, addr 0xac6b5c0, size 0xd0, virtual false, abstract: false, final false
static inline void set_DefaultCachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

/// @brief Method set_DefaultWebProxy, addr 0xac6c548, size 0x54, virtual false, abstract: false, final false
static inline void set_DefaultWebProxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_Headers, addr 0xac6b85c, size 0x28, virtual true, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// @brief Method set_ImpersonationLevel, addr 0xac6c18c, size 0x8, virtual false, abstract: false, final false
inline void set_ImpersonationLevel(::System::Security::Principal::TokenImpersonationLevel  value) ;

/// @brief Method set_InternalDefaultWebProxy, addr 0xac6c368, size 0x194, virtual false, abstract: false, final false
static inline void set_InternalDefaultWebProxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_Method, addr 0xac6b794, size 0x28, virtual true, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// @brief Method set_PreAuthenticate, addr 0xac6ba3c, size 0x28, virtual true, abstract: false, final false
inline void set_PreAuthenticate(bool  value) ;

/// @brief Method set_PrefixList, addr 0xac6b280, size 0x6c, virtual false, abstract: false, final false
static inline void set_PrefixList(::System::Collections::ArrayList*  value) ;

/// @brief Method set_Proxy, addr 0xac6b9ec, size 0x28, virtual true, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_Timeout, addr 0xac6ba8c, size 0x28, virtual true, abstract: false, final false
inline void set_Timeout(int32_t  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xac6b99c, size 0x28, virtual true, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest(WebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest(WebRequest const& ) = delete;

/// @brief Field DefaultTimeout offset 0xffffffff size 0x4
static constexpr int32_t  DefaultTimeout{static_cast<int32_t>(0x186a0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10568};

/// @brief Field m_AuthenticationLevel, offset: 0x18, size: 0x4, def value: None
 ::System::Net::Security::AuthenticationLevel  ___m_AuthenticationLevel;

/// @brief Field m_ImpersonationLevel, offset: 0x1c, size: 0x4, def value: None
 ::System::Security::Principal::TokenImpersonationLevel  ___m_ImpersonationLevel;

/// @brief Field m_CachePolicy, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Cache::RequestCachePolicy*  ___m_CachePolicy;

/// @brief Field m_CacheProtocol, offset: 0x28, size: 0x8, def value: None
 ::System::Net::Cache::RequestCacheProtocol*  ___m_CacheProtocol;

/// @brief Field m_CacheBinding, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Cache::RequestCacheBinding*  ___m_CacheBinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest, ___m_AuthenticationLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_ImpersonationLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CachePolicy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheProtocol) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest, ___m_CacheBinding) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebRequest) == 0x38, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/<>c__DisplayClass79_0
class CORDL_TYPE WebRequest___c__DisplayClass79_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebRequest*  __4__this;

/// @brief Field currentUser, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentUser, put=__cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity*  currentUser;

static inline ::System::Net::WebRequest___c__DisplayClass79_0* New_ctor() ;

/// @brief Method <GetResponseAsync>b__1, addr 0xac6d068, size 0x2e8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__1() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Security::Principal::WindowsIdentity* const& __cordl_internal_get_currentUser() const;

constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest*  value) ;

constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity*  value) ;

/// @brief Method .ctor, addr 0xac6c134, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest___c__DisplayClass79_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass79_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest___c__DisplayClass79_0(WebRequest___c__DisplayClass79_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass79_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest___c__DisplayClass79_0(WebRequest___c__DisplayClass79_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10567};

/// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Principal::WindowsIdentity*  ___currentUser;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::System::Net::WebRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass79_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass79_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebRequest___c__DisplayClass79_0) == 0x20, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/<>c__DisplayClass78_0
class CORDL_TYPE WebRequest___c__DisplayClass78_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebRequest*  __4__this;

/// @brief Field currentUser, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentUser, put=__cordl_internal_set_currentUser)) ::System::Security::Principal::WindowsIdentity*  currentUser;

static inline ::System::Net::WebRequest___c__DisplayClass78_0* New_ctor() ;

/// @brief Method <GetRequestStreamAsync>b__1, addr 0xac6cd80, size 0x2e8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__1() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Security::Principal::WindowsIdentity* const& __cordl_internal_get_currentUser() const;

constexpr ::System::Security::Principal::WindowsIdentity*& __cordl_internal_get_currentUser() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebRequest*  value) ;

constexpr void __cordl_internal_set_currentUser(::System::Security::Principal::WindowsIdentity*  value) ;

/// @brief Method .ctor, addr 0xac6be40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest___c__DisplayClass78_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass78_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest___c__DisplayClass78_0(WebRequest___c__DisplayClass78_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest___c__DisplayClass78_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest___c__DisplayClass78_0(WebRequest___c__DisplayClass78_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10566};

/// @brief Field currentUser, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Principal::WindowsIdentity*  ___currentUser;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::System::Net::WebRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass78_0, ___currentUser) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequest___c__DisplayClass78_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebRequest___c__DisplayClass78_0) == 0x20, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.WebRequest::WebProxyWrapperOpaque
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/WebProxyWrapper
class CORDL_TYPE WebRequest_WebProxyWrapper : public ::System::Net::WebRequest_WebProxyWrapperOpaque {
public:
// Declarations
 __declspec(property(get=get_WebProxy)) ::System::Net::WebProxy*  WebProxy;

static inline ::System::Net::WebRequest_WebProxyWrapper* New_ctor(::System::Net::WebProxy*  webProxy) ;

/// @brief Method .ctor, addr 0xac6cd48, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebProxy*  webProxy) ;

/// @brief Method get_WebProxy, addr 0xac6cd78, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebProxy* get_WebProxy() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest_WebProxyWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_WebProxyWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest_WebProxyWrapper(WebRequest_WebProxyWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_WebProxyWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest_WebProxyWrapper(WebRequest_WebProxyWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequest_WebProxyWrapper) == 0x18, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/WebProxyWrapperOpaque
class CORDL_TYPE WebRequest_WebProxyWrapperOpaque : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

/// @brief Field webProxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_webProxy, put=__cordl_internal_set_webProxy)) ::System::Net::WebProxy*  webProxy;

/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr operator  ::System::Net::IAutoWebProxy*() noexcept;

/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Method GetProxies, addr 0xac6cca0, size 0xa8, virtual true, abstract: false, final true
inline ::System::Net::ProxyChain* GetProxies(::System::Uri*  destination) ;

/// @brief Method GetProxy, addr 0xac6cc40, size 0x18, virtual true, abstract: false, final true
inline ::System::Uri* GetProxy(::System::Uri*  destination) ;

/// @brief Method IsBypassed, addr 0xac6cc58, size 0x18, virtual true, abstract: false, final true
inline bool IsBypassed(::System::Uri*  host) ;

static inline ::System::Net::WebRequest_WebProxyWrapperOpaque* New_ctor(::System::Net::WebProxy*  webProxy) ;

constexpr ::System::Net::WebProxy* const& __cordl_internal_get_webProxy() const;

constexpr ::System::Net::WebProxy*& __cordl_internal_get_webProxy() ;

constexpr void __cordl_internal_set_webProxy(::System::Net::WebProxy*  value) ;

/// @brief Method .ctor, addr 0xac6cc10, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebProxy*  webProxy) ;

/// @brief Method get_Credentials, addr 0xac6cc70, size 0x18, virtual true, abstract: false, final true
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* i___System__Net__IAutoWebProxy() noexcept;

/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

/// @brief Method set_Credentials, addr 0xac6cc88, size 0x18, virtual true, abstract: false, final true
inline void set_Credentials(::System::Net::ICredentials*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest_WebProxyWrapperOpaque() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_WebProxyWrapperOpaque", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest_WebProxyWrapperOpaque(WebRequest_WebProxyWrapperOpaque && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_WebProxyWrapperOpaque", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest_WebProxyWrapperOpaque(WebRequest_WebProxyWrapperOpaque const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10564};

/// @brief Field webProxy, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebProxy*  ___webProxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequest_WebProxyWrapperOpaque, ___webProxy) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebRequest_WebProxyWrapperOpaque) == 0x18, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequest/DesignerWebRequestCreate
class CORDL_TYPE WebRequest_DesignerWebRequestCreate : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr operator  ::System::Net::IWebRequestCreate*() noexcept;

/// @brief Method Create, addr 0xac6cbbc, size 0x54, virtual true, abstract: false, final true
inline ::System::Net::WebRequest* Create(::System::Uri*  uri) ;

static inline ::System::Net::WebRequest_DesignerWebRequestCreate* New_ctor() ;

/// @brief Method .ctor, addr 0xac6c9cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Net::IWebRequestCreate"
constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequest_DesignerWebRequestCreate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_DesignerWebRequestCreate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequest_DesignerWebRequestCreate(WebRequest_DesignerWebRequestCreate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequest_DesignerWebRequestCreate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequest_DesignerWebRequestCreate(WebRequest_DesignerWebRequestCreate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebRequest_DesignerWebRequestCreate) == 0x10, "Size mismatch!");

} // namespace end def System::Net
