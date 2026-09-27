#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSubscriptionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketSubscriptionType)
// Forward declare root types
namespace Meta::Voice::Net::WebSockets::Requests {
struct WitWebSocketSubscriptionType;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketSubscriptionType");
// Dependencies 
namespace Meta::Voice::Net::WebSockets::Requests {
// Is value type: true
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSubscriptionType
struct CORDL_TYPE WitWebSocketSubscriptionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WitWebSocketSubscriptionType_Unwrapped
enum struct __WitWebSocketSubscriptionType_Unwrapped : int32_t {
__E_Subscribe = static_cast<int32_t>(0x0),
__E_Unsubscribe = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WitWebSocketSubscriptionType_Unwrapped () const noexcept {
return static_cast<__WitWebSocketSubscriptionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketSubscriptionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WitWebSocketSubscriptionType(int32_t  value__) noexcept;

/// @brief Field Subscribe value: I32(0)
static ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType const Subscribe;

/// @brief Field Unsubscribe value: I32(1)
static ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType const Unsubscribe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets::Requests
