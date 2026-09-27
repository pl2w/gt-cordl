#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequest)
namespace GlobalNamespace {
struct UnityWebRequest_Result;
}
namespace GlobalNamespace {
struct UnityWebRequest_UnityWebRequestError;
}
namespace GlobalNamespace {
struct UnityWebRequest_UnityWebRequestMethod;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Uri;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest_BindingsMarshaller;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequest_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::UnityWebRequest*);
MARK_REF_T(::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UnityWebRequest*, "UnityEngine.Networking", "UnityWebRequest");
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*, "UnityEngine.Networking", "UnityWebRequest/BindingsMarshaller");
// [NativeHeader("Modules/UnityWebRequest/Public/UnityWebRequest.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequest
class CORDL_TYPE UnityWebRequest : public ::System::Object {
public:
// Declarations
using Result = ::GlobalNamespace::UnityWebRequest_Result;

using UnityWebRequestError = ::GlobalNamespace::UnityWebRequest_UnityWebRequestError;

using UnityWebRequestMethod = ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod;

using BindingsMarshaller = ::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller;

/// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField, put=__cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField)) bool  _disposeCertificateHandlerOnDispose_k__BackingField;

/// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField, put=__cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField)) bool  _disposeDownloadHandlerOnDispose_k__BackingField;

/// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField, put=__cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField)) bool  _disposeUploadHandlerOnDispose_k__BackingField;

 __declspec(property(get=get_certificateHandler, put=set_certificateHandler)) ::UnityEngine::Networking::CertificateHandler*  certificateHandler;

 __declspec(property(get=get_disposeCertificateHandlerOnDispose, put=set_disposeCertificateHandlerOnDispose)) bool  disposeCertificateHandlerOnDispose;

 __declspec(property(get=get_disposeDownloadHandlerOnDispose, put=set_disposeDownloadHandlerOnDispose)) bool  disposeDownloadHandlerOnDispose;

 __declspec(property(get=get_disposeUploadHandlerOnDispose, put=set_disposeUploadHandlerOnDispose)) bool  disposeUploadHandlerOnDispose;

 __declspec(property(get=get_downloadHandler, put=set_downloadHandler)) ::UnityEngine::Networking::DownloadHandler*  downloadHandler;

 __declspec(property(get=get_downloadedBytes)) uint64_t  downloadedBytes;

 __declspec(property(get=get_error)) ::StringW  error;

 __declspec(property(get=get_isDone)) bool  isDone;

/// @brief [Obsolete("UnityWebRequest.isHttpError is deprecated. Use (UnityWebRequest.result == UnityWebRequest.Result.ProtocolError) instead.", false)]
 __declspec(property(get=get_isHttpError)) bool  isHttpError;

 __declspec(property(get=get_isModifiable)) bool  isModifiable;

/// @brief [Obsolete("UnityWebRequest.isNetworkError is deprecated. Use (UnityWebRequest.result == UnityWebRequest.Result.ConnectionError) instead.", false)]
 __declspec(property(get=get_isNetworkError)) bool  isNetworkError;

/// @brief Field m_CertificateHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CertificateHandler, put=__cordl_internal_set_m_CertificateHandler)) ::UnityEngine::Networking::CertificateHandler*  m_CertificateHandler;

/// @brief Field m_DownloadHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DownloadHandler, put=__cordl_internal_set_m_DownloadHandler)) ::UnityEngine::Networking::DownloadHandler*  m_DownloadHandler;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field m_UploadHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UploadHandler, put=__cordl_internal_set_m_UploadHandler)) ::UnityEngine::Networking::UploadHandler*  m_UploadHandler;

/// @brief Field m_Uri, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Uri, put=__cordl_internal_set_m_Uri)) ::System::Uri*  m_Uri;

 __declspec(property(get=get_method, put=set_method)) ::StringW  method;

 __declspec(property(put=set_redirectLimit)) int32_t  redirectLimit;

 __declspec(property(get=get_responseCode)) int64_t  responseCode;

 __declspec(property(get=get_result)) ::GlobalNamespace::UnityWebRequest_Result  result;

 __declspec(property(put=set_timeout)) int32_t  timeout;

 __declspec(property(get=get_uploadHandler, put=set_uploadHandler)) ::UnityEngine::Networking::UploadHandler*  uploadHandler;

 __declspec(property(get=get_uri, put=set_uri)) ::System::Uri*  uri;

 __declspec(property(get=get_url, put=set_url)) ::StringW  url;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method Abort, addr 0xb929020, size 0x50, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method Abort_Injected, addr 0xb9299d0, size 0x3c, virtual false, abstract: false, final false
static inline void Abort_Injected(::System::IntPtr  _unity_self) ;

/// [NativeThrows]
/// @brief Method BeginWebRequest, addr 0xb9298f8, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest() ;

/// @brief Method BeginWebRequest_Injected, addr 0xb92995c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr BeginWebRequest_Injected(::System::IntPtr  _unity_self) ;

/// [NativeThrows]
/// @brief Method Create, addr 0xb928f44, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr Create() ;

/// @brief Method Dispose, addr 0xb929878, size 0x68, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeHandlers, addr 0xb92980c, size 0x6c, virtual false, abstract: false, final false
inline void DisposeHandlers() ;

/// @brief Method EscapeURL, addr 0xb92c368, size 0x20, virtual false, abstract: false, final false
static inline ::StringW EscapeURL(::StringW  s) ;

/// @brief Method EscapeURL, addr 0xb92c388, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW EscapeURL(::StringW  s, ::System::Text::Encoding*  e) ;

/// @brief Method Finalize, addr 0xb929780, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GenerateBoundary, addr 0xb92c55c, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenerateBoundary() ;

/// @brief Method Get, addr 0xb92b5f4, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* Get(::StringW  uri) ;

/// @brief Method GetCustomMethod, addr 0xb929edc, size 0x100, virtual false, abstract: false, final false
inline ::StringW GetCustomMethod() ;

/// @brief Method GetCustomMethod_Injected, addr 0xb929fdc, size 0x44, virtual false, abstract: false, final false
static inline void GetCustomMethod_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetError, addr 0xb92a0e8, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError GetError() ;

/// @brief Method GetError_Injected, addr 0xb92a138, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError GetError_Injected(::System::IntPtr  _unity_self) ;

/// [VisibleToOtherModules]
/// @brief Method GetHTTPStatusString, addr 0xb928e04, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetHTTPStatusString(int64_t  responseCode) ;

/// @brief Method GetHTTPStatusString_Injected, addr 0xb928ed0, size 0x44, virtual false, abstract: false, final false
static inline void GetHTTPStatusString_Injected(int64_t  responseCode, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetMethod, addr 0xb929e50, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod GetMethod() ;

/// @brief Method GetMethod_Injected, addr 0xb929ea0, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod GetMethod_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetResponseHeader, addr 0xb92ad3c, size 0x1fc, virtual false, abstract: false, final false
inline ::StringW GetResponseHeader(::StringW  name) ;

/// @brief Method GetResponseHeaderKeys, addr 0xb92af8c, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetResponseHeaderKeys() ;

/// @brief Method GetResponseHeaderKeys_Injected, addr 0xb92afdc, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetResponseHeaderKeys_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetResponseHeader_Injected, addr 0xb92af38, size 0x54, virtual false, abstract: false, final false
static inline void GetResponseHeader_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetResponseHeaders, addr 0xb92b018, size 0x180, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetResponseHeaders() ;

/// @brief Method GetUrl, addr 0xb92a2d8, size 0x100, virtual false, abstract: false, final false
inline ::StringW GetUrl() ;

/// @brief Method GetUrl_Injected, addr 0xb92a500, size 0x44, virtual false, abstract: false, final false
static inline void GetUrl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [NativeMethod(IsThreadSafe = true)]
/// [NativeConditional("ENABLE_UNITYWEBREQUEST")]
/// @brief Method GetWebErrorString, addr 0xb928cf4, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetWebErrorString(::GlobalNamespace::UnityWebRequest_UnityWebRequestError  err) ;

/// @brief Method GetWebErrorString_Injected, addr 0xb928dc0, size 0x44, virtual false, abstract: false, final false
static inline void GetWebErrorString_Injected(::GlobalNamespace::UnityWebRequest_UnityWebRequestError  err, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method InternalDestroy, addr 0xb928ff8, size 0x28, virtual false, abstract: false, final false
inline void InternalDestroy() ;

/// @brief Method InternalSetCustomMethod, addr 0xb929d94, size 0xbc, virtual false, abstract: false, final false
inline void InternalSetCustomMethod(::StringW  customMethodName) ;

/// @brief Method InternalSetDefaults, addr 0xb929070, size 0x14, virtual false, abstract: false, final false
inline void InternalSetDefaults() ;

/// @brief Method InternalSetMethod, addr 0xb929aa8, size 0xbc, virtual false, abstract: false, final false
inline void InternalSetMethod(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType) ;

/// [NativeMethod("SetRequestHeader")]
/// @brief Method InternalSetRequestHeader, addr 0xb92a94c, size 0x26c, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError InternalSetRequestHeader(::StringW  name, ::StringW  value) ;

/// @brief Method InternalSetRequestHeader_Injected, addr 0xb92abb8, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError InternalSetRequestHeader_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method InternalSetUrl, addr 0xb92a3d8, size 0xbc, virtual false, abstract: false, final false
inline void InternalSetUrl(::StringW  url) ;

static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor() ;

static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::System::Uri*  uri, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler) ;

static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW  url) ;

static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW  url, ::StringW  method) ;

static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW  url, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler) ;

/// @brief Method Post, addr 0xb92b9c4, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  uri, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary) ;

/// @brief Method Post, addr 0xb92b7fc, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  uri, ::StringW  postData, ::StringW  contentType) ;

/// @brief Method Put, addr 0xb92b698, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UnityWebRequest* Put(::StringW  uri, ::ArrayW<uint8_t>  bodyData) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method Release, addr 0xb928f6c, size 0x50, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Release_Injected, addr 0xb928fbc, size 0x3c, virtual false, abstract: false, final false
static inline void Release_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SendWebRequest, addr 0xb929998, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest() ;

/// @brief Method SerializeFormSections, addr 0xb92bba8, size 0x7c0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary) ;

/// @brief Method SetCertificateHandler, addr 0xb92b2e0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetCertificateHandler(::UnityEngine::Networking::CertificateHandler*  ch) ;

/// @brief Method SetCertificateHandler_Injected, addr 0xb92b340, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetCertificateHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  ch) ;

/// @brief Method SetCustomMethod, addr 0xb929bb4, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetCustomMethod(::StringW  customMethodName) ;

/// @brief Method SetCustomMethod_Injected, addr 0xb929d50, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetCustomMethod_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  customMethodName) ;

/// @brief Method SetDownloadHandler, addr 0xb92b23c, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetDownloadHandler(::UnityEngine::Networking::DownloadHandler*  dh) ;

/// @brief Method SetDownloadHandler_Injected, addr 0xb92b29c, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetDownloadHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dh) ;

/// @brief Method SetMethod, addr 0xb929a0c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetMethod(::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType) ;

/// @brief Method SetMethod_Injected, addr 0xb929a64, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetMethod_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::UnityWebRequest_UnityWebRequestMethod  methodType) ;

/// [NativeThrows]
/// @brief Method SetRedirectLimitFromScripting, addr 0xb92a8ac, size 0x58, virtual false, abstract: false, final false
inline void SetRedirectLimitFromScripting(int32_t  limit) ;

/// @brief Method SetRedirectLimitFromScripting_Injected, addr 0xb92a904, size 0x44, virtual false, abstract: false, final false
static inline void SetRedirectLimitFromScripting_Injected(::System::IntPtr  _unity_self, int32_t  limit) ;

/// @brief Method SetRequestHeader, addr 0xb92ac0c, size 0x130, virtual false, abstract: false, final false
inline void SetRequestHeader(::StringW  name, ::StringW  value) ;

/// @brief Method SetTimeoutMsec, addr 0xb92b44c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetTimeoutMsec(int32_t  timeout) ;

/// @brief Method SetTimeoutMsec_Injected, addr 0xb92b4a4, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetTimeoutMsec_Injected(::System::IntPtr  _unity_self, int32_t  timeout) ;

/// @brief Method SetUploadHandler, addr 0xb92b198, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetUploadHandler(::UnityEngine::Networking::UploadHandler*  uh) ;

/// @brief Method SetUploadHandler_Injected, addr 0xb92b1f8, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetUploadHandler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  uh) ;

/// @brief Method SetUrl, addr 0xb92a544, size 0x19c, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetUrl(::StringW  url) ;

/// @brief Method SetUrl_Injected, addr 0xb92a6e0, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_UnityWebRequestError SetUrl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url) ;

/// @brief Method SetupPost, addr 0xb92ba5c, size 0x14c, virtual false, abstract: false, final false
static inline void SetupPost(::UnityEngine::Networking::UnityWebRequest*  request, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  multipartFormSections, ::ArrayW<uint8_t>  boundary) ;

/// @brief Method SetupPost, addr 0xb92b894, size 0x124, virtual false, abstract: false, final false
static inline void SetupPost(::UnityEngine::Networking::UnityWebRequest*  request, ::StringW  postData, ::StringW  contentType) ;

/// @brief Method UnEscapeURL, addr 0xb92c460, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UnEscapeURL(::StringW  s) ;

/// @brief Method UnEscapeURL, addr 0xb92c480, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW UnEscapeURL(::StringW  s, ::System::Text::Encoding*  e) ;

constexpr bool const& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() ;

constexpr ::UnityEngine::Networking::CertificateHandler* const& __cordl_internal_get_m_CertificateHandler() const;

constexpr ::UnityEngine::Networking::CertificateHandler*& __cordl_internal_get_m_CertificateHandler() ;

constexpr ::UnityEngine::Networking::DownloadHandler* const& __cordl_internal_get_m_DownloadHandler() const;

constexpr ::UnityEngine::Networking::DownloadHandler*& __cordl_internal_get_m_DownloadHandler() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr ::UnityEngine::Networking::UploadHandler* const& __cordl_internal_get_m_UploadHandler() const;

constexpr ::UnityEngine::Networking::UploadHandler*& __cordl_internal_get_m_UploadHandler() ;

constexpr ::System::Uri* const& __cordl_internal_get_m_Uri() const;

constexpr ::System::Uri*& __cordl_internal_get_m_Uri() ;

constexpr void __cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler*  value) ;

constexpr void __cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler*  value) ;

constexpr void __cordl_internal_set_m_Uri(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0xb929084, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb9295f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler) ;

/// @brief Method .ctor, addr 0xb9290d8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  url) ;

/// @brief Method .ctor, addr 0xb9291c0, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::StringW  method) ;

/// @brief Method .ctor, addr 0xb9293c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::StringW  method, ::UnityEngine::Networking::DownloadHandler*  downloadHandler, ::UnityEngine::Networking::UploadHandler*  uploadHandler) ;

/// @brief Method get_certificateHandler, addr 0xb9298f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::CertificateHandler* get_certificateHandler() ;

/// [CompilerGenerated]
/// @brief Method get_disposeCertificateHandlerOnDispose, addr 0xb928f14, size 0x8, virtual false, abstract: false, final false
inline bool get_disposeCertificateHandlerOnDispose() ;

/// [CompilerGenerated]
/// @brief Method get_disposeDownloadHandlerOnDispose, addr 0xb928f24, size 0x8, virtual false, abstract: false, final false
inline bool get_disposeDownloadHandlerOnDispose() ;

/// [CompilerGenerated]
/// @brief Method get_disposeUploadHandlerOnDispose, addr 0xb928f34, size 0x8, virtual false, abstract: false, final false
inline bool get_disposeUploadHandlerOnDispose() ;

/// @brief Method get_downloadHandler, addr 0xb9298e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::DownloadHandler* get_downloadHandler() ;

/// @brief Method get_downloadedBytes, addr 0xb92a820, size 0x50, virtual false, abstract: false, final false
inline uint64_t get_downloadedBytes() ;

/// @brief Method get_downloadedBytes_Injected, addr 0xb92a870, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t get_downloadedBytes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_error, addr 0xb92a174, size 0xc0, virtual false, abstract: false, final false
inline ::StringW get_error() ;

/// @brief Method get_isDone, addr 0xb92a79c, size 0x18, virtual false, abstract: false, final false
inline bool get_isDone() ;

/// @brief Method get_isHttpError, addr 0xb92a7cc, size 0x18, virtual false, abstract: false, final false
inline bool get_isHttpError() ;

/// [NativeMethod("IsModifiable")]
/// @brief Method get_isModifiable, addr 0xb929b64, size 0x50, virtual false, abstract: false, final false
inline bool get_isModifiable() ;

/// @brief Method get_isModifiable_Injected, addr 0xb92a760, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isModifiable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isNetworkError, addr 0xb92a7b4, size 0x18, virtual false, abstract: false, final false
inline bool get_isNetworkError() ;

/// @brief Method get_method, addr 0xb92a020, size 0xc8, virtual false, abstract: false, final false
inline ::StringW get_method() ;

/// @brief Method get_responseCode, addr 0xb92a284, size 0x50, virtual false, abstract: false, final false
inline int64_t get_responseCode() ;

/// @brief Method get_responseCode_Injected, addr 0xb92a724, size 0x3c, virtual false, abstract: false, final false
static inline int64_t get_responseCode_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetResult")]
/// @brief Method get_result, addr 0xb92a234, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::UnityWebRequest_Result get_result() ;

/// @brief Method get_result_Injected, addr 0xb92a7e4, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityWebRequest_Result get_result_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_uploadHandler, addr 0xb9298e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UploadHandler* get_uploadHandler() ;

/// @brief Method get_uri, addr 0xb92a494, size 0x6c, virtual false, abstract: false, final false
inline ::System::Uri* get_uri() ;

/// @brief Method get_url, addr 0xb92a2d4, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_url() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_certificateHandler, addr 0xb92b384, size 0xc8, virtual false, abstract: false, final false
inline void set_certificateHandler(::UnityEngine::Networking::CertificateHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_disposeCertificateHandlerOnDispose, addr 0xb928f1c, size 0x8, virtual false, abstract: false, final false
inline void set_disposeCertificateHandlerOnDispose(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_disposeDownloadHandlerOnDispose, addr 0xb928f2c, size 0x8, virtual false, abstract: false, final false
inline void set_disposeDownloadHandlerOnDispose(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_disposeUploadHandlerOnDispose, addr 0xb928f3c, size 0x8, virtual false, abstract: false, final false
inline void set_disposeUploadHandlerOnDispose(bool  value) ;

/// @brief Method set_downloadHandler, addr 0xb929460, size 0xc8, virtual false, abstract: false, final false
inline void set_downloadHandler(::UnityEngine::Networking::DownloadHandler*  value) ;

/// @brief Method set_method, addr 0xb929238, size 0x188, virtual false, abstract: false, final false
inline void set_method(::StringW  value) ;

/// @brief Method set_redirectLimit, addr 0xb92a948, size 0x4, virtual false, abstract: false, final false
inline void set_redirectLimit(int32_t  value) ;

/// @brief Method set_timeout, addr 0xb92b4e8, size 0x10c, virtual false, abstract: false, final false
inline void set_timeout(int32_t  value) ;

/// @brief Method set_uploadHandler, addr 0xb929528, size 0xc8, virtual false, abstract: false, final false
inline void set_uploadHandler(::UnityEngine::Networking::UploadHandler*  value) ;

/// @brief Method set_uri, addr 0xb929690, size 0xf0, virtual false, abstract: false, final false
inline void set_uri(::System::Uri*  value) ;

/// @brief Method set_url, addr 0xb929138, size 0x88, virtual false, abstract: false, final false
inline void set_url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequest(UnityWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequest(UnityWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31725};

/// @brief Field kHttpVerbCREATE offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbCREATE{u"CREATE"};

/// @brief Field kHttpVerbDELETE offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbDELETE{u"DELETE"};

/// @brief Field kHttpVerbGET offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbGET{u"GET"};

/// @brief Field kHttpVerbHEAD offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbHEAD{u"HEAD"};

/// @brief Field kHttpVerbPOST offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbPOST{u"POST"};

/// @brief Field kHttpVerbPUT offset 0xffffffff size 0x8
static constexpr ::ConstString  kHttpVerbPUT{u"PUT"};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_DownloadHandler, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::DownloadHandler*  ___m_DownloadHandler;

/// @brief Field m_UploadHandler, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UploadHandler*  ___m_UploadHandler;

/// @brief Field m_CertificateHandler, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::CertificateHandler*  ___m_CertificateHandler;

/// @brief Field m_Uri, offset: 0x30, size: 0x8, def value: None
 ::System::Uri*  ___m_Uri;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____disposeCertificateHandlerOnDispose_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____disposeDownloadHandlerOnDispose_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset: 0x3a, size: 0x1, def value: None
 bool  ____disposeUploadHandlerOnDispose_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_DownloadHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_UploadHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_CertificateHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeCertificateHandlerOnDispose_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeDownloadHandlerOnDispose_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeUploadHandlerOnDispose_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Networking
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequest/BindingsMarshaller
class CORDL_TYPE UnityWebRequest_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb92c604, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequest_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequest_BindingsMarshaller(UnityWebRequest_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequest_BindingsMarshaller(UnityWebRequest_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Networking
