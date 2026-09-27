#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkRegionInfo_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN)
namespace Fusion {
class NetworkRunner_OnBeforeSpawned;
}
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct NetworkSystemPUN_InternalState;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__AwaitSceneReady_d__89;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__CacheRegionInfo_d__57;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__ConnectToRoom_d__69;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__Initialise_d__56;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__InternalDisconnect_d__74;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__JoinFriendsRoom_d__70;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__JoinRandomPublicRoom_d__68;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__MakeOrFindRoom_d__64;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__OnDisconnected_d__120;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__ReturnToSinglePlayer_d__73;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__TryCreateRoom_d__67;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__TryJoinRoomInRegion_d__66;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__TryJoinRoom_d__65;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__WaitForStateCheck_d__62;
}
namespace GlobalNamespace {
struct NetworkSystemPUN__WaitForState_d__61;
}
namespace GlobalNamespace {
class NetworkSystemPUN___c;
}
namespace GlobalNamespace {
class NetworkSystemPUN___c__DisplayClass70_0;
}
namespace GlobalNamespace {
class NetworkSystem_RPC;
}
namespace GlobalNamespace {
class NetworkSystem_StringRPC;
}
namespace GlobalNamespace {
class PunNetPlayer;
}
namespace GlobalNamespace {
template<typename T>
struct RPCArgBuffer_1;
}
namespace GlobalNamespace {
class RoomConfig;
}
namespace GorillaTag {
template<typename T>
class ObjectPool_1;
}
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Voice::PUN {
class PhotonVoiceNetwork;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
namespace PlayFab::ClientModels {
class SharedGroupDataRecord;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
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
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
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
class NetworkSystemPUN;
}
namespace GlobalNamespace {
class NetworkSystemPUN___c;
}
namespace GlobalNamespace {
class NetworkSystemPUN___c__DisplayClass70_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSystemPUN*);
MARK_REF_T(::GlobalNamespace::NetworkSystemPUN___c*);
MARK_REF_T(::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN*, "", "NetworkSystemPUN");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN___c*, "", "NetworkSystemPUN/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*, "", "NetworkSystemPUN/<>c__DisplayClass70_0");
// [RequireComponent(typeof(PUNCallbackNotifier))]
// Dependencies NetPlayer, NetworkRegionInfo, NetworkSystem, NetworkSystemPUN::InternalState
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemPUN
class CORDL_TYPE NetworkSystemPUN : public ::GlobalNamespace::NetworkSystem {
public:
// Declarations
using InternalState = ::GlobalNamespace::NetworkSystemPUN_InternalState;

using _AwaitSceneReady_d__89 = ::GlobalNamespace::NetworkSystemPUN__AwaitSceneReady_d__89;

using _CacheRegionInfo_d__57 = ::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57;

using _ConnectToRoom_d__69 = ::GlobalNamespace::NetworkSystemPUN__ConnectToRoom_d__69;

using _Initialise_d__56 = ::GlobalNamespace::NetworkSystemPUN__Initialise_d__56;

using _InternalDisconnect_d__74 = ::GlobalNamespace::NetworkSystemPUN__InternalDisconnect_d__74;

using _JoinFriendsRoom_d__70 = ::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70;

using _JoinRandomPublicRoom_d__68 = ::GlobalNamespace::NetworkSystemPUN__JoinRandomPublicRoom_d__68;

using _MakeOrFindRoom_d__64 = ::GlobalNamespace::NetworkSystemPUN__MakeOrFindRoom_d__64;

using _OnDisconnected_d__120 = ::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120;

using _ReturnToSinglePlayer_d__73 = ::GlobalNamespace::NetworkSystemPUN__ReturnToSinglePlayer_d__73;

using _TryCreateRoom_d__67 = ::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67;

using _TryJoinRoomInRegion_d__66 = ::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66;

using _TryJoinRoom_d__65 = ::GlobalNamespace::NetworkSystemPUN__TryJoinRoom_d__65;

using _WaitForStateCheck_d__62 = ::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62;

using _WaitForState_d__61 = ::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61;

using __c = ::GlobalNamespace::NetworkSystemPUN___c;

using __c__DisplayClass70_0 = ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0;

 __declspec(property(get=get_AllNetPlayers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  AllNetPlayers;

 __declspec(property(get=get_CurrentPhotonBackend)) ::StringW  CurrentPhotonBackend;

 __declspec(property(get=get_CurrentRegion)) ::StringW  CurrentRegion;

 __declspec(property(get=get_GameModeString)) ::StringW  GameModeString;

 __declspec(property(get=get_InRoom)) bool  InRoom;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsOnline)) bool  IsOnline;

 __declspec(property(get=get_LocalPlayerID)) int32_t  LocalPlayerID;

 __declspec(property(get=get_PlayerListOthers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  PlayerListOthers;

 __declspec(property(get=get_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_RoomPlayerCount)) int32_t  RoomPlayerCount;

 __declspec(property(get=get_ServerTimestamp)) int32_t  ServerTimestamp;

 __declspec(property(get=get_SessionIsPrivate)) bool  SessionIsPrivate;

 __declspec(property(get=get_SessionIsSubscription)) bool  SessionIsSubscription;

 __declspec(property(get=get_SimDeltaTime)) float_t  SimDeltaTime;

 __declspec(property(get=get_SimTick)) int32_t  SimTick;

 __declspec(property(get=get_SimTime)) double_t  SimTime;

 __declspec(property(get=get_TickRate)) int32_t  TickRate;

 __declspec(property(get=get_VoiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  VoiceConnection;

/// @brief Field VoiceNetworkObject, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceNetworkObject, put=__cordl_internal_set_VoiceNetworkObject)) ::UnityW<::UnityEngine::GameObject>  VoiceNetworkObject;

/// @brief Field _taskCancelTokens, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__taskCancelTokens, put=__cordl_internal_set__taskCancelTokens)) ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*  _taskCancelTokens;

/// @brief Field currentState, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::NetworkSystemPUN_InternalState  currentState;

/// @brief Field firstRoomJoin, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstRoomJoin, put=__cordl_internal_set_firstRoomJoin)) bool  firstRoomJoin;

 __declspec(property(get=get_internalState, put=set_internalState)) ::GlobalNamespace::NetworkSystemPUN_InternalState  internalState;

 __declspec(property(get=get_lowestPingRegionIndex)) int32_t  lowestPingRegionIndex;

/// @brief Field m_allNetPlayers, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_allNetPlayers, put=__cordl_internal_set_m_allNetPlayers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  m_allNetPlayers;

/// @brief Field m_otherNetPlayers, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_otherNetPlayers, put=__cordl_internal_set_m_otherNetPlayers)) ::ArrayW<::GlobalNamespace::NetPlayer*>  m_otherNetPlayers;

/// @brief Field playerPool, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPool, put=__cordl_internal_set_playerPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*  playerPool;

/// @brief Field punVoice, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_punVoice, put=__cordl_internal_set_punVoice)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  punVoice;

/// @brief Field regionData, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionData, put=__cordl_internal_set_regionData)) ::ArrayW<::GlobalNamespace::NetworkRegionInfo*>  regionData;

/// @brief Field roomTask, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomTask, put=__cordl_internal_set_roomTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  roomTask;

/// @brief Method AddRemoteVoiceAddedCallback, addr 0x56efcb0, size 0xac, virtual true, abstract: false, final false
inline void AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback) ;

/// @brief Method AddVoice, addr 0x56ef088, size 0x4, virtual false, abstract: false, final false
inline void AddVoice() ;

/// @brief Method AppendStringFromDict, addr 0x56ed808, size 0x1ac, virtual false, abstract: false, final false
inline void AppendStringFromDict(::System::Collections::IDictionary*  dict, ::StringW  key, int32_t  maxStrLen, ::System::Text::StringBuilder*  sb) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<AwaitSceneReady>d__89))]
/// @brief Method AwaitSceneReady, addr 0x56f0678, size 0xc4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* AwaitSceneReady() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<CacheRegionInfo>d__57))]
/// @brief Method CacheRegionInfo, addr 0x56edf40, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CacheRegionInfo() ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56f0188, size 0x130, virtual true, abstract: false, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56f02b8, size 0x100, virtual true, abstract: false, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56f03b8, size 0x174, virtual true, abstract: false, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args) ;

/// @brief Method CallRPC, addr 0x56f052c, size 0x14c, virtual true, abstract: false, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<ConnectToRoom>d__69))]
/// @brief Method ConnectToRoom, addr 0x56eeb34, size 0x144, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex) ;

/// @brief Method FinishAuthenticating, addr 0x56ee0c4, size 0x184, virtual true, abstract: false, final false
inline void FinishAuthenticating() ;

/// @brief Method GetAuthenticationValues, addr 0x56ee01c, size 0x50, virtual true, abstract: false, final false
inline ::Photon::Realtime::AuthenticationValues* GetAuthenticationValues() ;

/// @brief Method GetCancellationToken, addr 0x56f22d0, size 0x11c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken> GetCancellationToken() ;

/// @brief Method GetLocalPlayer, addr 0x56f073c, size 0x1cc, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetLocalPlayer() ;

/// @brief Method GetMyDefaultName, addr 0x56f0e2c, size 0x60, virtual true, abstract: false, final false
inline ::StringW GetMyDefaultName() ;

/// @brief Method GetMyNickName, addr 0x56f0dcc, size 0x60, virtual true, abstract: false, final false
inline ::StringW GetMyNickName() ;

/// @brief Method GetMyTutorialCompletion, addr 0x56f1038, size 0x84, virtual true, abstract: false, final false
inline bool GetMyTutorialCompletion() ;

/// @brief Method GetMyUserID, addr 0x56f1354, size 0x60, virtual true, abstract: false, final false
inline ::StringW GetMyUserID() ;

/// @brief Method GetNickName, addr 0x56f0ebc, size 0x20, virtual true, abstract: false, final false
inline ::StringW GetNickName(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetNickName, addr 0x56f0e8c, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetNickName(int32_t  playerID) ;

/// @brief Method GetOwningPlayerID, addr 0x56f1e5c, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetOwningPlayerID(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetPlayer, addr 0x56f0908, size 0x364, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetPlayer(int32_t  PlayerID) ;

/// @brief Method GetPlayerMothershipId, addr 0x56f127c, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerPlatform, addr 0x56f11a4, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerTutorialCompletion, addr 0x56f10bc, size 0xe8, virtual true, abstract: false, final false
inline bool GetPlayerTutorialCompletion(int32_t  playerID) ;

/// @brief Method GetRandomWeightedRegion, addr 0x56eede8, size 0xf0, virtual true, abstract: false, final false
inline ::StringW GetRandomWeightedRegion() ;

/// @brief Method GetUserID, addr 0x56f13e4, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetUserID(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method GetUserID, addr 0x56f13b4, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetUserID(int32_t  playerID) ;

/// @brief Method GlobalPlayerCount, addr 0x56f1474, size 0x64, virtual true, abstract: false, final false
inline int32_t GlobalPlayerCount() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<Initialise>d__56))]
/// @brief Method Initialise, addr 0x56ede9c, size 0xa4, virtual true, abstract: false, final false
inline void Initialise() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<InternalDisconnect>d__74))]
/// @brief Method InternalDisconnect, addr 0x56eefb0, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InternalDisconnect() ;

/// @brief Method IsObjectLocallyOwned, addr 0x56f14d8, size 0xa0, virtual true, abstract: false, final false
inline bool IsObjectLocallyOwned(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsObjectRoomObject, addr 0x56f1d48, size 0xf4, virtual true, abstract: false, final false
inline bool IsObjectRoomObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsTotalAuthority, addr 0x56f1f7c, size 0x8, virtual true, abstract: false, final false
inline bool IsTotalAuthority() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<JoinFriendsRoom>d__70))]
/// @brief Method JoinFriendsRoom, addr 0x56eec78, size 0x138, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* JoinFriendsRoom(::StringW  userID, int32_t  actorIDToFollow, ::StringW  keyToFollow, ::StringW  shufflerToFollow) ;

/// @brief Method JoinPubWithFriends, addr 0x56eedb0, size 0x38, virtual true, abstract: false, final false
inline void JoinPubWithFriends() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<JoinRandomPublicRoom>d__68))]
/// @brief Method JoinRandomPublicRoom, addr 0x56eea18, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* JoinRandomPublicRoom(::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<MakeOrFindRoom>d__64))]
/// @brief Method MakeOrFindRoom, addr 0x56ee51c, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* MakeOrFindRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex) ;

/// @brief Method NetDestroy, addr 0x56f00b0, size 0xd4, virtual true, abstract: false, final false
inline void NetDestroy(::UnityEngine::GameObject*  instance) ;

/// @brief Method NetInstantiate, addr 0x56efd5c, size 0x194, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject) ;

/// @brief Method NetInstantiate, addr 0x56eff04, size 0x1ac, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback) ;

/// @brief Method NetInstantiate, addr 0x56efef0, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject) ;

static inline ::GlobalNamespace::NetworkSystemPUN* New_ctor() ;

/// @brief Method OnConnectedtoMaster, addr 0x56f1f84, size 0x24, virtual false, abstract: false, final false
inline void OnConnectedtoMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x56f20cc, size 0xb0, virtual false, abstract: false, final false
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<OnDisconnected>d__120))]
/// @brief Method OnDisconnected, addr 0x56f21fc, size 0xb4, virtual false, abstract: false, final false
inline void OnDisconnected(::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnJoinRoomFailed, addr 0x56f1ffc, size 0xd0, virtual false, abstract: false, final false
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0x56f1fa8, size 0x54, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMasterClientSwitched, addr 0x56f22b0, size 0x20, virtual false, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x56f217c, size 0x44, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x56f21c0, size 0x3c, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method ResetSystem, addr 0x56f23ec, size 0x228, virtual false, abstract: false, final false
inline void ResetSystem() ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<ReturnToSinglePlayer>d__73))]
/// @brief Method ReturnToSinglePlayer, addr 0x56eeed8, size 0xd8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReturnToSinglePlayer() ;

/// @brief Method RoomStringStripped, addr 0x56ed0d8, size 0x730, virtual true, abstract: false, final false
inline ::StringW RoomStringStripped() ;

/// @brief Method SetAuthenticationValues, addr 0x56ee06c, size 0x58, virtual true, abstract: false, final false
inline void SetAuthenticationValues(::Photon::Realtime::AuthenticationValues*  authValues) ;

/// @brief Method SetMyNickName, addr 0x56f0c6c, size 0x160, virtual true, abstract: false, final false
inline void SetMyNickName(::StringW  id) ;

/// @brief Method SetMyTutorialComplete, addr 0x56f0edc, size 0x15c, virtual true, abstract: false, final false
inline void SetMyTutorialComplete() ;

/// @brief Method SetPlayerObject, addr 0x56f0184, size 0x4, virtual true, abstract: false, final false
inline void SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID) ;

/// @brief Method SetupVoice, addr 0x56ef08c, size 0xc24, virtual false, abstract: false, final false
inline void SetupVoice() ;

/// @brief Method ShouldSpawnLocally, addr 0x56f1ed8, size 0xa4, virtual true, abstract: false, final false
inline bool ShouldSpawnLocally(int32_t  playerID) ;

/// @brief Method ShouldUpdateObject, addr 0x56f1e3c, size 0x10, virtual true, abstract: false, final false
inline bool ShouldUpdateObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method ShouldWriteObjectData, addr 0x56f1e4c, size 0x10, virtual true, abstract: false, final false
inline bool ShouldWriteObjectData(::UnityEngine::GameObject*  obj) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<TryCreateRoom>d__67))]
/// @brief Method TryCreateRoom, addr 0x56ee8e0, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* TryCreateRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<TryJoinRoom>d__65))]
/// @brief Method TryJoinRoom, addr 0x56ee664, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* TryJoinRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<TryJoinRoomInRegion>d__66))]
/// @brief Method TryJoinRoomInRegion, addr 0x56ee79c, size 0x144, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* TryJoinRoomInRegion(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex) ;

/// @brief Method UpdateNetPlayerList, addr 0x56f1578, size 0x7d0, virtual true, abstract: false, final false
inline void UpdateNetPlayerList() ;

/// @brief Method UpdateZoneInfo, addr 0x56f2614, size 0x244, virtual false, abstract: false, final false
inline void UpdateZoneInfo(bool  roomIsPublic, ::StringW  zoneName) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<WaitForState>d__61))]
/// @brief Method WaitForState, addr 0x56ee248, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForState(::System::Threading::CancellationToken  ct, ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, float_t  timeout) ;

/// @brief Method WaitForStateCheck, addr 0x56ee494, size 0x88, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* WaitForStateCheck(::GlobalNamespace::NetworkSystemPUN_InternalState  desiredState, float_t  timeout) ;

/// [AsyncStateMachine(typeof(NetworkSystemPUN::<WaitForStateCheck>d__62))]
/// @brief Method WaitForStateCheck, addr 0x56ee364, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* WaitForStateCheck(::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, float_t  timeout) ;

/// [CompilerGenerated]
/// @brief Method <SetupVoice>b__76_0, addr 0x56f2958, size 0x18, virtual false, abstract: false, final false
inline void _SetupVoice_b__76_0(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_VoiceNetworkObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_VoiceNetworkObject() ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>* const& __cordl_internal_get__taskCancelTokens() const;

constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*& __cordl_internal_get__taskCancelTokens() ;

constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_firstRoomJoin() const;

constexpr bool& __cordl_internal_get_firstRoomJoin() ;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& __cordl_internal_get_m_allNetPlayers() const;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& __cordl_internal_get_m_allNetPlayers() ;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& __cordl_internal_get_m_otherNetPlayers() const;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& __cordl_internal_get_m_otherNetPlayers() ;

constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>* const& __cordl_internal_get_playerPool() const;

constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*& __cordl_internal_get_playerPool() ;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> const& __cordl_internal_get_punVoice() const;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>& __cordl_internal_get_punVoice() ;

constexpr ::ArrayW<::GlobalNamespace::NetworkRegionInfo*> const& __cordl_internal_get_regionData() const;

constexpr ::ArrayW<::GlobalNamespace::NetworkRegionInfo*>& __cordl_internal_get_regionData() ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* const& __cordl_internal_get_roomTask() const;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*& __cordl_internal_get_roomTask() ;

constexpr void __cordl_internal_set_VoiceNetworkObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__taskCancelTokens(::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::NetworkSystemPUN_InternalState  value) ;

constexpr void __cordl_internal_set_firstRoomJoin(bool  value) ;

constexpr void __cordl_internal_set_m_allNetPlayers(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

constexpr void __cordl_internal_set_m_otherNetPlayers(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

constexpr void __cordl_internal_set_playerPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*  value) ;

constexpr void __cordl_internal_set_punVoice(::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  value) ;

constexpr void __cordl_internal_set_regionData(::ArrayW<::GlobalNamespace::NetworkRegionInfo*>  value) ;

constexpr void __cordl_internal_set_roomTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x56f2954, size 0x4, virtual false, abstract: false, final false
inline void __n__0() ;

/// @brief Method .ctor, addr 0x56f2858, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllNetPlayers, addr 0x56ecf2c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::NetPlayer*> get_AllNetPlayers() ;

/// @brief Method get_CurrentPhotonBackend, addr 0x56ecfc4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_CurrentPhotonBackend() ;

/// @brief Method get_CurrentRegion, addr 0x56eda80, size 0x50, virtual true, abstract: false, final false
inline ::StringW get_CurrentRegion() ;

/// @brief Method get_GameModeString, addr 0x56ed9b4, size 0xcc, virtual true, abstract: false, final false
inline ::StringW get_GameModeString() ;

/// @brief Method get_InRoom, addr 0x56ed014, size 0x50, virtual true, abstract: false, final false
inline bool get_InRoom() ;

/// @brief Method get_IsMasterClient, addr 0x56ede4c, size 0x50, virtual true, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsOnline, addr 0x56ed004, size 0x10, virtual true, abstract: false, final false
inline bool get_IsOnline() ;

/// @brief Method get_LocalPlayerID, addr 0x56edc3c, size 0x60, virtual true, abstract: false, final false
inline int32_t get_LocalPlayerID() ;

/// @brief Method get_PlayerListOthers, addr 0x56ecf34, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::NetPlayer*> get_PlayerListOthers() ;

/// @brief Method get_RoomName, addr 0x56ed064, size 0x74, virtual true, abstract: false, final false
inline ::StringW get_RoomName() ;

/// @brief Method get_RoomPlayerCount, addr 0x56edde4, size 0x68, virtual true, abstract: false, final false
inline int32_t get_RoomPlayerCount() ;

/// @brief Method get_ServerTimestamp, addr 0x56edc9c, size 0x50, virtual true, abstract: false, final false
inline int32_t get_ServerTimestamp() ;

/// @brief Method get_SessionIsPrivate, addr 0x56edad0, size 0x64, virtual true, abstract: false, final false
inline bool get_SessionIsPrivate() ;

/// @brief Method get_SessionIsSubscription, addr 0x56edb34, size 0x108, virtual true, abstract: false, final false
inline bool get_SessionIsSubscription() ;

/// @brief Method get_SimDeltaTime, addr 0x56edd3c, size 0x8, virtual true, abstract: false, final false
inline float_t get_SimDeltaTime() ;

/// @brief Method get_SimTick, addr 0x56edd44, size 0x50, virtual true, abstract: false, final false
inline int32_t get_SimTick() ;

/// @brief Method get_SimTime, addr 0x56edcec, size 0x50, virtual true, abstract: false, final false
inline double_t get_SimTime() ;

/// @brief Method get_TickRate, addr 0x56edd94, size 0x50, virtual true, abstract: false, final false
inline int32_t get_TickRate() ;

/// @brief Method get_VoiceConnection, addr 0x56ecf3c, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> get_VoiceConnection() ;

/// @brief Method get_internalState, addr 0x56ecfb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSystemPUN_InternalState get_internalState() ;

/// @brief Method get_lowestPingRegionIndex, addr 0x56ecf44, size 0x70, virtual false, abstract: false, final false
inline int32_t get_lowestPingRegionIndex() ;

/// @brief Method set_internalState, addr 0x56ecfbc, size 0x8, virtual false, abstract: false, final false
inline void set_internalState(::GlobalNamespace::NetworkSystemPUN_InternalState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemPUN(NetworkSystemPUN && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemPUN(NetworkSystemPUN const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1158};

/// @brief Field regionData, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetworkRegionInfo*>  ___regionData;

/// @brief Field roomTask, offset: 0xd8, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  ___roomTask;

/// @brief Field playerPool, offset: 0xe0, size: 0x8, def value: None
 ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*  ___playerPool;

/// @brief Field m_allNetPlayers, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetPlayer*>  ___m_allNetPlayers;

/// @brief Field m_otherNetPlayers, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetPlayer*>  ___m_otherNetPlayers;

/// @brief Field _taskCancelTokens, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*  ____taskCancelTokens;

/// @brief Field punVoice, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  ___punVoice;

/// @brief Field VoiceNetworkObject, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___VoiceNetworkObject;

/// @brief Field currentState, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::NetworkSystemPUN_InternalState  ___currentState;

/// @brief Field firstRoomJoin, offset: 0x114, size: 0x1, def value: None
 bool  ___firstRoomJoin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___regionData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___roomTask) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___playerPool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___m_allNetPlayers) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___m_otherNetPlayers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ____taskCancelTokens) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___punVoice) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___VoiceNetworkObject) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___currentState) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN, ___firstRoomJoin) == 0x114, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemPUN/<>c__DisplayClass70_0
class CORDL_TYPE NetworkSystemPUN___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callbackFinished, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_callbackFinished, put=__cordl_internal_set_callbackFinished)) bool  callbackFinished;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  data;

static inline ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <JoinFriendsRoom>b__0, addr 0x5707734, size 0xfc, virtual false, abstract: false, final false
inline void _JoinFriendsRoom_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

/// @brief Method <JoinFriendsRoom>b__1, addr 0x5707830, size 0x9c, virtual false, abstract: false, final false
inline void _JoinFriendsRoom_b__1(::PlayFab::PlayFabError*  error) ;

constexpr bool const& __cordl_internal_get_callbackFinished() const;

constexpr bool& __cordl_internal_get_callbackFinished() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& __cordl_internal_get_data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_callbackFinished(bool  value) ;

constexpr void __cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value) ;

/// @brief Method .ctor, addr 0x570772c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN___c__DisplayClass70_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemPUN___c__DisplayClass70_0(NetworkSystemPUN___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN___c__DisplayClass70_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemPUN___c__DisplayClass70_0(NetworkSystemPUN___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1142};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  ___data;

/// @brief Field callbackFinished, offset: 0x18, size: 0x1, def value: None
 bool  ___callbackFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0, ___callbackFinished) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemPUN/<>c
class CORDL_TYPE NetworkSystemPUN___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::NetworkSystemPUN___c*  __9;

/// @brief Field <>9__123_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__123_0, put=setStaticF___9__123_0)) ::System::Action_1<::System::Threading::CancellationTokenSource*>*  __9__123_0;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Action_1<::System::Threading::CancellationTokenSource*>*  __9__60_0;

/// @brief Field <>9__73_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__73_0, put=setStaticF___9__73_0)) ::System::Action_1<::System::Threading::CancellationTokenSource*>*  __9__73_0;

static inline ::GlobalNamespace::NetworkSystemPUN___c* New_ctor() ;

/// @brief Method <FinishAuthenticating>b__60_0, addr 0x57076a8, size 0x2c, virtual false, abstract: false, final false
inline void _FinishAuthenticating_b__60_0(::System::Threading::CancellationTokenSource*  cts) ;

/// @brief Method <ResetSystem>b__123_0, addr 0x5707700, size 0x2c, virtual false, abstract: false, final false
inline void _ResetSystem_b__123_0(::System::Threading::CancellationTokenSource*  token) ;

/// @brief Method <ReturnToSinglePlayer>b__73_0, addr 0x57076d4, size 0x2c, virtual false, abstract: false, final false
inline void _ReturnToSinglePlayer_b__73_0(::System::Threading::CancellationTokenSource*  cts) ;

/// @brief Method .ctor, addr 0x57076a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::NetworkSystemPUN___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* getStaticF___9__123_0() ;

static inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* getStaticF___9__60_0() ;

static inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* getStaticF___9__73_0() ;

static inline void setStaticF___9(::GlobalNamespace::NetworkSystemPUN___c*  value) ;

static inline void setStaticF___9__123_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value) ;

static inline void setStaticF___9__60_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value) ;

static inline void setStaticF___9__73_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemPUN___c(NetworkSystemPUN___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemPUN___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemPUN___c(NetworkSystemPUN___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
