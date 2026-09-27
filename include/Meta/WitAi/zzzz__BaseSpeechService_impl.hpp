#pragma once
// IWYU pragma private; include "Meta/WitAi/BaseSpeechService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/zzzz__BaseSpeechService_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Events/zzzz__SpeechEvents_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__BaseSpeechService_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.get_Requests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::get_Requests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {"get_Requests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::get_Active)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e70f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.GetSpeechEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::SpeechEvents* (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::GetSpeechEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.get_IsAudioInputActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::get_IsAudioInputActive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e70f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.GetAudioRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::GetAudioRequest)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e70fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.GetActivateAudioError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::GetActivateAudioError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e71100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::CanActivateAudio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e7116c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.GetSendError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::GetSendError)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e71188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.CanSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::CanSend)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e711a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::OnEnable)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9e711bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e713a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::Deactivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e71454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::Deactivate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e71500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e7153c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e715e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.SetupRequestParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::by_ref<::Meta::WitAi::Configuration::WitRequestOptions*>, ::by_ref<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>)>(&::Meta::WitAi::BaseSpeechService::SetupRequestParameters)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e7165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.WrapRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::WrapRequest)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x9e717dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW, bool)>(&::Meta::WitAi::BaseSpeechService::Log)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9e71b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestInit)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9e71db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestStartListening)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e71f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestStopListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestStopListening)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e71fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestSend)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e72054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW)>(&::Meta::WitAi::BaseSpeechService::OnRequestRawResponse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e72108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW)>(&::Meta::WitAi::BaseSpeechService::OnRequestPartialTranscription)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e7217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::StringW)>(&::Meta::WitAi::BaseSpeechService::OnRequestFullTranscription)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e722a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::BaseSpeechService::OnRequestPartialResponse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e723c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestCancel)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e7244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestFailed)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9e72580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestSuccess)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e72788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.OnRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService::OnRequestComplete)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9e72890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService.SetEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)(::Meta::WitAi::Requests::VoiceServiceRequest*, bool)>(&::Meta::WitAi::BaseSpeechService::SetEventListeners)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x9e729f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService::*)()>(&::Meta::WitAi::BaseSpeechService::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9e72de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::BaseSpeechService::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::BaseSpeechService::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::BaseSpeechService::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr bool& Meta::WitAi::BaseSpeechService::__cordl_internal_get_ShouldWrap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldWrap;
}
constexpr bool const& Meta::WitAi::BaseSpeechService::__cordl_internal_get_ShouldWrap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldWrap;
}
constexpr void Meta::WitAi::BaseSpeechService::__cordl_internal_set_ShouldWrap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldWrap = value;
}
constexpr bool& Meta::WitAi::BaseSpeechService::__cordl_internal_get_ShouldLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldLog;
}
constexpr bool const& Meta::WitAi::BaseSpeechService::__cordl_internal_get_ShouldLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldLog;
}
constexpr void Meta::WitAi::BaseSpeechService::__cordl_internal_set_ShouldLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldLog = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*& Meta::WitAi::BaseSpeechService::__cordl_internal_get__Requests_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* const& Meta::WitAi::BaseSpeechService::__cordl_internal_get__Requests_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests_k__BackingField;
}
constexpr void Meta::WitAi::BaseSpeechService::__cordl_internal_set__Requests_k__BackingField(::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Requests_k__BackingField = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*& Meta::WitAi::BaseSpeechService::__cordl_internal_get__customRequestEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customRequestEvents;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>* const& Meta::WitAi::BaseSpeechService::__cordl_internal_get__customRequestEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customRequestEvents;
}
constexpr void Meta::WitAi::BaseSpeechService::__cordl_internal_set__customRequestEvents(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customRequestEvents = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::BaseSpeechService::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::BaseSpeechService::get_Requests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {"get_Requests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method);
}
inline bool Meta::WitAi::BaseSpeechService::get_Active()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::SpeechEvents* Meta::WitAi::BaseSpeechService::GetSpeechEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::SpeechEvents*>(this, ___internal_method);
}
inline bool Meta::WitAi::BaseSpeechService::get_IsAudioInputActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::BaseSpeechService::GetAudioRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::BaseSpeechService::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::WitAi::BaseSpeechService::CanActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::BaseSpeechService::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::WitAi::BaseSpeechService::CanSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::BaseSpeechService::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::BaseSpeechService::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::BaseSpeechService::Deactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::BaseSpeechService::Deactivate(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::DeactivateAndAbortRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::BaseSpeechService::DeactivateAndAbortRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::SetupRequestParameters(::by_ref<::Meta::WitAi::Configuration::WitRequestOptions*>  options, ::by_ref<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, events);
}
inline bool Meta::WitAi::BaseSpeechService::WrapRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::Log(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  log, bool  warn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, log, warn);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestRawResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  rawResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, rawResponse);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestPartialTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, transcription);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestFullTranscription(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::StringW  transcription)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, transcription);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestPartialResponse(::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::Meta::WitAi::Json::WitResponseNode*  responseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, responseData);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestCancel(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestFailed(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::OnRequestComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::BaseSpeechService::SetEventListeners(::Meta::WitAi::Requests::VoiceServiceRequest*  request, bool  addListeners)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, addListeners);
}
template<typename TParam>
inline void Meta::WitAi::BaseSpeechService::SetRequestEventListener(::UnityEngine::Events::UnityEvent_1<TParam>*  baseEvent, ::Meta::WitAi::Requests::VoiceServiceRequest*  request, ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  callbackWithRequest, bool  addListener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                    {"SetRequestEventListener", {::i2c::class_of<TParam>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<TParam>*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TParam>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseEvent, request, callbackWithRequest, addListener);
}
inline void Meta::WitAi::BaseSpeechService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::BaseSpeechService* Meta::WitAi::BaseSpeechService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::BaseSpeechService*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::BaseSpeechService::BaseSpeechService()   {
}
template<typename TParam>
constexpr ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*& Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_get_callbackWithRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackWithRequest;
}
template<typename TParam>
constexpr ::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>* const& Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_get_callbackWithRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackWithRequest;
}
template<typename TParam>
constexpr void Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_set_callbackWithRequest(::UnityEngine::Events::UnityAction_2<::Meta::WitAi::Requests::VoiceServiceRequest*,TParam>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackWithRequest = value;
}
template<typename TParam>
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
template<typename TParam>
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
template<typename TParam>
constexpr void Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::__cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
template<typename TParam>
inline void Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParam>
inline void Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::_SetRequestEventListener_b__0(TParam  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>*>(),
                        {"<SetRequestEventListener>b__0", {}, {::i2c::type_of<TParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
template<typename TParam>
inline ::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>* Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>*>());
}
// Ctor Parameters []
template<typename TParam>
constexpr ::Meta::WitAi::BaseSpeechService___c__DisplayClass41_0_1<TParam>::BaseSpeechService___c__DisplayClass41_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::BaseSpeechService___c::*)()>(&::Meta::WitAi::BaseSpeechService___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7301c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::BaseSpeechService___c._GetAudioRequest_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::BaseSpeechService___c::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Meta::WitAi::BaseSpeechService___c::_GetAudioRequest_b__14_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e73024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c*>(),
                        {"<GetAudioRequest>b__14_0", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::BaseSpeechService___c::setStaticF___9(::Meta::WitAi::BaseSpeechService___c*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::BaseSpeechService___c*, "<>9", ::Meta::WitAi::BaseSpeechService___c*>(std::forward<::Meta::WitAi::BaseSpeechService___c*>(value));
}
inline ::Meta::WitAi::BaseSpeechService___c* Meta::WitAi::BaseSpeechService___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::BaseSpeechService___c*, "<>9", ::Meta::WitAi::BaseSpeechService___c*>();
}
inline void Meta::WitAi::BaseSpeechService___c::setStaticF___9__14_0(::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*, "<>9__14_0", ::Meta::WitAi::BaseSpeechService___c*>(std::forward<::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*>(value));
}
inline ::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>* Meta::WitAi::BaseSpeechService___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Meta::WitAi::Requests::VoiceServiceRequest*,bool>*, "<>9__14_0", ::Meta::WitAi::BaseSpeechService___c*>();
}
inline void Meta::WitAi::BaseSpeechService___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::BaseSpeechService___c::_GetAudioRequest_b__14_0(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::BaseSpeechService___c*>(),
                        {"<GetAudioRequest>b__14_0", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline ::Meta::WitAi::BaseSpeechService___c* Meta::WitAi::BaseSpeechService___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::BaseSpeechService___c*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::BaseSpeechService___c::BaseSpeechService___c()   {
}
