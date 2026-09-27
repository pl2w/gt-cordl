#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorShiftManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_State_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorShiftManager)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
struct GREnemyCount;
}
namespace GlobalNamespace {
class GRMetalEnergyGate;
}
namespace GlobalNamespace {
class GRShiftStat;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactorShiftDepthDisplay;
}
namespace GlobalNamespace {
struct GhostReactorShiftManager_State;
}
namespace GlobalNamespace {
class GhostReactorShiftManager_WarningPres;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorShiftManager;
}
namespace GlobalNamespace {
class GhostReactorShiftManager_WarningPres;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorShiftManager*);
MARK_REF_T(::GlobalNamespace::GhostReactorShiftManager_WarningPres*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorShiftManager*, "", "GhostReactorShiftManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorShiftManager_WarningPres*, "", "GhostReactorShiftManager/WarningPres");
// Dependencies GhostReactorShiftManager::State, MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorShiftManager
class CORDL_TYPE GhostReactorShiftManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using State = ::GlobalNamespace::GhostReactorShiftManager_State;

using WarningPres = ::GlobalNamespace::GhostReactorShiftManager_WarningPres;

 __declspec(property(get=get_LocalPlayerInside)) bool  LocalPlayerInside;

 __declspec(property(get=get_ShiftActive)) bool  ShiftActive;

 __declspec(property(get=get_ShiftId)) ::StringW  ShiftId;

 __declspec(property(get=get_ShiftStartNetworkTime)) double_t  ShiftStartNetworkTime;

 __declspec(property(get=get_ShiftState, put=set_ShiftState)) ::GlobalNamespace::GhostReactorShiftManager_State  ShiftState;

 __declspec(property(get=get_ShiftTotalEarned)) int32_t  ShiftTotalEarned;

 __declspec(property(get=get_TotalPlayTime)) float_t  TotalPlayTime;

/// @brief Field <ShiftState>k__BackingField, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShiftState_k__BackingField, put=__cordl_internal_set__ShiftState_k__BackingField)) ::GlobalNamespace::GhostReactorShiftManager_State  _ShiftState_k__BackingField;

/// @brief Field announceAudioSource, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceAudioSource, put=__cordl_internal_set_announceAudioSource)) ::UnityW<::UnityEngine::AudioSource>  announceAudioSource;

/// @brief Field announceBell, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceBell, put=__cordl_internal_set_announceBell)) ::GlobalNamespace::AbilitySound*  announceBell;

/// @brief Field announceBellAudioSource, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceBellAudioSource, put=__cordl_internal_set_announceBellAudioSource)) ::UnityW<::UnityEngine::AudioSource>  announceBellAudioSource;

/// @brief Field announceCompleteShift, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceCompleteShift, put=__cordl_internal_set_announceCompleteShift)) ::GlobalNamespace::AbilitySound*  announceCompleteShift;

/// @brief Field announceFailShift, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceFailShift, put=__cordl_internal_set_announceFailShift)) ::GlobalNamespace::AbilitySound*  announceFailShift;

/// @brief Field announcePrepareDrill, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_announcePrepareDrill, put=__cordl_internal_set_announcePrepareDrill)) ::GlobalNamespace::AbilitySound*  announcePrepareDrill;

/// @brief Field announcePrepareShift, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_announcePrepareShift, put=__cordl_internal_set_announcePrepareShift)) ::GlobalNamespace::AbilitySound*  announcePrepareShift;

/// @brief Field announceStartShift, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceStartShift, put=__cordl_internal_set_announceStartShift)) ::GlobalNamespace::AbilitySound*  announceStartShift;

/// @brief Field announceTip, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_announceTip, put=__cordl_internal_set_announceTip)) ::GlobalNamespace::AbilitySound*  announceTip;

/// @brief Field anomalyAlert, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_anomalyAlert, put=__cordl_internal_set_anomalyAlert)) ::UnityW<::UnityEngine::AudioSource>  anomalyAlert;

/// @brief Field anomalyAlertCountdownTimeToStartPlayingInMinutes, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_anomalyAlertCountdownTimeToStartPlayingInMinutes, put=__cordl_internal_set_anomalyAlertCountdownTimeToStartPlayingInMinutes)) float_t  anomalyAlertCountdownTimeToStartPlayingInMinutes;

/// @brief Field anomalyLoop1, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_anomalyLoop1, put=__cordl_internal_set_anomalyLoop1)) ::UnityW<::UnityEngine::AudioSource>  anomalyLoop1;

/// @brief Field anomalyLoop2, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_anomalyLoop2, put=__cordl_internal_set_anomalyLoop2)) ::UnityW<::UnityEngine::AudioSource>  anomalyLoop2;

/// @brief Field anomalyLoop3, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_anomalyLoop3, put=__cordl_internal_set_anomalyLoop3)) ::UnityW<::UnityEngine::AudioSource>  anomalyLoop3;

/// @brief Field authorizedToDelveDeeper, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_authorizedToDelveDeeper, put=__cordl_internal_set_authorizedToDelveDeeper)) bool  authorizedToDelveDeeper;

/// @brief Field bIsStartingFloorAuthorityOnly, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_bIsStartingFloorAuthorityOnly, put=__cordl_internal_set_bIsStartingFloorAuthorityOnly)) bool  bIsStartingFloorAuthorityOnly;

/// @brief Field cachedStringBuilder, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedStringBuilder, put=__cordl_internal_set_cachedStringBuilder)) ::System::Text::StringBuilder*  cachedStringBuilder;

/// @brief Field coresRequiredToDelveDeeper, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresRequiredToDelveDeeper, put=__cordl_internal_set_coresRequiredToDelveDeeper)) int32_t  coresRequiredToDelveDeeper;

/// @brief Field debugFastForwardRate, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugFastForwardRate, put=__cordl_internal_set_debugFastForwardRate)) float_t  debugFastForwardRate;

/// @brief Field debugFastForwarding, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugFastForwarding, put=__cordl_internal_set_debugFastForwarding)) bool  debugFastForwarding;

/// @brief Field depthDisplay, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthDisplay, put=__cordl_internal_set_depthDisplay)) ::GlobalNamespace::GhostReactorShiftDepthDisplay*  depthDisplay;

/// @brief Field drillDuration, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_drillDuration, put=__cordl_internal_set_drillDuration)) int32_t  drillDuration;

/// @brief Field frontGate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontGate, put=__cordl_internal_set_frontGate)) ::UnityW<::GlobalNamespace::GRMetalEnergyGate>  frontGate;

/// @brief Field gameIdGuid, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameIdGuid, put=__cordl_internal_set_gameIdGuid)) ::StringW  gameIdGuid;

/// @brief Field gateBlockerTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_gateBlockerTransform, put=__cordl_internal_set_gateBlockerTransform)) ::UnityW<::UnityEngine::Transform>  gateBlockerTransform;

/// @brief Field gatePlaneTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_gatePlaneTransform, put=__cordl_internal_set_gatePlaneTransform)) ::UnityW<::UnityEngine::Transform>  gatePlaneTransform;

/// @brief Field grManager, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field isPlayingLogoAnimation, offset 0x1e4, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlayingLogoAnimation, put=__cordl_internal_set_isPlayingLogoAnimation)) bool  isPlayingLogoAnimation;

/// @brief Field isRoomClosed, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRoomClosed, put=__cordl_internal_set_isRoomClosed)) bool  isRoomClosed;

/// @brief Field killsRequiredToDelveDeeper, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_killsRequiredToDelveDeeper, put=__cordl_internal_set_killsRequiredToDelveDeeper)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  killsRequiredToDelveDeeper;

/// @brief Field lastLeaderboardRefreshTime, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastLeaderboardRefreshTime, put=__cordl_internal_set_lastLeaderboardRefreshTime)) double_t  lastLeaderboardRefreshTime;

/// @brief Field lastReactorDisplayUpdate, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastReactorDisplayUpdate, put=__cordl_internal_set_lastReactorDisplayUpdate)) double_t  lastReactorDisplayUpdate;

/// @brief Field lastReactorLogoAnimFrame, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReactorLogoAnimFrame, put=__cordl_internal_set_lastReactorLogoAnimFrame)) int32_t  lastReactorLogoAnimFrame;

/// @brief Field lastReactorLogoAnimationTime, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastReactorLogoAnimationTime, put=__cordl_internal_set_lastReactorLogoAnimationTime)) double_t  lastReactorLogoAnimationTime;

/// @brief Field leaderboardDisplay, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_leaderboardDisplay, put=__cordl_internal_set_leaderboardDisplay)) ::System::Text::StringBuilder*  leaderboardDisplay;

/// @brief Field leaderboardUpdateFrequency, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_leaderboardUpdateFrequency, put=__cordl_internal_set_leaderboardUpdateFrequency)) float_t  leaderboardUpdateFrequency;

/// @brief Field localPlayerInside, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerInside, put=__cordl_internal_set_localPlayerInside)) bool  localPlayerInside;

/// @brief Field localPlayerOverlapping, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerOverlapping, put=__cordl_internal_set_localPlayerOverlapping)) bool  localPlayerOverlapping;

/// @brief Field maxPlayerDeaths, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPlayerDeaths, put=__cordl_internal_set_maxPlayerDeaths)) int32_t  maxPlayerDeaths;

/// @brief Field nextRefreshLeaderboardSafety, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_nextRefreshLeaderboardSafety, put=__cordl_internal_set_nextRefreshLeaderboardSafety)) bool  nextRefreshLeaderboardSafety;

/// @brief Field playerTeleportTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTeleportTransform, put=__cordl_internal_set_playerTeleportTransform)) ::UnityW<::UnityEngine::Transform>  playerTeleportTransform;

/// @brief Field postShiftDuration, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_postShiftDuration, put=__cordl_internal_set_postShiftDuration)) int32_t  postShiftDuration;

/// @brief Field preShiftDuration, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_preShiftDuration, put=__cordl_internal_set_preShiftDuration)) int32_t  preShiftDuration;

/// @brief Field preShiftDurationFirstArrive, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_preShiftDurationFirstArrive, put=__cordl_internal_set_preShiftDurationFirstArrive)) int32_t  preShiftDurationFirstArrive;

/// @brief Field prevCountDownTotal, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevCountDownTotal, put=__cordl_internal_set_prevCountDownTotal)) float_t  prevCountDownTotal;

/// @brief Field reactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field reactorTextMain, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactorTextMain, put=__cordl_internal_set_reactorTextMain)) ::UnityW<::TMPro::TMP_Text>  reactorTextMain;

/// @brief Field ringClosingDuration, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringClosingDuration, put=__cordl_internal_set_ringClosingDuration)) float_t  ringClosingDuration;

/// @brief Field ringClosingMaxRadius, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringClosingMaxRadius, put=__cordl_internal_set_ringClosingMaxRadius)) float_t  ringClosingMaxRadius;

/// @brief Field ringClosingMinRadius, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringClosingMinRadius, put=__cordl_internal_set_ringClosingMinRadius)) float_t  ringClosingMinRadius;

/// @brief Field ringTransform, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_ringTransform, put=__cordl_internal_set_ringTransform)) ::UnityW<::UnityEngine::Transform>  ringTransform;

/// @brief Field roomCloseTimeSeconds, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_roomCloseTimeSeconds, put=__cordl_internal_set_roomCloseTimeSeconds)) float_t  roomCloseTimeSeconds;

/// @brief Field sentientCoresRequiredToDelveDeeper, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sentientCoresRequiredToDelveDeeper, put=__cordl_internal_set_sentientCoresRequiredToDelveDeeper)) int32_t  sentientCoresRequiredToDelveDeeper;

/// @brief Field shiftDurationMinutes, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftDurationMinutes, put=__cordl_internal_set_shiftDurationMinutes)) float_t  shiftDurationMinutes;

/// @brief Field shiftEndNetworkTime, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftEndNetworkTime, put=__cordl_internal_set_shiftEndNetworkTime)) double_t  shiftEndNetworkTime;

/// @brief Field shiftJugmentText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftJugmentText, put=__cordl_internal_set_shiftJugmentText)) ::UnityW<::TMPro::TMP_Text>  shiftJugmentText;

/// @brief Field shiftJustStarted, offset 0x142, size 0x1 
 __declspec(property(get=__cordl_internal_get_shiftJustStarted, put=__cordl_internal_set_shiftJustStarted)) bool  shiftJustStarted;

/// @brief Field shiftLeaderboardEfficiency, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftLeaderboardEfficiency, put=__cordl_internal_set_shiftLeaderboardEfficiency)) ::UnityW<::TMPro::TMP_Text>  shiftLeaderboardEfficiency;

/// @brief Field shiftLeaderboardSafety, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftLeaderboardSafety, put=__cordl_internal_set_shiftLeaderboardSafety)) ::UnityW<::TMPro::TMP_Text>  shiftLeaderboardSafety;

/// @brief Field shiftRewardCoresForMothership, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftRewardCoresForMothership, put=__cordl_internal_set_shiftRewardCoresForMothership)) int32_t  shiftRewardCoresForMothership;

/// @brief Field shiftRewardCredits, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftRewardCredits, put=__cordl_internal_set_shiftRewardCredits)) int32_t  shiftRewardCredits;

/// @brief Field shiftSanityMaximumEarned, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftSanityMaximumEarned, put=__cordl_internal_set_shiftSanityMaximumEarned)) int32_t  shiftSanityMaximumEarned;

/// @brief Field shiftStartNetworkTime, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftStartNetworkTime, put=__cordl_internal_set_shiftStartNetworkTime)) double_t  shiftStartNetworkTime;

/// @brief Field shiftStarted, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get_shiftStarted, put=__cordl_internal_set_shiftStarted)) bool  shiftStarted;

/// @brief Field shiftStats, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftStats, put=__cordl_internal_set_shiftStats)) ::GlobalNamespace::GRShiftStat*  shiftStats;

/// @brief Field shiftStatsText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftStatsText, put=__cordl_internal_set_shiftStatsText)) ::UnityW<::TMPro::TMP_Text>  shiftStatsText;

/// @brief Field shiftTimerText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftTimerText, put=__cordl_internal_set_shiftTimerText)) ::UnityW<::TMPro::TMP_Text>  shiftTimerText;

/// @brief Field shiftTotalEarned, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftTotalEarned, put=__cordl_internal_set_shiftTotalEarned)) int32_t  shiftTotalEarned;

/// @brief Field startShiftButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startShiftButton, put=__cordl_internal_set_startShiftButton)) ::UnityW<::UnityEngine::GameObject>  startShiftButton;

/// @brief Field stateStartTime, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Field totalPlayTime, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPlayTime, put=__cordl_internal_set_totalPlayTime)) float_t  totalPlayTime;

/// @brief Field warningAudio, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningAudio, put=__cordl_internal_set_warningAudio)) ::UnityW<::UnityEngine::AudioClip>  warningAudio;

/// @brief Field warningClipPlayTimes, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningClipPlayTimes, put=__cordl_internal_set_warningClipPlayTimes)) ::System::Collections::Generic::List_1<int32_t>*  warningClipPlayTimes;

/// @brief Field warnings, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_warnings, put=__cordl_internal_set_warnings)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*  warnings;

/// @brief Field wrongStumpGoo, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrongStumpGoo, put=__cordl_internal_set_wrongStumpGoo)) ::UnityW<::UnityEngine::GameObject>  wrongStumpGoo;

/// @brief Method AuthorityUpdate, addr 0x5862ef8, size 0x1f0, virtual false, abstract: false, final false
inline void AuthorityUpdate(float_t  countDownTotal) ;

/// @brief Method CalculatePlayerPercentages, addr 0x5863fa4, size 0x248, virtual false, abstract: false, final false
inline void CalculatePlayerPercentages() ;

/// @brief Method CalculateShiftTotal, addr 0x5856e70, size 0x380, virtual false, abstract: false, final false
inline void CalculateShiftTotal() ;

/// @brief Method ClearEntities, addr 0x5861ebc, size 0x68, virtual false, abstract: false, final false
inline void ClearEntities() ;

/// @brief Method EndShift, addr 0x5861ea8, size 0x14, virtual false, abstract: false, final false
inline void EndShift() ;

/// @brief Method GetDrillingDuration, addr 0x5861b7c, size 0x24, virtual false, abstract: false, final false
inline int32_t GetDrillingDuration() ;

/// @brief Method GetPostShiftDuration, addr 0x5864644, size 0x24, virtual false, abstract: false, final false
inline int32_t GetPostShiftDuration() ;

/// @brief Method GetPreShiftDuration, addr 0x58645fc, size 0x24, virtual false, abstract: false, final false
inline int32_t GetPreShiftDuration() ;

/// @brief Method GetPreShiftDurationFirstArrive, addr 0x5864620, size 0x24, virtual false, abstract: false, final false
inline int32_t GetPreShiftDurationFirstArrive() ;

/// @brief Method GetPreparingToDrillDuration, addr 0x5864668, size 0x14, virtual false, abstract: false, final false
inline int32_t GetPreparingToDrillDuration() ;

/// @brief Method GetState, addr 0x585f848, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GhostReactorShiftManager_State GetState() ;

/// @brief Method Init, addr 0x5861e68, size 0x38, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactorManager*  grManager) ;

/// @brief Method IsSoaking, addr 0x5861870, size 0x5c, virtual false, abstract: false, final false
inline bool IsSoaking() ;

static inline ::GlobalNamespace::GhostReactorShiftManager* New_ctor() ;

/// @brief Method OnButtonDEBUGDelveDeeper, addr 0x5864450, size 0x18, virtual false, abstract: false, final false
inline void OnButtonDEBUGDelveDeeper() ;

/// @brief Method OnButtonDEBUGDelveShallower, addr 0x5864468, size 0x18, virtual false, abstract: false, final false
inline void OnButtonDEBUGDelveShallower() ;

/// @brief Method OnButtonDEBUGResetDepth, addr 0x5864438, size 0x18, virtual false, abstract: false, final false
inline void OnButtonDEBUGResetDepth() ;

/// @brief Method OnButtonDelveDeeper, addr 0x5864434, size 0x4, virtual false, abstract: false, final false
inline void OnButtonDelveDeeper() ;

/// @brief Method OnShiftEnded, addr 0x5856a3c, size 0x434, virtual false, abstract: false, final false
inline void OnShiftEnded(double_t  shiftEndTime, bool  isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason  zoneClearReason) ;

/// @brief Method OnShiftStarted, addr 0x5855f60, size 0x368, virtual false, abstract: false, final false
inline void OnShiftStarted(::StringW  gameId, double_t  shiftStartTime, bool  wasPlayerInAtStart, bool  isFirstShift) ;

/// @brief Method OnTriggerEnter, addr 0x58641ec, size 0xe4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x58642d0, size 0x164, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RefreshDepthDisplay, addr 0x5864480, size 0x17c, virtual false, abstract: false, final false
inline void RefreshDepthDisplay() ;

/// @brief Method RefreshShiftLeaderboard, addr 0x5863f6c, size 0x38, virtual false, abstract: false, final false
inline void RefreshShiftLeaderboard() ;

/// @brief Method RefreshShiftLeaderboard_Efficiency, addr 0x5864c1c, size 0x538, virtual false, abstract: false, final false
inline void RefreshShiftLeaderboard_Efficiency() ;

/// @brief Method RefreshShiftLeaderboard_Safety, addr 0x586467c, size 0x5a0, virtual false, abstract: false, final false
inline void RefreshShiftLeaderboard_Safety() ;

/// @brief Method RefreshShiftStatsDisplay, addr 0x5855cf4, size 0x26c, virtual false, abstract: false, final false
inline void RefreshShiftStatsDisplay() ;

/// @brief Method RefreshShiftTimer, addr 0x5861f24, size 0x138, virtual false, abstract: false, final false
inline void RefreshShiftTimer() ;

/// @brief Method RequestShiftStart, addr 0x5861ea4, size 0x4, virtual false, abstract: false, final false
inline void RequestShiftStart() ;

/// @brief Method RequestState, addr 0x5855824, size 0x60, virtual false, abstract: false, final false
inline void RequestState(::GlobalNamespace::GhostReactorShiftManager_State  newState) ;

/// @brief Method ResetJoinTimes, addr 0x5862aa0, size 0xf0, virtual false, abstract: false, final false
inline void ResetJoinTimes() ;

/// @brief Method ResetJudgment, addr 0x5855c3c, size 0xb8, virtual false, abstract: false, final false
inline void ResetJudgment() ;

/// @brief Method RevealJudgment, addr 0x58571f0, size 0x190, virtual false, abstract: false, final false
inline void RevealJudgment(int32_t  evaluation) ;

/// @brief Method SetShiftId, addr 0x5861e48, size 0x10, virtual false, abstract: false, final false
inline void SetShiftId(::StringW  shiftId) ;

/// @brief Method SetState, addr 0x5859cb0, size 0x500, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GhostReactorShiftManager_State  newState, bool  force) ;

/// @brief Method SharedUpdate, addr 0x58630e8, size 0x828, virtual false, abstract: false, final false
inline void SharedUpdate(float_t  countDownTotal) ;

/// @brief Method StartShiftButtonPressed, addr 0x5861ea0, size 0x4, virtual false, abstract: false, final false
inline void StartShiftButtonPressed() ;

/// @brief Method TeleportLocalPlayerIfOutOfBounds, addr 0x5862b90, size 0x244, virtual false, abstract: false, final false
inline void TeleportLocalPlayerIfOutOfBounds() ;

/// @brief Method Tick, addr 0x5862dd4, size 0x124, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateLogoAnimations, addr 0x586205c, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateLogoAnimations(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  frames) ;

/// @brief Method UpdateReactorDisplayMainShared, addr 0x586221c, size 0x884, virtual false, abstract: false, final false
inline void UpdateReactorDisplayMainShared(float_t  countDownTotal) ;

/// @brief Method UpdateStateAuthority, addr 0x5863910, size 0x220, virtual false, abstract: false, final false
inline void UpdateStateAuthority() ;

/// @brief Method UpdateStateShared, addr 0x5863b30, size 0x43c, virtual false, abstract: false, final false
inline void UpdateStateShared() ;

constexpr ::GlobalNamespace::GhostReactorShiftManager_State const& __cordl_internal_get__ShiftState_k__BackingField() const;

constexpr ::GlobalNamespace::GhostReactorShiftManager_State& __cordl_internal_get__ShiftState_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_announceAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_announceAudioSource() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announceBell() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announceBell() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_announceBellAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_announceBellAudioSource() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announceCompleteShift() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announceCompleteShift() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announceFailShift() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announceFailShift() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announcePrepareDrill() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announcePrepareDrill() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announcePrepareShift() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announcePrepareShift() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announceStartShift() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announceStartShift() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_announceTip() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_announceTip() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_anomalyAlert() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_anomalyAlert() ;

constexpr float_t const& __cordl_internal_get_anomalyAlertCountdownTimeToStartPlayingInMinutes() const;

constexpr float_t& __cordl_internal_get_anomalyAlertCountdownTimeToStartPlayingInMinutes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_anomalyLoop1() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_anomalyLoop1() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_anomalyLoop2() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_anomalyLoop2() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_anomalyLoop3() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_anomalyLoop3() ;

constexpr bool const& __cordl_internal_get_authorizedToDelveDeeper() const;

constexpr bool& __cordl_internal_get_authorizedToDelveDeeper() ;

constexpr bool const& __cordl_internal_get_bIsStartingFloorAuthorityOnly() const;

constexpr bool& __cordl_internal_get_bIsStartingFloorAuthorityOnly() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_cachedStringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_cachedStringBuilder() ;

constexpr int32_t const& __cordl_internal_get_coresRequiredToDelveDeeper() const;

constexpr int32_t& __cordl_internal_get_coresRequiredToDelveDeeper() ;

constexpr float_t const& __cordl_internal_get_debugFastForwardRate() const;

constexpr float_t& __cordl_internal_get_debugFastForwardRate() ;

constexpr bool const& __cordl_internal_get_debugFastForwarding() const;

constexpr bool& __cordl_internal_get_debugFastForwarding() ;

constexpr ::GlobalNamespace::GhostReactorShiftDepthDisplay* const& __cordl_internal_get_depthDisplay() const;

constexpr ::GlobalNamespace::GhostReactorShiftDepthDisplay*& __cordl_internal_get_depthDisplay() ;

constexpr int32_t const& __cordl_internal_get_drillDuration() const;

constexpr int32_t& __cordl_internal_get_drillDuration() ;

constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate> const& __cordl_internal_get_frontGate() const;

constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate>& __cordl_internal_get_frontGate() ;

constexpr ::StringW const& __cordl_internal_get_gameIdGuid() const;

constexpr ::StringW& __cordl_internal_get_gameIdGuid() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gateBlockerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gateBlockerTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gatePlaneTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gatePlaneTransform() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr bool const& __cordl_internal_get_isPlayingLogoAnimation() const;

constexpr bool& __cordl_internal_get_isPlayingLogoAnimation() ;

constexpr bool const& __cordl_internal_get_isRoomClosed() const;

constexpr bool& __cordl_internal_get_isRoomClosed() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>* const& __cordl_internal_get_killsRequiredToDelveDeeper() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*& __cordl_internal_get_killsRequiredToDelveDeeper() ;

constexpr double_t const& __cordl_internal_get_lastLeaderboardRefreshTime() const;

constexpr double_t& __cordl_internal_get_lastLeaderboardRefreshTime() ;

constexpr double_t const& __cordl_internal_get_lastReactorDisplayUpdate() const;

constexpr double_t& __cordl_internal_get_lastReactorDisplayUpdate() ;

constexpr int32_t const& __cordl_internal_get_lastReactorLogoAnimFrame() const;

constexpr int32_t& __cordl_internal_get_lastReactorLogoAnimFrame() ;

constexpr double_t const& __cordl_internal_get_lastReactorLogoAnimationTime() const;

constexpr double_t& __cordl_internal_get_lastReactorLogoAnimationTime() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_leaderboardDisplay() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_leaderboardDisplay() ;

constexpr float_t const& __cordl_internal_get_leaderboardUpdateFrequency() const;

constexpr float_t& __cordl_internal_get_leaderboardUpdateFrequency() ;

constexpr bool const& __cordl_internal_get_localPlayerInside() const;

constexpr bool& __cordl_internal_get_localPlayerInside() ;

constexpr bool const& __cordl_internal_get_localPlayerOverlapping() const;

constexpr bool& __cordl_internal_get_localPlayerOverlapping() ;

constexpr int32_t const& __cordl_internal_get_maxPlayerDeaths() const;

constexpr int32_t& __cordl_internal_get_maxPlayerDeaths() ;

constexpr bool const& __cordl_internal_get_nextRefreshLeaderboardSafety() const;

constexpr bool& __cordl_internal_get_nextRefreshLeaderboardSafety() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerTeleportTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerTeleportTransform() ;

constexpr int32_t const& __cordl_internal_get_postShiftDuration() const;

constexpr int32_t& __cordl_internal_get_postShiftDuration() ;

constexpr int32_t const& __cordl_internal_get_preShiftDuration() const;

constexpr int32_t& __cordl_internal_get_preShiftDuration() ;

constexpr int32_t const& __cordl_internal_get_preShiftDurationFirstArrive() const;

constexpr int32_t& __cordl_internal_get_preShiftDurationFirstArrive() ;

constexpr float_t const& __cordl_internal_get_prevCountDownTotal() const;

constexpr float_t& __cordl_internal_get_prevCountDownTotal() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_reactorTextMain() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_reactorTextMain() ;

constexpr float_t const& __cordl_internal_get_ringClosingDuration() const;

constexpr float_t& __cordl_internal_get_ringClosingDuration() ;

constexpr float_t const& __cordl_internal_get_ringClosingMaxRadius() const;

constexpr float_t& __cordl_internal_get_ringClosingMaxRadius() ;

constexpr float_t const& __cordl_internal_get_ringClosingMinRadius() const;

constexpr float_t& __cordl_internal_get_ringClosingMinRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ringTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ringTransform() ;

constexpr float_t const& __cordl_internal_get_roomCloseTimeSeconds() const;

constexpr float_t& __cordl_internal_get_roomCloseTimeSeconds() ;

constexpr int32_t const& __cordl_internal_get_sentientCoresRequiredToDelveDeeper() const;

constexpr int32_t& __cordl_internal_get_sentientCoresRequiredToDelveDeeper() ;

constexpr float_t const& __cordl_internal_get_shiftDurationMinutes() const;

constexpr float_t& __cordl_internal_get_shiftDurationMinutes() ;

constexpr double_t const& __cordl_internal_get_shiftEndNetworkTime() const;

constexpr double_t& __cordl_internal_get_shiftEndNetworkTime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shiftJugmentText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shiftJugmentText() ;

constexpr bool const& __cordl_internal_get_shiftJustStarted() const;

constexpr bool& __cordl_internal_get_shiftJustStarted() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shiftLeaderboardEfficiency() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shiftLeaderboardEfficiency() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shiftLeaderboardSafety() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shiftLeaderboardSafety() ;

constexpr int32_t const& __cordl_internal_get_shiftRewardCoresForMothership() const;

constexpr int32_t& __cordl_internal_get_shiftRewardCoresForMothership() ;

constexpr int32_t const& __cordl_internal_get_shiftRewardCredits() const;

constexpr int32_t& __cordl_internal_get_shiftRewardCredits() ;

constexpr int32_t const& __cordl_internal_get_shiftSanityMaximumEarned() const;

constexpr int32_t& __cordl_internal_get_shiftSanityMaximumEarned() ;

constexpr double_t const& __cordl_internal_get_shiftStartNetworkTime() const;

constexpr double_t& __cordl_internal_get_shiftStartNetworkTime() ;

constexpr bool const& __cordl_internal_get_shiftStarted() const;

constexpr bool& __cordl_internal_get_shiftStarted() ;

constexpr ::GlobalNamespace::GRShiftStat* const& __cordl_internal_get_shiftStats() const;

constexpr ::GlobalNamespace::GRShiftStat*& __cordl_internal_get_shiftStats() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shiftStatsText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shiftStatsText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_shiftTimerText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_shiftTimerText() ;

constexpr int32_t const& __cordl_internal_get_shiftTotalEarned() const;

constexpr int32_t& __cordl_internal_get_shiftTotalEarned() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startShiftButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startShiftButton() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr float_t const& __cordl_internal_get_totalPlayTime() const;

constexpr float_t& __cordl_internal_get_totalPlayTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_warningAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_warningAudio() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_warningClipPlayTimes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_warningClipPlayTimes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>* const& __cordl_internal_get_warnings() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*& __cordl_internal_get_warnings() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_wrongStumpGoo() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_wrongStumpGoo() ;

constexpr void __cordl_internal_set__ShiftState_k__BackingField(::GlobalNamespace::GhostReactorShiftManager_State  value) ;

constexpr void __cordl_internal_set_announceAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_announceBell(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announceBellAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_announceCompleteShift(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announceFailShift(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announcePrepareDrill(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announcePrepareShift(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announceStartShift(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_announceTip(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_anomalyAlert(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_anomalyAlertCountdownTimeToStartPlayingInMinutes(float_t  value) ;

constexpr void __cordl_internal_set_anomalyLoop1(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_anomalyLoop2(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_anomalyLoop3(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_authorizedToDelveDeeper(bool  value) ;

constexpr void __cordl_internal_set_bIsStartingFloorAuthorityOnly(bool  value) ;

constexpr void __cordl_internal_set_cachedStringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_coresRequiredToDelveDeeper(int32_t  value) ;

constexpr void __cordl_internal_set_debugFastForwardRate(float_t  value) ;

constexpr void __cordl_internal_set_debugFastForwarding(bool  value) ;

constexpr void __cordl_internal_set_depthDisplay(::GlobalNamespace::GhostReactorShiftDepthDisplay*  value) ;

constexpr void __cordl_internal_set_drillDuration(int32_t  value) ;

constexpr void __cordl_internal_set_frontGate(::UnityW<::GlobalNamespace::GRMetalEnergyGate>  value) ;

constexpr void __cordl_internal_set_gameIdGuid(::StringW  value) ;

constexpr void __cordl_internal_set_gateBlockerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gatePlaneTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_isPlayingLogoAnimation(bool  value) ;

constexpr void __cordl_internal_set_isRoomClosed(bool  value) ;

constexpr void __cordl_internal_set_killsRequiredToDelveDeeper(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  value) ;

constexpr void __cordl_internal_set_lastLeaderboardRefreshTime(double_t  value) ;

constexpr void __cordl_internal_set_lastReactorDisplayUpdate(double_t  value) ;

constexpr void __cordl_internal_set_lastReactorLogoAnimFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastReactorLogoAnimationTime(double_t  value) ;

constexpr void __cordl_internal_set_leaderboardDisplay(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_leaderboardUpdateFrequency(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerInside(bool  value) ;

constexpr void __cordl_internal_set_localPlayerOverlapping(bool  value) ;

constexpr void __cordl_internal_set_maxPlayerDeaths(int32_t  value) ;

constexpr void __cordl_internal_set_nextRefreshLeaderboardSafety(bool  value) ;

constexpr void __cordl_internal_set_playerTeleportTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_postShiftDuration(int32_t  value) ;

constexpr void __cordl_internal_set_preShiftDuration(int32_t  value) ;

constexpr void __cordl_internal_set_preShiftDurationFirstArrive(int32_t  value) ;

constexpr void __cordl_internal_set_prevCountDownTotal(float_t  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_reactorTextMain(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_ringClosingDuration(float_t  value) ;

constexpr void __cordl_internal_set_ringClosingMaxRadius(float_t  value) ;

constexpr void __cordl_internal_set_ringClosingMinRadius(float_t  value) ;

constexpr void __cordl_internal_set_ringTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_roomCloseTimeSeconds(float_t  value) ;

constexpr void __cordl_internal_set_sentientCoresRequiredToDelveDeeper(int32_t  value) ;

constexpr void __cordl_internal_set_shiftDurationMinutes(float_t  value) ;

constexpr void __cordl_internal_set_shiftEndNetworkTime(double_t  value) ;

constexpr void __cordl_internal_set_shiftJugmentText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftJustStarted(bool  value) ;

constexpr void __cordl_internal_set_shiftLeaderboardEfficiency(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftLeaderboardSafety(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftRewardCoresForMothership(int32_t  value) ;

constexpr void __cordl_internal_set_shiftRewardCredits(int32_t  value) ;

constexpr void __cordl_internal_set_shiftSanityMaximumEarned(int32_t  value) ;

constexpr void __cordl_internal_set_shiftStartNetworkTime(double_t  value) ;

constexpr void __cordl_internal_set_shiftStarted(bool  value) ;

constexpr void __cordl_internal_set_shiftStats(::GlobalNamespace::GRShiftStat*  value) ;

constexpr void __cordl_internal_set_shiftStatsText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftTimerText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftTotalEarned(int32_t  value) ;

constexpr void __cordl_internal_set_startShiftButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

constexpr void __cordl_internal_set_totalPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_warningAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_warningClipPlayTimes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_warnings(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*  value) ;

constexpr void __cordl_internal_set_wrongStumpGoo(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5865154, size 0x2a8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocalPlayerInside, addr 0x5861e30, size 0x8, virtual false, abstract: false, final false
inline bool get_LocalPlayerInside() ;

/// @brief Method get_ShiftActive, addr 0x5861e20, size 0x8, virtual false, abstract: false, final false
inline bool get_ShiftActive() ;

/// @brief Method get_ShiftId, addr 0x5861e40, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ShiftId() ;

/// @brief Method get_ShiftStartNetworkTime, addr 0x5861e28, size 0x8, virtual false, abstract: false, final false
inline double_t get_ShiftStartNetworkTime() ;

/// [CompilerGenerated]
/// @brief Method get_ShiftState, addr 0x5861e58, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GhostReactorShiftManager_State get_ShiftState() ;

/// @brief Method get_ShiftTotalEarned, addr 0x5861e18, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShiftTotalEarned() ;

/// @brief Method get_TotalPlayTime, addr 0x5861e38, size 0x8, virtual false, abstract: false, final false
inline float_t get_TotalPlayTime() ;

/// [CompilerGenerated]
/// @brief Method set_ShiftState, addr 0x5861e60, size 0x8, virtual false, abstract: false, final false
inline void set_ShiftState(::GlobalNamespace::GhostReactorShiftManager_State  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorShiftManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorShiftManager(GhostReactorShiftManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorShiftManager(GhostReactorShiftManager const& ) = delete;

/// @brief Field EVENT_GOOD_KD offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_GOOD_KD{u"GRShiftGoodKD"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1831};

/// [SerializeField]
/// @brief Field reactor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// [SerializeField]
/// @brief Field frontGate, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRMetalEnergyGate>  ___frontGate;

/// [SerializeField]
/// @brief Field startShiftButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startShiftButton;

/// [SerializeField]
/// @brief Field shiftTimerText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shiftTimerText;

/// [SerializeField]
/// @brief Field shiftStatsText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shiftStatsText;

/// [SerializeField]
/// @brief Field shiftJugmentText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shiftJugmentText;

/// [SerializeField]
/// @brief Field reactorTextMain, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___reactorTextMain;

/// [SerializeField]
/// @brief Field wrongStumpGoo, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___wrongStumpGoo;

/// [SerializeField]
/// @brief Field shiftDurationMinutes, offset: 0x68, size: 0x4, def value: None
 float_t  ___shiftDurationMinutes;

/// [SerializeField]
/// @brief Field playerTeleportTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerTeleportTransform;

/// [SerializeField]
/// @brief Field gatePlaneTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gatePlaneTransform;

/// [SerializeField]
/// @brief Field gateBlockerTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gateBlockerTransform;

/// [SerializeField]
/// @brief Field anomalyLoop1, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___anomalyLoop1;

/// [SerializeField]
/// @brief Field anomalyLoop2, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___anomalyLoop2;

/// [SerializeField]
/// @brief Field anomalyLoop3, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___anomalyLoop3;

/// [SerializeField]
/// @brief Field anomalyAlert, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___anomalyAlert;

/// [SerializeField]
/// @brief Field anomalyAlertCountdownTimeToStartPlayingInMinutes, offset: 0xa8, size: 0x4, def value: None
 float_t  ___anomalyAlertCountdownTimeToStartPlayingInMinutes;

/// [SerializeField]
/// @brief Field roomCloseTimeSeconds, offset: 0xac, size: 0x4, def value: None
 float_t  ___roomCloseTimeSeconds;

/// @brief Field isRoomClosed, offset: 0xb0, size: 0x1, def value: None
 bool  ___isRoomClosed;

/// [SerializeField]
/// @brief Field preShiftDuration, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___preShiftDuration;

/// @brief Field preShiftDurationFirstArrive, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___preShiftDurationFirstArrive;

/// @brief Field postShiftDuration, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___postShiftDuration;

/// [SerializeField]
/// @brief Field drillDuration, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___drillDuration;

/// @brief Field bIsStartingFloorAuthorityOnly, offset: 0xc4, size: 0x1, def value: None
 bool  ___bIsStartingFloorAuthorityOnly;

/// [Header("Drill Announcements")]
/// [SerializeField]
/// @brief Field announceAudioSource, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___announceAudioSource;

/// [SerializeField]
/// @brief Field announceBellAudioSource, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___announceBellAudioSource;

/// @brief Field announcePrepareShift, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announcePrepareShift;

/// @brief Field announceStartShift, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announceStartShift;

/// @brief Field announceCompleteShift, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announceCompleteShift;

/// @brief Field announceFailShift, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announceFailShift;

/// @brief Field announcePrepareDrill, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announcePrepareDrill;

/// @brief Field announceTip, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announceTip;

/// @brief Field announceBell, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___announceBell;

/// [Header("Warning")]
/// @brief Field warnings, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*  ___warnings;

/// [SerializeField]
/// @brief Field warningAudio, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___warningAudio;

/// [SerializeField]
/// [Tooltip("Must be ordered from largest time (first played) to smallest time (last played)")]
/// @brief Field warningClipPlayTimes, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___warningClipPlayTimes;

/// [Header("Ring")]
/// [SerializeField]
/// @brief Field ringTransform, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ringTransform;

/// [SerializeField]
/// @brief Field ringClosingDuration, offset: 0x130, size: 0x4, def value: None
 float_t  ___ringClosingDuration;

/// [SerializeField]
/// @brief Field ringClosingMaxRadius, offset: 0x134, size: 0x4, def value: None
 float_t  ___ringClosingMaxRadius;

/// [SerializeField]
/// @brief Field ringClosingMinRadius, offset: 0x138, size: 0x4, def value: None
 float_t  ___ringClosingMinRadius;

/// [Header("Debug")]
/// [SerializeField]
/// @brief Field debugFastForwardRate, offset: 0x13c, size: 0x4, def value: None
 float_t  ___debugFastForwardRate;

/// [SerializeField]
/// @brief Field debugFastForwarding, offset: 0x140, size: 0x1, def value: None
 bool  ___debugFastForwarding;

/// @brief Field shiftStarted, offset: 0x141, size: 0x1, def value: None
 bool  ___shiftStarted;

/// @brief Field shiftJustStarted, offset: 0x142, size: 0x1, def value: None
 bool  ___shiftJustStarted;

/// @brief Field shiftStartNetworkTime, offset: 0x148, size: 0x8, def value: None
 double_t  ___shiftStartNetworkTime;

/// @brief Field shiftEndNetworkTime, offset: 0x150, size: 0x8, def value: None
 double_t  ___shiftEndNetworkTime;

/// @brief Field prevCountDownTotal, offset: 0x158, size: 0x4, def value: None
 float_t  ___prevCountDownTotal;

/// [SerializeField]
/// @brief Field shiftTotalEarned, offset: 0x15c, size: 0x4, def value: None
 int32_t  ___shiftTotalEarned;

/// [SerializeField]
/// @brief Field shiftSanityMaximumEarned, offset: 0x160, size: 0x4, def value: None
 int32_t  ___shiftSanityMaximumEarned;

/// @brief Field depthDisplay, offset: 0x168, size: 0x8, def value: None
 ::GlobalNamespace::GhostReactorShiftDepthDisplay*  ___depthDisplay;

/// @brief Field authorizedToDelveDeeper, offset: 0x170, size: 0x1, def value: None
 bool  ___authorizedToDelveDeeper;

/// @brief Field shiftRewardCoresForMothership, offset: 0x174, size: 0x4, def value: None
 int32_t  ___shiftRewardCoresForMothership;

/// @brief Field coresRequiredToDelveDeeper, offset: 0x178, size: 0x4, def value: None
 int32_t  ___coresRequiredToDelveDeeper;

/// @brief Field sentientCoresRequiredToDelveDeeper, offset: 0x17c, size: 0x4, def value: None
 int32_t  ___sentientCoresRequiredToDelveDeeper;

/// @brief Field killsRequiredToDelveDeeper, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  ___killsRequiredToDelveDeeper;

/// @brief Field maxPlayerDeaths, offset: 0x188, size: 0x4, def value: None
 int32_t  ___maxPlayerDeaths;

/// @brief Field shiftRewardCredits, offset: 0x18c, size: 0x4, def value: None
 int32_t  ___shiftRewardCredits;

/// @brief Field localPlayerInside, offset: 0x190, size: 0x1, def value: None
 bool  ___localPlayerInside;

/// @brief Field localPlayerOverlapping, offset: 0x191, size: 0x1, def value: None
 bool  ___localPlayerOverlapping;

/// @brief Field totalPlayTime, offset: 0x194, size: 0x4, def value: None
 float_t  ___totalPlayTime;

/// @brief Field gameIdGuid, offset: 0x198, size: 0x8, def value: None
 ::StringW  ___gameIdGuid;

/// @brief Field shiftStats, offset: 0x1a0, size: 0x8, def value: None
 ::GlobalNamespace::GRShiftStat*  ___shiftStats;

/// @brief Field grManager, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// [SerializeField]
/// @brief Field shiftLeaderboardEfficiency, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shiftLeaderboardEfficiency;

/// [SerializeField]
/// @brief Field shiftLeaderboardSafety, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___shiftLeaderboardSafety;

/// @brief Field lastLeaderboardRefreshTime, offset: 0x1c0, size: 0x8, def value: None
 double_t  ___lastLeaderboardRefreshTime;

/// @brief Field leaderboardUpdateFrequency, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___leaderboardUpdateFrequency;

/// [CompilerGenerated]
/// @brief Field <ShiftState>k__BackingField, offset: 0x1cc, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorShiftManager_State  ____ShiftState_k__BackingField;

/// @brief Field stateStartTime, offset: 0x1d0, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field lastReactorLogoAnimationTime, offset: 0x1d8, size: 0x8, def value: None
 double_t  ___lastReactorLogoAnimationTime;

/// @brief Field lastReactorLogoAnimFrame, offset: 0x1e0, size: 0x4, def value: None
 int32_t  ___lastReactorLogoAnimFrame;

/// @brief Field isPlayingLogoAnimation, offset: 0x1e4, size: 0x1, def value: None
 bool  ___isPlayingLogoAnimation;

/// @brief Field lastReactorDisplayUpdate, offset: 0x1e8, size: 0x8, def value: None
 double_t  ___lastReactorDisplayUpdate;

/// @brief Field cachedStringBuilder, offset: 0x1f0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___cachedStringBuilder;

/// @brief Field nextRefreshLeaderboardSafety, offset: 0x1f8, size: 0x1, def value: None
 bool  ___nextRefreshLeaderboardSafety;

/// @brief Field leaderboardDisplay, offset: 0x200, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___leaderboardDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___reactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___frontGate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___startShiftButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftTimerText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftStatsText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftJugmentText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___reactorTextMain) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___wrongStumpGoo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftDurationMinutes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___playerTeleportTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___gatePlaneTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___gateBlockerTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___anomalyLoop1) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___anomalyLoop2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___anomalyLoop3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___anomalyAlert) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___anomalyAlertCountdownTimeToStartPlayingInMinutes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___roomCloseTimeSeconds) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___isRoomClosed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___preShiftDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___preShiftDurationFirstArrive) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___postShiftDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___drillDuration) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___bIsStartingFloorAuthorityOnly) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceAudioSource) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceBellAudioSource) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announcePrepareShift) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceStartShift) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceCompleteShift) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceFailShift) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announcePrepareDrill) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceTip) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___announceBell) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___warnings) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___warningAudio) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___warningClipPlayTimes) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___ringTransform) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___ringClosingDuration) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___ringClosingMaxRadius) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___ringClosingMinRadius) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___debugFastForwardRate) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___debugFastForwarding) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftStarted) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftJustStarted) == 0x142, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftStartNetworkTime) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftEndNetworkTime) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___prevCountDownTotal) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftTotalEarned) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftSanityMaximumEarned) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___depthDisplay) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___authorizedToDelveDeeper) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftRewardCoresForMothership) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___coresRequiredToDelveDeeper) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___sentientCoresRequiredToDelveDeeper) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___killsRequiredToDelveDeeper) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___maxPlayerDeaths) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftRewardCredits) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___localPlayerInside) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___localPlayerOverlapping) == 0x191, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___totalPlayTime) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___gameIdGuid) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftStats) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___grManager) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftLeaderboardEfficiency) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___shiftLeaderboardSafety) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___lastLeaderboardRefreshTime) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___leaderboardUpdateFrequency) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ____ShiftState_k__BackingField) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___stateStartTime) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___lastReactorLogoAnimationTime) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___lastReactorLogoAnimFrame) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___isPlayingLogoAnimation) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___lastReactorDisplayUpdate) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___cachedStringBuilder) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___nextRefreshLeaderboardSafety) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager, ___leaderboardDisplay) == 0x200, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorShiftManager) == 0x208, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorShiftManager/WarningPres
class CORDL_TYPE GhostReactorShiftManager_WarningPres : public ::System::Object {
public:
// Declarations
/// @brief Field sound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::GlobalNamespace::AbilitySound*  sound;

/// @brief Field time, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) int32_t  time;

static inline ::GlobalNamespace::GhostReactorShiftManager_WarningPres* New_ctor() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_sound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_sound() ;

constexpr int32_t const& __cordl_internal_get_time() const;

constexpr int32_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_sound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_time(int32_t  value) ;

/// @brief Method .ctor, addr 0x58653fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorShiftManager_WarningPres() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftManager_WarningPres", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorShiftManager_WarningPres(GhostReactorShiftManager_WarningPres && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftManager_WarningPres", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorShiftManager_WarningPres(GhostReactorShiftManager_WarningPres const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1829};

/// @brief Field time, offset: 0x10, size: 0x4, def value: None
 int32_t  ___time;

/// @brief Field sound, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___sound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager_WarningPres, ___time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager_WarningPres, ___sound) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorShiftManager_WarningPres) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
