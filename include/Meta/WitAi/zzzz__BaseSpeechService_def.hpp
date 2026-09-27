#pragma once
// IWYU pragma private; include "Meta/WitAi/BaseSpeechService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseSpeechService)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Events {
class SpeechEvents;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class BaseSpeechService___c;
}
namespace Meta::WitAi {
template<typename TParam>
class BaseSpeechService___c__DisplayClass41_0_1;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::WitAi {
class BaseSpeechService;
}
namespace Meta::WitAi {
class BaseSpeechService___c;
}
namespace Meta::WitAi {
template<typename TParam>
class BaseSpeechService___c__DisplayClass41_0_1;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::BaseSpeechService*);
MARK_REF_T(::Meta::WitAi::BaseSpeechService___c*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::BaseSpeechService*, "Meta.WitAi", "BaseSpeechService");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::BaseSpeechService___c*, "Meta.WitAi", "BaseSpeechService/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1, "Meta.WitAi", "BaseSpeechService/<>c__DisplayClass41_0`1");
// [LogCategory((Meta.Voice.Logging.LogCategory)14)]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.BaseSpeechService
class CORDL_TYPE BaseSpeechService : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Meta::WitAi::BaseSpeechService___c;

template<typename TParam>
using __c__DisplayClass41_0_1 = ::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_IsAudioInputActive)) bool  IsAudioInputActive;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_Requests)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  Requests;

/// @brief Field ShouldLog, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldLog, put=__cordl_internal_set_ShouldLog)) bool  ShouldLog;

/// @brief Field ShouldWrap, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldWrap, put=__cordl_internal_set_ShouldWrap)) bool  ShouldWrap;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <Requests>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Requests_k__BackingField, put=__cordl_internal_set__Requests_k__BackingField)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  _Requests_k__BackingField;

/// @brief Field _customRequestEvents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__customRequestEvents, put=__cordl_internal_set__customRequestEvents)) ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*  _customRequestEvents;

/// @brief Method CanActivateAudio, addr 0x9e7116c, size 0x1c, virtual true, abstract: false, final false
inline bool CanActivateAudio() ;

/// @brief Method CanSend, addr 0x9e711a0, size 0x1c, virtual true, abstract: false, final false
inline bool CanSend() ;

/// @brief Method Deactivate, addr 0x9e71454, size 0xac, virtual true, abstract: false, final false
inline void Deactivate() ;

/// @brief Method Deactivate, addr 0x9e71500, size 0x3c, virtual true, abstract: false, final false
inline void Deactivate(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method DeactivateAndAbortRequest, addr 0x9e7153c, size 0xac, virtual true, abstract: false, final false
inline void DeactivateAndAbortRequest() ;

/// @brief Method DeactivateAndAbortRequest, addr 0x9e715e8, size 0x74, virtual true, abstract: false, final false
inline void DeactivateAndAbortRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method GetActivateAudioError, addr 0x9e71100, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method GetAudioRequest, addr 0x9e70fec, size 0x114, virtual true, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* GetAudioRequest() ;

/// @brief Method GetSendError, addr 0x9e71188, size 0x18, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method GetSpeechEvents, addr 0x9e70f80, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Events::SpeechEvents* GetSpeechEvents() ;

/// @brief Method Log, addr 0x9e71b3c, size 0x27c, virtual true, abstract: false, final false
inline void Log(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  log, bool  warn) ;

static inline ::Meta::WitAi::BaseSpeechService* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e713a8, size 0xac, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e711bc, size 0x1ec, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRequestCancel, addr 0x9e7244c, size 0x134, virtual true, abstract: false, final false
inline void OnRequestCancel(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestComplete, addr 0x9e72890, size 0x160, virtual true, abstract: false, final false
inline void OnRequestComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestFailed, addr 0x9e72580, size 0x208, virtual true, abstract: false, final false
inline void OnRequestFailed(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestFullTranscription, addr 0x9e722a0, size 0x124, virtual true, abstract: false, final false
inline void OnRequestFullTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription) ;

/// @brief Method OnRequestInit, addr 0x9e71db8, size 0x164, virtual true, abstract: false, final false
inline void OnRequestInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestPartialResponse, addr 0x9e723c4, size 0x88, virtual true, abstract: false, final false
inline void OnRequestPartialResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseData) ;

/// @brief Method OnRequestPartialTranscription, addr 0x9e7217c, size 0x124, virtual true, abstract: false, final false
inline void OnRequestPartialTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription) ;

/// @brief Method OnRequestRawResponse, addr 0x9e72108, size 0x74, virtual true, abstract: false, final false
inline void OnRequestRawResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  rawResponse) ;

/// @brief Method OnRequestSend, addr 0x9e72054, size 0xb4, virtual true, abstract: false, final false
inline void OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestStartListening, addr 0x9e71f1c, size 0x9c, virtual true, abstract: false, final false
inline void OnRequestStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestStopListening, addr 0x9e71fb8, size 0x9c, virtual true, abstract: false, final false
inline void OnRequestStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnRequestSuccess, addr 0x9e72788, size 0x108, virtual true, abstract: false, final false
inline void OnRequestSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method SetEventListeners, addr 0x9e729f0, size 0x3f4, virtual true, abstract: false, final false
inline void SetEventListeners(::Meta::WitAi::Requests::VoiceServiceRequest*  request, bool  addListeners) ;

/// @brief Method SetRequestEventListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TParam>
inline void SetRequestEventListener(::UnityEngine::Events::UnityEvent_1<TParam>*  baseEvent, ::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  callbackWithRequest, bool  addListener) ;

/// @brief Method SetupRequestParameters, addr 0x9e7165c, size 0x180, virtual true, abstract: false, final false
inline void SetupRequestParameters(::by_ref<::Meta::WitAi::Configuration::WitRequestOptions*>  options, ::by_ref<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>  events) ;

/// @brief Method WrapRequest, addr 0x9e717dc, size 0x360, virtual true, abstract: false, final false
inline bool WrapRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

constexpr bool const& __cordl_internal_get_ShouldLog() const;

constexpr bool& __cordl_internal_get_ShouldLog() ;

constexpr bool const& __cordl_internal_get_ShouldWrap() const;

constexpr bool& __cordl_internal_get_ShouldWrap() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& __cordl_internal_get__Requests_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& __cordl_internal_get__Requests_k__BackingField() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>* const& __cordl_internal_get__customRequestEvents() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*& __cordl_internal_get__customRequestEvents() ;

constexpr void __cordl_internal_set_ShouldLog(bool  value) ;

constexpr void __cordl_internal_set_ShouldWrap(bool  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__Requests_k__BackingField(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value) ;

constexpr void __cordl_internal_set__customRequestEvents(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x9e72de4, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x9e70f2c, size 0x54, virtual true, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_IsAudioInputActive, addr 0x9e70f88, size 0x64, virtual true, abstract: false, final false
inline bool get_IsAudioInputActive() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e70f1c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_Requests, addr 0x9e70f24, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* get_Requests() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseSpeechService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseSpeechService(BaseSpeechService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseSpeechService(BaseSpeechService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25533};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field ShouldWrap, offset: 0x28, size: 0x1, def value: None
 bool  ___ShouldWrap;

/// @brief Field ShouldLog, offset: 0x29, size: 0x1, def value: None
 bool  ___ShouldLog;

/// [CompilerGenerated]
/// @brief Field <Requests>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  ____Requests_k__BackingField;

/// @brief Field _customRequestEvents, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*  ____customRequestEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::BaseSpeechService, ____Logger_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::BaseSpeechService, ___ShouldWrap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::BaseSpeechService, ___ShouldLog) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::BaseSpeechService, ____Requests_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::BaseSpeechService, ____customRequestEvents) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::BaseSpeechService) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// cpp template
template<typename TParam>
// Is value type: false
// CS Name: Meta.WitAi.BaseSpeechService/<>c__DisplayClass41_0`1<TParam>
class CORDL_TYPE BaseSpeechService___c__DisplayClass41_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callbackWithRequest, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackWithRequest, put=__cordl_internal_set_callbackWithRequest)) ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  callbackWithRequest;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::VoiceServiceRequest*  request;

static inline ::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>* New_ctor() ;

/// @brief Method <SetRequestEventListener>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _SetRequestEventListener_b__0(TParam  param) ;

constexpr ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>* const& __cordl_internal_get_callbackWithRequest() const;

constexpr ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*& __cordl_internal_get_callbackWithRequest() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_callbackWithRequest(::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseSpeechService___c__DisplayClass41_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService___c__DisplayClass41_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseSpeechService___c__DisplayClass41_0_1(BaseSpeechService___c__DisplayClass41_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService___c__DisplayClass41_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseSpeechService___c__DisplayClass41_0_1(BaseSpeechService___c__DisplayClass41_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25532};

/// @brief Field callbackWithRequest, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  ___callbackWithRequest;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.BaseSpeechService/<>c
class CORDL_TYPE BaseSpeechService___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::BaseSpeechService___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*  __9__14_0;

static inline ::Meta::WitAi::BaseSpeechService___c* New_ctor() ;

/// @brief Method <GetAudioRequest>b__14_0, addr 0x9e73024, size 0x5c, virtual false, abstract: false, final false
inline bool _GetAudioRequest_b__14_0(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method .ctor, addr 0x9e7301c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::BaseSpeechService___c* getStaticF___9() ;

static inline ::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Meta::WitAi::BaseSpeechService___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseSpeechService___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseSpeechService___c(BaseSpeechService___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseSpeechService___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseSpeechService___c(BaseSpeechService___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::BaseSpeechService___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
