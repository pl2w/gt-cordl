#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubSubscriptionState.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState::PubSubSubscriptionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState::PubSubSubscriptionState()   {
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::NotSubscribed{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::Subscribing{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::Subscribed{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::Unsubscribing{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::SubscribeError{static_cast<int32_t>(0x4)};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  Meta::Voice::Net::PubSub::PubSubSubscriptionState::UnsubscribeError{static_cast<int32_t>(0x5)};
