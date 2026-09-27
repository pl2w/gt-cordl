#pragma once
// IWYU pragma private; include "Fusion/NetworkDelegates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDelegates)
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
namespace Fusion {
class NetworkDelegates;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkDelegates*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkDelegates*, "Fusion", "NetworkDelegates");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkDelegates
class CORDL_TYPE NetworkDelegates : public ::System::Object {
public:
// Declarations
/// @brief Field OnConnectFailed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectFailed, put=__cordl_internal_set_OnConnectFailed)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  OnConnectFailed;

/// @brief Field OnConnectRequest, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectRequest, put=__cordl_internal_set_OnConnectRequest)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  OnConnectRequest;

/// @brief Field OnConnectedToServer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectedToServer, put=__cordl_internal_set_OnConnectedToServer)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnConnectedToServer;

/// @brief Field OnCustomAuthenticationResponse, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCustomAuthenticationResponse, put=__cordl_internal_set_OnCustomAuthenticationResponse)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  OnCustomAuthenticationResponse;

/// @brief Field OnDisconnectedFromServer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnectedFromServer, put=__cordl_internal_set_OnDisconnectedFromServer)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  OnDisconnectedFromServer;

/// @brief Field OnHostMigration, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHostMigration, put=__cordl_internal_set_OnHostMigration)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  OnHostMigration;

/// @brief Field OnInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInput, put=__cordl_internal_set_OnInput)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  OnInput;

/// @brief Field OnInputMissing, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInputMissing, put=__cordl_internal_set_OnInputMissing)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  OnInputMissing;

/// @brief Field OnObjectEnterAOI, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnObjectEnterAOI, put=__cordl_internal_set_OnObjectEnterAOI)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  OnObjectEnterAOI;

/// @brief Field OnObjectExitAOI, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnObjectExitAOI, put=__cordl_internal_set_OnObjectExitAOI)) ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  OnObjectExitAOI;

/// @brief Field OnPlayerJoined, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerJoined, put=__cordl_internal_set_OnPlayerJoined)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  OnPlayerJoined;

/// @brief Field OnPlayerLeft, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerLeft, put=__cordl_internal_set_OnPlayerLeft)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  OnPlayerLeft;

/// @brief Field OnReliableDataProgress, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReliableDataProgress, put=__cordl_internal_set_OnReliableDataProgress)) ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  OnReliableDataProgress;

/// @brief Field OnReliableDataReceived, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReliableDataReceived, put=__cordl_internal_set_OnReliableDataReceived)) ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  OnReliableDataReceived;

/// @brief Field OnSceneLoadDone, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSceneLoadDone, put=__cordl_internal_set_OnSceneLoadDone)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnSceneLoadDone;

/// @brief Field OnSceneLoadStart, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSceneLoadStart, put=__cordl_internal_set_OnSceneLoadStart)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnSceneLoadStart;

/// @brief Field OnSessionListUpdated, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSessionListUpdated, put=__cordl_internal_set_OnSessionListUpdated)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  OnSessionListUpdated;

/// @brief Field OnShutdown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShutdown, put=__cordl_internal_set_OnShutdown)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  OnShutdown;

/// @brief Field OnUserSimulationMessage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUserSimulationMessage, put=__cordl_internal_set_OnUserSimulationMessage)) ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  OnUserSimulationMessage;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0x5fd7748, size 0x60, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0x5fd772c, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0x5fd7840, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0x5fd78b0, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer, addr 0x5fd76f4, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0x5fd78cc, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0x5fd7804, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0x5fd7820, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectEnterAOI, addr 0x5fd7694, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnObjectExitAOI, addr 0x5fd7674, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0x5fd76b4, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0x5fd76d4, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataProgress, addr 0x5fd77e4, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataReceived, addr 0x5fd77c4, size 0x20, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0x5fd7878, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0x5fd7894, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0x5fd785c, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0x5fd7710, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0x5fd77a8, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::Fusion::NetworkDelegates* New_ctor() ;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>* const& __cordl_internal_get_OnConnectFailed() const;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*& __cordl_internal_get_OnConnectFailed() ;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>* const& __cordl_internal_get_OnConnectRequest() const;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*& __cordl_internal_get_OnConnectRequest() ;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& __cordl_internal_get_OnConnectedToServer() const;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& __cordl_internal_get_OnConnectedToServer() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& __cordl_internal_get_OnCustomAuthenticationResponse() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& __cordl_internal_get_OnCustomAuthenticationResponse() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>* const& __cordl_internal_get_OnDisconnectedFromServer() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*& __cordl_internal_get_OnDisconnectedFromServer() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>* const& __cordl_internal_get_OnHostMigration() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*& __cordl_internal_get_OnHostMigration() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>* const& __cordl_internal_get_OnInput() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*& __cordl_internal_get_OnInput() ;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>* const& __cordl_internal_get_OnInputMissing() const;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*& __cordl_internal_get_OnInputMissing() ;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* const& __cordl_internal_get_OnObjectEnterAOI() const;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*& __cordl_internal_get_OnObjectEnterAOI() ;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>* const& __cordl_internal_get_OnObjectExitAOI() const;

constexpr ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*& __cordl_internal_get_OnObjectExitAOI() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* const& __cordl_internal_get_OnPlayerJoined() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*& __cordl_internal_get_OnPlayerJoined() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>* const& __cordl_internal_get_OnPlayerLeft() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*& __cordl_internal_get_OnPlayerLeft() ;

constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>* const& __cordl_internal_get_OnReliableDataProgress() const;

constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*& __cordl_internal_get_OnReliableDataProgress() ;

constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_OnReliableDataReceived() const;

constexpr ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_OnReliableDataReceived() ;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& __cordl_internal_get_OnSceneLoadDone() const;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& __cordl_internal_get_OnSceneLoadDone() ;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* const& __cordl_internal_get_OnSceneLoadStart() const;

constexpr ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*& __cordl_internal_get_OnSceneLoadStart() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* const& __cordl_internal_get_OnSessionListUpdated() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*& __cordl_internal_get_OnSessionListUpdated() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>* const& __cordl_internal_get_OnShutdown() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*& __cordl_internal_get_OnShutdown() ;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>* const& __cordl_internal_get_OnUserSimulationMessage() const;

constexpr ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*& __cordl_internal_get_OnUserSimulationMessage() ;

constexpr void __cordl_internal_set_OnConnectFailed(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  value) ;

constexpr void __cordl_internal_set_OnConnectRequest(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_OnConnectedToServer(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

constexpr void __cordl_internal_set_OnCustomAuthenticationResponse(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_OnDisconnectedFromServer(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  value) ;

constexpr void __cordl_internal_set_OnHostMigration(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  value) ;

constexpr void __cordl_internal_set_OnInput(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  value) ;

constexpr void __cordl_internal_set_OnInputMissing(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  value) ;

constexpr void __cordl_internal_set_OnObjectEnterAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

constexpr void __cordl_internal_set_OnObjectExitAOI(::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  value) ;

constexpr void __cordl_internal_set_OnPlayerJoined(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

constexpr void __cordl_internal_set_OnPlayerLeft(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  value) ;

constexpr void __cordl_internal_set_OnReliableDataProgress(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  value) ;

constexpr void __cordl_internal_set_OnReliableDataReceived(::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_OnSceneLoadDone(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

constexpr void __cordl_internal_set_OnSceneLoadStart(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

constexpr void __cordl_internal_set_OnSessionListUpdated(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value) ;

constexpr void __cordl_internal_set_OnShutdown(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  value) ;

constexpr void __cordl_internal_set_OnUserSimulationMessage(::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  value) ;

/// @brief Method .ctor, addr 0x5fd78e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDelegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDelegates", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDelegates(NetworkDelegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDelegates", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDelegates(NetworkDelegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19229};

/// @brief Field OnPlayerJoined, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  ___OnPlayerJoined;

/// @brief Field OnPlayerLeft, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef>*  ___OnPlayerLeft;

/// @brief Field OnInput, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkInput>*  ___OnInput;

/// @brief Field OnInputMissing, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::NetworkInput>*  ___OnInputMissing;

/// @brief Field OnShutdown, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::ShutdownReason>*  ___OnShutdown;

/// @brief Field OnDisconnectedFromServer, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetDisconnectReason>*  ___OnDisconnectedFromServer;

/// @brief Field OnConnectRequest, offset: 0x40, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*,::ArrayW<uint8_t>>*  ___OnConnectRequest;

/// @brief Field OnConnectFailed, offset: 0x48, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::Fusion::Sockets::NetAddress,::Fusion::Sockets::NetConnectFailedReason>*  ___OnConnectFailed;

/// @brief Field OnUserSimulationMessage, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::SimulationMessagePtr>*  ___OnUserSimulationMessage;

/// @brief Field OnReliableDataReceived, offset: 0x58, size: 0x8, def value: None
 ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,::System::ArraySegment_1<uint8_t>>*  ___OnReliableDataReceived;

/// @brief Field OnReliableDataProgress, offset: 0x60, size: 0x8, def value: None
 ::System::Action_4<::UnityW<::Fusion::NetworkRunner>,::Fusion::PlayerRef,::Fusion::Sockets::ReliableKey,float_t>*  ___OnReliableDataProgress;

/// @brief Field OnObjectExitAOI, offset: 0x68, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  ___OnObjectExitAOI;

/// @brief Field OnObjectEnterAOI, offset: 0x70, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::Fusion::NetworkRunner>,::UnityW<::Fusion::NetworkObject>,::Fusion::PlayerRef>*  ___OnObjectEnterAOI;

/// @brief Field OnConnectedToServer, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  ___OnConnectedToServer;

/// @brief Field OnSceneLoadDone, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  ___OnSceneLoadDone;

/// @brief Field OnSceneLoadStart, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  ___OnSceneLoadStart;

/// @brief Field OnSessionListUpdated, offset: 0x90, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  ___OnSessionListUpdated;

/// @brief Field OnCustomAuthenticationResponse, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  ___OnCustomAuthenticationResponse;

/// @brief Field OnHostMigration, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::HostMigrationToken*>*  ___OnHostMigration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkDelegates, ___OnPlayerJoined) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnPlayerLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnInputMissing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnShutdown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnDisconnectedFromServer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnConnectRequest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnConnectFailed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnUserSimulationMessage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnReliableDataReceived) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnReliableDataProgress) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnObjectExitAOI) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnObjectEnterAOI) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnConnectedToServer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnSceneLoadDone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnSceneLoadStart) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnSessionListUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnCustomAuthenticationResponse) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkDelegates, ___OnHostMigration) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkDelegates) == 0xa8, "Size mismatch!");

} // namespace end def Fusion
