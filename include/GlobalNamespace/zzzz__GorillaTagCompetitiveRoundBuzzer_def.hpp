#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRoundBuzzer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveRoundBuzzer)
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveRoundBuzzer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer*, "", "GorillaTagCompetitiveRoundBuzzer");
// Dependencies GorillaTagCompetitiveManager::GameState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveRoundBuzzer
class CORDL_TYPE GorillaTagCompetitiveRoundBuzzer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field lastState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  lastState;

/// @brief Field lastStateRemainingTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStateRemainingTime, put=__cordl_internal_set_lastStateRemainingTime)) float_t  lastStateRemainingTime;

/// @brief Field needMorePlayerClip, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_needMorePlayerClip, put=__cordl_internal_set_needMorePlayerClip)) ::UnityW<::UnityEngine::AudioClip>  needMorePlayerClip;

/// @brief Field roundCountdownClip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roundCountdownClip, put=__cordl_internal_set_roundCountdownClip)) ::UnityW<::UnityEngine::AudioClip>  roundCountdownClip;

/// @brief Field roundEndClip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_roundEndClip, put=__cordl_internal_set_roundEndClip)) ::UnityW<::UnityEngine::AudioClip>  roundEndClip;

/// @brief Field roundEndCountdownDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundEndCountdownDuration, put=__cordl_internal_set_roundEndCountdownDuration)) int32_t  roundEndCountdownDuration;

/// @brief Field roundEndingCountdownClip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_roundEndingCountdownClip, put=__cordl_internal_set_roundEndingCountdownClip)) ::UnityW<::UnityEngine::AudioClip>  roundEndingCountdownClip;

/// @brief Field roundStartClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_roundStartClip, put=__cordl_internal_set_roundStartClip)) ::UnityW<::UnityEngine::AudioClip>  roundStartClip;

static inline ::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer* New_ctor() ;

/// @brief Method OnDisable, addr 0x592ae90, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x592ad9c, size 0xf4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStateChanged, addr 0x592af84, size 0x58, virtual false, abstract: false, final false
inline void OnStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState) ;

/// @brief Method OnUpdateRemainingTime, addr 0x592aff8, size 0x14c, virtual false, abstract: false, final false
inline void OnUpdateRemainingTime(float_t  remainingTime) ;

/// @brief Method PlaySFX, addr 0x592afdc, size 0x1c, virtual false, abstract: false, final false
inline void PlaySFX(::UnityEngine::AudioClip*  clip) ;

/// @brief Method PlaySFX, addr 0x592b144, size 0x18, virtual false, abstract: false, final false
inline void PlaySFX(::UnityEngine::AudioClip*  clip, float_t  volume) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_lastStateRemainingTime() const;

constexpr float_t& __cordl_internal_get_lastStateRemainingTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_needMorePlayerClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_needMorePlayerClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_roundCountdownClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_roundCountdownClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_roundEndClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_roundEndClip() ;

constexpr int32_t const& __cordl_internal_get_roundEndCountdownDuration() const;

constexpr int32_t& __cordl_internal_get_roundEndCountdownDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_roundEndingCountdownClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_roundEndingCountdownClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_roundStartClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_roundStartClip() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  value) ;

constexpr void __cordl_internal_set_lastStateRemainingTime(float_t  value) ;

constexpr void __cordl_internal_set_needMorePlayerClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_roundCountdownClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_roundEndClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_roundEndCountdownDuration(int32_t  value) ;

constexpr void __cordl_internal_set_roundEndingCountdownClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_roundStartClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x592b15c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveRoundBuzzer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRoundBuzzer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveRoundBuzzer(GorillaTagCompetitiveRoundBuzzer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRoundBuzzer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveRoundBuzzer(GorillaTagCompetitiveRoundBuzzer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2226};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field roundCountdownClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___roundCountdownClip;

/// @brief Field roundStartClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___roundStartClip;

/// @brief Field roundEndingCountdownClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___roundEndingCountdownClip;

/// @brief Field roundEndCountdownDuration, offset: 0x40, size: 0x4, def value: None
 int32_t  ___roundEndCountdownDuration;

/// @brief Field roundEndClip, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___roundEndClip;

/// @brief Field needMorePlayerClip, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___needMorePlayerClip;

/// @brief Field lastState, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::GorillaTagCompetitiveManager_GameState  ___lastState;

/// @brief Field lastStateRemainingTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___lastStateRemainingTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___roundCountdownClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___roundStartClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___roundEndingCountdownClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___roundEndCountdownDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___roundEndClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___needMorePlayerClip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___lastState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer, ___lastStateRemainingTime) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveRoundBuzzer) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
