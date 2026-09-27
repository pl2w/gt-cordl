#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketState)
// Forward declare root types
namespace WebSocketSharp {
struct WebSocketState;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::WebSocketState);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketState, "WebSocketSharp", "WebSocketState");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.WebSocketState
struct CORDL_TYPE WebSocketState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __WebSocketState_Unwrapped
enum struct __WebSocketState_Unwrapped : uint16_t {
__E_Connecting = static_cast<uint16_t>(0x0u),
__E_Open = static_cast<uint16_t>(0x1u),
__E_Closing = static_cast<uint16_t>(0x2u),
__E_Closed = static_cast<uint16_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebSocketState_Unwrapped () const noexcept {
return static_cast<__WebSocketState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketState(uint16_t  value__) noexcept;

/// @brief Field Closed value: U16(3)
static ::WebSocketSharp::WebSocketState const Closed;

/// @brief Field Closing value: U16(2)
static ::WebSocketSharp::WebSocketState const Closing;

/// @brief Field Connecting value: U16(0)
static ::WebSocketSharp::WebSocketState const Connecting;

/// @brief Field Open value: U16(1)
static ::WebSocketSharp::WebSocketState const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketState) == 0x2, "Size mismatch!");

} // namespace end def WebSocketSharp
