#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketState)
// Forward declare root types
namespace NativeWebSocket {
struct WebSocketState;
}
// Write type traits
MARK_VAL_T(::NativeWebSocket::WebSocketState);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketState, "NativeWebSocket", "WebSocketState");
// Dependencies 
namespace NativeWebSocket {
// Is value type: true
// CS Name: NativeWebSocket.WebSocketState
struct CORDL_TYPE WebSocketState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebSocketState_Unwrapped
enum struct __WebSocketState_Unwrapped : int32_t {
__E_Connecting = static_cast<int32_t>(0x0),
__E_Open = static_cast<int32_t>(0x1),
__E_Closing = static_cast<int32_t>(0x2),
__E_Closed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebSocketState_Unwrapped () const noexcept {
return static_cast<__WebSocketState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketState(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(3)
static ::NativeWebSocket::WebSocketState const Closed;

/// @brief Field Closing value: I32(2)
static ::NativeWebSocket::WebSocketState const Closing;

/// @brief Field Connecting value: I32(0)
static ::NativeWebSocket::WebSocketState const Connecting;

/// @brief Field Open value: I32(1)
static ::NativeWebSocket::WebSocketState const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NativeWebSocket::WebSocketState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::NativeWebSocket::WebSocketState) == 0x4, "Size mismatch!");

} // namespace end def NativeWebSocket
