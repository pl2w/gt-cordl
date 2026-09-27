#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeaker.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPostprocessor_impl.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPreprocessor_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioPlayer_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Speech/zzzz__VoiceSpeechEvents_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeaker_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSEventPlayer_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__TTSEventSampleDelegate_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipEvents_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerEvents_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker__LoadClip_d__125_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker__Load_d__122_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker__Load_d__124_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_SpeechEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Speech::VoiceSpeechEvents* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_SpeechEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5beac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_SpeechEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_TTSService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::TTS::TTSService> (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_TTSService)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e4fe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_TTSService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_VoiceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_VoiceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_VoiceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.set_VoiceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::set_VoiceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5bebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_VoiceID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_VoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSVoiceSettings* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_VoiceSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e5bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_VoiceSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e508a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_SpeakingClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_SpeakingClip)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e51480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_SpeakingClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_IsLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsLoading)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e50854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsLoading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_IsPreparing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsPreparing)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e5bf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsPreparing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_QueuedClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Data::TTSClipData*>* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_QueuedClips)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e516bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_QueuedClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e5c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_AudioPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioPlayer* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_AudioPlayer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e5c06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_AudioPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_AudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_AudioSource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9e50bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_AudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e5c1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e5c2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::OnEnable)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9e5c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9e5c648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.StopAndUnloadClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::StopAndUnloadClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e5c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.GetFirstQueuedRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFirstQueuedRequest)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9e5c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFirstQueuedRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.GetFirstQueuedRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFirstQueuedRequest)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9e5c8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFirstQueuedRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RequestEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestEquals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e5ca24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestEquals", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RequestHasClipData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestHasClipData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e5ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestHasClipData", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RequestHasClipText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestHasClipText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e5ca6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestHasClipText", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RefreshQueueEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RefreshQueueEvents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e5ca8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RefreshQueueEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.IsClipRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestActive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e5cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestActive", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.IsClipRequestLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestLoading)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e5cc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestLoading", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.IsClipRequestSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestSpeaking)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e5ccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestSpeaking", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.GetFinalText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFinalText)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x9e5cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFinalText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.GetFinalTextFormatted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFinalTextFormatted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e5d008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFinalTextFormatted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.GetFormattedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFormattedText)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e5d024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFormattedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e505a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e5d228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5d26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5d32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e50b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5d474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5d504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e5d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e5d6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e50570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakFormatQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakFormatQueued)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e5d714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakFormatQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5d758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5d818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5d8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e50a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5db14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5db44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5db74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SetVoiceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SetVoiceOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5dba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SetVoiceOverride", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.ClearVoiceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::ClearVoiceOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5dbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"ClearVoiceOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e5dbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5dc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Speak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5dc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5ddc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e5de68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5defc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5df04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5dfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e5e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e5e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5e1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e5e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e5e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SpeakQueuedTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e5e22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e5e23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e5e428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.StopLoadingButKeepQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::StopLoadingButKeepQueue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e5e584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"StopLoadingButKeepQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.StopLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::StopLoading)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9e5e5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.StopSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::StopSpeaking)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e5e7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e5e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.DecodeTts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::by_ref<::StringW>, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::DecodeTts)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e5e81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"DecodeTts", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.CreateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, ::Meta::WitAi::Json::WitResponseNode*, bool, bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::CreateRequest)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x9e5e854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"CreateRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::Json::WitResponseNode*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Load)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e5d544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, ::Meta::WitAi::Json::WitResponseNode*, bool, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Load)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e5d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::ArrayW<::StringW>, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, ::Meta::WitAi::Json::WitResponseNode*, bool, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Load)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9e5d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.LoadClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::LoadClip)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e5ebb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"LoadClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.TryPlayLoadedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::TryPlayLoadedClip)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e5ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"TryPlayLoadedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.FinalizeLoadedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::FinalizeLoadedClip)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9e5f214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"FinalizeLoadedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RefreshPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RefreshPlayback)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9e5eda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RefreshPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.WaitForPlaybackComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::WaitForPlaybackComplete)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e5f368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"WaitForPlaybackComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.IsPlaybackComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::IsPlaybackComplete)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9e5f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.HandlePlaybackComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::HandlePlaybackComplete)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9e5fa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.set_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::set_IsPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5fd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Pause)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e501f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Resume)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e501e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Resume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.PrepareToSpeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::PrepareToSpeak)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5fd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"PrepareToSpeak", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.StartTextBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::StartTextBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"StartTextBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.EndTextBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::EndTextBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5fd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"EndTextBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.SetPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(bool)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::SetPause)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9e5fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.UnloadQueuedClipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedClipRequest)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e5e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedClipRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.UnloadQueuedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedClip)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e5e4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.UnloadQueuedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e5e2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RemoveQueuedRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RemoveQueuedRequest)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e60028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RemoveQueuedRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseUnloadEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseUnloadEvents)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9e6015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseUnloadEvents", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Log)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e5ff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::Error)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e60340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.LogRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::StringW, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::LogRequest)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x9e603fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"LogRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::System::Action*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseEvents)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseEvents", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackQueueBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackQueueBegin)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e60864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackQueueComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackQueueComplete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e6093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnBegin)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e60a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnLoadBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadBegin)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9e60b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnLoadAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadAborted)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e60c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadAborted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnLoadFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadFailed)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9e60ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadFailed", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackReady)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9e61094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackBegin)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9e6130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackCancelled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackCancelled)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9e61574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackCancelled", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnPlaybackComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackComplete)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9e617f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaiseOnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnComplete)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e60dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x9e5f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_ElapsedSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_TotalSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_TotalSamples)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e5f9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_TotalSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_OnSampleUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_OnSampleUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_OnSampleUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.set_OnSampleUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::set_OnSampleUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_OnSampleUpdated", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.RaisePlaybackSampleUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::RaisePlaybackSampleUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e61a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker.get_CurrentEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSEventContainer* (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::get_CurrentEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e61a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_CurrentEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9e61aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker._RefreshPlayback_b__130_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::_RefreshPlayback_b__130_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e61c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"<RefreshPlayback>b__130_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker._HandlePlaybackComplete_b__133_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker::_HandlePlaybackComplete_b__133_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e61d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"<HandlePlaybackComplete>b__133_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__events(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_PrependedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrependedText;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_PrependedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrependedText;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set_PrependedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrependedText = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_AppendedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppendedText;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_AppendedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppendedText;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set_AppendedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppendedText = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__ttsService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ttsService;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__ttsService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ttsService;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__ttsService(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ttsService = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_presetVoiceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetVoiceID;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_presetVoiceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetVoiceID;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set_presetVoiceID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetVoiceID = value;
}
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_customWitVoiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customWitVoiceSettings;
}
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_customWitVoiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customWitVoiceSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set_customWitVoiceSettings(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customWitVoiceSettings = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_verboseLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verboseLogging;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get_verboseLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verboseLogging;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set_verboseLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verboseLogging = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__overrideVoiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideVoiceSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__overrideVoiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideVoiceSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__overrideVoiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overrideVoiceSettings = value;
}
constexpr float_t& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__elapsedPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedPlayTime;
}
constexpr float_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__elapsedPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedPlayTime;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__elapsedPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedPlayTime = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__speakingRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakingRequest;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__speakingRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakingRequest;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__speakingRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speakingRequest = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__queuedRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedRequests;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__queuedRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedRequests;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__queuedRequests(::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedRequests = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__hasQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasQueue;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__hasQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasQueue;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__hasQueue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasQueue = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__queueNotYetComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueNotYetComplete;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__queueNotYetComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueNotYetComplete;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__queueNotYetComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queueNotYetComplete = value;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__textPreprocessors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPreprocessors;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*> const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__textPreprocessors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPreprocessors;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__textPreprocessors(::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textPreprocessors = value;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__textPostprocessors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPostprocessors;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*> const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__textPostprocessors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textPostprocessors;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__textPostprocessors(::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textPostprocessors = value;
}
constexpr ::Meta::Voice::Audio::IAudioPlayer*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__audioPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayer;
}
constexpr ::Meta::Voice::Audio::IAudioPlayer* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__audioPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayer;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__audioPlayer(::Meta::Voice::Audio::IAudioPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioPlayer = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__waitForCompletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForCompletion;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__waitForCompletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForCompletion;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__waitForCompletion(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitForCompletion = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__isPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlaying;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__isPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlaying;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__isPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPlaying = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__IsPaused_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPaused_k__BackingField;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__IsPaused_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPaused_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__IsPaused_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPaused_k__BackingField = value;
}
constexpr ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__OnSampleUpdated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSampleUpdated_k__BackingField;
}
constexpr ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* const& Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_get__OnSampleUpdated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSampleUpdated_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker::__cordl_internal_set__OnSampleUpdated_k__BackingField(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnSampleUpdated_k__BackingField = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Speech::VoiceSpeechEvents* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_SpeechEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_SpeechEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Speech::VoiceSpeechEvents*>(this, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::TTS::TTSService> Meta::WitAi::TTS::Utilities::TTSSpeaker::get_TTSService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_TTSService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::TTS::TTSService>>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Utilities::TTSSpeaker::get_VoiceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_VoiceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::set_VoiceID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_VoiceID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_VoiceSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_VoiceSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_SpeakingClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_SpeakingClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsLoading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsLoading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsPreparing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsPreparing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Data::TTSClipData*>* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_QueuedClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_QueuedClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::IAudioPlayer* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_AudioPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_AudioPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioPlayer*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> Meta::WitAi::TTS::Utilities::TTSSpeaker::get_AudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_AudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::StopAndUnloadClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFirstQueuedRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFirstQueuedRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFirstQueuedRequest(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFirstQueuedRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(this, ___internal_method, textToSpeak);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestEquals(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData1, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestEquals", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, requestData1, requestData2);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestHasClipData(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestHasClipData", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, requestData, clipData);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::RequestHasClipText(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RequestHasClipText", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, requestData, textToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RefreshQueueEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RefreshQueueEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestActive(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestActive", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestData);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestLoading(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestLoading", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestData);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::IsClipRequestSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"IsClipRequestSpeaking", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestData);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFinalText(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFinalText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, textToSpeak);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFinalTextFormatted(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFinalTextFormatted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, format, textsToSpeak);
}
inline ::StringW Meta::WitAi::TTS::Utilities::TTSSpeaker::GetFormattedText(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"GetFormattedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, textsToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, diskCacheSettings, playbackEvents);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, playbackEvents);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, diskCacheSettings);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, textsToSpeak);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textToSpeak, diskCacheSettings, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textToSpeak, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textToSpeak, diskCacheSettings);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textToSpeak);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, diskCacheSettings, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, diskCacheSettings);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode, playbackEvents);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, diskCacheSettings, playbackEvents);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, playbackEvents);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, diskCacheSettings);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakFormatQueued(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakFormatQueued", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, textsToSpeak);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textsToSpeak, diskCacheSettings, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textsToSpeak, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textsToSpeak, diskCacheSettings);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, textsToSpeak);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textsToSpeak, diskCacheSettings, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textsToSpeak, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textsToSpeak, diskCacheSettings);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textsToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SetVoiceOverride(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  overrideVoiceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SetVoiceOverride", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideVoiceSettings);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::ClearVoiceOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"ClearVoiceOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, diskCacheSettings);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, playbackEvents);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Speak", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, diskCacheSettings);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, playbackEvents);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, diskCacheSettings);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueued", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, playbackEvents);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode, diskCacheSettings);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedAsync", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, responseNode);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, diskCacheSettings, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, playbackEvents);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode, diskCacheSettings);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"SpeakQueuedTask", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop(::StringW  textToSpeak, bool  allInstances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textToSpeak, allInstances);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  allInstances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, allInstances);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::StopLoadingButKeepQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"StopLoadingButKeepQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::StopLoading()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::StopSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::DecodeTts(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"DecodeTts", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, textToSpeak, voiceSettings);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* Meta::WitAi::TTS::Utilities::TTSSpeaker::CreateRequest(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"CreateRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(this, ___internal_method, playbackEvents, speechNode, clearQueue, add);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::Load(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, bool  clearQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, responseNode, diskCacheSettings, playbackEvents, clearQueue);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::Load(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textToSpeak, voiceSettings, diskCacheSettings, playbackEvents, speechNode, clearQueue, requestPlaceholder);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::Load(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Load", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, textsToSpeak, voiceSettings, diskCacheSettings, playbackEvents, speechNode, clearQueue, requestPlaceholder);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker::LoadClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"LoadClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::TryPlayLoadedClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"TryPlayLoadedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::FinalizeLoadedClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"FinalizeLoadedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData, error);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RefreshPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RefreshPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker::WaitForPlaybackComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"WaitForPlaybackComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::IsPlaybackComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::HandlePlaybackComplete(bool  stopped)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopped);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::get_IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::set_IsPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Resume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Resume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::PrepareToSpeak()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"PrepareToSpeak", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::StartTextBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"StartTextBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::EndTextBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"EndTextBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::SetPause(bool  toPaused)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPaused);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedClipRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedClipRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestData);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedClip", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::UnloadQueuedText(::StringW  textToSpeak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"UnloadQueuedText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textToSpeak);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RemoveQueuedRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RemoveQueuedRequest", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
template<typename T>
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker::FindAndUnloadRequests(::System::Func_3<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*,T,bool>*  findMethod, T  findParameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {"FindAndUnloadRequests", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_3<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*,T,bool>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, findMethod, findParameter);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseUnloadEvents(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseUnloadEvents", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Log(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, parameters);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::Error(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, parameters);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::LogRequest(::StringW  comment, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"LogRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment, requestData, error);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseEvents(::System::Action*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseEvents", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
template<typename T>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseEvents(::System::Action_1<T>*  events, T  parameter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {"RaiseEvents", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, parameter);
}
template<typename T1,typename T2>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseEvents(::System::Action_2<T1,T2>*  events, T1  parameter1, T2  parameter2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                    {"RaiseEvents", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::System::Action_2<T1,T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, parameter1, parameter2);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackQueueBegin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackQueueComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadAborted(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadAborted", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnLoadFailed", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData, error);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackCancelled", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData, reason);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnPlaybackComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnPlaybackComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaiseOnComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"RaiseOnComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData);
}
inline int32_t Meta::WitAi::TTS::Utilities::TTSSpeaker::get_ElapsedSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_ElapsedSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::WitAi::TTS::Utilities::TTSSpeaker::get_TotalSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_TotalSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_OnSampleUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_OnSampleUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::set_OnSampleUpdated(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"set_OnSampleUpdated", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::RaisePlaybackSampleUpdated(int32_t  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample);
}
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* Meta::WitAi::TTS::Utilities::TTSSpeaker::get_CurrentEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"get_CurrentEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSEventContainer*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::_RefreshPlayback_b__130_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"<RefreshPlayback>b__130_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker::_HandlePlaybackComplete_b__133_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(),
                        {"<HandlePlaybackComplete>b__133_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker* Meta::WitAi::TTS::Utilities::TTSSpeaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ISpeaker"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker::operator ::Meta::WitAi::TTS::Interfaces::ISpeaker*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ISpeaker"
constexpr ::Meta::WitAi::TTS::Interfaces::ISpeaker* Meta::WitAi::TTS::Utilities::TTSSpeaker::i___Meta__WitAi__TTS__Interfaces__ISpeaker() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker::operator ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* Meta::WitAi::TTS::Utilities::TTSSpeaker::i___Meta__WitAi__TTS__Interfaces__ITTSEventPlayer() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeaker()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e648a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e648c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9e648cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e64b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get__sample_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample_5__2;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_get__sample_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample_5__2;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::__cordl_internal_set__sample_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sample_5__2 = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131::TTSSpeaker__WaitForPlaybackComplete_d__131()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e647b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e647dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e647e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e64860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get_textsToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_get_textsToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::__cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsToSpeak = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86::TTSSpeaker__SpeakQueuedAsync_d__86()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e646cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e646f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e646f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e64774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e647ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get_textsToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get_textsToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85::TTSSpeaker__SpeakQueuedAsync_d__85()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e645e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e6460c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e64610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e6468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e646c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get_textsToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get_textsToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84::TTSSpeaker__SpeakQueuedAsync_d__84()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e64418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e64440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e64444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6459c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e645a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e645dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_textsToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_textsToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83::TTSSpeaker__SpeakQueuedAsync_d__83()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e64354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e64358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e643d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e643d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107::TTSSpeaker__SpeakQueuedAsync_d__107()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e64244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e6426c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e64270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e642e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e642ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106::TTSSpeaker__SpeakQueuedAsync_d__106()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e64184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e64188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e641fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e64204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105::TTSSpeaker__SpeakQueuedAsync_d__105()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e63f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::MoveNext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e63f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e6411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104::TTSSpeaker__SpeakQueuedAsync_d__104()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e63e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e63ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99::TTSSpeaker__SpeakAsync_d__99()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e63d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e63dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98::TTSSpeaker__SpeakAsync_d__98()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e63b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::MoveNext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e63bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97::TTSSpeaker__SpeakAsync_d__97()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e63aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e63ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72::TTSSpeaker__SpeakAsync_d__72()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e639c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e639e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e639ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71::TTSSpeaker__SpeakAsync_d__71()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e638d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e63904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e639b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70::TTSSpeaker__SpeakAsync_d__70()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)(int32_t)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6370c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e63734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e63738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e63890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e63898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e638d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69::TTSSpeaker__SpeakAsync_d__69()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0._SpeakAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::_SpeakAsync_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e61f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*>(),
                        {"<SpeakAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_voiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_voiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSettings = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::_SpeakAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*>(),
                        {"<SpeakAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0::TTSSpeaker___c__DisplayClass97_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0._SpeakQueuedAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::_SpeakQueuedAsync_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e61f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*>(),
                        {"<SpeakQueuedAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_textsToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_textsToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::_SpeakQueuedAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*>(),
                        {"<SpeakQueuedAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0::TTSSpeaker___c__DisplayClass83_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0._SpeakAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::_SpeakAsync_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e61e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*>(),
                        {"<SpeakAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::_SpeakAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*>(),
                        {"<SpeakAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0::TTSSpeaker___c__DisplayClass69_0()   {
}
template<typename T1,typename T2>
constexpr ::System::Action_2<T1,T2>*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T1,typename T2>
constexpr ::System::Action_2<T1,T2>* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T1,typename T2>
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_set_events(::System::Action_2<T1,T2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
template<typename T1,typename T2>
constexpr T1& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_parameter1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter1;
}
template<typename T1,typename T2>
constexpr T1 const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_parameter1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter1;
}
template<typename T1,typename T2>
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_set_parameter1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameter1 = value;
}
template<typename T1,typename T2>
constexpr T2& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_parameter2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter2;
}
template<typename T1,typename T2>
constexpr T2 const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_get_parameter2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter2;
}
template<typename T1,typename T2>
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::__cordl_internal_set_parameter2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameter2 = value;
}
template<typename T1,typename T2>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::_RaiseEvents_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>*>(),
                        {"<RaiseEvents>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>*>());
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>::TTSSpeaker___c__DisplayClass155_0_2()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T>
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_set_events(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
template<typename T>
constexpr T& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_get_parameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
template<typename T>
constexpr T const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_get_parameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
template<typename T>
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::__cordl_internal_set_parameter(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameter = value;
}
template<typename T>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::_RaiseEvents_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>*>(),
                        {"<RaiseEvents>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>::TTSSpeaker___c__DisplayClass154_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0._Load_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e61e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*>(),
                        {"<Load>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_voiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_get_voiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::__cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSettings = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::_Load_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*>(),
                        {"<Load>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0::TTSSpeaker___c__DisplayClass122_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0._CreateRequest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::_CreateRequest_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e61e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*>(),
                        {"<CreateRequest>b__0", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_get_requestData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestData;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_get_requestData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestData;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::__cordl_internal_set_requestData(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestData = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::_CreateRequest_b__0(::Meta::WitAi::TTS::Data::TTSClipData*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*>(),
                        {"<CreateRequest>b__0", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0::TTSSpeaker___c__DisplayClass121_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0._SpeakQueuedAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::_SpeakQueuedAsync_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e61dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*>(),
                        {"<SpeakQueuedAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_voiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_voiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSettings = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_playbackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_playbackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackEvents = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::_SpeakQueuedAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*>(),
                        {"<SpeakQueuedAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0* Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0::TTSSpeaker___c__DisplayClass104_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e61dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_ClipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_ClipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClipData;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_ClipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClipData = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_OnReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReady;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_OnReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReady;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_OnReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReady = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_IsReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsReady;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_IsReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsReady;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_IsReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsReady = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr ::System::DateTime& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_StartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr ::System::DateTime const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_StartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_StartTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartTime = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_StopPlaybackOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopPlaybackOnLoad;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_StopPlaybackOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopPlaybackOnLoad;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_StopPlaybackOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopPlaybackOnLoad = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_PlaybackEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackEvents;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_PlaybackEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackEvents;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_PlaybackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlaybackEvents = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_PlaybackCompletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackCompletion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_PlaybackCompletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaybackCompletion;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_PlaybackCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlaybackCompletion = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_SpeechNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeechNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_get_SpeechNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeechNode;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::__cordl_internal_set_SpeechNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeechNode = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData::TTSSpeaker_TTSSpeakerRequestData()   {
}
