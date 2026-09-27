#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKImpl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseAndroidConnectionImpl_1_impl.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKImpl_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceActivationHandler_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__IVCBindingEvents_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKBinding_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKListenerBinding_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::IVoiceService*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb945f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IVoiceService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_PlatformSupportsWit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_PlatformSupportsWit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb94603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_PlatformSupportsWit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Active)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb94c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_IsRequestActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94c338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_MicActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb94c34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_MicActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.SetRuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::SetRuntimeConfiguration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb946028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"SetRuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_Requests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Requests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_Requests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_TranscriptionProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_TranscriptionProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::CanActivateAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"CanActivateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.CanSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::CanSend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"CanSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::Connect)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb94c388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::Disconnect)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb94c688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.OnStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::OnStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"OnStoppedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb94c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb94c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb94ca98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::Deactivate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb94cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb94cd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"DeactivateAndAbortRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.OnServiceNotAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::OnServiceNotAvailable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb94cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"OnServiceNotAvailable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_VoiceEvents)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb94cee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.set_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Events::VoiceEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_VoiceEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94cf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_VoiceEvents", {}, {::i2c::type_of<::Meta::WitAi::Events::VoiceEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb94d034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.set_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Events::TelemetryEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TelemetryEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_TelemetryEvents", {}, {::i2c::type_of<::Meta::WitAi::Events::TelemetryEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKImpl.GetRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*, ::Meta::Voice::NLPRequestInputType, bool)>(&::Oculus::Voice::Bindings::Android::VoiceSDKImpl::GetRequest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb94c8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"GetRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__isServiceAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServiceAvailable;
}
constexpr bool const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__isServiceAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServiceAvailable;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set__isServiceAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isServiceAvailable = value;
}
constexpr ::System::Action*& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get_OnServiceNotAvailableEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServiceNotAvailableEvent;
}
constexpr ::System::Action* const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get_OnServiceNotAvailableEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServiceNotAvailableEvent;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set_OnServiceNotAvailableEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnServiceNotAvailableEvent = value;
}
constexpr ::Meta::WitAi::IVoiceService*& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__baseVoiceService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseVoiceService;
}
constexpr ::Meta::WitAi::IVoiceService* const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__baseVoiceService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseVoiceService;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set__baseVoiceService(::Meta::WitAi::IVoiceService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseVoiceService = value;
}
constexpr bool& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get_eventBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventBinding;
}
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding* const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get_eventBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventBinding;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set_eventBinding(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventBinding = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__Requests_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__Requests_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests_k__BackingField;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set__Requests_k__BackingField(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Requests_k__BackingField = value;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider*& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__TranscriptionProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TranscriptionProvider_k__BackingField;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* const& Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_get__TranscriptionProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TranscriptionProvider_k__BackingField;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKImpl::__cordl_internal_set__TranscriptionProvider_k__BackingField(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TranscriptionProvider_k__BackingField = value;
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::_ctor(::Meta::WitAi::IVoiceService*  baseVoiceService)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IVoiceService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseVoiceService);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_PlatformSupportsWit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_PlatformSupportsWit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_IsRequestActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_MicActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_MicActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::SetRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"SetRuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration);
}
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Requests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_Requests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TranscriptionProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_TranscriptionProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_TranscriptionProvider", {}, {::i2c::type_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::CanActivateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"CanActivateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKImpl::CanSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"CanSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::Connect(::StringW  version)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::OnStoppedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"OnStoppedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::DeactivateAndAbortRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"DeactivateAndAbortRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::OnServiceNotAvailable(::StringW  error, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"OnServiceNotAvailable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message);
}
inline ::Meta::WitAi::Events::VoiceEvents* Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_VoiceEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_VoiceEvents", {}, {::i2c::type_of<::Meta::WitAi::Events::VoiceEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TelemetryEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"set_TelemetryEvents", {}, {::i2c::type_of<::Meta::WitAi::Events::TelemetryEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::Bindings::Android::VoiceSDKImpl::GetRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::Meta::Voice::NLPRequestInputType  inputType, bool  audioImmediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(),
                        {"GetRequest", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents, inputType, audioImmediate);
}
inline ::Oculus::Voice::Bindings::Android::VoiceSDKImpl* Oculus::Voice::Bindings::Android::VoiceSDKImpl::New_ctor(::Meta::WitAi::IVoiceService*  baseVoiceService)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Bindings::Android::VoiceSDKImpl*>(baseVoiceService));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceService"
constexpr  Oculus::Voice::Bindings::Android::VoiceSDKImpl::operator ::Meta::WitAi::IVoiceService*() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceService"
constexpr ::Meta::WitAi::IVoiceService* Oculus::Voice::Bindings::Android::VoiceSDKImpl::i___Meta__WitAi__IVoiceService() noexcept {
return static_cast<::Meta::WitAi::IVoiceService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr  Oculus::Voice::Bindings::Android::VoiceSDKImpl::operator ::Meta::WitAi::IVoiceEventProvider*() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* Oculus::Voice::Bindings::Android::VoiceSDKImpl::i___Meta__WitAi__IVoiceEventProvider() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr  Oculus::Voice::Bindings::Android::VoiceSDKImpl::operator ::Meta::WitAi::ITelemetryEventsProvider*() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* Oculus::Voice::Bindings::Android::VoiceSDKImpl::i___Meta__WitAi__ITelemetryEventsProvider() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr  Oculus::Voice::Bindings::Android::VoiceSDKImpl::operator ::Meta::WitAi::IVoiceActivationHandler*() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* Oculus::Voice::Bindings::Android::VoiceSDKImpl::i___Meta__WitAi__IVoiceActivationHandler() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Voice::Bindings::Android::IVCBindingEvents"
constexpr  Oculus::Voice::Bindings::Android::VoiceSDKImpl::operator ::Oculus::Voice::Bindings::Android::IVCBindingEvents*() noexcept {
return static_cast<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Voice::Bindings::Android::IVCBindingEvents"
constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents* Oculus::Voice::Bindings::Android::VoiceSDKImpl::i___Oculus__Voice__Bindings__Android__IVCBindingEvents() noexcept {
return static_cast<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKImpl::VoiceSDKImpl()   {
}
