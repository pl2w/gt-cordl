#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RacingScoreboard_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RaceVisual)
namespace GlobalNamespace {
class RaceCheckpointManager;
}
namespace GlobalNamespace {
class RaceConsoleVisual;
}
namespace GlobalNamespace {
class RacingScoreboard;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
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
// Forward declare root types
namespace GlobalNamespace {
class RaceVisual;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RaceVisual*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaceVisual*, "", "RaceVisual");
// Dependencies RacingScoreboard, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RaceVisual
class CORDL_TYPE RaceVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <raceId>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__raceId_k__BackingField, put=__cordl_internal_set__raceId_k__BackingField)) int32_t  _raceId_k__BackingField;

/// @brief Field checkpoints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkpoints, put=__cordl_internal_set_checkpoints)) ::UnityW<::GlobalNamespace::RaceCheckpointManager>  checkpoints;

/// @brief Field countdownSoundGoTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_countdownSoundGoTime, put=__cordl_internal_set_countdownSoundGoTime)) float_t  countdownSoundGoTime;

/// @brief Field countdownSoundPlayer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownSoundPlayer, put=__cordl_internal_set_countdownSoundPlayer)) ::UnityW<::UnityEngine::AudioSource>  countdownSoundPlayer;

/// @brief Field countdownText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownText, put=__cordl_internal_set_countdownText)) ::UnityW<::TMPro::TextMeshPro>  countdownText;

/// @brief Field finishLineText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishLineText, put=__cordl_internal_set_finishLineText)) ::UnityW<::TMPro::TextMeshPro>  finishLineText;

/// @brief Field isRaceEndSoundEnabled, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRaceEndSoundEnabled, put=__cordl_internal_set_isRaceEndSoundEnabled)) bool  isRaceEndSoundEnabled;

/// @brief Field lastDisplayedCountdown, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDisplayedCountdown, put=__cordl_internal_set_lastDisplayedCountdown)) int32_t  lastDisplayedCountdown;

/// @brief Field nextVisualRefreshTimestamp, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextVisualRefreshTimestamp, put=__cordl_internal_set_nextVisualRefreshTimestamp)) float_t  nextVisualRefreshTimestamp;

/// @brief Field raceConsoleVisual, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceConsoleVisual, put=__cordl_internal_set_raceConsoleVisual)) ::UnityW<::GlobalNamespace::RaceConsoleVisual>  raceConsoleVisual;

/// @brief Field raceEndSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceEndSound, put=__cordl_internal_set_raceEndSound)) ::UnityW<::UnityEngine::AudioClip>  raceEndSound;

 __declspec(property(get=get_raceId, put=set_raceId)) int32_t  raceId;

/// @brief Field raceScoreboards, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceScoreboards, put=__cordl_internal_set_raceScoreboards)) ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>  raceScoreboards;

/// @brief Field raceStartScoreboard, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceStartScoreboard, put=__cordl_internal_set_raceStartScoreboard)) ::UnityW<::GlobalNamespace::RacingScoreboard>  raceStartScoreboard;

/// @brief Field startingWall, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingWall, put=__cordl_internal_set_startingWall)) ::UnityW<::UnityEngine::GameObject>  startingWall;

/// @brief Method ActivateStartingWall, addr 0x568f07c, size 0x1c, virtual false, abstract: false, final false
inline void ActivateStartingWall(bool  enable) ;

/// @brief Method Awake, addr 0x568ecb4, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Button_StartRace, addr 0x568ef0c, size 0x60, virtual false, abstract: false, final false
inline void Button_StartRace(int32_t  laps) ;

/// @brief Method EnableRaceEndSound, addr 0x568f204, size 0xc, virtual false, abstract: false, final false
inline void EnableRaceEndSound() ;

/// @brief Method IsPlayerNearCheckpoint, addr 0x568f098, size 0x14, virtual false, abstract: false, final false
inline bool IsPlayerNearCheckpoint(::GlobalNamespace::VRRig*  player, int32_t  checkpoint) ;

static inline ::GlobalNamespace::RaceVisual* New_ctor() ;

/// @brief Method OnCheckpointPassed, addr 0x568e84c, size 0x94, virtual false, abstract: false, final false
inline void OnCheckpointPassed(int32_t  index, ::GlobalNamespace::SoundBankPlayer*  checkpointSound) ;

/// @brief Method OnCountdownStart, addr 0x568f0ac, size 0x50, virtual false, abstract: false, final false
inline void OnCountdownStart(int32_t  laps, float_t  goAfterInterval) ;

/// @brief Method OnEnable, addr 0x568ee6c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRaceEnded, addr 0x568f184, size 0x6c, virtual false, abstract: false, final false
inline void OnRaceEnded() ;

/// @brief Method OnRaceReset, addr 0x568f1f0, size 0x14, virtual false, abstract: false, final false
inline void OnRaceReset() ;

/// @brief Method OnRaceStart, addr 0x568f0fc, size 0x88, virtual false, abstract: false, final false
inline void OnRaceStart() ;

/// @brief Method SetRaceStartScoreboardText, addr 0x568ee0c, size 0x60, virtual false, abstract: false, final false
inline void SetRaceStartScoreboardText(::StringW  mainText, ::StringW  timesText) ;

/// @brief Method SetScoreboardText, addr 0x568ed64, size 0xa8, virtual false, abstract: false, final false
inline void SetScoreboardText(::StringW  mainText, ::StringW  timesText) ;

/// @brief Method ShowFinishLineText, addr 0x568efac, size 0x20, virtual false, abstract: false, final false
inline void ShowFinishLineText(::StringW  text) ;

/// @brief Method UpdateCountdown, addr 0x568efcc, size 0xb0, virtual false, abstract: false, final false
inline void UpdateCountdown(int32_t  timeRemaining) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__raceId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__raceId_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager> const& __cordl_internal_get_checkpoints() const;

constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager>& __cordl_internal_get_checkpoints() ;

constexpr float_t const& __cordl_internal_get_countdownSoundGoTime() const;

constexpr float_t& __cordl_internal_get_countdownSoundGoTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_countdownSoundPlayer() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_countdownSoundPlayer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_countdownText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_countdownText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_finishLineText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_finishLineText() ;

constexpr bool const& __cordl_internal_get_isRaceEndSoundEnabled() const;

constexpr bool& __cordl_internal_get_isRaceEndSoundEnabled() ;

constexpr int32_t const& __cordl_internal_get_lastDisplayedCountdown() const;

constexpr int32_t& __cordl_internal_get_lastDisplayedCountdown() ;

constexpr float_t const& __cordl_internal_get_nextVisualRefreshTimestamp() const;

constexpr float_t& __cordl_internal_get_nextVisualRefreshTimestamp() ;

constexpr ::UnityW<::GlobalNamespace::RaceConsoleVisual> const& __cordl_internal_get_raceConsoleVisual() const;

constexpr ::UnityW<::GlobalNamespace::RaceConsoleVisual>& __cordl_internal_get_raceConsoleVisual() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_raceEndSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_raceEndSound() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>> const& __cordl_internal_get_raceScoreboards() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>& __cordl_internal_get_raceScoreboards() ;

constexpr ::UnityW<::GlobalNamespace::RacingScoreboard> const& __cordl_internal_get_raceStartScoreboard() const;

constexpr ::UnityW<::GlobalNamespace::RacingScoreboard>& __cordl_internal_get_raceStartScoreboard() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startingWall() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startingWall() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__raceId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_checkpoints(::UnityW<::GlobalNamespace::RaceCheckpointManager>  value) ;

constexpr void __cordl_internal_set_countdownSoundGoTime(float_t  value) ;

constexpr void __cordl_internal_set_countdownSoundPlayer(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_countdownText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_finishLineText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_isRaceEndSoundEnabled(bool  value) ;

constexpr void __cordl_internal_set_lastDisplayedCountdown(int32_t  value) ;

constexpr void __cordl_internal_set_nextVisualRefreshTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_raceConsoleVisual(::UnityW<::GlobalNamespace::RaceConsoleVisual>  value) ;

constexpr void __cordl_internal_set_raceEndSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_raceScoreboards(::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>  value) ;

constexpr void __cordl_internal_set_raceStartScoreboard(::UnityW<::GlobalNamespace::RacingScoreboard>  value) ;

constexpr void __cordl_internal_set_startingWall(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x568f358, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x568eca4, size 0x8, virtual false, abstract: false, final false
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_raceId, addr 0x568ec94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_raceId() ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x568ecac, size 0x8, virtual false, abstract: false, final false
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_raceId, addr 0x568ec9c, size 0x8, virtual false, abstract: false, final false
inline void set_raceId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaceVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaceVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaceVisual(RaceVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaceVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaceVisual(RaceVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{879};

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <raceId>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____raceId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field finishLineText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___finishLineText;

/// [SerializeField]
/// @brief Field countdownText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___countdownText;

/// [SerializeField]
/// @brief Field raceScoreboards, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>  ___raceScoreboards;

/// [SerializeField]
/// @brief Field raceStartScoreboard, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RacingScoreboard>  ___raceStartScoreboard;

/// [SerializeField]
/// @brief Field raceConsoleVisual, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RaceConsoleVisual>  ___raceConsoleVisual;

/// @brief Field nextVisualRefreshTimestamp, offset: 0x50, size: 0x4, def value: None
 float_t  ___nextVisualRefreshTimestamp;

/// @brief Field checkpoints, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RaceCheckpointManager>  ___checkpoints;

/// [SerializeField]
/// @brief Field raceEndSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___raceEndSound;

/// [SerializeField]
/// @brief Field countdownSoundGoTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___countdownSoundGoTime;

/// [SerializeField]
/// @brief Field countdownSoundPlayer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___countdownSoundPlayer;

/// [SerializeField]
/// @brief Field startingWall, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startingWall;

/// @brief Field lastDisplayedCountdown, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lastDisplayedCountdown;

/// @brief Field isRaceEndSoundEnabled, offset: 0x84, size: 0x1, def value: None
 bool  ___isRaceEndSoundEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaceVisual, ____raceId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ____TickRunning_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___finishLineText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___countdownText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___raceScoreboards) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___raceStartScoreboard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___raceConsoleVisual) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___nextVisualRefreshTimestamp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___checkpoints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___raceEndSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___countdownSoundGoTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___countdownSoundPlayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___startingWall) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___lastDisplayedCountdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceVisual, ___isRaceEndSoundEnabled) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaceVisual) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
