#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveTimerDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveTimerDisplay)
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveTimerDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay*, "", "GorillaTagCompetitiveTimerDisplay");
// Dependencies GorillaTagCompetitiveManager::GameState, TMPro.TextMeshPro, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveTimerDisplay
class CORDL_TYPE GorillaTagCompetitiveTimerDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bronzeCelebration, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bronzeCelebration, put=__cordl_internal_set_bronzeCelebration)) ::UnityW<::UnityEngine::ParticleSystem>  bronzeCelebration;

/// @brief Field celebrationAudio, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_celebrationAudio, put=__cordl_internal_set_celebrationAudio)) ::UnityW<::UnityEngine::AudioSource>  celebrationAudio;

/// @brief Field currentBackground, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentBackground, put=__cordl_internal_set_currentBackground)) ::UnityW<::UnityEngine::GameObject>  currentBackground;

/// @brief Field currentState, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  currentState;

/// @brief Field goldCelebration, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_goldCelebration, put=__cordl_internal_set_goldCelebration)) ::UnityW<::UnityEngine::ParticleSystem>  goldCelebration;

/// @brief Field myRig, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field playingBackground, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playingBackground, put=__cordl_internal_set_playingBackground)) ::UnityW<::UnityEngine::GameObject>  playingBackground;

/// @brief Field postRoundBackground, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_postRoundBackground, put=__cordl_internal_set_postRoundBackground)) ::UnityW<::UnityEngine::GameObject>  postRoundBackground;

/// @brief Field postRoundTimerText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_postRoundTimerText, put=__cordl_internal_set_postRoundTimerText)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>>  postRoundTimerText;

/// @brief Field prevTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevTime, put=__cordl_internal_set_prevTime)) int32_t  prevTime;

/// @brief Field resultsDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultsDisplay, put=__cordl_internal_set_resultsDisplay)) ::UnityW<::TMPro::TextMeshPro>  resultsDisplay;

/// @brief Field silverCelebration, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_silverCelebration, put=__cordl_internal_set_silverCelebration)) ::UnityW<::UnityEngine::ParticleSystem>  silverCelebration;

/// @brief Field startCountdownBackground, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_startCountdownBackground, put=__cordl_internal_set_startCountdownBackground)) ::UnityW<::UnityEngine::GameObject>  startCountdownBackground;

/// @brief Field timerColorPlaying, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_timerColorPlaying, put=__cordl_internal_set_timerColorPlaying)) ::UnityEngine::Color  timerColorPlaying;

/// @brief Field timerColorPostRound, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_timerColorPostRound, put=__cordl_internal_set_timerColorPostRound)) ::UnityEngine::Color  timerColorPostRound;

/// @brief Field timerColorStart, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_timerColorStart, put=__cordl_internal_set_timerColorStart)) ::UnityEngine::Color  timerColorStart;

/// @brief Field timerDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerDisplay, put=__cordl_internal_set_timerDisplay)) ::UnityW<::TMPro::TextMeshPro>  timerDisplay;

/// @brief Field timerDisplay2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerDisplay2, put=__cordl_internal_set_timerDisplay2)) ::UnityW<::TMPro::TextMeshPro>  timerDisplay2;

/// @brief Field tintableCelebration, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tintableCelebration, put=__cordl_internal_set_tintableCelebration)) ::UnityW<::UnityEngine::ParticleSystem>  tintableCelebration;

/// @brief Field waitingForPlayersBackground, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForPlayersBackground, put=__cordl_internal_set_waitingForPlayersBackground)) ::UnityW<::UnityEngine::GameObject>  waitingForPlayersBackground;

/// @brief Method Awake, addr 0x592e7b4, size 0x1a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisplayStandardTimer, addr 0x592ebb0, size 0xdc, virtual false, abstract: false, final false
inline void DisplayStandardTimer(bool  bShow) ;

/// @brief Method DoPostRoundShow, addr 0x592eec4, size 0x8c8, virtual false, abstract: false, final false
inline void DoPostRoundShow() ;

/// @brief Method GetTextColor, addr 0x592fa88, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetTextColor(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

/// @brief Method HandleOnGameStateChanged, addr 0x592eb18, size 0x98, virtual false, abstract: false, final false
inline void HandleOnGameStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

/// @brief Method HandleOnTimeChanged, addr 0x592f78c, size 0x2a8, virtual false, abstract: false, final false
inline void HandleOnTimeChanged(float_t  time) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveTimerDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x592ec8c, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x592e95c, size 0x1bc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SelectBackground, addr 0x592fa34, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> SelectBackground(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

/// @brief Method SetNewBackground, addr 0x592ed80, size 0x144, virtual false, abstract: false, final false
inline void SetNewBackground(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_bronzeCelebration() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_bronzeCelebration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_celebrationAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_celebrationAudio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentBackground() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_goldCelebration() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_goldCelebration() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playingBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playingBackground() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_postRoundBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_postRoundBackground() ;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>> const& __cordl_internal_get_postRoundTimerText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>>& __cordl_internal_get_postRoundTimerText() ;

constexpr int32_t const& __cordl_internal_get_prevTime() const;

constexpr int32_t& __cordl_internal_get_prevTime() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_resultsDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_resultsDisplay() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_silverCelebration() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_silverCelebration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_startCountdownBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_startCountdownBackground() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_timerColorPlaying() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_timerColorPlaying() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_timerColorPostRound() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_timerColorPostRound() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_timerColorStart() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_timerColorStart() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timerDisplay() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timerDisplay() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timerDisplay2() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timerDisplay2() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_tintableCelebration() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_tintableCelebration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForPlayersBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForPlayersBackground() ;

constexpr void __cordl_internal_set_bronzeCelebration(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_celebrationAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentBackground(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  value) ;

constexpr void __cordl_internal_set_goldCelebration(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_playingBackground(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_postRoundBackground(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_postRoundTimerText(::ArrayW<::UnityW<::TMPro::TextMeshPro>>  value) ;

constexpr void __cordl_internal_set_prevTime(int32_t  value) ;

constexpr void __cordl_internal_set_resultsDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_silverCelebration(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_startCountdownBackground(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_timerColorPlaying(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_timerColorPostRound(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_timerColorStart(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_timerDisplay(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_timerDisplay2(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_tintableCelebration(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_waitingForPlayersBackground(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x592fafc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveTimerDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveTimerDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveTimerDisplay(GorillaTagCompetitiveTimerDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveTimerDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveTimerDisplay(GorillaTagCompetitiveTimerDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2251};

/// @brief Field timerDisplay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timerDisplay;

/// @brief Field timerDisplay2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timerDisplay2;

/// @brief Field resultsDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___resultsDisplay;

/// @brief Field waitingForPlayersBackground, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForPlayersBackground;

/// @brief Field startCountdownBackground, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___startCountdownBackground;

/// @brief Field timerColorStart, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___timerColorStart;

/// @brief Field playingBackground, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playingBackground;

/// @brief Field timerColorPlaying, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___timerColorPlaying;

/// @brief Field postRoundBackground, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___postRoundBackground;

/// @brief Field timerColorPostRound, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___timerColorPostRound;

/// @brief Field postRoundTimerText, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TextMeshPro>>  ___postRoundTimerText;

/// @brief Field currentState, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  ___currentState;

/// @brief Field currentBackground, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentBackground;

/// @brief Field prevTime, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___prevTime;

/// [SerializeField]
/// @brief Field tintableCelebration, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___tintableCelebration;

/// [SerializeField]
/// @brief Field goldCelebration, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___goldCelebration;

/// [SerializeField]
/// @brief Field silverCelebration, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___silverCelebration;

/// [SerializeField]
/// @brief Field bronzeCelebration, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___bronzeCelebration;

/// @brief Field myRig, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field celebrationAudio, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___celebrationAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___timerDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___timerDisplay2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___resultsDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___waitingForPlayersBackground) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___startCountdownBackground) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___timerColorStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___playingBackground) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___timerColorPlaying) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___postRoundBackground) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___timerColorPostRound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___postRoundTimerText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___currentState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___currentBackground) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___prevTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___tintableCelebration) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___goldCelebration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___silverCelebration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___bronzeCelebration) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___myRig) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay, ___celebrationAudio) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveTimerDisplay) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
