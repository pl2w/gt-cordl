#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetSystemState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemConfig_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystem)
namespace Fusion {
class NetworkRunner_OnBeforeSpawned;
}
namespace Fusion {
struct PlayerRef;
}
namespace GlobalNamespace {
class NetEventOptions;
}
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct NetSystemState;
}
namespace GlobalNamespace {
class NetworkSystem_RPC;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPCPlaceholder;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPC;
}
namespace GlobalNamespace {
class NetworkSystem_StringRPC;
}
namespace GlobalNamespace {
class NetworkSystem__ReGetNonce_d__97;
}
namespace GlobalNamespace {
struct NetworkSystem__RefreshNonce_d__94;
}
namespace GlobalNamespace {
class NetworkSystem___c;
}
namespace GlobalNamespace {
class NetworkSystem___c__DisplayClass100_0;
}
namespace GlobalNamespace {
class NetworkSystem___c__DisplayClass99_0;
}
namespace GlobalNamespace {
template<typename T>
struct RPCArgBuffer_1;
}
namespace GlobalNamespace {
class RoomConfig;
}
namespace GorillaNetworking {
class SO_NetworkVoiceSettings;
}
namespace GorillaTag {
template<typename T>
class DelegateListProcessor_1;
}
namespace GorillaTag {
class DelegateListProcessor;
}
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace Steamworks {
struct EResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkSystem;
}
namespace GlobalNamespace {
class NetworkSystem_RPC;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPC;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPCPlaceholder;
}
namespace GlobalNamespace {
class NetworkSystem_StringRPC;
}
namespace GlobalNamespace {
class NetworkSystem__ReGetNonce_d__97;
}
namespace GlobalNamespace {
class NetworkSystem___c;
}
namespace GlobalNamespace {
class NetworkSystem___c__DisplayClass100_0;
}
namespace GlobalNamespace {
class NetworkSystem___c__DisplayClass99_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSystem*);
MARK_REF_T(::GlobalNamespace::NetworkSystem_RPC*);
MARK_REF_T(::GlobalNamespace::NetworkSystem_StaticRPC*);
MARK_REF_T(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*);
MARK_REF_T(::GlobalNamespace::NetworkSystem_StringRPC*);
MARK_REF_T(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*);
MARK_REF_T(::GlobalNamespace::NetworkSystem___c*);
MARK_REF_T(::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*);
MARK_REF_T(::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem*, "", "NetworkSystem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem_RPC*, "", "NetworkSystem/RPC");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem_StaticRPC*, "", "NetworkSystem/StaticRPC");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, "", "NetworkSystem/StaticRPCPlaceholder");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem_StringRPC*, "", "NetworkSystem/StringRPC");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*, "", "NetworkSystem/<ReGetNonce>d__97");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem___c*, "", "NetworkSystem/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*, "", "NetworkSystem/<>c__DisplayClass100_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*, "", "NetworkSystem/<>c__DisplayClass99_0");
// Dependencies NetSystemState, NetworkSystemConfig, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem
class CORDL_TYPE NetworkSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RPC = ::GlobalNamespace::NetworkSystem_RPC;

using StaticRPC = ::GlobalNamespace::NetworkSystem_StaticRPC;

using StaticRPCPlaceholder = ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder;

using StringRPC = ::GlobalNamespace::NetworkSystem_StringRPC;

using _ReGetNonce_d__97 = ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97;

using _RefreshNonce_d__94 = ::GlobalNamespace::NetworkSystem__RefreshNonce_d__94;

using __c = ::GlobalNamespace::NetworkSystem___c;

using __c__DisplayClass100_0 = ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0;

using __c__DisplayClass99_0 = ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0;

 __declspec(property(get=get_AllNetPlayers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  AllNetPlayers;

 __declspec(property(get=get_CurrentPhotonBackend)) ::StringW  CurrentPhotonBackend;

 __declspec(property(get=get_CurrentRegion)) ::StringW  CurrentRegion;

 __declspec(property(get=get_CurrentRoom, put=set_CurrentRoom)) ::GlobalNamespace::RoomConfig*  CurrentRoom;

/// @brief Field EmptyArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyArgs, put=setStaticF_EmptyArgs)) ::ArrayW<uint8_t>  EmptyArgs;

 __declspec(property(get=get_GameModeString)) ::StringW  GameModeString;

 __declspec(property(get=get_InRoom)) bool  InRoom;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::NetworkSystem>  Instance;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsOnline)) bool  IsOnline;

 __declspec(property(get=get_LocalPlayer)) ::GlobalNamespace::NetPlayer*  LocalPlayer;

 __declspec(property(get=get_LocalPlayerID)) int32_t  LocalPlayerID;

 __declspec(property(get=get_LocalRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  LocalRecorder;

 __declspec(property(get=get_LocalSpeaker)) ::UnityW<::Photon::Voice::Unity::Speaker>  LocalSpeaker;

 __declspec(property(get=get_MasterClient)) ::GlobalNamespace::NetPlayer*  MasterClient;

 __declspec(property(get=get_NetPlayerCache)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::NetPlayer*>*  NetPlayerCache;

/// @brief Field OnCustomAuthenticationResponse, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCustomAuthenticationResponse, put=__cordl_internal_set_OnCustomAuthenticationResponse)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  OnCustomAuthenticationResponse;

/// @brief Field OnJoinedRoomEvent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnJoinedRoomEvent, put=__cordl_internal_set_OnJoinedRoomEvent)) ::GorillaTag::DelegateListProcessor*  OnJoinedRoomEvent;

/// @brief Field OnMasterClientSwitchedEvent, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMasterClientSwitchedEvent, put=__cordl_internal_set_OnMasterClientSwitchedEvent)) ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  OnMasterClientSwitchedEvent;

/// @brief Field OnMultiplayerStarted, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMultiplayerStarted, put=__cordl_internal_set_OnMultiplayerStarted)) ::GorillaTag::DelegateListProcessor*  OnMultiplayerStarted;

/// @brief Field OnPlayerJoined, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerJoined, put=__cordl_internal_set_OnPlayerJoined)) ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  OnPlayerJoined;

/// @brief Field OnPlayerLeft, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerLeft, put=__cordl_internal_set_OnPlayerLeft)) ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  OnPlayerLeft;

/// @brief Field OnPreLeavingRoom, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPreLeavingRoom, put=__cordl_internal_set_OnPreLeavingRoom)) ::GorillaTag::DelegateListProcessor*  OnPreLeavingRoom;

/// @brief Field OnRaiseEvent, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRaiseEvent, put=__cordl_internal_set_OnRaiseEvent)) ::System::Action_3<uint8_t,::System::Object*,int32_t>*  OnRaiseEvent;

/// @brief Field OnReturnedToSinglePlayer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReturnedToSinglePlayer, put=__cordl_internal_set_OnReturnedToSinglePlayer)) ::GorillaTag::DelegateListProcessor*  OnReturnedToSinglePlayer;

 __declspec(property(get=get_PlayerListOthers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  PlayerListOthers;

 __declspec(property(get=get_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_RoomPlayerCount)) int32_t  RoomPlayerCount;

/// @brief Field SceneObjectsToAttach, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneObjectsToAttach, put=__cordl_internal_set_SceneObjectsToAttach)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  SceneObjectsToAttach;

 __declspec(property(get=get_ServerTimestamp)) int32_t  ServerTimestamp;

 __declspec(property(get=get_SessionIsPrivate)) bool  SessionIsPrivate;

 __declspec(property(get=get_SessionIsSubscription)) bool  SessionIsSubscription;

 __declspec(property(get=get_SimDeltaTime)) float_t  SimDeltaTime;

 __declspec(property(get=get_SimTick)) int32_t  SimTick;

 __declspec(property(get=get_SimTime)) double_t  SimTime;

 __declspec(property(get=get_TickRate)) int32_t  TickRate;

 __declspec(property(get=get_VoiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  VoiceConnection;

/// @brief Field VoiceSettings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceSettings, put=__cordl_internal_set_VoiceSettings)) ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  VoiceSettings;

 __declspec(property(get=get_WrongVersion)) bool  WrongVersion;

/// @brief Field <CurrentRoom>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentRoom_k__BackingField, put=__cordl_internal_set__CurrentRoom_k__BackingField)) ::GlobalNamespace::RoomConfig*  _CurrentRoom_k__BackingField;

/// @brief Field <IsMasterClient>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMasterClient_k__BackingField, put=__cordl_internal_set__IsMasterClient_k__BackingField)) bool  _IsMasterClient_k__BackingField;

/// @brief Field <groupJoinInProgress>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__groupJoinInProgress_k__BackingField, put=__cordl_internal_set__groupJoinInProgress_k__BackingField)) bool  _groupJoinInProgress_k__BackingField;

/// @brief Field changingSceneManually, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_changingSceneManually, put=__cordl_internal_set_changingSceneManually)) bool  changingSceneManually;

/// @brief Field config, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::GlobalNamespace::NetworkSystemConfig  config;

/// @brief Field currentRegionIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRegionIndex, put=__cordl_internal_set_currentRegionIndex)) int32_t  currentRegionIndex;

 __declspec(property(get=get_groupJoinInProgress, put=set_groupJoinInProgress)) bool  groupJoinInProgress;

/// @brief Field groupJoinOverrideGameMode, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupJoinOverrideGameMode, put=__cordl_internal_set_groupJoinOverrideGameMode)) ::StringW  groupJoinOverrideGameMode;

/// @brief Field isWrongVersion, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_isWrongVersion, put=__cordl_internal_set_isWrongVersion)) bool  isWrongVersion;

/// @brief Field localRecorder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRecorder, put=__cordl_internal_set_localRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  localRecorder;

/// @brief Field localSpeaker, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_localSpeaker, put=__cordl_internal_set_localSpeaker)) ::UnityW<::Photon::Voice::Unity::Speaker>  localSpeaker;

/// @brief Field netPlayerCache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_netPlayerCache, put=__cordl_internal_set_netPlayerCache)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  netPlayerCache;

 __declspec(property(get=get_netState, put=set_netState)) ::GlobalNamespace::NetSystemState  netState;

/// @brief Field nonceRefreshed, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_nonceRefreshed, put=__cordl_internal_set_nonceRefreshed)) bool  nonceRefreshed;

/// @brief Field regionNames, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionNames, put=__cordl_internal_set_regionNames)) ::ArrayW<::StringW>  regionNames;

/// @brief Field remoteVoiceAddedCallbacks, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteVoiceAddedCallbacks, put=__cordl_internal_set_remoteVoiceAddedCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*  remoteVoiceAddedCallbacks;

/// @brief Field reusableSB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusableSB, put=setStaticF_reusableSB)) ::System::Text::StringBuilder*  reusableSB;

/// @brief Field shuffleStringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_shuffleStringBuilder, put=setStaticF_shuffleStringBuilder)) ::System::Text::StringBuilder*  shuffleStringBuilder;

/// @brief Field testState, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_testState, put=__cordl_internal_set_testState)) ::GlobalNamespace::NetSystemState  testState;

/// @brief Method AddRemoteVoiceAddedCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback) ;

/// @brief Method AddVoiceSettings, addr 0x56ea79c, size 0x8, virtual false, abstract: false, final false
inline void AddVoiceSettings(::GorillaNetworking::SO_NetworkVoiceSettings*  settings) ;

/// @brief Method AttachObjectInGame, addr 0x56dba3c, size 0x4, virtual true, abstract: false, final false
inline void AttachObjectInGame(::UnityEngine::GameObject*  item) ;

/// @brief Method AwaitSceneReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* AwaitSceneReady() ;

/// @brief Method BroadcastMyRoom, addr 0x56e9f20, size 0x31c, virtual false, abstract: false, final false
inline void BroadcastMyRoom(bool  create, ::StringW  key, ::StringW  shuffler) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message) ;

/// @brief Method ConnectToRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex) ;

/// @brief Method CustomAuthenticationFailed, addr 0x56e98e8, size 0x54, virtual false, abstract: false, final false
inline void CustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method CustomAuthenticationResponse, addr 0x56e9868, size 0x80, virtual false, abstract: false, final false
inline void CustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  response) ;

/// @brief Method DetatchSceneObjectInGame, addr 0x56e9a24, size 0x4, virtual true, abstract: false, final false
inline void DetatchSceneObjectInGame(::UnityEngine::GameObject*  item) ;

/// @brief Method FindPlayer, addr 0x56ea5e8, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* FindPlayer(::Photon::Realtime::Player*  punPlayer) ;

/// @brief Method FinishAuthenticating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void FinishAuthenticating() ;

/// @brief Method GetAuthenticationValues, addr 0x56e9a28, size 0x98, virtual true, abstract: false, final false
inline ::Photon::Realtime::AuthenticationValues* GetAuthenticationValues() ;

/// @brief Method GetLocalPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::NetPlayer* GetLocalPlayer() ;

/// @brief Method GetMyDefaultName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetMyDefaultName() ;

/// @brief Method GetMyNickName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetMyNickName() ;

/// @brief Method GetMyPlatform, addr 0x56ea6a8, size 0x8c, virtual false, abstract: false, final false
inline ::StringW GetMyPlatform() ;

/// @brief Method GetMyTutorialCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetMyTutorialCompletion() ;

/// @brief Method GetMyUserID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetMyUserID() ;

/// @brief Method GetNetPlayerByID, addr 0x56ea4e0, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetNetPlayerByID(int32_t  playerActorNumber) ;

/// @brief Method GetNickName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetNickName(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetNickName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetNickName(int32_t  playerID) ;

/// @brief Method GetOwningPlayerID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetOwningPlayerID(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::NetPlayer* GetPlayer(int32_t  PlayerID) ;

/// @brief Method GetPlayer, addr 0x56da474, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetPlayer(::Fusion::PlayerRef  playerRef) ;

/// @brief Method GetPlayer, addr 0x56e7dd8, size 0xf4, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetPlayer(::Photon::Realtime::Player*  punPlayer) ;

/// @brief Method GetPlayerMothershipId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerMothershipId, addr 0x56ea768, size 0x34, virtual false, abstract: false, final false
inline ::StringW GetPlayerMothershipId(int32_t  playerID) ;

/// @brief Method GetPlayerPlatform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerPlatform, addr 0x56ea734, size 0x34, virtual false, abstract: false, final false
inline ::StringW GetPlayerPlatform(int32_t  playerID) ;

/// @brief Method GetPlayerTutorialCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetPlayerTutorialCompletion(int32_t  playerID) ;

/// @brief Method GetRandomRoomName, addr 0x56e5ecc, size 0x198, virtual false, abstract: false, final false
static inline ::StringW GetRandomRoomName() ;

/// @brief Method GetRandomWeightedRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetRandomWeightedRegion() ;

/// @brief Method GetSteamAuthTicketFailureCallback, addr 0x56e9e6c, size 0x20, virtual false, abstract: false, final false
inline void GetSteamAuthTicketFailureCallback(::Steamworks::EResult  result) ;

/// @brief Method GetSteamAuthTicketSuccessCallback, addr 0x56e9d68, size 0x104, virtual false, abstract: false, final false
inline void GetSteamAuthTicketSuccessCallback(::StringW  ticket) ;

/// @brief Method GetUserID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetUserID(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetUserID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetUserID(int32_t  playerID) ;

/// @brief Method GlobalPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GlobalPlayerCount() ;

/// @brief Method Initialise, addr 0x56e0790, size 0x148, virtual true, abstract: false, final false
inline void Initialise() ;

/// @brief Method InstantCheckGroupData, addr 0x56ea23c, size 0x29c, virtual false, abstract: false, final false
inline bool InstantCheckGroupData(::StringW  userID, ::StringW  keyToFollow) ;

/// @brief Method IsObjectLocallyOwned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsObjectLocallyOwned(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsObjectRoomObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsObjectRoomObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsTotalAuthority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsTotalAuthority() ;

/// @brief Method JoinFriendsRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* JoinFriendsRoom(::StringW  userID, int32_t  actorID, ::StringW  keyToFollow, ::StringW  shufflerToFollow) ;

/// @brief Method JoinPubWithFriends, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void JoinPubWithFriends() ;

/// @brief Method JoinedNetworkRoom, addr 0x56e1bd0, size 0xb4, virtual false, abstract: false, final false
inline void JoinedNetworkRoom() ;

/// @brief Method MultiplayerStarted, addr 0x56e950c, size 0x14, virtual false, abstract: false, final false
inline void MultiplayerStarted() ;

/// @brief Method NetDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void NetDestroy(::UnityEngine::GameObject*  instance) ;

/// @brief Method NetInstantiate, addr 0x56e9b3c, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, bool  isRoomObject) ;

/// @brief Method NetInstantiate, addr 0x56e9bfc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, bool  isRoomObject) ;

/// @brief Method NetInstantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject) ;

/// @brief Method NetInstantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback) ;

/// @brief Method NetInstantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject) ;

/// @brief Method NetRaiseEventReliable, addr 0x56ea5c0, size 0x4, virtual true, abstract: false, final false
inline void NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data) ;

/// @brief Method NetRaiseEventReliable, addr 0x56ea5c8, size 0x4, virtual true, abstract: false, final false
inline void NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options) ;

/// @brief Method NetRaiseEventUnreliable, addr 0x56ea5c4, size 0x4, virtual true, abstract: false, final false
inline void NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data) ;

/// @brief Method NetRaiseEventUnreliable, addr 0x56ea5cc, size 0x4, virtual true, abstract: false, final false
inline void NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options) ;

static inline ::GlobalNamespace::NetworkSystem* New_ctor() ;

/// @brief Method OnMasterClientSwitchedCallback, addr 0x56e9534, size 0x58, virtual false, abstract: false, final false
inline void OnMasterClientSwitchedCallback(::GlobalNamespace::NetPlayer*  nMaster) ;

/// @brief Method PlayerJoined, addr 0x56e1dc4, size 0xf0, virtual false, abstract: false, final false
inline void PlayerJoined(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method PlayerLeft, addr 0x56ddb08, size 0x184, virtual false, abstract: false, final false
inline void PlayerLeft(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method PreLeavingRoom, addr 0x56e9520, size 0x14, virtual false, abstract: false, final false
inline void PreLeavingRoom() ;

/// @brief Method RaiseEvent, addr 0x56e96ec, size 0x1c, virtual false, abstract: false, final false
inline void RaiseEvent(uint8_t  eventCode, ::System::Object*  data, int32_t  source) ;

/// [IteratorStateMachine(typeof(NetworkSystem::<ReGetNonce>d__97))]
/// @brief Method ReGetNonce, addr 0x56e9e8c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReGetNonce() ;

/// [AsyncStateMachine(typeof(NetworkSystem::<RefreshNonce>d__94))]
/// @brief Method RefreshNonce, addr 0x56e9c90, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RefreshNonce() ;

/// @brief Method RegisterSceneNetworkItem, addr 0x56e9940, size 0xe4, virtual false, abstract: false, final false
inline void RegisterSceneNetworkItem(::UnityEngine::GameObject*  item) ;

/// @brief Method ReturnToSinglePlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* ReturnToSinglePlayer() ;

/// @brief Method RoomString, addr 0x56ea7a4, size 0x300, virtual false, abstract: false, final false
inline ::StringW RoomString() ;

/// @brief Method RoomStringStripped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW RoomStringStripped() ;

/// @brief Method SetAuthenticationValues, addr 0x56e9ac0, size 0x68, virtual true, abstract: false, final false
inline void SetAuthenticationValues(::Photon::Realtime::AuthenticationValues*  authValues) ;

/// @brief Method SetMyNickName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetMyNickName(::StringW  name) ;

/// @brief Method SetMyTutorialComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetMyTutorialComplete() ;

/// @brief Method SetPlayerObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID) ;

/// @brief Method SetWrongVersion, addr 0x56e9b30, size 0xc, virtual false, abstract: false, final false
inline void SetWrongVersion() ;

/// @brief Method ShouldSpawnLocally, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldSpawnLocally(int32_t  playerID) ;

/// @brief Method ShouldUpdateObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldUpdateObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method ShouldWriteObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldWriteObjectData(::UnityEngine::GameObject*  obj) ;

/// @brief Method ShuffleRoomName, addr 0x56e5658, size 0x244, virtual false, abstract: false, final false
static inline ::StringW ShuffleRoomName(::StringW  room, ::StringW  shuffle, bool  encode) ;

/// @brief Method SinglePlayerStarted, addr 0x56e1c84, size 0x140, virtual false, abstract: false, final false
inline void SinglePlayerStarted() ;

/// @brief Method Update, addr 0x56e993c, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateNetPlayerList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateNetPlayerList() ;

/// @brief Method UpdatePlayers, addr 0x56dd7e8, size 0x10, virtual false, abstract: false, final false
inline void UpdatePlayers() ;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& __cordl_internal_get_OnCustomAuthenticationResponse() const;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& __cordl_internal_get_OnCustomAuthenticationResponse() ;

constexpr ::GorillaTag::DelegateListProcessor* const& __cordl_internal_get_OnJoinedRoomEvent() const;

constexpr ::GorillaTag::DelegateListProcessor*& __cordl_internal_get_OnJoinedRoomEvent() ;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_OnMasterClientSwitchedEvent() const;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_OnMasterClientSwitchedEvent() ;

constexpr ::GorillaTag::DelegateListProcessor* const& __cordl_internal_get_OnMultiplayerStarted() const;

constexpr ::GorillaTag::DelegateListProcessor*& __cordl_internal_get_OnMultiplayerStarted() ;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_OnPlayerJoined() const;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_OnPlayerJoined() ;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_OnPlayerLeft() const;

constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_OnPlayerLeft() ;

constexpr ::GorillaTag::DelegateListProcessor* const& __cordl_internal_get_OnPreLeavingRoom() const;

constexpr ::GorillaTag::DelegateListProcessor*& __cordl_internal_get_OnPreLeavingRoom() ;

constexpr ::System::Action_3<uint8_t,::System::Object*,int32_t>* const& __cordl_internal_get_OnRaiseEvent() const;

constexpr ::System::Action_3<uint8_t,::System::Object*,int32_t>*& __cordl_internal_get_OnRaiseEvent() ;

constexpr ::GorillaTag::DelegateListProcessor* const& __cordl_internal_get_OnReturnedToSinglePlayer() const;

constexpr ::GorillaTag::DelegateListProcessor*& __cordl_internal_get_OnReturnedToSinglePlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_SceneObjectsToAttach() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_SceneObjectsToAttach() ;

constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings> const& __cordl_internal_get_VoiceSettings() const;

constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>& __cordl_internal_get_VoiceSettings() ;

constexpr ::GlobalNamespace::RoomConfig* const& __cordl_internal_get__CurrentRoom_k__BackingField() const;

constexpr ::GlobalNamespace::RoomConfig*& __cordl_internal_get__CurrentRoom_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMasterClient_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMasterClient_k__BackingField() ;

constexpr bool const& __cordl_internal_get__groupJoinInProgress_k__BackingField() const;

constexpr bool& __cordl_internal_get__groupJoinInProgress_k__BackingField() ;

constexpr bool const& __cordl_internal_get_changingSceneManually() const;

constexpr bool& __cordl_internal_get_changingSceneManually() ;

constexpr ::GlobalNamespace::NetworkSystemConfig const& __cordl_internal_get_config() const;

constexpr ::GlobalNamespace::NetworkSystemConfig& __cordl_internal_get_config() ;

constexpr int32_t const& __cordl_internal_get_currentRegionIndex() const;

constexpr int32_t& __cordl_internal_get_currentRegionIndex() ;

constexpr ::StringW const& __cordl_internal_get_groupJoinOverrideGameMode() const;

constexpr ::StringW& __cordl_internal_get_groupJoinOverrideGameMode() ;

constexpr bool const& __cordl_internal_get_isWrongVersion() const;

constexpr bool& __cordl_internal_get_isWrongVersion() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_localRecorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_localRecorder() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_localSpeaker() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_localSpeaker() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_netPlayerCache() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_netPlayerCache() ;

constexpr bool const& __cordl_internal_get_nonceRefreshed() const;

constexpr bool& __cordl_internal_get_nonceRefreshed() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_regionNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_regionNames() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>* const& __cordl_internal_get_remoteVoiceAddedCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*& __cordl_internal_get_remoteVoiceAddedCallbacks() ;

constexpr ::GlobalNamespace::NetSystemState const& __cordl_internal_get_testState() const;

constexpr ::GlobalNamespace::NetSystemState& __cordl_internal_get_testState() ;

constexpr void __cordl_internal_set_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_OnJoinedRoomEvent(::GorillaTag::DelegateListProcessor*  value) ;

constexpr void __cordl_internal_set_OnMasterClientSwitchedEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_OnMultiplayerStarted(::GorillaTag::DelegateListProcessor*  value) ;

constexpr void __cordl_internal_set_OnPlayerJoined(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_OnPlayerLeft(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_OnPreLeavingRoom(::GorillaTag::DelegateListProcessor*  value) ;

constexpr void __cordl_internal_set_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnReturnedToSinglePlayer(::GorillaTag::DelegateListProcessor*  value) ;

constexpr void __cordl_internal_set_SceneObjectsToAttach(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_VoiceSettings(::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  value) ;

constexpr void __cordl_internal_set__CurrentRoom_k__BackingField(::GlobalNamespace::RoomConfig*  value) ;

constexpr void __cordl_internal_set__IsMasterClient_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__groupJoinInProgress_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_changingSceneManually(bool  value) ;

constexpr void __cordl_internal_set_config(::GlobalNamespace::NetworkSystemConfig  value) ;

constexpr void __cordl_internal_set_currentRegionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_groupJoinOverrideGameMode(::StringW  value) ;

constexpr void __cordl_internal_set_isWrongVersion(bool  value) ;

constexpr void __cordl_internal_set_localRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_localSpeaker(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

constexpr void __cordl_internal_set_netPlayerCache(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_nonceRefreshed(bool  value) ;

constexpr void __cordl_internal_set_regionNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_remoteVoiceAddedCallbacks(::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*  value) ;

constexpr void __cordl_internal_set_testState(::GlobalNamespace::NetSystemState  value) ;

/// @brief Method .ctor, addr 0x56e04f8, size 0x294, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCustomAuthenticationResponse, addr 0x56e9708, size 0xb0, virtual false, abstract: false, final false
inline void add_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRaiseEvent, addr 0x56e958c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value) ;

static inline ::ArrayW<uint8_t> getStaticF_EmptyArgs() ;

static inline ::UnityW<::GlobalNamespace::NetworkSystem> getStaticF_Instance() ;

static inline ::System::Text::StringBuilder* getStaticF_reusableSB() ;

static inline ::System::Text::StringBuilder* getStaticF_shuffleStringBuilder() ;

/// @brief Method get_AllNetPlayers, addr 0x56eaaa4, size 0x50, virtual true, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::NetPlayer*> get_AllNetPlayers() ;

/// @brief Method get_CurrentPhotonBackend, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_CurrentPhotonBackend() ;

/// @brief Method get_CurrentRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_CurrentRegion() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentRoom, addr 0x56eac18, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::RoomConfig* get_CurrentRoom() ;

/// @brief Method get_GameModeString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_GameModeString() ;

/// @brief Method get_InRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_InRoom() ;

/// [CompilerGenerated]
/// @brief Method get_IsMasterClient, addr 0x56e93f0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsOnline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsOnline() ;

/// @brief Method get_LocalPlayer, addr 0x56e02a4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_LocalPlayer() ;

/// @brief Method get_LocalPlayerID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_LocalPlayerID() ;

/// @brief Method get_LocalRecorder, addr 0x56e94fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Recorder> get_LocalRecorder() ;

/// @brief Method get_LocalSpeaker, addr 0x56e9504, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> get_LocalSpeaker() ;

/// @brief Method get_MasterClient, addr 0x56e93f8, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_MasterClient() ;

/// @brief Method get_NetPlayerCache, addr 0x56e93e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::NetPlayer*>* get_NetPlayerCache() ;

/// @brief Method get_PlayerListOthers, addr 0x56eaaf4, size 0x124, virtual true, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::NetPlayer*> get_PlayerListOthers() ;

/// @brief Method get_RoomName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_RoomName() ;

/// @brief Method get_RoomPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_RoomPlayerCount() ;

/// @brief Method get_ServerTimestamp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ServerTimestamp() ;

/// @brief Method get_SessionIsPrivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_SessionIsPrivate() ;

/// @brief Method get_SessionIsSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_SessionIsSubscription() ;

/// @brief Method get_SimDeltaTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_SimDeltaTime() ;

/// @brief Method get_SimTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SimTick() ;

/// @brief Method get_SimTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t get_SimTime() ;

/// @brief Method get_TickRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_TickRate() ;

/// @brief Method get_VoiceConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> get_VoiceConnection() ;

/// @brief Method get_WrongVersion, addr 0x56e9b28, size 0x8, virtual false, abstract: false, final false
inline bool get_WrongVersion() ;

/// [CompilerGenerated]
/// @brief Method get_groupJoinInProgress, addr 0x56e93d0, size 0x8, virtual false, abstract: false, final false
inline bool get_groupJoinInProgress() ;

/// @brief Method get_netState, addr 0x56e93e0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetSystemState get_netState() ;

/// @brief Method mod, addr 0x56ea5d0, size 0x18, virtual false, abstract: false, final false
static inline int32_t mod(int32_t  x, int32_t  m) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCustomAuthenticationResponse, addr 0x56e97b8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRaiseEvent, addr 0x56e963c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value) ;

static inline void setStaticF_EmptyArgs(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::NetworkSystem>  value) ;

static inline void setStaticF_reusableSB(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_shuffleStringBuilder(::System::Text::StringBuilder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentRoom, addr 0x56eac20, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentRoom(::GlobalNamespace::RoomConfig*  value) ;

/// [CompilerGenerated]
/// @brief Method set_groupJoinInProgress, addr 0x56e93d8, size 0x8, virtual false, abstract: false, final false
inline void set_groupJoinInProgress(bool  value) ;

/// @brief Method set_netState, addr 0x56e13fc, size 0xdc, virtual false, abstract: false, final false
inline void set_netState(::GlobalNamespace::NetSystemState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem(NetworkSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem(NetworkSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1131};

/// @brief Field roomCharacters offset 0xffffffff size 0x8
static constexpr ::ConstString  roomCharacters{u"ABCDEFGHIJKLMNPQRSTUVWXYZ123456789"};

/// @brief Field shuffleCharacters offset 0xffffffff size 0x8
static constexpr ::ConstString  shuffleCharacters{u"ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};

/// @brief Field config, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::NetworkSystemConfig  ___config;

/// @brief Field changingSceneManually, offset: 0x24, size: 0x1, def value: None
 bool  ___changingSceneManually;

/// @brief Field regionNames, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___regionNames;

/// @brief Field currentRegionIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentRegionIndex;

/// [CompilerGenerated]
/// @brief Field <groupJoinInProgress>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____groupJoinInProgress_k__BackingField;

/// @brief Field nonceRefreshed, offset: 0x35, size: 0x1, def value: None
 bool  ___nonceRefreshed;

/// @brief Field isWrongVersion, offset: 0x36, size: 0x1, def value: None
 bool  ___isWrongVersion;

/// @brief Field testState, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::NetSystemState  ___testState;

/// @brief Field netPlayerCache, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___netPlayerCache;

/// @brief Field localRecorder, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___localRecorder;

/// @brief Field localSpeaker, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___localSpeaker;

/// [CompilerGenerated]
/// @brief Field <IsMasterClient>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsMasterClient_k__BackingField;

/// @brief Field SceneObjectsToAttach, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___SceneObjectsToAttach;

/// @brief Field VoiceSettings, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  ___VoiceSettings;

/// @brief Field remoteVoiceAddedCallbacks, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*  ___remoteVoiceAddedCallbacks;

/// @brief Field OnJoinedRoomEvent, offset: 0x78, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor*  ___OnJoinedRoomEvent;

/// @brief Field OnMultiplayerStarted, offset: 0x80, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor*  ___OnMultiplayerStarted;

/// @brief Field OnReturnedToSinglePlayer, offset: 0x88, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor*  ___OnReturnedToSinglePlayer;

/// @brief Field OnPreLeavingRoom, offset: 0x90, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor*  ___OnPreLeavingRoom;

/// @brief Field OnPlayerJoined, offset: 0x98, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  ___OnPlayerJoined;

/// @brief Field OnPlayerLeft, offset: 0xa0, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  ___OnPlayerLeft;

/// @brief Field OnMasterClientSwitchedEvent, offset: 0xa8, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  ___OnMasterClientSwitchedEvent;

/// [CompilerGenerated]
/// @brief Field OnRaiseEvent, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_3<uint8_t,::System::Object*,int32_t>*  ___OnRaiseEvent;

/// [CompilerGenerated]
/// @brief Field OnCustomAuthenticationResponse, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  ___OnCustomAuthenticationResponse;

/// @brief Field groupJoinOverrideGameMode, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___groupJoinOverrideGameMode;

/// [CompilerGenerated]
/// @brief Field <CurrentRoom>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::RoomConfig*  ____CurrentRoom_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___changingSceneManually) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___regionNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___currentRegionIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ____groupJoinInProgress_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___nonceRefreshed) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___isWrongVersion) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___testState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___netPlayerCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___localRecorder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___localSpeaker) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ____IsMasterClient_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___SceneObjectsToAttach) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___VoiceSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___remoteVoiceAddedCallbacks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnJoinedRoomEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnMultiplayerStarted) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnReturnedToSinglePlayer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnPreLeavingRoom) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnPlayerJoined) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnPlayerLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnMasterClientSwitchedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnRaiseEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___OnCustomAuthenticationResponse) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ___groupJoinOverrideGameMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem, ____CurrentRoom_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystem) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/<ReGetNonce>d__97
class CORDL_TYPE NetworkSystem__ReGetNonce_d__97 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::NetworkSystem>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56eb25c, size 0x198, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56eb3f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56eb3fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56eb434, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56eb258, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::NetworkSystem> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::NetworkSystem>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NetworkSystem>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56e9ef8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem__ReGetNonce_d__97() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem__ReGetNonce_d__97", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem__ReGetNonce_d__97(NetworkSystem__ReGetNonce_d__97 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem__ReGetNonce_d__97", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem__ReGetNonce_d__97(NetworkSystem__ReGetNonce_d__97 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1129};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystem>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystem__ReGetNonce_d__97) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/<>c__DisplayClass99_0
class CORDL_TYPE NetworkSystem___c__DisplayClass99_0 : public ::System::Object {
public:
// Declarations
/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0* New_ctor() ;

/// @brief Method <InstantCheckGroupData>b__0, addr 0x56eb1ec, size 0x6c, virtual false, abstract: false, final false
inline void _InstantCheckGroupData_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x56ea4d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem___c__DisplayClass99_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c__DisplayClass99_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem___c__DisplayClass99_0(NetworkSystem___c__DisplayClass99_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c__DisplayClass99_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem___c__DisplayClass99_0(NetworkSystem___c__DisplayClass99_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1128};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystem___c__DisplayClass99_0, ___success) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystem___c__DisplayClass99_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/<>c__DisplayClass100_0
class CORDL_TYPE NetworkSystem___c__DisplayClass100_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playerActorNumber, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerActorNumber, put=__cordl_internal_set_playerActorNumber)) int32_t  playerActorNumber;

static inline ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0* New_ctor() ;

/// @brief Method <GetNetPlayerByID>b__0, addr 0x56eb1b4, size 0x38, virtual false, abstract: false, final false
inline bool _GetNetPlayerByID_b__0(::GlobalNamespace::NetPlayer*  a) ;

constexpr int32_t const& __cordl_internal_get_playerActorNumber() const;

constexpr int32_t& __cordl_internal_get_playerActorNumber() ;

constexpr void __cordl_internal_set_playerActorNumber(int32_t  value) ;

/// @brief Method .ctor, addr 0x56ea5b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem___c__DisplayClass100_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c__DisplayClass100_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem___c__DisplayClass100_0(NetworkSystem___c__DisplayClass100_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c__DisplayClass100_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem___c__DisplayClass100_0(NetworkSystem___c__DisplayClass100_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1127};

/// @brief Field playerActorNumber, offset: 0x10, size: 0x4, def value: None
 int32_t  ___playerActorNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystem___c__DisplayClass100_0, ___playerActorNumber) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystem___c__DisplayClass100_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/<>c
class CORDL_TYPE NetworkSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::NetworkSystem___c*  __9;

/// @brief Field <>9__159_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__159_0, put=setStaticF___9__159_0)) ::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  __9__159_0;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  __9__25_0;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  __9__30_0;

/// @brief Field <>9__98_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__98_0, put=setStaticF___9__98_0)) ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  __9__98_0;

/// @brief Field <>9__98_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__98_1, put=setStaticF___9__98_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__98_1;

/// @brief Field <>9__99_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__99_1, put=setStaticF___9__99_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__99_1;

static inline ::GlobalNamespace::NetworkSystem___c* New_ctor() ;

/// @brief Method <BroadcastMyRoom>b__98_0, addr 0x56eb178, size 0x4, virtual false, abstract: false, final false
inline void _BroadcastMyRoom_b__98_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <BroadcastMyRoom>b__98_1, addr 0x56eb17c, size 0x4, virtual false, abstract: false, final false
inline void _BroadcastMyRoom_b__98_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <InstantCheckGroupData>b__99_1, addr 0x56eb180, size 0x4, virtual false, abstract: false, final false
inline void _InstantCheckGroupData_b__99_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x56eb130, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_LocalPlayer>b__25_0, addr 0x56eb138, size 0x20, virtual false, abstract: false, final false
inline bool _get_LocalPlayer_b__25_0(::GlobalNamespace::NetPlayer*  p) ;

/// @brief Method <get_MasterClient>b__30_0, addr 0x56eb158, size 0x20, virtual false, abstract: false, final false
inline bool _get_MasterClient_b__30_0(::GlobalNamespace::NetPlayer*  p) ;

/// @brief Method <get_PlayerListOthers>b__159_0, addr 0x56eb184, size 0x30, virtual false, abstract: false, final false
inline bool _get_PlayerListOthers_b__159_0(::GlobalNamespace::NetPlayer*  p) ;

static inline ::GlobalNamespace::NetworkSystem___c* getStaticF___9() ;

static inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__159_0() ;

static inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__25_0() ;

static inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__30_0() ;

static inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* getStaticF___9__98_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__98_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__99_1() ;

static inline void setStaticF___9(::GlobalNamespace::NetworkSystem___c*  value) ;

static inline void setStaticF___9__159_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF___9__25_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF___9__30_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF___9__98_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value) ;

static inline void setStaticF___9__98_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__99_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem___c(NetworkSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem___c(NetworkSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystem___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/StaticRPCPlaceholder
class CORDL_TYPE NetworkSystem_StaticRPCPlaceholder : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56eb09c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  args, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56eb0bc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56eb088, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<uint8_t>  args) ;

static inline ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56eafd8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem_StaticRPCPlaceholder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StaticRPCPlaceholder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem_StaticRPCPlaceholder(NetworkSystem_StaticRPCPlaceholder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StaticRPCPlaceholder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem_StaticRPCPlaceholder(NetworkSystem_StaticRPCPlaceholder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/StaticRPC
class CORDL_TYPE NetworkSystem_StaticRPC : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56eafac, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56eafcc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56eaf98, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<uint8_t>  data) ;

static inline ::GlobalNamespace::NetworkSystem_StaticRPC* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56eaee8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem_StaticRPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StaticRPC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem_StaticRPC(NetworkSystem_StaticRPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StaticRPC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem_StaticRPC(NetworkSystem_StaticRPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystem_StaticRPC) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/StringRPC
class CORDL_TYPE NetworkSystem_StringRPC : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56eaebc, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56eaedc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56eaea8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::GlobalNamespace::NetworkSystem_StringRPC* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56eadf8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem_StringRPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StringRPC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem_StringRPC(NetworkSystem_StringRPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_StringRPC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem_StringRPC(NetworkSystem_StringRPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystem_StringRPC) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystem/RPC
class CORDL_TYPE NetworkSystem_RPC : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56eadcc, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56eadec, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56eadb8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<uint8_t>  data) ;

static inline ::GlobalNamespace::NetworkSystem_RPC* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56ead08, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystem_RPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_RPC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystem_RPC(NetworkSystem_RPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystem_RPC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystem_RPC(NetworkSystem_RPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystem_RPC) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
