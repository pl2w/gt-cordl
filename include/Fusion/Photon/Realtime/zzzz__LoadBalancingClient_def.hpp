#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LoadBalancingClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthModeOption_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientAppType_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__EncryptionMode_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__JoinType_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingClient)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace Fusion::Photon::Realtime {
class AppSettings;
}
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Photon::Realtime {
struct ClientAppType;
}
namespace Fusion::Photon::Realtime {
struct ClientState;
}
namespace Fusion::Photon::Realtime {
class ConnectionCallbacksContainer;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class EnterRoomParams;
}
namespace Fusion::Photon::Realtime {
class ErrorInfoCallbacksContainer;
}
namespace Fusion::Photon::Realtime {
class FindFriendsOptions;
}
namespace Fusion::Photon::Realtime {
class InRoomCallbacksContainer;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient_CallbackTargetChange;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient_EncryptionDataParameters;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingPeer;
}
namespace Fusion::Photon::Realtime {
class LobbyCallbacksContainer;
}
namespace Fusion::Photon::Realtime {
class MatchMakingCallbacksContainer;
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
class RoomOptions;
}
namespace Fusion::Photon::Realtime {
class Room;
}
namespace Fusion::Photon::Realtime {
struct ServerConnection;
}
namespace Fusion::Photon::Realtime {
class SystemConnectionSummary;
}
namespace Fusion::Photon::Realtime {
class TypedLobbyInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace Fusion::Photon::Realtime {
class WebFlags;
}
namespace Fusion::Photon::Realtime {
class WebRpcCallbacksContainer;
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
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient_CallbackTargetChange;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient_EncryptionDataParameters;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::LoadBalancingClient*);
MARK_REF_T(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*);
MARK_REF_T(::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LoadBalancingClient*, "Fusion.Photon.Realtime", "LoadBalancingClient");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*, "Fusion.Photon.Realtime", "LoadBalancingClient/CallbackTargetChange");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters*, "Fusion.Photon.Realtime", "LoadBalancingClient/EncryptionDataParameters");
// Dependencies ExitGames.Client.Photon.ConnectionProtocol, Fusion.Photon.Realtime.AuthModeOption, Fusion.Photon.Realtime.ClientAppType, Fusion.Photon.Realtime.ClientState, Fusion.Photon.Realtime.DisconnectCause, Fusion.Photon.Realtime.EncryptionMode, Fusion.Photon.Realtime.JoinType, Fusion.Photon.Realtime.PhotonPortDefinition, Fusion.Photon.Realtime.ServerConnection, System.Nullable`1<T>, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LoadBalancingClient
class CORDL_TYPE LoadBalancingClient : public ::System::Object {
public:
// Declarations
using CallbackTargetChange = ::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange;

using EncryptionDataParameters = ::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters;

/// @brief Field AddressRewriter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_AddressRewriter, put=__cordl_internal_set_AddressRewriter)) ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  AddressRewriter;

 __declspec(property(get=get_AppId, put=set_AppId)) ::StringW  AppId;

 __declspec(property(get=get_AppVersion, put=set_AppVersion)) ::StringW  AppVersion;

/// @brief Field AuthMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_AuthMode, put=__cordl_internal_set_AuthMode)) ::Fusion::Photon::Realtime::AuthModeOption  AuthMode;

 __declspec(property(get=get_AuthValues, put=set_AuthValues)) ::Fusion::Photon::Realtime::AuthenticationValues*  AuthValues;

 __declspec(property(get=get_ClientType, put=set_ClientType)) ::Fusion::Photon::Realtime::ClientAppType  ClientType;

 __declspec(property(get=get_CloudRegion, put=set_CloudRegion)) ::StringW  CloudRegion;

 __declspec(property(get=get_ConnectCount, put=set_ConnectCount)) int32_t  ConnectCount;

/// @brief Field ConnectionCallbackTargets, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionCallbackTargets, put=__cordl_internal_set_ConnectionCallbackTargets)) ::Fusion::Photon::Realtime::ConnectionCallbacksContainer*  ConnectionCallbackTargets;

 __declspec(property(get=get_CurrentCluster, put=set_CurrentCluster)) ::StringW  CurrentCluster;

 __declspec(property(get=get_CurrentLobby, put=set_CurrentLobby)) ::Fusion::Photon::Realtime::TypedLobby*  CurrentLobby;

 __declspec(property(get=get_CurrentRoom, put=set_CurrentRoom)) ::Fusion::Photon::Realtime::Room*  CurrentRoom;

 __declspec(property(get=get_CurrentServerAddress)) ::StringW  CurrentServerAddress;

/// @brief Field DisconnectMessage, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisconnectMessage, put=__cordl_internal_set_DisconnectMessage)) ::StringW  DisconnectMessage;

 __declspec(property(get=get_DisconnectedCause, put=set_DisconnectedCause)) ::Fusion::Photon::Realtime::DisconnectCause  DisconnectedCause;

/// @brief Field EnableLobbyStatistics, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableLobbyStatistics, put=__cordl_internal_set_EnableLobbyStatistics)) bool  EnableLobbyStatistics;

 __declspec(property(get=get_EnableProtocolFallback, put=set_EnableProtocolFallback)) bool  EnableProtocolFallback;

/// @brief Field EncryptionMode, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_EncryptionMode, put=__cordl_internal_set_EncryptionMode)) ::Fusion::Photon::Realtime::EncryptionMode  EncryptionMode;

/// @brief Field ErrorInfoCallbackTargets, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorInfoCallbackTargets, put=__cordl_internal_set_ErrorInfoCallbackTargets)) ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*  ErrorInfoCallbackTargets;

/// @brief Field EventReceived, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventReceived, put=__cordl_internal_set_EventReceived)) ::System::Action_1<::ExitGames::Client::Photon::EventData*>*  EventReceived;

 __declspec(property(get=get_ExpectedProtocol, put=set_ExpectedProtocol)) ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  ExpectedProtocol;

 __declspec(property(get=get_GameServerAddress, put=set_GameServerAddress)) ::StringW  GameServerAddress;

 __declspec(property(get=get_InLobby)) bool  InLobby;

 __declspec(property(get=get_InRoom)) bool  InRoom;

/// @brief Field InRoomCallbackTargets, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_InRoomCallbackTargets, put=__cordl_internal_set_InRoomCallbackTargets)) ::Fusion::Photon::Realtime::InRoomCallbacksContainer*  InRoomCallbackTargets;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsConnectedAndReady)) bool  IsConnectedAndReady;

 __declspec(property(get=get_IsFetchingFriendList)) bool  IsFetchingFriendList;

 __declspec(property(get=get_IsUsingNameServer, put=set_IsUsingNameServer)) bool  IsUsingNameServer;

 __declspec(property(get=get_LoadBalancingPeer, put=set_LoadBalancingPeer)) ::Fusion::Photon::Realtime::LoadBalancingPeer*  LoadBalancingPeer;

/// @brief Field LobbyCallbackTargets, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyCallbackTargets, put=__cordl_internal_set_LobbyCallbackTargets)) ::Fusion::Photon::Realtime::LobbyCallbacksContainer*  LobbyCallbackTargets;

 __declspec(property(get=get_LocalPlayer, put=set_LocalPlayer)) ::Fusion::Photon::Realtime::Player*  LocalPlayer;

 __declspec(property(get=get_MasterServerAddress, put=set_MasterServerAddress)) ::StringW  MasterServerAddress;

/// @brief Field MatchMakingCallbackTargets, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchMakingCallbackTargets, put=__cordl_internal_set_MatchMakingCallbackTargets)) ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*  MatchMakingCallbackTargets;

 __declspec(property(get=get_NameServerAddress)) ::StringW  NameServerAddress;

/// @brief Field NameServerHost, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_NameServerHost, put=__cordl_internal_set_NameServerHost)) ::StringW  NameServerHost;

/// @brief Field NameServerPortInAppSettings, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_NameServerPortInAppSettings, put=__cordl_internal_set_NameServerPortInAppSettings)) int32_t  NameServerPortInAppSettings;

 __declspec(property(get=get_NickName, put=set_NickName)) ::StringW  NickName;

/// @brief Field OpResponseReceived, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpResponseReceived, put=__cordl_internal_set_OpResponseReceived)) ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  OpResponseReceived;

 __declspec(property(get=get_PlayersInRoomsCount, put=set_PlayersInRoomsCount)) int32_t  PlayersInRoomsCount;

 __declspec(property(get=get_PlayersOnMasterCount, put=set_PlayersOnMasterCount)) int32_t  PlayersOnMasterCount;

/// @brief Field ProtocolToNameServerPort, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ProtocolToNameServerPort, put=setStaticF_ProtocolToNameServerPort)) ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*  ProtocolToNameServerPort;

/// @brief Field ProxyServerAddress, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProxyServerAddress, put=__cordl_internal_set_ProxyServerAddress)) ::StringW  ProxyServerAddress;

/// @brief Field RegionHandler, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionHandler, put=__cordl_internal_set_RegionHandler)) ::Fusion::Photon::Realtime::RegionHandler*  RegionHandler;

 __declspec(property(get=get_RoomsCount, put=set_RoomsCount)) int32_t  RoomsCount;

 __declspec(property(get=get_SerializationProtocol, put=set_SerializationProtocol)) ::ExitGames::Client::Photon::SerializationProtocol  SerializationProtocol;

 __declspec(property(get=get_Server, put=set_Server)) ::Fusion::Photon::Realtime::ServerConnection  Server;

/// @brief Field ServerPortOverrides, offset 0x6a, size 0x6 
 __declspec(property(get=__cordl_internal_get_ServerPortOverrides, put=__cordl_internal_set_ServerPortOverrides)) ::Fusion::Photon::Realtime::PhotonPortDefinition  ServerPortOverrides;

 __declspec(property(get=get_State, put=set_State)) ::Fusion::Photon::Realtime::ClientState  State;

/// @brief Field StateChanged, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateChanged, put=__cordl_internal_set_StateChanged)) ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  StateChanged;

/// @brief Field SummaryToCache, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_SummaryToCache, put=__cordl_internal_set_SummaryToCache)) ::StringW  SummaryToCache;

/// @brief Field SystemConnectionSummary, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_SystemConnectionSummary, put=__cordl_internal_set_SystemConnectionSummary)) ::Fusion::Photon::Realtime::SystemConnectionSummary*  SystemConnectionSummary;

/// @brief Field TelemetryEnabled, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_TelemetryEnabled, put=__cordl_internal_set_TelemetryEnabled)) bool  TelemetryEnabled;

 __declspec(property(get=get_TokenForInit)) ::System::Object*  TokenForInit;

/// @brief [Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
 __declspec(property(get=get_UseAlternativeUdpPorts, put=set_UseAlternativeUdpPorts)) bool  UseAlternativeUdpPorts;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field WebRpcCallbackTargets, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WebRpcCallbackTargets, put=__cordl_internal_set_WebRpcCallbackTargets)) ::Fusion::Photon::Realtime::WebRpcCallbacksContainer*  WebRpcCallbackTargets;

/// @brief Field <AppId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AppId_k__BackingField, put=__cordl_internal_set__AppId_k__BackingField)) ::StringW  _AppId_k__BackingField;

/// @brief Field <AppVersion>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AppVersion_k__BackingField, put=__cordl_internal_set__AppVersion_k__BackingField)) ::StringW  _AppVersion_k__BackingField;

/// @brief Field <AuthValues>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AuthValues_k__BackingField, put=__cordl_internal_set__AuthValues_k__BackingField)) ::Fusion::Photon::Realtime::AuthenticationValues*  _AuthValues_k__BackingField;

/// @brief Field <ClientType>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__ClientType_k__BackingField, put=__cordl_internal_set__ClientType_k__BackingField)) ::Fusion::Photon::Realtime::ClientAppType  _ClientType_k__BackingField;

/// @brief Field <CloudRegion>k__BackingField, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloudRegion_k__BackingField, put=__cordl_internal_set__CloudRegion_k__BackingField)) ::StringW  _CloudRegion_k__BackingField;

/// @brief Field <ConnectCount>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ConnectCount_k__BackingField, put=__cordl_internal_set__ConnectCount_k__BackingField)) int32_t  _ConnectCount_k__BackingField;

/// @brief Field <CurrentCluster>k__BackingField, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentCluster_k__BackingField, put=__cordl_internal_set__CurrentCluster_k__BackingField)) ::StringW  _CurrentCluster_k__BackingField;

/// @brief Field <CurrentLobby>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentLobby_k__BackingField, put=__cordl_internal_set__CurrentLobby_k__BackingField)) ::Fusion::Photon::Realtime::TypedLobby*  _CurrentLobby_k__BackingField;

/// @brief Field <CurrentRoom>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentRoom_k__BackingField, put=__cordl_internal_set__CurrentRoom_k__BackingField)) ::Fusion::Photon::Realtime::Room*  _CurrentRoom_k__BackingField;

/// @brief Field <DisconnectedCause>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__DisconnectedCause_k__BackingField, put=__cordl_internal_set__DisconnectedCause_k__BackingField)) ::Fusion::Photon::Realtime::DisconnectCause  _DisconnectedCause_k__BackingField;

/// @brief Field <EnableProtocolFallback>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableProtocolFallback_k__BackingField, put=__cordl_internal_set__EnableProtocolFallback_k__BackingField)) bool  _EnableProtocolFallback_k__BackingField;

/// @brief Field <ExpectedProtocol>k__BackingField, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__ExpectedProtocol_k__BackingField, put=__cordl_internal_set__ExpectedProtocol_k__BackingField)) ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  _ExpectedProtocol_k__BackingField;

/// @brief Field <GameServerAddress>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__GameServerAddress_k__BackingField, put=__cordl_internal_set__GameServerAddress_k__BackingField)) ::StringW  _GameServerAddress_k__BackingField;

/// @brief Field <IsUsingNameServer>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsUsingNameServer_k__BackingField, put=__cordl_internal_set__IsUsingNameServer_k__BackingField)) bool  _IsUsingNameServer_k__BackingField;

/// @brief Field <LoadBalancingPeer>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadBalancingPeer_k__BackingField, put=__cordl_internal_set__LoadBalancingPeer_k__BackingField)) ::Fusion::Photon::Realtime::LoadBalancingPeer*  _LoadBalancingPeer_k__BackingField;

/// @brief Field <LocalPlayer>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalPlayer_k__BackingField, put=__cordl_internal_set__LocalPlayer_k__BackingField)) ::Fusion::Photon::Realtime::Player*  _LocalPlayer_k__BackingField;

/// @brief Field <MasterServerAddress>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__MasterServerAddress_k__BackingField, put=__cordl_internal_set__MasterServerAddress_k__BackingField)) ::StringW  _MasterServerAddress_k__BackingField;

/// @brief Field <PlayersInRoomsCount>k__BackingField, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayersInRoomsCount_k__BackingField, put=__cordl_internal_set__PlayersInRoomsCount_k__BackingField)) int32_t  _PlayersInRoomsCount_k__BackingField;

/// @brief Field <PlayersOnMasterCount>k__BackingField, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayersOnMasterCount_k__BackingField, put=__cordl_internal_set__PlayersOnMasterCount_k__BackingField)) int32_t  _PlayersOnMasterCount_k__BackingField;

/// @brief Field <RoomsCount>k__BackingField, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoomsCount_k__BackingField, put=__cordl_internal_set__RoomsCount_k__BackingField)) int32_t  _RoomsCount_k__BackingField;

/// @brief Field <Server>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__Server_k__BackingField, put=__cordl_internal_set__Server_k__BackingField)) ::Fusion::Photon::Realtime::ServerConnection  _Server_k__BackingField;

/// @brief Field <UseAlternativeUdpPorts>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseAlternativeUdpPorts_k__BackingField, put=__cordl_internal_set__UseAlternativeUdpPorts_k__BackingField)) bool  _UseAlternativeUdpPorts_k__BackingField;

/// @brief Field bestRegionSummaryFromStorage, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestRegionSummaryFromStorage, put=__cordl_internal_set_bestRegionSummaryFromStorage)) ::StringW  bestRegionSummaryFromStorage;

/// @brief Field callbackTargetChanges, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackTargetChanges, put=__cordl_internal_set_callbackTargetChanges)) ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*  callbackTargetChanges;

/// @brief Field callbackTargets, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackTargets, put=__cordl_internal_set_callbackTargets)) ::System::Collections::Generic::HashSet_1<::System::Object*>*  callbackTargets;

/// @brief Field connectToBestRegion, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_connectToBestRegion, put=__cordl_internal_set_connectToBestRegion)) bool  connectToBestRegion;

/// @brief Field enterRoomParamsCache, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterRoomParamsCache, put=__cordl_internal_set_enterRoomParamsCache)) ::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParamsCache;

/// @brief Field failedRoomEntryOperation, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_failedRoomEntryOperation, put=__cordl_internal_set_failedRoomEntryOperation)) ::ExitGames::Client::Photon::OperationResponse*  failedRoomEntryOperation;

/// @brief Field friendListRequested, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendListRequested, put=__cordl_internal_set_friendListRequested)) ::ArrayW<::StringW>  friendListRequested;

/// @brief Field lastJoinType, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastJoinType, put=__cordl_internal_set_lastJoinType)) ::Fusion::Photon::Realtime::JoinType  lastJoinType;

/// @brief Field lobbyStatistics, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyStatistics, put=__cordl_internal_set_lobbyStatistics)) ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics;

/// @brief Field state, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Fusion::Photon::Realtime::ClientState  state;

/// @brief Field telemetrySent, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_telemetrySent, put=__cordl_internal_set_telemetrySent)) bool  telemetrySent;

/// @brief Field tokenCache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tokenCache, put=__cordl_internal_set_tokenCache)) ::System::Object*  tokenCache;

/// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr operator  ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept;

/// @brief Method AddCallbackTarget, addr 0x5f49774, size 0xa4, virtual false, abstract: false, final false
inline void AddCallbackTarget(::System::Object*  target) ;

/// @brief Method CallAuthenticate, addr 0x5f50320, size 0x354, virtual false, abstract: false, final false
inline bool CallAuthenticate() ;

/// @brief Method CallbackRoomEnterFailed, addr 0x5f53acc, size 0x78, virtual false, abstract: false, final false
inline void CallbackRoomEnterFailed(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method ChangeLocalID, addr 0x5f52e70, size 0x168, virtual false, abstract: false, final false
inline void ChangeLocalID(int32_t  newId, bool  applyUserId) ;

/// @brief Method CheckConnectSetupWebGl, addr 0x5f4fbbc, size 0x98, virtual false, abstract: false, final false
inline void CheckConnectSetupWebGl() ;

/// @brief Method CheckIfClientIsReadyToCallOperation, addr 0x5f5390c, size 0x154, virtual false, abstract: false, final false
inline bool CheckIfClientIsReadyToCallOperation(uint8_t  opCode) ;

/// @brief Method CheckIfOpAllowedOnServer, addr 0x5f537f0, size 0x11c, virtual false, abstract: false, final false
inline bool CheckIfOpAllowedOnServer(uint8_t  opCode, ::Fusion::Photon::Realtime::ServerConnection  serverConnection) ;

/// @brief Method CheckIfOpCanBeSent, addr 0x5f50ec0, size 0x32c, virtual false, abstract: false, final false
inline bool CheckIfOpCanBeSent(uint8_t  opCode, ::Fusion::Photon::Realtime::ServerConnection  serverConnection, ::StringW  opName) ;

/// [Obsolete("Use ConnectToMasterServer() instead.")]
/// @brief Method Connect, addr 0x5f4fc54, size 0xc, virtual false, abstract: false, final false
inline bool Connect() ;

/// @brief Method Connect, addr 0x5f50674, size 0x2a0, virtual false, abstract: false, final false
inline bool Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::Fusion::Photon::Realtime::ServerConnection  serverType) ;

/// @brief Method ConnectToMasterServer, addr 0x5f4fc60, size 0x210, virtual true, abstract: false, final false
inline bool ConnectToMasterServer() ;

/// @brief Method ConnectToNameServer, addr 0x5f4fe70, size 0x230, virtual false, abstract: false, final false
inline bool ConnectToNameServer() ;

/// @brief Method ConnectToRegionMaster, addr 0x5f500a0, size 0x280, virtual false, abstract: false, final false
inline bool ConnectToRegionMaster(::StringW  region) ;

/// @brief Method ConnectUsingSettings, addr 0x5f49ccc, size 0x3e0, virtual true, abstract: false, final false
inline bool ConnectUsingSettings(::Fusion::Photon::Realtime::AppSettings*  appSettings) ;

/// @brief Method CreatePlayer, addr 0x5f536fc, size 0x84, virtual true, abstract: false, final false
inline ::Fusion::Photon::Realtime::Player* CreatePlayer(::StringW  actorName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  actorProperties) ;

/// @brief Method CreateRoom, addr 0x5f53780, size 0x70, virtual true, abstract: false, final false
inline ::Fusion::Photon::Realtime::Room* CreateRoom(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  opt) ;

/// @brief Method DebugReturn, addr 0x5f53a60, size 0x6c, virtual true, abstract: false, final false
inline void DebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  message) ;

/// @brief Method Disconnect, addr 0x5f4c71c, size 0x8, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method Disconnect, addr 0x5f4c0e0, size 0x274, virtual false, abstract: false, final false
inline void Disconnect(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method DisconnectToReconnect, addr 0x5f50d00, size 0xc4, virtual false, abstract: false, final false
inline void DisconnectToReconnect() ;

/// @brief Method GameEnteredOnGameServer, addr 0x5f52fd8, size 0x2f8, virtual false, abstract: false, final false
inline void GameEnteredOnGameServer(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method GetNameServerAddress, addr 0x5f4f030, size 0x130, virtual false, abstract: false, final false
inline ::StringW GetNameServerAddress() ;

static inline ::Fusion::Photon::Realtime::LoadBalancingClient* New_ctor(::StringW  masterAddress, ::StringW  appId, ::StringW  gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol  protocol) ;

static inline ::Fusion::Photon::Realtime::LoadBalancingClient* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocol) ;

/// @brief Method OnDisconnectMessageReceived, addr 0x5f5815c, size 0x14c, virtual false, abstract: false, final false
inline void OnDisconnectMessageReceived(::ExitGames::Client::Photon::DisconnectMessage*  obj) ;

/// @brief Method OnEvent, addr 0x5f57194, size 0xc0c, virtual true, abstract: false, final false
inline void OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent) ;

/// @brief Method OnMessage, addr 0x5f580e8, size 0x74, virtual true, abstract: false, final false
inline void OnMessage(::System::Object*  message) ;

/// @brief Method OnOperationResponse, addr 0x5f54084, size 0x14a0, virtual true, abstract: false, final false
inline void OnOperationResponse(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method OnRegionPingCompleted, addr 0x5f582a8, size 0x208, virtual false, abstract: false, final false
inline void OnRegionPingCompleted(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnStatusChanged, addr 0x5f560ac, size 0xbe4, virtual true, abstract: false, final false
inline void OnStatusChanged(::ExitGames::Client::Photon::StatusCode  statusCode) ;

/// @brief Method OpChangeGroups, addr 0x5f528f0, size 0x9c, virtual true, abstract: false, final false
inline bool OpChangeGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd) ;

/// @brief Method OpCreateRoom, addr 0x5f51b1c, size 0xf0, virtual false, abstract: false, final false
inline bool OpCreateRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams) ;

/// @brief Method OpFindFriends, addr 0x5f51270, size 0x420, virtual false, abstract: false, final false
inline bool OpFindFriends(::ArrayW<::StringW>  friendsToFind, ::Fusion::Photon::Realtime::FindFriendsOptions*  options) ;

/// @brief Method OpGetGameList, addr 0x5f52048, size 0x104, virtual false, abstract: false, final false
inline bool OpGetGameList(::Fusion::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter) ;

/// @brief Method OpGetRegions, addr 0x5f511ec, size 0x84, virtual false, abstract: false, final false
inline bool OpGetRegions() ;

/// @brief Method OpJoinLobby, addr 0x5f51690, size 0x108, virtual false, abstract: false, final false
inline bool OpJoinLobby(::Fusion::Photon::Realtime::TypedLobby*  lobby) ;

/// @brief Method OpJoinOrCreateRoom, addr 0x5f51c0c, size 0xfc, virtual false, abstract: false, final false
inline bool OpJoinOrCreateRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams) ;

/// @brief Method OpJoinRandomOrCreateRoom, addr 0x5f51988, size 0x194, virtual false, abstract: false, final false
inline bool OpJoinRandomOrCreateRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams*  createRoomParams) ;

/// @brief Method OpJoinRandomRoom, addr 0x5f51818, size 0x170, virtual false, abstract: false, final false
inline bool OpJoinRandomRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams) ;

/// @brief Method OpJoinRoom, addr 0x5f51d08, size 0x100, virtual false, abstract: false, final false
inline bool OpJoinRoom(::Fusion::Photon::Realtime::EnterRoomParams*  enterRoomParams) ;

/// @brief Method OpLeaveLobby, addr 0x5f51798, size 0x80, virtual false, abstract: false, final false
inline bool OpLeaveLobby() ;

/// @brief Method OpLeaveRoom, addr 0x5f51f4c, size 0xfc, virtual false, abstract: false, final false
inline bool OpLeaveRoom(bool  becomeInactive, bool  sendAuthCookie) ;

/// @brief Method OpRaiseEvent, addr 0x5f52838, size 0xb8, virtual true, abstract: false, final false
inline bool OpRaiseEvent(uint8_t  eventCode, ::System::Object*  customEventContent, ::Fusion::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method OpRejoinRoom, addr 0x5f51e08, size 0x144, virtual false, abstract: false, final false
inline bool OpRejoinRoom(::StringW  roomName, ::System::Object*  ticket) ;

/// @brief Method OpSetCustomPropertiesOfActor, addr 0x5f5214c, size 0x248, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method OpSetCustomPropertiesOfRoom, addr 0x5f5250c, size 0x150, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method OpSetPropertiesOfActor, addr 0x5f52394, size 0x178, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method OpSetPropertiesOfRoom, addr 0x5f5265c, size 0x14c, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method OpSetPropertyOfRoom, addr 0x5f527a8, size 0x90, virtual false, abstract: false, final false
inline bool OpSetPropertyOfRoom(uint8_t  propCode, ::System::Object*  value) ;

/// @brief Method OpWebRpc, addr 0x5f584b0, size 0x1d0, virtual false, abstract: false, final false
inline bool OpWebRpc(::StringW  uriPath, ::System::Object*  parameters, bool  sendAuthCookie) ;

/// @brief Method ReadoutProperties, addr 0x5f5298c, size 0x3f0, virtual false, abstract: false, final false
inline void ReadoutProperties(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  actorProperties, int32_t  targetActorNr) ;

/// @brief Method ReadoutPropertiesForActorNr, addr 0x5f52d7c, size 0xf4, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::Hashtable* ReadoutPropertiesForActorNr(::ExitGames::Client::Photon::Hashtable*  actorProperties, int32_t  actorNr) ;

/// @brief Method ReconnectAndRejoin, addr 0x5f50af8, size 0x208, virtual false, abstract: false, final false
inline bool ReconnectAndRejoin() ;

/// @brief Method ReconnectToMaster, addr 0x5f50914, size 0x1e4, virtual false, abstract: false, final false
inline bool ReconnectToMaster() ;

/// @brief Method RemoveCallbackTarget, addr 0x5f586bc, size 0xa0, virtual false, abstract: false, final false
inline void RemoveCallbackTarget(::System::Object*  target) ;

/// @brief Method ReplacePortWithAlternative, addr 0x5f55864, size 0x17c, virtual false, abstract: false, final false
static inline ::StringW ReplacePortWithAlternative(::StringW  address, uint16_t  replacementPort) ;

/// @brief Method Service, addr 0x5f4acc8, size 0x18, virtual false, abstract: false, final false
inline void Service() ;

/// @brief Method SetupEncryption, addr 0x5f556dc, size 0x188, virtual false, abstract: false, final false
inline void SetupEncryption(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  encryptionData) ;

/// @brief Method SimulateConnectionLoss, addr 0x5f50dc4, size 0xfc, virtual false, abstract: false, final false
inline void SimulateConnectionLoss(bool  simulateTimeout) ;

/// @brief Method ToProtocolAddress, addr 0x5f4f88c, size 0x330, virtual false, abstract: false, final false
inline ::StringW ToProtocolAddress(::StringW  address, int32_t  port, ::ExitGames::Client::Photon::ConnectionProtocol  protocol) ;

/// @brief Method UpdateCallbackTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline void UpdateCallbackTarget(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*  change, ::System::Collections::Generic::List_1<T>*  container) ;

/// @brief Method UpdateCallbackTargets, addr 0x5f57da0, size 0x348, virtual false, abstract: false, final false
inline void UpdateCallbackTargets() ;

/// @brief Method UpdatedActorList, addr 0x5f532d0, size 0xdc, virtual false, abstract: false, final false
inline void UpdatedActorList(::ArrayW<int32_t>  actorsInGame) ;

constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>* const& __cordl_internal_get_AddressRewriter() const;

constexpr ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*& __cordl_internal_get_AddressRewriter() ;

constexpr ::Fusion::Photon::Realtime::AuthModeOption const& __cordl_internal_get_AuthMode() const;

constexpr ::Fusion::Photon::Realtime::AuthModeOption& __cordl_internal_get_AuthMode() ;

constexpr ::Fusion::Photon::Realtime::ConnectionCallbacksContainer* const& __cordl_internal_get_ConnectionCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::ConnectionCallbacksContainer*& __cordl_internal_get_ConnectionCallbackTargets() ;

constexpr ::StringW const& __cordl_internal_get_DisconnectMessage() const;

constexpr ::StringW& __cordl_internal_get_DisconnectMessage() ;

constexpr bool const& __cordl_internal_get_EnableLobbyStatistics() const;

constexpr bool& __cordl_internal_get_EnableLobbyStatistics() ;

constexpr ::Fusion::Photon::Realtime::EncryptionMode const& __cordl_internal_get_EncryptionMode() const;

constexpr ::Fusion::Photon::Realtime::EncryptionMode& __cordl_internal_get_EncryptionMode() ;

constexpr ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer* const& __cordl_internal_get_ErrorInfoCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*& __cordl_internal_get_ErrorInfoCallbackTargets() ;

constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>* const& __cordl_internal_get_EventReceived() const;

constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>*& __cordl_internal_get_EventReceived() ;

constexpr ::Fusion::Photon::Realtime::InRoomCallbacksContainer* const& __cordl_internal_get_InRoomCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::InRoomCallbacksContainer*& __cordl_internal_get_InRoomCallbackTargets() ;

constexpr ::Fusion::Photon::Realtime::LobbyCallbacksContainer* const& __cordl_internal_get_LobbyCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::LobbyCallbacksContainer*& __cordl_internal_get_LobbyCallbackTargets() ;

constexpr ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer* const& __cordl_internal_get_MatchMakingCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*& __cordl_internal_get_MatchMakingCallbackTargets() ;

constexpr ::StringW const& __cordl_internal_get_NameServerHost() const;

constexpr ::StringW& __cordl_internal_get_NameServerHost() ;

constexpr int32_t const& __cordl_internal_get_NameServerPortInAppSettings() const;

constexpr int32_t& __cordl_internal_get_NameServerPortInAppSettings() ;

constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* const& __cordl_internal_get_OpResponseReceived() const;

constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*& __cordl_internal_get_OpResponseReceived() ;

constexpr ::StringW const& __cordl_internal_get_ProxyServerAddress() const;

constexpr ::StringW& __cordl_internal_get_ProxyServerAddress() ;

constexpr ::Fusion::Photon::Realtime::RegionHandler* const& __cordl_internal_get_RegionHandler() const;

constexpr ::Fusion::Photon::Realtime::RegionHandler*& __cordl_internal_get_RegionHandler() ;

constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition const& __cordl_internal_get_ServerPortOverrides() const;

constexpr ::Fusion::Photon::Realtime::PhotonPortDefinition& __cordl_internal_get_ServerPortOverrides() ;

constexpr ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>* const& __cordl_internal_get_StateChanged() const;

constexpr ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*& __cordl_internal_get_StateChanged() ;

constexpr ::StringW const& __cordl_internal_get_SummaryToCache() const;

constexpr ::StringW& __cordl_internal_get_SummaryToCache() ;

constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary* const& __cordl_internal_get_SystemConnectionSummary() const;

constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary*& __cordl_internal_get_SystemConnectionSummary() ;

constexpr bool const& __cordl_internal_get_TelemetryEnabled() const;

constexpr bool& __cordl_internal_get_TelemetryEnabled() ;

constexpr ::Fusion::Photon::Realtime::WebRpcCallbacksContainer* const& __cordl_internal_get_WebRpcCallbackTargets() const;

constexpr ::Fusion::Photon::Realtime::WebRpcCallbacksContainer*& __cordl_internal_get_WebRpcCallbackTargets() ;

constexpr ::StringW const& __cordl_internal_get__AppId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AppId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__AppVersion_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AppVersion_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& __cordl_internal_get__AuthValues_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& __cordl_internal_get__AuthValues_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::ClientAppType const& __cordl_internal_get__ClientType_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::ClientAppType& __cordl_internal_get__ClientType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CloudRegion_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CloudRegion_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ConnectCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ConnectCount_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CurrentCluster_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CurrentCluster_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::TypedLobby* const& __cordl_internal_get__CurrentLobby_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::TypedLobby*& __cordl_internal_get__CurrentLobby_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::Room* const& __cordl_internal_get__CurrentRoom_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::Room*& __cordl_internal_get__CurrentRoom_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::DisconnectCause const& __cordl_internal_get__DisconnectedCause_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::DisconnectCause& __cordl_internal_get__DisconnectedCause_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EnableProtocolFallback_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableProtocolFallback_k__BackingField() ;

constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> const& __cordl_internal_get__ExpectedProtocol_k__BackingField() const;

constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>& __cordl_internal_get__ExpectedProtocol_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__GameServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__GameServerAddress_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsUsingNameServer_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsUsingNameServer_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingPeer* const& __cordl_internal_get__LoadBalancingPeer_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingPeer*& __cordl_internal_get__LoadBalancingPeer_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::Player* const& __cordl_internal_get__LocalPlayer_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::Player*& __cordl_internal_get__LocalPlayer_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MasterServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MasterServerAddress_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlayersInRoomsCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlayersInRoomsCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlayersOnMasterCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlayersOnMasterCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RoomsCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RoomsCount_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::ServerConnection const& __cordl_internal_get__Server_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::ServerConnection& __cordl_internal_get__Server_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_bestRegionSummaryFromStorage() const;

constexpr ::StringW& __cordl_internal_get_bestRegionSummaryFromStorage() ;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>* const& __cordl_internal_get_callbackTargetChanges() const;

constexpr ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*& __cordl_internal_get_callbackTargetChanges() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& __cordl_internal_get_callbackTargets() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get_callbackTargets() ;

constexpr bool const& __cordl_internal_get_connectToBestRegion() const;

constexpr bool& __cordl_internal_get_connectToBestRegion() ;

constexpr ::Fusion::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_enterRoomParamsCache() const;

constexpr ::Fusion::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_enterRoomParamsCache() ;

constexpr ::ExitGames::Client::Photon::OperationResponse* const& __cordl_internal_get_failedRoomEntryOperation() const;

constexpr ::ExitGames::Client::Photon::OperationResponse*& __cordl_internal_get_failedRoomEntryOperation() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_friendListRequested() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_friendListRequested() ;

constexpr ::Fusion::Photon::Realtime::JoinType const& __cordl_internal_get_lastJoinType() const;

constexpr ::Fusion::Photon::Realtime::JoinType& __cordl_internal_get_lastJoinType() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>* const& __cordl_internal_get_lobbyStatistics() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*& __cordl_internal_get_lobbyStatistics() ;

constexpr ::Fusion::Photon::Realtime::ClientState const& __cordl_internal_get_state() const;

constexpr ::Fusion::Photon::Realtime::ClientState& __cordl_internal_get_state() ;

constexpr bool const& __cordl_internal_get_telemetrySent() const;

constexpr bool& __cordl_internal_get_telemetrySent() ;

constexpr ::System::Object* const& __cordl_internal_get_tokenCache() const;

constexpr ::System::Object*& __cordl_internal_get_tokenCache() ;

constexpr void __cordl_internal_set_AddressRewriter(::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  value) ;

constexpr void __cordl_internal_set_AuthMode(::Fusion::Photon::Realtime::AuthModeOption  value) ;

constexpr void __cordl_internal_set_ConnectionCallbackTargets(::Fusion::Photon::Realtime::ConnectionCallbacksContainer*  value) ;

constexpr void __cordl_internal_set_DisconnectMessage(::StringW  value) ;

constexpr void __cordl_internal_set_EnableLobbyStatistics(bool  value) ;

constexpr void __cordl_internal_set_EncryptionMode(::Fusion::Photon::Realtime::EncryptionMode  value) ;

constexpr void __cordl_internal_set_ErrorInfoCallbackTargets(::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*  value) ;

constexpr void __cordl_internal_set_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value) ;

constexpr void __cordl_internal_set_InRoomCallbackTargets(::Fusion::Photon::Realtime::InRoomCallbacksContainer*  value) ;

constexpr void __cordl_internal_set_LobbyCallbackTargets(::Fusion::Photon::Realtime::LobbyCallbacksContainer*  value) ;

constexpr void __cordl_internal_set_MatchMakingCallbackTargets(::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*  value) ;

constexpr void __cordl_internal_set_NameServerHost(::StringW  value) ;

constexpr void __cordl_internal_set_NameServerPortInAppSettings(int32_t  value) ;

constexpr void __cordl_internal_set_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value) ;

constexpr void __cordl_internal_set_ProxyServerAddress(::StringW  value) ;

constexpr void __cordl_internal_set_RegionHandler(::Fusion::Photon::Realtime::RegionHandler*  value) ;

constexpr void __cordl_internal_set_ServerPortOverrides(::Fusion::Photon::Realtime::PhotonPortDefinition  value) ;

constexpr void __cordl_internal_set_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value) ;

constexpr void __cordl_internal_set_SummaryToCache(::StringW  value) ;

constexpr void __cordl_internal_set_SystemConnectionSummary(::Fusion::Photon::Realtime::SystemConnectionSummary*  value) ;

constexpr void __cordl_internal_set_TelemetryEnabled(bool  value) ;

constexpr void __cordl_internal_set_WebRpcCallbackTargets(::Fusion::Photon::Realtime::WebRpcCallbacksContainer*  value) ;

constexpr void __cordl_internal_set__AppId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__AppVersion_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__AuthValues_k__BackingField(::Fusion::Photon::Realtime::AuthenticationValues*  value) ;

constexpr void __cordl_internal_set__ClientType_k__BackingField(::Fusion::Photon::Realtime::ClientAppType  value) ;

constexpr void __cordl_internal_set__CloudRegion_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ConnectCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentCluster_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__CurrentLobby_k__BackingField(::Fusion::Photon::Realtime::TypedLobby*  value) ;

constexpr void __cordl_internal_set__CurrentRoom_k__BackingField(::Fusion::Photon::Realtime::Room*  value) ;

constexpr void __cordl_internal_set__DisconnectedCause_k__BackingField(::Fusion::Photon::Realtime::DisconnectCause  value) ;

constexpr void __cordl_internal_set__EnableProtocolFallback_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ExpectedProtocol_k__BackingField(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  value) ;

constexpr void __cordl_internal_set__GameServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsUsingNameServer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LoadBalancingPeer_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingPeer*  value) ;

constexpr void __cordl_internal_set__LocalPlayer_k__BackingField(::Fusion::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set__MasterServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayersInRoomsCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PlayersOnMasterCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RoomsCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Server_k__BackingField(::Fusion::Photon::Realtime::ServerConnection  value) ;

constexpr void __cordl_internal_set__UseAlternativeUdpPorts_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bestRegionSummaryFromStorage(::StringW  value) ;

constexpr void __cordl_internal_set_callbackTargetChanges(::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*  value) ;

constexpr void __cordl_internal_set_callbackTargets(::System::Collections::Generic::HashSet_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_connectToBestRegion(bool  value) ;

constexpr void __cordl_internal_set_enterRoomParamsCache(::Fusion::Photon::Realtime::EnterRoomParams*  value) ;

constexpr void __cordl_internal_set_failedRoomEntryOperation(::ExitGames::Client::Photon::OperationResponse*  value) ;

constexpr void __cordl_internal_set_friendListRequested(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_lastJoinType(::Fusion::Photon::Realtime::JoinType  value) ;

constexpr void __cordl_internal_set_lobbyStatistics(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  value) ;

constexpr void __cordl_internal_set_state(::Fusion::Photon::Realtime::ClientState  value) ;

constexpr void __cordl_internal_set_telemetrySent(bool  value) ;

constexpr void __cordl_internal_set_tokenCache(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5f4f82c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  masterAddress, ::StringW  appId, ::StringW  gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol  protocol) ;

/// @brief Method .ctor, addr 0x5f478f4, size 0x4f8, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocol) ;

/// [CompilerGenerated]
/// @brief Method add_EventReceived, addr 0x5f496c4, size 0xb0, virtual false, abstract: false, final false
inline void add_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OpResponseReceived, addr 0x5f4f41c, size 0xb0, virtual false, abstract: false, final false
inline void add_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_StateChanged, addr 0x5f4f20c, size 0xb0, virtual false, abstract: false, final false
inline void add_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>* getStaticF_ProtocolToNameServerPort() ;

/// [CompilerGenerated]
/// @brief Method get_AppId, addr 0x5f4efbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AppId() ;

/// [CompilerGenerated]
/// @brief Method get_AppVersion, addr 0x5f4efac, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AppVersion() ;

/// [CompilerGenerated]
/// @brief Method get_AuthValues, addr 0x5f4efdc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AuthenticationValues* get_AuthValues() ;

/// [CompilerGenerated]
/// @brief Method get_ClientType, addr 0x5f4efcc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::ClientAppType get_ClientType() ;

/// [CompilerGenerated]
/// @brief Method get_CloudRegion, addr 0x5f4f6ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CloudRegion() ;

/// [CompilerGenerated]
/// @brief Method get_ConnectCount, addr 0x5f4f1c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ConnectCount() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentCluster, addr 0x5f4f704, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CurrentCluster() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentLobby, addr 0x5f4f59c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::TypedLobby* get_CurrentLobby() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentRoom, addr 0x5f4f694, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::Room* get_CurrentRoom() ;

/// @brief Method get_CurrentServerAddress, addr 0x5f4f180, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_CurrentServerAddress() ;

/// [CompilerGenerated]
/// @brief Method get_DisconnectedCause, addr 0x5f4f57c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::DisconnectCause get_DisconnectedCause() ;

/// [CompilerGenerated]
/// @brief Method get_EnableProtocolFallback, addr 0x5f4f170, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableProtocolFallback() ;

/// [CompilerGenerated]
/// @brief Method get_ExpectedProtocol, addr 0x5f4efec, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> get_ExpectedProtocol() ;

/// [CompilerGenerated]
/// @brief Method get_GameServerAddress, addr 0x5f4f1a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GameServerAddress() ;

/// @brief Method get_InLobby, addr 0x5f4f58c, size 0x10, virtual false, abstract: false, final false
inline bool get_InLobby() ;

/// @brief Method get_InRoom, addr 0x5f48ac0, size 0x24, virtual false, abstract: false, final false
inline bool get_InRoom() ;

/// @brief Method get_IsConnected, addr 0x5f4c0bc, size 0x24, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsConnectedAndReady, addr 0x5f48a88, size 0x38, virtual false, abstract: false, final false
inline bool get_IsConnectedAndReady() ;

/// @brief Method get_IsFetchingFriendList, addr 0x5f4f6dc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFetchingFriendList() ;

/// [CompilerGenerated]
/// @brief Method get_IsUsingNameServer, addr 0x5f4f01c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsUsingNameServer() ;

/// [CompilerGenerated]
/// @brief Method get_LoadBalancingPeer, addr 0x5f4ef84, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::LoadBalancingPeer* get_LoadBalancingPeer() ;

/// [CompilerGenerated]
/// @brief Method get_LocalPlayer, addr 0x5f4f5b4, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::Player* get_LocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_MasterServerAddress, addr 0x5f4f198, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MasterServerAddress() ;

/// @brief Method get_NameServerAddress, addr 0x5f4f02c, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_NameServerAddress() ;

/// @brief Method get_NickName, addr 0x5f4f5cc, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_NickName() ;

/// [CompilerGenerated]
/// @brief Method get_PlayersInRoomsCount, addr 0x5f4f6bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayersInRoomsCount() ;

/// [CompilerGenerated]
/// @brief Method get_PlayersOnMasterCount, addr 0x5f4f6ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayersOnMasterCount() ;

/// [CompilerGenerated]
/// @brief Method get_RoomsCount, addr 0x5f4f6cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RoomsCount() ;

/// @brief Method get_SerializationProtocol, addr 0x5f4ef94, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::SerializationProtocol get_SerializationProtocol() ;

/// [CompilerGenerated]
/// @brief Method get_Server, addr 0x5f4f1b8, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::ServerConnection get_Server() ;

/// @brief Method get_State, addr 0x5f4c714, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::ClientState get_State() ;

/// @brief Method get_TokenForInit, addr 0x5f4effc, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* get_TokenForInit() ;

/// [CompilerGenerated]
/// @brief Method get_UseAlternativeUdpPorts, addr 0x5f4f160, size 0x8, virtual false, abstract: false, final false
inline bool get_UseAlternativeUdpPorts() ;

/// @brief Method get_UserId, addr 0x5f4f5f8, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_EventReceived, addr 0x5f4f36c, size 0xb0, virtual false, abstract: false, final false
inline void remove_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OpResponseReceived, addr 0x5f4f4cc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_StateChanged, addr 0x5f4f2bc, size 0xb0, virtual false, abstract: false, final false
inline void remove_StateChanged(::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  value) ;

static inline void setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AppId, addr 0x5f4efc4, size 0x8, virtual false, abstract: false, final false
inline void set_AppId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AppVersion, addr 0x5f4efb4, size 0x8, virtual false, abstract: false, final false
inline void set_AppVersion(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AuthValues, addr 0x5f4efe4, size 0x8, virtual false, abstract: false, final false
inline void set_AuthValues(::Fusion::Photon::Realtime::AuthenticationValues*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ClientType, addr 0x5f4efd4, size 0x8, virtual false, abstract: false, final false
inline void set_ClientType(::Fusion::Photon::Realtime::ClientAppType  value) ;

/// [CompilerGenerated]
/// @brief Method set_CloudRegion, addr 0x5f4f6f4, size 0x10, virtual false, abstract: false, final false
inline void set_CloudRegion(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConnectCount, addr 0x5f4f1d0, size 0x8, virtual false, abstract: false, final false
inline void set_ConnectCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentCluster, addr 0x5f4f70c, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentCluster(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentLobby, addr 0x5f4f5a4, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentLobby(::Fusion::Photon::Realtime::TypedLobby*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentRoom, addr 0x5f4f69c, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentRoom(::Fusion::Photon::Realtime::Room*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisconnectedCause, addr 0x5f4f584, size 0x8, virtual false, abstract: false, final false
inline void set_DisconnectedCause(::Fusion::Photon::Realtime::DisconnectCause  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnableProtocolFallback, addr 0x5f4f178, size 0x8, virtual false, abstract: false, final false
inline void set_EnableProtocolFallback(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ExpectedProtocol, addr 0x5f4eff4, size 0x8, virtual false, abstract: false, final false
inline void set_ExpectedProtocol(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameServerAddress, addr 0x5f4f1b0, size 0x8, virtual false, abstract: false, final false
inline void set_GameServerAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsUsingNameServer, addr 0x5f4f024, size 0x8, virtual false, abstract: false, final false
inline void set_IsUsingNameServer(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LoadBalancingPeer, addr 0x5f4ef8c, size 0x8, virtual false, abstract: false, final false
inline void set_LoadBalancingPeer(::Fusion::Photon::Realtime::LoadBalancingPeer*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalPlayer, addr 0x5f4f5bc, size 0x10, virtual false, abstract: false, final false
inline void set_LocalPlayer(::Fusion::Photon::Realtime::Player*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MasterServerAddress, addr 0x5f4f1a0, size 0x8, virtual false, abstract: false, final false
inline void set_MasterServerAddress(::StringW  value) ;

/// @brief Method set_NickName, addr 0x5f4f5e4, size 0x14, virtual false, abstract: false, final false
inline void set_NickName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayersInRoomsCount, addr 0x5f4f6c4, size 0x8, virtual false, abstract: false, final false
inline void set_PlayersInRoomsCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayersOnMasterCount, addr 0x5f4f6b4, size 0x8, virtual false, abstract: false, final false
inline void set_PlayersOnMasterCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomsCount, addr 0x5f4f6d4, size 0x8, virtual false, abstract: false, final false
inline void set_RoomsCount(int32_t  value) ;

/// @brief Method set_SerializationProtocol, addr 0x5f490d0, size 0x18, virtual false, abstract: false, final false
inline void set_SerializationProtocol(::ExitGames::Client::Photon::SerializationProtocol  value) ;

/// [CompilerGenerated]
/// @brief Method set_Server, addr 0x5f4f1c0, size 0x8, virtual false, abstract: false, final false
inline void set_Server(::Fusion::Photon::Realtime::ServerConnection  value) ;

/// @brief Method set_State, addr 0x5f4f1d8, size 0x34, virtual false, abstract: false, final false
inline void set_State(::Fusion::Photon::Realtime::ClientState  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseAlternativeUdpPorts, addr 0x5f4f168, size 0x8, virtual false, abstract: false, final false
inline void set_UseAlternativeUdpPorts(bool  value) ;

/// @brief Method set_UserId, addr 0x5f4f610, size 0x84, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClient(LoadBalancingClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClient(LoadBalancingClient const& ) = delete;

/// @brief Field FriendRequestListMax offset 0xffffffff size 0x4
static constexpr int32_t  FriendRequestListMax{static_cast<int32_t>(0x200)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28053};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <LoadBalancingPeer>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingPeer*  ____LoadBalancingPeer_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AppVersion>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____AppVersion_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AppId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____AppId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ClientType>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::ClientAppType  ____ClientType_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AuthValues>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AuthenticationValues*  ____AuthValues_k__BackingField;

/// @brief Field AuthMode, offset: 0x38, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::AuthModeOption  ___AuthMode;

/// @brief Field EncryptionMode, offset: 0x3c, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::EncryptionMode  ___EncryptionMode;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ExpectedProtocol>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>  ____ExpectedProtocol_k__BackingField;

/// @brief Field tokenCache, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ___tokenCache;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsUsingNameServer>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsUsingNameServer_k__BackingField;

/// @brief Field NameServerHost, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___NameServerHost;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UseAlternativeUdpPorts>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____UseAlternativeUdpPorts_k__BackingField;

/// @brief Field ServerPortOverrides, offset: 0x6a, size: 0x6, def value: None
 ::Fusion::Photon::Realtime::PhotonPortDefinition  ___ServerPortOverrides;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <EnableProtocolFallback>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____EnableProtocolFallback_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <MasterServerAddress>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____MasterServerAddress_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <GameServerAddress>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____GameServerAddress_k__BackingField;

/// @brief Field AddressRewriter, offset: 0x88, size: 0x8, def value: None
 ::System::Func_3<::StringW,::Fusion::Photon::Realtime::ServerConnection,::StringW>*  ___AddressRewriter;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Server>k__BackingField, offset: 0x90, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::ServerConnection  ____Server_k__BackingField;

/// @brief Field ProxyServerAddress, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___ProxyServerAddress;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ConnectCount>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____ConnectCount_k__BackingField;

/// @brief Field state, offset: 0xa4, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::ClientState  ___state;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field StateChanged, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_2<::Fusion::Photon::Realtime::ClientState,::Fusion::Photon::Realtime::ClientState>*  ___StateChanged;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field EventReceived, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::ExitGames::Client::Photon::EventData*>*  ___EventReceived;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OpResponseReceived, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*  ___OpResponseReceived;

/// @brief Field ConnectionCallbackTargets, offset: 0xc0, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::ConnectionCallbacksContainer*  ___ConnectionCallbackTargets;

/// @brief Field MatchMakingCallbackTargets, offset: 0xc8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::MatchMakingCallbacksContainer*  ___MatchMakingCallbackTargets;

/// @brief Field InRoomCallbackTargets, offset: 0xd0, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::InRoomCallbacksContainer*  ___InRoomCallbackTargets;

/// @brief Field LobbyCallbackTargets, offset: 0xd8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LobbyCallbacksContainer*  ___LobbyCallbackTargets;

/// @brief Field WebRpcCallbackTargets, offset: 0xe0, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::WebRpcCallbacksContainer*  ___WebRpcCallbackTargets;

/// @brief Field ErrorInfoCallbackTargets, offset: 0xe8, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*  ___ErrorInfoCallbackTargets;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <DisconnectedCause>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::DisconnectCause  ____DisconnectedCause_k__BackingField;

/// @brief Field DisconnectMessage, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___DisconnectMessage;

/// @brief Field TelemetryEnabled, offset: 0x100, size: 0x1, def value: None
 bool  ___TelemetryEnabled;

/// @brief Field telemetrySent, offset: 0x101, size: 0x1, def value: None
 bool  ___telemetrySent;

/// @brief Field SystemConnectionSummary, offset: 0x108, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::SystemConnectionSummary*  ___SystemConnectionSummary;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentLobby>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::TypedLobby*  ____CurrentLobby_k__BackingField;

/// @brief Field EnableLobbyStatistics, offset: 0x118, size: 0x1, def value: None
 bool  ___EnableLobbyStatistics;

/// @brief Field lobbyStatistics, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  ___lobbyStatistics;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <LocalPlayer>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Player*  ____LocalPlayer_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentRoom>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Room*  ____CurrentRoom_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PlayersOnMasterCount>k__BackingField, offset: 0x138, size: 0x4, def value: None
 int32_t  ____PlayersOnMasterCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PlayersInRoomsCount>k__BackingField, offset: 0x13c, size: 0x4, def value: None
 int32_t  ____PlayersInRoomsCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RoomsCount>k__BackingField, offset: 0x140, size: 0x4, def value: None
 int32_t  ____RoomsCount_k__BackingField;

/// @brief Field lastJoinType, offset: 0x144, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::JoinType  ___lastJoinType;

/// @brief Field enterRoomParamsCache, offset: 0x148, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::EnterRoomParams*  ___enterRoomParamsCache;

/// @brief Field failedRoomEntryOperation, offset: 0x150, size: 0x8, def value: None
 ::ExitGames::Client::Photon::OperationResponse*  ___failedRoomEntryOperation;

/// @brief Field friendListRequested, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___friendListRequested;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CloudRegion>k__BackingField, offset: 0x160, size: 0x8, def value: None
 ::StringW  ____CloudRegion_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentCluster>k__BackingField, offset: 0x168, size: 0x8, def value: None
 ::StringW  ____CurrentCluster_k__BackingField;

/// @brief Field RegionHandler, offset: 0x170, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::RegionHandler*  ___RegionHandler;

/// @brief Field bestRegionSummaryFromStorage, offset: 0x178, size: 0x8, def value: None
 ::StringW  ___bestRegionSummaryFromStorage;

/// @brief Field SummaryToCache, offset: 0x180, size: 0x8, def value: None
 ::StringW  ___SummaryToCache;

/// @brief Field connectToBestRegion, offset: 0x188, size: 0x1, def value: None
 bool  ___connectToBestRegion;

/// @brief Field callbackTargetChanges, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange*>*  ___callbackTargetChanges;

/// @brief Field callbackTargets, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Object*>*  ___callbackTargets;

/// @brief Field NameServerPortInAppSettings, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___NameServerPortInAppSettings;

/// @brief Size padding 0x1a0 - 0x1a8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____LoadBalancingPeer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____AppVersion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____AppId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____ClientType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____AuthValues_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___AuthMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___EncryptionMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____ExpectedProtocol_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___tokenCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____IsUsingNameServer_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___NameServerHost) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____UseAlternativeUdpPorts_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___ServerPortOverrides) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____EnableProtocolFallback_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____MasterServerAddress_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____GameServerAddress_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___AddressRewriter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____Server_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___ProxyServerAddress) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____ConnectCount_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___state) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___StateChanged) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___EventReceived) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___OpResponseReceived) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___ConnectionCallbackTargets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___MatchMakingCallbackTargets) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___InRoomCallbackTargets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___LobbyCallbackTargets) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___WebRpcCallbackTargets) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___ErrorInfoCallbackTargets) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____DisconnectedCause_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___DisconnectMessage) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___TelemetryEnabled) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___telemetrySent) == 0x101, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___SystemConnectionSummary) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____CurrentLobby_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___EnableLobbyStatistics) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___lobbyStatistics) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____LocalPlayer_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____CurrentRoom_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____PlayersOnMasterCount_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____PlayersInRoomsCount_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____RoomsCount_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___lastJoinType) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___enterRoomParamsCache) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___failedRoomEntryOperation) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___friendListRequested) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____CloudRegion_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ____CurrentCluster_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___RegionHandler) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___bestRegionSummaryFromStorage) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___SummaryToCache) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___connectToBestRegion) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___callbackTargetChanges) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___callbackTargets) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient, ___NameServerPortInAppSettings) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient) == 0x1a0, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LoadBalancingClient/CallbackTargetChange
class CORDL_TYPE LoadBalancingClient_CallbackTargetChange : public ::System::Object {
public:
// Declarations
/// @brief Field AddTarget, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddTarget, put=__cordl_internal_set_AddTarget)) bool  AddTarget;

/// @brief Field Target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::System::Object*  Target;

static inline ::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange* New_ctor(::System::Object*  target, bool  addTarget) ;

constexpr bool const& __cordl_internal_get_AddTarget() const;

constexpr bool& __cordl_internal_get_AddTarget() ;

constexpr ::System::Object* const& __cordl_internal_get_Target() const;

constexpr ::System::Object*& __cordl_internal_get_Target() ;

constexpr void __cordl_internal_set_AddTarget(bool  value) ;

constexpr void __cordl_internal_set_Target(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5f58680, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  target, bool  addTarget) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClient_CallbackTargetChange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient_CallbackTargetChange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClient_CallbackTargetChange(LoadBalancingClient_CallbackTargetChange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient_CallbackTargetChange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClient_CallbackTargetChange(LoadBalancingClient_CallbackTargetChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28052};

/// @brief Field Target, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___Target;

/// @brief Field AddTarget, offset: 0x18, size: 0x1, def value: None
 bool  ___AddTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange, ___Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange, ___AddTarget) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient_CallbackTargetChange) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LoadBalancingClient/EncryptionDataParameters
class CORDL_TYPE LoadBalancingClient_EncryptionDataParameters : public ::System::Object {
public:
// Declarations
static inline ::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters* New_ctor() ;

/// @brief Method .ctor, addr 0x5f58858, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingClient_EncryptionDataParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient_EncryptionDataParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingClient_EncryptionDataParameters(LoadBalancingClient_EncryptionDataParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient_EncryptionDataParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingClient_EncryptionDataParameters(LoadBalancingClient_EncryptionDataParameters const& ) = delete;

/// @brief Field Mode offset 0xffffffff size 0x1
static constexpr uint8_t  Mode{static_cast<uint8_t>(0x0u)};

/// @brief Field Secret1 offset 0xffffffff size 0x1
static constexpr uint8_t  Secret1{static_cast<uint8_t>(0x1u)};

/// @brief Field Secret2 offset 0xffffffff size 0x1
static constexpr uint8_t  Secret2{static_cast<uint8_t>(0x2u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingClient_EncryptionDataParameters) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
