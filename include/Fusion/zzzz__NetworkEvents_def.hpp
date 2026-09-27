#pragma once
// IWYU pragma private; include "Fusion/NetworkEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__NetworkInput_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "Fusion/zzzz__SimulationMessagePtr_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkEvents)
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
class NetworkEvents_ConnectFailedEvent;
}
namespace Fusion {
class NetworkEvents_ConnectRequestEvent;
}
namespace Fusion {
class NetworkEvents_CustomAuthenticationResponse;
}
namespace Fusion {
class NetworkEvents_DisconnectFromServerEvent;
}
namespace Fusion {
class NetworkEvents_HostMigrationEvent;
}
namespace Fusion {
class NetworkEvents_InputEvent;
}
namespace Fusion {
class NetworkEvents_InputPlayerEvent;
}
namespace Fusion {
class NetworkEvents_ObjectEvent;
}
namespace Fusion {
class NetworkEvents_ObjectPlayerEvent;
}
namespace Fusion {
class NetworkEvents_PlayerEvent;
}
namespace Fusion {
class NetworkEvents_ReliableDataEvent;
}
namespace Fusion {
class NetworkEvents_ReliableProgressEvent;
}
namespace Fusion {
class NetworkEvents_RunnerEvent;
}
namespace Fusion {
class NetworkEvents_SessionListUpdateEvent;
}
namespace Fusion {
class NetworkEvents_ShutdownEvent;
}
namespace Fusion {
class NetworkEvents_SimulationMessageEvent;
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
class NetworkEvents;
}
namespace Fusion {
class NetworkEvents_ConnectFailedEvent;
}
namespace Fusion {
class NetworkEvents_ConnectRequestEvent;
}
namespace Fusion {
class NetworkEvents_CustomAuthenticationResponse;
}
namespace Fusion {
class NetworkEvents_DisconnectFromServerEvent;
}
namespace Fusion {
class NetworkEvents_HostMigrationEvent;
}
namespace Fusion {
class NetworkEvents_InputEvent;
}
namespace Fusion {
class NetworkEvents_InputPlayerEvent;
}
namespace Fusion {
class NetworkEvents_ObjectEvent;
}
namespace Fusion {
class NetworkEvents_ObjectPlayerEvent;
}
namespace Fusion {
class NetworkEvents_PlayerEvent;
}
namespace Fusion {
class NetworkEvents_ReliableDataEvent;
}
namespace Fusion {
class NetworkEvents_ReliableProgressEvent;
}
namespace Fusion {
class NetworkEvents_RunnerEvent;
}
namespace Fusion {
class NetworkEvents_SessionListUpdateEvent;
}
namespace Fusion {
class NetworkEvents_ShutdownEvent;
}
namespace Fusion {
class NetworkEvents_SimulationMessageEvent;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkEvents*);
MARK_REF_T(::Fusion::NetworkEvents_ConnectFailedEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ConnectRequestEvent*);
MARK_REF_T(::Fusion::NetworkEvents_CustomAuthenticationResponse*);
MARK_REF_T(::Fusion::NetworkEvents_DisconnectFromServerEvent*);
MARK_REF_T(::Fusion::NetworkEvents_HostMigrationEvent*);
MARK_REF_T(::Fusion::NetworkEvents_InputEvent*);
MARK_REF_T(::Fusion::NetworkEvents_InputPlayerEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ObjectEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ObjectPlayerEvent*);
MARK_REF_T(::Fusion::NetworkEvents_PlayerEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ReliableDataEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ReliableProgressEvent*);
MARK_REF_T(::Fusion::NetworkEvents_RunnerEvent*);
MARK_REF_T(::Fusion::NetworkEvents_SessionListUpdateEvent*);
MARK_REF_T(::Fusion::NetworkEvents_ShutdownEvent*);
MARK_REF_T(::Fusion::NetworkEvents_SimulationMessageEvent*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents*, "Fusion", "NetworkEvents");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ConnectFailedEvent*, "Fusion", "NetworkEvents/ConnectFailedEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ConnectRequestEvent*, "Fusion", "NetworkEvents/ConnectRequestEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_CustomAuthenticationResponse*, "Fusion", "NetworkEvents/CustomAuthenticationResponse");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_DisconnectFromServerEvent*, "Fusion", "NetworkEvents/DisconnectFromServerEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_HostMigrationEvent*, "Fusion", "NetworkEvents/HostMigrationEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_InputEvent*, "Fusion", "NetworkEvents/InputEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_InputPlayerEvent*, "Fusion", "NetworkEvents/InputPlayerEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ObjectEvent*, "Fusion", "NetworkEvents/ObjectEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ObjectPlayerEvent*, "Fusion", "NetworkEvents/ObjectPlayerEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_PlayerEvent*, "Fusion", "NetworkEvents/PlayerEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ReliableDataEvent*, "Fusion", "NetworkEvents/ReliableDataEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ReliableProgressEvent*, "Fusion", "NetworkEvents/ReliableProgressEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_RunnerEvent*, "Fusion", "NetworkEvents/RunnerEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_SessionListUpdateEvent*, "Fusion", "NetworkEvents/SessionListUpdateEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_ShutdownEvent*, "Fusion", "NetworkEvents/ShutdownEvent");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkEvents_SimulationMessageEvent*, "Fusion", "NetworkEvents/SimulationMessageEvent");
// [AddComponentMenu("Fusion/Network Events")]
// Dependencies Fusion.Behaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents
class CORDL_TYPE NetworkEvents : public ::Fusion::Behaviour {
public:
// Declarations
using ConnectFailedEvent = ::Fusion::NetworkEvents_ConnectFailedEvent;

using ConnectRequestEvent = ::Fusion::NetworkEvents_ConnectRequestEvent;

using CustomAuthenticationResponse = ::Fusion::NetworkEvents_CustomAuthenticationResponse;

using DisconnectFromServerEvent = ::Fusion::NetworkEvents_DisconnectFromServerEvent;

using HostMigrationEvent = ::Fusion::NetworkEvents_HostMigrationEvent;

using InputEvent = ::Fusion::NetworkEvents_InputEvent;

using InputPlayerEvent = ::Fusion::NetworkEvents_InputPlayerEvent;

using ObjectEvent = ::Fusion::NetworkEvents_ObjectEvent;

using ObjectPlayerEvent = ::Fusion::NetworkEvents_ObjectPlayerEvent;

using PlayerEvent = ::Fusion::NetworkEvents_PlayerEvent;

using ReliableDataEvent = ::Fusion::NetworkEvents_ReliableDataEvent;

using ReliableProgressEvent = ::Fusion::NetworkEvents_ReliableProgressEvent;

using RunnerEvent = ::Fusion::NetworkEvents_RunnerEvent;

using SessionListUpdateEvent = ::Fusion::NetworkEvents_SessionListUpdateEvent;

using ShutdownEvent = ::Fusion::NetworkEvents_ShutdownEvent;

using SimulationMessageEvent = ::Fusion::NetworkEvents_SimulationMessageEvent;

/// @brief Field OnConnectFailed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectFailed, put=__cordl_internal_set_OnConnectFailed)) ::Fusion::NetworkEvents_ConnectFailedEvent*  OnConnectFailed;

/// @brief Field OnConnectRequest, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectRequest, put=__cordl_internal_set_OnConnectRequest)) ::Fusion::NetworkEvents_ConnectRequestEvent*  OnConnectRequest;

/// @brief Field OnConnectedToServer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectedToServer, put=__cordl_internal_set_OnConnectedToServer)) ::Fusion::NetworkEvents_RunnerEvent*  OnConnectedToServer;

/// @brief Field OnCustomAuthenticationResponse, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCustomAuthenticationResponse, put=__cordl_internal_set_OnCustomAuthenticationResponse)) ::Fusion::NetworkEvents_CustomAuthenticationResponse*  OnCustomAuthenticationResponse;

/// @brief Field OnDisconnectedFromServer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnectedFromServer, put=__cordl_internal_set_OnDisconnectedFromServer)) ::Fusion::NetworkEvents_DisconnectFromServerEvent*  OnDisconnectedFromServer;

/// @brief Field OnHostMigration, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHostMigration, put=__cordl_internal_set_OnHostMigration)) ::Fusion::NetworkEvents_HostMigrationEvent*  OnHostMigration;

/// @brief Field OnInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInput, put=__cordl_internal_set_OnInput)) ::Fusion::NetworkEvents_InputEvent*  OnInput;

/// @brief Field OnInputMissing, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInputMissing, put=__cordl_internal_set_OnInputMissing)) ::Fusion::NetworkEvents_InputPlayerEvent*  OnInputMissing;

/// @brief Field OnObjectEnterAOI, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnObjectEnterAOI, put=__cordl_internal_set_OnObjectEnterAOI)) ::Fusion::NetworkEvents_ObjectPlayerEvent*  OnObjectEnterAOI;

/// @brief Field OnObjectExitAOI, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnObjectExitAOI, put=__cordl_internal_set_OnObjectExitAOI)) ::Fusion::NetworkEvents_ObjectPlayerEvent*  OnObjectExitAOI;

/// @brief Field OnReliableData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReliableData, put=__cordl_internal_set_OnReliableData)) ::Fusion::NetworkEvents_ReliableDataEvent*  OnReliableData;

/// @brief Field OnReliableProgress, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReliableProgress, put=__cordl_internal_set_OnReliableProgress)) ::Fusion::NetworkEvents_ReliableProgressEvent*  OnReliableProgress;

/// @brief Field OnSceneLoadDone, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSceneLoadDone, put=__cordl_internal_set_OnSceneLoadDone)) ::Fusion::NetworkEvents_RunnerEvent*  OnSceneLoadDone;

/// @brief Field OnSceneLoadStart, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSceneLoadStart, put=__cordl_internal_set_OnSceneLoadStart)) ::Fusion::NetworkEvents_RunnerEvent*  OnSceneLoadStart;

/// @brief Field OnSessionListUpdate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSessionListUpdate, put=__cordl_internal_set_OnSessionListUpdate)) ::Fusion::NetworkEvents_SessionListUpdateEvent*  OnSessionListUpdate;

/// @brief Field OnShutdown, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShutdown, put=__cordl_internal_set_OnShutdown)) ::Fusion::NetworkEvents_ShutdownEvent*  OnShutdown;

/// @brief Field OnSimulationMessage, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSimulationMessage, put=__cordl_internal_set_OnSimulationMessage)) ::Fusion::NetworkEvents_SimulationMessageEvent*  OnSimulationMessage;

/// @brief Field PlayerJoined, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerJoined, put=__cordl_internal_set_PlayerJoined)) ::Fusion::NetworkEvents_PlayerEvent*  PlayerJoined;

/// @brief Field PlayerLeft, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerLeft, put=__cordl_internal_set_PlayerLeft)) ::Fusion::NetworkEvents_PlayerEvent*  PlayerLeft;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0x5fd7d88, size 0xb0, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0x5fd7d0c, size 0x7c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0x5fd7c38, size 0x60, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0x5fd8130, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer, addr 0x5fd7c98, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0x5fd81a4, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0x5fd7ab8, size 0x7c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0x5fd7b34, size 0x90, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI, addr 0x5fd7960, size 0x70, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectExitAOI, addr 0x5fd78f0, size 0x70, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0x5fd79d0, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0x5fd7a44, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataProgress, addr 0x5fd7fcc, size 0xa4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataReceived, addr 0x5fd7f20, size 0xac, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0x5fd8070, size 0x60, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0x5fd80d0, size 0x60, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0x5fd7eac, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0x5fd7bc4, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0x5fd7e38, size 0x74, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::Fusion::NetworkEvents* New_ctor() ;

constexpr ::Fusion::NetworkEvents_ConnectFailedEvent* const& __cordl_internal_get_OnConnectFailed() const;

constexpr ::Fusion::NetworkEvents_ConnectFailedEvent*& __cordl_internal_get_OnConnectFailed() ;

constexpr ::Fusion::NetworkEvents_ConnectRequestEvent* const& __cordl_internal_get_OnConnectRequest() const;

constexpr ::Fusion::NetworkEvents_ConnectRequestEvent*& __cordl_internal_get_OnConnectRequest() ;

constexpr ::Fusion::NetworkEvents_RunnerEvent* const& __cordl_internal_get_OnConnectedToServer() const;

constexpr ::Fusion::NetworkEvents_RunnerEvent*& __cordl_internal_get_OnConnectedToServer() ;

constexpr ::Fusion::NetworkEvents_CustomAuthenticationResponse* const& __cordl_internal_get_OnCustomAuthenticationResponse() const;

constexpr ::Fusion::NetworkEvents_CustomAuthenticationResponse*& __cordl_internal_get_OnCustomAuthenticationResponse() ;

constexpr ::Fusion::NetworkEvents_DisconnectFromServerEvent* const& __cordl_internal_get_OnDisconnectedFromServer() const;

constexpr ::Fusion::NetworkEvents_DisconnectFromServerEvent*& __cordl_internal_get_OnDisconnectedFromServer() ;

constexpr ::Fusion::NetworkEvents_HostMigrationEvent* const& __cordl_internal_get_OnHostMigration() const;

constexpr ::Fusion::NetworkEvents_HostMigrationEvent*& __cordl_internal_get_OnHostMigration() ;

constexpr ::Fusion::NetworkEvents_InputEvent* const& __cordl_internal_get_OnInput() const;

constexpr ::Fusion::NetworkEvents_InputEvent*& __cordl_internal_get_OnInput() ;

constexpr ::Fusion::NetworkEvents_InputPlayerEvent* const& __cordl_internal_get_OnInputMissing() const;

constexpr ::Fusion::NetworkEvents_InputPlayerEvent*& __cordl_internal_get_OnInputMissing() ;

constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent* const& __cordl_internal_get_OnObjectEnterAOI() const;

constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent*& __cordl_internal_get_OnObjectEnterAOI() ;

constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent* const& __cordl_internal_get_OnObjectExitAOI() const;

constexpr ::Fusion::NetworkEvents_ObjectPlayerEvent*& __cordl_internal_get_OnObjectExitAOI() ;

constexpr ::Fusion::NetworkEvents_ReliableDataEvent* const& __cordl_internal_get_OnReliableData() const;

constexpr ::Fusion::NetworkEvents_ReliableDataEvent*& __cordl_internal_get_OnReliableData() ;

constexpr ::Fusion::NetworkEvents_ReliableProgressEvent* const& __cordl_internal_get_OnReliableProgress() const;

constexpr ::Fusion::NetworkEvents_ReliableProgressEvent*& __cordl_internal_get_OnReliableProgress() ;

constexpr ::Fusion::NetworkEvents_RunnerEvent* const& __cordl_internal_get_OnSceneLoadDone() const;

constexpr ::Fusion::NetworkEvents_RunnerEvent*& __cordl_internal_get_OnSceneLoadDone() ;

constexpr ::Fusion::NetworkEvents_RunnerEvent* const& __cordl_internal_get_OnSceneLoadStart() const;

constexpr ::Fusion::NetworkEvents_RunnerEvent*& __cordl_internal_get_OnSceneLoadStart() ;

constexpr ::Fusion::NetworkEvents_SessionListUpdateEvent* const& __cordl_internal_get_OnSessionListUpdate() const;

constexpr ::Fusion::NetworkEvents_SessionListUpdateEvent*& __cordl_internal_get_OnSessionListUpdate() ;

constexpr ::Fusion::NetworkEvents_ShutdownEvent* const& __cordl_internal_get_OnShutdown() const;

constexpr ::Fusion::NetworkEvents_ShutdownEvent*& __cordl_internal_get_OnShutdown() ;

constexpr ::Fusion::NetworkEvents_SimulationMessageEvent* const& __cordl_internal_get_OnSimulationMessage() const;

constexpr ::Fusion::NetworkEvents_SimulationMessageEvent*& __cordl_internal_get_OnSimulationMessage() ;

constexpr ::Fusion::NetworkEvents_PlayerEvent* const& __cordl_internal_get_PlayerJoined() const;

constexpr ::Fusion::NetworkEvents_PlayerEvent*& __cordl_internal_get_PlayerJoined() ;

constexpr ::Fusion::NetworkEvents_PlayerEvent* const& __cordl_internal_get_PlayerLeft() const;

constexpr ::Fusion::NetworkEvents_PlayerEvent*& __cordl_internal_get_PlayerLeft() ;

constexpr void __cordl_internal_set_OnConnectFailed(::Fusion::NetworkEvents_ConnectFailedEvent*  value) ;

constexpr void __cordl_internal_set_OnConnectRequest(::Fusion::NetworkEvents_ConnectRequestEvent*  value) ;

constexpr void __cordl_internal_set_OnConnectedToServer(::Fusion::NetworkEvents_RunnerEvent*  value) ;

constexpr void __cordl_internal_set_OnCustomAuthenticationResponse(::Fusion::NetworkEvents_CustomAuthenticationResponse*  value) ;

constexpr void __cordl_internal_set_OnDisconnectedFromServer(::Fusion::NetworkEvents_DisconnectFromServerEvent*  value) ;

constexpr void __cordl_internal_set_OnHostMigration(::Fusion::NetworkEvents_HostMigrationEvent*  value) ;

constexpr void __cordl_internal_set_OnInput(::Fusion::NetworkEvents_InputEvent*  value) ;

constexpr void __cordl_internal_set_OnInputMissing(::Fusion::NetworkEvents_InputPlayerEvent*  value) ;

constexpr void __cordl_internal_set_OnObjectEnterAOI(::Fusion::NetworkEvents_ObjectPlayerEvent*  value) ;

constexpr void __cordl_internal_set_OnObjectExitAOI(::Fusion::NetworkEvents_ObjectPlayerEvent*  value) ;

constexpr void __cordl_internal_set_OnReliableData(::Fusion::NetworkEvents_ReliableDataEvent*  value) ;

constexpr void __cordl_internal_set_OnReliableProgress(::Fusion::NetworkEvents_ReliableProgressEvent*  value) ;

constexpr void __cordl_internal_set_OnSceneLoadDone(::Fusion::NetworkEvents_RunnerEvent*  value) ;

constexpr void __cordl_internal_set_OnSceneLoadStart(::Fusion::NetworkEvents_RunnerEvent*  value) ;

constexpr void __cordl_internal_set_OnSessionListUpdate(::Fusion::NetworkEvents_SessionListUpdateEvent*  value) ;

constexpr void __cordl_internal_set_OnShutdown(::Fusion::NetworkEvents_ShutdownEvent*  value) ;

constexpr void __cordl_internal_set_OnSimulationMessage(::Fusion::NetworkEvents_SimulationMessageEvent*  value) ;

constexpr void __cordl_internal_set_PlayerJoined(::Fusion::NetworkEvents_PlayerEvent*  value) ;

constexpr void __cordl_internal_set_PlayerLeft(::Fusion::NetworkEvents_PlayerEvent*  value) ;

/// @brief Method .ctor, addr 0x5fd8218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents(NetworkEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents(NetworkEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19246};

/// @brief Field OnInput, offset: 0x20, size: 0x8, def value: None
 ::Fusion::NetworkEvents_InputEvent*  ___OnInput;

/// @brief Field OnInputMissing, offset: 0x28, size: 0x8, def value: None
 ::Fusion::NetworkEvents_InputPlayerEvent*  ___OnInputMissing;

/// @brief Field OnConnectedToServer, offset: 0x30, size: 0x8, def value: None
 ::Fusion::NetworkEvents_RunnerEvent*  ___OnConnectedToServer;

/// @brief Field OnDisconnectedFromServer, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkEvents_DisconnectFromServerEvent*  ___OnDisconnectedFromServer;

/// @brief Field OnConnectRequest, offset: 0x40, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ConnectRequestEvent*  ___OnConnectRequest;

/// @brief Field OnConnectFailed, offset: 0x48, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ConnectFailedEvent*  ___OnConnectFailed;

/// @brief Field PlayerJoined, offset: 0x50, size: 0x8, def value: None
 ::Fusion::NetworkEvents_PlayerEvent*  ___PlayerJoined;

/// @brief Field PlayerLeft, offset: 0x58, size: 0x8, def value: None
 ::Fusion::NetworkEvents_PlayerEvent*  ___PlayerLeft;

/// @brief Field OnSimulationMessage, offset: 0x60, size: 0x8, def value: None
 ::Fusion::NetworkEvents_SimulationMessageEvent*  ___OnSimulationMessage;

/// @brief Field OnShutdown, offset: 0x68, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ShutdownEvent*  ___OnShutdown;

/// @brief Field OnSessionListUpdate, offset: 0x70, size: 0x8, def value: None
 ::Fusion::NetworkEvents_SessionListUpdateEvent*  ___OnSessionListUpdate;

/// @brief Field OnCustomAuthenticationResponse, offset: 0x78, size: 0x8, def value: None
 ::Fusion::NetworkEvents_CustomAuthenticationResponse*  ___OnCustomAuthenticationResponse;

/// @brief Field OnHostMigration, offset: 0x80, size: 0x8, def value: None
 ::Fusion::NetworkEvents_HostMigrationEvent*  ___OnHostMigration;

/// @brief Field OnSceneLoadDone, offset: 0x88, size: 0x8, def value: None
 ::Fusion::NetworkEvents_RunnerEvent*  ___OnSceneLoadDone;

/// @brief Field OnSceneLoadStart, offset: 0x90, size: 0x8, def value: None
 ::Fusion::NetworkEvents_RunnerEvent*  ___OnSceneLoadStart;

/// @brief Field OnReliableData, offset: 0x98, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ReliableDataEvent*  ___OnReliableData;

/// @brief Field OnReliableProgress, offset: 0xa0, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ReliableProgressEvent*  ___OnReliableProgress;

/// @brief Field OnObjectEnterAOI, offset: 0xa8, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ObjectPlayerEvent*  ___OnObjectEnterAOI;

/// @brief Field OnObjectExitAOI, offset: 0xb0, size: 0x8, def value: None
 ::Fusion::NetworkEvents_ObjectPlayerEvent*  ___OnObjectExitAOI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkEvents, ___OnInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnInputMissing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnConnectedToServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnDisconnectedFromServer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnConnectRequest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnConnectFailed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___PlayerJoined) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___PlayerLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnSimulationMessage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnShutdown) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnSessionListUpdate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnCustomAuthenticationResponse) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnHostMigration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnSceneLoadDone) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnSceneLoadStart) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnReliableData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnReliableProgress) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnObjectEnterAOI) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkEvents, ___OnObjectExitAOI) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkEvents) == 0xb8, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ObjectPlayerEvent
class CORDL_TYPE NetworkEvents_ObjectPlayerEvent : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ObjectPlayerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8658, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ObjectPlayerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ObjectPlayerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ObjectPlayerEvent(NetworkEvents_ObjectPlayerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ObjectPlayerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ObjectPlayerEvent(NetworkEvents_ObjectPlayerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ObjectPlayerEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ObjectEvent
class CORDL_TYPE NetworkEvents_ObjectEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ObjectEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8610, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ObjectEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ObjectEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ObjectEvent(NetworkEvents_ObjectEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ObjectEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ObjectEvent(NetworkEvents_ObjectEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ObjectEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, Fusion.Sockets.ReliableKey, UnityEngine.Events.UnityEvent`4<T0, T1, T2, T3>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ReliableProgressEvent
class CORDL_TYPE NetworkEvents_ReliableProgressEvent : public ::UnityEngine::Events::UnityEvent_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ReliableProgressEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd85c8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ReliableProgressEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ReliableProgressEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ReliableProgressEvent(NetworkEvents_ReliableProgressEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ReliableProgressEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ReliableProgressEvent(NetworkEvents_ReliableProgressEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19243};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ReliableProgressEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, Fusion.Sockets.ReliableKey, System.ArraySegment`1<T>, UnityEngine.Events.UnityEvent`4<T0, T1, T2, T3>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ReliableDataEvent
class CORDL_TYPE NetworkEvents_ReliableDataEvent : public ::UnityEngine::Events::UnityEvent_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ReliableDataEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8580, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ReliableDataEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ReliableDataEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ReliableDataEvent(NetworkEvents_ReliableDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ReliableDataEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ReliableDataEvent(NetworkEvents_ReliableDataEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ReliableDataEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/HostMigrationEvent
class CORDL_TYPE NetworkEvents_HostMigrationEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_HostMigrationEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8538, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_HostMigrationEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_HostMigrationEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_HostMigrationEvent(NetworkEvents_HostMigrationEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_HostMigrationEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_HostMigrationEvent(NetworkEvents_HostMigrationEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_HostMigrationEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/CustomAuthenticationResponse
class CORDL_TYPE NetworkEvents_CustomAuthenticationResponse : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_CustomAuthenticationResponse* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd84f0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_CustomAuthenticationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_CustomAuthenticationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_CustomAuthenticationResponse(NetworkEvents_CustomAuthenticationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_CustomAuthenticationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_CustomAuthenticationResponse(NetworkEvents_CustomAuthenticationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_CustomAuthenticationResponse) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/SessionListUpdateEvent
class CORDL_TYPE NetworkEvents_SessionListUpdateEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_SessionListUpdateEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd84a8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_SessionListUpdateEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_SessionListUpdateEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_SessionListUpdateEvent(NetworkEvents_SessionListUpdateEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_SessionListUpdateEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_SessionListUpdateEvent(NetworkEvents_SessionListUpdateEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_SessionListUpdateEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.SimulationMessagePtr, UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/SimulationMessageEvent
class CORDL_TYPE NetworkEvents_SimulationMessageEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_SimulationMessageEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8460, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_SimulationMessageEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_SimulationMessageEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_SimulationMessageEvent(NetworkEvents_SimulationMessageEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_SimulationMessageEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_SimulationMessageEvent(NetworkEvents_SimulationMessageEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19238};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_SimulationMessageEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/RunnerEvent
class CORDL_TYPE NetworkEvents_RunnerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::Fusion::NetworkRunner>> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_RunnerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8418, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_RunnerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_RunnerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_RunnerEvent(NetworkEvents_RunnerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_RunnerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_RunnerEvent(NetworkEvents_RunnerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_RunnerEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.PlayerRef, UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/PlayerEvent
class CORDL_TYPE NetworkEvents_PlayerEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_PlayerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd83d0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_PlayerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_PlayerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_PlayerEvent(NetworkEvents_PlayerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_PlayerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_PlayerEvent(NetworkEvents_PlayerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19236};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_PlayerEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.ShutdownReason, UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ShutdownEvent
class CORDL_TYPE NetworkEvents_ShutdownEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ShutdownEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8388, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ShutdownEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ShutdownEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ShutdownEvent(NetworkEvents_ShutdownEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ShutdownEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ShutdownEvent(NetworkEvents_ShutdownEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ShutdownEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.Sockets.NetDisconnectReason, UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/DisconnectFromServerEvent
class CORDL_TYPE NetworkEvents_DisconnectFromServerEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_DisconnectFromServerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8340, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_DisconnectFromServerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_DisconnectFromServerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_DisconnectFromServerEvent(NetworkEvents_DisconnectFromServerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_DisconnectFromServerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_DisconnectFromServerEvent(NetworkEvents_DisconnectFromServerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_DisconnectFromServerEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetConnectFailedReason, UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ConnectFailedEvent
class CORDL_TYPE NetworkEvents_ConnectFailedEvent : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ConnectFailedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd82f8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ConnectFailedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ConnectFailedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ConnectFailedEvent(NetworkEvents_ConnectFailedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ConnectFailedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ConnectFailedEvent(NetworkEvents_ConnectFailedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ConnectFailedEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/ConnectRequestEvent
class CORDL_TYPE NetworkEvents_ConnectRequestEvent : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_ConnectRequestEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd82b0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_ConnectRequestEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ConnectRequestEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_ConnectRequestEvent(NetworkEvents_ConnectRequestEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_ConnectRequestEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_ConnectRequestEvent(NetworkEvents_ConnectRequestEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_ConnectRequestEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.NetworkInput, Fusion.PlayerRef, UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/InputPlayerEvent
class CORDL_TYPE NetworkEvents_InputPlayerEvent : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_InputPlayerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8268, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_InputPlayerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_InputPlayerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_InputPlayerEvent(NetworkEvents_InputPlayerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_InputPlayerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_InputPlayerEvent(NetworkEvents_InputPlayerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_InputPlayerEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.NetworkInput, UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkEvents/InputEvent
class CORDL_TYPE NetworkEvents_InputEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput> {
public:
// Declarations
static inline ::Fusion::NetworkEvents_InputEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd8220, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkEvents_InputEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_InputEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkEvents_InputEvent(NetworkEvents_InputEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkEvents_InputEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkEvents_InputEvent(NetworkEvents_InputEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkEvents_InputEvent) == 0x30, "Size mismatch!");

} // namespace end def Fusion
