#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabWebRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabWebRequest)
namespace PlayFab::Internal {
class CallRequestContainer;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass21_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass22_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass23_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass30_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass31_0;
}
namespace PlayFab {
class IPlayFabPlugin;
}
namespace PlayFab {
class ITransportPlugin;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net {
class WebResponse;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::Internal {
class PlayFabWebRequest;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass21_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass22_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass23_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass30_0;
}
namespace PlayFab::Internal {
class PlayFabWebRequest___c__DisplayClass31_0;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest*);
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*);
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*);
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*);
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*);
MARK_REF_T(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest*, "PlayFab.Internal", "PlayFabWebRequest");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0*, "PlayFab.Internal", "PlayFabWebRequest/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0*, "PlayFab.Internal", "PlayFabWebRequest/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0*, "PlayFab.Internal", "PlayFabWebRequest/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0*, "PlayFab.Internal", "PlayFabWebRequest/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0*, "PlayFab.Internal", "PlayFabWebRequest/<>c__DisplayClass31_0");
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest
class CORDL_TYPE PlayFabWebRequest : public ::System::Object {
public:
// Declarations
using __c__DisplayClass21_0 = ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0;

using __c__DisplayClass22_0 = ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0;

using __c__DisplayClass23_0 = ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0;

using __c__DisplayClass30_0 = ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0;

/// @brief Field ActiveRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ActiveRequests, put=setStaticF_ActiveRequests)) ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  ActiveRequests;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Field ResultQueueMainThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ResultQueueMainThread, put=setStaticF_ResultQueueMainThread)) ::System::Collections::Generic::Queue_1<::System::Action*>*  ResultQueueMainThread;

/// @brief Field ResultQueueTransferThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ResultQueueTransferThread, put=setStaticF_ResultQueueTransferThread)) ::System::Collections::Generic::Queue_1<::System::Action*>*  ResultQueueTransferThread;

/// @brief Field ThreadKillTimeout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ThreadKillTimeout, put=setStaticF_ThreadKillTimeout)) ::System::TimeSpan  ThreadKillTimeout;

/// @brief Field _ThreadLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ThreadLock, put=setStaticF__ThreadLock)) ::System::Object*  _ThreadLock;

/// @brief Field _activeCallCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__activeCallCount, put=setStaticF__activeCallCount)) int32_t  _activeCallCount;

/// @brief Field _isApplicationPlaying, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isApplicationPlaying, put=setStaticF__isApplicationPlaying)) bool  _isApplicationPlaying;

/// @brief Field _isInitialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _requestQueueThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__requestQueueThread, put=setStaticF__requestQueueThread)) ::System::Threading::Thread*  _requestQueueThread;

/// @brief Field _threadKillTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__threadKillTime, put=setStaticF__threadKillTime)) ::System::DateTime  _threadKillTime;

/// @brief Field _unityVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityVersion, put=setStaticF__unityVersion)) ::StringW  _unityVersion;

/// @brief Field certValidationSet, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_certValidationSet, put=setStaticF_certValidationSet)) bool  certValidationSet;

/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr operator  ::PlayFab::IPlayFabPlugin*() noexcept;

/// @brief Convert operator to "::PlayFab::ITransportPlugin"
constexpr operator  ::PlayFab::ITransportPlugin*() noexcept;

/// @brief Method AcceptAllCertifications, addr 0xa849224, size 0x8, virtual false, abstract: false, final false
static inline bool AcceptAllCertifications(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

/// @brief Method ActivateThreadWorker, addr 0xa849fc0, size 0x1d4, virtual false, abstract: false, final false
static inline void ActivateThreadWorker() ;

/// @brief Method GetPendingMessages, addr 0xa84c670, size 0x220, virtual true, abstract: false, final true
inline int32_t GetPendingMessages() ;

/// @brief Method Initialize, addr 0xa848d34, size 0xb0, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method MakeApiCall, addr 0xa849e0c, size 0x1b4, virtual true, abstract: false, final true
inline void MakeApiCall(::System::Object*  reqContainerObj) ;

static inline ::PlayFab::Internal::PlayFabWebRequest* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa848f1c, size 0x308, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method Post, addr 0xa84a974, size 0x838, virtual false, abstract: false, final false
static inline void Post(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method ProcessHttpResponse, addr 0xa84b1ac, size 0x2cc, virtual false, abstract: false, final false
static inline void ProcessHttpResponse(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method ProcessJsonResponse, addr 0xa84b478, size 0x700, virtual false, abstract: false, final false
static inline void ProcessJsonResponse(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method QueueRequestError, addr 0xa84c1d4, size 0x248, virtual false, abstract: false, final false
static inline void QueueRequestError(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method ResponseToString, addr 0xa84bb78, size 0x65c, virtual false, abstract: false, final false
static inline ::StringW ResponseToString(::System::Net::WebResponse*  webResponse) ;

/// @brief Method SetupCertificates, addr 0xa848de4, size 0x138, virtual false, abstract: false, final false
inline void SetupCertificates() ;

/// @brief Method SimpleGetCall, addr 0xa84922c, size 0x13c, virtual true, abstract: false, final true
inline void SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimpleHttpsWorker, addr 0xa849620, size 0x7ec, virtual false, abstract: false, final false
inline void SimpleHttpsWorker(::StringW  httpMethod, ::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePostCall, addr 0xa8494c8, size 0x150, virtual true, abstract: false, final true
inline void SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePutCall, addr 0xa849370, size 0x150, virtual true, abstract: false, final true
inline void SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SkipCertificateValidation, addr 0xa848bc4, size 0xd8, virtual false, abstract: false, final false
static inline void SkipCertificateValidation() ;

/// @brief Method Update, addr 0xa84c42c, size 0x244, virtual true, abstract: false, final true
inline void Update() ;

/// @brief Method WorkerThreadMainLoop, addr 0xa84a194, size 0x7e0, virtual false, abstract: false, final false
static inline void WorkerThreadMainLoop() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

/// @brief Method .ctor, addr 0xa84c890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>* getStaticF_ActiveRequests() ;

static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF_ResultQueueMainThread() ;

static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF_ResultQueueTransferThread() ;

static inline ::System::TimeSpan getStaticF_ThreadKillTimeout() ;

static inline ::System::Object* getStaticF__ThreadLock() ;

static inline int32_t getStaticF__activeCallCount() ;

static inline bool getStaticF__isApplicationPlaying() ;

static inline ::System::Threading::Thread* getStaticF__requestQueueThread() ;

static inline ::System::DateTime getStaticF__threadKillTime() ;

static inline ::StringW getStaticF__unityVersion() ;

static inline bool getStaticF_certValidationSet() ;

/// @brief Method get_IsInitialized, addr 0xa848d2c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsInitialized() ;

/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* i___PlayFab__IPlayFabPlugin() noexcept;

/// @brief Convert to "::PlayFab::ITransportPlugin"
constexpr ::PlayFab::ITransportPlugin* i___PlayFab__ITransportPlugin() noexcept;

static inline void setStaticF_ActiveRequests(::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  value) ;

static inline void setStaticF_ResultQueueMainThread(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

static inline void setStaticF_ResultQueueTransferThread(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

static inline void setStaticF_ThreadKillTimeout(::System::TimeSpan  value) ;

static inline void setStaticF__ThreadLock(::System::Object*  value) ;

static inline void setStaticF__activeCallCount(int32_t  value) ;

static inline void setStaticF__isApplicationPlaying(bool  value) ;

static inline void setStaticF__requestQueueThread(::System::Threading::Thread*  value) ;

static inline void setStaticF__threadKillTime(::System::DateTime  value) ;

static inline void setStaticF__unityVersion(::StringW  value) ;

static inline void setStaticF_certValidationSet(bool  value) ;

/// @brief Method set_CustomCertValidationHook, addr 0xa848c9c, size 0x90, virtual false, abstract: false, final false
static inline void set_CustomCertValidationHook(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest(PlayFabWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest(PlayFabWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19934};

/// @brief Field _isInitialized, offset: 0x10, size: 0x1, def value: None
 bool  ____isInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest, ____isInitialized) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0
class CORDL_TYPE PlayFabWebRequest___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field reqContainer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reqContainer, put=__cordl_internal_set_reqContainer)) ::PlayFab::Internal::CallRequestContainer*  reqContainer;

static inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <ProcessJsonResponse>b__0, addr 0xa84cc3c, size 0x20, virtual false, abstract: false, final false
inline void _ProcessJsonResponse_b__0() ;

/// @brief Method <ProcessJsonResponse>b__1, addr 0xa84cc5c, size 0x158, virtual false, abstract: false, final false
inline void _ProcessJsonResponse_b__1() ;

constexpr ::PlayFab::Internal::CallRequestContainer* const& __cordl_internal_get_reqContainer() const;

constexpr ::PlayFab::Internal::CallRequestContainer*& __cordl_internal_get_reqContainer() ;

constexpr void __cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value) ;

/// @brief Method .ctor, addr 0xa84c424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest___c__DisplayClass31_0(PlayFabWebRequest___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest___c__DisplayClass31_0(PlayFabWebRequest___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19933};

/// @brief Field reqContainer, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::CallRequestContainer*  ___reqContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0, ___reqContainer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass31_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0
class CORDL_TYPE PlayFabWebRequest___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field reqContainer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reqContainer, put=__cordl_internal_set_reqContainer)) ::PlayFab::Internal::CallRequestContainer*  reqContainer;

static inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <QueueRequestError>b__0, addr 0xa84cba0, size 0x9c, virtual false, abstract: false, final false
inline void _QueueRequestError_b__0() ;

constexpr ::PlayFab::Internal::CallRequestContainer* const& __cordl_internal_get_reqContainer() const;

constexpr ::PlayFab::Internal::CallRequestContainer*& __cordl_internal_get_reqContainer() ;

constexpr void __cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value) ;

/// @brief Method .ctor, addr 0xa84c41c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest___c__DisplayClass30_0(PlayFabWebRequest___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest___c__DisplayClass30_0(PlayFabWebRequest___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19932};

/// @brief Field reqContainer, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::CallRequestContainer*  ___reqContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0, ___reqContainer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0
class CORDL_TYPE PlayFabWebRequest___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayFab::Internal::PlayFabWebRequest*  __4__this;

/// @brief Field errorCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field fullUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullUrl, put=__cordl_internal_set_fullUrl)) ::StringW  fullUrl;

/// @brief Field payload, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::ArrayW<uint8_t>  payload;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::ArrayW<uint8_t>>*  successCallback;

static inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <SimplePostCall>b__0, addr 0xa84cb48, size 0x58, virtual false, abstract: false, final false
inline void _SimplePostCall_b__0() ;

constexpr ::PlayFab::Internal::PlayFabWebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::PlayFab::Internal::PlayFabWebRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::StringW const& __cordl_internal_get_fullUrl() const;

constexpr ::StringW& __cordl_internal_get_fullUrl() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_payload() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_payload() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_fullUrl(::StringW  value) ;

constexpr void __cordl_internal_set_payload(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xa849618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest___c__DisplayClass23_0(PlayFabWebRequest___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest___c__DisplayClass23_0(PlayFabWebRequest___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19931};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::PlayFabWebRequest*  _____4__this;

/// @brief Field fullUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___fullUrl;

/// @brief Field payload, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___payload;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___successCallback;

/// @brief Field errorCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0, ___fullUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0, ___payload) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0, ___errorCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass23_0) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0
class CORDL_TYPE PlayFabWebRequest___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayFab::Internal::PlayFabWebRequest*  __4__this;

/// @brief Field errorCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field fullUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullUrl, put=__cordl_internal_set_fullUrl)) ::StringW  fullUrl;

/// @brief Field payload, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::ArrayW<uint8_t>  payload;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::ArrayW<uint8_t>>*  successCallback;

static inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <SimplePutCall>b__0, addr 0xa84caf0, size 0x58, virtual false, abstract: false, final false
inline void _SimplePutCall_b__0() ;

constexpr ::PlayFab::Internal::PlayFabWebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::PlayFab::Internal::PlayFabWebRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::StringW const& __cordl_internal_get_fullUrl() const;

constexpr ::StringW& __cordl_internal_get_fullUrl() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_payload() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_payload() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_fullUrl(::StringW  value) ;

constexpr void __cordl_internal_set_payload(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xa8494c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest___c__DisplayClass22_0(PlayFabWebRequest___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest___c__DisplayClass22_0(PlayFabWebRequest___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19930};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::PlayFabWebRequest*  _____4__this;

/// @brief Field fullUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___fullUrl;

/// @brief Field payload, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___payload;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___successCallback;

/// @brief Field errorCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0, ___fullUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0, ___payload) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0, ___errorCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass22_0) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0
class CORDL_TYPE PlayFabWebRequest___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayFab::Internal::PlayFabWebRequest*  __4__this;

/// @brief Field errorCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field fullUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullUrl, put=__cordl_internal_set_fullUrl)) ::StringW  fullUrl;

/// @brief Field successCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::ArrayW<uint8_t>>*  successCallback;

static inline ::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <SimpleGetCall>b__0, addr 0xa84ca94, size 0x5c, virtual false, abstract: false, final false
inline void _SimpleGetCall_b__0() ;

constexpr ::PlayFab::Internal::PlayFabWebRequest* const& __cordl_internal_get___4__this() const;

constexpr ::PlayFab::Internal::PlayFabWebRequest*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::StringW const& __cordl_internal_get_fullUrl() const;

constexpr ::StringW& __cordl_internal_get_fullUrl() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayFab::Internal::PlayFabWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_fullUrl(::StringW  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xa849368, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabWebRequest___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabWebRequest___c__DisplayClass21_0(PlayFabWebRequest___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabWebRequest___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabWebRequest___c__DisplayClass21_0(PlayFabWebRequest___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19929};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::PlayFabWebRequest*  _____4__this;

/// @brief Field fullUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___fullUrl;

/// @brief Field successCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___successCallback;

/// @brief Field errorCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0, ___fullUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0, ___successCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0, ___errorCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabWebRequest___c__DisplayClass21_0) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::Internal
