#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketAuthRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitWebSocketAuthRequest)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketAuthRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketAuthRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketAuthRequest
class CORDL_TYPE WitWebSocketAuthRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest {
public:
// Declarations
/// @brief Method GetAuthNode, addr 0x9e33418, size 0x2b4, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* GetAuthNode(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest* New_ctor(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters) ;

/// @brief Method SetResponseData, addr 0x9e33960, size 0xc4, virtual true, abstract: false, final false
inline void SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData) ;

/// @brief Method .ctor, addr 0x9e32710, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketAuthRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketAuthRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketAuthRequest(WitWebSocketAuthRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketAuthRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketAuthRequest(WitWebSocketAuthRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest) == 0xa0, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
