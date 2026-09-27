#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSpeechRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketMessageRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketSpeechRequest)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketSpeechRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketSpeechRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketMessageRequest
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSpeechRequest
class CORDL_TYPE WitWebSocketSpeechRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest {
public:
// Declarations
 __declspec(property(get=get_HasSentAudio, put=set_HasSentAudio)) bool  HasSentAudio;

 __declspec(property(get=get_IsReadyForInput, put=set_IsReadyForInput)) bool  IsReadyForInput;

/// @brief Field OnReadyForInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReadyForInput, put=__cordl_internal_set_OnReadyForInput)) ::System::Action*  OnReadyForInput;

/// @brief Field <HasSentAudio>k__BackingField, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasSentAudio_k__BackingField, put=__cordl_internal_set__HasSentAudio_k__BackingField)) bool  _HasSentAudio_k__BackingField;

/// @brief Field <IsReadyForInput>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadyForInput_k__BackingField, put=__cordl_internal_set__IsReadyForInput_k__BackingField)) bool  _IsReadyForInput_k__BackingField;

/// @brief Method CloseAudioStream, addr 0x9e35ad0, size 0x138, virtual true, abstract: false, final false
inline void CloseAudioStream() ;

/// @brief Method GetAdditionalPostJson, addr 0x9e35a7c, size 0x54, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* GetAdditionalPostJson() ;

/// @brief Method HandleDownload, addr 0x9e35884, size 0x10c, virtual true, abstract: false, final false
inline void HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest* New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

/// @brief Method SendAudioData, addr 0x9e35990, size 0xec, virtual false, abstract: false, final false
inline void SendAudioData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

constexpr ::System::Action* const& __cordl_internal_get_OnReadyForInput() const;

constexpr ::System::Action*& __cordl_internal_get_OnReadyForInput() ;

constexpr bool const& __cordl_internal_get__HasSentAudio_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasSentAudio_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsReadyForInput_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadyForInput_k__BackingField() ;

constexpr void __cordl_internal_set_OnReadyForInput(::System::Action*  value) ;

constexpr void __cordl_internal_set__HasSentAudio_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsReadyForInput_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9e35880, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

/// [CompilerGenerated]
/// @brief Method get_HasSentAudio, addr 0x9e35870, size 0x8, virtual false, abstract: false, final false
inline bool get_HasSentAudio() ;

/// [CompilerGenerated]
/// @brief Method get_IsReadyForInput, addr 0x9e35860, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadyForInput() ;

/// [CompilerGenerated]
/// @brief Method set_HasSentAudio, addr 0x9e35878, size 0x8, virtual false, abstract: false, final false
inline void set_HasSentAudio(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsReadyForInput, addr 0x9e35868, size 0x8, virtual false, abstract: false, final false
inline void set_IsReadyForInput(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketSpeechRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSpeechRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketSpeechRequest(WitWebSocketSpeechRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSpeechRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketSpeechRequest(WitWebSocketSpeechRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25490};

/// [CompilerGenerated]
/// @brief Field <IsReadyForInput>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____IsReadyForInput_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasSentAudio>k__BackingField, offset: 0xb9, size: 0x1, def value: None
 bool  ____HasSentAudio_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnReadyForInput, offset: 0xc0, size: 0x8, def value: None
 ::System::Action*  ___OnReadyForInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest, ____IsReadyForInput_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest, ____HasSentAudio_k__BackingField) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest, ___OnReadyForInput) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest) == 0xc8, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
