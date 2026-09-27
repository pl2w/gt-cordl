#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterSplashEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterSplashEffect)
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class WaterSplashEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaterSplashEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterSplashEffect*, "", "WaterSplashEffect");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterSplashEffect
class CORDL_TYPE WaterSplashEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bigSplashAudioClips, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bigSplashAudioClips, put=__cordl_internal_set_bigSplashAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  bigSplashAudioClips;

/// @brief Field bigSplashBaseGravityMultiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_bigSplashBaseGravityMultiplier, put=__cordl_internal_set_bigSplashBaseGravityMultiplier)) float_t  bigSplashBaseGravityMultiplier;

/// @brief Field bigSplashBaseSimulationSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bigSplashBaseSimulationSpeed, put=__cordl_internal_set_bigSplashBaseSimulationSpeed)) float_t  bigSplashBaseSimulationSpeed;

/// @brief Field bigSplashBaseStartSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_bigSplashBaseStartSpeed, put=__cordl_internal_set_bigSplashBaseStartSpeed)) float_t  bigSplashBaseStartSpeed;

/// @brief Field bigSplashParticleSystems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bigSplashParticleSystems, put=__cordl_internal_set_bigSplashParticleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  bigSplashParticleSystems;

/// @brief Field lastPlayedBigSplashAudioClipIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastPlayedBigSplashAudioClipIndex, put=setStaticF_lastPlayedBigSplashAudioClipIndex)) int32_t  lastPlayedBigSplashAudioClipIndex;

/// @brief Field lastPlayedSmallSplashEntryAudioClipIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastPlayedSmallSplashEntryAudioClipIndex, put=setStaticF_lastPlayedSmallSplashEntryAudioClipIndex)) int32_t  lastPlayedSmallSplashEntryAudioClipIndex;

/// @brief Field lastPlayedSmallSplashExitAudioClipIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastPlayedSmallSplashExitAudioClipIndex, put=setStaticF_lastPlayedSmallSplashExitAudioClipIndex)) int32_t  lastPlayedSmallSplashExitAudioClipIndex;

/// @brief Field lifeTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) float_t  lifeTime;

/// @brief Field smallSplashBaseGravityMultiplier, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallSplashBaseGravityMultiplier, put=__cordl_internal_set_smallSplashBaseGravityMultiplier)) float_t  smallSplashBaseGravityMultiplier;

/// @brief Field smallSplashBaseSimulationSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallSplashBaseSimulationSpeed, put=__cordl_internal_set_smallSplashBaseSimulationSpeed)) float_t  smallSplashBaseSimulationSpeed;

/// @brief Field smallSplashBaseStartSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallSplashBaseStartSpeed, put=__cordl_internal_set_smallSplashBaseStartSpeed)) float_t  smallSplashBaseStartSpeed;

/// @brief Field smallSplashEntryAudioClips, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallSplashEntryAudioClips, put=__cordl_internal_set_smallSplashEntryAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  smallSplashEntryAudioClips;

/// @brief Field smallSplashExitAudioClips, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallSplashExitAudioClips, put=__cordl_internal_set_smallSplashExitAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  smallSplashExitAudioClips;

/// @brief Field smallSplashParticleSystems, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallSplashParticleSystems, put=__cordl_internal_set_smallSplashParticleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  smallSplashParticleSystems;

/// @brief Field startTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field waterVolume, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterVolume, put=__cordl_internal_set_waterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  waterVolume;

/// @brief Method DeactivateParticleSystems, addr 0x56b63ac, size 0x70, virtual false, abstract: false, final false
inline void DeactivateParticleSystems(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems) ;

/// @brief Method Destroy, addr 0x56b6310, size 0x9c, virtual false, abstract: false, final false
inline void Destroy() ;

static inline ::GlobalNamespace::WaterSplashEffect* New_ctor() ;

/// @brief Method OnEnable, addr 0x56b62f4, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayEffect, addr 0x56b641c, size 0x124, virtual false, abstract: false, final false
inline void PlayEffect(bool  isBigSplash, bool  isEntry, float_t  scale, ::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method PlayParticleEffects, addr 0x56b6790, size 0x8c, virtual false, abstract: false, final false
inline void PlayParticleEffects(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems) ;

/// @brief Method PlayRandomAudioClipWithoutRepeats, addr 0x56b681c, size 0x140, virtual false, abstract: false, final false
inline void PlayRandomAudioClipWithoutRepeats(::ArrayW<::UnityEngine::AudioClip*>  audioClips, ::by_ref<int32_t>  lastPlayedAudioClipIndex) ;

/// @brief Method SetParticleEffectParameters, addr 0x56b6540, size 0x250, virtual false, abstract: false, final false
inline void SetParticleEffectParameters(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems, float_t  scale, float_t  baseGravMultiplier, float_t  baseStartSpeed, float_t  baseSimulationSpeed, ::GorillaLocomotion::Swimming::WaterVolume*  waterVolume) ;

/// @brief Method Update, addr 0x56b695c, size 0x218, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_bigSplashAudioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_bigSplashAudioClips() ;

constexpr float_t const& __cordl_internal_get_bigSplashBaseGravityMultiplier() const;

constexpr float_t& __cordl_internal_get_bigSplashBaseGravityMultiplier() ;

constexpr float_t const& __cordl_internal_get_bigSplashBaseSimulationSpeed() const;

constexpr float_t& __cordl_internal_get_bigSplashBaseSimulationSpeed() ;

constexpr float_t const& __cordl_internal_get_bigSplashBaseStartSpeed() const;

constexpr float_t& __cordl_internal_get_bigSplashBaseStartSpeed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_bigSplashParticleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_bigSplashParticleSystems() ;

constexpr float_t const& __cordl_internal_get_lifeTime() const;

constexpr float_t& __cordl_internal_get_lifeTime() ;

constexpr float_t const& __cordl_internal_get_smallSplashBaseGravityMultiplier() const;

constexpr float_t& __cordl_internal_get_smallSplashBaseGravityMultiplier() ;

constexpr float_t const& __cordl_internal_get_smallSplashBaseSimulationSpeed() const;

constexpr float_t& __cordl_internal_get_smallSplashBaseSimulationSpeed() ;

constexpr float_t const& __cordl_internal_get_smallSplashBaseStartSpeed() const;

constexpr float_t& __cordl_internal_get_smallSplashBaseStartSpeed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_smallSplashEntryAudioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_smallSplashEntryAudioClips() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_smallSplashExitAudioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_smallSplashExitAudioClips() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_smallSplashParticleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_smallSplashParticleSystems() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_waterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_waterVolume() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bigSplashAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_bigSplashBaseGravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bigSplashBaseSimulationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_bigSplashBaseStartSpeed(float_t  value) ;

constexpr void __cordl_internal_set_bigSplashParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_lifeTime(float_t  value) ;

constexpr void __cordl_internal_set_smallSplashBaseGravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_smallSplashBaseSimulationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_smallSplashBaseStartSpeed(float_t  value) ;

constexpr void __cordl_internal_set_smallSplashEntryAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_smallSplashExitAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_smallSplashParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

/// @brief Method .ctor, addr 0x56b6b74, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_lastPlayedBigSplashAudioClipIndex() ;

static inline int32_t getStaticF_lastPlayedSmallSplashEntryAudioClipIndex() ;

static inline int32_t getStaticF_lastPlayedSmallSplashExitAudioClipIndex() ;

static inline void setStaticF_lastPlayedBigSplashAudioClipIndex(int32_t  value) ;

static inline void setStaticF_lastPlayedSmallSplashEntryAudioClipIndex(int32_t  value) ;

static inline void setStaticF_lastPlayedSmallSplashExitAudioClipIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSplashEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSplashEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSplashEffect(WaterSplashEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSplashEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSplashEffect(WaterSplashEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{952};

/// @brief Field bigSplashParticleSystems, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___bigSplashParticleSystems;

/// @brief Field smallSplashParticleSystems, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___smallSplashParticleSystems;

/// @brief Field bigSplashBaseGravityMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  ___bigSplashBaseGravityMultiplier;

/// @brief Field bigSplashBaseStartSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___bigSplashBaseStartSpeed;

/// @brief Field bigSplashBaseSimulationSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___bigSplashBaseSimulationSpeed;

/// @brief Field smallSplashBaseGravityMultiplier, offset: 0x3c, size: 0x4, def value: None
 float_t  ___smallSplashBaseGravityMultiplier;

/// @brief Field smallSplashBaseStartSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___smallSplashBaseStartSpeed;

/// @brief Field smallSplashBaseSimulationSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___smallSplashBaseSimulationSpeed;

/// @brief Field lifeTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___lifeTime;

/// @brief Field startTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field audioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field bigSplashAudioClips, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___bigSplashAudioClips;

/// @brief Field smallSplashEntryAudioClips, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___smallSplashEntryAudioClips;

/// @brief Field smallSplashExitAudioClips, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___smallSplashExitAudioClips;

/// @brief Field waterVolume, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___waterVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___bigSplashParticleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashParticleSystems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___bigSplashBaseGravityMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___bigSplashBaseStartSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___bigSplashBaseSimulationSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashBaseGravityMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashBaseStartSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashBaseSimulationSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___lifeTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___startTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___audioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___bigSplashAudioClips) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashEntryAudioClips) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___smallSplashExitAudioClips) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterSplashEffect, ___waterVolume) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterSplashEffect) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
