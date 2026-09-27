#pragma once
// IWYU pragma private; include "Meta/WitAi/WitService.hpp"
#include "Meta/WitAi/Events/zzzz__IWitByteDataReadyHandler_impl.hpp"
#include "Meta/WitAi/Events/zzzz__IWitByteDataSentHandler_impl.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/zzzz__WitService_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__IPubSubAdapter_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketAdapter_def.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IVoiceServiceRequestProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IWitConfigurationProvider_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceActivationHandler_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigProvider_def.hpp"
#include "Meta/WitAi/zzzz__WitService_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitService.get__log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get__log)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7f804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get__log", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_PubSub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::IPubSubAdapter* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_PubSub)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e7f80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_PubSub", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_Configuration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e7f968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_Active)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e78184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_IsRequestActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e78258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_VoiceEventProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IVoiceEventProvider* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_VoiceEventProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_VoiceEventProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.set_VoiceEventProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::IVoiceEventProvider*)>(&::Meta::WitAi::WitService::set_VoiceEventProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_VoiceEventProvider", {}, {::i2c::type_of<::Meta::WitAi::IVoiceEventProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_TelemetryEventsProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::ITelemetryEventsProvider* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_TelemetryEventsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TelemetryEventsProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.set_TelemetryEventsProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::ITelemetryEventsProvider*)>(&::Meta::WitAi::WitService::set_TelemetryEventsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_TelemetryEventsProvider", {}, {::i2c::type_of<::Meta::WitAi::ITelemetryEventsProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_ConfigurationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IWitRuntimeConfigProvider* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_ConfigurationProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_ConfigurationProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.set_ConfigurationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::IWitRuntimeConfigProvider*)>(&::Meta::WitAi::WitService::set_ConfigurationProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_ConfigurationProvider", {}, {::i2c::type_of<::Meta::WitAi::IWitRuntimeConfigProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e7f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_VoiceEvents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e7fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e7fafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TranscriptionProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Meta::WitAi::WitService::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x9e782e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_TranscriptionProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_RequestProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_RequestProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_RequestProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.set_RequestProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*)>(&::Meta::WitAi::WitService::set_RequestProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7fbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_RequestProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_MicActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e78704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_MicActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.get_ShouldSendMicData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::get_ShouldSendMicData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e7fbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_ShouldSendMicData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.IsConfigurationValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::IsConfigurationValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e7fbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitService*>(),
                    {::i2c::class_of<::Meta::WitAi::WitService*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.GetTextRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitService::GetTextRequest)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9e7fc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetTextRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.GetAudioRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitService::GetAudioRequest)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x9e7fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetAudioRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.GetTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::GetTimeoutMs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e801e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetTimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e80240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::OnEnable)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x9e80300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::OnDisable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x9e80aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.RefreshConfigurationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::RefreshConfigurationSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e80ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitService*>(),
                    {::i2c::class_of<::Meta::WitAi::WitService*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Meta::WitAi::WitService::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e80cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitService*>(),
                    {::i2c::class_of<::Meta::WitAi::WitService*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.SetMicDelegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(bool)>(&::Meta::WitAi::WitService::SetMicDelegates)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x9e80648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetMicDelegates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.SetupWebSockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::SetupWebSockets)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9e7f824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetupWebSockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.ProcessForwardedWebSocketResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)(::StringW, ::StringW, ::StringW, ::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::WitAi::WitService::ProcessForwardedWebSocketResponse)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9e80cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ProcessForwardedWebSocketResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.HandleWebSocketRequestGeneration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::WitService::HandleWebSocketRequestGeneration)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9e80e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleWebSocketRequestGeneration", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.IsWebSocketRequestWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::WitService::IsWebSocketRequestWrapped)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e810f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsWebSocketRequestWrapped", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.IsWebSocketRequestWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::WitService::IsWebSocketRequestWrapped)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e817b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsWebSocketRequestWrapped", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e81838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e81904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9e78e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::ActivateImmediately)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e81a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::WitService::ActivateImmediately)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e81b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::WitService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitService::ActivateImmediately)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e79284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.SendRecordingRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::SendRecordingRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e81bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitService*>(),
                    {::i2c::class_of<::Meta::WitAi::WitService*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.SetupRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::WitService::SetupRequest)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x9e811dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetupRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.ExecuteRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::WitService::ExecuteRequest)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e81c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ExecuteRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::StringW)>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e81d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e81e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::WitService::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitService::Activate)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9e78a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::StopRecording)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e81970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnWitReadyForData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::OnWitReadyForData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e81e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnWitReadyForData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::StartRecording)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e819b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnAudioBufferStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::Voice::VoiceAudioInputState)>(&::Meta::WitAi::WitService::OnAudioBufferStateChange)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e81edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnAudioBufferStateChange", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnByteDataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitService::OnByteDataReady)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e81fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnByteDataReady", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnMicSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*, float_t)>(&::Meta::WitAi::WitService::OnMicSampleReady)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x9e82120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::IsInputStreamReady)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e825ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsInputStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.WriteAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitService::WriteAudio)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e82940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"WriteAudio", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e82a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(float_t)>(&::Meta::WitAi::WitService::OnMicLevelChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e82a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnTranscriptionMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(float_t)>(&::Meta::WitAi::WitService::OnTranscriptionMicLevelChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e82b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnTranscriptionMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.FinalizeAudioDurationTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::FinalizeAudioDurationTracker)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e82c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"FinalizeAudioDurationTracker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::Deactivate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e793b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::WitService::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e82dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateAndAbortRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e79424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateAndAbortRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.DeactivateDueToTimeLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::DeactivateDueToTimeLimit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e81cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateDueToTimeLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.DeactivateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::UnityEngine::Events::UnityEvent*, bool)>(&::Meta::WitAi::WitService::DeactivateRequest)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9e826a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateRequest", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.DeactivateWitRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, bool)>(&::Meta::WitAi::WitService::DeactivateWitRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e82e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateWitRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::StringW)>(&::Meta::WitAi::WitService::OnPartialTranscription)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e82edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnPartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.HandleResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::WitService::HandleResult)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e82ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleResult", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService.HandleComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::WitService::HandleComplete)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9e82f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)()>(&::Meta::WitAi::WitService::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9e831c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService._OnMicSampleReady_b__92_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitService::_OnMicSampleReady_b__92_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e83344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"<OnMicSampleReady>b__92_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService._OnMicSampleReady_b__92_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitService::_OnMicSampleReady_b__92_1)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9e833cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"<OnMicSampleReady>b__92_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::WitService::__cordl_internal_get___log_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____log_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::WitService::__cordl_internal_get___log_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____log_k__BackingField;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____log_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::WitService::__cordl_internal_get__lastMinVolumeLevelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMinVolumeLevelTime;
}
constexpr float_t const& Meta::WitAi::WitService::__cordl_internal_get__lastMinVolumeLevelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMinVolumeLevelTime;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__lastMinVolumeLevelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMinVolumeLevelTime = value;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& Meta::WitAi::WitService::__cordl_internal_get__webSocketAdapter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketAdapter;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& Meta::WitAi::WitService::__cordl_internal_get__webSocketAdapter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketAdapter;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__webSocketAdapter(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocketAdapter = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Meta::WitAi::WitService::__cordl_internal_get__recordingRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingRequest;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Meta::WitAi::WitService::__cordl_internal_get__recordingRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingRequest;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__recordingRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingRequest = value;
}
constexpr bool& Meta::WitAi::WitService::__cordl_internal_get__isSoundWakeActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSoundWakeActive;
}
constexpr bool const& Meta::WitAi::WitService::__cordl_internal_get__isSoundWakeActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSoundWakeActive;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__isSoundWakeActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSoundWakeActive = value;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*& Meta::WitAi::WitService::__cordl_internal_get__lastSampleMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleMarker;
}
constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* const& Meta::WitAi::WitService::__cordl_internal_get__lastSampleMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleMarker;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__lastSampleMarker(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSampleMarker = value;
}
constexpr bool& Meta::WitAi::WitService::__cordl_internal_get__minKeepAliveWasHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minKeepAliveWasHit;
}
constexpr bool const& Meta::WitAi::WitService::__cordl_internal_get__minKeepAliveWasHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minKeepAliveWasHit;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__minKeepAliveWasHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minKeepAliveWasHit = value;
}
constexpr bool& Meta::WitAi::WitService::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Meta::WitAi::WitService::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr int64_t& Meta::WitAi::WitService::__cordl_internal_get__minSampleByteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSampleByteCount;
}
constexpr int64_t const& Meta::WitAi::WitService::__cordl_internal_get__minSampleByteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSampleByteCount;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__minSampleByteCount(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minSampleByteCount = value;
}
constexpr ::Meta::WitAi::IVoiceEventProvider*& Meta::WitAi::WitService::__cordl_internal_get__voiceEventProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceEventProvider;
}
constexpr ::Meta::WitAi::IVoiceEventProvider* const& Meta::WitAi::WitService::__cordl_internal_get__voiceEventProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceEventProvider;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__voiceEventProvider(::Meta::WitAi::IVoiceEventProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceEventProvider = value;
}
constexpr ::Meta::WitAi::ITelemetryEventsProvider*& Meta::WitAi::WitService::__cordl_internal_get__telemetryEventsProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryEventsProvider;
}
constexpr ::Meta::WitAi::ITelemetryEventsProvider* const& Meta::WitAi::WitService::__cordl_internal_get__telemetryEventsProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryEventsProvider;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__telemetryEventsProvider(::Meta::WitAi::ITelemetryEventsProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryEventsProvider = value;
}
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider*& Meta::WitAi::WitService::__cordl_internal_get__runtimeConfigProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeConfigProvider;
}
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* const& Meta::WitAi::WitService::__cordl_internal_get__runtimeConfigProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeConfigProvider;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__runtimeConfigProvider(::Meta::WitAi::IWitRuntimeConfigProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runtimeConfigProvider = value;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider*& Meta::WitAi::WitService::__cordl_internal_get__activeTranscriptionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTranscriptionProvider;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* const& Meta::WitAi::WitService::__cordl_internal_get__activeTranscriptionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTranscriptionProvider;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__activeTranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTranscriptionProvider = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::WitService::__cordl_internal_get__timeLimitCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLimitCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::WitService::__cordl_internal_get__timeLimitCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeLimitCoroutine;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__timeLimitCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeLimitCoroutine = value;
}
constexpr bool& Meta::WitAi::WitService::__cordl_internal_get__receivedTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedTranscription;
}
constexpr bool const& Meta::WitAi::WitService::__cordl_internal_get__receivedTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedTranscription;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__receivedTranscription(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedTranscription = value;
}
constexpr float_t& Meta::WitAi::WitService::__cordl_internal_get__lastWordTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWordTime;
}
constexpr float_t const& Meta::WitAi::WitService::__cordl_internal_get__lastWordTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWordTime;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__lastWordTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWordTime = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*& Meta::WitAi::WitService::__cordl_internal_get__transmitRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitRequests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>* const& Meta::WitAi::WitService::__cordl_internal_get__transmitRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitRequests;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__transmitRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transmitRequests = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::WitService::__cordl_internal_get__queueHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueHandler;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::WitService::__cordl_internal_get__queueHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueHandler;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__queueHandler(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queueHandler = value;
}
constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>& Meta::WitAi::WitService::__cordl_internal_get__dataReadyHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataReadyHandlers;
}
constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*> const& Meta::WitAi::WitService::__cordl_internal_get__dataReadyHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataReadyHandlers;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__dataReadyHandlers(::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataReadyHandlers = value;
}
constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>& Meta::WitAi::WitService::__cordl_internal_get__dataSentHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSentHandlers;
}
constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*> const& Meta::WitAi::WitService::__cordl_internal_get__dataSentHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSentHandlers;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__dataSentHandlers(::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataSentHandlers = value;
}
constexpr ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>& Meta::WitAi::WitService::__cordl_internal_get__dynamicEntityProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicEntityProviders;
}
constexpr ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*> const& Meta::WitAi::WitService::__cordl_internal_get__dynamicEntityProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicEntityProviders;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__dynamicEntityProviders(::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicEntityProviders = value;
}
constexpr float_t& Meta::WitAi::WitService::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr float_t const& Meta::WitAi::WitService::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
constexpr ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*& Meta::WitAi::WitService::__cordl_internal_get__RequestProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestProvider_k__BackingField;
}
constexpr ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider* const& Meta::WitAi::WitService::__cordl_internal_get__RequestProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestProvider_k__BackingField;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__RequestProvider_k__BackingField(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestProvider_k__BackingField = value;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& Meta::WitAi::WitService::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& Meta::WitAi::WitService::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__buffer(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr bool& Meta::WitAi::WitService::__cordl_internal_get__bufferDelegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferDelegates;
}
constexpr bool const& Meta::WitAi::WitService::__cordl_internal_get__bufferDelegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferDelegates;
}
constexpr void Meta::WitAi::WitService::__cordl_internal_set__bufferDelegates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferDelegates = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::WitService::get__log()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get__log", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::PubSub::IPubSubAdapter* Meta::WitAi::WitService::get_PubSub()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_PubSub", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::IPubSubAdapter*>(this, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::WitService::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService::get_IsRequestActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::IVoiceEventProvider* Meta::WitAi::WitService::get_VoiceEventProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_VoiceEventProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IVoiceEventProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::set_VoiceEventProvider(::Meta::WitAi::IVoiceEventProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_VoiceEventProvider", {}, {::i2c::type_of<::Meta::WitAi::IVoiceEventProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::ITelemetryEventsProvider* Meta::WitAi::WitService::get_TelemetryEventsProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TelemetryEventsProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::ITelemetryEventsProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::set_TelemetryEventsProvider(::Meta::WitAi::ITelemetryEventsProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_TelemetryEventsProvider", {}, {::i2c::type_of<::Meta::WitAi::ITelemetryEventsProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::IWitRuntimeConfigProvider* Meta::WitAi::WitService::get_ConfigurationProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_ConfigurationProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IWitRuntimeConfigProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::set_ConfigurationProvider(::Meta::WitAi::IWitRuntimeConfigProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_ConfigurationProvider", {}, {::i2c::type_of<::Meta::WitAi::IWitRuntimeConfigProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* Meta::WitAi::WitService::get_RuntimeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceEvents* Meta::WitAi::WitService::get_VoiceEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Meta::WitAi::WitService::get_TelemetryEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Meta::WitAi::WitService::get_TranscriptionProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_TranscriptionProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_TranscriptionProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider* Meta::WitAi::WitService::get_RequestProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_RequestProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::set_RequestProvider(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"set_RequestProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::WitService::get_MicActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_MicActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService::get_ShouldSendMicData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"get_ShouldSendMicData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService::IsConfigurationValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitService*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::WitService::GetTextRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetTextRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::WitService::GetAudioRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetAudioRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline int32_t Meta::WitAi::WitService::GetTimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"GetTimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::RefreshConfigurationSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitService*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitService*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void Meta::WitAi::WitService::SetMicDelegates(bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetMicDelegates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
inline void Meta::WitAi::WitService::SetupWebSockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetupWebSockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService::ProcessForwardedWebSocketResponse(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ProcessForwardedWebSocketResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, topicId, requestId, clientUserId, responseChunk);
}
inline void Meta::WitAi::WitService::HandleWebSocketRequestGeneration(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleWebSocketRequestGeneration", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webSocketRequest);
}
inline bool Meta::WitAi::WitService::IsWebSocketRequestWrapped(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsWebSocketRequestWrapped", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, webSocketRequest);
}
inline bool Meta::WitAi::WitService::IsWebSocketRequestWrapped(::Meta::WitAi::Requests::VoiceServiceRequest*  voiceServiceRequest, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsWebSocketRequestWrapped", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, voiceServiceRequest, webSocketRequest);
}
inline void Meta::WitAi::WitService::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestOptions);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::WitService::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Meta::WitAi::WitService::ActivateImmediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestOptions);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::WitService::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Meta::WitAi::WitService::SendRecordingRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitService*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::SetupRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  newRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"SetupRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRequest);
}
inline void Meta::WitAi::WitService::ExecuteRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  newRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"ExecuteRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRequest);
}
inline void Meta::WitAi::WitService::Activate(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Meta::WitAi::WitService::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, requestOptions);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::WitService::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions, requestEvents);
}
inline void Meta::WitAi::WitService::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnWitReadyForData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnWitReadyForData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnAudioBufferStateChange(::Meta::Voice::VoiceAudioInputState  audioInputState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnAudioBufferStateChange", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioInputState);
}
inline void Meta::WitAi::WitService::OnByteDataReady(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnByteDataReady", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void Meta::WitAi::WitService::OnMicSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker, levelMax);
}
inline bool Meta::WitAi::WitService::IsInputStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"IsInputStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::WriteAudio(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"WriteAudio", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void Meta::WitAi::WitService::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::OnMicLevelChanged(float_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void Meta::WitAi::WitService::OnTranscriptionMicLevelChanged(float_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnTranscriptionMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void Meta::WitAi::WitService::FinalizeAudioDurationTracker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"FinalizeAudioDurationTracker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::DeactivateAndAbortRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateAndAbortRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::WitService::DeactivateAndAbortRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateAndAbortRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::WitService::DeactivateDueToTimeLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateDueToTimeLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::DeactivateRequest(::UnityEngine::Events::UnityEvent*  onComplete, bool  abort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateRequest", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete, abort);
}
inline void Meta::WitAi::WitService::DeactivateWitRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request, bool  abort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"DeactivateWitRequest", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, abort);
}
inline void Meta::WitAi::WitService::OnPartialTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"OnPartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Meta::WitAi::WitService::HandleResult(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleResult", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::WitService::HandleComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"HandleComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::WitService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService::_OnMicSampleReady_b__92_0(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"<OnMicSampleReady>b__92_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void Meta::WitAi::WitService::_OnMicSampleReady_b__92_1(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService*>(),
                        {"<OnMicSampleReady>b__92_1", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline ::Meta::WitAi::WitService* Meta::WitAi::WitService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitService*>());
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr  Meta::WitAi::WitService::operator ::Meta::WitAi::IVoiceEventProvider*() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* Meta::WitAi::WitService::i___Meta__WitAi__IVoiceEventProvider() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr  Meta::WitAi::WitService::operator ::Meta::WitAi::IVoiceActivationHandler*() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* Meta::WitAi::WitService::i___Meta__WitAi__IVoiceActivationHandler() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr  Meta::WitAi::WitService::operator ::Meta::WitAi::ITelemetryEventsProvider*() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* Meta::WitAi::WitService::i___Meta__WitAi__ITelemetryEventsProvider() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr  Meta::WitAi::WitService::operator ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* Meta::WitAi::WitService::i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr  Meta::WitAi::WitService::operator ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* Meta::WitAi::WitService::i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitService::WitService()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)(int32_t)>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e8364c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)()>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e83674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)()>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9e83678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)()>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e838bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)()>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e838c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::*)()>(&::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e838fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::WitService>& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::WitService> const& Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102::WitService__DeactivateDueToTimeLimit_d__102()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitService___c__DisplayClass86_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService___c__DisplayClass86_0::*)()>(&::Meta::WitAi::WitService___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e835a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService___c__DisplayClass86_0._Activate_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::WitService___c__DisplayClass86_0::*)()>(&::Meta::WitAi::WitService___c__DisplayClass86_0::_Activate_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e835ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass86_0*>(),
                        {"<Activate>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::WitService>& Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::WitService> const& Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::WitService___c__DisplayClass86_0::__cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void Meta::WitAi::WitService___c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::WitService___c__DisplayClass86_0::_Activate_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass86_0*>(),
                        {"<Activate>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method);
}
inline ::Meta::WitAi::WitService___c__DisplayClass86_0* Meta::WitAi::WitService___c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitService___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitService___c__DisplayClass86_0::WitService___c__DisplayClass86_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitService___c__DisplayClass82_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService___c__DisplayClass82_0::*)()>(&::Meta::WitAi::WitService___c__DisplayClass82_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e83528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass82_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitService___c__DisplayClass82_0._SetupRequest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitService___c__DisplayClass82_0::*)()>(&::Meta::WitAi::WitService___c__DisplayClass82_0::_SetupRequest_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e83530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass82_0*>(),
                        {"<SetupRequest>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::WitService>& Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::WitService> const& Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_get_newRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newRequest;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_get_newRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newRequest;
}
constexpr void Meta::WitAi::WitService___c__DisplayClass82_0::__cordl_internal_set_newRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newRequest = value;
}
inline void Meta::WitAi::WitService___c__DisplayClass82_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass82_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitService___c__DisplayClass82_0::_SetupRequest_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitService___c__DisplayClass82_0*>(),
                        {"<SetupRequest>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitService___c__DisplayClass82_0* Meta::WitAi::WitService___c__DisplayClass82_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitService___c__DisplayClass82_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitService___c__DisplayClass82_0::WitService___c__DisplayClass82_0()   {
}
