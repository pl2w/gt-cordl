#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/SpeechEvents.hpp"
#include "Meta/WitAi/Events/zzzz__EventRegistry_impl.hpp"
#include "Meta/WitAi/Events/zzzz__SpeechEvents_def.hpp"
#include "Meta/Voice/zzzz__UserTranscriptionRequestEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceServiceRequestEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitErrorEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitRequestCreatedEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitRequestOptionsEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitResponseEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitTranscriptionEvent_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEvent_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnRequestOptionSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitRequestOptionsEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnRequestOptionSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e956e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestOptionSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnRequestInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceServiceRequestEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnRequestInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e956ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnRequestCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitRequestCreatedEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnRequestCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e956f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceServiceRequestEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnSend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e956fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMinimumWakeThresholdHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMinimumWakeThresholdHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMinimumWakeThresholdHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMicDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMicDataSent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9570c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicDataSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnStoppedListeningDueToDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToDeactivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToDeactivation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnStoppedListeningDueToInactivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToInactivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToInactivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnStoppedListeningDueToTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnAborting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnAborting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9572c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnAborting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnAborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnAborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnRawResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRawResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitResponseEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnPartialResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnPartialResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitResponseEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitErrorEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnRequestCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceServiceRequestEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9576c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnStartListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStartListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMicStartedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMicStartedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicStartedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMicStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMicStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicStoppedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMicLevelChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicLevelChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnMicAudioLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnMicAudioLevelChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9579c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicAudioLevelChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnPartialTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e957a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e957ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnUserPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::UserTranscriptionRequestEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnUserPartialTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e957b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnUserPartialTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents.get_OnUserFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::UserTranscriptionRequestEvent* (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::get_OnUserFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e957bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnUserFullTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::SpeechEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::SpeechEvents::*)()>(&::Meta::WitAi::Events::SpeechEvents::_ctor)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x9e950f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::WitRequestOptionsEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestOptionSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestOptionSetup;
}
constexpr ::Meta::WitAi::Events::WitRequestOptionsEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestOptionSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestOptionSetup;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onRequestOptionSetup(::Meta::WitAi::Events::WitRequestOptionsEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRequestOptionSetup = value;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestInitialized;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestInitialized;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onRequestInitialized(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRequestInitialized = value;
}
constexpr ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get_OnRequestFinalize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestFinalize;
}
constexpr ::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get_OnRequestFinalize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestFinalize;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set_OnRequestFinalize(::System::Action_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestFinalize = value;
}
constexpr ::Meta::WitAi::Events::WitRequestCreatedEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestCreated;
}
constexpr ::Meta::WitAi::Events::WitRequestCreatedEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestCreated;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onRequestCreated(::Meta::WitAi::Events::WitRequestCreatedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRequestCreated = value;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSend;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSend;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onSend(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSend = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMinimumWakeThresholdHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMinimumWakeThresholdHit;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMinimumWakeThresholdHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMinimumWakeThresholdHit;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onMinimumWakeThresholdHit(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMinimumWakeThresholdHit = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMicDataSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicDataSent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMicDataSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicDataSent;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onMicDataSent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMicDataSent = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToDeactivation;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToDeactivation;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onStoppedListeningDueToDeactivation(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStoppedListeningDueToDeactivation = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToInactivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToInactivity;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToInactivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToInactivity;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onStoppedListeningDueToInactivity(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStoppedListeningDueToInactivity = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToTimeout;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListeningDueToTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListeningDueToTimeout;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onStoppedListeningDueToTimeout(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStoppedListeningDueToTimeout = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onAborting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAborting;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onAborting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAborting;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onAborting(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAborting = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onAborted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAborted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onAborted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAborted;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onAborted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAborted = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCanceled;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCanceled;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onCanceled(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onCanceled = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRawResponse;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRawResponse;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onRawResponse(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRawResponse = value;
}
constexpr ::Meta::WitAi::Events::WitResponseEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onPartialResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialResponse;
}
constexpr ::Meta::WitAi::Events::WitResponseEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onPartialResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialResponse;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onPartialResponse(::Meta::WitAi::Events::WitResponseEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPartialResponse = value;
}
constexpr ::Meta::WitAi::Events::WitResponseEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onResponse;
}
constexpr ::Meta::WitAi::Events::WitResponseEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onResponse;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onResponse(::Meta::WitAi::Events::WitResponseEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onResponse = value;
}
constexpr ::Meta::WitAi::Events::WitErrorEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr ::Meta::WitAi::Events::WitErrorEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onError(::Meta::WitAi::Events::WitErrorEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onError = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onRequestCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRequestCompleted;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onRequestCompleted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRequestCompleted = value;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onComplete;
}
constexpr ::Meta::WitAi::Events::VoiceServiceRequestEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onComplete;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onComplete(::Meta::WitAi::Events::VoiceServiceRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onComplete = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStartListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStartListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStartListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStartListening;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onStartListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStartListening = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onStoppedListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStoppedListening;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onStoppedListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStoppedListening = value;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMicLevelChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicLevelChanged;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onMicLevelChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicLevelChanged;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMicLevelChanged = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onPartialTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onPartialTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPartialTranscription;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPartialTranscription = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onFullTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFullTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onFullTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFullTranscription;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onFullTranscription = value;
}
constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onUserPartialTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onUserPartialTranscription;
}
constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onUserPartialTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onUserPartialTranscription;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onUserPartialTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onUserPartialTranscription = value;
}
constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onUserFullTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onUserFullTranscription;
}
constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__onUserFullTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onUserFullTranscription;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__onUserFullTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onUserFullTranscription = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__listeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listeners;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>* const& Meta::WitAi::Events::SpeechEvents::__cordl_internal_get__listeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listeners;
}
constexpr void Meta::WitAi::Events::SpeechEvents::__cordl_internal_set__listeners(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Events::SpeechEvents*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listeners = value;
}
inline ::Meta::WitAi::Events::WitRequestOptionsEvent* Meta::WitAi::Events::SpeechEvents::get_OnRequestOptionSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestOptionSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitRequestOptionsEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* Meta::WitAi::Events::SpeechEvents::get_OnRequestInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceServiceRequestEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitRequestCreatedEvent* Meta::WitAi::Events::SpeechEvents::get_OnRequestCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitRequestCreatedEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* Meta::WitAi::Events::SpeechEvents::get_OnSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceServiceRequestEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnMinimumWakeThresholdHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMinimumWakeThresholdHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnMicDataSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicDataSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToDeactivation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToDeactivation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToInactivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToInactivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnStoppedListeningDueToTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListeningDueToTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnAborting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnAborting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnAborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnAborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::SpeechEvents::get_OnCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::SpeechEvents::get_OnRawResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRawResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitResponseEvent* Meta::WitAi::Events::SpeechEvents::get_OnPartialResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnPartialResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitResponseEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitResponseEvent* Meta::WitAi::Events::SpeechEvents::get_OnResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitResponseEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitErrorEvent* Meta::WitAi::Events::SpeechEvents::get_OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitErrorEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnRequestCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnRequestCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceServiceRequestEvent* Meta::WitAi::Events::SpeechEvents::get_OnComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceServiceRequestEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnStartListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStartListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnMicStartedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicStartedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnStoppedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnStoppedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Events::SpeechEvents::get_OnMicStoppedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicStoppedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::Events::SpeechEvents::get_OnMicLevelChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicLevelChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::Events::SpeechEvents::get_OnMicAudioLevelChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnMicAudioLevelChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::SpeechEvents::get_OnPartialTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::SpeechEvents::get_OnFullTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::Voice::UserTranscriptionRequestEvent* Meta::WitAi::Events::SpeechEvents::get_OnUserPartialTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnUserPartialTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::UserTranscriptionRequestEvent*>(this, ___internal_method);
}
inline ::Meta::Voice::UserTranscriptionRequestEvent* Meta::WitAi::Events::SpeechEvents::get_OnUserFullTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {"get_OnUserFullTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::UserTranscriptionRequestEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::Events::SpeechEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::SpeechEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::SpeechEvents* Meta::WitAi::Events::SpeechEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::SpeechEvents*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr  Meta::WitAi::Events::SpeechEvents::operator ::Meta::WitAi::Interfaces::ITranscriptionEvent*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* Meta::WitAi::Events::SpeechEvents::i___Meta__WitAi__Interfaces__ITranscriptionEvent() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr  Meta::WitAi::Events::SpeechEvents::operator ::Meta::WitAi::Interfaces::IAudioInputEvents*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::Events::SpeechEvents::i___Meta__WitAi__Interfaces__IAudioInputEvents() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::SpeechEvents::SpeechEvents()   {
}
