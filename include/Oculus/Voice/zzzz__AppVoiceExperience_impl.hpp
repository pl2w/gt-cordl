#pragma once
// IWYU pragma private; include "Oculus/Voice/AppVoiceExperience.hpp"
#include "Meta/WitAi/zzzz__VoiceService_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IWitConfigurationProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigProvider_def.hpp"
#include "Oculus/Voice/Core/Bindings/Interfaces/zzzz__IVoiceSDKLogger_def.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience__Activate_d__37_def.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb944304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.set_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Oculus::Voice::AppVoiceExperience::set_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb94430c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"set_RuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_Configuration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb9443e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_PACKAGE_VERSION
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Voice::AppVoiceExperience::get_PACKAGE_VERSION)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb944400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_PACKAGE_VERSION", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb944504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.add_OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::System::Action*)>(&::Oculus::Voice::AppVoiceExperience::add_OnInitialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb944514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"add_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.remove_OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::System::Action*)>(&::Oculus::Voice::AppVoiceExperience::remove_OnInitialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb9445b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"remove_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_Active)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb94464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_IsRequestActive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb944710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9447d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Oculus::Voice::AppVoiceExperience::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb944884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_MicActive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb944938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_ShouldSendMicData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_ShouldSendMicData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb9449e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_HasPlatformIntegrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_HasPlatformIntegrations)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb944a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_HasPlatformIntegrations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_EnableConsoleLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_EnableConsoleLogging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb944aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_EnableConsoleLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.get_UsePlatformIntegrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::get_UsePlatformIntegrations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb944ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.set_UsePlatformIntegrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(bool)>(&::Oculus::Voice::AppVoiceExperience::set_UsePlatformIntegrations)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb944abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.CanSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::CanSend)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb9455b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Oculus::Voice::AppVoiceExperience::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::AppVoiceExperience::Activate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb945674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::CanActivateAudio)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb9457c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.GetActivateAudioError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::GetActivateAudioError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb945884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::AppVoiceExperience::Activate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xb945928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Oculus::Voice::AppVoiceExperience::ActivateImmediately)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xb945b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::Deactivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb945df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb945ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.InitVoiceSDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::InitVoiceSDK)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0xb944bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"InitVoiceSDK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.RevertToWitUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::RevertToWitUnity)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb946074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"RevertToWitUnity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnEnable)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb9461c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.RetryInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::RetryInit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb9464b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"RetryInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnDisable)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xb946544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(bool)>(&::Oculus::Voice::AppVoiceExperience::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb9468d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestInit)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0xb946924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestStartListening)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb946df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestStopListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestStopListening)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb946ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestSend)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb946f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW)>(&::Oculus::Voice::AppVoiceExperience::OnRequestPartialTranscription)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb947130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW)>(&::Oculus::Voice::AppVoiceExperience::OnRequestFullTranscription)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb9471f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnMinimumWakeThresholdHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnMinimumWakeThresholdHit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb9472dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnMinimumWakeThresholdHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnStoppedListeningDueToTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToTimeout)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb94739c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnStoppedListeningDueToInactivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToInactivity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb94745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToInactivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnStoppedListeningDueToDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToDeactivation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb94751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToDeactivation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnMicDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::OnMicDataSent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb9475dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnMicDataSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnAudioDurationTrackerFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(int64_t, double_t)>(&::Oculus::Voice::AppVoiceExperience::OnAudioDurationTrackerFinished)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb94769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnAudioDurationTrackerFinished", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestSuccess)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb947850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience.OnRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience::OnRequestComplete)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb947a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                    {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb947c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience._InitVoiceSDK_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience::*)()>(&::Oculus::Voice::AppVoiceExperience::_InitVoiceSDK_b__44_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb947c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"<InitVoiceSDK>b__44_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_witRuntimeConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witRuntimeConfiguration;
}
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_witRuntimeConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witRuntimeConfiguration;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_witRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witRuntimeConfiguration = value;
}
constexpr bool& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_usePlatformServices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlatformServices;
}
constexpr bool const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_usePlatformServices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePlatformServices;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_usePlatformServices(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePlatformServices = value;
}
constexpr bool& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_enableConsoleLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableConsoleLogging;
}
constexpr bool const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_enableConsoleLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableConsoleLogging;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_enableConsoleLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableConsoleLogging = value;
}
constexpr bool& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_sendTranscriptionEventsForMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTranscriptionEventsForMessages;
}
constexpr bool const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_sendTranscriptionEventsForMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTranscriptionEventsForMessages;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_sendTranscriptionEventsForMessages(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendTranscriptionEventsForMessages = value;
}
constexpr ::Meta::WitAi::IVoiceService*& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_voiceServiceImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceServiceImpl;
}
constexpr ::Meta::WitAi::IVoiceService* const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_voiceServiceImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceServiceImpl;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_voiceServiceImpl(::Meta::WitAi::IVoiceService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceServiceImpl = value;
}
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_voiceSDKLoggerImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSDKLoggerImpl;
}
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_voiceSDKLoggerImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSDKLoggerImpl;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_voiceSDKLoggerImpl(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSDKLoggerImpl = value;
}
constexpr ::System::Action*& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_OnInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInitialized;
}
constexpr ::System::Action* const& Oculus::Voice::AppVoiceExperience::__cordl_internal_get_OnInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInitialized;
}
constexpr void Oculus::Voice::AppVoiceExperience::__cordl_internal_set_OnInitialized(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInitialized = value;
}
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* Oculus::Voice::AppVoiceExperience::get_RuntimeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"set_RuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Oculus::Voice::AppVoiceExperience::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline ::StringW Oculus::Voice::AppVoiceExperience::get_PACKAGE_VERSION()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_PACKAGE_VERSION", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::add_OnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"add_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Voice::AppVoiceExperience::remove_OnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"remove_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::AppVoiceExperience::get_Active()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_IsRequestActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Oculus::Voice::AppVoiceExperience::get_TranscriptionProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::AppVoiceExperience::get_MicActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_ShouldSendMicData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_HasPlatformIntegrations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_HasPlatformIntegrations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_EnableConsoleLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"get_EnableConsoleLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience::get_UsePlatformIntegrations()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::set_UsePlatformIntegrations(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Voice::AppVoiceExperience::CanSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Oculus::Voice::AppVoiceExperience::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions, requestEvents);
}
inline bool Oculus::Voice::AppVoiceExperience::CanActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Oculus::Voice::AppVoiceExperience::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::AppVoiceExperience::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::AppVoiceExperience::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Oculus::Voice::AppVoiceExperience::Deactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::DeactivateAndAbortRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::InitVoiceSDK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"InitVoiceSDK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::RevertToWitUnity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"RevertToWitUnity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Voice::AppVoiceExperience::RetryInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"RetryInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestPartialTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, transcription);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestFullTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, transcription);
}
inline void Oculus::Voice::AppVoiceExperience::OnMinimumWakeThresholdHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnMinimumWakeThresholdHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToInactivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToInactivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnStoppedListeningDueToDeactivation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnStoppedListeningDueToDeactivation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnMicDataSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnMicDataSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::OnAudioDurationTrackerFinished(int64_t  timestamp, double_t  audioDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"OnAudioDurationTrackerFinished", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp, audioDuration);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::OnRequestComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::AppVoiceExperience::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience::_InitVoiceSDK_b__44_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience*>(),
                        {"<InitVoiceSDK>b__44_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::AppVoiceExperience* Oculus::Voice::AppVoiceExperience::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::AppVoiceExperience*>());
}
/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr  Oculus::Voice::AppVoiceExperience::operator ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* Oculus::Voice::AppVoiceExperience::i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr  Oculus::Voice::AppVoiceExperience::operator ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* Oculus::Voice::AppVoiceExperience::i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::AppVoiceExperience::AppVoiceExperience()   {
}
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)(int32_t)>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb94651c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)()>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb948438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)()>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb94843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)()>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9485b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)()>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb9485b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::*)()>(&::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9485f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_set___4__this(::UnityW<::Oculus::Voice::AppVoiceExperience>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get__waitSeconds_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitSeconds_5__2;
}
constexpr int32_t const& Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_get__waitSeconds_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitSeconds_5__2;
}
constexpr void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::__cordl_internal_set__waitSeconds_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitSeconds_5__2 = value;
}
inline void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Voice::AppVoiceExperience__RetryInit_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::AppVoiceExperience__RetryInit_d__47*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Voice::AppVoiceExperience__RetryInit_d__47::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Voice::AppVoiceExperience__RetryInit_d__47::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Voice::AppVoiceExperience__RetryInit_d__47::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Voice::AppVoiceExperience__RetryInit_d__47::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::AppVoiceExperience__RetryInit_d__47::AppVoiceExperience__RetryInit_d__47()   {
}
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::*)()>(&::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb947ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1._Activate_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::_Activate_b__1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb947ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*>(),
                        {"<Activate>b__1", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0* const& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::__cordl_internal_set_CS$__8__locals1(::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::_Activate_b__1(::Meta::WitAi::Requests::VoiceServiceRequest*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*>(),
                        {"<Activate>b__1", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1* Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1::AppVoiceExperience___c__DisplayClass37_1()   {
}
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::*)()>(&::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb947c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0._Activate_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::_Activate_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb947c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*>(),
                        {"<Activate>b__0", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Voice::AppVoiceExperience>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::_Activate_b__0(::Meta::WitAi::Json::WitResponseNode*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*>(),
                        {"<Activate>b__0", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0* Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_0::AppVoiceExperience___c__DisplayClass37_0()   {
}
