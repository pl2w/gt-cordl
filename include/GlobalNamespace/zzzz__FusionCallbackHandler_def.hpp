#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionCallbackHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionCallbackHandler)
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
class INetworkRunnerCallbacks;
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
struct RpcInfo;
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
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct FusionCallbackHandler__RemoveCallbacks_d__3;
}
namespace GlobalNamespace {
class NetEventOptions;
}
namespace GlobalNamespace {
class NetworkSystemFusion;
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
namespace GlobalNamespace {
class FusionCallbackHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionCallbackHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionCallbackHandler*, "", "FusionCallbackHandler");
// Dependencies Fusion.SimulationBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionCallbackHandler
class CORDL_TYPE FusionCallbackHandler : public ::Fusion::SimulationBehaviour {
public:
// Declarations
using _RemoveCallbacks_d__3 = ::GlobalNamespace::FusionCallbackHandler__RemoveCallbacks_d__3;

/// @brief Field parent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::GlobalNamespace::NetworkSystemFusion>  parent;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method CanRecieveEvent, addr 0x56d5b18, size 0x160, virtual false, abstract: false, final false
static inline bool CanRecieveEvent(::Fusion::NetworkRunner*  runner, ::GlobalNamespace::NetEventOptions*  opts, ::Fusion::RpcInfo  info) ;

static inline ::GlobalNamespace::FusionCallbackHandler* New_ctor() ;

/// @brief Method OnConnectFailed, addr 0x56d5400, size 0x1c, virtual true, abstract: false, final true
inline void OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnConnectRequest, addr 0x56d541c, size 0x4, virtual true, abstract: false, final true
inline void OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method OnConnectedToServer, addr 0x56d53e8, size 0x18, virtual true, abstract: false, final true
inline void OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x56d5420, size 0x20c, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDestroy, addr 0x56d5270, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisconnectedFromServer, addr 0x56d562c, size 0x18, virtual false, abstract: false, final false
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnDisconnectedFromServer, addr 0x56d6038, size 0x4, virtual true, abstract: false, final true
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnHostMigration, addr 0x56d5644, size 0x18, virtual true, abstract: false, final true
inline void OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method OnInput, addr 0x56d565c, size 0x9c, virtual true, abstract: false, final true
inline void OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method OnInputMissing, addr 0x56d56f8, size 0x4, virtual true, abstract: false, final true
inline void OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method OnObjectEnterAOI, addr 0x56d6034, size 0x4, virtual true, abstract: false, final true
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0x56d6030, size 0x4, virtual true, abstract: false, final true
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerJoined, addr 0x56d56fc, size 0x1c, virtual true, abstract: false, final true
inline void OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerLeft, addr 0x56d5718, size 0x1c, virtual true, abstract: false, final true
inline void OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnReliableDataProgress, addr 0x56d6040, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method OnReliableDataReceived, addr 0x56d5734, size 0x4, virtual false, abstract: false, final false
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnReliableDataReceived, addr 0x56d603c, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnSceneLoadDone, addr 0x56d5738, size 0x4, virtual true, abstract: false, final true
inline void OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSceneLoadStart, addr 0x56d573c, size 0x4, virtual true, abstract: false, final true
inline void OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSessionListUpdated, addr 0x56d5740, size 0x4, virtual true, abstract: false, final true
inline void OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method OnShutdown, addr 0x56d5744, size 0x18, virtual true, abstract: false, final true
inline void OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method OnUserSimulationMessage, addr 0x56d575c, size 0x4, virtual true, abstract: false, final true
inline void OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

/// [Rpc(Channel = (Fusion.RpcChannel)0)]
/// @brief Method RPC_OnEventRaisedReliable, addr 0x56d5760, size 0x3b8, virtual false, abstract: false, final false
static inline void RPC_OnEventRaisedReliable(::Fusion::NetworkRunner*  runner, uint8_t  eventCode, ::ArrayW<uint8_t>  byteData, bool  hasOps, ::ArrayW<uint8_t>  netOptsData, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void FusionCallbackHandler::RPC_OnEventRaisedReliable(Fusion.NetworkRunner,System.Byte,System.Byte[],System.Boolean,System.Byte[],Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_OnEventRaisedReliable@Invoker, addr 0x56d604c, size 0x13c, virtual false, abstract: false, final false
static inline void RPC_OnEventRaisedReliable@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// [Rpc(Channel = (Fusion.RpcChannel)1)]
/// @brief Method RPC_OnEventRaisedUnreliable, addr 0x56d5c78, size 0x3b8, virtual false, abstract: false, final false
static inline void RPC_OnEventRaisedUnreliable(::Fusion::NetworkRunner*  runner, uint8_t  eventCode, ::ArrayW<uint8_t>  byteData, bool  hasOps, ::ArrayW<uint8_t>  netOptsData, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void FusionCallbackHandler::RPC_OnEventRaisedUnreliable(Fusion.NetworkRunner,System.Byte,System.Byte[],System.Boolean,System.Byte[],Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_OnEventRaisedUnreliable@Invoker, addr 0x56d6188, size 0x1b0, virtual false, abstract: false, final false
static inline void RPC_OnEventRaisedUnreliable@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// [AsyncStateMachine(typeof(FusionCallbackHandler::<RemoveCallbacks>d__3))]
/// @brief Method RemoveCallbacks, addr 0x56d5340, size 0xa8, virtual false, abstract: false, final false
inline void RemoveCallbacks() ;

/// @brief Method Setup, addr 0x56d51a8, size 0xc8, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::NetworkSystemFusion*  parentController) ;

constexpr ::UnityW<::GlobalNamespace::NetworkSystemFusion> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::GlobalNamespace::NetworkSystemFusion>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_parent(::UnityW<::GlobalNamespace::NetworkSystemFusion>  value) ;

/// @brief Method .ctor, addr 0x56d6044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionCallbackHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionCallbackHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionCallbackHandler(FusionCallbackHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionCallbackHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionCallbackHandler(FusionCallbackHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1077};

/// @brief Field parent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemFusion>  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionCallbackHandler, ___parent) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionCallbackHandler) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
