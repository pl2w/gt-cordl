#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSystemFusion_InternalState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemFusion)
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion {
struct GameMode;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class INetworkRunnerCallbacks;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner_OnBeforeSpawned;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct ShutdownReason;
}
namespace GlobalNamespace {
class CustomObjectProvider;
}
namespace GlobalNamespace {
class FusionCallbackHandler;
}
namespace GlobalNamespace {
class FusionInternalRPCs;
}
namespace GlobalNamespace {
class FusionNetPlayer;
}
namespace GlobalNamespace {
class FusionRegionCrawler;
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
struct NetworkSystemFusion_InternalState;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__AttachSceneObjects_d__76;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__AwaitAuth_d__57;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__AwaitSceneReady_d__95;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__CloseRunner_d__66;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__ConnectToRoom_d__59;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__Connect_d__60;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__Initialise_d__55;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__JoinFriendsRoom_d__63;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__JoinRandomPublicRoom_d__62;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__MakeOrJoinRoom_d__61;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__MigrateHost_d__67;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__ResetSystem_d__68;
}
namespace GlobalNamespace {
struct NetworkSystemFusion__ReturnToSinglePlayer_d__65;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c__DisplayClass63_0;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c__DisplayClass76_0;
}
namespace GlobalNamespace {
class NetworkSystem_RPC;
}
namespace GlobalNamespace {
class NetworkSystem_StringRPC;
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
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
class NetworkSystemFusion;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c__DisplayClass63_0;
}
namespace GlobalNamespace {
class NetworkSystemFusion___c__DisplayClass76_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSystemFusion*);
MARK_REF_T(::GlobalNamespace::NetworkSystemFusion___c*);
MARK_REF_T(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*);
MARK_REF_T(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion*, "", "NetworkSystemFusion");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion___c*, "", "NetworkSystemFusion/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*, "", "NetworkSystemFusion/<>c__DisplayClass63_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0*, "", "NetworkSystemFusion/<>c__DisplayClass76_0");
// Dependencies NetworkSystem, NetworkSystemFusion::InternalState
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemFusion
class CORDL_TYPE NetworkSystemFusion : public ::GlobalNamespace::NetworkSystem {
public:
// Declarations
using InternalState = ::GlobalNamespace::NetworkSystemFusion_InternalState;

using _AttachSceneObjects_d__76 = ::GlobalNamespace::NetworkSystemFusion__AttachSceneObjects_d__76;

using _AwaitAuth_d__57 = ::GlobalNamespace::NetworkSystemFusion__AwaitAuth_d__57;

using _AwaitJoiningPlayerClientReady_d__101 = ::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101;

using _AwaitSceneReady_d__95 = ::GlobalNamespace::NetworkSystemFusion__AwaitSceneReady_d__95;

using _CloseRunner_d__66 = ::GlobalNamespace::NetworkSystemFusion__CloseRunner_d__66;

using _ConnectToRoom_d__59 = ::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59;

using _Connect_d__60 = ::GlobalNamespace::NetworkSystemFusion__Connect_d__60;

using _Initialise_d__55 = ::GlobalNamespace::NetworkSystemFusion__Initialise_d__55;

using _JoinFriendsRoom_d__63 = ::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63;

using _JoinRandomPublicRoom_d__62 = ::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62;

using _MakeOrJoinRoom_d__61 = ::GlobalNamespace::NetworkSystemFusion__MakeOrJoinRoom_d__61;

using _MigrateHost_d__67 = ::GlobalNamespace::NetworkSystemFusion__MigrateHost_d__67;

using _ResetSystem_d__68 = ::GlobalNamespace::NetworkSystemFusion__ResetSystem_d__68;

using _ReturnToSinglePlayer_d__65 = ::GlobalNamespace::NetworkSystemFusion__ReturnToSinglePlayer_d__65;

using __c = ::GlobalNamespace::NetworkSystemFusion___c;

using __c__DisplayClass63_0 = ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0;

using __c__DisplayClass76_0 = ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0;

 __declspec(property(get=get_CurrentPhotonBackend)) ::StringW  CurrentPhotonBackend;

 __declspec(property(get=get_CurrentRegion)) ::StringW  CurrentRegion;

/// @brief Field FusionVoice, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_FusionVoice, put=__cordl_internal_set_FusionVoice)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  FusionVoice;

 __declspec(property(get=get_GameModeString)) ::StringW  GameModeString;

 __declspec(property(get=get_InRoom)) bool  InRoom;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsOnline)) bool  IsOnline;

 __declspec(property(get=get_LocalPlayerID)) int32_t  LocalPlayerID;

 __declspec(property(get=get_MasterClient)) ::GlobalNamespace::NetPlayer*  MasterClient;

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

/// @brief Field <runner>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner_k__BackingField, put=__cordl_internal_set__runner_k__BackingField)) ::UnityW<::Fusion::NetworkRunner>  _runner_k__BackingField;

/// @brief Field cachedNetSceneObjects, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedNetSceneObjects, put=__cordl_internal_set_cachedNetSceneObjects)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  cachedNetSceneObjects;

/// @brief Field cachedPlayfabAuth, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedPlayfabAuth, put=__cordl_internal_set_cachedPlayfabAuth)) ::Fusion::Photon::Realtime::AuthenticationValues*  cachedPlayfabAuth;

/// @brief Field callbackHandler, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackHandler, put=__cordl_internal_set_callbackHandler)) ::UnityW<::GlobalNamespace::FusionCallbackHandler>  callbackHandler;

/// @brief Field internalRPCProvider, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalRPCProvider, put=__cordl_internal_set_internalRPCProvider)) ::UnityW<::GlobalNamespace::FusionInternalRPCs>  internalRPCProvider;

/// @brief Field internalState, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_internalState, put=__cordl_internal_set_internalState)) ::GlobalNamespace::NetworkSystemFusion_InternalState  internalState;

/// @brief Field isProcessingQueue, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_isProcessingQueue, put=__cordl_internal_set_isProcessingQueue)) bool  isProcessingQueue;

/// @brief Field lastConnectAttempt_WasFull, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastConnectAttempt_WasFull, put=__cordl_internal_set_lastConnectAttempt_WasFull)) bool  lastConnectAttempt_WasFull;

/// @brief Field myObjectProvider, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_myObjectProvider, put=__cordl_internal_set_myObjectProvider)) ::UnityW<::GlobalNamespace::CustomObjectProvider>  myObjectProvider;

/// @brief Field objectsThatNeedCallbacks, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsThatNeedCallbacks, put=__cordl_internal_set_objectsThatNeedCallbacks)) ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  objectsThatNeedCallbacks;

/// @brief Field playerPool, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPool, put=__cordl_internal_set_playerPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*  playerPool;

/// @brief Field regionCrawler, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionCrawler, put=__cordl_internal_set_regionCrawler)) ::UnityW<::GlobalNamespace::FusionRegionCrawler>  regionCrawler;

/// @brief Field registrationQueue, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_registrationQueue, put=__cordl_internal_set_registrationQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*  registrationQueue;

 __declspec(property(get=get_runner, put=set_runner)) ::UnityW<::Fusion::NetworkRunner>  runner;

/// @brief Field volatileNetObj, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_volatileNetObj, put=__cordl_internal_set_volatileNetObj)) ::UnityW<::UnityEngine::GameObject>  volatileNetObj;

/// @brief Method AddRemoteVoiceAddedCallback, addr 0x56db560, size 0xac, virtual true, abstract: false, final false
inline void AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback) ;

/// @brief Method AddVoice, addr 0x56db0e4, size 0x4, virtual false, abstract: false, final false
inline void AddVoice() ;

/// @brief Method AttachCallbackTargets, addr 0x56db60c, size 0x68, virtual false, abstract: false, final false
inline void AttachCallbackTargets() ;

/// @brief Method AttachObjectInGame, addr 0x56db8c8, size 0x174, virtual true, abstract: false, final false
inline void AttachObjectInGame(::UnityEngine::GameObject*  item) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<AttachSceneObjects>d__76))]
/// @brief Method AttachSceneObjects, addr 0x56db810, size 0xb8, virtual false, abstract: false, final false
inline void AttachSceneObjects(bool  onlyCached) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<AwaitAuth>d__57))]
/// @brief Method AwaitAuth, addr 0x56da5fc, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AwaitAuth() ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<AwaitJoiningPlayerClientReady>d__101))]
/// @brief Method AwaitJoiningPlayerClientReady, addr 0x56dd884, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AwaitJoiningPlayerClientReady(::Fusion::PlayerRef  player) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<AwaitSceneReady>d__95))]
/// @brief Method AwaitSceneReady, addr 0x56dd66c, size 0xd8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* AwaitSceneReady() ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56dc9b8, size 0x360, virtual true, abstract: false, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56dcd18, size 0x2f8, virtual true, abstract: false, final false
inline void CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf) ;

/// @brief Method CallRPC, addr 0x56dd010, size 0xb0, virtual true, abstract: false, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod) ;

/// @brief Method CallRPC, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args) ;

/// @brief Method CallRPC, addr 0x56dd4c8, size 0x4, virtual true, abstract: false, final false
inline void CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<CloseRunner>d__66))]
/// @brief Method CloseRunner, addr 0x56daea8, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseRunner(::Fusion::ShutdownReason  reason) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<Connect>d__60))]
/// @brief Method Connect, addr 0x56da8b4, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* Connect(::Fusion::GameMode  mode, ::StringW  targetSessionName, ::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<ConnectToRoom>d__59))]
/// @brief Method ConnectToRoom, addr 0x56da778, size 0x13c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex) ;

/// @brief Method CreateRegionCrawler, addr 0x56da524, size 0xd8, virtual false, abstract: false, final false
inline void CreateRegionCrawler() ;

/// @brief Method FinishAuthenticating, addr 0x56da6d4, size 0xa4, virtual true, abstract: false, final false
inline void FinishAuthenticating() ;

/// @brief Method GetLocalPlayer, addr 0x56dea88, size 0x1e8, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetLocalPlayer() ;

/// @brief Method GetMyDefaultName, addr 0x56df3c0, size 0x8c, virtual true, abstract: false, final false
inline ::StringW GetMyDefaultName() ;

/// @brief Method GetMyNickName, addr 0x56df37c, size 0x44, virtual true, abstract: false, final false
inline ::StringW GetMyNickName() ;

/// @brief Method GetMyTutorialCompletion, addr 0x56df934, size 0x84, virtual true, abstract: false, final false
inline bool GetMyTutorialCompletion() ;

/// @brief Method GetMyUserID, addr 0x56df69c, size 0x34, virtual true, abstract: false, final false
inline ::StringW GetMyUserID() ;

/// @brief Method GetNickName, addr 0x56df480, size 0x21c, virtual true, abstract: false, final false
inline ::StringW GetNickName(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetNickName, addr 0x56df44c, size 0x34, virtual true, abstract: false, final false
inline ::StringW GetNickName(int32_t  playerID) ;

/// @brief Method GetOwningPlayerID, addr 0x56dfcdc, size 0xe4, virtual true, abstract: false, final false
inline int32_t GetOwningPlayerID(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetPlayer, addr 0x56dec70, size 0x324, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetPlayer(int32_t  PlayerID) ;

/// @brief Method GetPlayerMothershipId, addr 0x56dfc1c, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerPlatform, addr 0x56dfbdc, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerRef, addr 0x56dd0c0, size 0x408, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef GetPlayerRef(int32_t  playerID) ;

/// @brief Method GetPlayerTutorialCompletion, addr 0x56df9b8, size 0x224, virtual true, abstract: false, final false
inline bool GetPlayerTutorialCompletion(int32_t  playerID) ;

/// @brief Method GetRandomWeightedRegion, addr 0x56dd634, size 0x38, virtual true, abstract: false, final false
inline ::StringW GetRandomWeightedRegion() ;

/// @brief Method GetUserID, addr 0x56df78c, size 0xf8, virtual true, abstract: false, final false
inline ::StringW GetUserID(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetUserID, addr 0x56df6d0, size 0xbc, virtual true, abstract: false, final false
inline ::StringW GetUserID(int32_t  playerID) ;

/// @brief Method GlobalPlayerCount, addr 0x56dfc5c, size 0x80, virtual true, abstract: false, final false
inline int32_t GlobalPlayerCount() ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<Initialise>d__55))]
/// @brief Method Initialise, addr 0x56da47c, size 0xa8, virtual true, abstract: false, final false
inline void Initialise() ;

/// @brief Method IsObjectLocallyOwned, addr 0x56dfdc0, size 0xf4, virtual true, abstract: false, final false
inline bool IsObjectLocallyOwned(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsObjectRoomObject, addr 0x56e00f8, size 0xa8, virtual true, abstract: false, final false
inline bool IsObjectRoomObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsTotalAuthority, addr 0x56dfeb4, size 0x68, virtual true, abstract: false, final false
inline bool IsTotalAuthority() ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<JoinFriendsRoom>d__63))]
/// @brief Method JoinFriendsRoom, addr 0x56dac5c, size 0x138, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* JoinFriendsRoom(::StringW  userID, int32_t  actorIDToFollow, ::StringW  keyToFollow, ::StringW  shufflerToFollow) ;

/// @brief Method JoinPubWithFriends, addr 0x56dad94, size 0x38, virtual true, abstract: false, final false
inline void JoinPubWithFriends() ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<JoinRandomPublicRoom>d__62))]
/// @brief Method JoinRandomPublicRoom, addr 0x56dab3c, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* JoinRandomPublicRoom(::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<MakeOrJoinRoom>d__61))]
/// @brief Method MakeOrJoinRoom, addr 0x56da9fc, size 0x140, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* MakeOrJoinRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<MigrateHost>d__67))]
/// @brief Method MigrateHost, addr 0x56daf94, size 0xa8, virtual false, abstract: false, final false
inline void MigrateHost(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method NetDestroy, addr 0x56dc830, size 0xb4, virtual true, abstract: false, final false
inline void NetDestroy(::UnityEngine::GameObject*  instance) ;

/// @brief Method NetInstantiate, addr 0x56dbe3c, size 0x2b4, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject) ;

/// @brief Method NetInstantiate, addr 0x56dc64c, size 0x1e4, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback) ;

/// @brief Method NetInstantiate, addr 0x56dc0f0, size 0x55c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject) ;

/// @brief Method NetRaiseEventReliable, addr 0x56dd4cc, size 0x4c, virtual true, abstract: false, final false
inline void NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data) ;

/// @brief Method NetRaiseEventReliable, addr 0x56dd564, size 0x68, virtual true, abstract: false, final false
inline void NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  opts) ;

/// @brief Method NetRaiseEventUnreliable, addr 0x56dd518, size 0x4c, virtual true, abstract: false, final false
inline void NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data) ;

/// @brief Method NetRaiseEventUnreliable, addr 0x56dd5cc, size 0x68, virtual true, abstract: false, final false
inline void NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  opts) ;

static inline ::GlobalNamespace::NetworkSystemFusion* New_ctor() ;

/// @brief Method OnDisconnectedFromSession, addr 0x56dd760, size 0x88, virtual false, abstract: false, final false
inline void OnDisconnectedFromSession() ;

/// @brief Method OnFusionPlayerJoined, addr 0x56dd87c, size 0x8, virtual false, abstract: false, final false
inline void OnFusionPlayerJoined(::Fusion::PlayerRef  player) ;

/// @brief Method OnFusionPlayerLeft, addr 0x56dd96c, size 0x19c, virtual false, abstract: false, final false
inline void OnFusionPlayerLeft(::Fusion::PlayerRef  player) ;

/// @brief Method OnJoinFailed, addr 0x56dd748, size 0x18, virtual false, abstract: false, final false
inline void OnJoinFailed(::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnJoinedSession, addr 0x56dd744, size 0x4, virtual false, abstract: false, final false
inline void OnJoinedSession() ;

/// @brief Method OnMasterSwitch, addr 0x56e01a0, size 0x104, virtual false, abstract: false, final false
inline void OnMasterSwitch(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnRunnerShutDown, addr 0x56dd7f8, size 0x84, virtual false, abstract: false, final false
inline void OnRunnerShutDown() ;

/// @brief Method ProcessRegistrationQueue, addr 0x56dba40, size 0x3fc, virtual false, abstract: false, final false
inline void ProcessRegistrationQueue() ;

/// @brief Method RegisterForNetworkCallbacks, addr 0x56db674, size 0x19c, virtual false, abstract: false, final false
inline void RegisterForNetworkCallbacks(::Fusion::INetworkRunnerCallbacks*  callbacks) ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<ResetSystem>d__68))]
/// @brief Method ResetSystem, addr 0x56db03c, size 0xa8, virtual false, abstract: false, final false
inline void ResetSystem() ;

/// [AsyncStateMachine(typeof(NetworkSystemFusion::<ReturnToSinglePlayer>d__65))]
/// @brief Method ReturnToSinglePlayer, addr 0x56dadcc, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReturnToSinglePlayer() ;

/// @brief Method RoomStringStripped, addr 0x56d9780, size 0x7cc, virtual true, abstract: false, final false
inline ::StringW RoomStringStripped() ;

/// @brief Method SetMyNickName, addr 0x56def94, size 0x3e8, virtual true, abstract: false, final false
inline void SetMyNickName(::StringW  name) ;

/// @brief Method SetMyTutorialComplete, addr 0x56df884, size 0xb0, virtual true, abstract: false, final false
inline void SetMyTutorialComplete() ;

/// @brief Method SetPlayerObject, addr 0x56de9b0, size 0xd8, virtual true, abstract: false, final false
inline void SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID) ;

/// @brief Method SetupVoice, addr 0x56db0e8, size 0x478, virtual false, abstract: false, final false
inline void SetupVoice() ;

/// @brief Method ShouldSpawnLocally, addr 0x56dc8e4, size 0xd4, virtual true, abstract: false, final false
inline bool ShouldSpawnLocally(int32_t  playerID) ;

/// @brief Method ShouldUpdateObject, addr 0x56dff98, size 0x160, virtual true, abstract: false, final false
inline bool ShouldUpdateObject(::UnityEngine::GameObject*  obj) ;

/// @brief Method ShouldWriteObjectData, addr 0x56dff1c, size 0x7c, virtual true, abstract: false, final false
inline bool ShouldWriteObjectData(::UnityEngine::GameObject*  obj) ;

/// @brief Method UpdateNetPlayerList, addr 0x56ddc8c, size 0xd24, virtual true, abstract: false, final false
inline void UpdateNetPlayerList() ;

/// [CompilerGenerated]
/// @brief Method <AttachSceneObjects>b__76_0, addr 0x56e08f0, size 0x28c, virtual false, abstract: false, final false
inline void _AttachSceneObjects_b__76_0(::UnityEngine::GameObject*  obj) ;

/// [CompilerGenerated]
/// @brief Method <SetupVoice>b__70_0, addr 0x56e08d8, size 0x18, virtual false, abstract: false, final false
inline void _SetupVoice_b__70_0(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback) ;

/// [CompilerGenerated]
/// @brief Method <UpdateNetPlayerList>b__103_1, addr 0x56e0b84, size 0xa4, virtual false, abstract: false, final false
inline void _UpdateNetPlayerList_b__103_1(::GlobalNamespace::NetPlayer*  p) ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_FusionVoice() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_FusionVoice() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner_k__BackingField() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get_cachedNetSceneObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get_cachedNetSceneObjects() ;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues* const& __cordl_internal_get_cachedPlayfabAuth() const;

constexpr ::Fusion::Photon::Realtime::AuthenticationValues*& __cordl_internal_get_cachedPlayfabAuth() ;

constexpr ::UnityW<::GlobalNamespace::FusionCallbackHandler> const& __cordl_internal_get_callbackHandler() const;

constexpr ::UnityW<::GlobalNamespace::FusionCallbackHandler>& __cordl_internal_get_callbackHandler() ;

constexpr ::UnityW<::GlobalNamespace::FusionInternalRPCs> const& __cordl_internal_get_internalRPCProvider() const;

constexpr ::UnityW<::GlobalNamespace::FusionInternalRPCs>& __cordl_internal_get_internalRPCProvider() ;

constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState const& __cordl_internal_get_internalState() const;

constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState& __cordl_internal_get_internalState() ;

constexpr bool const& __cordl_internal_get_isProcessingQueue() const;

constexpr bool& __cordl_internal_get_isProcessingQueue() ;

constexpr bool const& __cordl_internal_get_lastConnectAttempt_WasFull() const;

constexpr bool& __cordl_internal_get_lastConnectAttempt_WasFull() ;

constexpr ::UnityW<::GlobalNamespace::CustomObjectProvider> const& __cordl_internal_get_myObjectProvider() const;

constexpr ::UnityW<::GlobalNamespace::CustomObjectProvider>& __cordl_internal_get_myObjectProvider() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>* const& __cordl_internal_get_objectsThatNeedCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*& __cordl_internal_get_objectsThatNeedCallbacks() ;

constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>* const& __cordl_internal_get_playerPool() const;

constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*& __cordl_internal_get_playerPool() ;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler> const& __cordl_internal_get_regionCrawler() const;

constexpr ::UnityW<::GlobalNamespace::FusionRegionCrawler>& __cordl_internal_get_regionCrawler() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get_registrationQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get_registrationQueue() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_volatileNetObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_volatileNetObj() ;

constexpr void __cordl_internal_set_FusionVoice(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set__runner_k__BackingField(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_cachedNetSceneObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set_cachedPlayfabAuth(::Fusion::Photon::Realtime::AuthenticationValues*  value) ;

constexpr void __cordl_internal_set_callbackHandler(::UnityW<::GlobalNamespace::FusionCallbackHandler>  value) ;

constexpr void __cordl_internal_set_internalRPCProvider(::UnityW<::GlobalNamespace::FusionInternalRPCs>  value) ;

constexpr void __cordl_internal_set_internalState(::GlobalNamespace::NetworkSystemFusion_InternalState  value) ;

constexpr void __cordl_internal_set_isProcessingQueue(bool  value) ;

constexpr void __cordl_internal_set_lastConnectAttempt_WasFull(bool  value) ;

constexpr void __cordl_internal_set_myObjectProvider(::UnityW<::GlobalNamespace::CustomObjectProvider>  value) ;

constexpr void __cordl_internal_set_objectsThatNeedCallbacks(::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  value) ;

constexpr void __cordl_internal_set_playerPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*  value) ;

constexpr void __cordl_internal_set_regionCrawler(::UnityW<::GlobalNamespace::FusionRegionCrawler>  value) ;

constexpr void __cordl_internal_set_registrationQueue(::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set_volatileNetObj(::UnityW<::UnityEngine::GameObject>  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x56e078c, size 0x4, virtual false, abstract: false, final false
inline void __n__0() ;

/// @brief Method .ctor, addr 0x56e03a8, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentPhotonBackend, addr 0x56da1c8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_CurrentPhotonBackend() ;

/// @brief Method get_CurrentRegion, addr 0x56da000, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_CurrentRegion() ;

/// @brief Method get_GameModeString, addr 0x56d9f4c, size 0xb4, virtual true, abstract: false, final false
inline ::StringW get_GameModeString() ;

/// @brief Method get_InRoom, addr 0x56d96a4, size 0xb4, virtual true, abstract: false, final false
inline bool get_InRoom() ;

/// @brief Method get_IsMasterClient, addr 0x56da2d8, size 0x18, virtual true, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsOnline, addr 0x56d9618, size 0x8c, virtual true, abstract: false, final false
inline bool get_IsOnline() ;

/// @brief Method get_LocalPlayerID, addr 0x56da14c, size 0x7c, virtual true, abstract: false, final false
inline int32_t get_LocalPlayerID() ;

/// @brief Method get_MasterClient, addr 0x56da2f0, size 0x184, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_MasterClient() ;

/// @brief Method get_RoomName, addr 0x56d9758, size 0x28, virtual true, abstract: false, final false
inline ::StringW get_RoomName() ;

/// @brief Method get_RoomPlayerCount, addr 0x56da2ac, size 0x24, virtual true, abstract: false, final false
inline int32_t get_RoomPlayerCount() ;

/// @brief Method get_ServerTimestamp, addr 0x56da284, size 0x28, virtual true, abstract: false, final false
inline int32_t get_ServerTimestamp() ;

/// @brief Method get_SessionIsPrivate, addr 0x56da028, size 0x8c, virtual true, abstract: false, final false
inline bool get_SessionIsPrivate() ;

/// @brief Method get_SessionIsSubscription, addr 0x56da0b4, size 0x98, virtual true, abstract: false, final false
inline bool get_SessionIsSubscription() ;

/// @brief Method get_SimDeltaTime, addr 0x56da22c, size 0x18, virtual true, abstract: false, final false
inline float_t get_SimDeltaTime() ;

/// @brief Method get_SimTick, addr 0x56da244, size 0x28, virtual true, abstract: false, final false
inline int32_t get_SimTick() ;

/// @brief Method get_SimTime, addr 0x56da208, size 0x24, virtual true, abstract: false, final false
inline double_t get_SimTime() ;

/// @brief Method get_TickRate, addr 0x56da26c, size 0x18, virtual true, abstract: false, final false
inline int32_t get_TickRate() ;

/// @brief Method get_VoiceConnection, addr 0x56da2d0, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> get_VoiceConnection() ;

/// [CompilerGenerated]
/// @brief Method get_runner, addr 0x56d9608, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_runner() ;

/// [CompilerGenerated]
/// @brief Method set_runner, addr 0x56d9610, size 0x8, virtual false, abstract: false, final false
inline void set_runner(::Fusion::NetworkRunner*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemFusion(NetworkSystemFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemFusion(NetworkSystemFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1107};

/// @brief Field playerPropertiesPath offset 0xffffffff size 0x8
static constexpr ::ConstString  playerPropertiesPath{u"P_FusionProperties"};

/// [CompilerGenerated]
/// @brief Field <runner>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner_k__BackingField;

/// @brief Field internalState, offset: 0xd8, size: 0x4, def value: None
 ::GlobalNamespace::NetworkSystemFusion_InternalState  ___internalState;

/// @brief Field internalRPCProvider, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionInternalRPCs>  ___internalRPCProvider;

/// @brief Field callbackHandler, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionCallbackHandler>  ___callbackHandler;

/// @brief Field regionCrawler, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionRegionCrawler>  ___regionCrawler;

/// @brief Field volatileNetObj, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___volatileNetObj;

/// @brief Field cachedPlayfabAuth, offset: 0x100, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::AuthenticationValues*  ___cachedPlayfabAuth;

/// @brief Field lastConnectAttempt_WasFull, offset: 0x108, size: 0x1, def value: None
 bool  ___lastConnectAttempt_WasFull;

/// @brief Field FusionVoice, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___FusionVoice;

/// @brief Field myObjectProvider, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomObjectProvider>  ___myObjectProvider;

/// @brief Field playerPool, offset: 0x120, size: 0x8, def value: None
 ::GorillaTag::ObjectPool_1<::GlobalNamespace::FusionNetPlayer*>*  ___playerPool;

/// @brief Field cachedNetSceneObjects, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  ___cachedNetSceneObjects;

/// @brief Field objectsThatNeedCallbacks, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::INetworkRunnerCallbacks*>*  ___objectsThatNeedCallbacks;

/// @brief Field registrationQueue, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::Fusion::NetworkObject>>*  ___registrationQueue;

/// @brief Field isProcessingQueue, offset: 0x140, size: 0x1, def value: None
 bool  ___isProcessingQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ____runner_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___internalState) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___internalRPCProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___callbackHandler) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___regionCrawler) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___volatileNetObj) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___cachedPlayfabAuth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___lastConnectAttempt_WasFull) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___FusionVoice) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___myObjectProvider) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___playerPool) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___cachedNetSceneObjects) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___objectsThatNeedCallbacks) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___registrationQueue) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion, ___isProcessingQueue) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemFusion/<>c__DisplayClass76_0
class CORDL_TYPE NetworkSystemFusion___c__DisplayClass76_0 : public ::System::Object {
public:
// Declarations
/// @brief Field obj, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj, put=__cordl_internal_set_obj)) ::UnityW<::UnityEngine::GameObject>  obj;

static inline ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0* New_ctor() ;

/// @brief Method <AttachSceneObjects>b__1, addr 0x56e0e58, size 0x94, virtual false, abstract: false, final false
inline bool _AttachSceneObjects_b__1(::Fusion::NetworkObject*  o) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj() ;

constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x56e0b7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion___c__DisplayClass76_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c__DisplayClass76_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemFusion___c__DisplayClass76_0(NetworkSystemFusion___c__DisplayClass76_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c__DisplayClass76_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemFusion___c__DisplayClass76_0(NetworkSystemFusion___c__DisplayClass76_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1092};

/// @brief Field obj, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___obj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0, ___obj) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass76_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemFusion/<>c__DisplayClass63_0
class CORDL_TYPE NetworkSystemFusion___c__DisplayClass63_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callbackFinished, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_callbackFinished, put=__cordl_internal_set_callbackFinished)) bool  callbackFinished;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  data;

static inline ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0* New_ctor() ;

/// @brief Method <JoinFriendsRoom>b__0, addr 0x56e0cc0, size 0xfc, virtual false, abstract: false, final false
inline void _JoinFriendsRoom_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

/// @brief Method <JoinFriendsRoom>b__1, addr 0x56e0dbc, size 0x9c, virtual false, abstract: false, final false
inline void _JoinFriendsRoom_b__1(::PlayFab::PlayFabError*  error) ;

constexpr bool const& __cordl_internal_get_callbackFinished() const;

constexpr bool& __cordl_internal_get_callbackFinished() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& __cordl_internal_get_data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_callbackFinished(bool  value) ;

constexpr void __cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value) ;

/// @brief Method .ctor, addr 0x56e0cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion___c__DisplayClass63_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c__DisplayClass63_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemFusion___c__DisplayClass63_0(NetworkSystemFusion___c__DisplayClass63_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c__DisplayClass63_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemFusion___c__DisplayClass63_0(NetworkSystemFusion___c__DisplayClass63_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1091};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  ___data;

/// @brief Field callbackFinished, offset: 0x18, size: 0x1, def value: None
 bool  ___callbackFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0, ___callbackFinished) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSystemFusion/<>c
class CORDL_TYPE NetworkSystemFusion___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::NetworkSystemFusion___c*  __9;

/// @brief Field <>9__103_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__103_0, put=setStaticF___9__103_0)) ::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  __9__103_0;

static inline ::GlobalNamespace::NetworkSystemFusion___c* New_ctor() ;

/// @brief Method <UpdateNetPlayerList>b__103_0, addr 0x56e0c98, size 0x20, virtual false, abstract: false, final false
inline bool _UpdateNetPlayerList_b__103_0(::GlobalNamespace::NetPlayer*  p) ;

/// @brief Method .ctor, addr 0x56e0c90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::NetworkSystemFusion___c* getStaticF___9() ;

static inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__103_0() ;

static inline void setStaticF___9(::GlobalNamespace::NetworkSystemFusion___c*  value) ;

static inline void setStaticF___9__103_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSystemFusion___c(NetworkSystemFusion___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSystemFusion___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSystemFusion___c(NetworkSystemFusion___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
