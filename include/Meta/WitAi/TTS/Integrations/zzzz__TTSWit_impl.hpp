#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitRequestSettings_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitVoiceSettings_impl.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketTtsRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketAdapter_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IWitConfigurationProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_<>c__DisplayClass27_0___RequestStreamViaHttp_b__0_d_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_<>c__DisplayClass30_0___RequestDownloadViaHttp_b__0_d_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_<>c__DisplayClass31_0___IsDownloadedToDisk_b__0_d_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_<>c__DisplayClass33_0___RequestStreamFromDiskViaVRequest_b__0_d_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__IsDownloadedToDisk_d__31_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__RequestDownloadFromWebSocket_d__29_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__RequestStreamFromDisk_d__32_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__RequestStreamFromWebSocket_d__26_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__RequestStreamFromWeb_d__25_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSVoiceProvider_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSWebHandler_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_VoiceProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_VoiceProvider)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5610c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_WebHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_WebHandler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e56110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e56114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.set_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::set_Configuration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e5611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.add_OnConfigurationUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::add_OnConfigurationUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e56170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"add_OnConfigurationUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.remove_OnConfigurationUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::remove_OnConfigurationUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e56220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"remove_OnConfigurationUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e562d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RefreshWebSocketSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::RefreshWebSocketSettings)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e56490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e56560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.GetInvalidError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::GetInvalidError)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e565fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.GetWebErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::GetWebErrors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e566e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"GetWebErrors", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.CreateClipData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::StringW, ::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::CreateClipData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e56760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateClipData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.CreateClipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::CreateClipStream)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9e568b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateClipStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RefreshAudioSystemSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::RefreshAudioSystemSettings)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e563c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RefreshAudioSystemSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.CreateHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitTTSVRequest* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::CreateHttpRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9e569c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateHttpRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.CreateWebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::CreateWebSocketRequest)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9e56acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateWebSocketRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.DecodeTtsFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::Json::WitResponseNode*, ::by_ref<::StringW>, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>)>(&::Meta::WitAi::TTS::Integrations::TTSWit::DecodeTtsFromJson)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9e56cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"DecodeTtsFromJson", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestStreamFromWeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromWeb)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e56ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestStreamFromWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromWebSocket)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e57130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromWebSocket", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestStreamViaHttp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamViaHttp)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e5724c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamViaHttp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestDownloadFromWeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadFromWeb)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e573d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestDownloadFromWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadFromWebSocket)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e5759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadFromWebSocket", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestDownloadViaHttp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadViaHttp)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9e576d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadViaHttp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.IsDownloadedToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::IsDownloadedToDisk)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e5785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"IsDownloadedToDisk", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestStreamFromDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromDisk)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e57978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.RequestStreamFromDiskViaVRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromDiskViaVRequest)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9e57ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromDiskViaVRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.CancelRequests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::CancelRequests)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e574bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CancelRequests", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_PresetWitVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*> (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_PresetWitVoiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e57c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_PresetWitVoiceSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_PresetVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_PresetVoiceSettings)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e57c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_PresetVoiceSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.get_VoiceDefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSVoiceSettings* (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::get_VoiceDefaultSettings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e57cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_VoiceDefaultSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit.IsRequestValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSWit::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::TTS::Integrations::TTSWit::IsRequestValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e57d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"IsRequestValid", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e57dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get_OnConfigurationUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigurationUpdated;
}
constexpr ::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>* const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get_OnConfigurationUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigurationUpdated;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConfigurationUpdated = value;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__webSocketAdapter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketAdapter;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__webSocketAdapter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketAdapter;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set__webSocketAdapter(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocketAdapter = value;
}
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get_RequestSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestSettings;
}
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get_RequestSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestSettings;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set_RequestSettings(::Meta::WitAi::TTS::Integrations::TTSWitRequestSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestSettings = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__httpRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpRequests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>* const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__httpRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpRequests;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set__httpRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::WitTTSVRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____httpRequests = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__webSocketRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketRequests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>* const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__webSocketRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketRequests;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set__webSocketRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocketRequests = value;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__presetVoiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____presetVoiceSettings;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*> const& Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_get__presetVoiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____presetVoiceSettings;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit::__cordl_internal_set__presetVoiceSettings(::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____presetVoiceSettings = value;
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* Meta::WitAi::TTS::Integrations::TTSWit::get_VoiceProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* Meta::WitAi::TTS::Integrations::TTSWit::get_WebHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(this, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::TTS::Integrations::TTSWit::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::add_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"add_OnConfigurationUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::remove_OnConfigurationUpdated(::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"remove_OnConfigurationUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::RefreshWebSocketSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSWit::GetInvalidError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSWit::GetWebErrors(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"GetWebErrors", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Integrations::TTSWit::CreateClipData(::StringW  clipId, ::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateClipData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, clipId, textToSpeak, voiceSettings, diskCacheSettings);
}
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::WitAi::TTS::Integrations::TTSWit::CreateClipStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateClipStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::RefreshAudioSystemSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RefreshAudioSystemSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitTTSVRequest* Meta::WitAi::TTS::Integrations::TTSWit::CreateHttpRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateHttpRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitTTSVRequest*>(this, ___internal_method, clipData);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest* Meta::WitAi::TTS::Integrations::TTSWit::CreateWebSocketRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CreateWebSocketRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(this, ___internal_method, clipData, downloadPath);
}
inline bool Meta::WitAi::TTS::Integrations::TTSWit::DecodeTtsFromJson(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"DecodeTtsFromJson", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, textToSpeak, voiceSettings);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, onReady);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromWebSocket(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromWebSocket", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamViaHttp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamViaHttp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadFromWebSocket(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadFromWebSocket", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestDownloadViaHttp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestDownloadViaHttp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::IsDownloadedToDisk(::StringW  diskPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"IsDownloadedToDisk", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, diskPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath, onReady);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit::RequestStreamFromDiskViaVRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"RequestStreamFromDiskViaVRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath);
}
inline bool Meta::WitAi::TTS::Integrations::TTSWit::CancelRequests(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"CancelRequests", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline ::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*> Meta::WitAi::TTS::Integrations::TTSWit::get_PresetWitVoiceSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_PresetWitVoiceSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>>(this, ___internal_method);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> Meta::WitAi::TTS::Integrations::TTSWit::get_PresetVoiceSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_PresetVoiceSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* Meta::WitAi::TTS::Integrations::TTSWit::get_VoiceDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"get_VoiceDefaultSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSWit::IsRequestValid(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {"IsRequestValid", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, clipData, configuration);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit* Meta::WitAi::TTS::Integrations::TTSWit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider"
constexpr  Meta::WitAi::TTS::Integrations::TTSWit::operator ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* Meta::WitAi::TTS::Integrations::TTSWit::i___Meta__WitAi__TTS__Interfaces__ITTSVoiceProvider() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSWebHandler"
constexpr  Meta::WitAi::TTS::Integrations::TTSWit::operator ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSWebHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* Meta::WitAi::TTS::Integrations::TTSWit::i___Meta__WitAi__TTS__Interfaces__ITTSWebHandler() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr  Meta::WitAi::TTS::Integrations::TTSWit::operator ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* Meta::WitAi::TTS::Integrations::TTSWit::i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit::TTSWit()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e57c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0._RequestStreamFromDiskViaVRequest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::_RequestStreamFromDiskViaVRequest_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e58f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*>(),
                        {"<RequestStreamFromDiskViaVRequest>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_diskPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_diskPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_set_diskPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskPath = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_clipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_get_clipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::__cordl_internal_set_clipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipId = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::_RequestStreamFromDiskViaVRequest_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*>(),
                        {"<RequestStreamFromDiskViaVRequest>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0::TTSWit___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e58e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0._RequestStreamFromDisk_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::_RequestStreamFromDisk_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e58e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*>(),
                        {"<RequestStreamFromDisk>b__0", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::System::DateTime& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr ::System::DateTime const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_set_startTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_onReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_get_onReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::__cordl_internal_set_onReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReady = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::_RequestStreamFromDisk_b__0(::Meta::Voice::Audio::IAudioClipStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*>(),
                        {"<RequestStreamFromDisk>b__0", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass32_0::TTSWit___c__DisplayClass32_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e58a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0._IsDownloadedToDisk_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::_IsDownloadedToDisk_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e58a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*>(),
                        {"<IsDownloadedToDisk>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_get_diskPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_get_diskPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_set_diskPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskPath = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::_IsDownloadedToDisk_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*>(),
                        {"<IsDownloadedToDisk>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass31_0::TTSWit___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e57854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0._RequestDownloadViaHttp_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::_RequestDownloadViaHttp_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e585f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*>(),
                        {"<RequestDownloadViaHttp>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_diskPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_diskPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskPath;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_set_diskPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskPath = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_clipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_get_clipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::__cordl_internal_set_clipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipId = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::_RequestDownloadViaHttp_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*>(),
                        {"<RequestDownloadViaHttp>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass30_0::TTSWit___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e58594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0._RequestDownloadFromWebSocket_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::_RequestDownloadFromWebSocket_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e5859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*>(),
                        {"<RequestDownloadFromWebSocket>b__0", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completion = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::_RequestDownloadFromWebSocket_b__0(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*>(),
                        {"<RequestDownloadFromWebSocket>b__0", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass29_0::TTSWit___c__DisplayClass29_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e573cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0._RequestStreamViaHttp_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::_RequestStreamViaHttp_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e57ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*>(),
                        {"<RequestStreamViaHttp>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_set_request(::Meta::WitAi::Requests::WitTTSVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit> const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_clipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_get_clipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipId;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::__cordl_internal_set_clipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipId = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::_RequestStreamViaHttp_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*>(),
                        {"<RequestStreamViaHttp>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0::TTSWit___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e57f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0._RequestStreamFromWebSocket_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::_RequestStreamFromWebSocket_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e57fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*>(),
                        {"<RequestStreamFromWebSocket>b__0", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completion = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::_RequestStreamFromWebSocket_b__0(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*>(),
                        {"<RequestStreamFromWebSocket>b__0", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass26_0::TTSWit___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e57eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0._RequestStreamFromWeb_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::_RequestStreamFromWeb_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e57ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*>(),
                        {"<RequestStreamFromWeb>b__0", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::System::DateTime& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr ::System::DateTime const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_set_startTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_onReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_get_onReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::__cordl_internal_set_onReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReady = value;
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::_RequestStreamFromWeb_b__0(::Meta::Voice::Audio::IAudioClipStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*>(),
                        {"<RequestStreamFromWeb>b__0", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0* Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0::TTSWit___c__DisplayClass25_0()   {
}
