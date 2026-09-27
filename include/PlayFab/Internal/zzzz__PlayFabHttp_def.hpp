#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabHttp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Internal/zzzz__SingletonMonoBehaviour_1_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabHttp)
namespace PlayFab::Internal {
class ApiProcessingEventArgs;
}
namespace PlayFab::Internal {
struct ApiProcessingEventType;
}
namespace PlayFab::Internal {
struct AuthType;
}
namespace PlayFab::Internal {
class CallRequestContainer;
}
namespace PlayFab::Internal {
class PlayFabHttp_ApiProcessErrorEvent;
}
namespace PlayFab::Internal {
template<typename TEventArgs>
class PlayFabHttp_ApiProcessingEvent_1;
}
namespace PlayFab::Internal {
class PlayFabHttp__SendScreenTimeEvents_d__17;
}
namespace PlayFab::Internal {
template<typename TResult>
class PlayFabHttp___c__DisplayClass23_0_1;
}
namespace PlayFab::Public {
class IPlayFabLogger;
}
namespace PlayFab::Public {
class IScreenTimeTracker;
}
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab::SharedModels {
class PlayFabRequestCommon;
}
namespace PlayFab::SharedModels {
class PlayFabResultCommon;
}
namespace PlayFab {
class ISerializerPlugin;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace PlayFab::Internal {
class PlayFabHttp;
}
namespace PlayFab::Internal {
class PlayFabHttp_ApiProcessErrorEvent;
}
namespace PlayFab::Internal {
template<typename TEventArgs>
class PlayFabHttp_ApiProcessingEvent_1;
}
namespace PlayFab::Internal {
class PlayFabHttp__SendScreenTimeEvents_d__17;
}
namespace PlayFab::Internal {
template<typename TResult>
class PlayFabHttp___c__DisplayClass23_0_1;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::PlayFabHttp*);
MARK_REF_T(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*);
MARK_GEN_REF_T_PTR(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1);
MARK_REF_T(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*);
MARK_GEN_REF_T_PTR(::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabHttp*, "PlayFab.Internal", "PlayFabHttp");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*, "PlayFab.Internal", "PlayFabHttp/ApiProcessErrorEvent");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1, "PlayFab.Internal", "PlayFabHttp/ApiProcessingEvent`1");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*, "PlayFab.Internal", "PlayFabHttp/<SendScreenTimeEvents>d__17");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1, "PlayFab.Internal", "PlayFabHttp/<>c__DisplayClass23_0`1");
// Dependencies PlayFab.Internal.SingletonMonoBehaviour`1<T>, PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabHttp
class CORDL_TYPE PlayFabHttp : public ::PlayFab::Internal::SingletonMonoBehaviour_1<::UnityW<::PlayFab::Internal::PlayFabHttp>> {
public:
// Declarations
using ApiProcessErrorEvent = ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent;

template<typename TEventArgs>
using ApiProcessingEvent_1 = ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>;

using _SendScreenTimeEvents_d__17 = ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17;

template<typename TResult>
using __c__DisplayClass23_0_1 = ::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>;

/// @brief Field ApiProcessingErrorEventHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApiProcessingErrorEventHandler, put=setStaticF_ApiProcessingErrorEventHandler)) ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  ApiProcessingErrorEventHandler;

/// @brief Field ApiProcessingEventHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApiProcessingEventHandler, put=setStaticF_ApiProcessingEventHandler)) ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  ApiProcessingEventHandler;

/// @brief Field GlobalHeaderInjection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GlobalHeaderInjection, put=setStaticF_GlobalHeaderInjection)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  GlobalHeaderInjection;

/// @brief Field _apiCallQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__apiCallQueue, put=setStaticF__apiCallQueue)) ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  _apiCallQueue;

/// @brief Field _injectedAction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__injectedAction, put=__cordl_internal_set__injectedAction)) ::System::Collections::Generic::Queue_1<::System::Action*>*  _injectedAction;

/// @brief Field _injectedCoroutines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__injectedCoroutines, put=__cordl_internal_set__injectedCoroutines)) ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  _injectedCoroutines;

/// @brief Field _logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__logger, put=setStaticF__logger)) ::PlayFab::Public::IPlayFabLogger*  _logger;

/// @brief Field screenTimeTracker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_screenTimeTracker, put=setStaticF_screenTimeTracker)) ::PlayFab::Public::IScreenTimeTracker*  screenTimeTracker;

/// @brief Method ClearAllEvents, addr 0xa8467dc, size 0x70, virtual false, abstract: false, final false
static inline void ClearAllEvents() ;

/// @brief Method GeneratePlayFabError, addr 0xa845e84, size 0x640, virtual false, abstract: false, final false
static inline ::PlayFab::PlayFabError* GeneratePlayFabError(::StringW  apiEndpoint, ::StringW  json, ::System::Object*  customData) ;

/// @brief Method GetPendingMessages, addr 0xa844610, size 0x168, virtual false, abstract: false, final false
static inline int32_t GetPendingMessages() ;

/// @brief Method InitializeHttp, addr 0xa844778, size 0x204, virtual false, abstract: false, final false
static inline void InitializeHttp() ;

/// @brief Method InitializeLogger, addr 0xa84497c, size 0xf0, virtual false, abstract: false, final false
static inline void InitializeLogger(::PlayFab::Public::IPlayFabLogger*  setLogger) ;

/// @brief Method InitializeScreenTimeTracker, addr 0xa843b64, size 0x128, virtual false, abstract: false, final false
static inline void InitializeScreenTimeTracker(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId) ;

/// @brief Method InjectInUnityThread, addr 0xa8468a4, size 0x58, virtual false, abstract: false, final false
inline void InjectInUnityThread(::System::Action*  action) ;

/// @brief Method InjectInUnityThread, addr 0xa84684c, size 0x58, virtual false, abstract: false, final false
inline void InjectInUnityThread(::System::Collections::IEnumerator*  x) ;

/// @brief Method MakeApiCall, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
static inline void MakeApiCall(::StringW  apiEndpoint, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

/// @brief Method MakeApiCallWithFullUri, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
static inline void MakeApiCallWithFullUri(::StringW  fullUri, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

static inline ::PlayFab::Internal::PlayFabHttp* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xa845828, size 0x130, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  isFocused) ;

/// @brief Method OnApplicationQuit, addr 0xa845958, size 0x128, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0xa845524, size 0x304, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa845350, size 0x1d4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa845180, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayFabApiResult, addr 0xa844ef0, size 0x290, virtual false, abstract: false, final false
inline void OnPlayFabApiResult(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method SendErrorEvent, addr 0xa8464c4, size 0x148, virtual false, abstract: false, final false
static inline void SendErrorEvent(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error) ;

/// @brief Method SendEvent, addr 0xa84660c, size 0x1c8, virtual false, abstract: false, final false
static inline void SendEvent(::StringW  apiEndpoint, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::SharedModels::PlayFabResultCommon*  result, ::PlayFab::Internal::ApiProcessingEventType  eventType) ;

/// [IteratorStateMachine(typeof(PlayFab.Internal.PlayFabHttp::<SendScreenTimeEvents>d__17))]
/// @brief Method SendScreenTimeEvents, addr 0xa844a6c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* SendScreenTimeEvents(float_t  secondsBetweenBatches) ;

/// @brief Method SimpleGetCall, addr 0xa844afc, size 0x14c, virtual false, abstract: false, final false
static inline void SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePostCall, addr 0xa844d9c, size 0x154, virtual false, abstract: false, final false
static inline void SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePutCall, addr 0xa844c48, size 0x154, virtual false, abstract: false, final false
static inline void SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method Update, addr 0xa845a80, size 0x404, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method _MakeApiCall, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
static inline void _MakeApiCall(::StringW  apiEndpoint, ::StringW  fullUrl, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, bool  allowQueueing, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& __cordl_internal_get__injectedAction() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& __cordl_internal_get__injectedAction() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>* const& __cordl_internal_get__injectedCoroutines() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*& __cordl_internal_get__injectedCoroutines() ;

constexpr void __cordl_internal_set__injectedAction(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set__injectedCoroutines(::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  value) ;

/// @brief Method .ctor, addr 0xa8468fc, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ApiProcessingErrorEventHandler, addr 0xa844458, size 0xdc, virtual false, abstract: false, final false
static inline void add_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ApiProcessingEventHandler, addr 0xa844270, size 0xf4, virtual false, abstract: false, final false
static inline void add_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value) ;

static inline ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent* getStaticF_ApiProcessingErrorEventHandler() ;

static inline ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>* getStaticF_ApiProcessingEventHandler() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_GlobalHeaderInjection() ;

static inline ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>* getStaticF__apiCallQueue() ;

static inline ::PlayFab::Public::IPlayFabLogger* getStaticF__logger() ;

static inline ::PlayFab::Public::IScreenTimeTracker* getStaticF_screenTimeTracker() ;

/// [CompilerGenerated]
/// @brief Method remove_ApiProcessingErrorEventHandler, addr 0xa844534, size 0xdc, virtual false, abstract: false, final false
static inline void remove_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ApiProcessingEventHandler, addr 0xa844364, size 0xf4, virtual false, abstract: false, final false
static inline void remove_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value) ;

static inline void setStaticF_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value) ;

static inline void setStaticF_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value) ;

static inline void setStaticF_GlobalHeaderInjection(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF__apiCallQueue(::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  value) ;

static inline void setStaticF__logger(::PlayFab::Public::IPlayFabLogger*  value) ;

static inline void setStaticF_screenTimeTracker(::PlayFab::Public::IScreenTimeTracker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabHttp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabHttp(PlayFabHttp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabHttp(PlayFabHttp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19923};

/// @brief Field delayBetweenBatches offset 0xffffffff size 0x4
static constexpr float_t  delayBetweenBatches{static_cast<float_t>(5.0f)};

/// @brief Field _injectedCoroutines, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  ____injectedCoroutines;

/// @brief Field _injectedAction, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Action*>*  ____injectedAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabHttp, ____injectedCoroutines) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabHttp, ____injectedAction) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabHttp) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabHttp/<SendScreenTimeEvents>d__17
class CORDL_TYPE PlayFabHttp__SendScreenTimeEvents_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <delay>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__delay_5__2, put=__cordl_internal_set__delay_5__2)) ::UnityEngine::WaitForSeconds*  _delay_5__2;

/// @brief Field secondsBetweenBatches, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsBetweenBatches, put=__cordl_internal_set_secondsBetweenBatches)) float_t  secondsBetweenBatches;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa846c6c, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa846dfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa846e04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa846e3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa846c68, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__delay_5__2() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__delay_5__2() ;

constexpr float_t const& __cordl_internal_get_secondsBetweenBatches() const;

constexpr float_t& __cordl_internal_get_secondsBetweenBatches() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__delay_5__2(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set_secondsBetweenBatches(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa844ad4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabHttp__SendScreenTimeEvents_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp__SendScreenTimeEvents_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabHttp__SendScreenTimeEvents_d__17(PlayFabHttp__SendScreenTimeEvents_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp__SendScreenTimeEvents_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabHttp__SendScreenTimeEvents_d__17(PlayFabHttp__SendScreenTimeEvents_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19922};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field secondsBetweenBatches, offset: 0x20, size: 0x4, def value: None
 float_t  ___secondsBetweenBatches;

/// @brief Field <delay>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____delay_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17, ___secondsBetweenBatches) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17, ____delay_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabHttp/<>c__DisplayClass23_0`1<TResult>
class CORDL_TYPE PlayFabHttp___c__DisplayClass23_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field reqContainer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reqContainer, put=__cordl_internal_set_reqContainer)) ::PlayFab::Internal::CallRequestContainer*  reqContainer;

/// @brief Field resultCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultCallback, put=__cordl_internal_set_resultCallback)) ::System::Action_1<TResult>*  resultCallback;

/// @brief Field serializer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::PlayFab::ISerializerPlugin*  serializer;

static inline ::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>* New_ctor() ;

/// @brief Method <_MakeApiCall>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __MakeApiCall_b__0() ;

/// @brief Method <_MakeApiCall>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __MakeApiCall_b__1() ;

constexpr ::PlayFab::Internal::CallRequestContainer* const& __cordl_internal_get_reqContainer() const;

constexpr ::PlayFab::Internal::CallRequestContainer*& __cordl_internal_get_reqContainer() ;

constexpr ::System::Action_1<TResult>* const& __cordl_internal_get_resultCallback() const;

constexpr ::System::Action_1<TResult>*& __cordl_internal_get_resultCallback() ;

constexpr ::PlayFab::ISerializerPlugin* const& __cordl_internal_get_serializer() const;

constexpr ::PlayFab::ISerializerPlugin*& __cordl_internal_get_serializer() ;

constexpr void __cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value) ;

constexpr void __cordl_internal_set_resultCallback(::System::Action_1<TResult>*  value) ;

constexpr void __cordl_internal_set_serializer(::PlayFab::ISerializerPlugin*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabHttp___c__DisplayClass23_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp___c__DisplayClass23_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabHttp___c__DisplayClass23_0_1(PlayFabHttp___c__DisplayClass23_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp___c__DisplayClass23_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabHttp___c__DisplayClass23_0_1(PlayFabHttp___c__DisplayClass23_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19921};

/// @brief Field reqContainer, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::Internal::CallRequestContainer*  ___reqContainer;

/// @brief Field serializer, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ISerializerPlugin*  ___serializer;

/// @brief Field resultCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<TResult>*  ___resultCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Internal
// Dependencies System.MulticastDelegate
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent
class CORDL_TYPE PlayFabHttp_ApiProcessErrorEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa846c34, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa846c5c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa846c20, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error) ;

static inline ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa846b14, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabHttp_ApiProcessErrorEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp_ApiProcessErrorEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabHttp_ApiProcessErrorEvent(PlayFabHttp_ApiProcessErrorEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp_ApiProcessErrorEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabHttp_ApiProcessErrorEvent(PlayFabHttp_ApiProcessErrorEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent) == 0x80, "Size mismatch!");

} // namespace end def PlayFab::Internal
// Dependencies System.MulticastDelegate
namespace PlayFab::Internal {
// cpp template
template<typename TEventArgs>
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1<TEventArgs>
class CORDL_TYPE PlayFabHttp_ApiProcessingEvent_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TEventArgs  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(TEventArgs  e) ;

static inline ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabHttp_ApiProcessingEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp_ApiProcessingEvent_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabHttp_ApiProcessingEvent_1(PlayFabHttp_ApiProcessingEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabHttp_ApiProcessingEvent_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabHttp_ApiProcessingEvent_1(PlayFabHttp_ApiProcessingEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19919};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Internal
