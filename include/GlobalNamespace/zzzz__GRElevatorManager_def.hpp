#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRElevatorManager_DestinationVideo_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorSystemState_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevatorManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
namespace GlobalNamespace {
struct GRElevatorManager_DestinationVideo;
}
namespace GlobalNamespace {
struct GRElevatorManager_ElevatorLocation;
}
namespace GlobalNamespace {
struct GRElevatorManager_ElevatorSystemState;
}
namespace GlobalNamespace {
class GRElevatorManager_GRShuttleGroup;
}
namespace GlobalNamespace {
struct GRElevatorManager_RPC;
}
namespace GlobalNamespace {
class GRElevatorManager__TeleportDelay_d__68;
}
namespace GlobalNamespace {
struct GRElevator_ButtonType;
}
namespace GlobalNamespace {
class GRElevator;
}
namespace GlobalNamespace {
struct GRShuttleGroupLoc;
}
namespace GlobalNamespace {
class GRShuttle;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
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
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GRElevatorManager;
}
namespace GlobalNamespace {
class GRElevatorManager_GRShuttleGroup;
}
namespace GlobalNamespace {
class GRElevatorManager__TeleportDelay_d__68;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRElevatorManager*);
MARK_REF_T(::GlobalNamespace::GRElevatorManager_GRShuttleGroup*);
MARK_REF_T(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager*, "", "GRElevatorManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager_GRShuttleGroup*, "", "GRElevatorManager/GRShuttleGroup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*, "", "GRElevatorManager/<TeleportDelay>d__68");
// [NetworkBehaviourWeaved(0)]
// Dependencies GRElevatorManager::DestinationVideo, GRElevatorManager::ElevatorLocation, GRElevatorManager::ElevatorSystemState, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRElevatorManager
class CORDL_TYPE GRElevatorManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using DestinationVideo = ::GlobalNamespace::GRElevatorManager_DestinationVideo;

using ElevatorLocation = ::GlobalNamespace::GRElevatorManager_ElevatorLocation;

using ElevatorSystemState = ::GlobalNamespace::GRElevatorManager_ElevatorSystemState;

using GRShuttleGroup = ::GlobalNamespace::GRElevatorManager_GRShuttleGroup;

using RPC = ::GlobalNamespace::GRElevatorManager_RPC;

using _TeleportDelay_d__68 = ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68;

/// @brief Field DestinationVideoPlayer, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestinationVideoPlayer, put=__cordl_internal_set_DestinationVideoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer>  DestinationVideoPlayer;

/// @brief Field DestinationVideoPlayerAudioSource, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestinationVideoPlayerAudioSource, put=__cordl_internal_set_DestinationVideoPlayerAudioSource)) ::UnityW<::UnityEngine::AudioSource>  DestinationVideoPlayerAudioSource;

/// @brief Field DestinationVideos, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestinationVideos, put=__cordl_internal_set_DestinationVideos)) ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>  DestinationVideos;

 __declspec(property(get=get_InPrivateRoom)) bool  InPrivateRoom;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GRElevatorManager>  _instance;

/// @brief Field actorIds, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorIds, put=__cordl_internal_set_actorIds)) ::System::Collections::Generic::List_1<int32_t>*  actorIds;

/// @brief Field allElevators, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allElevators, put=__cordl_internal_set_allElevators)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*  allElevators;

/// @brief Field allShuttles, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allShuttles, put=__cordl_internal_set_allShuttles)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  allShuttles;

/// @brief Field cosmeticsInitialized, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_cosmeticsInitialized, put=__cordl_internal_set_cosmeticsInitialized)) bool  cosmeticsInitialized;

/// @brief Field currentLocation, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLocation, put=__cordl_internal_set_currentLocation)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  currentLocation;

/// @brief Field currentState, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  currentState;

/// @brief Field destination, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination;

/// @brief Field destinationButtonLastPressedTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationButtonLastPressedTime, put=__cordl_internal_set_destinationButtonLastPressedTime)) double_t  destinationButtonLastPressedTime;

/// @brief Field destinationButtonlastPressedDelay, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_destinationButtonlastPressedDelay, put=__cordl_internal_set_destinationButtonlastPressedDelay)) float_t  destinationButtonlastPressedDelay;

/// @brief Field doorMaxClosingDelay, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorMaxClosingDelay, put=__cordl_internal_set_doorMaxClosingDelay)) float_t  doorMaxClosingDelay;

/// @brief Field doorsFullyClosedDelay, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorsFullyClosedDelay, put=__cordl_internal_set_doorsFullyClosedDelay)) float_t  doorsFullyClosedDelay;

/// @brief Field doorsFullyClosedTime, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorsFullyClosedTime, put=__cordl_internal_set_doorsFullyClosedTime)) double_t  doorsFullyClosedTime;

/// @brief Field elevatorByLocation, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_elevatorByLocation, put=__cordl_internal_set_elevatorByLocation)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*  elevatorByLocation;

/// @brief Field justTeleported, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_justTeleported, put=__cordl_internal_set_justTeleported)) bool  justTeleported;

/// @brief Field lastLowestActorNr, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLowestActorNr, put=__cordl_internal_set_lastLowestActorNr)) int32_t  lastLowestActorNr;

/// @brief Field lastTeleportSource, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTeleportSource, put=__cordl_internal_set_lastTeleportSource)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  lastTeleportSource;

/// @brief Field m_RpcSpamChecks, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RpcSpamChecks, put=__cordl_internal_set_m_RpcSpamChecks)) ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*  m_RpcSpamChecks;

/// @brief Field mainDrillShuttle, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainDrillShuttle, put=__cordl_internal_set_mainDrillShuttle)) ::UnityW<::GlobalNamespace::GRShuttle>  mainDrillShuttle;

/// @brief Field mainStagingShuttle, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainStagingShuttle, put=__cordl_internal_set_mainStagingShuttle)) ::UnityW<::GlobalNamespace::GRShuttle>  mainStagingShuttle;

/// @brief Field maxDoorClosingTime, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxDoorClosingTime, put=__cordl_internal_set_maxDoorClosingTime)) double_t  maxDoorClosingTime;

/// @brief Field photonView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field shuttleGroups, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttleGroups, put=__cordl_internal_set_shuttleGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*  shuttleGroups;

/// @brief Field timeLastTeleported, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeLastTeleported, put=__cordl_internal_set_timeLastTeleported)) double_t  timeLastTeleported;

/// @brief Field waitForZoneLoadFallbackMaxTime, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitForZoneLoadFallbackMaxTime, put=__cordl_internal_set_waitForZoneLoadFallbackMaxTime)) float_t  waitForZoneLoadFallbackMaxTime;

/// @brief Field waitForZoneLoadFallbackTimer, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitForZoneLoadFallbackTimer, put=__cordl_internal_set_waitForZoneLoadFallbackTimer)) float_t  waitForZoneLoadFallbackTimer;

/// @brief Field waitingForRemoteTeleport, offset 0x131, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForRemoteTeleport, put=__cordl_internal_set_waitingForRemoteTeleport)) bool  waitingForRemoteTeleport;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method ActivateElevating, addr 0x587a8d0, size 0x1f8, virtual false, abstract: false, final false
inline void ActivateElevating() ;

/// @brief Method ActivateTeleport, addr 0x587ae64, size 0x7b4, virtual false, abstract: false, final false
inline void ActivateTeleport(::GlobalNamespace::GRElevatorManager_ElevatorLocation  start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination, int32_t  lowestActorNumber, double_t  photonServerTime) ;

/// @brief Method AddPlayer, addr 0x587e260, size 0x170, virtual false, abstract: false, final false
inline int32_t AddPlayer(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method Awake, addr 0x5879144, size 0x524, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckInitializationState, addr 0x5879f74, size 0x34, virtual false, abstract: false, final false
inline void CheckInitializationState() ;

/// @brief Method CloseAllElevators, addr 0x587a820, size 0xb0, virtual false, abstract: false, final false
inline void CloseAllElevators() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x587e880, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x587e888, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DeregisterElevator, addr 0x5877dd0, size 0xdc, virtual false, abstract: false, final false
static inline void DeregisterElevator(::GlobalNamespace::GRElevator*  elevator) ;

/// @brief Method DisableVideoScreens, addr 0x5879dc0, size 0x98, virtual false, abstract: false, final false
inline void DisableVideoScreens(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method ElevatorButtonPressed, addr 0x587823c, size 0x22c, virtual false, abstract: false, final false
static inline void ElevatorButtonPressed(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location) ;

/// @brief Method ElevatorButtonPressedInternal, addr 0x587c3d0, size 0x18c, virtual false, abstract: false, final false
inline void ElevatorButtonPressedInternal(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location) ;

/// @brief Method GetDrillShuttleForPlayer, addr 0x587e0ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetDrillShuttleForPlayer(int32_t  actorNumber) ;

/// @brief Method GetPlayerShuttle, addr 0x587de3c, size 0x270, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetPlayerShuttle(::GlobalNamespace::GRShuttleGroupLoc  shuttleGroupLoc, int32_t  shuttleIndex) ;

/// @brief Method GetShuttle, addr 0x587d85c, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRShuttle> GetShuttle(int32_t  shuttleId) ;

/// @brief Method GetShuttleById, addr 0x587dce0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetShuttleById(int32_t  shuttleId) ;

/// @brief Method GetShuttleForPlayer, addr 0x587e0b4, size 0x1a4, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetShuttleForPlayer(int32_t  actorNumber, ::GlobalNamespace::GRShuttleGroupLoc  shuttleGroupLoc) ;

/// @brief Method GetStagingShuttleForPlayer, addr 0x587e258, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetStagingShuttleForPlayer(int32_t  actorNumber) ;

/// @brief Method GetTime, addr 0x587a740, size 0xe0, virtual false, abstract: false, final false
inline double_t GetTime() ;

/// @brief Method InControlOfElevator, addr 0x587a184, size 0xac, virtual false, abstract: false, final false
static inline bool InControlOfElevator() ;

/// @brief Method InitShuttles, addr 0x587dda0, size 0x9c, virtual false, abstract: false, final false
inline void InitShuttles(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method IsPlayerInShuttle, addr 0x587d914, size 0x208, virtual false, abstract: false, final false
static inline bool IsPlayerInShuttle(int32_t  actorNr, ::GlobalNamespace::GRShuttle*  currShuttle, ::GlobalNamespace::GRShuttle*  targetShuttle) ;

/// @brief Method JoinPublicRoom, addr 0x587ba68, size 0xbc, virtual false, abstract: false, final false
static inline void JoinPublicRoom() ;

/// @brief Method LeadElevatorJoin, addr 0x587b618, size 0xb0, virtual false, abstract: false, final false
inline void LeadElevatorJoin() ;

/// @brief Method LeadElevatorJoin, addr 0x587b6c8, size 0x198, virtual false, abstract: false, final false
static inline void LeadElevatorJoin(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger) ;

/// @brief Method LeadShuttleJoin, addr 0x587bb24, size 0x380, virtual false, abstract: false, final false
static inline void LeadShuttleJoin(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  targetLevel) ;

/// @brief Method LowestActorNumberInElevator, addr 0x587ac24, size 0x240, virtual false, abstract: false, final false
static inline int32_t LowestActorNumberInElevator() ;

/// @brief Method LowestActorNumberInElevator, addr 0x587db1c, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t LowestActorNumberInElevator(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider) ;

static inline ::GlobalNamespace::GRElevatorManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5879850, size 0x278, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5879c44, size 0x17c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5879ac8, size 0x17c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x587e53c, size 0x15c, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerAdded, addr 0x587e698, size 0x9c, virtual false, abstract: false, final false
inline void OnPlayerAdded(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerRemoved, addr 0x587e734, size 0x9c, virtual false, abstract: false, final false
inline void OnPlayerRemoved(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnReachedDestination, addr 0x587aac8, size 0x15c, virtual false, abstract: false, final false
inline void OnReachedDestination() ;

/// @brief Method OpenElevator, addr 0x587c084, size 0xc8, virtual false, abstract: false, final false
inline void OpenElevator(::GlobalNamespace::GRElevatorManager_ElevatorLocation  location) ;

/// @brief Method PlayDestinationVideo, addr 0x587bea4, size 0x1e0, virtual false, abstract: false, final false
inline void PlayDestinationVideo(::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination) ;

/// @brief Method ProcessElevatorButtonPress, addr 0x587c55c, size 0x204, virtual false, abstract: false, final false
inline void ProcessElevatorButtonPress(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location) ;

/// @brief Method ProcessElevatorSystemState, addr 0x5879fa8, size 0x1dc, virtual false, abstract: false, final false
inline void ProcessElevatorSystemState() ;

/// @brief Method ReadDataFusion, addr 0x587e7d4, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x587ca44, size 0x428, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RefreshTeleportingPlayersJoinTime, addr 0x587d0c4, size 0x228, virtual false, abstract: false, final false
inline void RefreshTeleportingPlayersJoinTime() ;

/// @brief Method RegisterElevator, addr 0x5877cf0, size 0xdc, virtual false, abstract: false, final false
static inline void RegisterElevator(::GlobalNamespace::GRElevator*  elevator) ;

/// [PunRPC]
/// @brief Method RemoteActivateTeleport, addr 0x587cf14, size 0xe8, virtual false, abstract: false, final false
inline void RemoteActivateTeleport(int32_t  elevatorStartLocation, int32_t  elevatorDestinationLocation, int32_t  lowestActorNumber, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteElevatorButtonPress, addr 0x587ce6c, size 0xa8, virtual false, abstract: false, final false
inline void RemoteElevatorButtonPress(int32_t  elevatorButtonPressed, int32_t  elevatorLocation, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RemovePlayer, addr 0x587e3d0, size 0x16c, virtual false, abstract: false, final false
inline void RemovePlayer(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method SetupFriendGroup, addr 0x587b860, size 0x208, virtual false, abstract: false, final false
static inline void SetupFriendGroup(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider) ;

/// @brief Method Start, addr 0x5879668, size 0x1e8, virtual true, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(GRElevatorManager::<TeleportDelay>d__68))]
/// @brief Method TeleportDelay, addr 0x587cffc, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TeleportDelay(::GlobalNamespace::GRElevatorManager_ElevatorLocation  start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination, int32_t  lowestActorNumber, double_t  sentServerTime) ;

/// @brief Method Tick, addr 0x5879e58, size 0x11c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateElevatorState, addr 0x587a230, size 0x510, virtual false, abstract: false, final false
inline void UpdateElevatorState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState  newState, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location) ;

/// @brief Method UpdateUI, addr 0x587c14c, size 0x218, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method ValidElevatorNetworking, addr 0x587d2ec, size 0x264, virtual false, abstract: false, final false
static inline bool ValidElevatorNetworking(int32_t  actorNr) ;

/// @brief Method ValidShuttleNetworking, addr 0x587d550, size 0x30c, virtual false, abstract: false, final false
static inline bool ValidShuttleNetworking(int32_t  actorNr) ;

/// @brief Method WriteDataFusion, addr 0x587e7d0, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x587c760, size 0x2e4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get_DestinationVideoPlayer() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get_DestinationVideoPlayer() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_DestinationVideoPlayerAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_DestinationVideoPlayerAudioSource() ;

constexpr ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo> const& __cordl_internal_get_DestinationVideos() const;

constexpr ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>& __cordl_internal_get_DestinationVideos() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_actorIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_actorIds() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>* const& __cordl_internal_get_allElevators() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*& __cordl_internal_get_allElevators() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>* const& __cordl_internal_get_allShuttles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*& __cordl_internal_get_allShuttles() ;

constexpr bool const& __cordl_internal_get_cosmeticsInitialized() const;

constexpr bool& __cordl_internal_get_cosmeticsInitialized() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_currentLocation() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_currentLocation() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_destination() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_destination() ;

constexpr double_t const& __cordl_internal_get_destinationButtonLastPressedTime() const;

constexpr double_t& __cordl_internal_get_destinationButtonLastPressedTime() ;

constexpr float_t const& __cordl_internal_get_destinationButtonlastPressedDelay() const;

constexpr float_t& __cordl_internal_get_destinationButtonlastPressedDelay() ;

constexpr float_t const& __cordl_internal_get_doorMaxClosingDelay() const;

constexpr float_t& __cordl_internal_get_doorMaxClosingDelay() ;

constexpr float_t const& __cordl_internal_get_doorsFullyClosedDelay() const;

constexpr float_t& __cordl_internal_get_doorsFullyClosedDelay() ;

constexpr double_t const& __cordl_internal_get_doorsFullyClosedTime() const;

constexpr double_t& __cordl_internal_get_doorsFullyClosedTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>* const& __cordl_internal_get_elevatorByLocation() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*& __cordl_internal_get_elevatorByLocation() ;

constexpr bool const& __cordl_internal_get_justTeleported() const;

constexpr bool& __cordl_internal_get_justTeleported() ;

constexpr int32_t const& __cordl_internal_get_lastLowestActorNr() const;

constexpr int32_t& __cordl_internal_get_lastLowestActorNr() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_lastTeleportSource() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_lastTeleportSource() ;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>* const& __cordl_internal_get_m_RpcSpamChecks() const;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*& __cordl_internal_get_m_RpcSpamChecks() ;

constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& __cordl_internal_get_mainDrillShuttle() const;

constexpr ::UnityW<::GlobalNamespace::GRShuttle>& __cordl_internal_get_mainDrillShuttle() ;

constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& __cordl_internal_get_mainStagingShuttle() const;

constexpr ::UnityW<::GlobalNamespace::GRShuttle>& __cordl_internal_get_mainStagingShuttle() ;

constexpr double_t const& __cordl_internal_get_maxDoorClosingTime() const;

constexpr double_t& __cordl_internal_get_maxDoorClosingTime() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>* const& __cordl_internal_get_shuttleGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*& __cordl_internal_get_shuttleGroups() ;

constexpr double_t const& __cordl_internal_get_timeLastTeleported() const;

constexpr double_t& __cordl_internal_get_timeLastTeleported() ;

constexpr float_t const& __cordl_internal_get_waitForZoneLoadFallbackMaxTime() const;

constexpr float_t& __cordl_internal_get_waitForZoneLoadFallbackMaxTime() ;

constexpr float_t const& __cordl_internal_get_waitForZoneLoadFallbackTimer() const;

constexpr float_t& __cordl_internal_get_waitForZoneLoadFallbackTimer() ;

constexpr bool const& __cordl_internal_get_waitingForRemoteTeleport() const;

constexpr bool& __cordl_internal_get_waitingForRemoteTeleport() ;

constexpr void __cordl_internal_set_DestinationVideoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

constexpr void __cordl_internal_set_DestinationVideoPlayerAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_DestinationVideos(::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_actorIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_allElevators(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*  value) ;

constexpr void __cordl_internal_set_allShuttles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  value) ;

constexpr void __cordl_internal_set_cosmeticsInitialized(bool  value) ;

constexpr void __cordl_internal_set_currentLocation(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState  value) ;

constexpr void __cordl_internal_set_destination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

constexpr void __cordl_internal_set_destinationButtonLastPressedTime(double_t  value) ;

constexpr void __cordl_internal_set_destinationButtonlastPressedDelay(float_t  value) ;

constexpr void __cordl_internal_set_doorMaxClosingDelay(float_t  value) ;

constexpr void __cordl_internal_set_doorsFullyClosedDelay(float_t  value) ;

constexpr void __cordl_internal_set_doorsFullyClosedTime(double_t  value) ;

constexpr void __cordl_internal_set_elevatorByLocation(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*  value) ;

constexpr void __cordl_internal_set_justTeleported(bool  value) ;

constexpr void __cordl_internal_set_lastLowestActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_lastTeleportSource(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

constexpr void __cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*  value) ;

constexpr void __cordl_internal_set_mainDrillShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value) ;

constexpr void __cordl_internal_set_mainStagingShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value) ;

constexpr void __cordl_internal_set_maxDoorClosingTime(double_t  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_shuttleGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*  value) ;

constexpr void __cordl_internal_set_timeLastTeleported(double_t  value) ;

constexpr void __cordl_internal_set_waitForZoneLoadFallbackMaxTime(float_t  value) ;

constexpr void __cordl_internal_set_waitForZoneLoadFallbackTimer(float_t  value) ;

constexpr void __cordl_internal_set_waitingForRemoteTeleport(bool  value) ;

/// @brief Method .ctor, addr 0x587e7d8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getClipForDestination, addr 0x587c364, size 0x6c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Video::VideoClip> getClipForDestination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination) ;

static inline ::UnityW<::GlobalNamespace::GRElevatorManager> getStaticF__instance() ;

/// @brief Method get_InPrivateRoom, addr 0x58790c8, size 0x6c, virtual false, abstract: false, final false
inline bool get_InPrivateRoom() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5879134, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GRElevatorManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x587913c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRElevatorManager(GRElevatorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRElevatorManager(GRElevatorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1924};

/// @brief Field photonView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field elevatorByLocation, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*  ___elevatorByLocation;

/// @brief Field allElevators, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*  ___allElevators;

/// [SerializeField]
/// @brief Field destination, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___destination;

/// [SerializeField]
/// @brief Field currentLocation, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___currentLocation;

/// @brief Field lastTeleportSource, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___lastTeleportSource;

/// @brief Field currentState, offset: 0xc4, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  ___currentState;

/// @brief Field timeLastTeleported, offset: 0xc8, size: 0x8, def value: None
 double_t  ___timeLastTeleported;

/// @brief Field cosmeticsInitialized, offset: 0xd0, size: 0x1, def value: None
 bool  ___cosmeticsInitialized;

/// [SerializeField]
/// @brief Field shuttleGroups, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*  ___shuttleGroups;

/// @brief Field mainStagingShuttle, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRShuttle>  ___mainStagingShuttle;

/// @brief Field mainDrillShuttle, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRShuttle>  ___mainDrillShuttle;

/// @brief Field allShuttles, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  ___allShuttles;

/// @brief Field destinationButtonlastPressedDelay, offset: 0xf8, size: 0x4, def value: None
 float_t  ___destinationButtonlastPressedDelay;

/// @brief Field doorsFullyClosedDelay, offset: 0xfc, size: 0x4, def value: None
 float_t  ___doorsFullyClosedDelay;

/// @brief Field doorMaxClosingDelay, offset: 0x100, size: 0x4, def value: None
 float_t  ___doorMaxClosingDelay;

/// @brief Field destinationButtonLastPressedTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___destinationButtonLastPressedTime;

/// @brief Field doorsFullyClosedTime, offset: 0x110, size: 0x8, def value: None
 double_t  ___doorsFullyClosedTime;

/// @brief Field maxDoorClosingTime, offset: 0x118, size: 0x8, def value: None
 double_t  ___maxDoorClosingTime;

/// @brief Field actorIds, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___actorIds;

/// @brief Field m_RpcSpamChecks, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*  ___m_RpcSpamChecks;

/// @brief Field justTeleported, offset: 0x130, size: 0x1, def value: None
 bool  ___justTeleported;

/// @brief Field waitingForRemoteTeleport, offset: 0x131, size: 0x1, def value: None
 bool  ___waitingForRemoteTeleport;

/// @brief Field lastLowestActorNr, offset: 0x134, size: 0x4, def value: None
 int32_t  ___lastLowestActorNr;

/// @brief Field waitForZoneLoadFallbackTimer, offset: 0x138, size: 0x4, def value: None
 float_t  ___waitForZoneLoadFallbackTimer;

/// @brief Field waitForZoneLoadFallbackMaxTime, offset: 0x13c, size: 0x4, def value: None
 float_t  ___waitForZoneLoadFallbackMaxTime;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x140, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field DestinationVideos, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>  ___DestinationVideos;

/// [SerializeField]
/// @brief Field DestinationVideoPlayer, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ___DestinationVideoPlayer;

/// [SerializeField]
/// @brief Field DestinationVideoPlayerAudioSource, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___DestinationVideoPlayerAudioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___photonView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___elevatorByLocation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___allElevators) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___destination) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___currentLocation) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___lastTeleportSource) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___currentState) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___timeLastTeleported) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___cosmeticsInitialized) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___shuttleGroups) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___mainStagingShuttle) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___mainDrillShuttle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___allShuttles) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___destinationButtonlastPressedDelay) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___doorsFullyClosedDelay) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___doorMaxClosingDelay) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___destinationButtonLastPressedTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___doorsFullyClosedTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___maxDoorClosingTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___actorIds) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___m_RpcSpamChecks) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___justTeleported) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___waitingForRemoteTeleport) == 0x131, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___lastLowestActorNr) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___waitForZoneLoadFallbackTimer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___waitForZoneLoadFallbackMaxTime) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ____TickRunning_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___DestinationVideos) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___DestinationVideoPlayer) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager, ___DestinationVideoPlayerAudioSource) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies GRElevatorManager::ElevatorLocation, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRElevatorManager/<TeleportDelay>d__68
class CORDL_TYPE GRElevatorManager__TeleportDelay_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRElevatorManager>  __4__this;

/// @brief Field destination, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination;

/// @brief Field lowestActorNumber, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowestActorNumber, put=__cordl_internal_set_lowestActorNumber)) int32_t  lowestActorNumber;

/// @brief Field sentServerTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sentServerTime, put=__cordl_internal_set_sentServerTime)) double_t  sentServerTime;

/// @brief Field start, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::GlobalNamespace::GRElevatorManager_ElevatorLocation  start;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x587e89c, size 0x180, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x587ea1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x587ea24, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x587ea5c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x587e898, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRElevatorManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRElevatorManager>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_destination() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_destination() ;

constexpr int32_t const& __cordl_internal_get_lowestActorNumber() const;

constexpr int32_t& __cordl_internal_get_lowestActorNumber() ;

constexpr double_t const& __cordl_internal_get_sentServerTime() const;

constexpr double_t& __cordl_internal_get_sentServerTime() ;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& __cordl_internal_get_start() const;

constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRElevatorManager>  value) ;

constexpr void __cordl_internal_set_destination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

constexpr void __cordl_internal_set_lowestActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_sentServerTime(double_t  value) ;

constexpr void __cordl_internal_set_start(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x587d09c, size 0x28, virtual false, abstract: false, final false
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
constexpr GRElevatorManager__TeleportDelay_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager__TeleportDelay_d__68", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRElevatorManager__TeleportDelay_d__68(GRElevatorManager__TeleportDelay_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager__TeleportDelay_d__68", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRElevatorManager__TeleportDelay_d__68(GRElevatorManager__TeleportDelay_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1923};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRElevatorManager>  _____4__this;

/// @brief Field start, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___start;

/// @brief Field sentServerTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___sentServerTime;

/// @brief Field destination, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  ___destination;

/// @brief Field lowestActorNumber, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___lowestActorNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, ___start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, ___sentServerTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, ___destination) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68, ___lowestActorNumber) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRShuttleGroupLoc, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRElevatorManager/GRShuttleGroup
class CORDL_TYPE GRElevatorManager_GRShuttleGroup : public ::System::Object {
public:
// Declarations
/// @brief Field ghostReactorStagingShuttles, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorStagingShuttles, put=__cordl_internal_set_ghostReactorStagingShuttles)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  ghostReactorStagingShuttles;

/// @brief Field location, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_location, put=__cordl_internal_set_location)) ::GlobalNamespace::GRShuttleGroupLoc  location;

static inline ::GlobalNamespace::GRElevatorManager_GRShuttleGroup* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>* const& __cordl_internal_get_ghostReactorStagingShuttles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*& __cordl_internal_get_ghostReactorStagingShuttles() ;

constexpr ::GlobalNamespace::GRShuttleGroupLoc const& __cordl_internal_get_location() const;

constexpr ::GlobalNamespace::GRShuttleGroupLoc& __cordl_internal_get_location() ;

constexpr void __cordl_internal_set_ghostReactorStagingShuttles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  value) ;

constexpr void __cordl_internal_set_location(::GlobalNamespace::GRShuttleGroupLoc  value) ;

/// @brief Method .ctor, addr 0x587e890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorManager_GRShuttleGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager_GRShuttleGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRElevatorManager_GRShuttleGroup(GRElevatorManager_GRShuttleGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRElevatorManager_GRShuttleGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRElevatorManager_GRShuttleGroup(GRElevatorManager_GRShuttleGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1918};

/// @brief Field location, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GRShuttleGroupLoc  ___location;

/// @brief Field ghostReactorStagingShuttles, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  ___ghostReactorStagingShuttles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager_GRShuttleGroup, ___location) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager_GRShuttleGroup, ___ghostReactorStagingShuttles) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager_GRShuttleGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
