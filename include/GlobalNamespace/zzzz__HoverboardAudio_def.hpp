#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoverboardAudio)
namespace GlobalNamespace {
class AudioAnimator;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class HoverboardAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoverboardAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoverboardAudio*, "", "HoverboardAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoverboardAudio
class CORDL_TYPE HoverboardAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field didInitHum1BaseVolume, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_didInitHum1BaseVolume, put=__cordl_internal_set_didInitHum1BaseVolume)) bool  didInitHum1BaseVolume;

/// @brief Field fadeSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeSpeed, put=__cordl_internal_set_fadeSpeed)) float_t  fadeSpeed;

/// @brief Field grindAnimator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_grindAnimator, put=__cordl_internal_set_grindAnimator)) ::UnityW<::GlobalNamespace::AudioAnimator>  grindAnimator;

/// @brief Field hum1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hum1, put=__cordl_internal_set_hum1)) ::UnityW<::UnityEngine::AudioSource>  hum1;

/// @brief Field hum1BaseVolume, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_hum1BaseVolume, put=__cordl_internal_set_hum1BaseVolume)) float_t  hum1BaseVolume;

/// @brief Field minAngleDeltaForTurnSound, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAngleDeltaForTurnSound, put=__cordl_internal_set_minAngleDeltaForTurnSound)) float_t  minAngleDeltaForTurnSound;

/// @brief Field motorAnimator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_motorAnimator, put=__cordl_internal_set_motorAnimator)) ::UnityW<::GlobalNamespace::AudioAnimator>  motorAnimator;

/// @brief Field turnSoundCooldownDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSoundCooldownDuration, put=__cordl_internal_set_turnSoundCooldownDuration)) float_t  turnSoundCooldownDuration;

/// @brief Field turnSoundCooldownUntilTimestamp, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSoundCooldownUntilTimestamp, put=__cordl_internal_set_turnSoundCooldownUntilTimestamp)) float_t  turnSoundCooldownUntilTimestamp;

/// @brief Field turnSounds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnSounds, put=__cordl_internal_set_turnSounds)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  turnSounds;

/// @brief Field windRushAnimator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_windRushAnimator, put=__cordl_internal_set_windRushAnimator)) ::UnityW<::GlobalNamespace::AudioAnimator>  windRushAnimator;

static inline ::GlobalNamespace::HoverboardAudio* New_ctor() ;

/// @brief Method PlayTurnSound, addr 0x5955d40, size 0x6c, virtual false, abstract: false, final false
inline void PlayTurnSound(float_t  angle) ;

/// @brief Method Start, addr 0x5955cac, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5955cb0, size 0x90, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method UpdateAudioLoop, addr 0x5955dac, size 0x138, virtual false, abstract: false, final false
inline void UpdateAudioLoop(float_t  speed, float_t  airspeed, float_t  strainLevel, float_t  grindLevel) ;

constexpr bool const& __cordl_internal_get_didInitHum1BaseVolume() const;

constexpr bool& __cordl_internal_get_didInitHum1BaseVolume() ;

constexpr float_t const& __cordl_internal_get_fadeSpeed() const;

constexpr float_t& __cordl_internal_get_fadeSpeed() ;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& __cordl_internal_get_grindAnimator() const;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& __cordl_internal_get_grindAnimator() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_hum1() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_hum1() ;

constexpr float_t const& __cordl_internal_get_hum1BaseVolume() const;

constexpr float_t& __cordl_internal_get_hum1BaseVolume() ;

constexpr float_t const& __cordl_internal_get_minAngleDeltaForTurnSound() const;

constexpr float_t& __cordl_internal_get_minAngleDeltaForTurnSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& __cordl_internal_get_motorAnimator() const;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& __cordl_internal_get_motorAnimator() ;

constexpr float_t const& __cordl_internal_get_turnSoundCooldownDuration() const;

constexpr float_t& __cordl_internal_get_turnSoundCooldownDuration() ;

constexpr float_t const& __cordl_internal_get_turnSoundCooldownUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_turnSoundCooldownUntilTimestamp() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_turnSounds() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_turnSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& __cordl_internal_get_windRushAnimator() const;

constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& __cordl_internal_get_windRushAnimator() ;

constexpr void __cordl_internal_set_didInitHum1BaseVolume(bool  value) ;

constexpr void __cordl_internal_set_fadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_grindAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value) ;

constexpr void __cordl_internal_set_hum1(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_hum1BaseVolume(float_t  value) ;

constexpr void __cordl_internal_set_minAngleDeltaForTurnSound(float_t  value) ;

constexpr void __cordl_internal_set_motorAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value) ;

constexpr void __cordl_internal_set_turnSoundCooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_turnSoundCooldownUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_turnSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_windRushAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value) ;

/// @brief Method .ctor, addr 0x5955ee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverboardAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverboardAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverboardAudio(HoverboardAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverboardAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverboardAudio(HoverboardAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2313};

/// [SerializeField]
/// @brief Field hum1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___hum1;

/// [SerializeField]
/// @brief Field turnSounds, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___turnSounds;

/// @brief Field didInitHum1BaseVolume, offset: 0x30, size: 0x1, def value: None
 bool  ___didInitHum1BaseVolume;

/// @brief Field hum1BaseVolume, offset: 0x34, size: 0x4, def value: None
 float_t  ___hum1BaseVolume;

/// [SerializeField]
/// @brief Field fadeSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___fadeSpeed;

/// [SerializeField]
/// @brief Field windRushAnimator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAnimator>  ___windRushAnimator;

/// [SerializeField]
/// @brief Field motorAnimator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAnimator>  ___motorAnimator;

/// [SerializeField]
/// @brief Field grindAnimator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAnimator>  ___grindAnimator;

/// [SerializeField]
/// @brief Field turnSoundCooldownDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___turnSoundCooldownDuration;

/// [SerializeField]
/// @brief Field minAngleDeltaForTurnSound, offset: 0x5c, size: 0x4, def value: None
 float_t  ___minAngleDeltaForTurnSound;

/// @brief Field turnSoundCooldownUntilTimestamp, offset: 0x60, size: 0x4, def value: None
 float_t  ___turnSoundCooldownUntilTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___hum1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___turnSounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___didInitHum1BaseVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___hum1BaseVolume) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___fadeSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___windRushAnimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___motorAnimator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___grindAnimator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___turnSoundCooldownDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___minAngleDeltaForTurnSound) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardAudio, ___turnSoundCooldownUntilTimestamp) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoverboardAudio) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
