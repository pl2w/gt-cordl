#pragma once
// IWYU pragma private; include "GlobalNamespace/VolcanoEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolcanoEffects)
namespace GlobalNamespace {
struct ParticleSystem_Burst;
}
namespace GlobalNamespace {
struct ParticleSystem_EmissionModule;
}
namespace GlobalNamespace {
class VolcanoEffects_LavaStateFX;
}
namespace GlobalNamespace {
class VolcanoEffects___PrewarmLavaSpewRenderers_d__35;
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
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class VolcanoEffects;
}
namespace GlobalNamespace {
class VolcanoEffects_LavaStateFX;
}
namespace GlobalNamespace {
class VolcanoEffects___PrewarmLavaSpewRenderers_d__35;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VolcanoEffects*);
MARK_REF_T(::GlobalNamespace::VolcanoEffects_LavaStateFX*);
MARK_REF_T(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolcanoEffects*, "", "VolcanoEffects");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolcanoEffects_LavaStateFX*, "", "VolcanoEffects/LavaStateFX");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35*, "", "VolcanoEffects/<_PrewarmLavaSpewRenderers>d__35");
// Dependencies UnityEngine.AudioSource, UnityEngine.MonoBehaviour, UnityEngine.Object, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::Burst, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: VolcanoEffects
class CORDL_TYPE VolcanoEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LavaStateFX = ::GlobalNamespace::VolcanoEffects_LavaStateFX;

using __PrewarmLavaSpewRenderers_d__35 = ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35;

/// @brief Field applyShaderGlobals, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyShaderGlobals, put=__cordl_internal_set_applyShaderGlobals)) bool  applyShaderGlobals;

/// @brief Field currentStateFX, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentStateFX, put=__cordl_internal_set_currentStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  currentStateFX;

/// @brief Field drainedStateFX, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainedStateFX, put=__cordl_internal_set_drainedStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  drainedStateFX;

/// @brief Field drainingStateFX, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainingStateFX, put=__cordl_internal_set_drainingStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  drainingStateFX;

/// @brief Field eruptingStateFX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_eruptingStateFX, put=__cordl_internal_set_eruptingStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  eruptingStateFX;

/// @brief Field forestSpeakerAudioSrc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_forestSpeakerAudioSrc, put=__cordl_internal_set_forestSpeakerAudioSrc)) ::UnityW<::UnityEngine::AudioSource>  forestSpeakerAudioSrc;

/// @brief Field fullStateFX, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullStateFX, put=__cordl_internal_set_fullStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  fullStateFX;

/// @brief Field hasForestSpeakerAudioSrc, offset 0xdd, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasForestSpeakerAudioSrc, put=__cordl_internal_set_hasForestSpeakerAudioSrc)) bool  hasForestSpeakerAudioSrc;

/// @brief Field hasVolcanoAudioSrc, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasVolcanoAudioSrc, put=__cordl_internal_set_hasVolcanoAudioSrc)) bool  hasVolcanoAudioSrc;

/// @brief Field lavaSpewAdjustedEmitBursts, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewAdjustedEmitBursts, put=__cordl_internal_set_lavaSpewAdjustedEmitBursts)) ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  lavaSpewAdjustedEmitBursts;

/// @brief Field lavaSpewDefaultEmitBursts, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewDefaultEmitBursts, put=__cordl_internal_set_lavaSpewDefaultEmitBursts)) ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  lavaSpewDefaultEmitBursts;

/// @brief Field lavaSpewEmissionDefaultRateMultipliers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewEmissionDefaultRateMultipliers, put=__cordl_internal_set_lavaSpewEmissionDefaultRateMultipliers)) ::ArrayW<float_t>  lavaSpewEmissionDefaultRateMultipliers;

/// @brief Field lavaSpewEmissionModules, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewEmissionModules, put=__cordl_internal_set_lavaSpewEmissionModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  lavaSpewEmissionModules;

/// @brief Field lavaSpewParticleSystems, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewParticleSystems, put=__cordl_internal_set_lavaSpewParticleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  lavaSpewParticleSystems;

/// @brief Field lavaSurfaceAudioSrcs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSurfaceAudioSrcs, put=__cordl_internal_set_lavaSurfaceAudioSrcs)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  lavaSurfaceAudioSrcs;

/// @brief Field prewarmCoroutine, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_prewarmCoroutine, put=__cordl_internal_set_prewarmCoroutine)) ::UnityEngine::Coroutine*  prewarmCoroutine;

/// @brief Field risingStateFX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_risingStateFX, put=__cordl_internal_set_risingStateFX)) ::GlobalNamespace::VolcanoEffects_LavaStateFX*  risingStateFX;

/// @brief Field shaderProp_ZoneLiquidLightColor, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_shaderProp_ZoneLiquidLightColor, put=__cordl_internal_set_shaderProp_ZoneLiquidLightColor)) int32_t  shaderProp_ZoneLiquidLightColor;

/// @brief Field shaderProp_ZoneLiquidLightDistScale, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_shaderProp_ZoneLiquidLightDistScale, put=__cordl_internal_set_shaderProp_ZoneLiquidLightDistScale)) int32_t  shaderProp_ZoneLiquidLightDistScale;

/// @brief Field smokeEmissionDefaultRateMultipliers, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeEmissionDefaultRateMultipliers, put=__cordl_internal_set_smokeEmissionDefaultRateMultipliers)) ::ArrayW<float_t>  smokeEmissionDefaultRateMultipliers;

/// @brief Field smokeEmissionModules, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeEmissionModules, put=__cordl_internal_set_smokeEmissionModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  smokeEmissionModules;

/// @brief Field smokeMainModules, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeMainModules, put=__cordl_internal_set_smokeMainModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  smokeMainModules;

/// @brief Field smokeParticleSystems, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeParticleSystems, put=__cordl_internal_set_smokeParticleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  smokeParticleSystems;

/// @brief Field timeVolcanoBellyWasLastEmpty, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeVolcanoBellyWasLastEmpty, put=__cordl_internal_set_timeVolcanoBellyWasLastEmpty)) float_t  timeVolcanoBellyWasLastEmpty;

/// @brief Field volcanoAcceptLastStone, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_volcanoAcceptLastStone, put=__cordl_internal_set_volcanoAcceptLastStone)) ::UnityW<::UnityEngine::AudioClip>  volcanoAcceptLastStone;

/// @brief Field volcanoAcceptStone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_volcanoAcceptStone, put=__cordl_internal_set_volcanoAcceptStone)) ::UnityW<::UnityEngine::AudioClip>  volcanoAcceptStone;

/// @brief Field volcanoAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_volcanoAudioSource, put=__cordl_internal_set_volcanoAudioSource)) ::UnityW<::UnityEngine::AudioSource>  volcanoAudioSource;

/// @brief Field warnVolcanoBellyEmptied, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_warnVolcanoBellyEmptied, put=__cordl_internal_set_warnVolcanoBellyEmptied)) ::UnityW<::UnityEngine::AudioClip>  warnVolcanoBellyEmptied;

/// @brief Method Awake, addr 0x5983b60, size 0x71c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitState, addr 0x5984440, size 0x130, virtual false, abstract: false, final false
inline void InitState(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx) ;

/// @brief Method LogNullsFoundInArray, addr 0x598427c, size 0x1c4, virtual false, abstract: false, final false
inline void LogNullsFoundInArray(::StringW  nameOfArray) ;

static inline ::GlobalNamespace::VolcanoEffects* New_ctor() ;

/// @brief Method OnDisable, addr 0x59848f8, size 0x44, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnStoneAccepted, addr 0x5982a90, size 0x80, virtual false, abstract: false, final false
inline void OnStoneAccepted(float_t  activationProgress) ;

/// @brief Method OnVolcanoBellyEmpty, addr 0x5982438, size 0x90, virtual false, abstract: false, final false
inline void OnVolcanoBellyEmpty() ;

/// @brief Method PreloadAssets, addr 0x597ff50, size 0x10c, virtual false, abstract: false, final false
inline void PreloadAssets() ;

/// @brief Method PreloadClip, addr 0x5984570, size 0x94, virtual false, abstract: false, final false
static inline void PreloadClip(::UnityEngine::AudioClip*  clip) ;

/// @brief Method PreloadStateFXClips, addr 0x5984604, size 0x150, virtual false, abstract: false, final false
static inline void PreloadStateFXClips(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx) ;

/// @brief Method RemoveNullsFromArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool RemoveNullsFromArray(::by_ref<::ArrayW<T>>  array) ;

/// @brief Method ResetState, addr 0x5984a54, size 0xe0, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetDrainedState, addr 0x598095c, size 0x2c, virtual false, abstract: false, final false
inline void SetDrainedState() ;

/// @brief Method SetDrainingState, addr 0x5982378, size 0x30, virtual false, abstract: false, final false
inline void SetDrainingState() ;

/// @brief Method SetEruptingState, addr 0x59823a8, size 0x30, virtual false, abstract: false, final false
inline void SetEruptingState() ;

/// @brief Method SetFullState, addr 0x5982408, size 0x30, virtual false, abstract: false, final false
inline void SetFullState() ;

/// @brief Method SetLavaAudioEnabled, addr 0x598493c, size 0x7c, virtual false, abstract: false, final false
inline void SetLavaAudioEnabled(bool  toEnable) ;

/// @brief Method SetLavaAudioEnabled, addr 0x59849b8, size 0x9c, virtual false, abstract: false, final false
inline void SetLavaAudioEnabled(bool  toEnable, float_t  volume) ;

/// @brief Method SetParticleEmissionRateAndBurst, addr 0x5984f6c, size 0x1c4, virtual false, abstract: false, final false
inline void SetParticleEmissionRateAndBurst(float_t  multiplier, ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  emissionModules, ::ArrayW<float_t>  defaultRateMultipliers, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  defaultEmitBursts, ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  adjustedEmitBursts) ;

/// @brief Method SetRisingState, addr 0x59823d8, size 0x30, virtual false, abstract: false, final false
inline void SetRisingState() ;

/// @brief Method UpdateDrainedState, addr 0x59824c8, size 0x14, virtual false, abstract: false, final false
inline void UpdateDrainedState(float_t  time) ;

/// @brief Method UpdateDrainingState, addr 0x5982580, size 0x90, virtual false, abstract: false, final false
inline void UpdateDrainingState(float_t  time, float_t  timeRemaining, float_t  progress) ;

/// @brief Method UpdateEruptingState, addr 0x59824dc, size 0x4, virtual false, abstract: false, final false
inline void UpdateEruptingState(float_t  time, float_t  timeRemaining, float_t  progress) ;

/// @brief Method UpdateFullState, addr 0x598257c, size 0x4, virtual false, abstract: false, final false
inline void UpdateFullState(float_t  time, float_t  timeRemaining, float_t  progress) ;

/// @brief Method UpdateRisingState, addr 0x59824e0, size 0x9c, virtual false, abstract: false, final false
inline void UpdateRisingState(float_t  time, float_t  timeRemaining, float_t  progress) ;

/// @brief Method UpdateState, addr 0x5984b34, size 0x438, virtual false, abstract: false, final false
inline void UpdateState(float_t  time, float_t  timeRemaining, float_t  progress) ;

/// @brief Method WarmUpAudioSourceGO, addr 0x5984754, size 0xb4, virtual false, abstract: false, final false
static inline void WarmUpAudioSourceGO(::UnityEngine::AudioSource*  src) ;

/// @brief Method WarmUpStateFXSources, addr 0x5984808, size 0x5c, virtual false, abstract: false, final false
static inline void WarmUpStateFXSources(::GlobalNamespace::VolcanoEffects_LavaStateFX*  fx) ;

/// [IteratorStateMachine(typeof(VolcanoEffects::<_PrewarmLavaSpewRenderers>d__35))]
/// @brief Method _PrewarmLavaSpewRenderers, addr 0x5984864, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _PrewarmLavaSpewRenderers() ;

constexpr bool const& __cordl_internal_get_applyShaderGlobals() const;

constexpr bool& __cordl_internal_get_applyShaderGlobals() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_currentStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_currentStateFX() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_drainedStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_drainedStateFX() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_drainingStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_drainingStateFX() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_eruptingStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_eruptingStateFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_forestSpeakerAudioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_forestSpeakerAudioSrc() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_fullStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_fullStateFX() ;

constexpr bool const& __cordl_internal_get_hasForestSpeakerAudioSrc() const;

constexpr bool& __cordl_internal_get_hasForestSpeakerAudioSrc() ;

constexpr bool const& __cordl_internal_get_hasVolcanoAudioSrc() const;

constexpr bool& __cordl_internal_get_hasVolcanoAudioSrc() ;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& __cordl_internal_get_lavaSpewAdjustedEmitBursts() const;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& __cordl_internal_get_lavaSpewAdjustedEmitBursts() ;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& __cordl_internal_get_lavaSpewDefaultEmitBursts() const;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& __cordl_internal_get_lavaSpewDefaultEmitBursts() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_lavaSpewEmissionDefaultRateMultipliers() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_lavaSpewEmissionDefaultRateMultipliers() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& __cordl_internal_get_lavaSpewEmissionModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& __cordl_internal_get_lavaSpewEmissionModules() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_lavaSpewParticleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_lavaSpewParticleSystems() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_lavaSurfaceAudioSrcs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_lavaSurfaceAudioSrcs() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_prewarmCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_prewarmCoroutine() ;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX* const& __cordl_internal_get_risingStateFX() const;

constexpr ::GlobalNamespace::VolcanoEffects_LavaStateFX*& __cordl_internal_get_risingStateFX() ;

constexpr int32_t const& __cordl_internal_get_shaderProp_ZoneLiquidLightColor() const;

constexpr int32_t& __cordl_internal_get_shaderProp_ZoneLiquidLightColor() ;

constexpr int32_t const& __cordl_internal_get_shaderProp_ZoneLiquidLightDistScale() const;

constexpr int32_t& __cordl_internal_get_shaderProp_ZoneLiquidLightDistScale() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_smokeEmissionDefaultRateMultipliers() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_smokeEmissionDefaultRateMultipliers() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& __cordl_internal_get_smokeEmissionModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& __cordl_internal_get_smokeEmissionModules() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& __cordl_internal_get_smokeMainModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& __cordl_internal_get_smokeMainModules() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_smokeParticleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_smokeParticleSystems() ;

constexpr float_t const& __cordl_internal_get_timeVolcanoBellyWasLastEmpty() const;

constexpr float_t& __cordl_internal_get_timeVolcanoBellyWasLastEmpty() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_volcanoAcceptLastStone() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_volcanoAcceptLastStone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_volcanoAcceptStone() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_volcanoAcceptStone() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_volcanoAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_volcanoAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_warnVolcanoBellyEmptied() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_warnVolcanoBellyEmptied() ;

constexpr void __cordl_internal_set_applyShaderGlobals(bool  value) ;

constexpr void __cordl_internal_set_currentStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_drainedStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_drainingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_eruptingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_forestSpeakerAudioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_fullStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_hasForestSpeakerAudioSrc(bool  value) ;

constexpr void __cordl_internal_set_hasVolcanoAudioSrc(bool  value) ;

constexpr void __cordl_internal_set_lavaSpewAdjustedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value) ;

constexpr void __cordl_internal_set_lavaSpewDefaultEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value) ;

constexpr void __cordl_internal_set_lavaSpewEmissionDefaultRateMultipliers(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_lavaSpewEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value) ;

constexpr void __cordl_internal_set_lavaSpewParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_lavaSurfaceAudioSrcs(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_prewarmCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_risingStateFX(::GlobalNamespace::VolcanoEffects_LavaStateFX*  value) ;

constexpr void __cordl_internal_set_shaderProp_ZoneLiquidLightColor(int32_t  value) ;

constexpr void __cordl_internal_set_shaderProp_ZoneLiquidLightDistScale(int32_t  value) ;

constexpr void __cordl_internal_set_smokeEmissionDefaultRateMultipliers(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_smokeEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value) ;

constexpr void __cordl_internal_set_smokeMainModules(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value) ;

constexpr void __cordl_internal_set_smokeParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_timeVolcanoBellyWasLastEmpty(float_t  value) ;

constexpr void __cordl_internal_set_volcanoAcceptLastStone(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_volcanoAcceptStone(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_volcanoAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_warnVolcanoBellyEmptied(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5985130, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolcanoEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolcanoEffects(VolcanoEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolcanoEffects(VolcanoEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2540};

/// [Tooltip("Only one VolcanoEffects should change shader globals in the scene (lava color, lava light) at a time.")]
/// [SerializeField]
/// @brief Field applyShaderGlobals, offset: 0x20, size: 0x1, def value: None
 bool  ___applyShaderGlobals;

/// [Tooltip("Game trigger notification sounds will play through this.")]
/// [SerializeField]
/// @brief Field forestSpeakerAudioSrc, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___forestSpeakerAudioSrc;

/// [Tooltip("The accumulator value of rocks being thrown into the volcano has been reset.")]
/// [SerializeField]
/// @brief Field warnVolcanoBellyEmptied, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___warnVolcanoBellyEmptied;

/// [Tooltip("Accept stone sounds will play through here.")]
/// [SerializeField]
/// @brief Field volcanoAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___volcanoAudioSource;

/// [Tooltip("volcano ate rock but needs more.")]
/// [SerializeField]
/// @brief Field volcanoAcceptStone, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___volcanoAcceptStone;

/// [Tooltip("volcano ate last needed rock.")]
/// [SerializeField]
/// @brief Field volcanoAcceptLastStone, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___volcanoAcceptLastStone;

/// [Tooltip("This will be faded in while lava is rising.")]
/// [SerializeField]
/// @brief Field lavaSurfaceAudioSrcs, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___lavaSurfaceAudioSrcs;

/// [Tooltip("Emission will be adjusted for these particles during eruption.")]
/// [SerializeField]
/// @brief Field lavaSpewParticleSystems, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___lavaSpewParticleSystems;

/// [Tooltip("Smoke emits during all states but it\'s intensity and color will change when erupting/idling.")]
/// [SerializeField]
/// @brief Field smokeParticleSystems, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___smokeParticleSystems;

/// [SerializeField]
/// @brief Field drainedStateFX, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___drainedStateFX;

/// [SerializeField]
/// @brief Field eruptingStateFX, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___eruptingStateFX;

/// [SerializeField]
/// @brief Field risingStateFX, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___risingStateFX;

/// [SerializeField]
/// @brief Field fullStateFX, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___fullStateFX;

/// [SerializeField]
/// @brief Field drainingStateFX, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___drainingStateFX;

/// @brief Field currentStateFX, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::VolcanoEffects_LavaStateFX*  ___currentStateFX;

/// @brief Field lavaSpewEmissionModules, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  ___lavaSpewEmissionModules;

/// @brief Field lavaSpewEmissionDefaultRateMultipliers, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___lavaSpewEmissionDefaultRateMultipliers;

/// @brief Field lavaSpewDefaultEmitBursts, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  ___lavaSpewDefaultEmitBursts;

/// @brief Field lavaSpewAdjustedEmitBursts, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  ___lavaSpewAdjustedEmitBursts;

/// @brief Field smokeMainModules, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  ___smokeMainModules;

/// @brief Field smokeEmissionModules, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  ___smokeEmissionModules;

/// @brief Field smokeEmissionDefaultRateMultipliers, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___smokeEmissionDefaultRateMultipliers;

/// @brief Field shaderProp_ZoneLiquidLightColor, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___shaderProp_ZoneLiquidLightColor;

/// @brief Field shaderProp_ZoneLiquidLightDistScale, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___shaderProp_ZoneLiquidLightDistScale;

/// @brief Field timeVolcanoBellyWasLastEmpty, offset: 0xd8, size: 0x4, def value: None
 float_t  ___timeVolcanoBellyWasLastEmpty;

/// @brief Field hasVolcanoAudioSrc, offset: 0xdc, size: 0x1, def value: None
 bool  ___hasVolcanoAudioSrc;

/// @brief Field hasForestSpeakerAudioSrc, offset: 0xdd, size: 0x1, def value: None
 bool  ___hasForestSpeakerAudioSrc;

/// @brief Field prewarmCoroutine, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___prewarmCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___applyShaderGlobals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___forestSpeakerAudioSrc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___warnVolcanoBellyEmptied) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___volcanoAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___volcanoAcceptStone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___volcanoAcceptLastStone) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSurfaceAudioSrcs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSpewParticleSystems) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___smokeParticleSystems) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___drainedStateFX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___eruptingStateFX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___risingStateFX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___fullStateFX) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___drainingStateFX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___currentStateFX) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSpewEmissionModules) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSpewEmissionDefaultRateMultipliers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSpewDefaultEmitBursts) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___lavaSpewAdjustedEmitBursts) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___smokeMainModules) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___smokeEmissionModules) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___smokeEmissionDefaultRateMultipliers) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___shaderProp_ZoneLiquidLightColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___shaderProp_ZoneLiquidLightDistScale) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___timeVolcanoBellyWasLastEmpty) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___hasVolcanoAudioSrc) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___hasForestSpeakerAudioSrc) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects, ___prewarmCoroutine) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolcanoEffects) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VolcanoEffects/<_PrewarmLavaSpewRenderers>d__35
class CORDL_TYPE VolcanoEffects___PrewarmLavaSpewRenderers_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VolcanoEffects>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598523c, size 0x114, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5985350, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5985358, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5985390, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5985238, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::VolcanoEffects> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::VolcanoEffects>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VolcanoEffects>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59848d0, size 0x28, virtual false, abstract: false, final false
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
constexpr VolcanoEffects___PrewarmLavaSpewRenderers_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects___PrewarmLavaSpewRenderers_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolcanoEffects___PrewarmLavaSpewRenderers_d__35(VolcanoEffects___PrewarmLavaSpewRenderers_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects___PrewarmLavaSpewRenderers_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolcanoEffects___PrewarmLavaSpewRenderers_d__35(VolcanoEffects___PrewarmLavaSpewRenderers_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2539};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VolcanoEffects>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolcanoEffects___PrewarmLavaSpewRenderers_d__35) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VolcanoEffects/LavaStateFX
class CORDL_TYPE VolcanoEffects_LavaStateFX : public ::System::Object {
public:
// Declarations
/// @brief Field endSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endSound, put=__cordl_internal_set_endSound)) ::UnityW<::UnityEngine::AudioClip>  endSound;

/// @brief Field endSoundAudioSrc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endSoundAudioSrc, put=__cordl_internal_set_endSoundAudioSrc)) ::UnityW<::UnityEngine::AudioSource>  endSoundAudioSrc;

/// @brief Field endSoundExists, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_endSoundExists, put=__cordl_internal_set_endSoundExists)) bool  endSoundExists;

/// @brief Field endSoundPadTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endSoundPadTime, put=__cordl_internal_set_endSoundPadTime)) float_t  endSoundPadTime;

/// @brief Field endSoundPlayed, offset 0x93, size 0x1 
 __declspec(property(get=__cordl_internal_get_endSoundPlayed, put=__cordl_internal_set_endSoundPlayed)) bool  endSoundPlayed;

/// @brief Field endSoundVol, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_endSoundVol, put=__cordl_internal_set_endSoundVol)) float_t  endSoundVol;

/// @brief Field lavaLightAttenuationAnim, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaLightAttenuationAnim, put=__cordl_internal_set_lavaLightAttenuationAnim)) ::UnityEngine::AnimationCurve*  lavaLightAttenuationAnim;

/// @brief Field lavaLightColor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaLightColor, put=__cordl_internal_set_lavaLightColor)) ::UnityEngine::Gradient*  lavaLightColor;

/// @brief Field lavaLightIntensityAnim, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaLightIntensityAnim, put=__cordl_internal_set_lavaLightIntensityAnim)) ::UnityEngine::AnimationCurve*  lavaLightIntensityAnim;

/// @brief Field lavaSpewEmissionAnim, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSpewEmissionAnim, put=__cordl_internal_set_lavaSpewEmissionAnim)) ::UnityEngine::AnimationCurve*  lavaSpewEmissionAnim;

/// @brief Field loop1AudioSrc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop1AudioSrc, put=__cordl_internal_set_loop1AudioSrc)) ::UnityW<::UnityEngine::AudioSource>  loop1AudioSrc;

/// @brief Field loop1DefaultVolume, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_loop1DefaultVolume, put=__cordl_internal_set_loop1DefaultVolume)) float_t  loop1DefaultVolume;

/// @brief Field loop1Exists, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop1Exists, put=__cordl_internal_set_loop1Exists)) bool  loop1Exists;

/// @brief Field loop1VolAnim, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop1VolAnim, put=__cordl_internal_set_loop1VolAnim)) ::UnityEngine::AnimationCurve*  loop1VolAnim;

/// @brief Field loop2AudioSrc, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop2AudioSrc, put=__cordl_internal_set_loop2AudioSrc)) ::UnityW<::UnityEngine::AudioSource>  loop2AudioSrc;

/// @brief Field loop2DefaultVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_loop2DefaultVolume, put=__cordl_internal_set_loop2DefaultVolume)) float_t  loop2DefaultVolume;

/// @brief Field loop2Exists, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop2Exists, put=__cordl_internal_set_loop2Exists)) bool  loop2Exists;

/// @brief Field loop2VolAnim, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop2VolAnim, put=__cordl_internal_set_loop2VolAnim)) ::UnityEngine::AnimationCurve*  loop2VolAnim;

/// @brief Field smokeEmissionAnim, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeEmissionAnim, put=__cordl_internal_set_smokeEmissionAnim)) ::UnityEngine::AnimationCurve*  smokeEmissionAnim;

/// @brief Field smokeStartColorAnim, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_smokeStartColorAnim, put=__cordl_internal_set_smokeStartColorAnim)) ::UnityEngine::Gradient*  smokeStartColorAnim;

/// @brief Field startSound, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_startSound, put=__cordl_internal_set_startSound)) ::UnityW<::UnityEngine::AudioClip>  startSound;

/// @brief Field startSoundAudioSrc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startSoundAudioSrc, put=__cordl_internal_set_startSoundAudioSrc)) ::UnityW<::UnityEngine::AudioSource>  startSoundAudioSrc;

/// @brief Field startSoundDelay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSoundDelay, put=__cordl_internal_set_startSoundDelay)) float_t  startSoundDelay;

/// @brief Field startSoundExists, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_startSoundExists, put=__cordl_internal_set_startSoundExists)) bool  startSoundExists;

/// @brief Field startSoundPlayed, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_startSoundPlayed, put=__cordl_internal_set_startSoundPlayed)) bool  startSoundPlayed;

/// @brief Field startSoundVol, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSoundVol, put=__cordl_internal_set_startSoundVol)) float_t  startSoundVol;

static inline ::GlobalNamespace::VolcanoEffects_LavaStateFX* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_endSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_endSound() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_endSoundAudioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_endSoundAudioSrc() ;

constexpr bool const& __cordl_internal_get_endSoundExists() const;

constexpr bool& __cordl_internal_get_endSoundExists() ;

constexpr float_t const& __cordl_internal_get_endSoundPadTime() const;

constexpr float_t& __cordl_internal_get_endSoundPadTime() ;

constexpr bool const& __cordl_internal_get_endSoundPlayed() const;

constexpr bool& __cordl_internal_get_endSoundPlayed() ;

constexpr float_t const& __cordl_internal_get_endSoundVol() const;

constexpr float_t& __cordl_internal_get_endSoundVol() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaLightAttenuationAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaLightAttenuationAnim() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_lavaLightColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_lavaLightColor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaLightIntensityAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaLightIntensityAnim() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaSpewEmissionAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaSpewEmissionAnim() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loop1AudioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loop1AudioSrc() ;

constexpr float_t const& __cordl_internal_get_loop1DefaultVolume() const;

constexpr float_t& __cordl_internal_get_loop1DefaultVolume() ;

constexpr bool const& __cordl_internal_get_loop1Exists() const;

constexpr bool& __cordl_internal_get_loop1Exists() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_loop1VolAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_loop1VolAnim() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loop2AudioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loop2AudioSrc() ;

constexpr float_t const& __cordl_internal_get_loop2DefaultVolume() const;

constexpr float_t& __cordl_internal_get_loop2DefaultVolume() ;

constexpr bool const& __cordl_internal_get_loop2Exists() const;

constexpr bool& __cordl_internal_get_loop2Exists() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_loop2VolAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_loop2VolAnim() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_smokeEmissionAnim() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_smokeEmissionAnim() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_smokeStartColorAnim() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_smokeStartColorAnim() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_startSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_startSound() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_startSoundAudioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_startSoundAudioSrc() ;

constexpr float_t const& __cordl_internal_get_startSoundDelay() const;

constexpr float_t& __cordl_internal_get_startSoundDelay() ;

constexpr bool const& __cordl_internal_get_startSoundExists() const;

constexpr bool& __cordl_internal_get_startSoundExists() ;

constexpr bool const& __cordl_internal_get_startSoundPlayed() const;

constexpr bool& __cordl_internal_get_startSoundPlayed() ;

constexpr float_t const& __cordl_internal_get_startSoundVol() const;

constexpr float_t& __cordl_internal_get_startSoundVol() ;

constexpr void __cordl_internal_set_endSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_endSoundAudioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_endSoundExists(bool  value) ;

constexpr void __cordl_internal_set_endSoundPadTime(float_t  value) ;

constexpr void __cordl_internal_set_endSoundPlayed(bool  value) ;

constexpr void __cordl_internal_set_endSoundVol(float_t  value) ;

constexpr void __cordl_internal_set_lavaLightAttenuationAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaLightColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_lavaLightIntensityAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaSpewEmissionAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_loop1AudioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loop1DefaultVolume(float_t  value) ;

constexpr void __cordl_internal_set_loop1Exists(bool  value) ;

constexpr void __cordl_internal_set_loop1VolAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_loop2AudioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loop2DefaultVolume(float_t  value) ;

constexpr void __cordl_internal_set_loop2Exists(bool  value) ;

constexpr void __cordl_internal_set_loop2VolAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_smokeEmissionAnim(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_smokeStartColorAnim(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_startSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_startSoundAudioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_startSoundDelay(float_t  value) ;

constexpr void __cordl_internal_set_startSoundExists(bool  value) ;

constexpr void __cordl_internal_set_startSoundPlayed(bool  value) ;

constexpr void __cordl_internal_set_startSoundVol(float_t  value) ;

/// @brief Method .ctor, addr 0x59851c4, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolcanoEffects_LavaStateFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects_LavaStateFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolcanoEffects_LavaStateFX(VolcanoEffects_LavaStateFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolcanoEffects_LavaStateFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolcanoEffects_LavaStateFX(VolcanoEffects_LavaStateFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2538};

/// @brief Field startSound, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___startSound;

/// @brief Field startSoundAudioSrc, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___startSoundAudioSrc;

/// [Tooltip("Multiplied by the AudioSource\'s volume.")]
/// @brief Field startSoundVol, offset: 0x20, size: 0x4, def value: None
 float_t  ___startSoundVol;

/// [FormerlySerializedAs("startSoundPad")]
/// @brief Field startSoundDelay, offset: 0x24, size: 0x4, def value: None
 float_t  ___startSoundDelay;

/// @brief Field endSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___endSound;

/// @brief Field endSoundAudioSrc, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___endSoundAudioSrc;

/// [Tooltip("Multiplied by the AudioSource\'s volume.")]
/// @brief Field endSoundVol, offset: 0x38, size: 0x4, def value: None
 float_t  ___endSoundVol;

/// [Tooltip("How much time should there be between the end of the clip playing and the end of the state.")]
/// @brief Field endSoundPadTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___endSoundPadTime;

/// @brief Field loop1AudioSrc, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loop1AudioSrc;

/// @brief Field loop1VolAnim, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___loop1VolAnim;

/// @brief Field loop2AudioSrc, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loop2AudioSrc;

/// @brief Field loop2VolAnim, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___loop2VolAnim;

/// @brief Field lavaSpewEmissionAnim, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaSpewEmissionAnim;

/// @brief Field smokeEmissionAnim, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___smokeEmissionAnim;

/// @brief Field smokeStartColorAnim, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___smokeStartColorAnim;

/// @brief Field lavaLightColor, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___lavaLightColor;

/// @brief Field lavaLightIntensityAnim, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaLightIntensityAnim;

/// @brief Field lavaLightAttenuationAnim, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaLightAttenuationAnim;

/// @brief Field startSoundExists, offset: 0x90, size: 0x1, def value: None
 bool  ___startSoundExists;

/// @brief Field startSoundPlayed, offset: 0x91, size: 0x1, def value: None
 bool  ___startSoundPlayed;

/// @brief Field endSoundExists, offset: 0x92, size: 0x1, def value: None
 bool  ___endSoundExists;

/// @brief Field endSoundPlayed, offset: 0x93, size: 0x1, def value: None
 bool  ___endSoundPlayed;

/// @brief Field loop1Exists, offset: 0x94, size: 0x1, def value: None
 bool  ___loop1Exists;

/// @brief Field loop1DefaultVolume, offset: 0x98, size: 0x4, def value: None
 float_t  ___loop1DefaultVolume;

/// @brief Field loop2Exists, offset: 0x9c, size: 0x1, def value: None
 bool  ___loop2Exists;

/// @brief Field loop2DefaultVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___loop2DefaultVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSoundAudioSrc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSoundVol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSoundDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSoundAudioSrc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSoundVol) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSoundPadTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop1AudioSrc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop1VolAnim) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop2AudioSrc) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop2VolAnim) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___lavaSpewEmissionAnim) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___smokeEmissionAnim) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___smokeStartColorAnim) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___lavaLightColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___lavaLightIntensityAnim) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___lavaLightAttenuationAnim) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSoundExists) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___startSoundPlayed) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSoundExists) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___endSoundPlayed) == 0x93, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop1Exists) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop1DefaultVolume) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop2Exists) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolcanoEffects_LavaStateFX, ___loop2DefaultVolume) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolcanoEffects_LavaStateFX) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
