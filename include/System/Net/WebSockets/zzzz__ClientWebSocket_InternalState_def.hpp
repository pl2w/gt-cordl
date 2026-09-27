#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocket_InternalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientWebSocket_InternalState)
// Forward declare root types
namespace GlobalNamespace {
struct ClientWebSocket_InternalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ClientWebSocket_InternalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClientWebSocket_InternalState, "System.Net.WebSockets", "ClientWebSocket/InternalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ClientWebSocket/InternalState
struct CORDL_TYPE ClientWebSocket_InternalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClientWebSocket_InternalState_Unwrapped
enum struct __ClientWebSocket_InternalState_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x0),
__E_Connecting = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_Disposed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientWebSocket_InternalState_Unwrapped () const noexcept {
return static_cast<__ClientWebSocket_InternalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClientWebSocket_InternalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClientWebSocket_InternalState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::GlobalNamespace::ClientWebSocket_InternalState const Connected;

/// @brief Field Connecting value: I32(1)
static ::GlobalNamespace::ClientWebSocket_InternalState const Connecting;

/// @brief Field Created value: I32(0)
static ::GlobalNamespace::ClientWebSocket_InternalState const Created;

/// @brief Field Disposed value: I32(3)
static ::GlobalNamespace::ClientWebSocket_InternalState const Disposed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClientWebSocket_InternalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClientWebSocket_InternalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
