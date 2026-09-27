#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMoleLevelSO_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameResult_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_WhackAMoleData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WhackAMole)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct WhackAMole_GameResult;
}
namespace GlobalNamespace {
struct WhackAMole_GameState;
}
namespace GlobalNamespace {
struct WhackAMole_WhackAMoleData;
}
namespace GlobalNamespace {
struct WhackAMole___c__DisplayClass85_0;
}
namespace GorillaTagScripts {
class GorillaTimer;
}
namespace GorillaTagScripts {
class MoleTypes;
}
namespace GorillaTagScripts {
class Mole;
}
namespace GorillaTagScripts {
class WhackAMoleLevelSO;
}
namespace GorillaTagScripts {
class WhackAMole__PlayHazardAudio_d__84;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
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
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class WhackAMole;
}
namespace GorillaTagScripts {
class WhackAMole__PlayHazardAudio_d__84;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::WhackAMole*);
MARK_REF_T(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::WhackAMole*, "GorillaTagScripts", "WhackAMole");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*, "GorillaTagScripts", "WhackAMole/<PlayHazardAudio>d__84");
// [NetworkBehaviourWeaved(210)]
// Dependencies GorillaTagScripts.WhackAMole::GameResult, GorillaTagScripts.WhackAMole::GameState, GorillaTagScripts.WhackAMole::WhackAMoleData, GorillaTagScripts.WhackAMoleLevelSO, NetworkComponent, System.DateTime, UnityEngine.AudioClip, UnityEngine.MeshRenderer, UnityEngine.ParticleSystem, UnityEngine.Quaternion, ZoneBasedObject
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.WhackAMole
class CORDL_TYPE WhackAMole : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using GameResult = ::GlobalNamespace::WhackAMole_GameResult;

using GameState = ::GlobalNamespace::WhackAMole_GameState;

using WhackAMoleData = ::GlobalNamespace::WhackAMole_WhackAMoleData;

using __c__DisplayClass85_0 = ::GlobalNamespace::WhackAMole___c__DisplayClass85_0;

using _PlayHazardAudio_d__84 = ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84;

/// @brief Field ContinuePressedUI, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContinuePressedUI, put=__cordl_internal_set_ContinuePressedUI)) ::UnityW<::UnityEngine::GameObject>  ContinuePressedUI;

/// [Networked]
/// @brief [NetworkedWeaved(0, 210)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::WhackAMole_WhackAMoleData  Data;

/// @brief Field _Data, offset 0x274, size 0x348 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::WhackAMole_WhackAMoleData  _Data;

/// @brief Field allLevels, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allLevels, put=__cordl_internal_set_allLevels)) ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>  allLevels;

/// @brief Field arrowRotationNeedsUpdate, offset 0x20c, size 0x1 
 __declspec(property(get=__cordl_internal_get_arrowRotationNeedsUpdate, put=__cordl_internal_set_arrowRotationNeedsUpdate)) bool  arrowRotationNeedsUpdate;

/// @brief Field arrowTargetRotation, offset 0x1fc, size 0x10 
 __declspec(property(get=__cordl_internal_get_arrowTargetRotation, put=__cordl_internal_set_arrowTargetRotation)) ::UnityEngine::Quaternion  arrowTargetRotation;

/// @brief Field audioSource, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field backgroundLoop, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundLoop, put=__cordl_internal_set_backgroundLoop)) ::UnityW<::UnityEngine::AudioClip>  backgroundLoop;

/// @brief Field bestScore, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bestScore, put=__cordl_internal_set_bestScore)) int32_t  bestScore;

/// @brief Field bestScoreText, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestScoreText, put=__cordl_internal_set_bestScoreText)) ::UnityW<::TMPro::TextMeshPro>  bestScoreText;

/// @brief Field betweenLevelPauseDuration, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_betweenLevelPauseDuration, put=__cordl_internal_set_betweenLevelPauseDuration)) int32_t  betweenLevelPauseDuration;

/// @brief Field continuePressedTime, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_continuePressedTime, put=__cordl_internal_set_continuePressedTime)) float_t  continuePressedTime;

/// @brief Field countdownDuration, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_countdownDuration, put=__cordl_internal_set_countdownDuration)) int32_t  countdownDuration;

/// @brief Field counterClip, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_counterClip, put=__cordl_internal_set_counterClip)) ::UnityW<::UnityEngine::AudioClip>  counterClip;

/// @brief Field counterText, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_counterText, put=__cordl_internal_set_counterText)) ::UnityW<::TMPro::TextMeshPro>  counterText;

/// @brief Field curentGameResult, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_curentGameResult, put=__cordl_internal_set_curentGameResult)) ::GlobalNamespace::WhackAMole_GameResult  curentGameResult;

/// @brief Field curentTime, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_curentTime, put=__cordl_internal_set_curentTime)) float_t  curentTime;

/// @brief Field currentLevel, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLevel, put=__cordl_internal_set_currentLevel)) ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>  currentLevel;

/// @brief Field currentLevelIndex, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLevelIndex, put=__cordl_internal_set_currentLevelIndex)) int32_t  currentLevelIndex;

/// @brief Field currentScore, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentScore, put=__cordl_internal_set_currentScore)) int32_t  currentScore;

/// @brief Field currentState, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::WhackAMole_GameState  currentState;

/// @brief Field epoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_epoch, put=setStaticF_epoch)) ::System::DateTime  epoch;

/// @brief Field errorClip, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorClip, put=__cordl_internal_set_errorClip)) ::UnityW<::UnityEngine::AudioClip>  errorClip;

/// @brief Field gameEndedTime, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameEndedTime, put=__cordl_internal_set_gameEndedTime)) float_t  gameEndedTime;

/// @brief Field gameId, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameId, put=__cordl_internal_set_gameId)) int32_t  gameId;

/// @brief Field gameOverClip, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameOverClip, put=__cordl_internal_set_gameOverClip)) ::UnityW<::UnityEngine::AudioClip>  gameOverClip;

/// @brief Field highScorePlayerName, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_highScorePlayerName, put=__cordl_internal_set_highScorePlayerName)) ::StringW  highScorePlayerName;

/// @brief Field isMultiplayer, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMultiplayer, put=__cordl_internal_set_isMultiplayer)) bool  isMultiplayer;

/// @brief Field lastAssignedID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastAssignedID, put=setStaticF_lastAssignedID)) int32_t  lastAssignedID;

/// @brief Field lastState, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::WhackAMole_GameState  lastState;

/// @brief Field leftMolesList, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftMolesList, put=__cordl_internal_set_leftMolesList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  leftMolesList;

/// @brief Field leftPlayerScore, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftPlayerScore, put=__cordl_internal_set_leftPlayerScore)) int32_t  leftPlayerScore;

/// @brief Field leftPlayerScoreText, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPlayerScoreText, put=__cordl_internal_set_leftPlayerScoreText)) ::UnityW<::TMPro::TextMeshPro>  leftPlayerScoreText;

/// @brief Field levelArrow, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelArrow, put=__cordl_internal_set_levelArrow)) ::UnityW<::UnityEngine::GameObject>  levelArrow;

/// @brief Field levelCompleteClip, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelCompleteClip, put=__cordl_internal_set_levelCompleteClip)) ::UnityW<::UnityEngine::AudioClip>  levelCompleteClip;

/// @brief Field levelEndedCountdownText, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelEndedCountdownText, put=__cordl_internal_set_levelEndedCountdownText)) ::UnityW<::TMPro::TextMeshPro>  levelEndedCountdownText;

/// @brief Field levelEndedCurrentScoreText, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelEndedCurrentScoreText, put=__cordl_internal_set_levelEndedCurrentScoreText)) ::UnityW<::TMPro::TextMeshPro>  levelEndedCurrentScoreText;

/// @brief Field levelEndedOptionsText, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelEndedOptionsText, put=__cordl_internal_set_levelEndedOptionsText)) ::UnityW<::TMPro::TextMeshPro>  levelEndedOptionsText;

/// @brief Field levelEndedTotalScoreText, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelEndedTotalScoreText, put=__cordl_internal_set_levelEndedTotalScoreText)) ::UnityW<::TMPro::TextMeshPro>  levelEndedTotalScoreText;

/// @brief Field levelEndedUI, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelEndedUI, put=__cordl_internal_set_levelEndedUI)) ::UnityW<::UnityEngine::GameObject>  levelEndedUI;

/// @brief Field levelGoodMolesPicked, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelGoodMolesPicked, put=__cordl_internal_set_levelGoodMolesPicked)) int32_t  levelGoodMolesPicked;

/// @brief Field levelHazardMolesHit, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelHazardMolesHit, put=__cordl_internal_set_levelHazardMolesHit)) int32_t  levelHazardMolesHit;

/// @brief Field levelHazardMolesPicked, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelHazardMolesPicked, put=__cordl_internal_set_levelHazardMolesPicked)) int32_t  levelHazardMolesPicked;

/// @brief Field machineId, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_machineId, put=__cordl_internal_set_machineId)) ::StringW  machineId;

/// @brief Field molesContainerLeft, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_molesContainerLeft, put=__cordl_internal_set_molesContainerLeft)) ::UnityW<::UnityEngine::GameObject>  molesContainerLeft;

/// @brief Field molesContainerRight, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_molesContainerRight, put=__cordl_internal_set_molesContainerRight)) ::UnityW<::UnityEngine::GameObject>  molesContainerRight;

/// @brief Field molesList, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_molesList, put=__cordl_internal_set_molesList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  molesList;

/// @brief Field multiplyareScoresUI, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiplyareScoresUI, put=__cordl_internal_set_multiplyareScoresUI)) ::UnityW<::UnityEngine::GameObject>  multiplyareScoresUI;

/// @brief Field ongoingGameUI, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_ongoingGameUI, put=__cordl_internal_set_ongoingGameUI)) ::UnityW<::UnityEngine::GameObject>  ongoingGameUI;

/// @brief Field pickedMolesIndex, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_pickedMolesIndex, put=__cordl_internal_set_pickedMolesIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pickedMolesIndex;

/// @brief Field playerId, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) ::StringW  playerId;

/// @brief Field playerName, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::StringW  playerName;

/// @brief Field potentialMoles, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_potentialMoles, put=__cordl_internal_set_potentialMoles)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  potentialMoles;

/// @brief Field previousTime, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousTime, put=__cordl_internal_set_previousTime)) int32_t  previousTime;

/// @brief Field remainingTime, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingTime, put=__cordl_internal_set_remainingTime)) float_t  remainingTime;

/// @brief Field resetToFirstLevel, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetToFirstLevel, put=__cordl_internal_set_resetToFirstLevel)) bool  resetToFirstLevel;

/// @brief Field resultText, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultText, put=__cordl_internal_set_resultText)) ::UnityW<::TMPro::TextMeshPro>  resultText;

/// @brief Field rightMolesList, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightMolesList, put=__cordl_internal_set_rightMolesList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  rightMolesList;

/// @brief Field rightPlayerScore, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightPlayerScore, put=__cordl_internal_set_rightPlayerScore)) int32_t  rightPlayerScore;

/// @brief Field rightPlayerScoreText, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPlayerScoreText, put=__cordl_internal_set_rightPlayerScoreText)) ::UnityW<::TMPro::TextMeshPro>  rightPlayerScoreText;

/// @brief Field scoreText, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreText, put=__cordl_internal_set_scoreText)) ::UnityW<::TMPro::TextMeshPro>  scoreText;

/// @brief Field timeText, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeText, put=__cordl_internal_set_timeText)) ::UnityW<::TMPro::TextMeshPro>  timeText;

/// @brief Field timer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::UnityW<::GorillaTagScripts::GorillaTimer>  timer;

/// @brief Field totalScore, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalScore, put=__cordl_internal_set_totalScore)) int32_t  totalScore;

/// @brief Field victoryFX, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_victoryFX, put=__cordl_internal_set_victoryFX)) ::UnityW<::UnityEngine::GameObject>  victoryFX;

/// @brief Field victoryParticles, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_victoryParticles, put=__cordl_internal_set_victoryParticles)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  victoryParticles;

/// @brief Field wasLocalPlayerInZone, offset 0x271, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasLocalPlayerInZone, put=__cordl_internal_set_wasLocalPlayerInZone)) bool  wasLocalPlayerInZone;

/// @brief Field wasMasterClient, offset 0x270, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasMasterClient, put=__cordl_internal_set_wasMasterClient)) bool  wasMasterClient;

/// @brief Field welcomeUI, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_welcomeUI, put=__cordl_internal_set_welcomeUI)) ::UnityW<::UnityEngine::GameObject>  welcomeUI;

/// @brief Field whackHazardClips, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_whackHazardClips, put=__cordl_internal_set_whackHazardClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  whackHazardClips;

/// @brief Field whackMonkeClips, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_whackMonkeClips, put=__cordl_internal_set_whackMonkeClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  whackMonkeClips;

/// @brief Field winClip, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_winClip, put=__cordl_internal_set_winClip)) ::UnityW<::UnityEngine::AudioClip>  winClip;

/// @brief Field zoneBasedMeshRenderers, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneBasedMeshRenderers, put=__cordl_internal_set_zoneBasedMeshRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  zoneBasedMeshRenderers;

/// @brief Field zoneBasedVisuals, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneBasedVisuals, put=__cordl_internal_set_zoneBasedVisuals)) ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  zoneBasedVisuals;

/// @brief Method Awake, addr 0x5b7c9c0, size 0x50c, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5b80588, size 0x64, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5b805ec, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method CreateNewGameID, addr 0x5b7e3e0, size 0x154, virtual false, abstract: false, final false
static inline int32_t CreateNewGameID() ;

/// @brief Method GetCurrentLevel, addr 0x5b7f54c, size 0x80, virtual false, abstract: false, final false
inline int32_t GetCurrentLevel() ;

/// @brief Method GetGameResult, addr 0x5b7def0, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::WhackAMole_GameResult GetGameResult() ;

/// @brief Method GetTotalLevelNumbers, addr 0x5b7f5cc, size 0x18, virtual false, abstract: false, final false
inline int32_t GetTotalLevelNumbers() ;

/// @brief Method HandleOnTimerStopped, addr 0x5b7e6b0, size 0x24, virtual false, abstract: false, final false
inline void HandleOnTimerStopped() ;

/// @brief Method InvokeUpdate, addr 0x5b7da98, size 0x16c, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

/// @brief Method LoadNextLevel, addr 0x5b7e018, size 0x1fc, virtual false, abstract: false, final false
inline void LoadNextLevel() ;

static inline ::GorillaTagScripts::WhackAMole* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b7d77c, size 0x2c4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnMoleTapped, addr 0x5b7e534, size 0x17c, virtual false, abstract: false, final false
inline void OnMoleTapped(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeftHand) ;

/// @brief Method OnOwnerSwitched, addr 0x5b802a4, size 0x104, virtual true, abstract: false, final false
inline void OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer) ;

/// @brief Method OnStartButtonPressed, addr 0x5b7f068, size 0xe4, virtual false, abstract: false, final false
inline void OnStartButtonPressed() ;

/// @brief Method PickMoles, addr 0x5b7e784, size 0x170, virtual false, abstract: false, final false
inline bool PickMoles() ;

/// @brief Method PickSingleMole, addr 0x5b7ed30, size 0x120, virtual false, abstract: false, final false
inline bool PickSingleMole(int32_t  randomMoleIndex, float_t  hazardMoleChance) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.WhackAMole::<PlayHazardAudio>d__84))]
/// @brief Method PlayHazardAudio, addr 0x5b7e6d4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayHazardAudio(::UnityEngine::AudioClip*  clip) ;

/// [Rpc]
/// @brief Method RPC_WhackAMoleButtonPressed, addr 0x5b7f36c, size 0x1e0, virtual false, abstract: false, final false
inline void RPC_WhackAMoleButtonPressed(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_WhackAMoleButtonPressed@Invoker, addr 0x5b80650, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_WhackAMoleButtonPressed@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ReadDataFusion, addr 0x5b7fabc, size 0x358, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5b802a0, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x5b7fe5c, size 0x2f4, virtual false, abstract: false, final false
inline void ReadDataShared(::GlobalNamespace::WhackAMole_GameState  _currentState, int32_t  _currentLevelIndex, int32_t  cScore, int32_t  tScore, int32_t  bScore, int32_t  rPScore, ::StringW  hScorePName, float_t  _remainingTime, float_t  endedTime, int32_t  _gameId) ;

/// @brief Method ResetGame, addr 0x5b7dc04, size 0x12c, virtual false, abstract: false, final false
inline void ResetGame() ;

/// @brief Method Start, addr 0x5b7cecc, size 0xc8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchState, addr 0x5b7cf94, size 0x790, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::WhackAMole_GameState  state) ;

/// @brief Method UpdateArrowRotation, addr 0x5b7ee50, size 0x170, virtual false, abstract: false, final false
inline void UpdateArrowRotation() ;

/// @brief Method UpdateLevelUI, addr 0x5b7dd30, size 0x54, virtual false, abstract: false, final false
inline void UpdateLevelUI(int32_t  levelNumber) ;

/// @brief Method UpdateMeshRendererList, addr 0x5b7c7ec, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateMeshRendererList() ;

/// @brief Method UpdateResultUI, addr 0x5b7df48, size 0xc0, virtual false, abstract: false, final false
inline void UpdateResultUI(::GlobalNamespace::WhackAMole_GameResult  gameResult) ;

/// @brief Method UpdateScoreUI, addr 0x5b7dd84, size 0x16c, virtual false, abstract: false, final false
inline void UpdateScoreUI(int32_t  totalScore, int32_t  _leftPlayerScore, int32_t  _rightPlayerScore) ;

/// @brief Method UpdateScreenData, addr 0x5b7e214, size 0x1cc, virtual false, abstract: false, final false
inline void UpdateScreenData() ;

/// @brief Method UpdateTimerUI, addr 0x5b7efc0, size 0xa8, virtual false, abstract: false, final false
inline void UpdateTimerUI(int32_t  time) ;

/// [PunRPC]
/// @brief Method WhackAMoleButtonPressed, addr 0x5b7f14c, size 0x58, virtual false, abstract: false, final false
inline void WhackAMoleButtonPressed(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WhackAMoleButtonPressedShared, addr 0x5b7f1a4, size 0x1c8, virtual false, abstract: false, final false
inline void WhackAMoleButtonPressedShared(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method WriteDataFusion, addr 0x5b7f6a0, size 0x150, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5b8029c, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <PickMoles>g__PickMolesFrom|85_0, addr 0x5b7e8f4, size 0x43c, virtual false, abstract: false, final false
inline void _PickMoles_g__PickMolesFrom_85_0(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  moles, ::by_ref<::GlobalNamespace::WhackAMole___c__DisplayClass85_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ContinuePressedUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ContinuePressedUI() ;

constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData& __cordl_internal_get__Data() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>> const& __cordl_internal_get_allLevels() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>& __cordl_internal_get_allLevels() ;

constexpr bool const& __cordl_internal_get_arrowRotationNeedsUpdate() const;

constexpr bool& __cordl_internal_get_arrowRotationNeedsUpdate() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_arrowTargetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_arrowTargetRotation() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_backgroundLoop() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_backgroundLoop() ;

constexpr int32_t const& __cordl_internal_get_bestScore() const;

constexpr int32_t& __cordl_internal_get_bestScore() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_bestScoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_bestScoreText() ;

constexpr int32_t const& __cordl_internal_get_betweenLevelPauseDuration() const;

constexpr int32_t& __cordl_internal_get_betweenLevelPauseDuration() ;

constexpr float_t const& __cordl_internal_get_continuePressedTime() const;

constexpr float_t& __cordl_internal_get_continuePressedTime() ;

constexpr int32_t const& __cordl_internal_get_countdownDuration() const;

constexpr int32_t& __cordl_internal_get_countdownDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_counterClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_counterClip() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_counterText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_counterText() ;

constexpr ::GlobalNamespace::WhackAMole_GameResult const& __cordl_internal_get_curentGameResult() const;

constexpr ::GlobalNamespace::WhackAMole_GameResult& __cordl_internal_get_curentGameResult() ;

constexpr float_t const& __cordl_internal_get_curentTime() const;

constexpr float_t& __cordl_internal_get_curentTime() ;

constexpr ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO> const& __cordl_internal_get_currentLevel() const;

constexpr ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>& __cordl_internal_get_currentLevel() ;

constexpr int32_t const& __cordl_internal_get_currentLevelIndex() const;

constexpr int32_t& __cordl_internal_get_currentLevelIndex() ;

constexpr int32_t const& __cordl_internal_get_currentScore() const;

constexpr int32_t& __cordl_internal_get_currentScore() ;

constexpr ::GlobalNamespace::WhackAMole_GameState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::WhackAMole_GameState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_errorClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_errorClip() ;

constexpr float_t const& __cordl_internal_get_gameEndedTime() const;

constexpr float_t& __cordl_internal_get_gameEndedTime() ;

constexpr int32_t const& __cordl_internal_get_gameId() const;

constexpr int32_t& __cordl_internal_get_gameId() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_gameOverClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_gameOverClip() ;

constexpr ::StringW const& __cordl_internal_get_highScorePlayerName() const;

constexpr ::StringW& __cordl_internal_get_highScorePlayerName() ;

constexpr bool const& __cordl_internal_get_isMultiplayer() const;

constexpr bool& __cordl_internal_get_isMultiplayer() ;

constexpr ::GlobalNamespace::WhackAMole_GameState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::WhackAMole_GameState& __cordl_internal_get_lastState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& __cordl_internal_get_leftMolesList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& __cordl_internal_get_leftMolesList() ;

constexpr int32_t const& __cordl_internal_get_leftPlayerScore() const;

constexpr int32_t& __cordl_internal_get_leftPlayerScore() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_leftPlayerScoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_leftPlayerScoreText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_levelArrow() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_levelArrow() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_levelCompleteClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_levelCompleteClip() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_levelEndedCountdownText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_levelEndedCountdownText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_levelEndedCurrentScoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_levelEndedCurrentScoreText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_levelEndedOptionsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_levelEndedOptionsText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_levelEndedTotalScoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_levelEndedTotalScoreText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_levelEndedUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_levelEndedUI() ;

constexpr int32_t const& __cordl_internal_get_levelGoodMolesPicked() const;

constexpr int32_t& __cordl_internal_get_levelGoodMolesPicked() ;

constexpr int32_t const& __cordl_internal_get_levelHazardMolesHit() const;

constexpr int32_t& __cordl_internal_get_levelHazardMolesHit() ;

constexpr int32_t const& __cordl_internal_get_levelHazardMolesPicked() const;

constexpr int32_t& __cordl_internal_get_levelHazardMolesPicked() ;

constexpr ::StringW const& __cordl_internal_get_machineId() const;

constexpr ::StringW& __cordl_internal_get_machineId() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_molesContainerLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_molesContainerLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_molesContainerRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_molesContainerRight() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& __cordl_internal_get_molesList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& __cordl_internal_get_molesList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_multiplyareScoresUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_multiplyareScoresUI() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ongoingGameUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ongoingGameUI() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_pickedMolesIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_pickedMolesIndex() ;

constexpr ::StringW const& __cordl_internal_get_playerId() const;

constexpr ::StringW& __cordl_internal_get_playerId() ;

constexpr ::StringW const& __cordl_internal_get_playerName() const;

constexpr ::StringW& __cordl_internal_get_playerName() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& __cordl_internal_get_potentialMoles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& __cordl_internal_get_potentialMoles() ;

constexpr int32_t const& __cordl_internal_get_previousTime() const;

constexpr int32_t& __cordl_internal_get_previousTime() ;

constexpr float_t const& __cordl_internal_get_remainingTime() const;

constexpr float_t& __cordl_internal_get_remainingTime() ;

constexpr bool const& __cordl_internal_get_resetToFirstLevel() const;

constexpr bool& __cordl_internal_get_resetToFirstLevel() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_resultText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_resultText() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& __cordl_internal_get_rightMolesList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& __cordl_internal_get_rightMolesList() ;

constexpr int32_t const& __cordl_internal_get_rightPlayerScore() const;

constexpr int32_t& __cordl_internal_get_rightPlayerScore() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_rightPlayerScoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_rightPlayerScoreText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_scoreText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_scoreText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timeText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timeText() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& __cordl_internal_get_timer() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& __cordl_internal_get_timer() ;

constexpr int32_t const& __cordl_internal_get_totalScore() const;

constexpr int32_t& __cordl_internal_get_totalScore() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_victoryFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_victoryFX() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_victoryParticles() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_victoryParticles() ;

constexpr bool const& __cordl_internal_get_wasLocalPlayerInZone() const;

constexpr bool& __cordl_internal_get_wasLocalPlayerInZone() ;

constexpr bool const& __cordl_internal_get_wasMasterClient() const;

constexpr bool& __cordl_internal_get_wasMasterClient() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_welcomeUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_welcomeUI() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_whackHazardClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_whackHazardClips() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_whackMonkeClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_whackMonkeClips() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_winClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_winClip() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_zoneBasedMeshRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_zoneBasedMeshRenderers() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& __cordl_internal_get_zoneBasedVisuals() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& __cordl_internal_get_zoneBasedVisuals() ;

constexpr void __cordl_internal_set_ContinuePressedUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::WhackAMole_WhackAMoleData  value) ;

constexpr void __cordl_internal_set_allLevels(::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>  value) ;

constexpr void __cordl_internal_set_arrowRotationNeedsUpdate(bool  value) ;

constexpr void __cordl_internal_set_arrowTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_backgroundLoop(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_bestScore(int32_t  value) ;

constexpr void __cordl_internal_set_bestScoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_betweenLevelPauseDuration(int32_t  value) ;

constexpr void __cordl_internal_set_continuePressedTime(float_t  value) ;

constexpr void __cordl_internal_set_countdownDuration(int32_t  value) ;

constexpr void __cordl_internal_set_counterClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_counterText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_curentGameResult(::GlobalNamespace::WhackAMole_GameResult  value) ;

constexpr void __cordl_internal_set_curentTime(float_t  value) ;

constexpr void __cordl_internal_set_currentLevel(::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>  value) ;

constexpr void __cordl_internal_set_currentLevelIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentScore(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::WhackAMole_GameState  value) ;

constexpr void __cordl_internal_set_errorClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_gameEndedTime(float_t  value) ;

constexpr void __cordl_internal_set_gameId(int32_t  value) ;

constexpr void __cordl_internal_set_gameOverClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_highScorePlayerName(::StringW  value) ;

constexpr void __cordl_internal_set_isMultiplayer(bool  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::WhackAMole_GameState  value) ;

constexpr void __cordl_internal_set_leftMolesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value) ;

constexpr void __cordl_internal_set_leftPlayerScore(int32_t  value) ;

constexpr void __cordl_internal_set_leftPlayerScoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_levelArrow(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_levelCompleteClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_levelEndedCountdownText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_levelEndedCurrentScoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_levelEndedOptionsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_levelEndedTotalScoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_levelEndedUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_levelGoodMolesPicked(int32_t  value) ;

constexpr void __cordl_internal_set_levelHazardMolesHit(int32_t  value) ;

constexpr void __cordl_internal_set_levelHazardMolesPicked(int32_t  value) ;

constexpr void __cordl_internal_set_machineId(::StringW  value) ;

constexpr void __cordl_internal_set_molesContainerLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_molesContainerRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_molesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value) ;

constexpr void __cordl_internal_set_multiplyareScoresUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ongoingGameUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pickedMolesIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_playerId(::StringW  value) ;

constexpr void __cordl_internal_set_playerName(::StringW  value) ;

constexpr void __cordl_internal_set_potentialMoles(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value) ;

constexpr void __cordl_internal_set_previousTime(int32_t  value) ;

constexpr void __cordl_internal_set_remainingTime(float_t  value) ;

constexpr void __cordl_internal_set_resetToFirstLevel(bool  value) ;

constexpr void __cordl_internal_set_resultText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_rightMolesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value) ;

constexpr void __cordl_internal_set_rightPlayerScore(int32_t  value) ;

constexpr void __cordl_internal_set_rightPlayerScoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_scoreText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_timeText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_timer(::UnityW<::GorillaTagScripts::GorillaTimer>  value) ;

constexpr void __cordl_internal_set_totalScore(int32_t  value) ;

constexpr void __cordl_internal_set_victoryFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_victoryParticles(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_wasLocalPlayerInZone(bool  value) ;

constexpr void __cordl_internal_set_wasMasterClient(bool  value) ;

constexpr void __cordl_internal_set_welcomeUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_whackHazardClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_whackMonkeClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_winClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_zoneBasedMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_zoneBasedVisuals(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value) ;

/// @brief Method .ctor, addr 0x5b803a8, size 0x178, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTime getStaticF_epoch() ;

static inline int32_t getStaticF_lastAssignedID() ;

/// @brief Method get_Data, addr 0x5b7f5e4, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::WhackAMole_WhackAMoleData get_Data() ;

static inline void setStaticF_epoch(::System::DateTime  value) ;

static inline void setStaticF_lastAssignedID(int32_t  value) ;

/// @brief Method set_Data, addr 0x5b7f644, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::WhackAMole_WhackAMoleData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhackAMole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhackAMole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhackAMole(WhackAMole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhackAMole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhackAMole(WhackAMole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3914};

/// @brief Field machineId, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___machineId;

/// @brief Field molesContainerRight, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___molesContainerRight;

/// [Tooltip("Only for co-op version")]
/// @brief Field molesContainerLeft, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___molesContainerLeft;

/// @brief Field betweenLevelPauseDuration, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___betweenLevelPauseDuration;

/// @brief Field countdownDuration, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___countdownDuration;

/// @brief Field allLevels, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>  ___allLevels;

/// [SerializeField]
/// @brief Field timer, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaTimer>  ___timer;

/// [SerializeField]
/// @brief Field audioSource, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field levelArrow, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___levelArrow;

/// @brief Field victoryFX, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___victoryFX;

/// @brief Field zoneBasedVisuals, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  ___zoneBasedVisuals;

/// [SerializeField]
/// @brief Field zoneBasedMeshRenderers, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___zoneBasedMeshRenderers;

/// [Space]
/// @brief Field backgroundLoop, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___backgroundLoop;

/// @brief Field errorClip, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___errorClip;

/// @brief Field counterClip, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___counterClip;

/// @brief Field levelCompleteClip, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___levelCompleteClip;

/// @brief Field winClip, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___winClip;

/// @brief Field gameOverClip, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___gameOverClip;

/// @brief Field whackHazardClips, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___whackHazardClips;

/// @brief Field whackMonkeClips, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___whackMonkeClips;

/// [Space]
/// @brief Field welcomeUI, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___welcomeUI;

/// @brief Field ongoingGameUI, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ongoingGameUI;

/// @brief Field levelEndedUI, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___levelEndedUI;

/// @brief Field ContinuePressedUI, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ContinuePressedUI;

/// @brief Field multiplyareScoresUI, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___multiplyareScoresUI;

/// [Space]
/// @brief Field scoreText, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___scoreText;

/// @brief Field bestScoreText, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___bestScoreText;

/// [Tooltip("Only for co-op version")]
/// @brief Field rightPlayerScoreText, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___rightPlayerScoreText;

/// [Tooltip("Only for co-op version")]
/// @brief Field leftPlayerScoreText, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___leftPlayerScoreText;

/// @brief Field timeText, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timeText;

/// @brief Field counterText, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___counterText;

/// @brief Field resultText, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___resultText;

/// @brief Field levelEndedOptionsText, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___levelEndedOptionsText;

/// @brief Field levelEndedCountdownText, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___levelEndedCountdownText;

/// @brief Field levelEndedTotalScoreText, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___levelEndedTotalScoreText;

/// @brief Field levelEndedCurrentScoreText, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___levelEndedCurrentScoreText;

/// @brief Field rightMolesList, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  ___rightMolesList;

/// @brief Field leftMolesList, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  ___leftMolesList;

/// @brief Field molesList, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  ___molesList;

/// @brief Field currentLevel, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>  ___currentLevel;

/// @brief Field currentScore, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___currentScore;

/// @brief Field totalScore, offset: 0x1dc, size: 0x4, def value: None
 int32_t  ___totalScore;

/// @brief Field leftPlayerScore, offset: 0x1e0, size: 0x4, def value: None
 int32_t  ___leftPlayerScore;

/// @brief Field rightPlayerScore, offset: 0x1e4, size: 0x4, def value: None
 int32_t  ___rightPlayerScore;

/// @brief Field bestScore, offset: 0x1e8, size: 0x4, def value: None
 int32_t  ___bestScore;

/// @brief Field curentTime, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___curentTime;

/// @brief Field currentLevelIndex, offset: 0x1f0, size: 0x4, def value: None
 int32_t  ___currentLevelIndex;

/// @brief Field continuePressedTime, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___continuePressedTime;

/// @brief Field resetToFirstLevel, offset: 0x1f8, size: 0x1, def value: None
 bool  ___resetToFirstLevel;

/// @brief Field arrowTargetRotation, offset: 0x1fc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___arrowTargetRotation;

/// @brief Field arrowRotationNeedsUpdate, offset: 0x20c, size: 0x1, def value: None
 bool  ___arrowRotationNeedsUpdate;

/// @brief Field potentialMoles, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  ___potentialMoles;

/// @brief Field pickedMolesIndex, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___pickedMolesIndex;

/// @brief Field currentState, offset: 0x220, size: 0x4, def value: None
 ::GlobalNamespace::WhackAMole_GameState  ___currentState;

/// @brief Field lastState, offset: 0x224, size: 0x4, def value: None
 ::GlobalNamespace::WhackAMole_GameState  ___lastState;

/// @brief Field remainingTime, offset: 0x228, size: 0x4, def value: None
 float_t  ___remainingTime;

/// @brief Field previousTime, offset: 0x22c, size: 0x4, def value: None
 int32_t  ___previousTime;

/// @brief Field isMultiplayer, offset: 0x230, size: 0x1, def value: None
 bool  ___isMultiplayer;

/// @brief Field gameEndedTime, offset: 0x234, size: 0x4, def value: None
 float_t  ___gameEndedTime;

/// @brief Field curentGameResult, offset: 0x238, size: 0x4, def value: None
 ::GlobalNamespace::WhackAMole_GameResult  ___curentGameResult;

/// @brief Field playerName, offset: 0x240, size: 0x8, def value: None
 ::StringW  ___playerName;

/// @brief Field highScorePlayerName, offset: 0x248, size: 0x8, def value: None
 ::StringW  ___highScorePlayerName;

/// @brief Field victoryParticles, offset: 0x250, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___victoryParticles;

/// @brief Field levelHazardMolesPicked, offset: 0x258, size: 0x4, def value: None
 int32_t  ___levelHazardMolesPicked;

/// @brief Field levelGoodMolesPicked, offset: 0x25c, size: 0x4, def value: None
 int32_t  ___levelGoodMolesPicked;

/// @brief Field playerId, offset: 0x260, size: 0x8, def value: None
 ::StringW  ___playerId;

/// @brief Field gameId, offset: 0x268, size: 0x4, def value: None
 int32_t  ___gameId;

/// @brief Field levelHazardMolesHit, offset: 0x26c, size: 0x4, def value: None
 int32_t  ___levelHazardMolesHit;

/// @brief Field wasMasterClient, offset: 0x270, size: 0x1, def value: None
 bool  ___wasMasterClient;

/// @brief Field wasLocalPlayerInZone, offset: 0x271, size: 0x1, def value: None
 bool  ___wasLocalPlayerInZone;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 210)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x274, size: 0x348, def value: None
 ::GlobalNamespace::WhackAMole_WhackAMoleData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___machineId) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___molesContainerRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___molesContainerLeft) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___betweenLevelPauseDuration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___countdownDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___allLevels) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___timer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___audioSource) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelArrow) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___victoryFX) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___zoneBasedVisuals) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___zoneBasedMeshRenderers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___backgroundLoop) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___errorClip) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___counterClip) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelCompleteClip) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___winClip) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___gameOverClip) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___whackHazardClips) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___whackMonkeClips) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___welcomeUI) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___ongoingGameUI) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelEndedUI) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___ContinuePressedUI) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___multiplyareScoresUI) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___scoreText) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___bestScoreText) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___rightPlayerScoreText) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___leftPlayerScoreText) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___timeText) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___counterText) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___resultText) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelEndedOptionsText) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelEndedCountdownText) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelEndedTotalScoreText) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelEndedCurrentScoreText) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___rightMolesList) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___leftMolesList) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___molesList) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___currentLevel) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___currentScore) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___totalScore) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___leftPlayerScore) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___rightPlayerScore) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___bestScore) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___curentTime) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___currentLevelIndex) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___continuePressedTime) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___resetToFirstLevel) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___arrowTargetRotation) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___arrowRotationNeedsUpdate) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___potentialMoles) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___pickedMolesIndex) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___currentState) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___lastState) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___remainingTime) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___previousTime) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___isMultiplayer) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___gameEndedTime) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___curentGameResult) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___playerName) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___highScorePlayerName) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___victoryParticles) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelHazardMolesPicked) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelGoodMolesPicked) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___playerId) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___gameId) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___levelHazardMolesHit) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___wasMasterClient) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ___wasLocalPlayerInZone) == 0x271, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole, ____Data) == 0x274, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::WhackAMole) == 0x5c0, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.WhackAMole/<PlayHazardAudio>d__84
class CORDL_TYPE WhackAMole__PlayHazardAudio_d__84 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::WhackAMole>  __4__this;

/// @brief Field clip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b807ec, size 0x11c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b80908, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b80910, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b80948, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b807e8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::WhackAMole> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::WhackAMole>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clip() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::WhackAMole>  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b7e75c, size 0x28, virtual false, abstract: false, final false
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
constexpr WhackAMole__PlayHazardAudio_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhackAMole__PlayHazardAudio_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhackAMole__PlayHazardAudio_d__84(WhackAMole__PlayHazardAudio_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhackAMole__PlayHazardAudio_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhackAMole__PlayHazardAudio_d__84(WhackAMole__PlayHazardAudio_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3913};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::WhackAMole>  _____4__this;

/// @brief Field clip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___clip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84, ___clip) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
