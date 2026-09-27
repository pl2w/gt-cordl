#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPaintbrawlManager)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlState;
}
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlStatus;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager__StartBattleCountdown_d__49;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager___c__DisplayClass90_0;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class VRRig;
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
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace System {
class Random;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPaintbrawlManager;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager__StartBattleCountdown_d__49;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager___c__DisplayClass90_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPaintbrawlManager*);
MARK_REF_T(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*);
MARK_REF_T(::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPaintbrawlManager*, "", "GorillaPaintbrawlManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*, "", "GorillaPaintbrawlManager/<StartBattleCountdown>d__49");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*, "", "GorillaPaintbrawlManager/<>c__DisplayClass90_0");
// Dependencies GorillaGameManager, GorillaPaintbrawlManager::PaintbrawlState, GorillaPaintbrawlManager::PaintbrawlStatus
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPaintbrawlManager
class CORDL_TYPE GorillaPaintbrawlManager : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
using PaintbrawlState = ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState;

using PaintbrawlStatus = ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus;

using _StartBattleCountdown_d__49 = ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49;

using __c__DisplayClass90_0 = ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0;

/// @brief Field _isDefaultSlingshotSynced, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefaultSlingshotSynced, put=__cordl_internal_set__isDefaultSlingshotSynced)) bool  _isDefaultSlingshotSynced;

/// @brief Field _slingshotPreloadedRigs, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__slingshotPreloadedRigs, put=__cordl_internal_set__slingshotPreloadedRigs)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  _slingshotPreloadedRigs;

/// @brief Field bcount, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_bcount, put=__cordl_internal_set_bcount)) int32_t  bcount;

/// @brief Field coroutineRunning, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_coroutineRunning, put=__cordl_internal_set_coroutineRunning)) bool  coroutineRunning;

/// @brief Field countDownTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_countDownTime, put=__cordl_internal_set_countDownTime)) int32_t  countDownTime;

/// @brief Field currentState, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  currentState;

/// @brief Field hitCooldown, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCooldown, put=__cordl_internal_set_hitCooldown)) float_t  hitCooldown;

/// @brief Field lives, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lives, put=__cordl_internal_set_lives)) int32_t  lives;

/// @brief Field objRef, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_objRef, put=__cordl_internal_set_objRef)) ::System::Object*  objRef;

/// @brief Field outHitTime, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_outHitTime, put=__cordl_internal_set_outHitTime)) float_t  outHitTime;

/// @brief Field outLives, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_outLives, put=__cordl_internal_set_outLives)) int32_t  outLives;

/// @brief Field playerActorNumberArray, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerActorNumberArray, put=__cordl_internal_set_playerActorNumberArray)) ::ArrayW<int32_t>  playerActorNumberArray;

/// @brief Field playerHitTimes, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHitTimes, put=__cordl_internal_set_playerHitTimes)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  playerHitTimes;

/// @brief Field playerInList, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerInList, put=__cordl_internal_set_playerInList)) bool  playerInList;

/// @brief Field playerLives, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLives, put=__cordl_internal_set_playerLives)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  playerLives;

/// @brief Field playerLivesArray, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLivesArray, put=__cordl_internal_set_playerLivesArray)) ::ArrayW<int32_t>  playerLivesArray;

/// @brief Field playerMin, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerMin, put=__cordl_internal_set_playerMin)) float_t  playerMin;

/// @brief Field playerStatusArray, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerStatusArray, put=__cordl_internal_set_playerStatusArray)) ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  playerStatusArray;

/// @brief Field playerStatusDict, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerStatusDict, put=__cordl_internal_set_playerStatusDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  playerStatusDict;

/// @brief Field playerStunTimes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerStunTimes, put=__cordl_internal_set_playerStunTimes)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  playerStunTimes;

/// @brief Field randInt, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_randInt, put=__cordl_internal_set_randInt)) int32_t  randInt;

/// @brief Field rcount, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_rcount, put=__cordl_internal_set_rcount)) int32_t  rcount;

/// @brief Field reusableKeyBuffer, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableKeyBuffer, put=__cordl_internal_set_reusableKeyBuffer)) ::ArrayW<int32_t>  reusableKeyBuffer;

/// @brief Field stunGracePeriod, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_stunGracePeriod, put=__cordl_internal_set_stunGracePeriod)) float_t  stunGracePeriod;

/// @brief Field tagCoolDown, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCoolDown, put=__cordl_internal_set_tagCoolDown)) float_t  tagCoolDown;

/// @brief Field teamBattle, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_teamBattle, put=__cordl_internal_set_teamBattle)) bool  teamBattle;

/// @brief Field tempStatus, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempStatus, put=__cordl_internal_set_tempStatus)) ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  tempStatus;

/// @brief Field tempView, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempView, put=__cordl_internal_set_tempView)) ::UnityW<::GlobalNamespace::NetworkView>  tempView;

/// @brief Field timeBattleEnded, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBattleEnded, put=__cordl_internal_set_timeBattleEnded)) float_t  timeBattleEnded;

/// @brief Method ActivateDefaultSlingShot, addr 0x591bc44, size 0x234, virtual false, abstract: false, final false
inline void ActivateDefaultSlingShot() ;

/// @brief Method ActivatePaintbrawlBalloons, addr 0x591b94c, size 0x158, virtual false, abstract: false, final false
inline void ActivatePaintbrawlBalloons(bool  enable) ;

/// @brief Method AddFusionDataBehaviour, addr 0x591bab8, size 0x74, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method AddPlayerToCorrectTeam, addr 0x591e2f4, size 0x3ec, virtual false, abstract: false, final false
inline void AddPlayerToCorrectTeam(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method Awake, addr 0x591c044, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BattleEnd, addr 0x591cfd4, size 0x2c, virtual false, abstract: false, final false
inline bool BattleEnd() ;

/// @brief Method CanAffectPlayer, addr 0x591e0ec, size 0x90, virtual true, abstract: false, final false
inline bool CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame) ;

/// @brief Method CheckForGameEnd, addr 0x591caf8, size 0x320, virtual false, abstract: false, final false
inline bool CheckForGameEnd() ;

/// @brief Method ClearFlag, addr 0x591f8e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus ClearFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag) ;

/// @brief Method CopyArrayToBattleDict, addr 0x591e9f8, size 0x2cc, virtual false, abstract: false, final false
inline void CopyArrayToBattleDict() ;

/// @brief Method CopyBattleDictToArray, addr 0x591c174, size 0x29c, virtual false, abstract: false, final false
inline void CopyBattleDictToArray() ;

/// @brief Method CopyDictKeysToBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline int32_t CopyDictKeysToBuffer(::System::Collections::Generic::Dictionary_2<int32_t,T>*  dict) ;

/// @brief Method EndBattleGame, addr 0x591ced8, size 0xfc, virtual false, abstract: false, final false
inline bool EndBattleGame() ;

/// @brief Method FlagIsSet, addr 0x591f8f0, size 0xc, virtual false, abstract: false, final false
inline bool FlagIsSet(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag) ;

/// @brief Method GameModeName, addr 0x591bb2c, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x591bb6c, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x591bab0, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetPlayerLives, addr 0x591dd40, size 0x88, virtual false, abstract: false, final false
inline int32_t GetPlayerLives(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerStatus, addr 0x591de7c, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerStatus(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerTeam, addr 0x591f840, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerTeam(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GetPlayerTeam, addr 0x591f830, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status) ;

/// @brief Method HasFlag, addr 0x591baa4, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  state, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  statusFlag) ;

/// @brief Method HitPlayer, addr 0x591dfc0, size 0x12c, virtual true, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method InfrequentUpdate, addr 0x591f494, size 0x350, virtual true, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method InitializePlayerStatus, addr 0x591ce18, size 0xc0, virtual false, abstract: false, final false
inline void InitializePlayerStatus() ;

/// @brief Method LocalCanHit, addr 0x591f898, size 0x40, virtual false, abstract: false, final false
inline bool LocalCanHit(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalCanTag, addr 0x591f85c, size 0x8, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x591f864, size 0x18, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlayerSpeed, addr 0x591f2c4, size 0x13c, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method MyMatIndex, addr 0x591f1f8, size 0xbc, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NetworkLinkSetup, addr 0x591c99c, size 0x80, virtual true, abstract: false, final false
inline void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer) ;

static inline ::GlobalNamespace::GorillaPaintbrawlManager* New_ctor() ;

/// @brief Method OnBlueTeam, addr 0x591f7f8, size 0x14, virtual false, abstract: false, final false
inline bool OnBlueTeam(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnBlueTeam, addr 0x591f2bc, size 0x8, virtual false, abstract: false, final false
inline bool OnBlueTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status) ;

/// @brief Method OnNoTeam, addr 0x591f818, size 0x18, virtual false, abstract: false, final false
inline bool OnNoTeam(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnNoTeam, addr 0x591f80c, size 0xc, virtual false, abstract: false, final false
inline bool OnNoTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x591e17c, size 0x178, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x591e6e0, size 0x148, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnRedTeam, addr 0x591f7e4, size 0x14, virtual false, abstract: false, final false
inline bool OnRedTeam(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnRedTeam, addr 0x591f2b4, size 0x8, virtual false, abstract: false, final false
inline bool OnRedTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status) ;

/// @brief Method OnSameTeam, addr 0x591dcf8, size 0x48, virtual false, abstract: false, final false
inline bool OnSameTeam(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnSameTeam, addr 0x591f87c, size 0x1c, virtual false, abstract: false, final false
inline bool OnSameTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  playerA, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  playerB) ;

/// @brief Method OnSerializeRead, addr 0x591e828, size 0x1d0, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x591eff0, size 0x208, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x591ecc4, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x591ee80, size 0x170, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerInHitCooldown, addr 0x591ddc8, size 0xb4, virtual false, abstract: false, final false
inline bool PlayerInHitCooldown(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayerInStunCooldown, addr 0x591df08, size 0xb8, virtual false, abstract: false, final false
inline bool PlayerInStunCooldown(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PreloadSlingshotForActiveRigs, addr 0x591be78, size 0x1cc, virtual false, abstract: false, final false
inline void PreloadSlingshotForActiveRigs(::StringW  caller) ;

/// @brief Method RandomizeTeams, addr 0x591d000, size 0x39c, virtual false, abstract: false, final false
inline void RandomizeTeams() ;

/// @brief Method ReportSlingshotHit, addr 0x591d8d4, size 0x424, virtual false, abstract: false, final false
inline void ReportSlingshotHit(::GlobalNamespace::NetPlayer*  taggedPlayer, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ResetGame, addr 0x591c864, size 0x138, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method SetFlag, addr 0x591f8d8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus SetFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag) ;

/// @brief Method SetFlagExclusive, addr 0x591f8e0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus SetFlagExclusive(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag) ;

/// @brief Method SlingshotHit, addr 0x591d858, size 0x7c, virtual false, abstract: false, final false
inline bool SlingshotHit(::GlobalNamespace::NetPlayer*  myPlayer, ::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method StartBattle, addr 0x591d408, size 0x1e4, virtual false, abstract: false, final false
inline void StartBattle() ;

/// [IteratorStateMachine(typeof(GorillaPaintbrawlManager::<StartBattleCountdown>d__49))]
/// @brief Method StartBattleCountdown, addr 0x591d39c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartBattleCountdown() ;

/// @brief Method StartPlaying, addr 0x591c064, size 0x110, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x591c6b4, size 0x1b0, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x591f400, size 0x94, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method Transition, addr 0x591ca1c, size 0xdc, virtual false, abstract: false, final false
inline void Transition(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  newState) ;

/// @brief Method UpdateBattleState, addr 0x591c410, size 0x2a4, virtual false, abstract: false, final false
inline void UpdateBattleState() ;

/// @brief Method UpdatePlayerStatus, addr 0x591d5ec, size 0x244, virtual false, abstract: false, final false
inline void UpdatePlayerStatus() ;

/// @brief Method VerifyPlayersInDict, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void VerifyPlayersInDict(::System::Collections::Generic::Dictionary_2<int32_t,T>*  dict) ;

constexpr bool const& __cordl_internal_get__isDefaultSlingshotSynced() const;

constexpr bool& __cordl_internal_get__isDefaultSlingshotSynced() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get__slingshotPreloadedRigs() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get__slingshotPreloadedRigs() ;

constexpr int32_t const& __cordl_internal_get_bcount() const;

constexpr int32_t& __cordl_internal_get_bcount() ;

constexpr bool const& __cordl_internal_get_coroutineRunning() const;

constexpr bool& __cordl_internal_get_coroutineRunning() ;

constexpr int32_t const& __cordl_internal_get_countDownTime() const;

constexpr int32_t& __cordl_internal_get_countDownTime() ;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_hitCooldown() const;

constexpr float_t& __cordl_internal_get_hitCooldown() ;

constexpr int32_t const& __cordl_internal_get_lives() const;

constexpr int32_t& __cordl_internal_get_lives() ;

constexpr ::System::Object* const& __cordl_internal_get_objRef() const;

constexpr ::System::Object*& __cordl_internal_get_objRef() ;

constexpr float_t const& __cordl_internal_get_outHitTime() const;

constexpr float_t& __cordl_internal_get_outHitTime() ;

constexpr int32_t const& __cordl_internal_get_outLives() const;

constexpr int32_t& __cordl_internal_get_outLives() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_playerActorNumberArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_playerActorNumberArray() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_playerHitTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_playerHitTimes() ;

constexpr bool const& __cordl_internal_get_playerInList() const;

constexpr bool& __cordl_internal_get_playerInList() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_playerLives() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_playerLives() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_playerLivesArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_playerLivesArray() ;

constexpr float_t const& __cordl_internal_get_playerMin() const;

constexpr float_t& __cordl_internal_get_playerMin() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> const& __cordl_internal_get_playerStatusArray() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>& __cordl_internal_get_playerStatusArray() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* const& __cordl_internal_get_playerStatusDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*& __cordl_internal_get_playerStatusDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_playerStunTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_playerStunTimes() ;

constexpr int32_t const& __cordl_internal_get_randInt() const;

constexpr int32_t& __cordl_internal_get_randInt() ;

constexpr int32_t const& __cordl_internal_get_rcount() const;

constexpr int32_t& __cordl_internal_get_rcount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_reusableKeyBuffer() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_reusableKeyBuffer() ;

constexpr float_t const& __cordl_internal_get_stunGracePeriod() const;

constexpr float_t& __cordl_internal_get_stunGracePeriod() ;

constexpr float_t const& __cordl_internal_get_tagCoolDown() const;

constexpr float_t& __cordl_internal_get_tagCoolDown() ;

constexpr bool const& __cordl_internal_get_teamBattle() const;

constexpr bool& __cordl_internal_get_teamBattle() ;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const& __cordl_internal_get_tempStatus() const;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus& __cordl_internal_get_tempStatus() ;

constexpr ::UnityW<::GlobalNamespace::NetworkView> const& __cordl_internal_get_tempView() const;

constexpr ::UnityW<::GlobalNamespace::NetworkView>& __cordl_internal_get_tempView() ;

constexpr float_t const& __cordl_internal_get_timeBattleEnded() const;

constexpr float_t& __cordl_internal_get_timeBattleEnded() ;

constexpr void __cordl_internal_set__isDefaultSlingshotSynced(bool  value) ;

constexpr void __cordl_internal_set__slingshotPreloadedRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_bcount(int32_t  value) ;

constexpr void __cordl_internal_set_coroutineRunning(bool  value) ;

constexpr void __cordl_internal_set_countDownTime(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  value) ;

constexpr void __cordl_internal_set_hitCooldown(float_t  value) ;

constexpr void __cordl_internal_set_lives(int32_t  value) ;

constexpr void __cordl_internal_set_objRef(::System::Object*  value) ;

constexpr void __cordl_internal_set_outHitTime(float_t  value) ;

constexpr void __cordl_internal_set_outLives(int32_t  value) ;

constexpr void __cordl_internal_set_playerActorNumberArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_playerHitTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_playerInList(bool  value) ;

constexpr void __cordl_internal_set_playerLives(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_playerLivesArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_playerMin(float_t  value) ;

constexpr void __cordl_internal_set_playerStatusArray(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value) ;

constexpr void __cordl_internal_set_playerStatusDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  value) ;

constexpr void __cordl_internal_set_playerStunTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_randInt(int32_t  value) ;

constexpr void __cordl_internal_set_rcount(int32_t  value) ;

constexpr void __cordl_internal_set_reusableKeyBuffer(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_stunGracePeriod(float_t  value) ;

constexpr void __cordl_internal_set_tagCoolDown(float_t  value) ;

constexpr void __cordl_internal_set_teamBattle(bool  value) ;

constexpr void __cordl_internal_set_tempStatus(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  value) ;

constexpr void __cordl_internal_set_tempView(::UnityW<::GlobalNamespace::NetworkView>  value) ;

constexpr void __cordl_internal_set_timeBattleEnded(float_t  value) ;

/// @brief Method .ctor, addr 0x591f904, size 0x288, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPaintbrawlManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPaintbrawlManager(GorillaPaintbrawlManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPaintbrawlManager(GorillaPaintbrawlManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2209};

/// @brief Field playerMin, offset: 0x90, size: 0x4, def value: None
 float_t  ___playerMin;

/// @brief Field tagCoolDown, offset: 0x94, size: 0x4, def value: None
 float_t  ___tagCoolDown;

/// @brief Field playerLives, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___playerLives;

/// @brief Field playerStatusDict, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  ___playerStatusDict;

/// @brief Field playerHitTimes, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___playerHitTimes;

/// @brief Field playerStunTimes, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___playerStunTimes;

/// @brief Field playerActorNumberArray, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___playerActorNumberArray;

/// @brief Field playerLivesArray, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___playerLivesArray;

/// @brief Field playerStatusArray, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  ___playerStatusArray;

/// @brief Field teamBattle, offset: 0xd0, size: 0x1, def value: None
 bool  ___teamBattle;

/// @brief Field countDownTime, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___countDownTime;

/// @brief Field timeBattleEnded, offset: 0xd8, size: 0x4, def value: None
 float_t  ___timeBattleEnded;

/// @brief Field hitCooldown, offset: 0xdc, size: 0x4, def value: None
 float_t  ___hitCooldown;

/// @brief Field stunGracePeriod, offset: 0xe0, size: 0x4, def value: None
 float_t  ___stunGracePeriod;

/// @brief Field objRef, offset: 0xe8, size: 0x8, def value: None
 ::System::Object*  ___objRef;

/// @brief Field playerInList, offset: 0xf0, size: 0x1, def value: None
 bool  ___playerInList;

/// @brief Field coroutineRunning, offset: 0xf1, size: 0x1, def value: None
 bool  ___coroutineRunning;

/// @brief Field lives, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___lives;

/// @brief Field outLives, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___outLives;

/// @brief Field bcount, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___bcount;

/// @brief Field rcount, offset: 0x100, size: 0x4, def value: None
 int32_t  ___rcount;

/// @brief Field randInt, offset: 0x104, size: 0x4, def value: None
 int32_t  ___randInt;

/// @brief Field outHitTime, offset: 0x108, size: 0x4, def value: None
 float_t  ___outHitTime;

/// @brief Field tempView, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkView>  ___tempView;

/// @brief Field reusableKeyBuffer, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___reusableKeyBuffer;

/// @brief Field tempStatus, offset: 0x120, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  ___tempStatus;

/// @brief Field currentState, offset: 0x124, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  ___currentState;

/// @brief Field _isDefaultSlingshotSynced, offset: 0x128, size: 0x1, def value: None
 bool  ____isDefaultSlingshotSynced;

/// @brief Field _slingshotPreloadedRigs, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  ____slingshotPreloadedRigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerMin) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___tagCoolDown) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerLives) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerStatusDict) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerHitTimes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerStunTimes) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerActorNumberArray) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerLivesArray) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerStatusArray) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___teamBattle) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___countDownTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___timeBattleEnded) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___hitCooldown) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___stunGracePeriod) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___objRef) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___playerInList) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___coroutineRunning) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___lives) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___outLives) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___bcount) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___rcount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___randInt) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___outHitTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___tempView) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___reusableKeyBuffer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___tempStatus) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ___currentState) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ____isDefaultSlingshotSynced) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager, ____slingshotPreloadedRigs) == 0x130, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPaintbrawlManager) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPaintbrawlManager/<StartBattleCountdown>d__49
class CORDL_TYPE GorillaPaintbrawlManager__StartBattleCountdown_d__49 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x591fbac, size 0x388, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x591ff34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x591ff3c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x591ff74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x591fba8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x591d830, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaPaintbrawlManager__StartBattleCountdown_d__49() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager__StartBattleCountdown_d__49", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPaintbrawlManager__StartBattleCountdown_d__49(GorillaPaintbrawlManager__StartBattleCountdown_d__49 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager__StartBattleCountdown_d__49", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPaintbrawlManager__StartBattleCountdown_d__49(GorillaPaintbrawlManager__StartBattleCountdown_d__49 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2208};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPaintbrawlManager/<>c__DisplayClass90_0
class CORDL_TYPE GorillaPaintbrawlManager___c__DisplayClass90_0 : public ::System::Object {
public:
// Declarations
/// @brief Field rand, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rand, put=__cordl_internal_set_rand)) ::System::Random*  rand;

static inline ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0* New_ctor() ;

/// @brief Method <RandomizeTeams>b__0, addr 0x591fb8c, size 0x1c, virtual false, abstract: false, final false
inline int32_t _RandomizeTeams_b__0(int32_t  x) ;

constexpr ::System::Random* const& __cordl_internal_get_rand() const;

constexpr ::System::Random*& __cordl_internal_get_rand() ;

constexpr void __cordl_internal_set_rand(::System::Random*  value) ;

/// @brief Method .ctor, addr 0x591f8fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPaintbrawlManager___c__DisplayClass90_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager___c__DisplayClass90_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPaintbrawlManager___c__DisplayClass90_0(GorillaPaintbrawlManager___c__DisplayClass90_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPaintbrawlManager___c__DisplayClass90_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPaintbrawlManager___c__DisplayClass90_0(GorillaPaintbrawlManager___c__DisplayClass90_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2207};

/// @brief Field rand, offset: 0x10, size: 0x8, def value: None
 ::System::Random*  ___rand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0, ___rand) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
