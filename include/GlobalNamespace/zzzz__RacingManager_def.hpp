#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RaceSetup_def.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacingState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RacingManager)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RaceVisual;
}
namespace GlobalNamespace {
struct RacingManager_RaceSetup;
}
namespace GlobalNamespace {
class RacingManager_Race;
}
namespace GlobalNamespace {
class RacingManager_RacerComparer;
}
namespace GlobalNamespace {
struct RacingManager_RacerData;
}
namespace GlobalNamespace {
struct RacingManager_RacingState;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
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
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class RacingManager;
}
namespace GlobalNamespace {
class RacingManager_Race;
}
namespace GlobalNamespace {
class RacingManager_RacerComparer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RacingManager*);
MARK_REF_T(::GlobalNamespace::RacingManager_Race*);
MARK_REF_T(::GlobalNamespace::RacingManager_RacerComparer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager*, "", "RacingManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager_Race*, "", "RacingManager/Race");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager_RacerComparer*, "", "RacingManager/RacerComparer");
// Dependencies NetworkSceneObject, RacingManager::Race, RacingManager::RaceSetup
namespace GlobalNamespace {
// Is value type: false
// CS Name: RacingManager
class CORDL_TYPE RacingManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
using Race = ::GlobalNamespace::RacingManager_Race;

using RaceSetup = ::GlobalNamespace::RacingManager_RaceSetup;

using RacerComparer = ::GlobalNamespace::RacingManager_RacerComparer;

using RacerData = ::GlobalNamespace::RacingManager_RacerData;

using RacingState = ::GlobalNamespace::RacingManager_RacingState;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::RacingManager>  _instance_k__BackingField;

/// @brief Field raceSetups, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceSetups, put=__cordl_internal_set_raceSetups)) ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>  raceSetups;

/// @brief Field races, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_races, put=__cordl_internal_set_races)) ::ArrayW<::GlobalNamespace::RacingManager_Race*>  races;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x568f410, size 0x31c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Button_StartRace, addr 0x568ef6c, size 0x40, virtual false, abstract: false, final false
inline void Button_StartRace(int32_t  raceId, int32_t  laps) ;

/// @brief Method ITickSystemTick.Tick, addr 0x56918c0, size 0x5c, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// @brief Method IsActorLockedIntoAnyRace, addr 0x5691964, size 0x78, virtual false, abstract: false, final false
inline bool IsActorLockedIntoAnyRace(int32_t  actorNumber) ;

static inline ::GlobalNamespace::RacingManager* New_ctor() ;

/// @brief Method OnCheckpointPassed, addr 0x568f210, size 0x148, virtual false, abstract: false, final false
inline void OnCheckpointPassed(int32_t  raceId, int32_t  checkpointIndex) ;

/// @brief Method OnDisable, addr 0x568fa40, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x568f928, size 0x118, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerJoined, addr 0x568fc48, size 0xb4, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnRoomJoin, addr 0x568fb58, size 0x5c, virtual false, abstract: false, final false
inline void OnRoomJoin() ;

/// [PunRPC]
/// @brief Method PassCheckpoint_RPC, addr 0x5690ce8, size 0xfc, virtual false, abstract: false, final false
inline void PassCheckpoint_RPC(uint8_t  raceId, uint8_t  checkpointIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RaceBeginCountdown_RPC, addr 0x5690330, size 0x194, virtual false, abstract: false, final false
inline void RaceBeginCountdown_RPC(uint8_t  raceId, uint8_t  laps, double_t  startTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RaceEnded_RPC, addr 0x5691434, size 0xe8, virtual false, abstract: false, final false
inline void RaceEnded_RPC(uint8_t  raceId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RaceLockInParticipants_RPC, addr 0x56905c8, size 0x134, virtual false, abstract: false, final false
inline void RaceLockInParticipants_RPC(uint8_t  raceId, ::ArrayW<int32_t>  participantActorNumbers, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterVisual, addr 0x568eec4, size 0x48, virtual false, abstract: false, final false
inline void RegisterVisual(::GlobalNamespace::RaceVisual*  visual) ;

/// [PunRPC]
/// @brief Method RequestRaceStart_RPC, addr 0x568ffec, size 0x140, virtual false, abstract: false, final false
inline void RequestRaceStart_RPC(int32_t  raceId, int32_t  laps, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup> const& __cordl_internal_get_raceSetups() const;

constexpr ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>& __cordl_internal_get_raceSetups() ;

constexpr ::ArrayW<::GlobalNamespace::RacingManager_Race*> const& __cordl_internal_get_races() const;

constexpr ::ArrayW<::GlobalNamespace::RacingManager_Race*>& __cordl_internal_get_races() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_raceSetups(::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>  value) ;

constexpr void __cordl_internal_set_races(::ArrayW<::GlobalNamespace::RacingManager_Race*>  value) ;

/// @brief Method .ctor, addr 0x5691aa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::RacingManager> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x568f400, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x568f360, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::RacingManager> get_instance() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::RacingManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x568f408, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x568f3a8, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::RacingManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RacingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RacingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RacingManager(RacingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RacingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RacingManager(RacingManager const& ) = delete;

/// @brief Field MinPlayersInRace offset 0xffffffff size 0x4
static constexpr int32_t  MinPlayersInRace{static_cast<int32_t>(0x1)};

/// @brief Field ResultsDuration offset 0xffffffff size 0x4
static constexpr float_t  ResultsDuration{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{885};

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field raceSetups, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RacingManager_RaceSetup>  ___raceSetups;

/// @brief Field races, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RacingManager_Race*>  ___races;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingManager, ____TickRunning_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager, ___raceSetups) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager, ___races) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingManager) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RacingManager::RacingState, System.Object, UnityEngine.Collider
namespace GlobalNamespace {
// Is value type: false
// CS Name: RacingManager/Race
class CORDL_TYPE RacingManager_Race : public ::System::Object {
public:
// Declarations
/// @brief Field <racingState>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__racingState_k__BackingField, put=__cordl_internal_set__racingState_k__BackingField)) ::GlobalNamespace::RacingManager_RacingState  _racingState_k__BackingField;

/// @brief Field abortRaceAtTimestamp, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abortRaceAtTimestamp, put=__cordl_internal_set_abortRaceAtTimestamp)) double_t  abortRaceAtTimestamp;

/// @brief Field actorsInStartZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorsInStartZone, put=__cordl_internal_set_actorsInStartZone)) ::System::Collections::Generic::List_1<int32_t>*  actorsInStartZone;

/// @brief Field actorsInStartZone2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorsInStartZone2, put=__cordl_internal_set_actorsInStartZone2)) ::System::Collections::Generic::List_1<int32_t>*  actorsInStartZone2;

/// @brief Field dqBaseDuration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dqBaseDuration, put=__cordl_internal_set_dqBaseDuration)) float_t  dqBaseDuration;

/// @brief Field dqInterval, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dqInterval, put=__cordl_internal_set_dqInterval)) float_t  dqInterval;

/// @brief Field hasLockedInParticipants, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLockedInParticipants, put=__cordl_internal_set_hasLockedInParticipants)) bool  hasLockedInParticipants;

/// @brief Field isInstanceLoaded, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInstanceLoaded, put=__cordl_internal_set_isInstanceLoaded)) bool  isInstanceLoaded;

/// @brief Field nextStartZoneUpdateTimestamp, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextStartZoneUpdateTimestamp, put=__cordl_internal_set_nextStartZoneUpdateTimestamp)) float_t  nextStartZoneUpdateTimestamp;

/// @brief Field nextTickTimestamp, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextTickTimestamp, put=__cordl_internal_set_nextTickTimestamp)) float_t  nextTickTimestamp;

/// @brief Field numCheckpoints, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_numCheckpoints, put=__cordl_internal_set_numCheckpoints)) int32_t  numCheckpoints;

/// @brief Field numCheckpointsToWin, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_numCheckpointsToWin, put=__cordl_internal_set_numCheckpointsToWin)) int32_t  numCheckpointsToWin;

/// @brief Field numLapsSelected, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_numLapsSelected, put=__cordl_internal_set_numLapsSelected)) int32_t  numLapsSelected;

/// @brief Field overlapColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapColliders, put=setStaticF_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field photonView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field playerLayerMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_playerLayerMask, put=setStaticF_playerLayerMask)) int32_t  playerLayerMask;

/// @brief Field playerLookup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLookup, put=__cordl_internal_set_playerLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*  playerLookup;

/// @brief Field playerNamesInStartZone, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNamesInStartZone, put=__cordl_internal_set_playerNamesInStartZone)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  playerNamesInStartZone;

/// @brief Field raceIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_raceIndex, put=__cordl_internal_set_raceIndex)) int32_t  raceIndex;

/// @brief Field raceStartTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceStartTime, put=__cordl_internal_set_raceStartTime)) double_t  raceStartTime;

/// @brief Field raceStartZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceStartZone, put=__cordl_internal_set_raceStartZone)) ::UnityW<::UnityEngine::BoxCollider>  raceStartZone;

/// @brief Field raceVisual, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceVisual, put=__cordl_internal_set_raceVisual)) ::UnityW<::GlobalNamespace::RaceVisual>  raceVisual;

/// @brief Field racers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_racers, put=__cordl_internal_set_racers)) ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*  racers;

 __declspec(property(get=get_racingState, put=set_racingState)) ::GlobalNamespace::RacingManager_RacingState  racingState;

/// @brief Field resultsEndTimestamp, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_resultsEndTimestamp, put=__cordl_internal_set_resultsEndTimestamp)) float_t  resultsEndTimestamp;

/// @brief Field stringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringBuilder, put=setStaticF_stringBuilder)) ::System::Text::StringBuilder*  stringBuilder;

/// @brief Field timesStringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_timesStringBuilder, put=setStaticF_timesStringBuilder)) ::System::Text::StringBuilder*  timesStringBuilder;

/// @brief Method BeginCountdown, addr 0x56904c4, size 0x104, virtual false, abstract: false, final false
inline void BeginCountdown(double_t  startTime, int32_t  laps) ;

/// @brief Method Button_StartRace, addr 0x568fe9c, size 0x150, virtual false, abstract: false, final false
inline void Button_StartRace(int32_t  laps) ;

/// @brief Method Clear, addr 0x568fbb4, size 0x94, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Host_RequestRaceStart, addr 0x569012c, size 0x204, virtual false, abstract: false, final false
inline void Host_RequestRaceStart(int32_t  laps, int32_t  requestedByActorNumber) ;

/// @brief Method IsActorLockedIntoRace, addr 0x56919dc, size 0xc4, virtual false, abstract: false, final false
inline bool IsActorLockedIntoRace(int32_t  actorNumber) ;

/// @brief Method LockInParticipants, addr 0x56906fc, size 0x5ec, virtual false, abstract: false, final false
inline void LockInParticipants(::ArrayW<int32_t>  participantActorNumbers, bool  isProvisional) ;

static inline ::GlobalNamespace::RacingManager_Race* New_ctor(int32_t  raceIndex, ::GlobalNamespace::RacingManager_RaceSetup  setup, ::System::Collections::Generic::HashSet_1<int32_t>*  actorsInAnyRace, ::Photon::Pun::PhotonView*  photonView) ;

/// @brief Method OnRacerOrderChanged, addr 0x569243c, size 0x5f0, virtual false, abstract: false, final false
inline void OnRacerOrderChanged() ;

/// @brief Method PassCheckpoint, addr 0x5690de4, size 0x650, virtual false, abstract: false, final false
inline void PassCheckpoint(::Photon::Realtime::Player*  player, int32_t  checkpointIndex, double_t  time) ;

/// @brief Method RaceCountdownEnds, addr 0x5692208, size 0x234, virtual false, abstract: false, final false
inline void RaceCountdownEnds() ;

/// @brief Method RaceEnded, addr 0x569151c, size 0x3a4, virtual false, abstract: false, final false
inline void RaceEnded() ;

/// @brief Method RefreshStartingPlayerList, addr 0x5691fbc, size 0x24c, virtual false, abstract: false, final false
inline void RefreshStartingPlayerList() ;

/// @brief Method RegisterVisual, addr 0x5691bc8, size 0x8, virtual false, abstract: false, final false
inline void RegisterVisual(::GlobalNamespace::RaceVisual*  visual) ;

/// @brief Method SendStateToNewPlayer, addr 0x568fcfc, size 0x1a0, virtual false, abstract: false, final false
inline void SendStateToNewPlayer(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method Tick, addr 0x569191c, size 0x48, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method TickWithNextDelay, addr 0x5691bd0, size 0x3ec, virtual false, abstract: false, final false
inline float_t TickWithNextDelay() ;

/// @brief Method UpdateActorsInStartZone, addr 0x5692a2c, size 0x710, virtual false, abstract: false, final false
inline bool UpdateActorsInStartZone() ;

constexpr ::GlobalNamespace::RacingManager_RacingState const& __cordl_internal_get__racingState_k__BackingField() const;

constexpr ::GlobalNamespace::RacingManager_RacingState& __cordl_internal_get__racingState_k__BackingField() ;

constexpr double_t const& __cordl_internal_get_abortRaceAtTimestamp() const;

constexpr double_t& __cordl_internal_get_abortRaceAtTimestamp() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_actorsInStartZone() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_actorsInStartZone() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_actorsInStartZone2() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_actorsInStartZone2() ;

constexpr float_t const& __cordl_internal_get_dqBaseDuration() const;

constexpr float_t& __cordl_internal_get_dqBaseDuration() ;

constexpr float_t const& __cordl_internal_get_dqInterval() const;

constexpr float_t& __cordl_internal_get_dqInterval() ;

constexpr bool const& __cordl_internal_get_hasLockedInParticipants() const;

constexpr bool& __cordl_internal_get_hasLockedInParticipants() ;

constexpr bool const& __cordl_internal_get_isInstanceLoaded() const;

constexpr bool& __cordl_internal_get_isInstanceLoaded() ;

constexpr float_t const& __cordl_internal_get_nextStartZoneUpdateTimestamp() const;

constexpr float_t& __cordl_internal_get_nextStartZoneUpdateTimestamp() ;

constexpr float_t const& __cordl_internal_get_nextTickTimestamp() const;

constexpr float_t& __cordl_internal_get_nextTickTimestamp() ;

constexpr int32_t const& __cordl_internal_get_numCheckpoints() const;

constexpr int32_t& __cordl_internal_get_numCheckpoints() ;

constexpr int32_t const& __cordl_internal_get_numCheckpointsToWin() const;

constexpr int32_t& __cordl_internal_get_numCheckpointsToWin() ;

constexpr int32_t const& __cordl_internal_get_numLapsSelected() const;

constexpr int32_t& __cordl_internal_get_numLapsSelected() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>* const& __cordl_internal_get_playerLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*& __cordl_internal_get_playerLookup() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& __cordl_internal_get_playerNamesInStartZone() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& __cordl_internal_get_playerNamesInStartZone() ;

constexpr int32_t const& __cordl_internal_get_raceIndex() const;

constexpr int32_t& __cordl_internal_get_raceIndex() ;

constexpr double_t const& __cordl_internal_get_raceStartTime() const;

constexpr double_t& __cordl_internal_get_raceStartTime() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_raceStartZone() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_raceStartZone() ;

constexpr ::UnityW<::GlobalNamespace::RaceVisual> const& __cordl_internal_get_raceVisual() const;

constexpr ::UnityW<::GlobalNamespace::RaceVisual>& __cordl_internal_get_raceVisual() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>* const& __cordl_internal_get_racers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*& __cordl_internal_get_racers() ;

constexpr float_t const& __cordl_internal_get_resultsEndTimestamp() const;

constexpr float_t& __cordl_internal_get_resultsEndTimestamp() ;

constexpr void __cordl_internal_set__racingState_k__BackingField(::GlobalNamespace::RacingManager_RacingState  value) ;

constexpr void __cordl_internal_set_abortRaceAtTimestamp(double_t  value) ;

constexpr void __cordl_internal_set_actorsInStartZone(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_actorsInStartZone2(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_dqBaseDuration(float_t  value) ;

constexpr void __cordl_internal_set_dqInterval(float_t  value) ;

constexpr void __cordl_internal_set_hasLockedInParticipants(bool  value) ;

constexpr void __cordl_internal_set_isInstanceLoaded(bool  value) ;

constexpr void __cordl_internal_set_nextStartZoneUpdateTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_nextTickTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_numCheckpoints(int32_t  value) ;

constexpr void __cordl_internal_set_numCheckpointsToWin(int32_t  value) ;

constexpr void __cordl_internal_set_numLapsSelected(int32_t  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_playerLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*  value) ;

constexpr void __cordl_internal_set_playerNamesInStartZone(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_raceIndex(int32_t  value) ;

constexpr void __cordl_internal_set_raceStartTime(double_t  value) ;

constexpr void __cordl_internal_set_raceStartZone(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_raceVisual(::UnityW<::GlobalNamespace::RaceVisual>  value) ;

constexpr void __cordl_internal_set_racers(::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*  value) ;

constexpr void __cordl_internal_set_resultsEndTimestamp(float_t  value) ;

/// @brief Method .ctor, addr 0x568f72c, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(int32_t  raceIndex, ::GlobalNamespace::RacingManager_RaceSetup  setup, ::System::Collections::Generic::HashSet_1<int32_t>*  actorsInAnyRace, ::Photon::Pun::PhotonView*  photonView) ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_overlapColliders() ;

static inline int32_t getStaticF_playerLayerMask() ;

static inline ::System::Text::StringBuilder* getStaticF_stringBuilder() ;

static inline ::System::Text::StringBuilder* getStaticF_timesStringBuilder() ;

/// [CompilerGenerated]
/// @brief Method get_racingState, addr 0x5691bb8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::RacingManager_RacingState get_racingState() ;

static inline void setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF_playerLayerMask(int32_t  value) ;

static inline void setStaticF_stringBuilder(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_timesStringBuilder(::System::Text::StringBuilder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_racingState, addr 0x5691bc0, size 0x8, virtual false, abstract: false, final false
inline void set_racingState(::GlobalNamespace::RacingManager_RacingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RacingManager_Race() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RacingManager_Race", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RacingManager_Race(RacingManager_Race && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RacingManager_Race", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RacingManager_Race(RacingManager_Race const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{884};

/// @brief Field raceIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___raceIndex;

/// @brief Field numCheckpoints, offset: 0x14, size: 0x4, def value: None
 int32_t  ___numCheckpoints;

/// @brief Field dqBaseDuration, offset: 0x18, size: 0x4, def value: None
 float_t  ___dqBaseDuration;

/// @brief Field dqInterval, offset: 0x1c, size: 0x4, def value: None
 float_t  ___dqInterval;

/// @brief Field raceStartZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___raceStartZone;

/// @brief Field photonView, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field racers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RacingManager_RacerData>*  ___racers;

/// @brief Field playerLookup, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,int32_t>*  ___playerLookup;

/// @brief Field actorsInStartZone, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___actorsInStartZone;

/// @brief Field actorsInStartZone2, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___actorsInStartZone2;

/// @brief Field playerNamesInStartZone, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  ___playerNamesInStartZone;

/// @brief Field numLapsSelected, offset: 0x58, size: 0x4, def value: None
 int32_t  ___numLapsSelected;

/// [CompilerGenerated]
/// @brief Field <racingState>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::RacingManager_RacingState  ____racingState_k__BackingField;

/// @brief Field raceStartTime, offset: 0x60, size: 0x8, def value: None
 double_t  ___raceStartTime;

/// @brief Field abortRaceAtTimestamp, offset: 0x68, size: 0x8, def value: None
 double_t  ___abortRaceAtTimestamp;

/// @brief Field resultsEndTimestamp, offset: 0x70, size: 0x4, def value: None
 float_t  ___resultsEndTimestamp;

/// @brief Field isInstanceLoaded, offset: 0x74, size: 0x1, def value: None
 bool  ___isInstanceLoaded;

/// @brief Field numCheckpointsToWin, offset: 0x78, size: 0x4, def value: None
 int32_t  ___numCheckpointsToWin;

/// @brief Field raceVisual, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RaceVisual>  ___raceVisual;

/// @brief Field hasLockedInParticipants, offset: 0x88, size: 0x1, def value: None
 bool  ___hasLockedInParticipants;

/// @brief Field nextTickTimestamp, offset: 0x8c, size: 0x4, def value: None
 float_t  ___nextTickTimestamp;

/// @brief Field nextStartZoneUpdateTimestamp, offset: 0x90, size: 0x4, def value: None
 float_t  ___nextStartZoneUpdateTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___raceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___numCheckpoints) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___dqBaseDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___dqInterval) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___raceStartZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___photonView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___racers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___playerLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___actorsInStartZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___actorsInStartZone2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___playerNamesInStartZone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___numLapsSelected) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ____racingState_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___raceStartTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___abortRaceAtTimestamp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___resultsEndTimestamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___isInstanceLoaded) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___numCheckpointsToWin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___raceVisual) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___hasLockedInParticipants) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___nextTickTimestamp) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_Race, ___nextStartZoneUpdateTimestamp) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingManager_Race) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RacingManager/RacerComparer
class CORDL_TYPE RacingManager_RacerComparer : public ::System::Object {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::GlobalNamespace::RacingManager_RacerComparer*  instance;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>*() noexcept;

/// @brief Method Compare, addr 0x5691aa8, size 0xa0, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::RacingManager_RacerData  a, ::GlobalNamespace::RacingManager_RacerData  b) ;

static inline ::GlobalNamespace::RacingManager_RacerComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5691b48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RacingManager_RacerComparer* getStaticF_instance() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::RacingManager_RacerData>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__RacingManager_RacerData_() noexcept;

static inline void setStaticF_instance(::GlobalNamespace::RacingManager_RacerComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RacingManager_RacerComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RacingManager_RacerComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RacingManager_RacerComparer(RacingManager_RacerComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RacingManager_RacerComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RacingManager_RacerComparer(RacingManager_RacerComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RacingManager_RacerComparer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
