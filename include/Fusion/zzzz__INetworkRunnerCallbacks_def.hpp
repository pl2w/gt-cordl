#pragma once
// IWYU pragma private; include "Fusion/INetworkRunnerCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkRunnerCallbacks)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct ReliableKey;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct NetworkInput;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunnerCallbackArgs_ConnectRequest;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SessionInfo;
}
namespace Fusion {
struct ShutdownReason;
}
namespace Fusion {
struct SimulationMessagePtr;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class INetworkRunnerCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkRunnerCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkRunnerCallbacks*, "Fusion", "INetworkRunnerCallbacks");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkRunnerCallbacks
class CORDL_TYPE INetworkRunnerCallbacks {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method OnConnectFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnConnectRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method OnConnectedToServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnectedFromServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnHostMigration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method OnInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method OnInputMissing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method OnObjectEnterAOI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnReliableDataProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method OnReliableDataReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnSceneLoadDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSceneLoadStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSessionListUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method OnShutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method OnUserSimulationMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INetworkRunnerCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkRunnerCallbacks(INetworkRunnerCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
