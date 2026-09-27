#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSubscriptionType.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType::WitWebSocketSubscriptionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType::WitWebSocketSubscriptionType()   {
}
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType::Subscribe{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType::Unsubscribe{static_cast<int32_t>(0x1)};
