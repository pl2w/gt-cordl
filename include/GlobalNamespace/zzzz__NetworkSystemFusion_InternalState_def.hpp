#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion_InternalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemFusion_InternalState)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemFusion_InternalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemFusion_InternalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion_InternalState, "", "NetworkSystemFusion/InternalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemFusion/InternalState
struct CORDL_TYPE NetworkSystemFusion_InternalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkSystemFusion_InternalState_Unwrapped
enum struct __NetworkSystemFusion_InternalState_Unwrapped : int32_t {
__E_AwaitingAuth = static_cast<int32_t>(0x0),
__E_Idle = static_cast<int32_t>(0x1),
__E_Searching_Joining = static_cast<int32_t>(0x2),
__E_Searching_Joined = static_cast<int32_t>(0x3),
__E_Searching_JoinFailed = static_cast<int32_t>(0x4),
__E_Searching_Disconnecting = static_cast<int32_t>(0x5),
__E_Searching_Disconnected = static_cast<int32_t>(0x6),
__E_ConnectingToRoom = static_cast<int32_t>(0x7),
__E_ConnectedToRoom = static_cast<int32_t>(0x8),
__E_JoinRoomFailed = static_cast<int32_t>(0x9),
__E_Disconnecting = static_cast<int32_t>(0xa),
__E_Disconnected = static_cast<int32_t>(0xb),
__E_StateCheckFailed = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSystemFusion_InternalState_Unwrapped () const noexcept {
return static_cast<__NetworkSystemFusion_InternalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion_InternalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemFusion_InternalState(int32_t  value__) noexcept;

/// @brief Field AwaitingAuth value: I32(0)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const AwaitingAuth;

/// @brief Field ConnectedToRoom value: I32(8)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const ConnectedToRoom;

/// @brief Field ConnectingToRoom value: I32(7)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const ConnectingToRoom;

/// @brief Field Disconnected value: I32(11)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Disconnected;

/// @brief Field Disconnecting value: I32(10)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Disconnecting;

/// @brief Field Idle value: I32(1)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Idle;

/// @brief Field JoinRoomFailed value: I32(9)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const JoinRoomFailed;

/// @brief Field Searching_Disconnected value: I32(6)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Searching_Disconnected;

/// @brief Field Searching_Disconnecting value: I32(5)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Searching_Disconnecting;

/// @brief Field Searching_JoinFailed value: I32(4)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Searching_JoinFailed;

/// @brief Field Searching_Joined value: I32(3)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Searching_Joined;

/// @brief Field Searching_Joining value: I32(2)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const Searching_Joining;

/// @brief Field StateCheckFailed value: I32(12)
static ::GlobalNamespace::NetworkSystemFusion_InternalState const StateCheckFailed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion_InternalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion_InternalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
