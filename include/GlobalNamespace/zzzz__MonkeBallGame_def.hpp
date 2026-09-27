#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_GameState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallGame)
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct GameBallId;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct MonkeBallGame_GameState;
}
namespace GlobalNamespace {
struct MonkeBallGame_RPC;
}
namespace GlobalNamespace {
class MonkeBallGoalZone;
}
namespace GlobalNamespace {
class MonkeBallResetGame;
}
namespace GlobalNamespace {
class MonkeBallScoreboard;
}
namespace GlobalNamespace {
class MonkeBallShotclock;
}
namespace GlobalNamespace {
class MonkeBallTeam;
}
namespace GlobalNamespace {
class MonkeBall;
}
namespace GlobalNamespace {
class NetPlayer;
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
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallGame;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallGame*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallGame*, "", "MonkeBallGame");
// [NetworkBehaviourWeaved(0)]
// Dependencies CallLimiter, MonkeBallGame::GameState, NetworkComponent, UnityEngine.Color, UnityEngine.ParticleSystem, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallGame
class CORDL_TYPE MonkeBallGame : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using GameState = ::GlobalNamespace::MonkeBallGame_GameState;

using RPC = ::GlobalNamespace::MonkeBallGame_RPC;

 __declspec(property(get=get_BallLauncher)) ::UnityW<::UnityEngine::Transform>  BallLauncher;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::MonkeBallGame>  Instance;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _ballLauncher, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ballLauncher, put=__cordl_internal_set__ballLauncher)) ::UnityW<::UnityEngine::Transform>  _ballLauncher;

/// @brief Field _callLimiters, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__callLimiters, put=__cordl_internal_set__callLimiters)) ::ArrayW<::GlobalNamespace::CallLimiter*>  _callLimiters;

/// @brief Field _currentPlayerTotal, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPlayerTotal, put=__cordl_internal_set__currentPlayerTotal)) int32_t  _currentPlayerTotal;

/// @brief Field _forceOrigColorDelay, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__forceOrigColorDelay, put=__cordl_internal_set__forceOrigColorDelay)) float_t  _forceOrigColorDelay;

/// @brief Field _forceOrigColorFix, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceOrigColorFix, put=__cordl_internal_set__forceOrigColorFix)) bool  _forceOrigColorFix;

/// @brief Field _forceSync, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceSync, put=__cordl_internal_set__forceSync)) bool  _forceSync;

/// @brief Field _forceSyncDelay, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__forceSyncDelay, put=__cordl_internal_set__forceSyncDelay)) float_t  _forceSyncDelay;

/// @brief Field _frameIndex, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameIndex, put=__cordl_internal_set__frameIndex)) int32_t  _frameIndex;

/// @brief Field _neutralBallStartLocation, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__neutralBallStartLocation, put=__cordl_internal_set__neutralBallStartLocation)) ::UnityW<::UnityEngine::Transform>  _neutralBallStartLocation;

/// @brief Field _setStoredLocalPlayerColor, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get__setStoredLocalPlayerColor, put=__cordl_internal_set__setStoredLocalPlayerColor)) bool  _setStoredLocalPlayerColor;

/// @brief Field _storedLocalPlayerColor, offset 0x14c, size 0x10 
 __declspec(property(get=__cordl_internal_get__storedLocalPlayerColor, put=__cordl_internal_set__storedLocalPlayerColor)) ::UnityEngine::Color  _storedLocalPlayerColor;

/// @brief Field ballLaunchAngleXRange, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchAngleXRange, put=__cordl_internal_set_ballLaunchAngleXRange)) ::UnityEngine::Vector2  ballLaunchAngleXRange;

/// @brief Field ballLaunchAngleYRange, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchAngleYRange, put=__cordl_internal_set_ballLaunchAngleYRange)) ::UnityEngine::Vector2  ballLaunchAngleYRange;

/// @brief Field ballLauncherVelocityRange, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLauncherVelocityRange, put=__cordl_internal_set_ballLauncherVelocityRange)) ::UnityEngine::Vector2  ballLauncherVelocityRange;

/// @brief Field centerResetButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerResetButton, put=__cordl_internal_set_centerResetButton)) ::UnityW<::GlobalNamespace::MonkeBallResetGame>  centerResetButton;

/// @brief Field endZoneEffects, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_endZoneEffects, put=__cordl_internal_set_endZoneEffects)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  endZoneEffects;

/// @brief Field gameDuration, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameDuration, put=__cordl_internal_set_gameDuration)) float_t  gameDuration;

/// @brief Field gameEndTime, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEndTime, put=__cordl_internal_set_gameEndTime)) double_t  gameEndTime;

/// @brief Field gameState, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameState, put=__cordl_internal_set_gameState)) ::GlobalNamespace::MonkeBallGame_GameState  gameState;

/// @brief Field goalZones, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_goalZones, put=__cordl_internal_set_goalZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*  goalZones;

/// @brief Field photonView, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field resetBallPositionOnScore, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetBallPositionOnScore, put=__cordl_internal_set_resetBallPositionOnScore)) bool  resetBallPositionOnScore;

/// @brief Field resetButton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetButton, put=__cordl_internal_set_resetButton)) ::UnityW<::GlobalNamespace::MonkeBallResetGame>  resetButton;

/// @brief Field restrictBallDuration, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_restrictBallDuration, put=__cordl_internal_set_restrictBallDuration)) float_t  restrictBallDuration;

/// @brief Field restrictBallDurationAfterScore, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_restrictBallDurationAfterScore, put=__cordl_internal_set_restrictBallDurationAfterScore)) float_t  restrictBallDurationAfterScore;

/// @brief Field scoreboards, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboards, put=__cordl_internal_set_scoreboards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*  scoreboards;

/// @brief Field shotclocks, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shotclocks, put=__cordl_internal_set_shotclocks)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*  shotclocks;

/// @brief Field startingBalls, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingBalls, put=__cordl_internal_set_startingBalls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*  startingBalls;

/// @brief Field team, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_team, put=__cordl_internal_set_team)) ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*  team;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AssignNetworkListeners, addr 0x57ab130, size 0x1b4, virtual false, abstract: false, final false
inline void AssignNetworkListeners() ;

/// @brief Method Awake, addr 0x57aad84, size 0x3ac, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x57b0288, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x57b0290, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Despawned, addr 0x57ab820, size 0x1c, virtual true, abstract: false, final false
inline void Despawned(::Fusion::NetworkRunner*  runner, bool  hasState) ;

/// @brief Method ForceOriginalColorSync, addr 0x57ac3dc, size 0x350, virtual false, abstract: false, final false
inline void ForceOriginalColorSync() ;

/// @brief Method ForceSyncPlayersVisuals, addr 0x57abdc4, size 0x360, virtual false, abstract: false, final false
inline void ForceSyncPlayersVisuals() ;

/// @brief Method GetCurrentGameState, addr 0x57ac9f0, size 0x484, virtual false, abstract: false, final false
inline void GetCurrentGameState(::by_ref<::ArrayW<int32_t>>  playerIds, ::by_ref<::ArrayW<int32_t>>  playerTeams, ::by_ref<::ArrayW<int32_t>>  scores, ::by_ref<::ArrayW<int64_t>>  packedBallPosRot, ::by_ref<::ArrayW<int64_t>>  packedBallVel) ;

/// @brief Method GetGameState, addr 0x57ad2f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeBallGame_GameState GetGameState() ;

/// @brief Method GetMonkeBall, addr 0x57af424, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MonkeBall> GetMonkeBall(::GlobalNamespace::GameBallId  gameBallId) ;

/// @brief Method GetOtherTeam, addr 0x57a9f2c, size 0x58, virtual false, abstract: false, final false
inline int32_t GetOtherTeam(int32_t  teamId) ;

/// @brief Method GetTeam, addr 0x57aed5c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeBallTeam* GetTeam(int32_t  teamId) ;

/// @brief Method IsMasterClient, addr 0x57abb1c, size 0x50, virtual false, abstract: false, final false
inline bool IsMasterClient() ;

/// @brief Method LaunchBall, addr 0x57aff1c, size 0x330, virtual false, abstract: false, final false
inline void LaunchBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Transform*  launcher, float_t  minVelocity, float_t  maxVelocity, float_t  minXAngle, float_t  maxXAngle, float_t  minYAngle, float_t  maxYAngle) ;

/// @brief Method LaunchBallNeutral, addr 0x57a9cb0, size 0x24, virtual false, abstract: false, final false
inline void LaunchBallNeutral(::GlobalNamespace::GameBallId  gameBallId) ;

/// @brief Method LaunchBallWithTeam, addr 0x57ae7c8, size 0xc, virtual false, abstract: false, final false
inline void LaunchBallWithTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId, ::UnityEngine::Transform*  launcher, ::UnityEngine::Vector2  velocityRange, ::UnityEngine::Vector2  angleXRange, ::UnityEngine::Vector2  angleYRange) ;

static inline ::GlobalNamespace::MonkeBallGame* New_ctor() ;

/// @brief Method OnBallGrabbed, addr 0x57ae778, size 0x30, virtual false, abstract: false, final false
inline void OnBallGrabbed(::GlobalNamespace::GameBallId  gameBallId) ;

/// @brief Method OnDisable, addr 0x57ab708, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57ab5f0, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnterStatePlaying, addr 0x57ad524, size 0x18, virtual false, abstract: false, final false
inline void OnEnterStatePlaying() ;

/// @brief Method OnEnterStatePostGame, addr 0x57ad540, size 0x90, virtual false, abstract: false, final false
inline void OnEnterStatePostGame() ;

/// @brief Method OnEnterStatePostScore, addr 0x57ad53c, size 0x4, virtual false, abstract: false, final false
inline void OnEnterStatePostScore() ;

/// @brief Method OnEnterStatePreGame, addr 0x57ad494, size 0x90, virtual false, abstract: false, final false
inline void OnEnterStatePreGame() ;

/// @brief Method OnMasterClientSwitched, addr 0x57ad02c, size 0x2cc, virtual false, abstract: false, final false
inline void OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerDestroy, addr 0x57a7b0c, size 0xb0, virtual false, abstract: false, final false
inline void OnPlayerDestroy() ;

/// @brief Method OnPlayerJoined, addr 0x57ac72c, size 0x2c4, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerLeft, addr 0x57ace74, size 0x1b8, virtual false, abstract: false, final false
inline void OnPlayerLeft(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayScoreFx, addr 0x57aeb54, size 0x90, virtual false, abstract: false, final false
inline void PlayScoreFx() ;

/// @brief Method ReadDataFusion, addr 0x57b0250, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x57b0258, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RefreshScore, addr 0x57aebe4, size 0x88, virtual false, abstract: false, final false
inline void RefreshScore() ;

/// @brief Method RefreshTeamPlayers, addr 0x57ac124, size 0x2b8, virtual false, abstract: false, final false
inline void RefreshTeamPlayers(bool  playSounds) ;

/// @brief Method RefreshTime, addr 0x57abc68, size 0x15c, virtual false, abstract: false, final false
inline void RefreshTime() ;

/// @brief Method ReportRPCCall, addr 0x57ab3b4, size 0xf0, virtual false, abstract: false, final false
inline void ReportRPCCall(::GlobalNamespace::MonkeBallGame_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info, ::StringW  susReason) ;

/// @brief Method RequestGameState, addr 0x57abb6c, size 0xfc, virtual false, abstract: false, final false
inline void RequestGameState(::GlobalNamespace::MonkeBallGame_GameState  newGameState) ;

/// @brief Method RequestResetBall, addr 0x57aa750, size 0x13c, virtual false, abstract: false, final false
inline void RequestResetBall(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId) ;

/// @brief Method RequestResetGame, addr 0x57ae0e4, size 0xc8, virtual false, abstract: false, final false
inline void RequestResetGame() ;

/// [PunRPC]
/// @brief Method RequestResetGameRPC, addr 0x57ae1ac, size 0x254, virtual false, abstract: false, final false
inline void RequestResetGameRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestRestrictBallToTeam, addr 0x57a9ca4, size 0xc, virtual false, abstract: false, final false
inline void RequestRestrictBallToTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId) ;

/// @brief Method RequestRestrictBallToTeamOnScore, addr 0x57a9f84, size 0xc, virtual false, abstract: false, final false
inline void RequestRestrictBallToTeamOnScore(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId) ;

/// @brief Method RequestScore, addr 0x57ae7d4, size 0x1b0, virtual false, abstract: false, final false
inline void RequestScore(int32_t  teamId) ;

/// [PunRPC]
/// @brief Method RequestSetGameStateRPC, addr 0x57ad5e8, size 0x968, virtual false, abstract: false, final false
inline void RequestSetGameStateRPC(int32_t  newGameState, double_t  newGameEndTime, ::ArrayW<int32_t>  playerIds, ::ArrayW<int32_t>  playerTeams, ::ArrayW<int32_t>  scores, ::ArrayW<int64_t>  packedBallPosRot, ::ArrayW<int64_t>  packedBallVel, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestSetScore, addr 0x57ae400, size 0x150, virtual false, abstract: false, final false
inline void RequestSetScore(int32_t  teamId, int32_t  score) ;

/// @brief Method RequestSetTeam, addr 0x57aedb4, size 0x670, virtual false, abstract: false, final false
inline void RequestSetTeam(int32_t  teamId) ;

/// [PunRPC]
/// @brief Method RequestSetTeamRPC, addr 0x57af4fc, size 0x22c, virtual false, abstract: false, final false
inline void RequestSetTeamRPC(int32_t  teamId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RestrictBallToTeam, addr 0x57afa1c, size 0x1a4, virtual false, abstract: false, final false
inline void RestrictBallToTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId, float_t  restrictDuration) ;

/// @brief Method SetGameState, addr 0x57ad458, size 0x3c, virtual false, abstract: false, final false
inline void SetGameState(::GlobalNamespace::MonkeBallGame_GameState  newGameState) ;

/// [PunRPC]
/// @brief Method SetGameStateRPC, addr 0x57ad300, size 0x158, virtual false, abstract: false, final false
inline void SetGameStateRPC(int32_t  newGameState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SetResetButtonRPC, addr 0x57ae5c0, size 0x1b8, virtual false, abstract: false, final false
inline void SetResetButtonRPC(bool  toggleReset, int32_t  teamId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SetRestrictBallToTeam, addr 0x57afbc0, size 0x2f0, virtual false, abstract: false, final false
inline void SetRestrictBallToTeam(int32_t  gameBallIndex, int32_t  teamId, float_t  restrictDuration, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetScore, addr 0x57adf50, size 0x194, virtual false, abstract: false, final false
inline void SetScore(int32_t  teamId, int32_t  score, bool  playFX) ;

/// [PunRPC]
/// @brief Method SetScoreRPC, addr 0x57ae984, size 0x1d0, virtual false, abstract: false, final false
inline void SetScoreRPC(int32_t  teamId, int32_t  score, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetTeamPlayer, addr 0x57af884, size 0xac, virtual false, abstract: false, final false
inline void SetTeamPlayer(int32_t  teamId, ::Photon::Realtime::Player*  player) ;

/// [PunRPC]
/// @brief Method SetTeamRPC, addr 0x57af728, size 0x15c, virtual false, abstract: false, final false
inline void SetTeamRPC(int32_t  teamId, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x57ab4a4, size 0x14c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x57ab9f0, size 0x12c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method ToggleResetButton, addr 0x57aaa84, size 0x160, virtual false, abstract: false, final false
inline void ToggleResetButton(bool  toggle, int32_t  teamId) ;

/// @brief Method UnassignNetworkListeners, addr 0x57ab83c, size 0x1b4, virtual false, abstract: false, final false
inline void UnassignNetworkListeners() ;

/// @brief Method ValidateCallLimits, addr 0x57ab2e4, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateCallLimits(::GlobalNamespace::MonkeBallGame_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x57b024c, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x57b0254, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__ballLauncher() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__ballLauncher() ;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& __cordl_internal_get__callLimiters() const;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& __cordl_internal_get__callLimiters() ;

constexpr int32_t const& __cordl_internal_get__currentPlayerTotal() const;

constexpr int32_t& __cordl_internal_get__currentPlayerTotal() ;

constexpr float_t const& __cordl_internal_get__forceOrigColorDelay() const;

constexpr float_t& __cordl_internal_get__forceOrigColorDelay() ;

constexpr bool const& __cordl_internal_get__forceOrigColorFix() const;

constexpr bool& __cordl_internal_get__forceOrigColorFix() ;

constexpr bool const& __cordl_internal_get__forceSync() const;

constexpr bool& __cordl_internal_get__forceSync() ;

constexpr float_t const& __cordl_internal_get__forceSyncDelay() const;

constexpr float_t& __cordl_internal_get__forceSyncDelay() ;

constexpr int32_t const& __cordl_internal_get__frameIndex() const;

constexpr int32_t& __cordl_internal_get__frameIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__neutralBallStartLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__neutralBallStartLocation() ;

constexpr bool const& __cordl_internal_get__setStoredLocalPlayerColor() const;

constexpr bool& __cordl_internal_get__setStoredLocalPlayerColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__storedLocalPlayerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__storedLocalPlayerColor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLaunchAngleXRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLaunchAngleXRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLaunchAngleYRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLaunchAngleYRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLauncherVelocityRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLauncherVelocityRange() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame> const& __cordl_internal_get_centerResetButton() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame>& __cordl_internal_get_centerResetButton() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_endZoneEffects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_endZoneEffects() ;

constexpr float_t const& __cordl_internal_get_gameDuration() const;

constexpr float_t& __cordl_internal_get_gameDuration() ;

constexpr double_t const& __cordl_internal_get_gameEndTime() const;

constexpr double_t& __cordl_internal_get_gameEndTime() ;

constexpr ::GlobalNamespace::MonkeBallGame_GameState const& __cordl_internal_get_gameState() const;

constexpr ::GlobalNamespace::MonkeBallGame_GameState& __cordl_internal_get_gameState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>* const& __cordl_internal_get_goalZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*& __cordl_internal_get_goalZones() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr bool const& __cordl_internal_get_resetBallPositionOnScore() const;

constexpr bool& __cordl_internal_get_resetBallPositionOnScore() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame> const& __cordl_internal_get_resetButton() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame>& __cordl_internal_get_resetButton() ;

constexpr float_t const& __cordl_internal_get_restrictBallDuration() const;

constexpr float_t& __cordl_internal_get_restrictBallDuration() ;

constexpr float_t const& __cordl_internal_get_restrictBallDurationAfterScore() const;

constexpr float_t& __cordl_internal_get_restrictBallDurationAfterScore() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>* const& __cordl_internal_get_scoreboards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*& __cordl_internal_get_scoreboards() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>* const& __cordl_internal_get_shotclocks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*& __cordl_internal_get_shotclocks() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>* const& __cordl_internal_get_startingBalls() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*& __cordl_internal_get_startingBalls() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>* const& __cordl_internal_get_team() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*& __cordl_internal_get_team() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ballLauncher(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value) ;

constexpr void __cordl_internal_set__currentPlayerTotal(int32_t  value) ;

constexpr void __cordl_internal_set__forceOrigColorDelay(float_t  value) ;

constexpr void __cordl_internal_set__forceOrigColorFix(bool  value) ;

constexpr void __cordl_internal_set__forceSync(bool  value) ;

constexpr void __cordl_internal_set__forceSyncDelay(float_t  value) ;

constexpr void __cordl_internal_set__frameIndex(int32_t  value) ;

constexpr void __cordl_internal_set__neutralBallStartLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__setStoredLocalPlayerColor(bool  value) ;

constexpr void __cordl_internal_set__storedLocalPlayerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_ballLaunchAngleXRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ballLaunchAngleYRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ballLauncherVelocityRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_centerResetButton(::UnityW<::GlobalNamespace::MonkeBallResetGame>  value) ;

constexpr void __cordl_internal_set_endZoneEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_gameDuration(float_t  value) ;

constexpr void __cordl_internal_set_gameEndTime(double_t  value) ;

constexpr void __cordl_internal_set_gameState(::GlobalNamespace::MonkeBallGame_GameState  value) ;

constexpr void __cordl_internal_set_goalZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_resetBallPositionOnScore(bool  value) ;

constexpr void __cordl_internal_set_resetButton(::UnityW<::GlobalNamespace::MonkeBallResetGame>  value) ;

constexpr void __cordl_internal_set_restrictBallDuration(float_t  value) ;

constexpr void __cordl_internal_set_restrictBallDurationAfterScore(float_t  value) ;

constexpr void __cordl_internal_set_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*  value) ;

constexpr void __cordl_internal_set_shotclocks(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*  value) ;

constexpr void __cordl_internal_set_startingBalls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*  value) ;

constexpr void __cordl_internal_set_team(::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*  value) ;

/// @brief Method .ctor, addr 0x57b025c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MonkeBallGame> getStaticF_Instance() ;

/// @brief Method get_BallLauncher, addr 0x57aad6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_BallLauncher() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x57aad74, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::MonkeBallGame>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x57aad7c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallGame(MonkeBallGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallGame(MonkeBallGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1552};

/// @brief Field startingBalls, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*  ___startingBalls;

/// @brief Field scoreboards, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*  ___scoreboards;

/// @brief Field shotclocks, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*  ___shotclocks;

/// @brief Field goalZones, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*  ___goalZones;

/// [Space]
/// @brief Field resetButton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBallResetGame>  ___resetButton;

/// @brief Field centerResetButton, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBallResetGame>  ___centerResetButton;

/// [Space]
/// @brief Field photonView, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field team, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*  ___team;

/// @brief Field _currentPlayerTotal, offset: 0xe0, size: 0x4, def value: None
 int32_t  ____currentPlayerTotal;

/// [Space]
/// [Tooltip("The length of the game in seconds.")]
/// @brief Field gameDuration, offset: 0xe4, size: 0x4, def value: None
 float_t  ___gameDuration;

/// [Space]
/// [Tooltip("If the ball should be reset to a team starting position after a score. If not set to true then the will reset back to a neutral starting position.")]
/// @brief Field resetBallPositionOnScore, offset: 0xe8, size: 0x1, def value: None
 bool  ___resetBallPositionOnScore;

/// [Tooltip("The duration in which a team is restricted from grabbing the ball after toss.")]
/// @brief Field restrictBallDuration, offset: 0xec, size: 0x4, def value: None
 float_t  ___restrictBallDuration;

/// [Tooltip("The duration in which a team is restricted from grabbing the ball after a score.")]
/// @brief Field restrictBallDurationAfterScore, offset: 0xf0, size: 0x4, def value: None
 float_t  ___restrictBallDurationAfterScore;

/// [Header("Neutral Launcher")]
/// [SerializeField]
/// @brief Field _ballLauncher, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____ballLauncher;

/// [Tooltip("The min/max random velocity of the ball when launched.")]
/// @brief Field ballLauncherVelocityRange, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLauncherVelocityRange;

/// [Tooltip("The min/max random x-angle of the ball when launched.")]
/// @brief Field ballLaunchAngleXRange, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLaunchAngleXRange;

/// [Tooltip("The min/max random y-angle of the ball when launched.")]
/// @brief Field ballLaunchAngleYRange, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLaunchAngleYRange;

/// [Space]
/// [SerializeField]
/// @brief Field _neutralBallStartLocation, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____neutralBallStartLocation;

/// [SerializeField]
/// @brief Field endZoneEffects, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___endZoneEffects;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x128, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field gameState, offset: 0x12c, size: 0x4, def value: None
 ::GlobalNamespace::MonkeBallGame_GameState  ___gameState;

/// @brief Field gameEndTime, offset: 0x130, size: 0x8, def value: None
 double_t  ___gameEndTime;

/// @brief Field _frameIndex, offset: 0x138, size: 0x4, def value: None
 int32_t  ____frameIndex;

/// @brief Field _forceSync, offset: 0x13c, size: 0x1, def value: None
 bool  ____forceSync;

/// @brief Field _forceSyncDelay, offset: 0x140, size: 0x4, def value: None
 float_t  ____forceSyncDelay;

/// @brief Field _forceOrigColorFix, offset: 0x144, size: 0x1, def value: None
 bool  ____forceOrigColorFix;

/// @brief Field _forceOrigColorDelay, offset: 0x148, size: 0x4, def value: None
 float_t  ____forceOrigColorDelay;

/// @brief Field _storedLocalPlayerColor, offset: 0x14c, size: 0x10, def value: None
 ::UnityEngine::Color  ____storedLocalPlayerColor;

/// @brief Field _setStoredLocalPlayerColor, offset: 0x15c, size: 0x1, def value: None
 bool  ____setStoredLocalPlayerColor;

/// @brief Field _callLimiters, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CallLimiter*>  ____callLimiters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___startingBalls) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___scoreboards) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___shotclocks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___goalZones) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___resetButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___centerResetButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___photonView) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___team) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____currentPlayerTotal) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___gameDuration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___resetBallPositionOnScore) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___restrictBallDuration) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___restrictBallDurationAfterScore) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____ballLauncher) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___ballLauncherVelocityRange) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___ballLaunchAngleXRange) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___ballLaunchAngleYRange) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____neutralBallStartLocation) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___endZoneEffects) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____TickRunning_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___gameState) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ___gameEndTime) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____frameIndex) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____forceSync) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____forceSyncDelay) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____forceOrigColorFix) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____forceOrigColorDelay) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____storedLocalPlayerColor) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____setStoredLocalPlayerColor) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallGame, ____callLimiters) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallGame) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
