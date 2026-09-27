#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestableOwnershipGuardHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestableOwnershipGuardHandler)
namespace ExitGames::Client::Photon {
class Hashtable;
}
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
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
class RequestableOwnershipGuardHandler___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace Photon::Pun {
class IPunOwnershipCallbacks;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class RequestableOwnershipGuardHandler;
}
namespace GlobalNamespace {
class RequestableOwnershipGuardHandler___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuardHandler*);
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuardHandler*, "", "RequestableOwnershipGuardHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0*, "", "RequestableOwnershipGuardHandler/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuardHandler
class CORDL_TYPE RequestableOwnershipGuardHandler : public ::System::Object {
public:
// Declarations
using __c__DisplayClass8_0 = ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0;

/// @brief Field callbackInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callbackInstance, put=setStaticF_callbackInstance)) ::GlobalNamespace::RequestableOwnershipGuardHandler*  callbackInstance;

/// @brief Field gaurdedViews, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gaurdedViews, put=setStaticF_gaurdedViews)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*  gaurdedViews;

/// @brief Field guardingLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_guardingLookup, put=setStaticF_guardingLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*  guardingLookup;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr operator  ::Photon::Pun::IPunOwnershipCallbacks*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

static inline ::GlobalNamespace::RequestableOwnershipGuardHandler* New_ctor() ;

/// @brief Method OnConnectFailed, addr 0x56a8a00, size 0x4, virtual true, abstract: false, final true
inline void OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnConnectRequest, addr 0x56a89fc, size 0x4, virtual true, abstract: false, final true
inline void OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method OnConnectedToServer, addr 0x56a89f4, size 0x4, virtual true, abstract: false, final true
inline void OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x56a8a0c, size 0x4, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnectedFromServer, addr 0x56a89f8, size 0x4, virtual true, abstract: false, final true
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnHostChangedShared, addr 0x56a871c, size 0x2a0, virtual false, abstract: false, final false
inline void OnHostChangedShared() ;

/// @brief Method OnHostMigration, addr 0x56a89bc, size 0x4, virtual true, abstract: false, final true
inline void OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method OnInput, addr 0x56a89e8, size 0x4, virtual true, abstract: false, final true
inline void OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method OnInputMissing, addr 0x56a89ec, size 0x4, virtual true, abstract: false, final true
inline void OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method OnObjectEnterAOI, addr 0x56a89dc, size 0x4, virtual true, abstract: false, final true
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0x56a89d8, size 0x4, virtual true, abstract: false, final true
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x56a89c8, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerJoined, addr 0x56a89e0, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerLeft, addr 0x56a89e4, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method OnPlayerLeftRoom, addr 0x56a89cc, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x56a89d4, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnReliableDataProgress, addr 0x56a8a14, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method OnReliableDataReceived, addr 0x56a8a10, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x56a89d0, size 0x4, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method OnSceneLoadDone, addr 0x56a8a18, size 0x4, virtual true, abstract: false, final true
inline void OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSceneLoadStart, addr 0x56a8a1c, size 0x4, virtual true, abstract: false, final true
inline void OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method OnSessionListUpdated, addr 0x56a8a08, size 0x4, virtual true, abstract: false, final true
inline void OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method OnShutdown, addr 0x56a89f0, size 0x4, virtual true, abstract: false, final true
inline void OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method OnUserSimulationMessage, addr 0x56a8a04, size 0x4, virtual true, abstract: false, final true
inline void OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest, addr 0x56a89c0, size 0x4, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer) ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed, addr 0x56a89c4, size 0x4, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest) ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered, addr 0x56a8480, size 0x290, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0x56a8718, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method RegisterView, addr 0x56a80f0, size 0x14c, virtual false, abstract: false, final false
static inline void RegisterView(::GlobalNamespace::NetworkView*  view, ::GlobalNamespace::RequestableOwnershipGuard*  guard) ;

/// @brief Method RegisterViews, addr 0x56a8330, size 0xb0, virtual false, abstract: false, final false
static inline void RegisterViews(::ArrayW<::GlobalNamespace::NetworkView*>  views, ::GlobalNamespace::RequestableOwnershipGuard*  guard) ;

/// @brief Method RemoveView, addr 0x56a823c, size 0xf4, virtual false, abstract: false, final false
static inline void RemoveView(::GlobalNamespace::NetworkView*  view) ;

/// @brief Method RemoveViews, addr 0x56a83e0, size 0xa0, virtual false, abstract: false, final false
static inline void RemoveViews(::ArrayW<::GlobalNamespace::NetworkView*>  views, ::GlobalNamespace::RequestableOwnershipGuard*  guard) ;

/// @brief Method .ctor, addr 0x56a80e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RequestableOwnershipGuardHandler* getStaticF_callbackInstance() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>* getStaticF_gaurdedViews() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>* getStaticF_guardingLookup() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* i___Photon__Pun__IPunOwnershipCallbacks() noexcept;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

static inline void setStaticF_callbackInstance(::GlobalNamespace::RequestableOwnershipGuardHandler*  value) ;

static inline void setStaticF_gaurdedViews(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::NetworkView>>*  value) ;

static inline void setStaticF_guardingLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NetworkView>,::UnityW<::GlobalNamespace::RequestableOwnershipGuard>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuardHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuardHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuardHandler(RequestableOwnershipGuardHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuardHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuardHandler(RequestableOwnershipGuardHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuardHandler) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuardHandler/<>c__DisplayClass8_0
class CORDL_TYPE RequestableOwnershipGuardHandler___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field targetView, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetView, put=__cordl_internal_set_targetView)) ::UnityW<::Photon::Pun::PhotonView>  targetView;

static inline ::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered>b__0, addr 0x56a8a20, size 0x70, virtual false, abstract: false, final false
inline bool _Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered_b__0(::GlobalNamespace::NetworkView*  p) ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_targetView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_targetView() ;

constexpr void __cordl_internal_set_targetView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x56a8710, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuardHandler___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuardHandler___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuardHandler___c__DisplayClass8_0(RequestableOwnershipGuardHandler___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuardHandler___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuardHandler___c__DisplayClass8_0(RequestableOwnershipGuardHandler___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{917};

/// @brief Field targetView, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___targetView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0, ___targetView) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuardHandler___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
