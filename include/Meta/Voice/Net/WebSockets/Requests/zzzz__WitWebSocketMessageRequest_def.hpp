#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketMessageRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketMessageRequest)
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketMessageRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketMessageRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketMessageRequest
class CORDL_TYPE WitWebSocketMessageRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest {
public:
// Declarations
 __declspec(property(get=get_EndWithFullTranscription)) bool  EndWithFullTranscription;

 __declspec(property(get=get_Endpoint)) ::StringW  Endpoint;

/// @brief Field OnDecodedResponse, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDecodedResponse, put=__cordl_internal_set_OnDecodedResponse)) ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  OnDecodedResponse;

/// @brief Field <EndWithFullTranscription>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__EndWithFullTranscription_k__BackingField, put=__cordl_internal_set__EndWithFullTranscription_k__BackingField)) bool  _EndWithFullTranscription_k__BackingField;

/// @brief Field <Endpoint>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Endpoint_k__BackingField, put=__cordl_internal_set__Endpoint_k__BackingField)) ::StringW  _Endpoint_k__BackingField;

/// @brief Method GetPostData, addr 0x9e35104, size 0x548, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseClass* GetPostData(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters) ;

/// @brief Method HandleDownload, addr 0x9e356a0, size 0xbc, virtual true, abstract: false, final false
inline void HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method IsEndOfStream, addr 0x9e3575c, size 0xd0, virtual true, abstract: false, final false
inline bool IsEndOfStream(::Meta::WitAi::Json::WitResponseNode*  responseData) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* New_ctor(::Meta::WitAi::Json::WitResponseNode*  externalPostData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

/// @brief Method SetResponseData, addr 0x9e3582c, size 0x34, virtual true, abstract: false, final false
inline void SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData) ;

/// @brief Method ToString, addr 0x9e3564c, size 0x54, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_OnDecodedResponse() const;

constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_OnDecodedResponse() ;

constexpr bool const& __cordl_internal_get__EndWithFullTranscription_k__BackingField() const;

constexpr bool& __cordl_internal_get__EndWithFullTranscription_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField() ;

constexpr void __cordl_internal_set_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

constexpr void __cordl_internal_set__EndWithFullTranscription_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e35090, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

/// @brief Method .ctor, addr 0x9e34fd0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  externalPostData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription) ;

/// [CompilerGenerated]
/// @brief Method add_OnDecodedResponse, addr 0x9e34e70, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_EndWithFullTranscription, addr 0x9e34e68, size 0x8, virtual false, abstract: false, final false
inline bool get_EndWithFullTranscription() ;

/// [CompilerGenerated]
/// @brief Method get_Endpoint, addr 0x9e34e60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Endpoint() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDecodedResponse, addr 0x9e34f20, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketMessageRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketMessageRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketMessageRequest(WitWebSocketMessageRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketMessageRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketMessageRequest(WitWebSocketMessageRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25489};

/// [CompilerGenerated]
/// @brief Field <Endpoint>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____Endpoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EndWithFullTranscription>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____EndWithFullTranscription_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnDecodedResponse, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  ___OnDecodedResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest, ____Endpoint_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest, ____EndWithFullTranscription_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest, ___OnDecodedResponse) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest) == 0xb8, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
