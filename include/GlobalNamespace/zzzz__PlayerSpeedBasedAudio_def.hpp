#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpeedBasedAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSpeedBasedAudio)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpeedBasedAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSpeedBasedAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSpeedBasedAudio*, "", "PlayerSpeedBasedAudio");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSpeedBasedAudio
class CORDL_TYPE PlayerSpeedBasedAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field baseVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseVolume, put=__cordl_internal_set_baseVolume)) float_t  baseVolume;

/// @brief Field currentFadeLevel, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFadeLevel, put=__cordl_internal_set_currentFadeLevel)) float_t  currentFadeLevel;

/// @brief Field fadeRate, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeRate, put=__cordl_internal_set_fadeRate)) float_t  fadeRate;

/// @brief Field fadeTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeTime, put=__cordl_internal_set_fadeTime)) float_t  fadeTime;

/// @brief Field fullVolumeSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullVolumeSpeed, put=__cordl_internal_set_fullVolumeSpeed)) float_t  fullVolumeSpeed;

/// @brief Field localPlayerVelocityEstimator, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_localPlayerVelocityEstimator, put=__cordl_internal_set_localPlayerVelocityEstimator)) ::GlobalNamespace::XSceneRef  localPlayerVelocityEstimator;

/// @brief Field minVolumeSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolumeSpeed, put=__cordl_internal_set_minVolumeSpeed)) float_t  minVolumeSpeed;

/// @brief Field velocityEstimator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

static inline ::GlobalNamespace::PlayerSpeedBasedAudio* New_ctor() ;

/// @brief Method Start, addr 0x564693c, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56469b0, size 0x138, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_baseVolume() const;

constexpr float_t& __cordl_internal_get_baseVolume() ;

constexpr float_t const& __cordl_internal_get_currentFadeLevel() const;

constexpr float_t& __cordl_internal_get_currentFadeLevel() ;

constexpr float_t const& __cordl_internal_get_fadeRate() const;

constexpr float_t& __cordl_internal_get_fadeRate() ;

constexpr float_t const& __cordl_internal_get_fadeTime() const;

constexpr float_t& __cordl_internal_get_fadeTime() ;

constexpr float_t const& __cordl_internal_get_fullVolumeSpeed() const;

constexpr float_t& __cordl_internal_get_fullVolumeSpeed() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_localPlayerVelocityEstimator() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_localPlayerVelocityEstimator() ;

constexpr float_t const& __cordl_internal_get_minVolumeSpeed() const;

constexpr float_t& __cordl_internal_get_minVolumeSpeed() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_baseVolume(float_t  value) ;

constexpr void __cordl_internal_set_currentFadeLevel(float_t  value) ;

constexpr void __cordl_internal_set_fadeRate(float_t  value) ;

constexpr void __cordl_internal_set_fadeTime(float_t  value) ;

constexpr void __cordl_internal_set_fullVolumeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerVelocityEstimator(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_minVolumeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5646ae8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSpeedBasedAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeedBasedAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSpeedBasedAudio(PlayerSpeedBasedAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpeedBasedAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSpeedBasedAudio(PlayerSpeedBasedAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{688};

/// [SerializeField]
/// @brief Field minVolumeSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___minVolumeSpeed;

/// [SerializeField]
/// @brief Field fullVolumeSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___fullVolumeSpeed;

/// [SerializeField]
/// @brief Field fadeTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___fadeTime;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field localPlayerVelocityEstimator, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___localPlayerVelocityEstimator;

/// @brief Field velocityEstimator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field baseVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___baseVolume;

/// @brief Field fadeRate, offset: 0x5c, size: 0x4, def value: None
 float_t  ___fadeRate;

/// @brief Field currentFadeLevel, offset: 0x60, size: 0x4, def value: None
 float_t  ___currentFadeLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___minVolumeSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___fullVolumeSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___fadeTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___localPlayerVelocityEstimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___velocityEstimator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___baseVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___fadeRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpeedBasedAudio, ___currentFadeLevel) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSpeedBasedAudio) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
