#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaNetworking/zzzz__JoinType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonNetworkController)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GorillaGeoHideShowTrigger;
}
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
struct PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69;
}
namespace GlobalNamespace {
struct PhotonNetworkController__AttemptToJoinRankedPublicRoomAsync_d__71;
}
namespace GlobalNamespace {
struct PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81;
}
namespace GlobalNamespace {
struct PhotonNetworkController__SendPartyFollowCommands_d__72;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace GorillaNetworking {
struct JoinType;
}
namespace GorillaNetworking {
class PhotonNetworkController__DisableOnStart_d__64;
}
namespace GorillaNetworking {
class PlayFabAuthenticator;
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
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
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
// Forward declare root types
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace GorillaNetworking {
class PhotonNetworkController__DisableOnStart_d__64;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::PhotonNetworkController*);
MARK_REF_T(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PhotonNetworkController*, "GorillaNetworking", "PhotonNetworkController");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64*, "GorillaNetworking", "PhotonNetworkController/<DisableOnStart>d__64");
// Dependencies GTZone, GorillaNetworking.JoinType, System.DateTime, System.Nullable`1<T>, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.SkinnedMeshRenderer
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PhotonNetworkController
class CORDL_TYPE PhotonNetworkController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AttemptToJoinPublicRoomAsync_d__69 = ::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69;

using _AttemptToJoinRankedPublicRoomAsync_d__71 = ::GlobalNamespace::PhotonNetworkController__AttemptToJoinRankedPublicRoomAsync_d__71;

using _AttemptToJoinSpecificRoomAsync_d__81 = ::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81;

using _SendPartyFollowCommands_d__72 = ::GlobalNamespace::PhotonNetworkController__SendPartyFollowCommands_d__72;

using _DisableOnStart_d__64 = ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64;

 __declspec(property(get=get_CurrentRoomZone)) ::GlobalNamespace::GTZone  CurrentRoomZone;

 __declspec(property(get=get_FriendIDList, put=set_FriendIDList)) ::System::Collections::Generic::List_1<::StringW>*  FriendIDList;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  Instance;

/// @brief Field LastRoomToJoin, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastRoomToJoin, put=__cordl_internal_set_LastRoomToJoin)) ::StringW  LastRoomToJoin;

 __declspec(property(get=get_StartGeoTrigger, put=set_StartGeoTrigger)) ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  StartGeoTrigger;

 __declspec(property(get=get_StartLevel, put=set_StartLevel)) ::StringW  StartLevel;

 __declspec(property(get=get_StartZone, put=set_StartZone)) ::GlobalNamespace::GTZone  StartZone;

/// @brief Field allJoinTriggers, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allJoinTriggers, put=__cordl_internal_set_allJoinTriggers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  allJoinTriggers;

/// @brief Field attemptingToConnect, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_attemptingToConnect, put=__cordl_internal_set_attemptingToConnect)) bool  attemptingToConnect;

/// @brief Field autoJoinGameMode, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoJoinGameMode, put=__cordl_internal_set_autoJoinGameMode)) ::StringW  autoJoinGameMode;

/// @brief Field autoJoinRoom, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoJoinRoom, put=__cordl_internal_set_autoJoinRoom)) ::StringW  autoJoinRoom;

/// @brief Field autoJoinRoomCap, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoJoinRoomCap, put=__cordl_internal_set_autoJoinRoomCap)) int32_t  autoJoinRoomCap;

/// @brief Field currentGameType, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGameType, put=__cordl_internal_set_currentGameType)) ::StringW  currentGameType;

/// @brief Field currentJoinTrigger, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentJoinTrigger, put=__cordl_internal_set_currentJoinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  currentJoinTrigger;

/// @brief Field currentJoinType, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentJoinType, put=__cordl_internal_set_currentJoinType)) ::GorillaNetworking::JoinType  currentJoinType;

/// @brief Field currentRegionIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRegionIndex, put=__cordl_internal_set_currentRegionIndex)) int32_t  currentRegionIndex;

/// @brief Field customRoomID, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_customRoomID, put=__cordl_internal_set_customRoomID)) ::StringW  customRoomID;

/// @brief Field deferredJoin, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_deferredJoin, put=__cordl_internal_set_deferredJoin)) bool  deferredJoin;

/// @brief Field disableAFKKick, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableAFKKick, put=__cordl_internal_set_disableAFKKick)) bool  disableAFKKick;

/// @brief Field disableOnStartup, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableOnStartup, put=__cordl_internal_set_disableOnStartup)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  disableOnStartup;

/// @brief Field disconnectTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_disconnectTime, put=__cordl_internal_set_disconnectTime)) float_t  disconnectTime;

/// @brief Field enableOnStartup, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableOnStartup, put=__cordl_internal_set_enableOnStartup)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableOnStartup;

/// @brief Field friendIDList, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendIDList, put=__cordl_internal_set_friendIDList)) ::System::Collections::Generic::List_1<::StringW>*  friendIDList;

/// @brief Field friendToFollow, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendToFollow, put=__cordl_internal_set_friendToFollow)) ::StringW  friendToFollow;

/// @brief Field headLeftHandDistance, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_headLeftHandDistance, put=__cordl_internal_set_headLeftHandDistance)) float_t  headLeftHandDistance;

/// @brief Field headQuat, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_headQuat, put=__cordl_internal_set_headQuat)) ::UnityEngine::Quaternion  headQuat;

/// @brief Field headRightHandDistance, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_headRightHandDistance, put=__cordl_internal_set_headRightHandDistance)) float_t  headRightHandDistance;

/// @brief Field incrementCounter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_incrementCounter, put=__cordl_internal_set_incrementCounter)) int32_t  incrementCounter;

/// @brief Field initialGameMode, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialGameMode, put=__cordl_internal_set_initialGameMode)) ::StringW  initialGameMode;

/// @brief Field isPrivate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPrivate, put=__cordl_internal_set_isPrivate)) bool  isPrivate;

/// @brief Field joinNextAttempt, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_joinNextAttempt, put=__cordl_internal_set_joinNextAttempt)) int32_t  joinNextAttempt;

/// @brief Field keyStr, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyStr, put=__cordl_internal_set_keyStr)) ::StringW  keyStr;

/// @brief Field keyToFollow, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyToFollow, put=__cordl_internal_set_keyToFollow)) ::StringW  keyToFollow;

/// @brief Field lastHeadLeftHandDistance, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeadLeftHandDistance, put=__cordl_internal_set_lastHeadLeftHandDistance)) float_t  lastHeadLeftHandDistance;

/// @brief Field lastHeadQuat, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastHeadQuat, put=__cordl_internal_set_lastHeadQuat)) ::UnityEngine::Quaternion  lastHeadQuat;

/// @brief Field lastHeadRightHandDistance, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeadRightHandDistance, put=__cordl_internal_set_lastHeadRightHandDistance)) float_t  lastHeadRightHandDistance;

/// @brief Field maxNextAttempts, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNextAttempts, put=__cordl_internal_set_maxNextAttempts)) int32_t  maxNextAttempts;

/// @brief Field offlineVRRig, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineVRRig, put=__cordl_internal_set_offlineVRRig)) ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  offlineVRRig;

/// @brief Field partyJoinDeferredUntilTimestamp, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_partyJoinDeferredUntilTimestamp, put=__cordl_internal_set_partyJoinDeferredUntilTimestamp)) float_t  partyJoinDeferredUntilTimestamp;

/// @brief Field pauseTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_pauseTime, put=__cordl_internal_set_pauseTime)) float_t  pauseTime;

/// @brief Field photonVoiceObjectPrefab, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonVoiceObjectPrefab, put=__cordl_internal_set_photonVoiceObjectPrefab)) ::UnityW<::UnityEngine::GameObject>  photonVoiceObjectPrefab;

/// @brief Field pingInRegion, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingInRegion, put=__cordl_internal_set_pingInRegion)) ::ArrayW<int32_t>  pingInRegion;

/// @brief Field platformTag, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformTag, put=__cordl_internal_set_platformTag)) ::StringW  platformTag;

/// @brief Field playFabAuthenticator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabAuthenticator, put=__cordl_internal_set_playFabAuthenticator)) ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  playFabAuthenticator;

/// @brief Field playerCosmeticsLookup, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCosmeticsLookup, put=__cordl_internal_set_playerCosmeticsLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  playerCosmeticsLookup;

/// @brief Field playerOffset, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerOffset, put=__cordl_internal_set_playerOffset)) ::UnityW<::UnityEngine::GameObject>  playerOffset;

/// @brief Field playersInRegion, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInRegion, put=__cordl_internal_set_playersInRegion)) ::ArrayW<int32_t>  playersInRegion;

/// @brief Field privateTrigger, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateTrigger, put=__cordl_internal_set_privateTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  privateTrigger;

/// @brief Field roomCosmeticsInitialized, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_roomCosmeticsInitialized, put=__cordl_internal_set_roomCosmeticsInitialized)) bool  roomCosmeticsInitialized;

/// @brief Field roomToJoin, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomToJoin, put=__cordl_internal_set_roomToJoin)) ::StringW  roomToJoin;

/// @brief Field serverRegions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverRegions, put=__cordl_internal_set_serverRegions)) ::ArrayW<::StringW>  serverRegions;

/// @brief Field shuffler, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuffler, put=__cordl_internal_set_shuffler)) ::StringW  shuffler;

/// @brief Field startGeoTrigger, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_startGeoTrigger, put=__cordl_internal_set_startGeoTrigger)) ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  startGeoTrigger;

/// @brief Field startLevel, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_startLevel, put=__cordl_internal_set_startLevel)) ::StringW  startLevel;

/// @brief Field startZone, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_startZone, put=__cordl_internal_set_startZone)) ::GlobalNamespace::GTZone  startZone;

/// @brief Field testPlayerPrefab, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_testPlayerPrefab, put=__cordl_internal_set_testPlayerPrefab)) ::UnityW<::Fusion::NetworkObject>  testPlayerPrefab;

/// @brief Field timeWhenApplicationPaused, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get_timeWhenApplicationPaused, put=__cordl_internal_set_timeWhenApplicationPaused)) ::System::Nullable_1<::System::DateTime>  timeWhenApplicationPaused;

/// @brief Field updatedName, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedName, put=__cordl_internal_set_updatedName)) bool  updatedName;

/// @brief Method AttemptToAutoJoinRoomCallback, addr 0x5c91a2c, size 0x14, virtual false, abstract: false, final false
inline void AttemptToAutoJoinRoomCallback(::GlobalNamespace::NetJoinResult  obj) ;

/// @brief Method AttemptToAutoJoinSpecificRoom, addr 0x5c916c4, size 0xa8, virtual false, abstract: false, final false
inline void AttemptToAutoJoinSpecificRoom(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType) ;

/// @brief Method AttemptToFollowIntoPub, addr 0x5c92e88, size 0x140, virtual false, abstract: false, final false
inline void AttemptToFollowIntoPub(::StringW  userIDToFollow, int32_t  actorNumberToFollow, ::StringW  newKeyStr, ::StringW  shufflerStr, ::GorillaNetworking::JoinType  joinType) ;

/// @brief Method AttemptToJoinPublicRoom, addr 0x5c8b954, size 0x4, virtual false, abstract: false, final false
inline void AttemptToJoinPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, bool  filterSubscribed) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.PhotonNetworkController::<AttemptToJoinPublicRoomAsync>d__69))]
/// @brief Method AttemptToJoinPublicRoomAsync, addr 0x5c91774, size 0xf4, virtual false, abstract: false, final false
inline void AttemptToJoinPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, bool  filterSubscribed) ;

/// @brief Method AttemptToJoinRankedPublicRoom, addr 0x5c8c15c, size 0xe0, virtual false, abstract: false, final false
inline void AttemptToJoinRankedPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.PhotonNetworkController::<AttemptToJoinRankedPublicRoomAsync>d__71))]
/// @brief Method AttemptToJoinRankedPublicRoomAsync, addr 0x5c91868, size 0x100, virtual false, abstract: false, final false
inline void AttemptToJoinRankedPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger*  triggeredTrigger, ::StringW  mmrTier, ::StringW  platform, ::GorillaNetworking::JoinType  roomJoinType) ;

/// @brief Method AttemptToJoinSpecificRoom, addr 0x5c9176c, size 0x8, virtual false, abstract: false, final false
inline void AttemptToJoinSpecificRoom(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.PhotonNetworkController::<AttemptToJoinSpecificRoomAsync>d__81))]
/// @brief Method AttemptToJoinSpecificRoomAsync, addr 0x5c91a40, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AttemptToJoinSpecificRoomAsync(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback) ;

/// @brief Method AttemptToJoinSpecificRoomWithCallback, addr 0x5c91b5c, size 0x4, virtual false, abstract: false, final false
inline void AttemptToJoinSpecificRoomWithCallback(::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback) ;

/// @brief Method Awake, addr 0x5c90b0c, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearDeferredJoin, addr 0x5c8b958, size 0xc, virtual false, abstract: false, final false
inline void ClearDeferredJoin() ;

/// @brief Method CurrentState, addr 0x5c9335c, size 0x138, virtual false, abstract: false, final false
inline ::StringW CurrentState() ;

/// @brief Method DeferJoining, addr 0x5c8b91c, size 0x38, virtual false, abstract: false, final false
inline void DeferJoining(float_t  duration) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PhotonNetworkController::<DisableOnStart>d__64))]
/// @brief Method DisableOnStart, addr 0x5c90e70, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DisableOnStart() ;

/// @brief Method DisconnectCleanup, addr 0x5c91b60, size 0x410, virtual false, abstract: false, final false
inline void DisconnectCleanup() ;

/// @brief Method FixedUpdate, addr 0x5c90f04, size 0x7c0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetRegionWithLowestPing, addr 0x5c9318c, size 0x178, virtual false, abstract: false, final false
inline ::StringW GetRegionWithLowestPing() ;

static inline ::GorillaNetworking::PhotonNetworkController* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x5c93734, size 0x138, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnApplicationPause, addr 0x5c93494, size 0x2a0, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnApplicationQuit, addr 0x5c92fcc, size 0xac, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDisconnected, addr 0x5c92fc8, size 0x4, virtual false, abstract: false, final false
inline void OnDisconnected() ;

/// @brief Method OnJoinedRoom, addr 0x5c9209c, size 0x894, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method ParseZoneFromGameMode, addr 0x5c92930, size 0x358, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone ParseZoneFromGameMode(::StringW  gameMode) ;

/// @brief Method RandomRoomName, addr 0x5c9308c, size 0x100, virtual false, abstract: false, final false
inline ::StringW RandomRoomName() ;

/// @brief Method RegisterJoinTrigger, addr 0x5c89d50, size 0xac, virtual false, abstract: false, final false
inline void RegisterJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  trigger) ;

/// @brief Method ReturnRoomName, addr 0x5c93078, size 0x14, virtual false, abstract: false, final false
inline ::StringW ReturnRoomName() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.PhotonNetworkController::<SendPartyFollowCommands>d__72))]
/// @brief Method SendPartyFollowCommands, addr 0x5c91968, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendPartyFollowCommands() ;

/// @brief Method Start, addr 0x5c90c88, size 0x1e8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TotalUsers, addr 0x5c93304, size 0x58, virtual false, abstract: false, final false
inline int32_t TotalUsers() ;

/// @brief Method UpdateCurrentJoinTrigger, addr 0x5c92c88, size 0x200, virtual false, abstract: false, final false
inline void UpdateCurrentJoinTrigger() ;

/// @brief Method UpdateTriggerScreens, addr 0x5c91f70, size 0x12c, virtual false, abstract: false, final false
inline void UpdateTriggerScreens() ;

constexpr ::StringW const& __cordl_internal_get_LastRoomToJoin() const;

constexpr ::StringW& __cordl_internal_get_LastRoomToJoin() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>* const& __cordl_internal_get_allJoinTriggers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*& __cordl_internal_get_allJoinTriggers() ;

constexpr bool const& __cordl_internal_get_attemptingToConnect() const;

constexpr bool& __cordl_internal_get_attemptingToConnect() ;

constexpr ::StringW const& __cordl_internal_get_autoJoinGameMode() const;

constexpr ::StringW& __cordl_internal_get_autoJoinGameMode() ;

constexpr ::StringW const& __cordl_internal_get_autoJoinRoom() const;

constexpr ::StringW& __cordl_internal_get_autoJoinRoom() ;

constexpr int32_t const& __cordl_internal_get_autoJoinRoomCap() const;

constexpr int32_t& __cordl_internal_get_autoJoinRoomCap() ;

constexpr ::StringW const& __cordl_internal_get_currentGameType() const;

constexpr ::StringW& __cordl_internal_get_currentGameType() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_currentJoinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_currentJoinTrigger() ;

constexpr ::GorillaNetworking::JoinType const& __cordl_internal_get_currentJoinType() const;

constexpr ::GorillaNetworking::JoinType& __cordl_internal_get_currentJoinType() ;

constexpr int32_t const& __cordl_internal_get_currentRegionIndex() const;

constexpr int32_t& __cordl_internal_get_currentRegionIndex() ;

constexpr ::StringW const& __cordl_internal_get_customRoomID() const;

constexpr ::StringW& __cordl_internal_get_customRoomID() ;

constexpr bool const& __cordl_internal_get_deferredJoin() const;

constexpr bool& __cordl_internal_get_deferredJoin() ;

constexpr bool const& __cordl_internal_get_disableAFKKick() const;

constexpr bool& __cordl_internal_get_disableAFKKick() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_disableOnStartup() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_disableOnStartup() ;

constexpr float_t const& __cordl_internal_get_disconnectTime() const;

constexpr float_t& __cordl_internal_get_disconnectTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableOnStartup() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableOnStartup() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_friendIDList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_friendIDList() ;

constexpr ::StringW const& __cordl_internal_get_friendToFollow() const;

constexpr ::StringW& __cordl_internal_get_friendToFollow() ;

constexpr float_t const& __cordl_internal_get_headLeftHandDistance() const;

constexpr float_t& __cordl_internal_get_headLeftHandDistance() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headQuat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headQuat() ;

constexpr float_t const& __cordl_internal_get_headRightHandDistance() const;

constexpr float_t& __cordl_internal_get_headRightHandDistance() ;

constexpr int32_t const& __cordl_internal_get_incrementCounter() const;

constexpr int32_t& __cordl_internal_get_incrementCounter() ;

constexpr ::StringW const& __cordl_internal_get_initialGameMode() const;

constexpr ::StringW& __cordl_internal_get_initialGameMode() ;

constexpr bool const& __cordl_internal_get_isPrivate() const;

constexpr bool& __cordl_internal_get_isPrivate() ;

constexpr int32_t const& __cordl_internal_get_joinNextAttempt() const;

constexpr int32_t& __cordl_internal_get_joinNextAttempt() ;

constexpr ::StringW const& __cordl_internal_get_keyStr() const;

constexpr ::StringW& __cordl_internal_get_keyStr() ;

constexpr ::StringW const& __cordl_internal_get_keyToFollow() const;

constexpr ::StringW& __cordl_internal_get_keyToFollow() ;

constexpr float_t const& __cordl_internal_get_lastHeadLeftHandDistance() const;

constexpr float_t& __cordl_internal_get_lastHeadLeftHandDistance() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastHeadQuat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastHeadQuat() ;

constexpr float_t const& __cordl_internal_get_lastHeadRightHandDistance() const;

constexpr float_t& __cordl_internal_get_lastHeadRightHandDistance() ;

constexpr int32_t const& __cordl_internal_get_maxNextAttempts() const;

constexpr int32_t& __cordl_internal_get_maxNextAttempts() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>> const& __cordl_internal_get_offlineVRRig() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>& __cordl_internal_get_offlineVRRig() ;

constexpr float_t const& __cordl_internal_get_partyJoinDeferredUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_partyJoinDeferredUntilTimestamp() ;

constexpr float_t const& __cordl_internal_get_pauseTime() const;

constexpr float_t& __cordl_internal_get_pauseTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_photonVoiceObjectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_photonVoiceObjectPrefab() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_pingInRegion() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_pingInRegion() ;

constexpr ::StringW const& __cordl_internal_get_platformTag() const;

constexpr ::StringW& __cordl_internal_get_platformTag() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator> const& __cordl_internal_get_playFabAuthenticator() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabAuthenticator>& __cordl_internal_get_playFabAuthenticator() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& __cordl_internal_get_playerCosmeticsLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& __cordl_internal_get_playerCosmeticsLookup() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerOffset() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerOffset() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_playersInRegion() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_playersInRegion() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_privateTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_privateTrigger() ;

constexpr bool const& __cordl_internal_get_roomCosmeticsInitialized() const;

constexpr bool& __cordl_internal_get_roomCosmeticsInitialized() ;

constexpr ::StringW const& __cordl_internal_get_roomToJoin() const;

constexpr ::StringW& __cordl_internal_get_roomToJoin() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_serverRegions() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_serverRegions() ;

constexpr ::StringW const& __cordl_internal_get_shuffler() const;

constexpr ::StringW& __cordl_internal_get_shuffler() ;

constexpr ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger> const& __cordl_internal_get_startGeoTrigger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>& __cordl_internal_get_startGeoTrigger() ;

constexpr ::StringW const& __cordl_internal_get_startLevel() const;

constexpr ::StringW& __cordl_internal_get_startLevel() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_startZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_startZone() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_testPlayerPrefab() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_testPlayerPrefab() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_timeWhenApplicationPaused() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_timeWhenApplicationPaused() ;

constexpr bool const& __cordl_internal_get_updatedName() const;

constexpr bool& __cordl_internal_get_updatedName() ;

constexpr void __cordl_internal_set_LastRoomToJoin(::StringW  value) ;

constexpr void __cordl_internal_set_allJoinTriggers(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  value) ;

constexpr void __cordl_internal_set_attemptingToConnect(bool  value) ;

constexpr void __cordl_internal_set_autoJoinGameMode(::StringW  value) ;

constexpr void __cordl_internal_set_autoJoinRoom(::StringW  value) ;

constexpr void __cordl_internal_set_autoJoinRoomCap(int32_t  value) ;

constexpr void __cordl_internal_set_currentGameType(::StringW  value) ;

constexpr void __cordl_internal_set_currentJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_currentJoinType(::GorillaNetworking::JoinType  value) ;

constexpr void __cordl_internal_set_currentRegionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_customRoomID(::StringW  value) ;

constexpr void __cordl_internal_set_deferredJoin(bool  value) ;

constexpr void __cordl_internal_set_disableAFKKick(bool  value) ;

constexpr void __cordl_internal_set_disableOnStartup(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_disconnectTime(float_t  value) ;

constexpr void __cordl_internal_set_enableOnStartup(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_friendIDList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_friendToFollow(::StringW  value) ;

constexpr void __cordl_internal_set_headLeftHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_headQuat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_headRightHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_incrementCounter(int32_t  value) ;

constexpr void __cordl_internal_set_initialGameMode(::StringW  value) ;

constexpr void __cordl_internal_set_isPrivate(bool  value) ;

constexpr void __cordl_internal_set_joinNextAttempt(int32_t  value) ;

constexpr void __cordl_internal_set_keyStr(::StringW  value) ;

constexpr void __cordl_internal_set_keyToFollow(::StringW  value) ;

constexpr void __cordl_internal_set_lastHeadLeftHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_lastHeadQuat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastHeadRightHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxNextAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_offlineVRRig(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  value) ;

constexpr void __cordl_internal_set_partyJoinDeferredUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_pauseTime(float_t  value) ;

constexpr void __cordl_internal_set_photonVoiceObjectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pingInRegion(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_platformTag(::StringW  value) ;

constexpr void __cordl_internal_set_playFabAuthenticator(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value) ;

constexpr void __cordl_internal_set_playerCosmeticsLookup(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_playerOffset(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playersInRegion(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_privateTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_roomCosmeticsInitialized(bool  value) ;

constexpr void __cordl_internal_set_roomToJoin(::StringW  value) ;

constexpr void __cordl_internal_set_serverRegions(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_shuffler(::StringW  value) ;

constexpr void __cordl_internal_set_startGeoTrigger(::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  value) ;

constexpr void __cordl_internal_set_startLevel(::StringW  value) ;

constexpr void __cordl_internal_set_startZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_testPlayerPrefab(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set_timeWhenApplicationPaused(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_updatedName(bool  value) ;

/// @brief Method .ctor, addr 0x5c9386c, size 0x1b8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::PhotonNetworkController> getStaticF_Instance() ;

/// @brief Method get_CurrentRoomZone, addr 0x5c90a74, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_CurrentRoomZone() ;

/// @brief Method get_FriendIDList, addr 0x5c90a3c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_FriendIDList() ;

/// @brief Method get_StartGeoTrigger, addr 0x5c90af4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger> get_StartGeoTrigger() ;

/// @brief Method get_StartLevel, addr 0x5c90a4c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StartLevel() ;

/// @brief Method get_StartZone, addr 0x5c90a64, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_StartZone() ;

static inline void setStaticF_Instance(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

/// @brief Method set_FriendIDList, addr 0x5c90a44, size 0x8, virtual false, abstract: false, final false
inline void set_FriendIDList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method set_StartGeoTrigger, addr 0x5c90afc, size 0x10, virtual false, abstract: false, final false
inline void set_StartGeoTrigger(::GlobalNamespace::GorillaGeoHideShowTrigger*  value) ;

/// @brief Method set_StartLevel, addr 0x5c90a54, size 0x10, virtual false, abstract: false, final false
inline void set_StartLevel(::StringW  value) ;

/// @brief Method set_StartZone, addr 0x5c90a6c, size 0x8, virtual false, abstract: false, final false
inline void set_StartZone(::GlobalNamespace::GTZone  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetworkController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetworkController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonNetworkController(PhotonNetworkController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetworkController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonNetworkController(PhotonNetworkController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4373};

/// @brief Field incrementCounter, offset: 0x20, size: 0x4, def value: None
 int32_t  ___incrementCounter;

/// @brief Field playFabAuthenticator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabAuthenticator>  ___playFabAuthenticator;

/// @brief Field serverRegions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___serverRegions;

/// @brief Field isPrivate, offset: 0x38, size: 0x1, def value: None
 bool  ___isPrivate;

/// @brief Field customRoomID, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___customRoomID;

/// @brief Field playerOffset, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerOffset;

/// @brief Field offlineVRRig, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  ___offlineVRRig;

/// @brief Field attemptingToConnect, offset: 0x58, size: 0x1, def value: None
 bool  ___attemptingToConnect;

/// @brief Field currentRegionIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___currentRegionIndex;

/// @brief Field currentGameType, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___currentGameType;

/// @brief Field roomCosmeticsInitialized, offset: 0x68, size: 0x1, def value: None
 bool  ___roomCosmeticsInitialized;

/// @brief Field photonVoiceObjectPrefab, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___photonVoiceObjectPrefab;

/// @brief Field playerCosmeticsLookup, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  ___playerCosmeticsLookup;

/// @brief Field lastHeadRightHandDistance, offset: 0x80, size: 0x4, def value: None
 float_t  ___lastHeadRightHandDistance;

/// @brief Field lastHeadLeftHandDistance, offset: 0x84, size: 0x4, def value: None
 float_t  ___lastHeadLeftHandDistance;

/// @brief Field pauseTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___pauseTime;

/// @brief Field disconnectTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___disconnectTime;

/// @brief Field disableAFKKick, offset: 0x90, size: 0x1, def value: None
 bool  ___disableAFKKick;

/// @brief Field headRightHandDistance, offset: 0x94, size: 0x4, def value: None
 float_t  ___headRightHandDistance;

/// @brief Field headLeftHandDistance, offset: 0x98, size: 0x4, def value: None
 float_t  ___headLeftHandDistance;

/// @brief Field headQuat, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___headQuat;

/// @brief Field lastHeadQuat, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastHeadQuat;

/// @brief Field disableOnStartup, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___disableOnStartup;

/// @brief Field enableOnStartup, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableOnStartup;

/// @brief Field updatedName, offset: 0xd0, size: 0x1, def value: None
 bool  ___updatedName;

/// @brief Field playersInRegion, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___playersInRegion;

/// @brief Field pingInRegion, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___pingInRegion;

/// @brief Field friendIDList, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___friendIDList;

/// @brief Field currentJoinType, offset: 0xf0, size: 0x4, def value: None
 ::GorillaNetworking::JoinType  ___currentJoinType;

/// @brief Field friendToFollow, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___friendToFollow;

/// @brief Field keyToFollow, offset: 0x100, size: 0x8, def value: None
 ::StringW  ___keyToFollow;

/// @brief Field shuffler, offset: 0x108, size: 0x8, def value: None
 ::StringW  ___shuffler;

/// @brief Field keyStr, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___keyStr;

/// @brief Field platformTag, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___platformTag;

/// @brief Field startLevel, offset: 0x120, size: 0x8, def value: None
 ::StringW  ___startLevel;

/// [SerializeField]
/// @brief Field startZone, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___startZone;

/// @brief Field startGeoTrigger, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  ___startGeoTrigger;

/// @brief Field privateTrigger, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___privateTrigger;

/// @brief Field initialGameMode, offset: 0x140, size: 0x8, def value: None
 ::StringW  ___initialGameMode;

/// @brief Field currentJoinTrigger, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___currentJoinTrigger;

/// @brief Field autoJoinRoom, offset: 0x150, size: 0x8, def value: None
 ::StringW  ___autoJoinRoom;

/// @brief Field autoJoinRoomCap, offset: 0x158, size: 0x4, def value: None
 int32_t  ___autoJoinRoomCap;

/// @brief Field autoJoinGameMode, offset: 0x160, size: 0x8, def value: None
 ::StringW  ___autoJoinGameMode;

/// @brief Field deferredJoin, offset: 0x168, size: 0x1, def value: None
 bool  ___deferredJoin;

/// @brief Field partyJoinDeferredUntilTimestamp, offset: 0x16c, size: 0x4, def value: None
 float_t  ___partyJoinDeferredUntilTimestamp;

/// @brief Field timeWhenApplicationPaused, offset: 0x170, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___timeWhenApplicationPaused;

/// [NetworkPrefab]
/// [SerializeField]
/// @brief Field testPlayerPrefab, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___testPlayerPrefab;

/// @brief Field roomToJoin, offset: 0x188, size: 0x8, def value: None
 ::StringW  ___roomToJoin;

/// @brief Field joinNextAttempt, offset: 0x190, size: 0x4, def value: None
 int32_t  ___joinNextAttempt;

/// @brief Field maxNextAttempts, offset: 0x194, size: 0x4, def value: None
 int32_t  ___maxNextAttempts;

/// @brief Field LastRoomToJoin, offset: 0x198, size: 0x8, def value: None
 ::StringW  ___LastRoomToJoin;

/// @brief Field allJoinTriggers, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>*  ___allJoinTriggers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___incrementCounter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___playFabAuthenticator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___serverRegions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___isPrivate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___customRoomID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___playerOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___offlineVRRig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___attemptingToConnect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___currentRegionIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___currentGameType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___roomCosmeticsInitialized) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___photonVoiceObjectPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___playerCosmeticsLookup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___lastHeadRightHandDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___lastHeadLeftHandDistance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___pauseTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___disconnectTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___disableAFKKick) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___headRightHandDistance) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___headLeftHandDistance) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___headQuat) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___lastHeadQuat) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___disableOnStartup) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___enableOnStartup) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___updatedName) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___playersInRegion) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___pingInRegion) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___friendIDList) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___currentJoinType) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___friendToFollow) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___keyToFollow) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___shuffler) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___keyStr) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___platformTag) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___startLevel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___startZone) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___startGeoTrigger) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___privateTrigger) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___initialGameMode) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___currentJoinTrigger) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___autoJoinRoom) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___autoJoinRoomCap) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___autoJoinGameMode) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___deferredJoin) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___partyJoinDeferredUntilTimestamp) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___timeWhenApplicationPaused) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___testPlayerPrefab) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___roomToJoin) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___joinNextAttempt) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___maxNextAttempts) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___LastRoomToJoin) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController, ___allJoinTriggers) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PhotonNetworkController) == 0x1a8, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PhotonNetworkController/<DisableOnStart>d__64
class CORDL_TYPE PhotonNetworkController__DisableOnStart_d__64 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c95a84, size 0x38, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c95abc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c95ac4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c95afc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c95a80, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c90edc, size 0x28, virtual false, abstract: false, final false
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
constexpr PhotonNetworkController__DisableOnStart_d__64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetworkController__DisableOnStart_d__64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonNetworkController__DisableOnStart_d__64(PhotonNetworkController__DisableOnStart_d__64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetworkController__DisableOnStart_d__64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonNetworkController__DisableOnStart_d__64(PhotonNetworkController__DisableOnStart_d__64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4371};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PhotonNetworkController__DisableOnStart_d__64) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
