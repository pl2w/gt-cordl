#pragma once
// IWYU pragma private; include "Photon/Realtime/ClientState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientState)
// Forward declare root types
namespace Photon::Realtime {
struct ClientState;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::ClientState);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ClientState, "Photon.Realtime", "ClientState");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.ClientState
struct CORDL_TYPE ClientState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClientState_Unwrapped
enum struct __ClientState_Unwrapped : int32_t {
__E_PeerCreated = static_cast<int32_t>(0x0),
__E_Authenticating = static_cast<int32_t>(0x1),
__E_Authenticated = static_cast<int32_t>(0x2),
__E_JoiningLobby = static_cast<int32_t>(0x3),
__E_JoinedLobby = static_cast<int32_t>(0x4),
__E_DisconnectingFromMasterServer = static_cast<int32_t>(0x5),
__E_DisconnectingFromMasterserver = static_cast<int32_t>(0x5),
__E_ConnectingToGameServer = static_cast<int32_t>(0x6),
__E_ConnectingToGameserver = static_cast<int32_t>(0x6),
__E_ConnectedToGameServer = static_cast<int32_t>(0x7),
__E_ConnectedToGameserver = static_cast<int32_t>(0x7),
__E_Joining = static_cast<int32_t>(0x8),
__E_Joined = static_cast<int32_t>(0x9),
__E_Leaving = static_cast<int32_t>(0xa),
__E_DisconnectingFromGameServer = static_cast<int32_t>(0xb),
__E_DisconnectingFromGameserver = static_cast<int32_t>(0xb),
__E_ConnectingToMasterServer = static_cast<int32_t>(0xc),
__E_ConnectingToMasterserver = static_cast<int32_t>(0xc),
__E_Disconnecting = static_cast<int32_t>(0xd),
__E_Disconnected = static_cast<int32_t>(0xe),
__E_ConnectedToMasterServer = static_cast<int32_t>(0xf),
__E_ConnectedToMasterserver = static_cast<int32_t>(0xf),
__E_ConnectedToMaster = static_cast<int32_t>(0xf),
__E_ConnectingToNameServer = static_cast<int32_t>(0x10),
__E_ConnectedToNameServer = static_cast<int32_t>(0x11),
__E_DisconnectingFromNameServer = static_cast<int32_t>(0x12),
__E_ConnectWithFallbackProtocol = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientState_Unwrapped () const noexcept {
return static_cast<__ClientState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClientState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClientState(int32_t  value__) noexcept;

/// @brief Field Authenticated value: I32(2)
static ::Photon::Realtime::ClientState const Authenticated;

/// @brief Field Authenticating value: I32(1)
static ::Photon::Realtime::ClientState const Authenticating;

/// @brief Field ConnectWithFallbackProtocol value: I32(19)
static ::Photon::Realtime::ClientState const ConnectWithFallbackProtocol;

/// @brief Field ConnectedToGameServer value: I32(7)
static ::Photon::Realtime::ClientState const ConnectedToGameServer;

/// @brief Field ConnectedToGameserver value: I32(7)
static ::Photon::Realtime::ClientState const ConnectedToGameserver;

/// @brief Field ConnectedToMaster value: I32(15)
static ::Photon::Realtime::ClientState const ConnectedToMaster;

/// @brief Field ConnectedToMasterServer value: I32(15)
static ::Photon::Realtime::ClientState const ConnectedToMasterServer;

/// @brief Field ConnectedToMasterserver value: I32(15)
static ::Photon::Realtime::ClientState const ConnectedToMasterserver;

/// @brief Field ConnectedToNameServer value: I32(17)
static ::Photon::Realtime::ClientState const ConnectedToNameServer;

/// @brief Field ConnectingToGameServer value: I32(6)
static ::Photon::Realtime::ClientState const ConnectingToGameServer;

/// @brief Field ConnectingToGameserver value: I32(6)
static ::Photon::Realtime::ClientState const ConnectingToGameserver;

/// @brief Field ConnectingToMasterServer value: I32(12)
static ::Photon::Realtime::ClientState const ConnectingToMasterServer;

/// @brief Field ConnectingToMasterserver value: I32(12)
static ::Photon::Realtime::ClientState const ConnectingToMasterserver;

/// @brief Field ConnectingToNameServer value: I32(16)
static ::Photon::Realtime::ClientState const ConnectingToNameServer;

/// @brief Field Disconnected value: I32(14)
static ::Photon::Realtime::ClientState const Disconnected;

/// @brief Field Disconnecting value: I32(13)
static ::Photon::Realtime::ClientState const Disconnecting;

/// @brief Field DisconnectingFromGameServer value: I32(11)
static ::Photon::Realtime::ClientState const DisconnectingFromGameServer;

/// @brief Field DisconnectingFromGameserver value: I32(11)
static ::Photon::Realtime::ClientState const DisconnectingFromGameserver;

/// @brief Field DisconnectingFromMasterServer value: I32(5)
static ::Photon::Realtime::ClientState const DisconnectingFromMasterServer;

/// @brief Field DisconnectingFromMasterserver value: I32(5)
static ::Photon::Realtime::ClientState const DisconnectingFromMasterserver;

/// @brief Field DisconnectingFromNameServer value: I32(18)
static ::Photon::Realtime::ClientState const DisconnectingFromNameServer;

/// @brief Field Joined value: I32(9)
static ::Photon::Realtime::ClientState const Joined;

/// @brief Field JoinedLobby value: I32(4)
static ::Photon::Realtime::ClientState const JoinedLobby;

/// @brief Field Joining value: I32(8)
static ::Photon::Realtime::ClientState const Joining;

/// @brief Field JoiningLobby value: I32(3)
static ::Photon::Realtime::ClientState const JoiningLobby;

/// @brief Field Leaving value: I32(10)
static ::Photon::Realtime::ClientState const Leaving;

/// @brief Field PeerCreated value: I32(0)
static ::Photon::Realtime::ClientState const PeerCreated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ClientState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ClientState) == 0x4, "Size mismatch!");

} // namespace end def Photon::Realtime
