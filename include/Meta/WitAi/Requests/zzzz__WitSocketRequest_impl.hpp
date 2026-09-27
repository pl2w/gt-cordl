#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitSocketRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitAudioRequestOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketMessageRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketAdapter_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioUploadHandler_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDataUploadHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitAudioRequestOption_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitSocketRequest_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_WebSocketAdapter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_WebSocketAdapter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_WebSocketAdapter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_WebSocketAdapter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_WebSocketAdapter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_WebSocketAdapter", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_AudioInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::AudioBuffer> (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_AudioInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_AudioInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Data::AudioBuffer*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_AudioInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioInput", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitSocketRequest::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_AudioRequestOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitAudioRequestOption (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_AudioRequestOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e923fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioRequestOption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_AudioRequestOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Requests::WitAudioRequestOption)>(&::Meta::WitAi::Requests::WitSocketRequest::set_AudioRequestOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioRequestOption", {}, {::i2c::type_of<::Meta::WitAi::Requests::WitAudioRequestOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9240c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Data::AudioEncoding*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_IsInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9241c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_IsInputStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(bool)>(&::Meta::WitAi::Requests::WitSocketRequest::set_IsInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_IsInputStreamReady", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_OnInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_OnInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_OnInputStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_OnInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::System::Action*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_OnInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_OnInputStreamReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_DecodeRawResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_DecodeRawResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9243c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.get_WebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::get_WebSocketRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_WebSocketRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.set_WebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*)>(&::Meta::WitAi::Requests::WitSocketRequest::set_WebSocketRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_WebSocketRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::NLPRequestInputType, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitSocketRequest::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e92454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::Finalize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e924cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetMessageRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitSocketRequest* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitSocketRequest::GetMessageRequest)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9e92958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetMessageRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetSpeechRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitSocketRequest* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, ::Meta::WitAi::Data::AudioBuffer*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitSocketRequest::GetSpeechRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e92b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetSpeechRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetExternalRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitSocketRequest* (*)(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*, ::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitSocketRequest::GetExternalRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e92c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetExternalRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetTranscribeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::WitSocketRequest* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, ::Meta::WitAi::Data::AudioBuffer*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Requests::WitSocketRequest::GetTranscribeRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e92d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetTranscribeRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::StringW, ::Meta::WitAi::Requests::WitAudioRequestOption, ::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, ::Meta::WitAi::Data::AudioBuffer*)>(&::Meta::WitAi::Requests::WitSocketRequest::Init)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e92a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Requests::WitAudioRequestOption>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::VoiceRequestState)>(&::Meta::WitAi::Requests::WitSocketRequest::SetState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e92de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetSendError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::GetSendError)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e92e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.HandleSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::HandleSend)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e92f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.CreateAudioWebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::CreateAudioWebSocketRequest)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9e9313c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"CreateAudioWebSocketRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.SetWebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*)>(&::Meta::WitAi::Requests::WitSocketRequest::SetWebSocketRequest)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9e92554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"SetWebSocketRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.ReturnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitSocketRequest::ReturnRawResponse)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e932ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnRawResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.ReturnInputReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::Requests::WitSocketRequest::ReturnInputReady)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e932c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnInputReady", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.ReturnDecodedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitSocketRequest::ReturnDecodedResponse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e93364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnDecodedResponse", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.ReturnSuccessOrError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::WitAi::Requests::WitSocketRequest::ReturnSuccessOrError)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9e9346c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnSuccessOrError", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::HandleCancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e9367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.GetActivateAudioError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::GetActivateAudioError)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e93698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.HandleAudioActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::HandleAudioActivation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e93784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Requests::WitSocketRequest::Write)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e93798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.HandleAudioDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)()>(&::Meta::WitAi::Requests::WitSocketRequest::HandleAudioDeactivation)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9e93870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest.SimulateError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest::*)(::Meta::WitAi::Requests::VoiceErrorSimulationType)>(&::Meta::WitAi::Requests::WitSocketRequest::SimulateError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e93aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 53}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Configuration_k__BackingField = value;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__WebSocketAdapter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketAdapter_k__BackingField;
}
constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__WebSocketAdapter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketAdapter_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__WebSocketAdapter_k__BackingField(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WebSocketAdapter_k__BackingField = value;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioInput_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioInput_k__BackingField;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioInput_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioInput_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__AudioInput_k__BackingField(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioInput_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__Endpoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__Endpoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__Endpoint_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Endpoint_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioRequestOption_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioRequestOption_k__BackingField;
}
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioRequestOption_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioRequestOption_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__AudioRequestOption_k__BackingField(::Meta::WitAi::Requests::WitAudioRequestOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioRequestOption_k__BackingField = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioEncoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__AudioEncoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioEncoding_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__IsInputStreamReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInputStreamReady_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__IsInputStreamReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInputStreamReady_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__IsInputStreamReady_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInputStreamReady_k__BackingField = value;
}
constexpr ::System::Action*& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__OnInputStreamReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnInputStreamReady_k__BackingField;
}
constexpr ::System::Action* const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__OnInputStreamReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnInputStreamReady_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__OnInputStreamReady_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnInputStreamReady_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__WebSocketRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketRequest_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__WebSocketRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketRequest_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__WebSocketRequest_k__BackingField(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WebSocketRequest_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__simulatedErrorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulatedErrorType;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_get__simulatedErrorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulatedErrorType;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest::__cordl_internal_set__simulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulatedErrorType = value;
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::Requests::WitSocketRequest::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> Meta::WitAi::Requests::WitSocketRequest::get_WebSocketAdapter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_WebSocketAdapter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_WebSocketAdapter(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_WebSocketAdapter", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> Meta::WitAi::Requests::WitSocketRequest::get_AudioInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::AudioBuffer>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_AudioInput(::Meta::WitAi::Data::AudioBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioInput", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::WitSocketRequest::get_Endpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_Endpoint(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Requests::WitAudioRequestOption Meta::WitAi::Requests::WitSocketRequest::get_AudioRequestOption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioRequestOption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitAudioRequestOption>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_AudioRequestOption(::Meta::WitAi::Requests::WitAudioRequestOption  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioRequestOption", {}, {::i2c::type_of<::Meta::WitAi::Requests::WitAudioRequestOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::Requests::WitSocketRequest::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitSocketRequest::get_IsInputStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_IsInputStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_IsInputStreamReady(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_IsInputStreamReady", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Meta::WitAi::Requests::WitSocketRequest::get_OnInputStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_OnInputStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_OnInputStreamReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_OnInputStreamReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitSocketRequest::get_DecodeRawResponses()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* Meta::WitAi::Requests::WitSocketRequest::get_WebSocketRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"get_WebSocketRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::set_WebSocketRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"set_WebSocketRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::WitSocketRequest::_ctor(::Meta::Voice::NLPRequestInputType  inputType, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputType, options, events);
}
inline void Meta::WitAi::Requests::WitSocketRequest::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitSocketRequest* Meta::WitAi::Requests::WitSocketRequest::GetMessageRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetMessageRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitSocketRequest*>(nullptr, ___internal_method, configuration, webSocketAdapter, options, events);
}
inline ::Meta::WitAi::Requests::WitSocketRequest* Meta::WitAi::Requests::WitSocketRequest::GetSpeechRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetSpeechRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitSocketRequest*>(nullptr, ___internal_method, configuration, webSocketAdapter, audioBuffer, options, events);
}
inline ::Meta::WitAi::Requests::WitSocketRequest* Meta::WitAi::Requests::WitSocketRequest::GetExternalRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  webSocketRequest, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetExternalRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitSocketRequest*>(nullptr, ___internal_method, webSocketRequest, configuration, webSocketAdapter, options, events);
}
inline ::Meta::WitAi::Requests::WitSocketRequest* Meta::WitAi::Requests::WitSocketRequest::GetTranscribeRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"GetTranscribeRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::WitSocketRequest*>(nullptr, ___internal_method, configuration, webSocketAdapter, audioBuffer, options, events);
}
inline void Meta::WitAi::Requests::WitSocketRequest::Init(::StringW  endpoint, ::Meta::WitAi::Requests::WitAudioRequestOption  audioOption, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Requests::WitAudioRequestOption>(), ::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), ::i2c::type_of<::Meta::WitAi::Data::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, audioOption, configuration, webSocketAdapter, audioBuffer);
}
inline void Meta::WitAi::Requests::WitSocketRequest::SetState(::Meta::Voice::VoiceRequestState  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::StringW Meta::WitAi::Requests::WitSocketRequest::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::HandleSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* Meta::WitAi::Requests::WitSocketRequest::CreateAudioWebSocketRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"CreateAudioWebSocketRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::SetWebSocketRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"SetWebSocketRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::Requests::WitSocketRequest::ReturnRawResponse(::StringW  rawResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnRawResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse);
}
inline void Meta::WitAi::Requests::WitSocketRequest::ReturnInputReady(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnInputReady", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::Requests::WitSocketRequest::ReturnDecodedResponse(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnDecodedResponse", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseNode);
}
inline void Meta::WitAi::Requests::WitSocketRequest::ReturnSuccessOrError(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"ReturnSuccessOrError", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::WitAi::Requests::WitSocketRequest::HandleCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Requests::WitSocketRequest::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::HandleAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void Meta::WitAi::Requests::WitSocketRequest::HandleAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest::SimulateError(::Meta::WitAi::Requests::VoiceErrorSimulationType  errorType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorType);
}
inline ::Meta::WitAi::Requests::WitSocketRequest* Meta::WitAi::Requests::WitSocketRequest::New_ctor(::Meta::Voice::NLPRequestInputType  inputType, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitSocketRequest*>(inputType, options, events));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr  Meta::WitAi::Requests::WitSocketRequest::operator ::Meta::WitAi::Interfaces::IAudioUploadHandler*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IAudioUploadHandler* Meta::WitAi::Requests::WitSocketRequest::i___Meta__WitAi__Interfaces__IAudioUploadHandler() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr  Meta::WitAi::Requests::WitSocketRequest::operator ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* Meta::WitAi::Requests::WitSocketRequest::i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitSocketRequest::WitSocketRequest()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::*)()>(&::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e93464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0._ReturnDecodedResponse_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::*)()>(&::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::_ReturnDecodedResponse_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e93b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*>(),
                        {"<ReturnDecodedResponse>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitSocketRequest*& Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::WitSocketRequest* const& Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::WitSocketRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
constexpr void Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
inline void Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::_ReturnDecodedResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*>(),
                        {"<ReturnDecodedResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0* Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0::WitSocketRequest___c__DisplayClass54_0()   {
}
