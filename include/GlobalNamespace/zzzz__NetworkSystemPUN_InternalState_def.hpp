#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN_InternalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN_InternalState)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN_InternalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN_InternalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN_InternalState, "", "NetworkSystemPUN/InternalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/InternalState
struct CORDL_TYPE NetworkSystemPUN_InternalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkSystemPUN_InternalState_Unwrapped
enum struct __NetworkSystemPUN_InternalState_Unwrapped : int32_t {
__E_AwaitingAuth = static_cast<int32_t>(0x0),
__E_Authenticated = static_cast<int32_t>(0x1),
__E_PingGathering = static_cast<int32_t>(0x2),
__E_StateCheckFailed = static_cast<int32_t>(0x3),
__E_ConnectingToMaster = static_cast<int32_t>(0x4),
__E_ConnectedToMaster = static_cast<int32_t>(0x5),
__E_Idle = static_cast<int32_t>(0x6),
__E_Internal_Disconnecting = static_cast<int32_t>(0x7),
__E_Internal_Disconnected = static_cast<int32_t>(0x8),
__E_Searching_Connecting = static_cast<int32_t>(0x9),
__E_Searching_Connected = static_cast<int32_t>(0xa),
__E_Searching_Joining = static_cast<int32_t>(0xb),
__E_Searching_Joined = static_cast<int32_t>(0xc),
__E_Searching_JoinFailed_NotFound = static_cast<int32_t>(0xd),
__E_Searching_JoinFailed_Full = static_cast<int32_t>(0xe),
__E_Searching_JoinFailed_Other = static_cast<int32_t>(0xf),
__E_Searching_Creating = static_cast<int32_t>(0x10),
__E_Searching_Created = static_cast<int32_t>(0x11),
__E_Searching_CreateFailed = static_cast<int32_t>(0x12),
__E_Searching_Disconnecting = static_cast<int32_t>(0x13),
__E_Searching_Disconnected = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSystemPUN_InternalState_Unwrapped () const noexcept {
return static_cast<__NetworkSystemPUN_InternalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN_InternalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN_InternalState(int32_t  value__) noexcept;

/// @brief Field Authenticated value: I32(1)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Authenticated;

/// @brief Field AwaitingAuth value: I32(0)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const AwaitingAuth;

/// @brief Field ConnectedToMaster value: I32(5)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const ConnectedToMaster;

/// @brief Field ConnectingToMaster value: I32(4)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const ConnectingToMaster;

/// @brief Field Idle value: I32(6)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Idle;

/// @brief Field Internal_Disconnected value: I32(8)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Internal_Disconnected;

/// @brief Field Internal_Disconnecting value: I32(7)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Internal_Disconnecting;

/// @brief Field PingGathering value: I32(2)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const PingGathering;

/// @brief Field Searching_Connected value: I32(10)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Connected;

/// @brief Field Searching_Connecting value: I32(9)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Connecting;

/// @brief Field Searching_CreateFailed value: I32(18)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_CreateFailed;

/// @brief Field Searching_Created value: I32(17)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Created;

/// @brief Field Searching_Creating value: I32(16)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Creating;

/// @brief Field Searching_Disconnected value: I32(20)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Disconnected;

/// @brief Field Searching_Disconnecting value: I32(19)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Disconnecting;

/// @brief Field Searching_JoinFailed_Full value: I32(14)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_JoinFailed_Full;

/// @brief Field Searching_JoinFailed_NotFound value: I32(13)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_JoinFailed_NotFound;

/// @brief Field Searching_JoinFailed_Other value: I32(15)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_JoinFailed_Other;

/// @brief Field Searching_Joined value: I32(12)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Joined;

/// @brief Field Searching_Joining value: I32(11)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const Searching_Joining;

/// @brief Field StateCheckFailed value: I32(3)
static ::GlobalNamespace::NetworkSystemPUN_InternalState const StateCheckFailed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN_InternalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN_InternalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
