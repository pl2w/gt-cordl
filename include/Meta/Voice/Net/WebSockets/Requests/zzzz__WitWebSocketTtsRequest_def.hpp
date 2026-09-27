#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketTtsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketTtsRequest)
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi {
struct TTSWitAudioType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class FileStream;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketTtsRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketTtsRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest, Meta.WitAi.TTSWitAudioType
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketTtsRequest
class CORDL_TYPE WitWebSocketTtsRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest {
public:
// Declarations
 __declspec(property(get=get_AudioType)) ::Meta::WitAi::TTSWitAudioType  AudioType;

 __declspec(property(get=get_DownloadPath)) ::StringW  DownloadPath;

/// @brief Field OnEventsReceived, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEventsReceived, put=__cordl_internal_set_OnEventsReceived)) ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  OnEventsReceived;

/// @brief Field OnSamplesReceived, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSamplesReceived, put=__cordl_internal_set_OnSamplesReceived)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  OnSamplesReceived;

 __declspec(property(get=get_TextToSpeak)) ::StringW  TextToSpeak;

 __declspec(property(get=get_UseEvents)) bool  UseEvents;

/// @brief Field <AudioType>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioType_k__BackingField, put=__cordl_internal_set__AudioType_k__BackingField)) ::Meta::WitAi::TTSWitAudioType  _AudioType_k__BackingField;

/// @brief Field <DownloadPath>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DownloadPath_k__BackingField, put=__cordl_internal_set__DownloadPath_k__BackingField)) ::StringW  _DownloadPath_k__BackingField;

/// @brief Field <TextToSpeak>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextToSpeak_k__BackingField, put=__cordl_internal_set__TextToSpeak_k__BackingField)) ::StringW  _TextToSpeak_k__BackingField;

/// @brief Field <UseEvents>k__BackingField, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseEvents_k__BackingField, put=__cordl_internal_set__UseEvents_k__BackingField)) bool  _UseEvents_k__BackingField;

/// @brief Field <VoiceSettings>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoiceSettings_k__BackingField, put=__cordl_internal_set__VoiceSettings_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _VoiceSettings_k__BackingField;

/// @brief Field _audioDecoder, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioDecoder, put=__cordl_internal_set__audioDecoder)) ::Meta::Voice::Audio::Decoding::IAudioDecoder*  _audioDecoder;

/// @brief Field _eventCount, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__eventCount, put=__cordl_internal_set__eventCount)) int32_t  _eventCount;

/// @brief Field _fileStream, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileStream, put=__cordl_internal_set__fileStream)) ::System::IO::FileStream*  _fileStream;

/// @brief Field _jsonDecoded, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__jsonDecoded, put=__cordl_internal_set__jsonDecoded)) ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  _jsonDecoded;

/// @brief Field _sampleCount, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleCount, put=__cordl_internal_set__sampleCount)) int32_t  _sampleCount;

/// @brief Method GetTtsNode, addr 0x9e69a24, size 0x338, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* GetTtsNode(::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents) ;

/// @brief Method HandleComplete, addr 0x9e6aae0, size 0x1b0, virtual true, abstract: false, final false
inline void HandleComplete() ;

/// @brief Method HandleDownload, addr 0x9e69fac, size 0x53c, virtual true, abstract: false, final false
inline void HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method HandleDownloadBegin, addr 0x9e6a588, size 0x430, virtual true, abstract: false, final false
inline void HandleDownloadBegin() ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest* New_ctor(::StringW  requestId, ::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents, ::StringW  downloadPath, ::StringW  opId) ;

/// @brief Method ToString, addr 0x9e6ac90, size 0x2fc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* const& __cordl_internal_get_OnEventsReceived() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*& __cordl_internal_get_OnEventsReceived() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& __cordl_internal_get_OnSamplesReceived() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& __cordl_internal_get_OnSamplesReceived() ;

constexpr ::Meta::WitAi::TTSWitAudioType const& __cordl_internal_get__AudioType_k__BackingField() const;

constexpr ::Meta::WitAi::TTSWitAudioType& __cordl_internal_get__AudioType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DownloadPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DownloadPath_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TextToSpeak_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TextToSpeak_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseEvents_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__VoiceSettings_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__VoiceSettings_k__BackingField() ;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& __cordl_internal_get__audioDecoder() const;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& __cordl_internal_get__audioDecoder() ;

constexpr int32_t const& __cordl_internal_get__eventCount() const;

constexpr int32_t& __cordl_internal_get__eventCount() ;

constexpr ::System::IO::FileStream* const& __cordl_internal_get__fileStream() const;

constexpr ::System::IO::FileStream*& __cordl_internal_get__fileStream() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get__jsonDecoded() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get__jsonDecoded() ;

constexpr int32_t const& __cordl_internal_get__sampleCount() const;

constexpr int32_t& __cordl_internal_get__sampleCount() ;

constexpr void __cordl_internal_set_OnEventsReceived(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  value) ;

constexpr void __cordl_internal_set_OnSamplesReceived(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value) ;

constexpr void __cordl_internal_set__AudioType_k__BackingField(::Meta::WitAi::TTSWitAudioType  value) ;

constexpr void __cordl_internal_set__DownloadPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TextToSpeak_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UseEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__VoiceSettings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__audioDecoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value) ;

constexpr void __cordl_internal_set__eventCount(int32_t  value) ;

constexpr void __cordl_internal_set__fileStream(::System::IO::FileStream*  value) ;

constexpr void __cordl_internal_set__jsonDecoded(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

constexpr void __cordl_internal_set__sampleCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e698f0, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::StringW  requestId, ::StringW  textToSpeak, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  voiceSettings, ::Meta::WitAi::TTSWitAudioType  audioType, bool  useEvents, ::StringW  downloadPath, ::StringW  opId) ;

/// [CompilerGenerated]
/// @brief Method get_AudioType, addr 0x9e698d8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTSWitAudioType get_AudioType() ;

/// [CompilerGenerated]
/// @brief Method get_DownloadPath, addr 0x9e698e8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DownloadPath() ;

/// [CompilerGenerated]
/// @brief Method get_TextToSpeak, addr 0x9e698d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TextToSpeak() ;

/// [CompilerGenerated]
/// @brief Method get_UseEvents, addr 0x9e698e0, size 0x8, virtual false, abstract: false, final false
inline bool get_UseEvents() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketTtsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketTtsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketTtsRequest(WitWebSocketTtsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketTtsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketTtsRequest(WitWebSocketTtsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25494};

/// [CompilerGenerated]
/// @brief Field <TextToSpeak>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____TextToSpeak_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoiceSettings>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____VoiceSettings_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioType>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 ::Meta::WitAi::TTSWitAudioType  ____AudioType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UseEvents>k__BackingField, offset: 0xb4, size: 0x1, def value: None
 bool  ____UseEvents_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DownloadPath>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ____DownloadPath_k__BackingField;

/// @brief Field OnSamplesReceived, offset: 0xc0, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  ___OnSamplesReceived;

/// @brief Field OnEventsReceived, offset: 0xc8, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  ___OnEventsReceived;

/// @brief Field _audioDecoder, offset: 0xd0, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::IAudioDecoder*  ____audioDecoder;

/// @brief Field _fileStream, offset: 0xd8, size: 0x8, def value: None
 ::System::IO::FileStream*  ____fileStream;

/// @brief Field _jsonDecoded, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  ____jsonDecoded;

/// @brief Field _sampleCount, offset: 0xe8, size: 0x4, def value: None
 int32_t  ____sampleCount;

/// @brief Field _eventCount, offset: 0xec, size: 0x4, def value: None
 int32_t  ____eventCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____TextToSpeak_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____VoiceSettings_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____AudioType_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____UseEvents_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____DownloadPath_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ___OnSamplesReceived) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ___OnEventsReceived) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____audioDecoder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____fileStream) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____jsonDecoded) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____sampleCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest, ____eventCount) == 0xec, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest) == 0xf0, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
