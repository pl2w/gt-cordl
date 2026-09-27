#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseZoneTrigger_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourse_RaceState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleCourse)
namespace GlobalNamespace {
struct ObstacleCourse_RaceState;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts::ObstacleCourse {
class TappableBell;
}
namespace GorillaTagScripts::ObstacleCourse {
class WinnerScoreboard;
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
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourse;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleCourse*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleCourse*, "GorillaTagScripts.ObstacleCourse", "ObstacleCourse");
// Dependencies GorillaTagScripts.ObstacleCourse.ObstacleCourse::RaceState, GorillaTagScripts.ObstacleCourse.ObstacleCourseZoneTrigger, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourse
class CORDL_TYPE ObstacleCourse : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RaceState = ::GlobalNamespace::ObstacleCourse_RaceState;

/// @brief Field TappableBell, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_TappableBell, put=__cordl_internal_set_TappableBell)) ::UnityW<::GorillaTagScripts::ObstacleCourse::TappableBell>  TappableBell;

/// @brief Field <winnerActorNumber>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__winnerActorNumber_k__BackingField, put=__cordl_internal_set__winnerActorNumber_k__BackingField)) int32_t  _winnerActorNumber_k__BackingField;

/// @brief Field audioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bannerRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bannerRenderer, put=__cordl_internal_set_bannerRenderer)) ::UnityW<::UnityEngine::Renderer>  bannerRenderer;

/// @brief Field confettiParticle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_confettiParticle, put=__cordl_internal_set_confettiParticle)) ::UnityW<::UnityEngine::ParticleSystem>  confettiParticle;

/// @brief Field cooldownTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field currentState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::ObstacleCourse_RaceState  currentState;

/// @brief Field leftGate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftGate, put=__cordl_internal_set_leftGate)) ::UnityW<::UnityEngine::GameObject>  leftGate;

/// @brief Field numPlayersOnCourse, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPlayersOnCourse, put=__cordl_internal_set_numPlayersOnCourse)) int32_t  numPlayersOnCourse;

/// @brief Field rightGate, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightGate, put=__cordl_internal_set_rightGate)) ::UnityW<::UnityEngine::GameObject>  rightGate;

/// @brief Field scoreboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboard, put=__cordl_internal_set_scoreboard)) ::UnityW<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard>  scoreboard;

/// @brief Field startTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

 __declspec(property(get=get_winnerActorNumber, put=set_winnerActorNumber)) int32_t  winnerActorNumber;

/// @brief Field winnerRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_winnerRig, put=__cordl_internal_set_winnerRig)) ::UnityW<::GlobalNamespace::RigContainer>  winnerRig;

/// @brief Field zoneTriggers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneTriggers, put=__cordl_internal_set_zoneTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger>>  zoneTriggers;

/// @brief Method Awake, addr 0x5c166d8, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Deserialize, addr 0x5c17570, size 0x168, virtual false, abstract: false, final false
inline void Deserialize(int32_t  _winnerActorNumber, ::GlobalNamespace::ObstacleCourse_RaceState  _currentState) ;

/// @brief Method EndRace, addr 0x5c172ec, size 0x28, virtual false, abstract: false, final false
inline void EndRace() ;

/// @brief Method InvokeUpdate, addr 0x5c16fdc, size 0xfc, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourse* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c16c58, size 0x198, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEndLineTrigger, addr 0x5c174bc, size 0xb4, virtual false, abstract: false, final false
inline void OnEndLineTrigger(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnPlayerEnterZone, addr 0x5c170d8, size 0x6c, virtual false, abstract: false, final false
inline void OnPlayerEnterZone(::UnityEngine::Collider*  other) ;

/// @brief Method OnPlayerExitZone, addr 0x5c17144, size 0x6c, virtual false, abstract: false, final false
inline void OnPlayerExitZone(::UnityEngine::Collider*  other) ;

/// @brief Method PlayWinningEffects, addr 0x5c17314, size 0x1a8, virtual false, abstract: false, final false
inline void PlayWinningEffects() ;

/// @brief Method RestartTimer, addr 0x5c16fd0, size 0xc, virtual false, abstract: false, final false
inline void RestartTimer(bool  playFx) ;

/// @brief Method Start, addr 0x5c16fc4, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateStartingGate, addr 0x5c17844, size 0x28c, virtual false, abstract: false, final false
inline void UpdateStartingGate() ;

/// @brief Method UpdateState, addr 0x5c171b0, size 0x13c, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::ObstacleCourse_RaceState  state, bool  playFX) ;

constexpr ::UnityW<::GorillaTagScripts::ObstacleCourse::TappableBell> const& __cordl_internal_get_TappableBell() const;

constexpr ::UnityW<::GorillaTagScripts::ObstacleCourse::TappableBell>& __cordl_internal_get_TappableBell() ;

constexpr int32_t const& __cordl_internal_get__winnerActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__winnerActorNumber_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_bannerRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_bannerRenderer() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_confettiParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_confettiParticle() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr ::GlobalNamespace::ObstacleCourse_RaceState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::ObstacleCourse_RaceState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftGate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftGate() ;

constexpr int32_t const& __cordl_internal_get_numPlayersOnCourse() const;

constexpr int32_t& __cordl_internal_get_numPlayersOnCourse() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightGate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightGate() ;

constexpr ::UnityW<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard> const& __cordl_internal_get_scoreboard() const;

constexpr ::UnityW<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard>& __cordl_internal_get_scoreboard() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_winnerRig() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_winnerRig() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger>> const& __cordl_internal_get_zoneTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger>>& __cordl_internal_get_zoneTriggers() ;

constexpr void __cordl_internal_set_TappableBell(::UnityW<::GorillaTagScripts::ObstacleCourse::TappableBell>  value) ;

constexpr void __cordl_internal_set__winnerActorNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bannerRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_confettiParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::ObstacleCourse_RaceState  value) ;

constexpr void __cordl_internal_set_leftGate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_numPlayersOnCourse(int32_t  value) ;

constexpr void __cordl_internal_set_rightGate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_scoreboard(::UnityW<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard>  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_winnerRig(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_zoneTriggers(::ArrayW<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger>>  value) ;

/// @brief Method .ctor, addr 0x5c17ad0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_winnerActorNumber, addr 0x5c166c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_winnerActorNumber() ;

/// [CompilerGenerated]
/// @brief Method set_winnerActorNumber, addr 0x5c166d0, size 0x8, virtual false, abstract: false, final false
inline void set_winnerActorNumber(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleCourse(ObstacleCourse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleCourse(ObstacleCourse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4112};

/// @brief Field scoreboard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::ObstacleCourse::WinnerScoreboard>  ___scoreboard;

/// [CompilerGenerated]
/// @brief Field <winnerActorNumber>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____winnerActorNumber_k__BackingField;

/// @brief Field winnerRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___winnerRig;

/// @brief Field zoneTriggers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger>>  ___zoneTriggers;

/// [HideInInspector]
/// @brief Field currentState, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::ObstacleCourse_RaceState  ___currentState;

/// [SerializeField]
/// @brief Field confettiParticle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___confettiParticle;

/// [SerializeField]
/// @brief Field bannerRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___bannerRenderer;

/// [SerializeField]
/// @brief Field TappableBell, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::ObstacleCourse::TappableBell>  ___TappableBell;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field cooldownTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// @brief Field leftGate, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftGate;

/// @brief Field rightGate, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightGate;

/// @brief Field numPlayersOnCourse, offset: 0x80, size: 0x4, def value: None
 int32_t  ___numPlayersOnCourse;

/// @brief Field startTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___scoreboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ____winnerActorNumber_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___winnerRig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___zoneTriggers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___currentState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___confettiParticle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___bannerRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___TappableBell) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___audioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___cooldownTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___leftGate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___rightGate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___numPlayersOnCourse) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse, ___startTime) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleCourse) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
