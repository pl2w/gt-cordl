#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/FusionBBEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionBBEvents)
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
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class FusionBBEvents;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents*, "Meta.XR.MultiplayerBlocks.Fusion", "FusionBBEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents
class CORDL_TYPE FusionBBEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnConnectFailed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectFailed, put=setStaticF_OnConnectFailed)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  OnConnectFailed;

/// @brief Field OnConnectRequest, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectRequest, put=setStaticF_OnConnectRequest)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  OnConnectRequest;

/// @brief Field OnConnectedToServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectedToServer, put=setStaticF_OnConnectedToServer)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnConnectedToServer;

/// @brief Field OnCustomAuthenticationResponse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCustomAuthenticationResponse, put=setStaticF_OnCustomAuthenticationResponse)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  OnCustomAuthenticationResponse;

/// @brief Field OnDisconnectedFromServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDisconnectedFromServer, put=setStaticF_OnDisconnectedFromServer)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  OnDisconnectedFromServer;

/// @brief Field OnHostMigration, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnHostMigration, put=setStaticF_OnHostMigration)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  OnHostMigration;

/// @brief Field OnInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInput, put=setStaticF_OnInput)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  OnInput;

/// @brief Field OnInputMissing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInputMissing, put=setStaticF_OnInputMissing)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  OnInputMissing;

/// @brief Field OnObjectEnterAOI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnObjectEnterAOI, put=setStaticF_OnObjectEnterAOI)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  OnObjectEnterAOI;

/// @brief Field OnObjectExitAOI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnObjectExitAOI, put=setStaticF_OnObjectExitAOI)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  OnObjectExitAOI;

/// @brief Field OnPlayerJoined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerJoined, put=setStaticF_OnPlayerJoined)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  OnPlayerJoined;

/// @brief Field OnPlayerLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerLeft, put=setStaticF_OnPlayerLeft)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  OnPlayerLeft;

/// @brief Field OnReliableDataProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReliableDataProgress, put=setStaticF_OnReliableDataProgress)) ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  OnReliableDataProgress;

/// @brief Field OnReliableDataReceived, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReliableDataReceived, put=setStaticF_OnReliableDataReceived)) ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  OnReliableDataReceived;

/// @brief Field OnSceneLoadDone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSceneLoadDone, put=setStaticF_OnSceneLoadDone)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnSceneLoadDone;

/// @brief Field OnSceneLoadStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSceneLoadStart, put=setStaticF_OnSceneLoadStart)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnSceneLoadStart;

/// @brief Field OnSessionListUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionListUpdated, put=setStaticF_OnSessionListUpdated)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  OnSessionListUpdated;

/// @brief Field OnShutdown, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnShutdown, put=setStaticF_OnShutdown)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  OnShutdown;

/// @brief Field OnUserSimulationMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserSimulationMessage, put=setStaticF_OnUserSimulationMessage)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  OnUserSimulationMessage;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0x9f5fb18, size 0x100, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0x9f5fc18, size 0xcc, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0x9f5f9a4, size 0x6c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0x9f5fce4, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer, addr 0x9f60268, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0x9f5fd64, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0x9f5fa90, size 0x88, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0x9f5fde4, size 0x9c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI, addr 0x9f601e0, size 0x88, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectExitAOI, addr 0x9f60158, size 0x88, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0x9f5fa10, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0x9f5fe80, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataProgress, addr 0x9f603a0, size 0xb0, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataReceived, addr 0x9f602e8, size 0xb8, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0x9f5ff00, size 0x6c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0x9f5ff6c, size 0x6c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0x9f5ffd8, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0x9f60058, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0x9f600d8, size 0x80, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents* New_ctor() ;

/// @brief Method .ctor, addr 0x9f60450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnConnectFailed, addr 0x9f5e144, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnConnectRequest, addr 0x9f5e2e4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnConnectedToServer, addr 0x9f5dc6c, size 0xcc, virtual false, abstract: false, final false
static inline void add_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnCustomAuthenticationResponse, addr 0x9f5e484, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDisconnectedFromServer, addr 0x9f5f4c4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnHostMigration, addr 0x9f5e624, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnInput, addr 0x9f5dfa4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnInputMissing, addr 0x9f5e7c4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnObjectEnterAOI, addr 0x9f5f324, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnObjectExitAOI, addr 0x9f5f184, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerJoined, addr 0x9f5de04, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerLeft, addr 0x9f5e964, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnReliableDataProgress, addr 0x9f5f804, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnReliableDataReceived, addr 0x9f5f664, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSceneLoadDone, addr 0x9f5eb04, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSceneLoadStart, addr 0x9f5eca4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSessionListUpdated, addr 0x9f5a224, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnShutdown, addr 0x9f5ee44, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUserSimulationMessage, addr 0x9f5efe4, size 0xd0, virtual false, abstract: false, final false
static inline void add_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value) ;

static inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>* getStaticF_OnConnectFailed() ;

static inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>* getStaticF_OnConnectRequest() ;

static inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF_OnConnectedToServer() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* getStaticF_OnCustomAuthenticationResponse() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>* getStaticF_OnDisconnectedFromServer() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>* getStaticF_OnHostMigration() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>* getStaticF_OnInput() ;

static inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>* getStaticF_OnInputMissing() ;

static inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* getStaticF_OnObjectEnterAOI() ;

static inline ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* getStaticF_OnObjectExitAOI() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* getStaticF_OnPlayerJoined() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* getStaticF_OnPlayerLeft() ;

static inline ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>* getStaticF_OnReliableDataProgress() ;

static inline ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>* getStaticF_OnReliableDataReceived() ;

static inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF_OnSceneLoadDone() ;

static inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF_OnSceneLoadStart() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* getStaticF_OnSessionListUpdated() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>* getStaticF_OnShutdown() ;

static inline ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>* getStaticF_OnUserSimulationMessage() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnConnectFailed, addr 0x9f5e214, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnConnectRequest, addr 0x9f5e3b4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnConnectedToServer, addr 0x9f5dd38, size 0xcc, virtual false, abstract: false, final false
static inline void remove_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCustomAuthenticationResponse, addr 0x9f5e554, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDisconnectedFromServer, addr 0x9f5f594, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnHostMigration, addr 0x9f5e6f4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnInput, addr 0x9f5e074, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnInputMissing, addr 0x9f5e894, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnObjectEnterAOI, addr 0x9f5f3f4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnObjectExitAOI, addr 0x9f5f254, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerJoined, addr 0x9f5ded4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerLeft, addr 0x9f5ea34, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnReliableDataProgress, addr 0x9f5f8d4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnReliableDataReceived, addr 0x9f5f734, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSceneLoadDone, addr 0x9f5ebd4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSceneLoadStart, addr 0x9f5ed74, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSessionListUpdated, addr 0x9f5a370, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShutdown, addr 0x9f5ef14, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUserSimulationMessage, addr 0x9f5f0b4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value) ;

static inline void setStaticF_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value) ;

static inline void setStaticF_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

static inline void setStaticF_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

static inline void setStaticF_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value) ;

static inline void setStaticF_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value) ;

static inline void setStaticF_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value) ;

static inline void setStaticF_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value) ;

static inline void setStaticF_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

static inline void setStaticF_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

static inline void setStaticF_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

static inline void setStaticF_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

static inline void setStaticF_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value) ;

static inline void setStaticF_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value) ;

static inline void setStaticF_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

static inline void setStaticF_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

static inline void setStaticF_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value) ;

static inline void setStaticF_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value) ;

static inline void setStaticF_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBBEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBBEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBBEvents(FusionBBEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBBEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBBEvents(FusionBBEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::FusionBBEvents) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
