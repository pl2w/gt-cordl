#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/FusionRelayClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionRelayClient)
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
class AppSettings;
}
namespace Fusion::Photon::Realtime {
class ConnectionHandler;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class EnterRoomParams;
}
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
namespace Fusion::Photon::Realtime {
class IConnectionCallbacks;
}
namespace Fusion::Photon::Realtime {
class IInRoomCallbacks;
}
namespace Fusion::Photon::Realtime {
class ILobbyCallbacks;
}
namespace Fusion::Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Fusion::Photon::Realtime {
struct MatchmakingMode;
}
namespace Fusion::Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Fusion::Photon::Realtime {
class Player;
}
namespace Fusion::Photon::Realtime {
class RaiseEventOptions;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class RoomInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobbyInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace Fusion {
class SessionProperty;
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class FusionRelayClient;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::FusionRelayClient*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::FusionRelayClient*, "Fusion.Photon.Realtime", "FusionRelayClient");
// Dependencies ExitGames.Client.Photon.SendOptions, Fusion.Photon.Realtime.LoadBalancingClient
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.FusionRelayClient
class CORDL_TYPE FusionRelayClient : public ::Fusion::Photon::Realtime::LoadBalancingClient {
public:
// Declarations
/// @brief Field Config, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Fusion::Photon::Realtime::FusionAppSettings*  Config;

 __declspec(property(get=get_DisconnectTimeout, put=set_DisconnectTimeout)) int32_t  DisconnectTimeout;

 __declspec(property(get=get_IsEncryptionEnabled)) bool  IsEncryptionEnabled;

 __declspec(property(get=get_IsReadyAndInRoom)) bool  IsReadyAndInRoom;

/// @brief Field OnEventCallback, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEventCallback, put=__cordl_internal_set_OnEventCallback)) ::System::Action_3<int32_t,int32_t,::System::Object*>*  OnEventCallback;

/// @brief Field OnRoomChanged, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRoomChanged, put=__cordl_internal_set_OnRoomChanged)) ::System::Action*  OnRoomChanged;

 __declspec(property(get=get_UseDefaultPorts, put=set_UseDefaultPorts)) bool  UseDefaultPorts;

/// @brief Field <UseDefaultPorts>k__BackingField, offset 0x1b8, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseDefaultPorts_k__BackingField, put=__cordl_internal_set__UseDefaultPorts_k__BackingField)) bool  _UseDefaultPorts_k__BackingField;

/// @brief Field _connectionHandler, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionHandler, put=__cordl_internal_set__connectionHandler)) ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>  _connectionHandler;

/// @brief Field _loggerGO, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loggerGO, put=__cordl_internal_set__loggerGO)) ::UnityW<::UnityEngine::GameObject>  _loggerGO;

/// @brief Field _optionsReliable, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionsReliable, put=__cordl_internal_set__optionsReliable)) ::ExitGames::Client::Photon::SendOptions  _optionsReliable;

/// @brief Field _optionsUnreliable, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionsUnreliable, put=__cordl_internal_set__optionsUnreliable)) ::ExitGames::Client::Photon::SendOptions  _optionsUnreliable;

/// @brief Field _raiseEventOptions, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__raiseEventOptions, put=__cordl_internal_set__raiseEventOptions)) ::Fusion::Photon::Realtime::RaiseEventOptions*  _raiseEventOptions;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method BuildEnterRoomParams, addr 0x5f4ae3c, size 0x204, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::EnterRoomParams* BuildEnterRoomParams(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  roomName, int32_t  maxPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, bool  isOpen, bool  isVisible, bool  useDefaultEmptyRoomTtl, bool  extendedTtl) ;

/// @brief Method BuildJoinParams, addr 0x5f4b1b4, size 0xb0, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* BuildJoinParams(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, ::Fusion::Photon::Realtime::MatchmakingMode  matchmakingMode) ;

/// @brief Method BuildSessionCustomPropertyHolders, addr 0x5f4b040, size 0x174, virtual false, abstract: false, final false
static inline void BuildSessionCustomPropertyHolders(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties, ::by_ref<::ExitGames::Client::Photon::Hashtable*>  sessionCustomProperties, ::by_ref<::ArrayW<::StringW>>  publicSessionProperties) ;

/// @brief Method ConnectUsingSettings, addr 0x5f49874, size 0x3d8, virtual true, abstract: false, final false
inline bool ConnectUsingSettings(::Fusion::Photon::Realtime::AppSettings*  appSettings) ;

/// @brief Method ExtractData, addr 0x5f4898c, size 0xfc, virtual false, abstract: false, final false
inline void ExtractData(::System::Object*  dataObj, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bufferLength) ;

/// @brief Method LoadPhotonEncryptorType, addr 0x5f490e8, size 0x5dc, virtual false, abstract: false, final false
static inline ::System::Type* LoadPhotonEncryptorType() ;

static inline ::Fusion::Photon::Realtime::FusionRelayClient* New_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  config) ;

/// @brief Method OnConnected, addr 0x5f4b304, size 0x4, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0x5f4b308, size 0x4, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x5f4b270, size 0x4, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0x5f4b26c, size 0x4, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x5f4b318, size 0x4, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x5f4b314, size 0x4, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnectMessage, addr 0x5f4ace0, size 0x100, virtual false, abstract: false, final false
inline void OnDisconnectMessage(::ExitGames::Client::Photon::DisconnectMessage*  obj) ;

/// @brief Method OnDisconnected, addr 0x5f4b30c, size 0x4, virtual true, abstract: false, final true
inline void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnEventHandler, addr 0x5f48788, size 0x7c, virtual false, abstract: false, final false
inline void OnEventHandler(::ExitGames::Client::Photon::EventData*  evt) ;

/// @brief Method OnFriendListUpdate, addr 0x5f4b274, size 0x4, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0x5f4b278, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x5f4b27c, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedLobby, addr 0x5f4b280, size 0x4, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnJoinedRoom, addr 0x5f4b264, size 0x4, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftLobby, addr 0x5f4b284, size 0x4, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLeftRoom, addr 0x5f4b268, size 0x4, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x5f4b28c, size 0x4, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnMasterClientSwitched, addr 0x5f4b290, size 0x1c, virtual true, abstract: false, final true
inline void OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5f4b2ac, size 0x1c, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5f4b2c8, size 0x1c, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x5f4b2e4, size 0x4, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnRegionListReceived, addr 0x5f4b310, size 0x4, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnRoomListUpdate, addr 0x5f4b288, size 0x4, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x5f4b2e8, size 0x1c, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method Reset, addr 0x5f49818, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SendEvent, addr 0x5f48804, size 0x150, virtual false, abstract: false, final false
inline bool SendEvent(int32_t  target, uint8_t  eventCode, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method StartFallbackSendAck, addr 0x5f4832c, size 0x1f0, virtual false, abstract: false, final false
inline void StartFallbackSendAck() ;

/// @brief Method StopFallbackSendAck, addr 0x5f48638, size 0xc0, virtual false, abstract: false, final false
inline void StopFallbackSendAck() ;

/// @brief Method Update, addr 0x5f4aa6c, size 0x25c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRoomIsOpen, addr 0x5f4a9f8, size 0x74, virtual false, abstract: false, final false
inline bool UpdateRoomIsOpen(bool  value) ;

/// @brief Method UpdateRoomIsVisible, addr 0x5f4a984, size 0x74, virtual false, abstract: false, final false
inline bool UpdateRoomIsVisible(bool  value) ;

/// @brief Method UpdateRoomProperties, addr 0x5f4a0ac, size 0x4d0, virtual false, abstract: false, final false
inline bool UpdateRoomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties) ;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& __cordl_internal_get_Config() const;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& __cordl_internal_get_Config() ;

constexpr ::System::Action_3<int32_t,int32_t,::System::Object*>* const& __cordl_internal_get_OnEventCallback() const;

constexpr ::System::Action_3<int32_t,int32_t,::System::Object*>*& __cordl_internal_get_OnEventCallback() ;

constexpr ::System::Action* const& __cordl_internal_get_OnRoomChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnRoomChanged() ;

constexpr bool const& __cordl_internal_get__UseDefaultPorts_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseDefaultPorts_k__BackingField() ;

constexpr ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler> const& __cordl_internal_get__connectionHandler() const;

constexpr ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>& __cordl_internal_get__connectionHandler() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loggerGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loggerGO() ;

constexpr ::ExitGames::Client::Photon::SendOptions const& __cordl_internal_get__optionsReliable() const;

constexpr ::ExitGames::Client::Photon::SendOptions& __cordl_internal_get__optionsReliable() ;

constexpr ::ExitGames::Client::Photon::SendOptions const& __cordl_internal_get__optionsUnreliable() const;

constexpr ::ExitGames::Client::Photon::SendOptions& __cordl_internal_get__optionsUnreliable() ;

constexpr ::Fusion::Photon::Realtime::RaiseEventOptions* const& __cordl_internal_get__raiseEventOptions() const;

constexpr ::Fusion::Photon::Realtime::RaiseEventOptions*& __cordl_internal_get__raiseEventOptions() ;

constexpr void __cordl_internal_set_Config(::Fusion::Photon::Realtime::FusionAppSettings*  value) ;

constexpr void __cordl_internal_set_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_OnRoomChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set__UseDefaultPorts_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__connectionHandler(::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>  value) ;

constexpr void __cordl_internal_set__loggerGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__optionsReliable(::ExitGames::Client::Photon::SendOptions  value) ;

constexpr void __cordl_internal_set__optionsUnreliable(::ExitGames::Client::Photon::SendOptions  value) ;

constexpr void __cordl_internal_set__raiseEventOptions(::Fusion::Photon::Realtime::RaiseEventOptions*  value) ;

/// @brief Method .ctor, addr 0x5f48dcc, size 0x304, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::FusionAppSettings*  config) ;

/// [CompilerGenerated]
/// @brief Method add_OnEventCallback, addr 0x5f48c3c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRoomChanged, addr 0x5f48af4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRoomChanged(::System::Action*  value) ;

/// @brief Method get_DisconnectTimeout, addr 0x5f48d9c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_DisconnectTimeout() ;

/// @brief Method get_IsEncryptionEnabled, addr 0x5f48ae4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEncryptionEnabled() ;

/// @brief Method get_IsReadyAndInRoom, addr 0x5f48954, size 0x38, virtual false, abstract: false, final false
inline bool get_IsReadyAndInRoom() ;

/// [CompilerGenerated]
/// @brief Method get_UseDefaultPorts, addr 0x5f48c2c, size 0x8, virtual false, abstract: false, final false
inline bool get_UseDefaultPorts() ;

/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr ::Fusion::Photon::Realtime::IInRoomCallbacks* i___Fusion__Photon__Realtime__IInRoomCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnEventCallback, addr 0x5f48cec, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnEventCallback(::System::Action_3<int32_t,int32_t,::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRoomChanged, addr 0x5f48b90, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRoomChanged(::System::Action*  value) ;

/// @brief Method set_DisconnectTimeout, addr 0x5f48db4, size 0x18, virtual false, abstract: false, final false
inline void set_DisconnectTimeout(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseDefaultPorts, addr 0x5f48c34, size 0x8, virtual false, abstract: false, final false
inline void set_UseDefaultPorts(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRelayClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRelayClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRelayClient(FusionRelayClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRelayClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRelayClient(FusionRelayClient const& ) = delete;

/// @brief Field FUSION_PLUGIN_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  FUSION_PLUGIN_NAME{u"FusionPlugin"};

/// @brief Field REGION_CN_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  REGION_CN_ID{u"cn"};

/// @brief Field SERVER_HOST_CN offset 0xffffffff size 0x8
static constexpr ::ConstString  SERVER_HOST_CN{u"ns.photonengine.cn"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28036};

/// @brief Field _connectionHandler, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::Fusion::Photon::Realtime::ConnectionHandler>  ____connectionHandler;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnRoomChanged, offset: 0x1b0, size: 0x8, def value: None
 ::System::Action*  ___OnRoomChanged;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UseDefaultPorts>k__BackingField, offset: 0x1b8, size: 0x1, def value: None
 bool  ____UseDefaultPorts_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnEventCallback, offset: 0x1c0, size: 0x8, def value: None
 ::System::Action_3<int32_t,int32_t,::System::Object*>*  ___OnEventCallback;

/// @brief Field _raiseEventOptions, offset: 0x1c8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RaiseEventOptions*  ____raiseEventOptions;

/// @brief Field _optionsUnreliable, offset: 0x1d0, size: 0x8, def value: None
 ::ExitGames::Client::Photon::SendOptions  ____optionsUnreliable;

/// @brief Field _optionsReliable, offset: 0x1d8, size: 0x8, def value: None
 ::ExitGames::Client::Photon::SendOptions  ____optionsReliable;

/// @brief Field _loggerGO, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loggerGO;

/// @brief Field Config, offset: 0x1e8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::FusionAppSettings*  ___Config;

/// @brief Size padding 0x1e8 - 0x1f0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____connectionHandler) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ___OnRoomChanged) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____UseDefaultPorts_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ___OnEventCallback) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____raiseEventOptions) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____optionsUnreliable) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____optionsReliable) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ____loggerGO) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionRelayClient, ___Config) == 0x1e8, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::FusionRelayClient) == 0x1e8, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
