#pragma once
// IWYU pragma private; include "Fusion/CloudServices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__PeerMode_def.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__JoinProcessStage_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudServices)
namespace Fusion::Async {
template<typename T>
class AsyncOperationHandler_1;
}
namespace Fusion::Photon::Realtime {
class AppSettings;
}
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
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
class ILobbyCallbacks;
}
namespace Fusion::Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Fusion::Photon::Realtime {
struct LobbyType;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class Region;
}
namespace Fusion::Photon::Realtime {
class RoomInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobbyInfo;
}
namespace Fusion::Protocol {
class Disconnect;
}
namespace Fusion::Protocol {
class DummyTrafficSync;
}
namespace Fusion::Protocol {
class HostMigration;
}
namespace Fusion::Protocol {
class ICommunicator;
}
namespace Fusion::Protocol {
class Join;
}
namespace Fusion::Protocol {
class NetworkConfigSync;
}
namespace Fusion::Protocol {
class PlayerRefMapping;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace Fusion::Protocol {
class ReflexiveInfo;
}
namespace Fusion::Protocol {
class Snapshot;
}
namespace Fusion::Protocol {
class Start;
}
namespace Fusion::Sockets::Stun {
struct NATType;
}
namespace Fusion::Sockets::Stun {
class StunResult;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion {
class CloudCommunicator;
}
namespace Fusion {
class CloudServicesMetadata;
}
namespace Fusion {
class CloudServices_ErrorMessages;
}
namespace Fusion {
class CloudServices__ConfirmJoin_d__96;
}
namespace Fusion {
class CloudServices__ConnectToCloud_d__67;
}
namespace Fusion {
class CloudServices__DisconnectFromCloud_d__70;
}
namespace Fusion {
class CloudServices__HandleReflexiveInfoMessage_d__92;
}
namespace Fusion {
class CloudServices__HandleStartMessage_d__89;
}
namespace Fusion {
class CloudServices__Join_d__83;
}
namespace Fusion {
class CloudServices__QueryReflexiveInfo_d__106;
}
namespace Fusion {
class CloudServices__Service_HostMigrationSnapshot_d__100;
}
namespace Fusion {
class CloudServices___HandleReflexiveInfoMessage_b__92_0_d;
}
namespace Fusion {
class CloudServices___c;
}
namespace Fusion {
class CloudServices___c__DisplayClass101_0;
}
namespace Fusion {
struct JoinProcessStage;
}
namespace Fusion {
struct NATPunchStage;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
struct NetworkRunnerInitializeArgs;
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
struct SessionLobby;
}
namespace Fusion {
class SessionProperty;
}
namespace Fusion {
struct ShutdownReason;
}
namespace Fusion {
struct StartGameArgs;
}
namespace Fusion {
class __c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class CloudServices;
}
namespace Fusion {
class CloudServices_ErrorMessages;
}
namespace Fusion {
class CloudServices__ConfirmJoin_d__96;
}
namespace Fusion {
class CloudServices__ConnectToCloud_d__67;
}
namespace Fusion {
class CloudServices__DisconnectFromCloud_d__70;
}
namespace Fusion {
class CloudServices__HandleReflexiveInfoMessage_d__92;
}
namespace Fusion {
class CloudServices__HandleStartMessage_d__89;
}
namespace Fusion {
class CloudServices__Join_d__83;
}
namespace Fusion {
class CloudServices__QueryReflexiveInfo_d__106;
}
namespace Fusion {
class CloudServices__Service_HostMigrationSnapshot_d__100;
}
namespace Fusion {
class CloudServices___HandleReflexiveInfoMessage_b__92_0_d;
}
namespace Fusion {
class CloudServices___c;
}
namespace Fusion {
class CloudServices___c__DisplayClass101_0;
}
namespace Fusion {
class __c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d;
}
// Write type traits
MARK_REF_T(::Fusion::CloudServices*);
MARK_REF_T(::Fusion::CloudServices_ErrorMessages*);
MARK_REF_T(::Fusion::CloudServices__ConfirmJoin_d__96*);
MARK_REF_T(::Fusion::CloudServices__ConnectToCloud_d__67*);
MARK_REF_T(::Fusion::CloudServices__DisconnectFromCloud_d__70*);
MARK_REF_T(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*);
MARK_REF_T(::Fusion::CloudServices__HandleStartMessage_d__89*);
MARK_REF_T(::Fusion::CloudServices__Join_d__83*);
MARK_REF_T(::Fusion::CloudServices__QueryReflexiveInfo_d__106*);
MARK_REF_T(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*);
MARK_REF_T(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*);
MARK_REF_T(::Fusion::CloudServices___c*);
MARK_REF_T(::Fusion::CloudServices___c__DisplayClass101_0*);
MARK_REF_T(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*);
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices*, "Fusion", "CloudServices");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices_ErrorMessages*, "Fusion", "CloudServices/ErrorMessages");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__ConfirmJoin_d__96*, "Fusion", "CloudServices/<ConfirmJoin>d__96");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__ConnectToCloud_d__67*, "Fusion", "CloudServices/<ConnectToCloud>d__67");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__DisconnectFromCloud_d__70*, "Fusion", "CloudServices/<DisconnectFromCloud>d__70");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92*, "Fusion", "CloudServices/<HandleReflexiveInfoMessage>d__92");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__HandleStartMessage_d__89*, "Fusion", "CloudServices/<HandleStartMessage>d__89");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__Join_d__83*, "Fusion", "CloudServices/<Join>d__83");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__QueryReflexiveInfo_d__106*, "Fusion", "CloudServices/<QueryReflexiveInfo>d__106");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100*, "Fusion", "CloudServices/<Service_HostMigrationSnapshot>d__100");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d*, "Fusion", "CloudServices/<<HandleReflexiveInfoMessage>b__92_0>d");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices___c*, "Fusion", "CloudServices/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::CloudServices___c__DisplayClass101_0*, "Fusion", "CloudServices/<>c__DisplayClass101_0");
DEFINE_IL2CPP_CLASS(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d*, "Fusion", "CloudServices/<>c__DisplayClass101_0/<<Run_ReversePing>b__0>d");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices
class CORDL_TYPE CloudServices : public ::System::Object {
public:
// Declarations
using ErrorMessages = ::Fusion::CloudServices_ErrorMessages;

using _ConfirmJoin_d__96 = ::Fusion::CloudServices__ConfirmJoin_d__96;

using _ConnectToCloud_d__67 = ::Fusion::CloudServices__ConnectToCloud_d__67;

using _DisconnectFromCloud_d__70 = ::Fusion::CloudServices__DisconnectFromCloud_d__70;

using _HandleReflexiveInfoMessage_d__92 = ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92;

using _HandleStartMessage_d__89 = ::Fusion::CloudServices__HandleStartMessage_d__89;

using _Join_d__83 = ::Fusion::CloudServices__Join_d__83;

using _QueryReflexiveInfo_d__106 = ::Fusion::CloudServices__QueryReflexiveInfo_d__106;

using _Service_HostMigrationSnapshot_d__100 = ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100;

using __HandleReflexiveInfoMessage_b__92_0_d = ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d;

using __c = ::Fusion::CloudServices___c;

using __c__DisplayClass101_0 = ::Fusion::CloudServices___c__DisplayClass101_0;

 __declspec(property(get=get_AuthenticationValues)) ::Fusion::Photon::Realtime::AuthenticationValues*  AuthenticationValues;

 __declspec(property(get=get_CachedRegionSummary)) ::StringW  CachedRegionSummary;

 __declspec(property(get=get_Communicator)) ::Fusion::Protocol::ICommunicator*  Communicator;

 __declspec(property(get=get_CurrentJoinStage)) ::Fusion::JoinProcessStage  CurrentJoinStage;

 __declspec(property(get=get_CurrentProtocolMessageVersion)) ::Fusion::Protocol::ProtocolMessageVersion  CurrentProtocolMessageVersion;

 __declspec(property(get=get_CustomSTUNServer, put=set_CustomSTUNServer)) ::StringW  CustomSTUNServer;

 __declspec(property(get=get_IsCloudReady)) bool  IsCloudReady;

 __declspec(property(get=get_IsEncryptionEnabled)) bool  IsEncryptionEnabled;

 __declspec(property(get=get_IsInLobby)) bool  IsInLobby;

 __declspec(property(get=get_IsInRoom)) bool  IsInRoom;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsNATPunchthroughEnabled, put=set_IsNATPunchthroughEnabled)) bool  IsNATPunchthroughEnabled;

 __declspec(property(get=get_IsServerOrMasterClient)) bool  IsServerOrMasterClient;

 __declspec(property(get=get_LocalPlayerRef)) ::Fusion::PlayerRef  LocalPlayerRef;

 __declspec(property(get=get_NATType)) ::Fusion::Sockets::Stun::NATType  NATType;

 __declspec(property(get=get_SessionSlots)) int32_t  SessionSlots;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <CustomSTUNServer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomSTUNServer_k__BackingField, put=__cordl_internal_set__CustomSTUNServer_k__BackingField)) ::StringW  _CustomSTUNServer_k__BackingField;

/// @brief Field <IsNATPunchthroughEnabled>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsNATPunchthroughEnabled_k__BackingField, put=__cordl_internal_set__IsNATPunchthroughEnabled_k__BackingField)) bool  _IsNATPunchthroughEnabled_k__BackingField;

/// @brief Field _cachedSessionList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedSessionList, put=__cordl_internal_set__cachedSessionList)) ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*  _cachedSessionList;

/// @brief Field _cloudServerDisconnected, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__cloudServerDisconnected, put=__cordl_internal_set__cloudServerDisconnected)) bool  _cloudServerDisconnected;

/// @brief Field _communicator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__communicator, put=__cordl_internal_set__communicator)) ::Fusion::CloudCommunicator*  _communicator;

/// @brief Field _dummyData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyData, put=__cordl_internal_set__dummyData)) ::ArrayW<uint8_t>  _dummyData;

/// @brief Field _dummyTrafficCts, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyTrafficCts, put=__cordl_internal_set__dummyTrafficCts)) ::System::Threading::CancellationTokenSource*  _dummyTrafficCts;

/// @brief Field _dummyTrafficLinkCts, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyTrafficLinkCts, put=__cordl_internal_set__dummyTrafficLinkCts)) ::System::Threading::CancellationTokenSource*  _dummyTrafficLinkCts;

/// @brief Field _joinAsyncHandler, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinAsyncHandler, put=__cordl_internal_set__joinAsyncHandler)) ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*  _joinAsyncHandler;

/// @brief Field _metadata, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__metadata, put=__cordl_internal_set__metadata)) ::Fusion::CloudServicesMetadata*  _metadata;

/// @brief Field _rejoinAttempts, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__rejoinAttempts, put=__cordl_internal_set__rejoinAttempts)) int32_t  _rejoinAttempts;

/// @brief Field _runner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

/// @brief Field _tryingToReconnect, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__tryingToReconnect, put=__cordl_internal_set__tryingToReconnect)) bool  _tryingToReconnect;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CheckSubnet, addr 0x5f75684, size 0x150, virtual false, abstract: false, final false
inline bool CheckSubnet(::Fusion::Sockets::NetAddress  remotePrivateEndPoint) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<ConfirmJoin>d__96))]
/// [DebuggerStepThrough]
/// @brief Method ConfirmJoin, addr 0x5f74d8c, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ConfirmJoin() ;

/// @brief Method Connect, addr 0x5f7382c, size 0x158, virtual false, abstract: false, final false
inline void Connect(::Fusion::NATPunchStage  punchStage, ::Fusion::Sockets::NetAddress  endPoint) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<ConnectToCloud>d__67))]
/// [DebuggerStepThrough]
/// @brief Method ConnectToCloud, addr 0x5f727a4, size 0x168, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectToCloud(::Fusion::Photon::Realtime::AppSettings*  appSettings, ::Fusion::Photon::Realtime::AuthenticationValues*  authentication, ::System::Threading::CancellationToken  externalCancellationToken, ::System::Nullable_1<bool>  useDefaultCloudPorts) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<DisconnectFromCloud>d__70))]
/// [DebuggerStepThrough]
/// @brief Method DisconnectFromCloud, addr 0x5f733d8, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DisconnectFromCloud() ;

/// @brief Method Dispose, addr 0x5f73984, size 0x38, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnterRoom, addr 0x5f72b58, size 0x880, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int16_t>* EnterRoom(::Fusion::StartGameArgs  args, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// @brief Method ExtractCommunicator, addr 0x5f72694, size 0xe4, virtual false, abstract: false, final false
inline ::Fusion::CloudCommunicator* ExtractCommunicator() ;

/// @brief Method GetActorUserID, addr 0x5f734f4, size 0xb4, virtual false, abstract: false, final false
inline ::StringW GetActorUserID(int32_t  actorID) ;

/// @brief Method HandleDisconnectMessage, addr 0x5f745b0, size 0x9c, virtual false, abstract: false, final false
inline void HandleDisconnectMessage(int32_t  sender, ::Fusion::Protocol::Disconnect*  disconnect) ;

/// @brief Method HandleDummyTrafficSync, addr 0x5f74a4c, size 0x8c, virtual false, abstract: false, final false
inline void HandleDummyTrafficSync(int32_t  sender, ::Fusion::Protocol::DummyTrafficSync*  dummyTrafficSync) ;

/// @brief Method HandleHostMigrationMessage, addr 0x5f74750, size 0xd0, virtual false, abstract: false, final false
inline void HandleHostMigrationMessage(int32_t  sender, ::Fusion::Protocol::HostMigration*  hostMigration) ;

/// @brief Method HandleJoinMessage, addr 0x5f743f4, size 0xbc, virtual false, abstract: false, final false
inline void HandleJoinMessage(int32_t  sender, ::Fusion::Protocol::Join*  join) ;

/// @brief Method HandleNetworkConfigMessage, addr 0x5f7464c, size 0x4, virtual false, abstract: false, final false
inline void HandleNetworkConfigMessage(int32_t  sender, ::Fusion::Protocol::NetworkConfigSync*  configSync) ;

/// @brief Method HandlePhotonCloudDisconnect, addr 0x5f70c6c, size 0x324, virtual false, abstract: false, final false
inline bool HandlePhotonCloudDisconnect(::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method HandlePlayerRefMapping, addr 0x5f74ed0, size 0x9c, virtual false, abstract: false, final false
inline void HandlePlayerRefMapping(int32_t  sender, ::Fusion::Protocol::PlayerRefMapping*  msg) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<HandleReflexiveInfoMessage>d__92))]
/// [DebuggerStepThrough]
/// @brief Method HandleReflexiveInfoMessage, addr 0x5f74650, size 0xf8, virtual false, abstract: false, final false
inline void HandleReflexiveInfoMessage(int32_t  sender, ::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo) ;

/// @brief Method HandleSnapshotMessage, addr 0x5f74820, size 0x22c, virtual false, abstract: false, final false
inline void HandleSnapshotMessage(int32_t  sender, ::Fusion::Protocol::Snapshot*  snapshot) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<HandleStartMessage>d__89))]
/// [DebuggerStepThrough]
/// @brief Method HandleStartMessage, addr 0x5f744b0, size 0xf8, virtual false, abstract: false, final false
inline void HandleStartMessage(int32_t  sender, ::Fusion::Protocol::Start*  start) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<Join>d__83))]
/// [DebuggerStepThrough]
/// @brief Method Join, addr 0x5f73e30, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Join(::System::Threading::CancellationToken  externalCancellationToken) ;

/// @brief Method JoinSessionLobby, addr 0x5f72914, size 0x244, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int16_t>* JoinSessionLobby(::Fusion::SessionLobby  sessionLobby, ::StringW  lobbyID, ::Fusion::Photon::Realtime::LobbyType  lobbyType) ;

static inline ::Fusion::CloudServices* New_ctor(::Fusion::NetworkRunner*  runner, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  communicator) ;

/// @brief Method OnConnected, addr 0x5f707fc, size 0x4, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0x5f70800, size 0x4, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x5f71434, size 0x4, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0x5f71190, size 0xc8, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x5f70804, size 0xc, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x5f70984, size 0x14, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnected, addr 0x5f70998, size 0x2b0, virtual true, abstract: false, final true
inline void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnFriendListUpdate, addr 0x5f71430, size 0x4, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnInternalConnectionAttempt, addr 0x5f73640, size 0x1ec, virtual false, abstract: false, final false
inline void OnInternalConnectionAttempt(int32_t  attempt, int32_t  totalConnectionAttempts, ::by_ref<bool>  shouldChange, ::by_ref<::Fusion::Sockets::NetAddress>  newAddress) ;

/// @brief Method OnJoinRandomFailed, addr 0x5f71438, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x5f7143c, size 0x4, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedLobby, addr 0x5f71440, size 0x174, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnJoinedRoom, addr 0x5f71258, size 0xf8, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftLobby, addr 0x5f715b4, size 0xc0, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLeftRoom, addr 0x5f7137c, size 0xb4, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x5f719ec, size 0x4, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRegionListReceived, addr 0x5f70fbc, size 0x1d4, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnRoomChanged, addr 0x5f739bc, size 0xe0, virtual false, abstract: false, final false
inline void OnRoomChanged() ;

/// @brief Method OnRoomListChanged, addr 0x5f71678, size 0x374, virtual false, abstract: false, final false
inline void OnRoomListChanged(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

/// @brief Method OnRoomListUpdate, addr 0x5f71674, size 0x4, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

/// @brief Method OperationFailHandler, addr 0x5f70810, size 0x174, virtual false, abstract: false, final false
inline void OperationFailHandler(int16_t  returnCode, ::StringW  message) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<QueryReflexiveInfo>d__106))]
/// [DebuggerStepThrough]
/// @brief Method QueryReflexiveInfo, addr 0x5f75514, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Fusion::Sockets::Stun::StunResult*>* QueryReflexiveInfo() ;

/// @brief Method Run_ReversePing, addr 0x5f753ac, size 0x160, virtual false, abstract: false, final false
inline void Run_ReversePing(::Fusion::Sockets::NetAddress  remoteAddr) ;

/// @brief Method SendChangeMasterClient, addr 0x5f741b4, size 0x90, virtual false, abstract: false, final false
inline void SendChangeMasterClient(int32_t  newCandidate) ;

/// @brief Method SendNetworkSyncMessage, addr 0x5f73f60, size 0x110, virtual false, abstract: false, final false
inline void SendNetworkSyncMessage(::Fusion::NetworkProjectConfig*  projectConfig) ;

/// @brief Method SendReflexiveInfo, addr 0x5f74070, size 0x144, virtual false, abstract: false, final false
inline void SendReflexiveInfo(::Fusion::Sockets::Stun::StunResult*  stunResult) ;

/// @brief Method SendStateSnapshot, addr 0x5f74244, size 0x1b0, virtual false, abstract: false, final false
inline void SendStateSnapshot(::ArrayW<uint8_t>  data, int32_t  snapshotSize, int32_t  tick, uint32_t  lastId) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<Service_HostMigrationSnapshot>d__100))]
/// [DebuggerStepThrough]
/// @brief Method Service_HostMigrationSnapshot, addr 0x5f75268, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* Service_HostMigrationSnapshot() ;

/// @brief Method Service_KeepAlive, addr 0x5f750f4, size 0x174, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* Service_KeepAlive() ;

/// @brief Method SetupDummyTraffic, addr 0x5f74ad8, size 0x2b4, virtual false, abstract: false, final false
inline void SetupDummyTraffic(::Fusion::Protocol::DummyTrafficSync*  dummyTrafficSyncMessage) ;

/// @brief Method StartBackgroundCloudServices, addr 0x5f74f6c, size 0x188, virtual false, abstract: false, final false
inline void StartBackgroundCloudServices() ;

/// @brief Method TryGetActorIdByUniqueId, addr 0x5f735a8, size 0x98, virtual false, abstract: false, final false
inline bool TryGetActorIdByUniqueId(int64_t  uniqueId, ::by_ref<int32_t>  actorId) ;

/// @brief Method Update, addr 0x5f72778, size 0x2c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInitializeArgs, addr 0x5f75658, size 0x2c, virtual false, abstract: false, final false
inline void UpdateInitializeArgs(::Fusion::NetworkRunnerInitializeArgs  newArgs) ;

/// @brief Method UpdateRoomIsOpen, addr 0x5f73ccc, size 0x5c, virtual false, abstract: false, final false
inline bool UpdateRoomIsOpen(bool  status) ;

/// @brief Method UpdateRoomIsVisible, addr 0x5f73d28, size 0x5c, virtual false, abstract: false, final false
inline bool UpdateRoomIsVisible(bool  status) ;

/// @brief Method UpdateRoomProperties, addr 0x5f73c70, size 0x5c, virtual false, abstract: false, final false
inline bool UpdateRoomProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  customProperties) ;

/// @brief Method UpdateSessionInfo, addr 0x5f73a9c, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateSessionInfo(::Fusion::SessionInfo*  sessionInfo, ::Fusion::Photon::Realtime::RoomInfo*  roomInfo, ::StringW  region) ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<<HandleReflexiveInfoMessage>b__92_0>d))]
/// [DebuggerStepThrough]
/// [CompilerGenerated]
/// @brief Method <HandleReflexiveInfoMessage>b__92_0, addr 0x5f757d4, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _HandleReflexiveInfoMessage_b__92_0(::System::Threading::CancellationToken  token) ;

/// [CompilerGenerated]
/// @brief Method <QueryReflexiveInfo>g__KeepRunning|106_0, addr 0x5f75b40, size 0x28, virtual false, abstract: false, final false
inline bool _QueryReflexiveInfo_g__KeepRunning_106_0() ;

/// [CompilerGenerated]
/// @brief Method <QueryReflexiveInfo>g__SendAnyData|106_1, addr 0x5f75b68, size 0x240, virtual false, abstract: false, final false
inline bool _QueryReflexiveInfo_g__SendAnyData_106_1(::ArrayW<uint8_t>  requestBytes, ::Fusion::Sockets::NetAddress  target) ;

/// [CompilerGenerated]
/// @brief Method <SetupDummyTraffic>b__105_0, addr 0x5f75904, size 0xb8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* _SetupDummyTraffic_b__105_0() ;

/// [CompilerGenerated]
/// @brief Method <SetupDummyTraffic>g__SendDummyTraffic|105_1, addr 0x5f759bc, size 0x184, virtual false, abstract: false, final false
inline void _SetupDummyTraffic_g__SendDummyTraffic_105_1(::ArrayW<uint8_t>  buffer) ;

constexpr ::StringW const& __cordl_internal_get__CustomSTUNServer_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CustomSTUNServer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsNATPunchthroughEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsNATPunchthroughEnabled_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>* const& __cordl_internal_get__cachedSessionList() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*& __cordl_internal_get__cachedSessionList() ;

constexpr bool const& __cordl_internal_get__cloudServerDisconnected() const;

constexpr bool& __cordl_internal_get__cloudServerDisconnected() ;

constexpr ::Fusion::CloudCommunicator* const& __cordl_internal_get__communicator() const;

constexpr ::Fusion::CloudCommunicator*& __cordl_internal_get__communicator() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__dummyData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__dummyData() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__dummyTrafficCts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__dummyTrafficCts() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__dummyTrafficLinkCts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__dummyTrafficLinkCts() ;

constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>* const& __cordl_internal_get__joinAsyncHandler() const;

constexpr ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*& __cordl_internal_get__joinAsyncHandler() ;

constexpr ::Fusion::CloudServicesMetadata* const& __cordl_internal_get__metadata() const;

constexpr ::Fusion::CloudServicesMetadata*& __cordl_internal_get__metadata() ;

constexpr int32_t const& __cordl_internal_get__rejoinAttempts() const;

constexpr int32_t& __cordl_internal_get__rejoinAttempts() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr bool const& __cordl_internal_get__tryingToReconnect() const;

constexpr bool& __cordl_internal_get__tryingToReconnect() ;

constexpr void __cordl_internal_set__CustomSTUNServer_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsNATPunchthroughEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cachedSessionList(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*  value) ;

constexpr void __cordl_internal_set__cloudServerDisconnected(bool  value) ;

constexpr void __cordl_internal_set__communicator(::Fusion::CloudCommunicator*  value) ;

constexpr void __cordl_internal_set__dummyData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__dummyTrafficCts(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__dummyTrafficLinkCts(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__joinAsyncHandler(::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*  value) ;

constexpr void __cordl_internal_set__metadata(::Fusion::CloudServicesMetadata*  value) ;

constexpr void __cordl_internal_set__rejoinAttempts(int32_t  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__tryingToReconnect(bool  value) ;

/// @brief Method .ctor, addr 0x5f71f68, size 0x640, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkRunner*  runner, ::Fusion::Photon::Realtime::FusionAppSettings*  customAppSettings, ::Fusion::CloudCommunicator*  communicator) ;

/// @brief Method get_AuthenticationValues, addr 0x5f71d08, size 0x54, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AuthenticationValues* get_AuthenticationValues() ;

/// @brief Method get_CachedRegionSummary, addr 0x5f71d64, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_CachedRegionSummary() ;

/// @brief Method get_Communicator, addr 0x5f71d5c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Protocol::ICommunicator* get_Communicator() ;

/// @brief Method get_CurrentJoinStage, addr 0x5f71c50, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::JoinProcessStage get_CurrentJoinStage() ;

/// @brief Method get_CurrentProtocolMessageVersion, addr 0x5f71c68, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Protocol::ProtocolMessageVersion get_CurrentProtocolMessageVersion() ;

/// [CompilerGenerated]
/// @brief Method get_CustomSTUNServer, addr 0x5f71de8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CustomSTUNServer() ;

/// @brief Method get_IsCloudReady, addr 0x5f71b40, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCloudReady() ;

/// @brief Method get_IsEncryptionEnabled, addr 0x5f71d98, size 0x50, virtual false, abstract: false, final false
inline bool get_IsEncryptionEnabled() ;

/// @brief Method get_IsInLobby, addr 0x5f71c00, size 0x50, virtual false, abstract: false, final false
inline bool get_IsInLobby() ;

/// @brief Method get_IsInRoom, addr 0x5f71bb0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsInRoom() ;

/// @brief Method get_IsMasterClient, addr 0x5f71cc4, size 0x44, virtual false, abstract: false, final false
inline bool get_IsMasterClient() ;

/// [CompilerGenerated]
/// @brief Method get_IsNATPunchthroughEnabled, addr 0x5f71d88, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNATPunchthroughEnabled() ;

/// @brief Method get_IsServerOrMasterClient, addr 0x5f71ec4, size 0xa4, virtual false, abstract: false, final false
inline bool get_IsServerOrMasterClient() ;

/// @brief Method get_LocalPlayerRef, addr 0x5f71e20, size 0xa4, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_LocalPlayerRef() ;

/// @brief Method get_NATType, addr 0x5f71df8, size 0x20, virtual false, abstract: false, final false
inline ::Fusion::Sockets::Stun::NATType get_NATType() ;

/// @brief Method get_SessionSlots, addr 0x5f71c80, size 0x44, virtual false, abstract: false, final false
inline int32_t get_SessionSlots() ;

/// @brief Method get_UserId, addr 0x5f71b60, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CustomSTUNServer, addr 0x5f71df0, size 0x8, virtual false, abstract: false, final false
inline void set_CustomSTUNServer(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsNATPunchthroughEnabled, addr 0x5f71d90, size 0x8, virtual false, abstract: false, final false
inline void set_IsNATPunchthroughEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices(CloudServices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices(CloudServices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18848};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsNATPunchthroughEnabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsNATPunchthroughEnabled_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CustomSTUNServer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____CustomSTUNServer_k__BackingField;

/// @brief Field _metadata, offset: 0x20, size: 0x8, def value: None
 ::Fusion::CloudServicesMetadata*  ____metadata;

/// @brief Field _runner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

/// @brief Field _communicator, offset: 0x30, size: 0x8, def value: None
 ::Fusion::CloudCommunicator*  ____communicator;

/// @brief Field _cachedSessionList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionInfo*>*  ____cachedSessionList;

/// @brief Field _cloudServerDisconnected, offset: 0x40, size: 0x1, def value: None
 bool  ____cloudServerDisconnected;

/// @brief Field _tryingToReconnect, offset: 0x41, size: 0x1, def value: None
 bool  ____tryingToReconnect;

/// @brief Field _rejoinAttempts, offset: 0x44, size: 0x4, def value: None
 int32_t  ____rejoinAttempts;

/// @brief Field _joinAsyncHandler, offset: 0x48, size: 0x8, def value: None
 ::Fusion::Async::AsyncOperationHandler_1<::Fusion::Protocol::Join*>*  ____joinAsyncHandler;

/// @brief Field _dummyData, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____dummyData;

/// @brief Field _dummyTrafficCts, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____dummyTrafficCts;

/// @brief Field _dummyTrafficLinkCts, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____dummyTrafficLinkCts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices, ____IsNATPunchthroughEnabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____CustomSTUNServer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____metadata) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____runner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____communicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____cachedSessionList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____cloudServerDisconnected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____tryingToReconnect) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____rejoinAttempts) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____joinAsyncHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____dummyData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____dummyTrafficCts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices, ____dummyTrafficLinkCts) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices) == 0x68, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<Service_HostMigrationSnapshot>d__100
class CORDL_TYPE CloudServices__Service_HostMigrationSnapshot_d__100 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>u__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f7a0ac, size 0x388, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f7a434, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

/// @brief Method .ctor, addr 0x5f753a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__Service_HostMigrationSnapshot_d__100() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__Service_HostMigrationSnapshot_d__100", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__Service_HostMigrationSnapshot_d__100(CloudServices__Service_HostMigrationSnapshot_d__100 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__Service_HostMigrationSnapshot_d__100", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__Service_HostMigrationSnapshot_d__100(CloudServices__Service_HostMigrationSnapshot_d__100 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18847};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100, _____u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__Service_HostMigrationSnapshot_d__100) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.Sockets.NetAddress, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<QueryReflexiveInfo>d__106
class CORDL_TYPE CloudServices__QueryReflexiveInfo_d__106 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>s__2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::Fusion::Sockets::Stun::StunResult*  __s__2;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  __t__builder;

/// @brief Field <>u__1, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>  __u__1;

/// @brief Field <boundLocalAddress>5__1, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__boundLocalAddress_5__1, put=__cordl_internal_set__boundLocalAddress_5__1)) ::Fusion::Sockets::NetAddress  _boundLocalAddress_5__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f79b94, size 0x514, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__QueryReflexiveInfo_d__106* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f7a0a8, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::Fusion::Sockets::Stun::StunResult* const& __cordl_internal_get___s__2() const;

constexpr ::Fusion::Sockets::Stun::StunResult*& __cordl_internal_get___s__2() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>& __cordl_internal_get___u__1() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__boundLocalAddress_5__1() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__boundLocalAddress_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___s__2(::Fusion::Sockets::Stun::StunResult*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>  value) ;

constexpr void __cordl_internal_set__boundLocalAddress_5__1(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x5f75650, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__QueryReflexiveInfo_d__106() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__QueryReflexiveInfo_d__106", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__QueryReflexiveInfo_d__106(CloudServices__QueryReflexiveInfo_d__106 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__QueryReflexiveInfo_d__106", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__QueryReflexiveInfo_d__106(CloudServices__QueryReflexiveInfo_d__106 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18846};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Fusion::Sockets::Stun::StunResult*>  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <boundLocalAddress>5__1, offset: 0x38, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____boundLocalAddress_5__1;

/// @brief Field <>s__2, offset: 0x50, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunResult*  _____s__2;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Sockets::Stun::StunResult*>  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, ____boundLocalAddress_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, _____s__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__QueryReflexiveInfo_d__106, _____u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__QueryReflexiveInfo_d__106) == 0x60, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, Fusion.Protocol.PeerMode, Fusion.Protocol.PluginGameMode, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<Join>d__83
class CORDL_TYPE CloudServices__Join_d__83 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>s__5, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__5, put=__cordl_internal_set___s__5)) ::Fusion::GameMode  __s__5;

/// @brief Field <>s__6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__6, put=__cordl_internal_set___s__6)) ::Fusion::Protocol::Join*  __s__6;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>  __u__1;

/// @brief Field <joinMode>5__2, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__joinMode_5__2, put=__cordl_internal_set__joinMode_5__2)) ::Fusion::Protocol::PluginGameMode  _joinMode_5__2;

/// @brief Field <joinRequest>5__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinRequest_5__3, put=__cordl_internal_set__joinRequest_5__3)) ::Fusion::Protocol::Join*  _joinRequest_5__3;

/// @brief Field <joinResponse>5__4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinResponse_5__4, put=__cordl_internal_set__joinResponse_5__4)) ::Fusion::Protocol::Join*  _joinResponse_5__4;

/// @brief Field <peerMode>5__1, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__peerMode_5__1, put=__cordl_internal_set__peerMode_5__1)) ::Fusion::Protocol::PeerMode  _peerMode_5__1;

/// @brief Field externalCancellationToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalCancellationToken, put=__cordl_internal_set_externalCancellationToken)) ::System::Threading::CancellationToken  externalCancellationToken;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f78ea0, size 0xcf0, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__Join_d__83* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f79b90, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get___s__5() const;

constexpr ::Fusion::GameMode& __cordl_internal_get___s__5() ;

constexpr ::Fusion::Protocol::Join* const& __cordl_internal_get___s__6() const;

constexpr ::Fusion::Protocol::Join*& __cordl_internal_get___s__6() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>& __cordl_internal_get___u__1() ;

constexpr ::Fusion::Protocol::PluginGameMode const& __cordl_internal_get__joinMode_5__2() const;

constexpr ::Fusion::Protocol::PluginGameMode& __cordl_internal_get__joinMode_5__2() ;

constexpr ::Fusion::Protocol::Join* const& __cordl_internal_get__joinRequest_5__3() const;

constexpr ::Fusion::Protocol::Join*& __cordl_internal_get__joinRequest_5__3() ;

constexpr ::Fusion::Protocol::Join* const& __cordl_internal_get__joinResponse_5__4() const;

constexpr ::Fusion::Protocol::Join*& __cordl_internal_get__joinResponse_5__4() ;

constexpr ::Fusion::Protocol::PeerMode const& __cordl_internal_get__peerMode_5__1() const;

constexpr ::Fusion::Protocol::PeerMode& __cordl_internal_get__peerMode_5__1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_externalCancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_externalCancellationToken() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___s__5(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set___s__6(::Fusion::Protocol::Join*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>  value) ;

constexpr void __cordl_internal_set__joinMode_5__2(::Fusion::Protocol::PluginGameMode  value) ;

constexpr void __cordl_internal_set__joinRequest_5__3(::Fusion::Protocol::Join*  value) ;

constexpr void __cordl_internal_set__joinResponse_5__4(::Fusion::Protocol::Join*  value) ;

constexpr void __cordl_internal_set__peerMode_5__1(::Fusion::Protocol::PeerMode  value) ;

constexpr void __cordl_internal_set_externalCancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f73f58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__Join_d__83() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__Join_d__83", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__Join_d__83(CloudServices__Join_d__83 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__Join_d__83", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__Join_d__83(CloudServices__Join_d__83 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18845};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field externalCancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___externalCancellationToken;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <peerMode>5__1, offset: 0x40, size: 0x1, def value: None
 ::Fusion::Protocol::PeerMode  ____peerMode_5__1;

/// @brief Field <joinMode>5__2, offset: 0x41, size: 0x1, def value: None
 ::Fusion::Protocol::PluginGameMode  ____joinMode_5__2;

/// @brief Field <joinRequest>5__3, offset: 0x48, size: 0x8, def value: None
 ::Fusion::Protocol::Join*  ____joinRequest_5__3;

/// @brief Field <joinResponse>5__4, offset: 0x50, size: 0x8, def value: None
 ::Fusion::Protocol::Join*  ____joinResponse_5__4;

/// @brief Field <>s__5, offset: 0x58, size: 0x4, def value: None
 ::Fusion::GameMode  _____s__5;

/// @brief Field <>s__6, offset: 0x60, size: 0x8, def value: None
 ::Fusion::Protocol::Join*  _____s__6;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::Protocol::Join*>  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, ___externalCancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, ____peerMode_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, ____joinMode_5__2) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, ____joinRequest_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, ____joinResponse_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____s__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____s__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__Join_d__83, _____u__1) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__Join_d__83) == 0x70, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, Fusion.NetworkRunnerInitializeArgs, System.Object, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<HandleStartMessage>d__89
class CORDL_TYPE CloudServices__HandleStartMessage_d__89 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>s__1, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) bool  __s__1;

/// @brief Field <>s__4, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) bool  __s__4;

/// @brief Field <>s__5, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__5, put=__cordl_internal_set___s__5)) ::Fusion::GameMode  __s__5;

/// @brief Field <>s__6, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__6, put=__cordl_internal_set___s__6)) ::Fusion::CloudServicesMetadata*  __s__6;

/// @brief Field <>s__7, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__7, put=__cordl_internal_set___s__7)) ::Fusion::Sockets::Stun::StunResult*  __s__7;

/// @brief Field <>t__builder, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset 0x160, size 0x10 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>  __u__2;

/// @brief Field <ex>5__8, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__ex_5__8, put=__cordl_internal_set__ex_5__8)) ::System::Exception*  _ex_5__8;

/// @brief Field <initArgs>5__3, offset 0x58, size 0xe0 
 __declspec(property(get=__cordl_internal_get__initArgs_5__3, put=__cordl_internal_set__initArgs_5__3)) ::Fusion::NetworkRunnerInitializeArgs  _initArgs_5__3;

/// @brief Field <result>5__2, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__result_5__2, put=__cordl_internal_set__result_5__2)) bool  _result_5__2;

/// @brief Field sender, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) int32_t  sender;

/// @brief Field start, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::Fusion::Protocol::Start*  start;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f77f98, size 0xe50, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__HandleStartMessage_d__89* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f78e9c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get___s__1() const;

constexpr bool& __cordl_internal_get___s__1() ;

constexpr bool const& __cordl_internal_get___s__4() const;

constexpr bool& __cordl_internal_get___s__4() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get___s__5() const;

constexpr ::Fusion::GameMode& __cordl_internal_get___s__5() ;

constexpr ::Fusion::CloudServicesMetadata* const& __cordl_internal_get___s__6() const;

constexpr ::Fusion::CloudServicesMetadata*& __cordl_internal_get___s__6() ;

constexpr ::Fusion::Sockets::Stun::StunResult* const& __cordl_internal_get___s__7() const;

constexpr ::Fusion::Sockets::Stun::StunResult*& __cordl_internal_get___s__7() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__1() ;

constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*> const& __cordl_internal_get___u__2() const;

constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>& __cordl_internal_get___u__2() ;

constexpr ::System::Exception* const& __cordl_internal_get__ex_5__8() const;

constexpr ::System::Exception*& __cordl_internal_get__ex_5__8() ;

constexpr ::Fusion::NetworkRunnerInitializeArgs const& __cordl_internal_get__initArgs_5__3() const;

constexpr ::Fusion::NetworkRunnerInitializeArgs& __cordl_internal_get__initArgs_5__3() ;

constexpr bool const& __cordl_internal_get__result_5__2() const;

constexpr bool& __cordl_internal_get__result_5__2() ;

constexpr int32_t const& __cordl_internal_get_sender() const;

constexpr int32_t& __cordl_internal_get_sender() ;

constexpr ::Fusion::Protocol::Start* const& __cordl_internal_get_start() const;

constexpr ::Fusion::Protocol::Start*& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___s__1(bool  value) ;

constexpr void __cordl_internal_set___s__4(bool  value) ;

constexpr void __cordl_internal_set___s__5(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set___s__6(::Fusion::CloudServicesMetadata*  value) ;

constexpr void __cordl_internal_set___s__7(::Fusion::Sockets::Stun::StunResult*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr void __cordl_internal_set___u__2(::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>  value) ;

constexpr void __cordl_internal_set__ex_5__8(::System::Exception*  value) ;

constexpr void __cordl_internal_set__initArgs_5__3(::Fusion::NetworkRunnerInitializeArgs  value) ;

constexpr void __cordl_internal_set__result_5__2(bool  value) ;

constexpr void __cordl_internal_set_sender(int32_t  value) ;

constexpr void __cordl_internal_set_start(::Fusion::Protocol::Start*  value) ;

/// @brief Method .ctor, addr 0x5f745a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__HandleStartMessage_d__89() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__HandleStartMessage_d__89", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__HandleStartMessage_d__89(CloudServices__HandleStartMessage_d__89 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__HandleStartMessage_d__89", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__HandleStartMessage_d__89(CloudServices__HandleStartMessage_d__89 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18844};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  _____t__builder;

/// @brief Field sender, offset: 0x38, size: 0x4, def value: None
 int32_t  ___sender;

/// @brief Field start, offset: 0x40, size: 0x8, def value: None
 ::Fusion::Protocol::Start*  ___start;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <>s__1, offset: 0x50, size: 0x1, def value: None
 bool  _____s__1;

/// @brief Field <result>5__2, offset: 0x51, size: 0x1, def value: None
 bool  ____result_5__2;

/// @brief Field <initArgs>5__3, offset: 0x58, size: 0xe0, def value: None
 ::Fusion::NetworkRunnerInitializeArgs  ____initArgs_5__3;

/// @brief Field <>s__4, offset: 0x138, size: 0x1, def value: None
 bool  _____s__4;

/// @brief Field <>s__5, offset: 0x13c, size: 0x4, def value: None
 ::Fusion::GameMode  _____s__5;

/// @brief Field <>s__6, offset: 0x140, size: 0x8, def value: None
 ::Fusion::CloudServicesMetadata*  _____s__6;

/// @brief Field <>s__7, offset: 0x148, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunResult*  _____s__7;

/// @brief Field <ex>5__8, offset: 0x150, size: 0x8, def value: None
 ::System::Exception*  ____ex_5__8;

/// @brief Field <>u__1, offset: 0x158, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__1;

/// @brief Field <>u__2, offset: 0x160, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Fusion::Sockets::Stun::StunResult*>  _____u__2;

/// @brief Size padding 0x188 - 0x170 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, ___sender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, ___start) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____s__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, ____result_5__2) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, ____initArgs_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____s__4) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____s__5) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____s__6) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____s__7) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, ____ex_5__8) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____u__1) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleStartMessage_d__89, _____u__2) == 0x160, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__HandleStartMessage_d__89) == 0x188, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, System.Object, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<HandleReflexiveInfoMessage>d__92
class CORDL_TYPE CloudServices__HandleReflexiveInfoMessage_d__92 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>s__1, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) bool  __s__1;

/// @brief Field <>s__2, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::Fusion::GameMode  __s__2;

/// @brief Field <>t__builder, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <uniqueId>5__3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueId_5__3, put=__cordl_internal_set__uniqueId_5__3)) int64_t  _uniqueId_5__3;

/// @brief Field reflexiveInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflexiveInfo, put=__cordl_internal_set_reflexiveInfo)) ::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo;

/// @brief Field sender, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) int32_t  sender;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f7734c, size 0xc48, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f77f94, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get___s__1() const;

constexpr bool& __cordl_internal_get___s__1() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get___s__2() const;

constexpr ::Fusion::GameMode& __cordl_internal_get___s__2() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__2() ;

constexpr int64_t const& __cordl_internal_get__uniqueId_5__3() const;

constexpr int64_t& __cordl_internal_get__uniqueId_5__3() ;

constexpr ::Fusion::Protocol::ReflexiveInfo* const& __cordl_internal_get_reflexiveInfo() const;

constexpr ::Fusion::Protocol::ReflexiveInfo*& __cordl_internal_get_reflexiveInfo() ;

constexpr int32_t const& __cordl_internal_get_sender() const;

constexpr int32_t& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___s__1(bool  value) ;

constexpr void __cordl_internal_set___s__2(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__uniqueId_5__3(int64_t  value) ;

constexpr void __cordl_internal_set_reflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value) ;

constexpr void __cordl_internal_set_sender(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f74748, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__HandleReflexiveInfoMessage_d__92() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__HandleReflexiveInfoMessage_d__92", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__HandleReflexiveInfoMessage_d__92(CloudServices__HandleReflexiveInfoMessage_d__92 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__HandleReflexiveInfoMessage_d__92", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__HandleReflexiveInfoMessage_d__92(CloudServices__HandleReflexiveInfoMessage_d__92 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18843};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  _____t__builder;

/// @brief Field sender, offset: 0x38, size: 0x4, def value: None
 int32_t  ___sender;

/// @brief Field reflexiveInfo, offset: 0x40, size: 0x8, def value: None
 ::Fusion::Protocol::ReflexiveInfo*  ___reflexiveInfo;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <>s__1, offset: 0x50, size: 0x1, def value: None
 bool  _____s__1;

/// @brief Field <>s__2, offset: 0x54, size: 0x4, def value: None
 ::Fusion::GameMode  _____s__2;

/// @brief Field <uniqueId>5__3, offset: 0x58, size: 0x8, def value: None
 int64_t  ____uniqueId_5__3;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, ___sender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, ___reflexiveInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____s__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____s__2) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, ____uniqueId_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92, _____u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__HandleReflexiveInfoMessage_d__92) == 0x70, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<DisconnectFromCloud>d__70
class CORDL_TYPE CloudServices__DisconnectFromCloud_d__70 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f76f10, size 0x438, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__DisconnectFromCloud_d__70* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f77348, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

/// @brief Method .ctor, addr 0x5f734ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__DisconnectFromCloud_d__70() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__DisconnectFromCloud_d__70", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__DisconnectFromCloud_d__70(CloudServices__DisconnectFromCloud_d__70 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__DisconnectFromCloud_d__70", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__DisconnectFromCloud_d__70(CloudServices__DisconnectFromCloud_d__70 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18842};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__DisconnectFromCloud_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__DisconnectFromCloud_d__70, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__DisconnectFromCloud_d__70, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__DisconnectFromCloud_d__70, _____u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__DisconnectFromCloud_d__70) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Nullable`1<T>, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<ConnectToCloud>d__67
class CORDL_TYPE CloudServices__ConnectToCloud_d__67 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field appSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_appSettings, put=__cordl_internal_set_appSettings)) ::Fusion::Photon::Realtime::AppSettings*  appSettings;

/// @brief Field authentication, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_authentication, put=__cordl_internal_set_authentication)) ::Fusion::Photon::Realtime::AuthenticationValues*  authentication;

/// @brief Field externalCancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_externalCancellationToken, put=__cordl_internal_set_externalCancellationToken)) ::System::Threading::CancellationToken  externalCancellationToken;

/// @brief Field useDefaultCloudPorts, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_useDefaultCloudPorts, put=__cordl_internal_set_useDefaultCloudPorts)) ::System::Nullable_1<bool>  useDefaultCloudPorts;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f76b34, size 0x3d8, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__ConnectToCloud_d__67* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f76f0c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::Fusion::Photon::Realtime::AppSettings* const& __cordl_internal_get_appSettings() const;

constexpr ::Fusion::Photon::Realtime::AppSettings*& __cordl_internal_get_appSettings() ;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& __cordl_internal_get_authentication() const;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& __cordl_internal_get_authentication() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_externalCancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_externalCancellationToken() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_useDefaultCloudPorts() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_useDefaultCloudPorts() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set_appSettings(::Fusion::Photon::Realtime::AppSettings*  value) ;

constexpr void __cordl_internal_set_authentication(::Fusion::Photon::Realtime::AuthenticationValues*  value) ;

constexpr void __cordl_internal_set_externalCancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_useDefaultCloudPorts(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0x5f7290c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__ConnectToCloud_d__67() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__ConnectToCloud_d__67", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__ConnectToCloud_d__67(CloudServices__ConnectToCloud_d__67 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__ConnectToCloud_d__67", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__ConnectToCloud_d__67(CloudServices__ConnectToCloud_d__67 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18841};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field appSettings, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AppSettings*  ___appSettings;

/// @brief Field authentication, offset: 0x38, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AuthenticationValues*  ___authentication;

/// @brief Field externalCancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___externalCancellationToken;

/// @brief Field useDefaultCloudPorts, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___useDefaultCloudPorts;

/// @brief Field <>4__this, offset: 0x58, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Size padding 0x60 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, ___appSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, ___authentication) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, ___externalCancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, ___useDefaultCloudPorts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, _____4__this) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConnectToCloud_d__67, _____u__1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__ConnectToCloud_d__67) == 0x60, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.JoinProcessStage, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<ConfirmJoin>d__96
class CORDL_TYPE CloudServices__ConfirmJoin_d__96 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>s__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::Fusion::JoinProcessStage  __s__2;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <timer>5__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timer_5__1, put=__cordl_internal_set__timer_5__1)) ::System::Diagnostics::Stopwatch*  _timer_5__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f76744, size 0x3ec, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices__ConfirmJoin_d__96* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f76b30, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::Fusion::JoinProcessStage const& __cordl_internal_get___s__2() const;

constexpr ::Fusion::JoinProcessStage& __cordl_internal_get___s__2() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__timer_5__1() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__timer_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___s__2(::Fusion::JoinProcessStage  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__timer_5__1(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x5f74ec8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices__ConfirmJoin_d__96() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__ConfirmJoin_d__96", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices__ConfirmJoin_d__96(CloudServices__ConfirmJoin_d__96 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices__ConfirmJoin_d__96", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices__ConfirmJoin_d__96(CloudServices__ConfirmJoin_d__96 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18840};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <timer>5__1, offset: 0x38, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____timer_5__1;

/// @brief Field <>s__2, offset: 0x40, size: 0x4, def value: None
 ::Fusion::JoinProcessStage  _____s__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, ____timer_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, _____s__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices__ConfirmJoin_d__96, _____u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices__ConfirmJoin_d__96) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.Sockets.NetAddress, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<>c__DisplayClass101_0
class CORDL_TYPE CloudServices___c__DisplayClass101_0 : public ::System::Object {
public:
// Declarations
using __Run_ReversePing_b__0_d = ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field remoteAddr, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_remoteAddr, put=__cordl_internal_set_remoteAddr)) ::Fusion::Sockets::NetAddress  remoteAddr;

static inline ::Fusion::CloudServices___c__DisplayClass101_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Fusion.CloudServices::<>c__DisplayClass101_0::<<Run_ReversePing>b__0>d))]
/// [DebuggerStepThrough]
/// @brief Method <Run_ReversePing>b__0, addr 0x5f76104, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Run_ReversePing_b__0(::System::Threading::CancellationToken  token) ;

/// @brief Method <Run_ReversePing>g__SendPing|1, addr 0x5f76234, size 0xfc, virtual false, abstract: false, final false
inline bool _Run_ReversePing_g__SendPing_1(::Fusion::Sockets::NetAddress  netAddress) ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_remoteAddr() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_remoteAddr() ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set_remoteAddr(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x5f7550c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices___c__DisplayClass101_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___c__DisplayClass101_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices___c__DisplayClass101_0(CloudServices___c__DisplayClass101_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___c__DisplayClass101_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices___c__DisplayClass101_0(CloudServices___c__DisplayClass101_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18839};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field remoteAddr, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___remoteAddr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices___c__DisplayClass101_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___c__DisplayClass101_0, ___remoteAddr) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices___c__DisplayClass101_0) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<>c__DisplayClass101_0/<<Run_ReversePing>b__0>d
class CORDL_TYPE __c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices___c__DisplayClass101_0*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <i>5__1, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__1, put=__cordl_internal_set__i_5__1)) int32_t  _i_5__1;

/// @brief Field token, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::System::Threading::CancellationToken  token;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f76330, size 0x410, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f76740, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices___c__DisplayClass101_0* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices___c__DisplayClass101_0*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr int32_t const& __cordl_internal_get__i_5__1() const;

constexpr int32_t& __cordl_internal_get__i_5__1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_token() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices___c__DisplayClass101_0*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__i_5__1(int32_t  value) ;

constexpr void __cordl_internal_set_token(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f7622c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d(__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d(__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18838};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field token, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___token;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Fusion::CloudServices___c__DisplayClass101_0*  _____4__this;

/// @brief Field <i>5__1, offset: 0x40, size: 0x4, def value: None
 int32_t  ____i_5__1;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, ___token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, ____i_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d, _____u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::__c__DisplayClass101_0_CloudServices___Run_ReversePing_b__0_d) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<>c
class CORDL_TYPE CloudServices___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::CloudServices___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*  __9__5_0;

static inline ::Fusion::CloudServices___c* New_ctor() ;

/// @brief Method <OnRegionListReceived>b__5_0, addr 0x5f76094, size 0x70, virtual false, abstract: false, final false
inline ::StringW _OnRegionListReceived_b__5_0(::Fusion::Photon::Realtime::Region*  region) ;

/// @brief Method .ctor, addr 0x5f7608c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::CloudServices___c* getStaticF___9() ;

static inline ::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::Fusion::CloudServices___c*  value) ;

static inline void setStaticF___9__5_0(::System::Func_2<::Fusion::Photon::Realtime::Region*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices___c(CloudServices___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices___c(CloudServices___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CloudServices___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/<<HandleReflexiveInfoMessage>b__92_0>d
class CORDL_TYPE CloudServices___HandleReflexiveInfoMessage_b__92_0_d : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::CloudServices*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <timeout>5__1, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeout_5__1, put=__cordl_internal_set__timeout_5__1)) int32_t  _timeout_5__1;

/// @brief Field token, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::System::Threading::CancellationToken  token;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f75da8, size 0x278, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f76020, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::CloudServices* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::CloudServices*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr int32_t const& __cordl_internal_get__timeout_5__1() const;

constexpr int32_t& __cordl_internal_get__timeout_5__1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_token() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::CloudServices*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__timeout_5__1(int32_t  value) ;

constexpr void __cordl_internal_set_token(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f758fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices___HandleReflexiveInfoMessage_b__92_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___HandleReflexiveInfoMessage_b__92_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices___HandleReflexiveInfoMessage_b__92_0_d(CloudServices___HandleReflexiveInfoMessage_b__92_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices___HandleReflexiveInfoMessage_b__92_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices___HandleReflexiveInfoMessage_b__92_0_d(CloudServices___HandleReflexiveInfoMessage_b__92_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18836};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field token, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___token;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Fusion::CloudServices*  _____4__this;

/// @brief Field <timeout>5__1, offset: 0x40, size: 0x4, def value: None
 int32_t  ____timeout_5__1;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, ___token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, ____timeout_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d, _____u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServices___HandleReflexiveInfoMessage_b__92_0_d) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServices/ErrorMessages
class CORDL_TYPE CloudServices_ErrorMessages : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServices_ErrorMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServices_ErrorMessages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServices_ErrorMessages(CloudServices_ErrorMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServices_ErrorMessages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServices_ErrorMessages(CloudServices_ErrorMessages const& ) = delete;

/// @brief Field JoinTimeout offset 0xffffffff size 0x8
static constexpr ::ConstString  JoinTimeout{u"Join Confirmation timeout. Shutdown."};

/// @brief Field RunnerFailInit offset 0xffffffff size 0x8
static constexpr ::ConstString  RunnerFailInit{u"Runner failed to Initialize. Shutdown."};

/// @brief Field StartBeforeJoin offset 0xffffffff size 0x8
static constexpr ::ConstString  StartBeforeJoin{u"Received Start Message, but never a Join Confirmation. Shutdown."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CloudServices_ErrorMessages) == 0x10, "Size mismatch!");

} // namespace end def Fusion
