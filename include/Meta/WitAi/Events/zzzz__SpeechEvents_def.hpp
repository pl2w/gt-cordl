#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/SpeechEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Events/zzzz__EventRegistry_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SpeechEvents)
namespace Meta::Voice {
class UserTranscriptionRequestEvent;
}
namespace Meta::WitAi::Events {
class VoiceServiceRequestEvent;
}
namespace Meta::WitAi::Events {
class WitErrorEvent;
}
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace Meta::WitAi::Events {
class WitRequestCreatedEvent;
}
namespace Meta::WitAi::Events {
class WitRequestOptionsEvent;
}
namespace Meta::WitAi::Events {
class WitResponseEvent;
}
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionEvent;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class SpeechEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::SpeechEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::SpeechEvents*, "Meta.WitAi.Events", "SpeechEvents");
// Dependencies Meta.WitAi.Events.EventRegistry
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.SpeechEvents
class CORDL_TYPE SpeechEvents : public ::Meta::WitAi::Events::EventRegistry {
public:
// Declarations
 __declspec(property(get=get_OnAborted)) ::UnityEngine::Events::UnityEvent*  OnAborted;

 __declspec(property(get=get_OnAborting)) ::UnityEngine::Events::UnityEvent*  OnAborting;

 __declspec(property(get=get_OnCanceled)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnCanceled;

 __declspec(property(get=get_OnComplete)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  OnComplete;

 __declspec(property(get=get_OnError)) ::Meta::WitAi::Events::WitErrorEvent*  OnError;

 __declspec(property(get=get_OnFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnFullTranscription;

 __declspec(property(get=get_OnMicAudioLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicAudioLevelChanged;

 __declspec(property(get=get_OnMicDataSent)) ::UnityEngine::Events::UnityEvent*  OnMicDataSent;

 __declspec(property(get=get_OnMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicLevelChanged;

 __declspec(property(get=get_OnMicStartedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStartedListening;

 __declspec(property(get=get_OnMicStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnMicStoppedListening;

 __declspec(property(get=get_OnMinimumWakeThresholdHit)) ::UnityEngine::Events::UnityEvent*  OnMinimumWakeThresholdHit;

 __declspec(property(get=get_OnPartialResponse)) ::Meta::WitAi::Events::WitResponseEvent*  OnPartialResponse;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnPartialTranscription;

 __declspec(property(get=get_OnRawResponse)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnRawResponse;

 __declspec(property(get=get_OnRequestCompleted)) ::UnityEngine::Events::UnityEvent*  OnRequestCompleted;

/// @brief [Obsolete("Deprecated for \'OnSend\' event")]
 __declspec(property(get=get_OnRequestCreated)) ::Meta::WitAi::Events::WitRequestCreatedEvent*  OnRequestCreated;

/// @brief Field OnRequestFinalize, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestFinalize, put=__cordl_internal_set_OnRequestFinalize)) ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  OnRequestFinalize;

 __declspec(property(get=get_OnRequestInitialized)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  OnRequestInitialized;

 __declspec(property(get=get_OnRequestOptionSetup)) ::Meta::WitAi::Events::WitRequestOptionsEvent*  OnRequestOptionSetup;

 __declspec(property(get=get_OnResponse)) ::Meta::WitAi::Events::WitResponseEvent*  OnResponse;

 __declspec(property(get=get_OnSend)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  OnSend;

 __declspec(property(get=get_OnStartListening)) ::UnityEngine::Events::UnityEvent*  OnStartListening;

 __declspec(property(get=get_OnStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnStoppedListening;

 __declspec(property(get=get_OnStoppedListeningDueToDeactivation)) ::UnityEngine::Events::UnityEvent*  OnStoppedListeningDueToDeactivation;

 __declspec(property(get=get_OnStoppedListeningDueToInactivity)) ::UnityEngine::Events::UnityEvent*  OnStoppedListeningDueToInactivity;

 __declspec(property(get=get_OnStoppedListeningDueToTimeout)) ::UnityEngine::Events::UnityEvent*  OnStoppedListeningDueToTimeout;

 __declspec(property(get=get_OnUserFullTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  OnUserFullTranscription;

 __declspec(property(get=get_OnUserPartialTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  OnUserPartialTranscription;

/// @brief Field _listeners, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__listeners, put=__cordl_internal_set__listeners)) ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*  _listeners;

/// @brief Field _onAborted, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAborted, put=__cordl_internal_set__onAborted)) ::UnityEngine::Events::UnityEvent*  _onAborted;

/// @brief Field _onAborting, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAborting, put=__cordl_internal_set__onAborting)) ::UnityEngine::Events::UnityEvent*  _onAborting;

/// @brief Field _onCanceled, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onCanceled, put=__cordl_internal_set__onCanceled)) ::Meta::WitAi::Events::WitTranscriptionEvent*  _onCanceled;

/// @brief Field _onComplete, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onComplete, put=__cordl_internal_set__onComplete)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  _onComplete;

/// @brief Field _onError, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__onError, put=__cordl_internal_set__onError)) ::Meta::WitAi::Events::WitErrorEvent*  _onError;

/// @brief Field _onFullTranscription, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFullTranscription, put=__cordl_internal_set__onFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  _onFullTranscription;

/// @brief Field _onMicDataSent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMicDataSent, put=__cordl_internal_set__onMicDataSent)) ::UnityEngine::Events::UnityEvent*  _onMicDataSent;

/// @brief Field _onMicLevelChanged, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMicLevelChanged, put=__cordl_internal_set__onMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  _onMicLevelChanged;

/// @brief Field _onMinimumWakeThresholdHit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMinimumWakeThresholdHit, put=__cordl_internal_set__onMinimumWakeThresholdHit)) ::UnityEngine::Events::UnityEvent*  _onMinimumWakeThresholdHit;

/// @brief Field _onPartialResponse, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPartialResponse, put=__cordl_internal_set__onPartialResponse)) ::Meta::WitAi::Events::WitResponseEvent*  _onPartialResponse;

/// @brief Field _onPartialTranscription, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPartialTranscription, put=__cordl_internal_set__onPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  _onPartialTranscription;

/// @brief Field _onRawResponse, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRawResponse, put=__cordl_internal_set__onRawResponse)) ::Meta::WitAi::Events::WitTranscriptionEvent*  _onRawResponse;

/// @brief Field _onRequestCompleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRequestCompleted, put=__cordl_internal_set__onRequestCompleted)) ::UnityEngine::Events::UnityEvent*  _onRequestCompleted;

/// @brief Field _onRequestCreated, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRequestCreated, put=__cordl_internal_set__onRequestCreated)) ::Meta::WitAi::Events::WitRequestCreatedEvent*  _onRequestCreated;

/// @brief Field _onRequestInitialized, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRequestInitialized, put=__cordl_internal_set__onRequestInitialized)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  _onRequestInitialized;

/// @brief Field _onRequestOptionSetup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRequestOptionSetup, put=__cordl_internal_set__onRequestOptionSetup)) ::Meta::WitAi::Events::WitRequestOptionsEvent*  _onRequestOptionSetup;

/// @brief Field _onResponse, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__onResponse, put=__cordl_internal_set__onResponse)) ::Meta::WitAi::Events::WitResponseEvent*  _onResponse;

/// @brief Field _onSend, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSend, put=__cordl_internal_set__onSend)) ::Meta::WitAi::Events::VoiceServiceRequestEvent*  _onSend;

/// @brief Field _onStartListening, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStartListening, put=__cordl_internal_set__onStartListening)) ::UnityEngine::Events::UnityEvent*  _onStartListening;

/// @brief Field _onStoppedListening, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStoppedListening, put=__cordl_internal_set__onStoppedListening)) ::UnityEngine::Events::UnityEvent*  _onStoppedListening;

/// @brief Field _onStoppedListeningDueToDeactivation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStoppedListeningDueToDeactivation, put=__cordl_internal_set__onStoppedListeningDueToDeactivation)) ::UnityEngine::Events::UnityEvent*  _onStoppedListeningDueToDeactivation;

/// @brief Field _onStoppedListeningDueToInactivity, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStoppedListeningDueToInactivity, put=__cordl_internal_set__onStoppedListeningDueToInactivity)) ::UnityEngine::Events::UnityEvent*  _onStoppedListeningDueToInactivity;

/// @brief Field _onStoppedListeningDueToTimeout, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStoppedListeningDueToTimeout, put=__cordl_internal_set__onStoppedListeningDueToTimeout)) ::UnityEngine::Events::UnityEvent*  _onStoppedListeningDueToTimeout;

/// @brief Field _onUserFullTranscription, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onUserFullTranscription, put=__cordl_internal_set__onUserFullTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  _onUserFullTranscription;

/// @brief Field _onUserPartialTranscription, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onUserPartialTranscription, put=__cordl_internal_set__onUserPartialTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  _onUserPartialTranscription;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputEvents*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr operator  ::Meta::WitAi::Interfaces::ITranscriptionEvent*() noexcept;

static inline ::Meta::WitAi::Events::SpeechEvents* New_ctor() ;

constexpr ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& __cordl_internal_get_OnRequestFinalize() const;

constexpr ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& __cordl_internal_get_OnRequestFinalize() ;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>* const& __cordl_internal_get__listeners() const;

constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*& __cordl_internal_get__listeners() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onAborted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onAborted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onAborting() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onAborting() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get__onCanceled() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get__onCanceled() ;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& __cordl_internal_get__onComplete() const;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& __cordl_internal_get__onComplete() ;

constexpr ::Meta::WitAi::Events::WitErrorEvent* const& __cordl_internal_get__onError() const;

constexpr ::Meta::WitAi::Events::WitErrorEvent*& __cordl_internal_get__onError() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get__onFullTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get__onFullTranscription() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onMicDataSent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onMicDataSent() ;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& __cordl_internal_get__onMicLevelChanged() const;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& __cordl_internal_get__onMicLevelChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onMinimumWakeThresholdHit() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onMinimumWakeThresholdHit() ;

constexpr ::Meta::WitAi::Events::WitResponseEvent* const& __cordl_internal_get__onPartialResponse() const;

constexpr ::Meta::WitAi::Events::WitResponseEvent*& __cordl_internal_get__onPartialResponse() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get__onPartialTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get__onPartialTranscription() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get__onRawResponse() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get__onRawResponse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onRequestCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onRequestCompleted() ;

constexpr ::Meta::WitAi::Events::WitRequestCreatedEvent* const& __cordl_internal_get__onRequestCreated() const;

constexpr ::Meta::WitAi::Events::WitRequestCreatedEvent*& __cordl_internal_get__onRequestCreated() ;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& __cordl_internal_get__onRequestInitialized() const;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& __cordl_internal_get__onRequestInitialized() ;

constexpr ::Meta::WitAi::Events::WitRequestOptionsEvent* const& __cordl_internal_get__onRequestOptionSetup() const;

constexpr ::Meta::WitAi::Events::WitRequestOptionsEvent*& __cordl_internal_get__onRequestOptionSetup() ;

constexpr ::Meta::WitAi::Events::WitResponseEvent* const& __cordl_internal_get__onResponse() const;

constexpr ::Meta::WitAi::Events::WitResponseEvent*& __cordl_internal_get__onResponse() ;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& __cordl_internal_get__onSend() const;

constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& __cordl_internal_get__onSend() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStartListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStartListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStoppedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStoppedListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStoppedListeningDueToDeactivation() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStoppedListeningDueToDeactivation() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStoppedListeningDueToInactivity() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStoppedListeningDueToInactivity() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStoppedListeningDueToTimeout() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStoppedListeningDueToTimeout() ;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& __cordl_internal_get__onUserFullTranscription() const;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& __cordl_internal_get__onUserFullTranscription() ;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& __cordl_internal_get__onUserPartialTranscription() const;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& __cordl_internal_get__onUserPartialTranscription() ;

constexpr void __cordl_internal_set_OnRequestFinalize(::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value) ;

constexpr void __cordl_internal_set__listeners(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*  value) ;

constexpr void __cordl_internal_set__onAborted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onAborting(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onCanceled(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set__onComplete(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value) ;

constexpr void __cordl_internal_set__onError(::Meta::WitAi::Events::WitErrorEvent*  value) ;

constexpr void __cordl_internal_set__onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set__onMicDataSent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value) ;

constexpr void __cordl_internal_set__onMinimumWakeThresholdHit(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onPartialResponse(::Meta::WitAi::Events::WitResponseEvent*  value) ;

constexpr void __cordl_internal_set__onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set__onRawResponse(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set__onRequestCompleted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onRequestCreated(::Meta::WitAi::Events::WitRequestCreatedEvent*  value) ;

constexpr void __cordl_internal_set__onRequestInitialized(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value) ;

constexpr void __cordl_internal_set__onRequestOptionSetup(::Meta::WitAi::Events::WitRequestOptionsEvent*  value) ;

constexpr void __cordl_internal_set__onResponse(::Meta::WitAi::Events::WitResponseEvent*  value) ;

constexpr void __cordl_internal_set__onSend(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value) ;

constexpr void __cordl_internal_set__onStartListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStoppedListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStoppedListeningDueToDeactivation(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStoppedListeningDueToInactivity(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStoppedListeningDueToTimeout(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onUserFullTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value) ;

constexpr void __cordl_internal_set__onUserPartialTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value) ;

/// @brief Method .ctor, addr 0x9e950f4, size 0x488, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnAborted, addr 0x9e95734, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnAborted() ;

/// @brief Method get_OnAborting, addr 0x9e9572c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnAborting() ;

/// @brief Method get_OnCanceled, addr 0x9e9573c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnCanceled() ;

/// @brief Method get_OnComplete, addr 0x9e9576c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* get_OnComplete() ;

/// @brief Method get_OnError, addr 0x9e9575c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitErrorEvent* get_OnError() ;

/// @brief Method get_OnFullTranscription, addr 0x9e957ac, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription() ;

/// @brief Method get_OnMicAudioLevelChanged, addr 0x9e9579c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicAudioLevelChanged() ;

/// @brief Method get_OnMicDataSent, addr 0x9e9570c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnMicDataSent() ;

/// @brief Method get_OnMicLevelChanged, addr 0x9e95794, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicLevelChanged() ;

/// @brief Method get_OnMicStartedListening, addr 0x9e9577c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStartedListening() ;

/// @brief Method get_OnMicStoppedListening, addr 0x9e9578c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnMicStoppedListening() ;

/// @brief Method get_OnMinimumWakeThresholdHit, addr 0x9e95704, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnMinimumWakeThresholdHit() ;

/// @brief Method get_OnPartialResponse, addr 0x9e9574c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitResponseEvent* get_OnPartialResponse() ;

/// @brief Method get_OnPartialTranscription, addr 0x9e957a4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription() ;

/// @brief Method get_OnRawResponse, addr 0x9e95744, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnRawResponse() ;

/// @brief Method get_OnRequestCompleted, addr 0x9e95764, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnRequestCompleted() ;

/// @brief Method get_OnRequestCreated, addr 0x9e956f4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitRequestCreatedEvent* get_OnRequestCreated() ;

/// @brief Method get_OnRequestInitialized, addr 0x9e956ec, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* get_OnRequestInitialized() ;

/// @brief Method get_OnRequestOptionSetup, addr 0x9e956e4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitRequestOptionsEvent* get_OnRequestOptionSetup() ;

/// @brief Method get_OnResponse, addr 0x9e95754, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::WitResponseEvent* get_OnResponse() ;

/// @brief Method get_OnSend, addr 0x9e956fc, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* get_OnSend() ;

/// @brief Method get_OnStartListening, addr 0x9e95774, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnStartListening() ;

/// @brief Method get_OnStoppedListening, addr 0x9e95784, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnStoppedListening() ;

/// @brief Method get_OnStoppedListeningDueToDeactivation, addr 0x9e95714, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnStoppedListeningDueToDeactivation() ;

/// @brief Method get_OnStoppedListeningDueToInactivity, addr 0x9e9571c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnStoppedListeningDueToInactivity() ;

/// @brief Method get_OnStoppedListeningDueToTimeout, addr 0x9e95724, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnStoppedListeningDueToTimeout() ;

/// @brief Method get_OnUserFullTranscription, addr 0x9e957bc, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::UserTranscriptionRequestEvent* get_OnUserFullTranscription() ;

/// @brief Method get_OnUserPartialTranscription, addr 0x9e957b4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::UserTranscriptionRequestEvent* get_OnUserPartialTranscription() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* i___Meta__WitAi__Interfaces__IAudioInputEvents() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* i___Meta__WitAi__Interfaces__ITranscriptionEvent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeechEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeechEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeechEvents(SpeechEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeechEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeechEvents(SpeechEvents const& ) = delete;

/// @brief Field EVENT_CATEGORY_ACTIVATION_CANCELATION offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_ACTIVATION_CANCELATION{u"Activation Cancelation Events"};

/// @brief Field EVENT_CATEGORY_ACTIVATION_INFO offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_ACTIVATION_INFO{u"Activation Info Events"};

/// @brief Field EVENT_CATEGORY_ACTIVATION_RESPONSE offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_ACTIVATION_RESPONSE{u"Activation Response Events"};

/// @brief Field EVENT_CATEGORY_ACTIVATION_SETUP offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_ACTIVATION_SETUP{u"Activation Setup Events"};

/// @brief Field EVENT_CATEGORY_AUDIO_EVENTS offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_AUDIO_EVENTS{u"Audio Events"};

/// @brief Field EVENT_CATEGORY_TRANSCRIPTION_EVENTS offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CATEGORY_TRANSCRIPTION_EVENTS{u"Transcription Events"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25686};

/// [EventCategory("Activation Setup Events")]
/// [Tooltip("Called prior to initialization for WitRequestOption customization")]
/// [FormerlySerializedAs("OnRequestOptionSetup")]
/// [SerializeField]
/// @brief Field _onRequestOptionSetup, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitRequestOptionsEvent*  ____onRequestOptionSetup;

/// [EventCategory("Activation Setup Events")]
/// [Tooltip("Called when a request is created.  This occurs as soon as a activation is called successfully.")]
/// [FormerlySerializedAs("OnRequestInitialized")]
/// [SerializeField]
/// @brief Field _onRequestInitialized, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::VoiceServiceRequestEvent*  ____onRequestInitialized;

/// @brief Field OnRequestFinalize, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  ___OnRequestFinalize;

/// [EventCategory("Activation Setup Events")]
/// [Tooltip("Called when a request is sent. This occurs immediately once data is being transmitted to the endpoint.")]
/// [FormerlySerializedAs("OnRequestCreated")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _onRequestCreated, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitRequestCreatedEvent*  ____onRequestCreated;

/// [EventCategory("Activation Setup Events")]
/// [Tooltip("Called when a request is sent. This occurs immediately once data is being transmitted to the endpoint.")]
/// [SerializeField]
/// @brief Field _onSend, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Events::VoiceServiceRequestEvent*  ____onSend;

/// [EventCategory("Activation Info Events")]
/// [Tooltip("Fired when the minimum wake threshold is hit after an activation.  Not called for ActivateImmediately")]
/// [FormerlySerializedAs("OnMinimumWakeThresholdHit")]
/// [SerializeField]
/// @brief Field _onMinimumWakeThresholdHit, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onMinimumWakeThresholdHit;

/// [EventCategory("Activation Info Events")]
/// [Tooltip("Fired when recording stops, the minimum volume threshold was hit, and data is being sent to the server.")]
/// [FormerlySerializedAs("OnMicDataSent")]
/// [SerializeField]
/// @brief Field _onMicDataSent, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onMicDataSent;

/// [EventCategory("Activation Info Events")]
/// [Tooltip("The Deactivate() method has been called ending the current activation.")]
/// [FormerlySerializedAs("OnStoppedListeningDueToDeactivation")]
/// [SerializeField]
/// @brief Field _onStoppedListeningDueToDeactivation, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStoppedListeningDueToDeactivation;

/// [EventCategory("Activation Info Events")]
/// [Tooltip("Called when the microphone input volume has been below the volume threshold for the specified duration and microphone data is no longer being collected")]
/// [FormerlySerializedAs("OnStoppedListeningDueToInactivity")]
/// [SerializeField]
/// @brief Field _onStoppedListeningDueToInactivity, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStoppedListeningDueToInactivity;

/// [EventCategory("Activation Info Events")]
/// [Tooltip("The microphone has stopped recording because maximum recording time has been hit for this activation")]
/// [FormerlySerializedAs("OnStoppedListeningDueToTimeout")]
/// [SerializeField]
/// @brief Field _onStoppedListeningDueToTimeout, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStoppedListeningDueToTimeout;

/// [EventCategory("Activation Cancelation Events")]
/// [Tooltip("Called when the activation is about to be aborted by a direct user interaction via DeactivateAndAbort.")]
/// [FormerlySerializedAs("OnAborting")]
/// [SerializeField]
/// @brief Field _onAborting, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onAborting;

/// [EventCategory("Activation Cancelation Events")]
/// [Tooltip("Called when the activation stopped because the network request was aborted. This can be via a timeout or call to DeactivateAndAbort.")]
/// [FormerlySerializedAs("OnAborted")]
/// [SerializeField]
/// @brief Field _onAborted, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onAborted;

/// [EventCategory("Activation Cancelation Events")]
/// [Tooltip("Called when a request has been canceled either prior to or after a request has begun transmission.  Returns the cancelation reason.")]
/// [FormerlySerializedAs("OnCanceled")]
/// [SerializeField]
/// @brief Field _onCanceled, offset: 0x78, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ____onCanceled;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when raw text response is returned from Wit.ai")]
/// [FormerlySerializedAs("OnRawResponse")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _onRawResponse, offset: 0x80, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ____onRawResponse;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when response from Wit.ai has been received from partial transcription")]
/// [FormerlySerializedAs("OnPartialResponse")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field _onPartialResponse, offset: 0x88, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitResponseEvent*  ____onPartialResponse;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when a response from Wit.ai has been received")]
/// [FormerlySerializedAs("OnResponse")]
/// [FormerlySerializedAs("onResponse")]
/// [SerializeField]
/// @brief Field _onResponse, offset: 0x90, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitResponseEvent*  ____onResponse;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when there was an error with a WitRequest  or the RuntimeConfiguration is not properly configured.")]
/// [FormerlySerializedAs("OnError")]
/// [FormerlySerializedAs("onError")]
/// [SerializeField]
/// @brief Field _onError, offset: 0x98, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitErrorEvent*  ____onError;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when a request has completed and all response and error callbacks have fired.  This is not called if the request was aborted.")]
/// [FormerlySerializedAs("OnRequestCompleted")]
/// [SerializeField]
/// @brief Field _onRequestCompleted, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onRequestCompleted;

/// [EventCategory("Activation Response Events")]
/// [Tooltip("Called when a request has been canceled, failed, or successfully completed")]
/// [FormerlySerializedAs("OnComplete")]
/// [SerializeField]
/// @brief Field _onComplete, offset: 0xa8, size: 0x8, def value: None
 ::Meta::WitAi::Events::VoiceServiceRequestEvent*  ____onComplete;

/// [EventCategory("Audio Events")]
/// [Tooltip("Called when the microphone has started collecting data collecting data to be sent to Wit.ai. There may be some buffering before data transmission starts.")]
/// [FormerlySerializedAs("OnStartListening")]
/// [FormerlySerializedAs("onStart")]
/// [SerializeField]
/// @brief Field _onStartListening, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStartListening;

/// [EventCategory("Audio Events")]
/// [Tooltip("Called when the voice service is no longer collecting data from the microphone")]
/// [FormerlySerializedAs("OnStoppedListening")]
/// [FormerlySerializedAs("onStopped")]
/// [SerializeField]
/// @brief Field _onStoppedListening, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStoppedListening;

/// [EventCategory("Audio Events")]
/// [Tooltip("Called when the volume level of the mic input has changed")]
/// [FormerlySerializedAs("OnMicLevelChanged")]
/// [SerializeField]
/// @brief Field _onMicLevelChanged, offset: 0xc0, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitMicLevelChangedEvent*  ____onMicLevelChanged;

/// [EventCategory("Transcription Events")]
/// [Tooltip("Message fired when a partial transcription has been received.")]
/// [FormerlySerializedAs("onPartialTranscription")]
/// [FormerlySerializedAs("OnPartialTranscription")]
/// [SerializeField]
/// @brief Field _onPartialTranscription, offset: 0xc8, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ____onPartialTranscription;

/// [FormerlySerializedAs("OnFullTranscription")]
/// [EventCategory("Transcription Events")]
/// [Tooltip("Message received when a complete transcription is received.")]
/// [FormerlySerializedAs("onFullTranscription")]
/// [FormerlySerializedAs("OnFullTranscription")]
/// [SerializeField]
/// @brief Field _onFullTranscription, offset: 0xd0, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ____onFullTranscription;

/// [Tooltip("Called on request transcription while audio is still being analyzed.  Also returns client user id as first parameter")]
/// [SerializeField]
/// @brief Field _onUserPartialTranscription, offset: 0xd8, size: 0x8, def value: None
 ::Meta::Voice::UserTranscriptionRequestEvent*  ____onUserPartialTranscription;

/// [Tooltip("Called on request transcription when audio has been completely transferred.  Also returns client user id as first parameter")]
/// [SerializeField]
/// @brief Field _onUserFullTranscription, offset: 0xe0, size: 0x8, def value: None
 ::Meta::Voice::UserTranscriptionRequestEvent*  ____onUserFullTranscription;

/// @brief Field _listeners, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*  ____listeners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onRequestOptionSetup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onRequestInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ___OnRequestFinalize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onRequestCreated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onSend) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onMinimumWakeThresholdHit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onMicDataSent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onStoppedListeningDueToDeactivation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onStoppedListeningDueToInactivity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onStoppedListeningDueToTimeout) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onAborting) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onAborted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onCanceled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onRawResponse) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onPartialResponse) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onResponse) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onError) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onRequestCompleted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onComplete) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onStartListening) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onStoppedListening) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onMicLevelChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onPartialTranscription) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onFullTranscription) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onUserPartialTranscription) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____onUserFullTranscription) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::SpeechEvents, ____listeners) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::SpeechEvents) == 0xf0, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
