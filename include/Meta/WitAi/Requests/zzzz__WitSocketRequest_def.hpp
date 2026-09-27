#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitSocketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitAudioRequestOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitSocketRequest)
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketMessageRequest;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketAdapter;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::Voice {
struct VoiceRequestState;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data {
class AudioBuffer;
}
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IAudioUploadHandler;
}
namespace Meta::WitAi::Interfaces {
class IDataUploadHandler;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
struct WitAudioRequestOption;
}
namespace Meta::WitAi::Requests {
class WitSocketRequest___c__DisplayClass54_0;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitSocketRequest;
}
namespace Meta::WitAi::Requests {
class WitSocketRequest___c__DisplayClass54_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitSocketRequest*);
MARK_REF_T(::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitSocketRequest*, "Meta.WitAi.Requests", "WitSocketRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0*, "Meta.WitAi.Requests", "WitSocketRequest/<>c__DisplayClass54_0");
// Dependencies Meta.WitAi.Requests.VoiceErrorSimulationType, Meta.WitAi.Requests.VoiceServiceRequest, Meta.WitAi.Requests.WitAudioRequestOption
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitSocketRequest
class CORDL_TYPE WitSocketRequest : public ::Meta::WitAi::Requests::VoiceServiceRequest {
public:
// Declarations
using __c__DisplayClass54_0 = ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0;

 __declspec(property(get=get_AudioEncoding, put=set_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_AudioInput, put=set_AudioInput)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  AudioInput;

 __declspec(property(get=get_AudioRequestOption, put=set_AudioRequestOption)) ::Meta::WitAi::Requests::WitAudioRequestOption  AudioRequestOption;

 __declspec(property(get=get_Configuration, put=set_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

 __declspec(property(get=get_DecodeRawResponses)) bool  DecodeRawResponses;

 __declspec(property(get=get_Endpoint, put=set_Endpoint)) ::StringW  Endpoint;

 __declspec(property(get=get_IsInputStreamReady, put=set_IsInputStreamReady)) bool  IsInputStreamReady;

 __declspec(property(get=get_OnInputStreamReady, put=set_OnInputStreamReady)) ::System::Action*  OnInputStreamReady;

 __declspec(property(get=get_WebSocketAdapter, put=set_WebSocketAdapter)) ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  WebSocketAdapter;

 __declspec(property(get=get_WebSocketRequest, put=set_WebSocketRequest)) ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  WebSocketRequest;

/// @brief Field <AudioEncoding>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioEncoding_k__BackingField, put=__cordl_internal_set__AudioEncoding_k__BackingField)) ::Meta::WitAi::Data::AudioEncoding*  _AudioEncoding_k__BackingField;

/// @brief Field <AudioInput>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioInput_k__BackingField, put=__cordl_internal_set__AudioInput_k__BackingField)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _AudioInput_k__BackingField;

/// @brief Field <AudioRequestOption>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioRequestOption_k__BackingField, put=__cordl_internal_set__AudioRequestOption_k__BackingField)) ::Meta::WitAi::Requests::WitAudioRequestOption  _AudioRequestOption_k__BackingField;

/// @brief Field <Configuration>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _Configuration_k__BackingField;

/// @brief Field <Endpoint>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Endpoint_k__BackingField, put=__cordl_internal_set__Endpoint_k__BackingField)) ::StringW  _Endpoint_k__BackingField;

/// @brief Field <IsInputStreamReady>k__BackingField, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInputStreamReady_k__BackingField, put=__cordl_internal_set__IsInputStreamReady_k__BackingField)) bool  _IsInputStreamReady_k__BackingField;

/// @brief Field <OnInputStreamReady>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnInputStreamReady_k__BackingField, put=__cordl_internal_set__OnInputStreamReady_k__BackingField)) ::System::Action*  _OnInputStreamReady_k__BackingField;

/// @brief Field <WebSocketAdapter>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__WebSocketAdapter_k__BackingField, put=__cordl_internal_set__WebSocketAdapter_k__BackingField)) ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  _WebSocketAdapter_k__BackingField;

/// @brief Field <WebSocketRequest>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__WebSocketRequest_k__BackingField, put=__cordl_internal_set__WebSocketRequest_k__BackingField)) ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  _WebSocketRequest_k__BackingField;

/// @brief Field _initialized, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _simulatedErrorType, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__simulatedErrorType, put=__cordl_internal_set__simulatedErrorType)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  _simulatedErrorType;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioUploadHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr operator  ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept;

/// @brief Method CreateAudioWebSocketRequest, addr 0x9e9313c, size 0x170, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* CreateAudioWebSocketRequest() ;

/// @brief Method Finalize, addr 0x9e924cc, size 0x88, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetActivateAudioError, addr 0x9e93698, size 0xec, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method GetExternalRequest, addr 0x9e92c60, size 0xd0, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Requests::WitSocketRequest* GetExternalRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  webSocketRequest, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// @brief Method GetMessageRequest, addr 0x9e92958, size 0x118, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Requests::WitSocketRequest* GetMessageRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// @brief Method GetSendError, addr 0x9e92e48, size 0x10c, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method GetSpeechRequest, addr 0x9e92b44, size 0x11c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Requests::WitSocketRequest* GetSpeechRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// @brief Method GetTranscribeRequest, addr 0x9e92d30, size 0xb4, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Requests::WitSocketRequest* GetTranscribeRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// @brief Method HandleAudioActivation, addr 0x9e93784, size 0x14, virtual true, abstract: false, final false
inline void HandleAudioActivation() ;

/// @brief Method HandleAudioDeactivation, addr 0x9e93870, size 0x27c, virtual true, abstract: false, final false
inline void HandleAudioDeactivation() ;

/// @brief Method HandleCancel, addr 0x9e9367c, size 0x1c, virtual true, abstract: false, final false
inline void HandleCancel() ;

/// @brief Method HandleSend, addr 0x9e92f54, size 0x1e8, virtual true, abstract: false, final false
inline void HandleSend() ;

/// @brief Method Init, addr 0x9e92a70, size 0xd4, virtual false, abstract: false, final false
inline void Init(::StringW  endpoint, ::Meta::WitAi::Requests::WitAudioRequestOption  audioOption, ::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  webSocketAdapter, ::Meta::WitAi::Data::AudioBuffer*  audioBuffer) ;

static inline ::Meta::WitAi::Requests::WitSocketRequest* New_ctor(::Meta::Voice::NLPRequestInputType  inputType, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// @brief Method ReturnDecodedResponse, addr 0x9e93364, size 0x100, virtual false, abstract: false, final false
inline void ReturnDecodedResponse(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method ReturnInputReady, addr 0x9e932c0, size 0xa4, virtual false, abstract: false, final false
inline void ReturnInputReady(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method ReturnRawResponse, addr 0x9e932ac, size 0x14, virtual false, abstract: false, final false
inline void ReturnRawResponse(::StringW  rawResponse) ;

/// @brief Method ReturnSuccessOrError, addr 0x9e9346c, size 0x210, virtual false, abstract: false, final false
inline void ReturnSuccessOrError(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method SetState, addr 0x9e92de4, size 0x64, virtual true, abstract: false, final false
inline void SetState(::Meta::Voice::VoiceRequestState  newState) ;

/// @brief Method SetWebSocketRequest, addr 0x9e92554, size 0x404, virtual false, abstract: false, final false
inline void SetWebSocketRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  request) ;

/// @brief Method SimulateError, addr 0x9e93aec, size 0x14, virtual true, abstract: false, final false
inline void SimulateError(::Meta::WitAi::Requests::VoiceErrorSimulationType  errorType) ;

/// @brief Method Write, addr 0x9e93798, size 0xd8, virtual true, abstract: false, final true
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__AudioEncoding_k__BackingField() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__AudioEncoding_k__BackingField() ;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& __cordl_internal_get__AudioInput_k__BackingField() const;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& __cordl_internal_get__AudioInput_k__BackingField() ;

constexpr ::Meta::WitAi::Requests::WitAudioRequestOption const& __cordl_internal_get__AudioRequestOption_k__BackingField() const;

constexpr ::Meta::WitAi::Requests::WitAudioRequestOption& __cordl_internal_get__AudioRequestOption_k__BackingField() ;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInputStreamReady_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInputStreamReady_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__OnInputStreamReady_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__OnInputStreamReady_k__BackingField() ;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& __cordl_internal_get__WebSocketAdapter_k__BackingField() const;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& __cordl_internal_get__WebSocketAdapter_k__BackingField() ;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* const& __cordl_internal_get__WebSocketRequest_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*& __cordl_internal_get__WebSocketRequest_k__BackingField() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& __cordl_internal_get__simulatedErrorType() const;

constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& __cordl_internal_get__simulatedErrorType() ;

constexpr void __cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__AudioInput_k__BackingField(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

constexpr void __cordl_internal_set__AudioRequestOption_k__BackingField(::Meta::WitAi::Requests::WitAudioRequestOption  value) ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value) ;

constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsInputStreamReady_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OnInputStreamReady_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__WebSocketAdapter_k__BackingField(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value) ;

constexpr void __cordl_internal_set__WebSocketRequest_k__BackingField(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__simulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value) ;

/// @brief Method .ctor, addr 0x9e92454, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::NLPRequestInputType  inputType, ::Meta::WitAi::Configuration::WitRequestOptions*  options, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events) ;

/// [CompilerGenerated]
/// @brief Method get_AudioEncoding, addr 0x9e9240c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// [CompilerGenerated]
/// @brief Method get_AudioInput, addr 0x9e923dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> get_AudioInput() ;

/// [CompilerGenerated]
/// @brief Method get_AudioRequestOption, addr 0x9e923fc, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::WitAudioRequestOption get_AudioRequestOption() ;

/// [CompilerGenerated]
/// @brief Method get_Configuration, addr 0x9e923bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_DecodeRawResponses, addr 0x9e9243c, size 0x8, virtual true, abstract: false, final false
inline bool get_DecodeRawResponses() ;

/// [CompilerGenerated]
/// @brief Method get_Endpoint, addr 0x9e923ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Endpoint() ;

/// [CompilerGenerated]
/// @brief Method get_IsInputStreamReady, addr 0x9e9241c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsInputStreamReady() ;

/// [CompilerGenerated]
/// @brief Method get_OnInputStreamReady, addr 0x9e9242c, size 0x8, virtual true, abstract: false, final true
inline ::System::Action* get_OnInputStreamReady() ;

/// [CompilerGenerated]
/// @brief Method get_WebSocketAdapter, addr 0x9e923cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> get_WebSocketAdapter() ;

/// [CompilerGenerated]
/// @brief Method get_WebSocketRequest, addr 0x9e92444, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* get_WebSocketRequest() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IAudioUploadHandler* i___Meta__WitAi__Interfaces__IAudioUploadHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method set_AudioEncoding, addr 0x9e92414, size 0x8, virtual true, abstract: false, final true
inline void set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioInput, addr 0x9e923e4, size 0x8, virtual false, abstract: false, final false
inline void set_AudioInput(::Meta::WitAi::Data::AudioBuffer*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioRequestOption, addr 0x9e92404, size 0x8, virtual false, abstract: false, final false
inline void set_AudioRequestOption(::Meta::WitAi::Requests::WitAudioRequestOption  value) ;

/// [CompilerGenerated]
/// @brief Method set_Configuration, addr 0x9e923c4, size 0x8, virtual false, abstract: false, final false
inline void set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Endpoint, addr 0x9e923f4, size 0x8, virtual false, abstract: false, final false
inline void set_Endpoint(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInputStreamReady, addr 0x9e92424, size 0x8, virtual false, abstract: false, final false
inline void set_IsInputStreamReady(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnInputStreamReady, addr 0x9e92434, size 0x8, virtual true, abstract: false, final true
inline void set_OnInputStreamReady(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WebSocketAdapter, addr 0x9e923d4, size 0x8, virtual false, abstract: false, final false
inline void set_WebSocketAdapter(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WebSocketRequest, addr 0x9e9244c, size 0x8, virtual false, abstract: false, final false
inline void set_WebSocketRequest(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitSocketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitSocketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitSocketRequest(WitSocketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitSocketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitSocketRequest(WitSocketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25651};

/// [CompilerGenerated]
/// @brief Field <Configuration>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  ____Configuration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WebSocketAdapter>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  ____WebSocketAdapter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioInput>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::AudioBuffer>  ____AudioInput_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Endpoint>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ____Endpoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioRequestOption>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 ::Meta::WitAi::Requests::WitAudioRequestOption  ____AudioRequestOption_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioEncoding>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____AudioEncoding_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsInputStreamReady>k__BackingField, offset: 0xc0, size: 0x1, def value: None
 bool  ____IsInputStreamReady_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnInputStreamReady>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::System::Action*  ____OnInputStreamReady_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WebSocketRequest>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*  ____WebSocketRequest_k__BackingField;

/// @brief Field _initialized, offset: 0xd8, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _simulatedErrorType, offset: 0xdc, size: 0x4, def value: None
 ::Meta::WitAi::Requests::VoiceErrorSimulationType  ____simulatedErrorType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____Configuration_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____WebSocketAdapter_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____AudioInput_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____Endpoint_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____AudioRequestOption_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____AudioEncoding_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____IsInputStreamReady_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____OnInputStreamReady_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____WebSocketRequest_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____initialized) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest, ____simulatedErrorType) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitSocketRequest) == 0xe0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitSocketRequest/<>c__DisplayClass54_0
class CORDL_TYPE WitSocketRequest___c__DisplayClass54_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::WitSocketRequest*  __4__this;

/// @brief Field responseNode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

static inline ::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0* New_ctor() ;

/// @brief Method <ReturnDecodedResponse>b__0, addr 0x9e93b00, size 0x2c, virtual false, abstract: false, final false
inline void _ReturnDecodedResponse_b__0() ;

constexpr ::Meta::WitAi::Requests::WitSocketRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::WitSocketRequest*& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::WitSocketRequest*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method .ctor, addr 0x9e93464, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitSocketRequest___c__DisplayClass54_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitSocketRequest___c__DisplayClass54_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitSocketRequest___c__DisplayClass54_0(WitSocketRequest___c__DisplayClass54_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitSocketRequest___c__DisplayClass54_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitSocketRequest___c__DisplayClass54_0(WitSocketRequest___c__DisplayClass54_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25650};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitSocketRequest*  _____4__this;

/// @brief Field responseNode, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0, ___responseNode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitSocketRequest___c__DisplayClass54_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
