#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketConnectionState)
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
struct WitWebSocketConnectionState;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState, "Meta.Voice.Net.WebSockets", "WitWebSocketConnectionState");
// Dependencies 
namespace Meta::Voice::Net::WebSockets {
// Is value type: true
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketConnectionState
struct CORDL_TYPE WitWebSocketConnectionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WitWebSocketConnectionState_Unwrapped
enum struct __WitWebSocketConnectionState_Unwrapped : int32_t {
__E_Disconnected = static_cast<int32_t>(0x0),
__E_Connecting = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_Disconnecting = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WitWebSocketConnectionState_Unwrapped () const noexcept {
return static_cast<__WitWebSocketConnectionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketConnectionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WitWebSocketConnectionState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const Connected;

/// @brief Field Connecting value: I32(1)
static ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const Connecting;

/// @brief Field Disconnected value: I32(0)
static ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const Disconnected;

/// @brief Field Disconnecting value: I32(3)
static ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const Disconnecting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
