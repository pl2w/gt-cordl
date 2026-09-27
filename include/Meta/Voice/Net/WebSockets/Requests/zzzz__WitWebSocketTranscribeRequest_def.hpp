#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketTranscribeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSpeechRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitWebSocketTranscribeRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketTranscribeRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketTranscribeRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketSpeechRequest
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketTranscribeRequest
class CORDL_TYPE WitWebSocketTranscribeRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest {
public:
// Declarations
 __declspec(property(get=get_MultipleSegments)) bool  MultipleSegments;

/// @brief Field <MultipleSegments>k__BackingField, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__MultipleSegments_k__BackingField, put=__cordl_internal_set__MultipleSegments_k__BackingField)) bool  _MultipleSegments_k__BackingField;

/// @brief Method CloseAudioStream, addr 0x9e69888, size 0x48, virtual true, abstract: false, final false
inline void CloseAudioStream() ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest* New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  multipleSegments) ;

constexpr bool const& __cordl_internal_get__MultipleSegments_k__BackingField() const;

constexpr bool& __cordl_internal_get__MultipleSegments_k__BackingField() ;

constexpr void __cordl_internal_set__MultipleSegments_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9e6973c, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  multipleSegments) ;

/// [CompilerGenerated]
/// @brief Method get_MultipleSegments, addr 0x9e69734, size 0x8, virtual false, abstract: false, final false
inline bool get_MultipleSegments() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketTranscribeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketTranscribeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketTranscribeRequest(WitWebSocketTranscribeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketTranscribeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketTranscribeRequest(WitWebSocketTranscribeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25493};

/// [CompilerGenerated]
/// @brief Field <MultipleSegments>k__BackingField, offset: 0xc8, size: 0x1, def value: None
 bool  ____MultipleSegments_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest, ____MultipleSegments_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest) == 0xd0, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
