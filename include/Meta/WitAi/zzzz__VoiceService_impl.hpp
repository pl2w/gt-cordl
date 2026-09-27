#pragma once
// IWYU pragma private; include "Meta/WitAi/VoiceService.hpp"
#include "Meta/WitAi/zzzz__BaseSpeechService_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "Meta/Conduit/zzzz__IConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__IInstanceResolver_def.hpp"
#include "Meta/Conduit/zzzz__IParameterProvider_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/Intents/zzzz__WitIntentData_def.hpp"
#include "Meta/WitAi/Data/zzzz__VoiceSession_def.hpp"
#include "Meta/WitAi/Events/zzzz__SpeechEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioEventProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEvent_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceActivationHandler_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
#include "Meta/WitAi/zzzz__RegisteredMatchIntent_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService_<>c__DisplayClass39_0___Activate_b__0_d_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService__InitializeConduit_d__59_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_UseIntentAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_UseIntentAttributes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e7543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_UseIntentAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_UseConduit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_UseConduit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e755f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_UseConduit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_UsePlatformIntegrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_UsePlatformIntegrations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_UsePlatformIntegrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(bool)>(&::Meta::WitAi::VoiceService::set_UsePlatformIntegrations)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e75638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_WitConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_WitConfiguration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e754d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_WitConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_WitConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::VoiceService::set_WitConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"set_WitConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_ConduitDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Conduit::IConduitDispatcher* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_ConduitDispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_ConduitDispatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_ConduitDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::Conduit::IConduitDispatcher*)>(&::Meta::WitAi::VoiceService::set_ConduitDispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"set_ConduitDispatcher", {}, {::i2c::type_of<::Meta::Conduit::IConduitDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_IsRequestActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e75688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Meta::WitAi::VoiceService::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_MicActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_VoiceEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e756dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Events::VoiceEvents*)>(&::Meta::WitAi::VoiceService::set_VoiceEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e756e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.GetSpeechEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::SpeechEvents* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::GetSpeechEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e756ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e756fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.set_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Events::TelemetryEvents*)>(&::Meta::WitAi::VoiceService::set_TelemetryEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_AudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_AudioEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e7570c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_AudioEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_TranscriptionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_TranscriptionEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e7571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_TranscriptionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.get_ShouldSendMicData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::get_ShouldSendMicData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9e7572c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::StringW)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e759f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::VoiceService::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e75b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::VoiceService::*)(::StringW, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e75b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::VoiceService::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e75c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e75d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e75dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::ActivateImmediately)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e75eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::VoiceService::ActivateImmediately)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e75f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::ActivateImmediately)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e75ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::VoiceService::ActivateImmediately)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnRequestPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::OnRequestPartialResponse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e760e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnRequestSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::VoiceService::OnRequestSend)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e761f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnValidateEarly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::OnValidateEarly)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9e761fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.GetObjectsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Meta::WitAi::VoiceService::*)(::System::Type*)>(&::Meta::WitAi::VoiceService::GetObjectsOfType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e764f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"GetObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e7654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.InitializeEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::InitializeEventListeners)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9e76550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"InitializeEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::OnEnable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9e76690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.InitializeConduit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::InitializeConduit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e76880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"InitializeConduit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)()>(&::Meta::WitAi::VoiceService::OnDisable)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9e76958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.OnFinalTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::StringW)>(&::Meta::WitAi::VoiceService::OnFinalTranscription)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e76af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.GetVoiceSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::VoiceSession* (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::GetVoiceSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e76444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"GetVoiceSession", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.HandleResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::HandleResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e76b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.HandleIntents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::HandleIntents)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e76b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"HandleIntents", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.HandleIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::Data::Intents::WitIntentData*, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::HandleIntent)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x9e76cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"HandleIntent", {}, {::i2c::type_of<::Meta::WitAi::Data::Intents::WitIntentData*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService.ExecuteRegisteredMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService::*)(::Meta::WitAi::RegisteredMatchIntent*, ::Meta::WitAi::Data::Intents::WitIntentData*, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::VoiceService::ExecuteRegisteredMatch)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x9e77060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ExecuteRegisteredMatch", {}, {::i2c::type_of<::Meta::WitAi::RegisteredMatchIntent*>(), ::i2c::type_of<::Meta::WitAi::Data::Intents::WitIntentData*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& Meta::WitAi::VoiceService::__cordl_internal_get__witConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____witConfiguration;
}
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& Meta::WitAi::VoiceService::__cordl_internal_get__witConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____witConfiguration;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set__witConfiguration(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____witConfiguration = value;
}
constexpr ::Meta::Conduit::IParameterProvider*& Meta::WitAi::VoiceService::__cordl_internal_get__conduitParameterProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conduitParameterProvider;
}
constexpr ::Meta::Conduit::IParameterProvider* const& Meta::WitAi::VoiceService::__cordl_internal_get__conduitParameterProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conduitParameterProvider;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set__conduitParameterProvider(::Meta::Conduit::IParameterProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____conduitParameterProvider = value;
}
constexpr ::Meta::WitAi::Events::VoiceEvents*& Meta::WitAi::VoiceService::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::Meta::WitAi::Events::VoiceEvents* const& Meta::WitAi::VoiceService::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set_events(::Meta::WitAi::Events::VoiceEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr ::Meta::WitAi::Events::TelemetryEvents*& Meta::WitAi::VoiceService::__cordl_internal_get_telemetryEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetryEvents;
}
constexpr ::Meta::WitAi::Events::TelemetryEvents* const& Meta::WitAi::VoiceService::__cordl_internal_get_telemetryEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetryEvents;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set_telemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telemetryEvents = value;
}
constexpr ::Meta::Conduit::IConduitDispatcher*& Meta::WitAi::VoiceService::__cordl_internal_get__ConduitDispatcher_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConduitDispatcher_k__BackingField;
}
constexpr ::Meta::Conduit::IConduitDispatcher* const& Meta::WitAi::VoiceService::__cordl_internal_get__ConduitDispatcher_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConduitDispatcher_k__BackingField;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set__ConduitDispatcher_k__BackingField(::Meta::Conduit::IConduitDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConduitDispatcher_k__BackingField = value;
}
constexpr bool& Meta::WitAi::VoiceService::__cordl_internal_get__waitingForFirstPartialAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForFirstPartialAudio;
}
constexpr bool const& Meta::WitAi::VoiceService::__cordl_internal_get__waitingForFirstPartialAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForFirstPartialAudio;
}
constexpr void Meta::WitAi::VoiceService::__cordl_internal_set__waitingForFirstPartialAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitingForFirstPartialAudio = value;
}
inline bool Meta::WitAi::VoiceService::get_UseIntentAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_UseIntentAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::VoiceService::get_UseConduit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_UseConduit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::VoiceService::get_UsePlatformIntegrations()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_UsePlatformIntegrations(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::VoiceService::get_WitConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_WitConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_WitConfiguration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"set_WitConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Conduit::IConduitDispatcher* Meta::WitAi::VoiceService::get_ConduitDispatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_ConduitDispatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Conduit::IConduitDispatcher*>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_ConduitDispatcher(::Meta::Conduit::IConduitDispatcher*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"set_ConduitDispatcher", {}, {::i2c::type_of<::Meta::Conduit::IConduitDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::VoiceService::get_IsRequestActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Meta::WitAi::VoiceService::get_TranscriptionProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::VoiceService::get_MicActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceEvents* Meta::WitAi::VoiceService::get_VoiceEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Events::SpeechEvents* Meta::WitAi::VoiceService::GetSpeechEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::SpeechEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Meta::WitAi::VoiceService::get_TelemetryEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::VoiceService::get_AudioEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_AudioEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* Meta::WitAi::VoiceService::get_TranscriptionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"get_TranscriptionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(this, ___internal_method);
}
inline bool Meta::WitAi::VoiceService::get_ShouldSendMicData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::Activate(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::VoiceService::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::VoiceService::Activate(::StringW  text, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestEvents);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::VoiceService::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions, requestEvents);
}
inline void Meta::WitAi::VoiceService::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestOptions);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::VoiceService::Activate(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::VoiceService::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Meta::WitAi::VoiceService::ActivateImmediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestOptions);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::VoiceService::ActivateImmediately(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::VoiceService::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Meta::WitAi::VoiceService::OnRequestPartialResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, responseNode);
}
inline void Meta::WitAi::VoiceService::OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::VoiceService::OnValidateEarly(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, responseNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Meta::WitAi::VoiceService::GetObjectsOfType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"GetObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, type);
}
inline void Meta::WitAi::VoiceService::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::InitializeEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"InitializeEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::VoiceService::InitializeConduit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"InitializeConduit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::VoiceService::OnFinalTranscription(::StringW  transcription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline ::Meta::WitAi::Data::VoiceSession* Meta::WitAi::VoiceService::GetVoiceSession(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"GetVoiceSession", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::VoiceSession*>(this, ___internal_method, response);
}
inline void Meta::WitAi::VoiceService::HandleResponse(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::VoiceService*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::VoiceService::HandleIntents(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"HandleIntents", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Meta::WitAi::VoiceService::HandleIntent(::Meta::WitAi::Data::Intents::WitIntentData*  intent, ::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"HandleIntent", {}, {::i2c::type_of<::Meta::WitAi::Data::Intents::WitIntentData*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intent, response);
}
inline void Meta::WitAi::VoiceService::ExecuteRegisteredMatch(::Meta::WitAi::RegisteredMatchIntent*  registeredMethod, ::Meta::WitAi::Data::Intents::WitIntentData*  intent, ::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService*>(),
                        {"ExecuteRegisteredMatch", {}, {::i2c::type_of<::Meta::WitAi::RegisteredMatchIntent*>(), ::i2c::type_of<::Meta::WitAi::Data::Intents::WitIntentData*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registeredMethod, intent, response);
}
inline ::Meta::WitAi::VoiceService* Meta::WitAi::VoiceService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::VoiceService*>());
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::WitAi::IVoiceService*() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* Meta::WitAi::VoiceService::i___Meta__WitAi__IVoiceService() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::WitAi::IVoiceEventProvider*() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* Meta::WitAi::VoiceService::i___Meta__WitAi__IVoiceEventProvider() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::WitAi::ITelemetryEventsProvider*() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* Meta::WitAi::VoiceService::i___Meta__WitAi__ITelemetryEventsProvider() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::WitAi::IVoiceActivationHandler*() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* Meta::WitAi::VoiceService::i___Meta__WitAi__IVoiceActivationHandler() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Conduit::IInstanceResolver"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::Conduit::IInstanceResolver*() noexcept {
return static_cast<::Meta::Conduit::IInstanceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IInstanceResolver"
constexpr ::Meta::Conduit::IInstanceResolver* Meta::WitAi::VoiceService::i___Meta__Conduit__IInstanceResolver() noexcept {
return static_cast<::Meta::Conduit::IInstanceResolver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr  Meta::WitAi::VoiceService::operator ::Meta::WitAi::Interfaces::IAudioEventProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr ::Meta::WitAi::Interfaces::IAudioEventProvider* Meta::WitAi::VoiceService::i___Meta__WitAi__Interfaces__IAudioEventProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioEventProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::VoiceService::VoiceService()   {
}
//  Writing Method size for method: ::Meta::WitAi::VoiceService___c__DisplayClass39_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::VoiceService___c__DisplayClass39_0::*)()>(&::Meta::WitAi::VoiceService___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e75b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VoiceService___c__DisplayClass39_0._Activate_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::VoiceService___c__DisplayClass39_0::*)()>(&::Meta::WitAi::VoiceService___c__DisplayClass39_0::_Activate_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e775a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService___c__DisplayClass39_0*>(),
                        {"<Activate>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::VoiceService>& Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::VoiceService> const& Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::VoiceService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Meta::WitAi::VoiceService___c__DisplayClass39_0::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
inline void Meta::WitAi::VoiceService___c__DisplayClass39_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::VoiceService___c__DisplayClass39_0::_Activate_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VoiceService___c__DisplayClass39_0*>(),
                        {"<Activate>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method);
}
inline ::Meta::WitAi::VoiceService___c__DisplayClass39_0* Meta::WitAi::VoiceService___c__DisplayClass39_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::VoiceService___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::VoiceService___c__DisplayClass39_0::VoiceService___c__DisplayClass39_0()   {
}
