#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubSubscriptionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PubSubSubscriptionState)
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
struct PubSubSubscriptionState;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::PubSub::PubSubSubscriptionState);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::PubSubSubscriptionState, "Meta.Voice.Net.PubSub", "PubSubSubscriptionState");
// Dependencies 
namespace Meta::Voice::Net::PubSub {
// Is value type: true
// CS Name: Meta.Voice.Net.PubSub.PubSubSubscriptionState
struct CORDL_TYPE PubSubSubscriptionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PubSubSubscriptionState_Unwrapped
enum struct __PubSubSubscriptionState_Unwrapped : int32_t {
__E_NotSubscribed = static_cast<int32_t>(0x0),
__E_Subscribing = static_cast<int32_t>(0x1),
__E_Subscribed = static_cast<int32_t>(0x2),
__E_Unsubscribing = static_cast<int32_t>(0x3),
__E_SubscribeError = static_cast<int32_t>(0x4),
__E_UnsubscribeError = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PubSubSubscriptionState_Unwrapped () const noexcept {
return static_cast<__PubSubSubscriptionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PubSubSubscriptionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PubSubSubscriptionState(int32_t  value__) noexcept;

/// @brief Field NotSubscribed value: I32(0)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const NotSubscribed;

/// @brief Field SubscribeError value: I32(4)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const SubscribeError;

/// @brief Field Subscribed value: I32(2)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const Subscribed;

/// @brief Field Subscribing value: I32(1)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const Subscribing;

/// @brief Field UnsubscribeError value: I32(5)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const UnsubscribeError;

/// @brief Field Unsubscribing value: I32(3)
static ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const Unsubscribing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubSubscriptionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::PubSub::PubSubSubscriptionState) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Net::PubSub
