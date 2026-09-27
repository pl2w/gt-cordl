#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/IPubSubSubscriber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPubSubSubscriber)
namespace Meta::Voice::Net::PubSub {
class PubSubTopicSubscriptionDelegate;
}
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
class IPubSubSubscriber;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::PubSub::IPubSubSubscriber*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::IPubSubSubscriber*, "Meta.Voice.Net.PubSub", "IPubSubSubscriber");
// Dependencies 
namespace Meta::Voice::Net::PubSub {
// Is value type: false
// CS Name: Meta.Voice.Net.PubSub.IPubSubSubscriber
class CORDL_TYPE IPubSubSubscriber {
public:
// Declarations
/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Subscribe(::StringW  topicId) ;

/// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unsubscribe(::StringW  topicId) ;

/// [CompilerGenerated]
/// @brief Method add_OnTopicSubscriptionStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTopicSubscriptionStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPubSubSubscriber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPubSubSubscriber(IPubSubSubscriber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::PubSub
