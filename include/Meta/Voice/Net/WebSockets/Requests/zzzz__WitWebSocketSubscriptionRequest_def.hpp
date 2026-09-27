#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSubscriptionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitWebSocketSubscriptionRequest)
namespace Meta::Voice::Net::WebSockets::Requests {
struct WitWebSocketSubscriptionType;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketSubscriptionRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketSubscriptionRequest");
// Dependencies Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest, Meta.Voice.Net.WebSockets.Requests.WitWebSocketSubscriptionType
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSubscriptionRequest
class CORDL_TYPE WitWebSocketSubscriptionRequest : public ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest {
public:
// Declarations
 __declspec(property(get=get_SubscriptionType)) ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  SubscriptionType;

/// @brief Field <SubscriptionType>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__SubscriptionType_k__BackingField, put=__cordl_internal_set__SubscriptionType_k__BackingField)) ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  _SubscriptionType_k__BackingField;

/// @brief Method GetSubscriptionNode, addr 0x9e35c10, size 0x120, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* GetSubscriptionNode(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType) ;

/// @brief Method GetSubscriptionNodeKey, addr 0x9e35dc4, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW GetSubscriptionNodeKey(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType) ;

static inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest* New_ctor(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType) ;

/// @brief Method ToString, addr 0x9e35d30, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType const& __cordl_internal_get__SubscriptionType_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType& __cordl_internal_get__SubscriptionType_k__BackingField() ;

constexpr void __cordl_internal_set__SubscriptionType_k__BackingField(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  value) ;

/// @brief Method .ctor, addr 0x9e2fa44, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType) ;

/// [CompilerGenerated]
/// @brief Method get_SubscriptionType, addr 0x9e35c08, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType get_SubscriptionType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketSubscriptionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSubscriptionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketSubscriptionRequest(WitWebSocketSubscriptionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketSubscriptionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketSubscriptionRequest(WitWebSocketSubscriptionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25492};

/// [CompilerGenerated]
/// @brief Field <SubscriptionType>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  ____SubscriptionType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest, ____SubscriptionType_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest) == 0xa8, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
