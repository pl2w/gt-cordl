#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketTtsRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_impl.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketTtsRequest_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.get_TextToSpeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_TextToSpeak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e698d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_TextToSpeak", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.get_AudioType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTSWitAudioType (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_AudioType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e698d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_AudioType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.get_UseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_UseEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e698e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_UseEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.get_DownloadPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_DownloadPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e698e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_DownloadPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::Meta::WitAi::TTSWitAudioType, bool, ::StringW, ::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e698f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.GetTtsNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::Meta::WitAi::TTSWitAudioType, bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::GetTtsNode)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x9e69a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"GetTtsNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.HandleDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleDownload)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x9e69fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.HandleDownloadBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleDownloadBegin)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x9e6a588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.HandleComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleComplete)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9e6aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::ToString)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9e6ac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__TextToSpeak_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextToSpeak_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__TextToSpeak_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextToSpeak_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__TextToSpeak_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextToSpeak_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__VoiceSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceSettings_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__VoiceSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceSettings_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__VoiceSettings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceSettings_k__BackingField = value;
}
constexpr ::Meta::WitAi::TTSWitAudioType& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__AudioType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioType_k__BackingField;
}
constexpr ::Meta::WitAi::TTSWitAudioType const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__AudioType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioType_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__AudioType_k__BackingField(::Meta::WitAi::TTSWitAudioType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioType_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__UseEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseEvents_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__UseEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseEvents_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__UseEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseEvents_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__DownloadPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadPath_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__DownloadPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadPath_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__DownloadPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownloadPath_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get_OnSamplesReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSamplesReceived;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get_OnSamplesReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSamplesReceived;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set_OnSamplesReceived(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSamplesReceived = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get_OnEventsReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventsReceived;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get_OnEventsReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventsReceived;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set_OnEventsReceived(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEventsReceived = value;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__audioDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDecoder;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__audioDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDecoder;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__audioDecoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioDecoder = value;
}
constexpr ::System::IO::FileStream*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__fileStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStream;
}
constexpr ::System::IO::FileStream* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__fileStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStream;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__fileStream(::System::IO::FileStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fileStream = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__jsonDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonDecoded;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__jsonDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonDecoded;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__jsonDecoded(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jsonDecoded = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__sampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleCount;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__sampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleCount;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__sampleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleCount = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__eventCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventCount;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_get__eventCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventCount;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::__cordl_internal_set__eventCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventCount = value;
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_TextToSpeak()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_TextToSpeak", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::TTSWitAudioType Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_AudioType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_AudioType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTSWitAudioType>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_UseEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_UseEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::get_DownloadPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"get_DownloadPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::_ctor(::StringW  requestId, ::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents, ::StringW  downloadPath, ::StringW  opId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, textToSpeak, voiceSettings, audioType, useEvents, downloadPath, opId);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::GetTtsNode(::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(),
                        {"GetTtsNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, textToSpeak, voiceSettings, audioType, useEvents);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString, jsonData, binaryData);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleDownloadBegin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::HandleComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::New_ctor(::StringW  requestId, ::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents, ::StringW  downloadPath, ::StringW  opId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*>(requestId, textToSpeak, voiceSettings, audioType, useEvents, downloadPath, opId));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest::WitWebSocketTtsRequest()   {
}
