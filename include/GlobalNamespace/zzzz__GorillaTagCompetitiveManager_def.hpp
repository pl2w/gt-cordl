#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveManager)
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveForcedLeaveRoomVolume;
}
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveManager___c;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveScoreboard;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RankedMultiplayerScore;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveManager;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveManager*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveManager*, "", "GorillaTagCompetitiveManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveManager___c*, "", "GorillaTagCompetitiveManager/<>c");
// Dependencies GorillaTagCompetitiveManager::GameState, GorillaTagManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveManager
class CORDL_TYPE GorillaTagCompetitiveManager : public ::GlobalNamespace::GorillaTagManager {
public:
// Declarations
using GameState = ::GlobalNamespace::GorillaTagCompetitiveManager_GameState;

using __c = ::GlobalNamespace::GorillaTagCompetitiveManager___c;

 __declspec(property(get=get_ShowDebugPing, put=set_ShowDebugPing)) bool  ShowDebugPing;

/// @brief Field <ShowDebugPing>k__BackingField, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowDebugPing_k__BackingField, put=__cordl_internal_set__ShowDebugPing_k__BackingField)) bool  _ShowDebugPing_k__BackingField;

/// @brief Field forceLeaveRoomVolumes, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceLeaveRoomVolumes, put=__cordl_internal_set_forceLeaveRoomVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*  forceLeaveRoomVolumes;

/// @brief Field gameState, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameState, put=__cordl_internal_set_gameState)) ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  gameState;

/// @brief Field lastActiveTime, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastActiveTime, put=__cordl_internal_set_lastActiveTime)) float_t  lastActiveTime;

/// @brief Field lastWaitingForPlayerPingRoomTime, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWaitingForPlayerPingRoomTime, put=__cordl_internal_set_lastWaitingForPlayerPingRoomTime)) float_t  lastWaitingForPlayerPingRoomTime;

/// @brief Field onPlayerJoined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPlayerJoined, put=setStaticF_onPlayerJoined)) ::System::Action_1<::GlobalNamespace::NetPlayer*>*  onPlayerJoined;

/// @brief Field onPlayerLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPlayerLeft, put=setStaticF_onPlayerLeft)) ::System::Action_1<::GlobalNamespace::NetPlayer*>*  onPlayerLeft;

/// @brief Field onRoundEnd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onRoundEnd, put=setStaticF_onRoundEnd)) ::System::Action*  onRoundEnd;

/// @brief Field onRoundStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onRoundStart, put=setStaticF_onRoundStart)) ::System::Action*  onRoundStart;

/// @brief Field onStateChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onStateChanged, put=setStaticF_onStateChanged)) ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  onStateChanged;

/// @brief Field onTagOccurred, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onTagOccurred, put=setStaticF_onTagOccurred)) ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  onTagOccurred;

/// @brief Field onUpdateRemainingTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onUpdateRemainingTime, put=setStaticF_onUpdateRemainingTime)) ::System::Action_1<float_t>*  onUpdateRemainingTime;

/// @brief Field postRoundDuration, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_postRoundDuration, put=__cordl_internal_set_postRoundDuration)) float_t  postRoundDuration;

/// @brief Field roundDuration, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundDuration, put=__cordl_internal_set_roundDuration)) float_t  roundDuration;

/// @brief Field scoreboards, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scoreboards, put=setStaticF_scoreboards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*  scoreboards;

/// @brief Field scoring, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoring, put=__cordl_internal_set_scoring)) ::UnityW<::GlobalNamespace::RankedMultiplayerScore>  scoring;

/// @brief Field startCountdownDuration, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_startCountdownDuration, put=__cordl_internal_set_startCountdownDuration)) float_t  startCountdownDuration;

/// @brief Field stateRemainingTime, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateRemainingTime, put=__cordl_internal_set_stateRemainingTime)) float_t  stateRemainingTime;

/// @brief Field waitingForPlayerPingRoomDuration, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitingForPlayerPingRoomDuration, put=__cordl_internal_set_waitingForPlayerPingRoomDuration)) float_t  waitingForPlayerPingRoomDuration;

/// @brief Method CanJoinFrienship, addr 0x59285c4, size 0x8, virtual true, abstract: false, final false
inline bool CanJoinFrienship(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method CheckForInfected, addr 0x5929230, size 0x150, virtual false, abstract: false, final false
inline void CheckForInfected() ;

/// @brief Method DeregisterScoreboard, addr 0x5926ae8, size 0x80, virtual false, abstract: false, final false
static inline void DeregisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard*  scoreboard) ;

/// @brief Method DisplayScoreboardPredictedResults, addr 0x5929380, size 0xdc, virtual false, abstract: false, final false
inline void DisplayScoreboardPredictedResults(bool  bShow) ;

/// @brief Method EnterStatePlaying, addr 0x59290d8, size 0xb0, virtual false, abstract: false, final false
inline void EnterStatePlaying() ;

/// @brief Method EnterStatePostRound, addr 0x5929188, size 0xa8, virtual false, abstract: false, final false
inline void EnterStatePostRound() ;

/// @brief Method EnterStateStartingCountdown, addr 0x5928ff4, size 0xe4, virtual false, abstract: false, final false
inline void EnterStateStartingCountdown() ;

/// @brief Method EnterStateWaitingForPlayers, addr 0x5928f5c, size 0x98, virtual false, abstract: false, final false
inline void EnterStateWaitingForPlayers() ;

/// @brief Method GameModeName, addr 0x59284ac, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x59284ec, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x59284a4, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetCurrentGameState, addr 0x5925d0c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GetCurrentGameState() ;

/// @brief Method GetRoundDuration, addr 0x5925d04, size 0x8, virtual false, abstract: false, final false
inline float_t GetRoundDuration() ;

/// @brief Method GetScoring, addr 0x592843c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::RankedMultiplayerScore> GetScoring() ;

/// @brief Method HandleInfectionRoundComplete, addr 0x5928828, size 0x22c, virtual false, abstract: false, final false
inline void HandleInfectionRoundComplete() ;

/// @brief Method HandleTagBroadcast, addr 0x5928a54, size 0x2b8, virtual true, abstract: false, final false
inline void HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method IsEveryoneTagged, addr 0x5928668, size 0x1c0, virtual false, abstract: false, final false
inline bool IsEveryoneTagged() ;

/// @brief Method IsGameInvalid, addr 0x592983c, size 0xa8, virtual false, abstract: false, final false
inline bool IsGameInvalid() ;

/// @brief Method IsInfectionPossible, addr 0x592978c, size 0xb0, virtual false, abstract: false, final false
inline bool IsInfectionPossible() ;

/// @brief Method IsMatchActive, addr 0x5925d14, size 0x10, virtual false, abstract: false, final false
inline bool IsMatchActive() ;

/// @brief Method LocalCanTag, addr 0x5928444, size 0x34, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5928478, size 0x24, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method NetworkLinkSetup, addr 0x5927434, size 0x80, virtual true, abstract: false, final false
inline void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveManager* New_ctor() ;

/// @brief Method OnMasterClientSwitched, addr 0x5927884, size 0xa4, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5927928, size 0x5f8, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5928310, size 0x12c, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnSerializeRead, addr 0x5929bd0, size 0x140, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5929afc, size 0xd4, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PingRoom, addr 0x5927610, size 0x150, virtual false, abstract: false, final false
inline void PingRoom() ;

/// @brief Method RegisterForcedLeaveVolume, addr 0x592598c, size 0xe4, virtual false, abstract: false, final false
inline void RegisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*  volume) ;

/// @brief Method RegisterScoreboard, addr 0x5926a14, size 0xd4, virtual false, abstract: false, final false
static inline void RegisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard*  scoreboard) ;

/// @brief Method ReportTag, addr 0x592849c, size 0x8, virtual true, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method ResetGame, addr 0x5927418, size 0x1c, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method SetState, addr 0x5928d0c, size 0x250, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

/// @brief Method StartPlaying, addr 0x5926b68, size 0x20c, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5926d74, size 0x1d0, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x59274b4, size 0x15c, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UnregisterForcedLeaveVolume, addr 0x5925af4, size 0x58, virtual false, abstract: false, final false
inline void UnregisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*  volume) ;

/// @brief Method UpdateInfectionState, addr 0x59285cc, size 0x9c, virtual true, abstract: false, final false
inline void UpdateInfectionState() ;

/// @brief Method UpdateScoreboards, addr 0x5927760, size 0x124, virtual false, abstract: false, final false
inline void UpdateScoreboards() ;

/// @brief Method UpdateState, addr 0x592945c, size 0xf8, virtual true, abstract: false, final false
inline void UpdateState() ;

/// @brief Method UpdateStatePlaying, addr 0x5929708, size 0x50, virtual false, abstract: false, final false
inline void UpdateStatePlaying() ;

/// @brief Method UpdateStatePostRound, addr 0x5929758, size 0x34, virtual false, abstract: false, final false
inline void UpdateStatePostRound() ;

/// @brief Method UpdateStateStartingCountdown, addr 0x59296c8, size 0x40, virtual false, abstract: false, final false
inline void UpdateStateStartingCountdown() ;

/// @brief Method UpdateStateWaitingForPlayers, addr 0x5929554, size 0x174, virtual false, abstract: false, final false
inline void UpdateStateWaitingForPlayers() ;

/// [CompilerGenerated]
/// @brief Method <PingRoom>b__67_0, addr 0x5929e98, size 0xc, virtual false, abstract: false, final false
inline void _PingRoom_b__67_0() ;

constexpr bool const& __cordl_internal_get__ShowDebugPing_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowDebugPing_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>* const& __cordl_internal_get_forceLeaveRoomVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*& __cordl_internal_get_forceLeaveRoomVolumes() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const& __cordl_internal_get_gameState() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState& __cordl_internal_get_gameState() ;

constexpr float_t const& __cordl_internal_get_lastActiveTime() const;

constexpr float_t& __cordl_internal_get_lastActiveTime() ;

constexpr float_t const& __cordl_internal_get_lastWaitingForPlayerPingRoomTime() const;

constexpr float_t& __cordl_internal_get_lastWaitingForPlayerPingRoomTime() ;

constexpr float_t const& __cordl_internal_get_postRoundDuration() const;

constexpr float_t& __cordl_internal_get_postRoundDuration() ;

constexpr float_t const& __cordl_internal_get_roundDuration() const;

constexpr float_t& __cordl_internal_get_roundDuration() ;

constexpr ::UnityW<::GlobalNamespace::RankedMultiplayerScore> const& __cordl_internal_get_scoring() const;

constexpr ::UnityW<::GlobalNamespace::RankedMultiplayerScore>& __cordl_internal_get_scoring() ;

constexpr float_t const& __cordl_internal_get_startCountdownDuration() const;

constexpr float_t& __cordl_internal_get_startCountdownDuration() ;

constexpr float_t const& __cordl_internal_get_stateRemainingTime() const;

constexpr float_t& __cordl_internal_get_stateRemainingTime() ;

constexpr float_t const& __cordl_internal_get_waitingForPlayerPingRoomDuration() const;

constexpr float_t& __cordl_internal_get_waitingForPlayerPingRoomDuration() ;

constexpr void __cordl_internal_set__ShowDebugPing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_forceLeaveRoomVolumes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*  value) ;

constexpr void __cordl_internal_set_gameState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  value) ;

constexpr void __cordl_internal_set_lastActiveTime(float_t  value) ;

constexpr void __cordl_internal_set_lastWaitingForPlayerPingRoomTime(float_t  value) ;

constexpr void __cordl_internal_set_postRoundDuration(float_t  value) ;

constexpr void __cordl_internal_set_roundDuration(float_t  value) ;

constexpr void __cordl_internal_set_scoring(::UnityW<::GlobalNamespace::RankedMultiplayerScore>  value) ;

constexpr void __cordl_internal_set_startCountdownDuration(float_t  value) ;

constexpr void __cordl_internal_set_stateRemainingTime(float_t  value) ;

constexpr void __cordl_internal_set_waitingForPlayerPingRoomDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x5929d74, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPlayerJoined, addr 0x59260ec, size 0xf4, virtual false, abstract: false, final false
static inline void add_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onPlayerLeft, addr 0x59262d4, size 0xf4, virtual false, abstract: false, final false
static inline void add_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onRoundEnd, addr 0x5926674, size 0xdc, virtual false, abstract: false, final false
static inline void add_onRoundEnd(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onRoundStart, addr 0x59264bc, size 0xdc, virtual false, abstract: false, final false
static inline void add_onRoundStart(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onStateChanged, addr 0x5925d24, size 0xf0, virtual false, abstract: false, final false
static inline void add_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onTagOccurred, addr 0x592682c, size 0xf4, virtual false, abstract: false, final false
static inline void add_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onUpdateRemainingTime, addr 0x5925f04, size 0xf4, virtual false, abstract: false, final false
static inline void add_onUpdateRemainingTime(::System::Action_1<float_t>*  value) ;

static inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* getStaticF_onPlayerJoined() ;

static inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* getStaticF_onPlayerLeft() ;

static inline ::System::Action* getStaticF_onRoundEnd() ;

static inline ::System::Action* getStaticF_onRoundStart() ;

static inline ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* getStaticF_onStateChanged() ;

static inline ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>* getStaticF_onTagOccurred() ;

static inline ::System::Action_1<float_t>* getStaticF_onUpdateRemainingTime() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>* getStaticF_scoreboards() ;

/// [CompilerGenerated]
/// @brief Method get_ShowDebugPing, addr 0x5929aec, size 0x8, virtual false, abstract: false, final false
inline bool get_ShowDebugPing() ;

/// [CompilerGenerated]
/// @brief Method remove_onPlayerJoined, addr 0x59261e0, size 0xf4, virtual false, abstract: false, final false
static inline void remove_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onPlayerLeft, addr 0x59263c8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onRoundEnd, addr 0x5926750, size 0xdc, virtual false, abstract: false, final false
static inline void remove_onRoundEnd(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onRoundStart, addr 0x5926598, size 0xdc, virtual false, abstract: false, final false
static inline void remove_onRoundStart(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onStateChanged, addr 0x5925e14, size 0xf0, virtual false, abstract: false, final false
static inline void remove_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onTagOccurred, addr 0x5926920, size 0xf4, virtual false, abstract: false, final false
static inline void remove_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onUpdateRemainingTime, addr 0x5925ff8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_onUpdateRemainingTime(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_onRoundEnd(::System::Action*  value) ;

static inline void setStaticF_onRoundStart(::System::Action*  value) ;

static inline void setStaticF_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value) ;

static inline void setStaticF_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_onUpdateRemainingTime(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShowDebugPing, addr 0x5929af4, size 0x8, virtual false, abstract: false, final false
inline void set_ShowDebugPing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveManager(GorillaTagCompetitiveManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveManager(GorillaTagCompetitiveManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2221};

/// [SerializeField]
/// @brief Field startCountdownDuration, offset: 0x110, size: 0x4, def value: None
 float_t  ___startCountdownDuration;

/// [SerializeField]
/// @brief Field roundDuration, offset: 0x114, size: 0x4, def value: None
 float_t  ___roundDuration;

/// [SerializeField]
/// @brief Field postRoundDuration, offset: 0x118, size: 0x4, def value: None
 float_t  ___postRoundDuration;

/// [SerializeField]
/// @brief Field waitingForPlayerPingRoomDuration, offset: 0x11c, size: 0x4, def value: None
 float_t  ___waitingForPlayerPingRoomDuration;

/// @brief Field gameState, offset: 0x120, size: 0x4, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  ___gameState;

/// @brief Field stateRemainingTime, offset: 0x124, size: 0x4, def value: None
 float_t  ___stateRemainingTime;

/// @brief Field lastActiveTime, offset: 0x128, size: 0x4, def value: None
 float_t  ___lastActiveTime;

/// @brief Field lastWaitingForPlayerPingRoomTime, offset: 0x12c, size: 0x4, def value: None
 float_t  ___lastWaitingForPlayerPingRoomTime;

/// @brief Field scoring, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RankedMultiplayerScore>  ___scoring;

/// @brief Field forceLeaveRoomVolumes, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*  ___forceLeaveRoomVolumes;

/// [CompilerGenerated]
/// @brief Field <ShowDebugPing>k__BackingField, offset: 0x140, size: 0x1, def value: None
 bool  ____ShowDebugPing_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___startCountdownDuration) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___roundDuration) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___postRoundDuration) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___waitingForPlayerPingRoomDuration) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___gameState) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___stateRemainingTime) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___lastActiveTime) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___lastWaitingForPlayerPingRoomTime) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___scoring) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ___forceLeaveRoomVolumes) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager, ____ShowDebugPing_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveManager) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveManager/<>c
class CORDL_TYPE GorillaTagCompetitiveManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaTagCompetitiveManager___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Action_1<::StringW>*  __9__44_0;

/// @brief Field <>9__44_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_1, put=setStaticF___9__44_1)) ::System::Action_1<bool>*  __9__44_1;

static inline ::GlobalNamespace::GorillaTagCompetitiveManager___c* New_ctor() ;

/// @brief Method <OnPlayerEnteredRoom>b__44_0, addr 0x5929f14, size 0xdc, virtual false, abstract: false, final false
inline void _OnPlayerEnteredRoom_b__44_0(::StringW  id) ;

/// @brief Method <OnPlayerEnteredRoom>b__44_1, addr 0x5929ff0, size 0xc4, virtual false, abstract: false, final false
inline void _OnPlayerEnteredRoom_b__44_1(bool  valid) ;

/// @brief Method .ctor, addr 0x5929f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaTagCompetitiveManager___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__44_0() ;

static inline ::System::Action_1<bool>* getStaticF___9__44_1() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaTagCompetitiveManager___c*  value) ;

static inline void setStaticF___9__44_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__44_1(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveManager___c(GorillaTagCompetitiveManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveManager___c(GorillaTagCompetitiveManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
