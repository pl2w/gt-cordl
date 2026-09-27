#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubTopicSubscriptionDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PubSubTopicSubscriptionDelegate)
namespace Meta::Voice::Net::PubSub {
struct PubSubSubscriptionState;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
class PubSubTopicSubscriptionDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*, "Meta.Voice.Net.PubSub", "PubSubTopicSubscriptionDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Net::PubSub {
// Is value type: false
// CS Name: Meta.Voice.Net.PubSub.PubSubTopicSubscriptionDelegate
class CORDL_TYPE PubSubTopicSubscriptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e6b040, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  subscriptionState) ;

static inline ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e6af8c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PubSubTopicSubscriptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PubSubTopicSubscriptionDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PubSubTopicSubscriptionDelegate(PubSubTopicSubscriptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PubSubTopicSubscriptionDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PubSubTopicSubscriptionDelegate(PubSubTopicSubscriptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Net::PubSub
