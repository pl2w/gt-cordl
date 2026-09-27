#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FireInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__GTDirectAssetRef_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FireInstance)
namespace GlobalNamespace {
class ThermalSourceVolume;
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
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Reactions {
class FireInstance;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::FireInstance*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::FireInstance*, "GorillaTag.Reactions", "FireInstance");
// Dependencies GorillaTag.GTDirectAssetRef`1<T>, UnityEngine.Color, UnityEngine.MaterialPropertyBlock, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.Renderer, UnityEngine.Vector3Int
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.FireInstance
class CORDL_TYPE FireInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _deathStateDuration, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__deathStateDuration, put=__cordl_internal_set__deathStateDuration)) float_t  _deathStateDuration;

/// @brief Field _defaultTemperature, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultTemperature, put=__cordl_internal_set__defaultTemperature)) float_t  _defaultTemperature;

/// @brief Field _despawnOnExtinguish, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__despawnOnExtinguish, put=__cordl_internal_set__despawnOnExtinguish)) bool  _despawnOnExtinguish;

/// @brief Field _emiRenderers_defaultColors, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__emiRenderers_defaultColors, put=__cordl_internal_set__emiRenderers_defaultColors)) ::ArrayW<::UnityEngine::Color>  _emiRenderers_defaultColors;

/// @brief Field _emiRenderers_matPropBlocks, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__emiRenderers_matPropBlocks, put=__cordl_internal_set__emiRenderers_matPropBlocks)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  _emiRenderers_matPropBlocks;

/// @brief Field _emissiveRenderers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__emissiveRenderers, put=__cordl_internal_set__emissiveRenderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  _emissiveRenderers;

/// @brief Field _extinguishSound, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__extinguishSound, put=__cordl_internal_set__extinguishSound)) ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  _extinguishSound;

/// @brief Field _extinguishSoundVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__extinguishSoundVolume, put=__cordl_internal_set__extinguishSoundVolume)) float_t  _extinguishSoundVolume;

/// @brief Field _igniteSound, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__igniteSound, put=__cordl_internal_set__igniteSound)) ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  _igniteSound;

/// @brief Field _igniteSoundVolume, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__igniteSoundVolume, put=__cordl_internal_set__igniteSoundVolume)) float_t  _igniteSoundVolume;

/// @brief Field _isDespawning, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDespawning, put=__cordl_internal_set__isDespawning)) bool  _isDespawning;

/// @brief Field _loopingAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopingAudioSource, put=__cordl_internal_set__loopingAudioSource)) ::UnityW<::UnityEngine::AudioSource>  _loopingAudioSource;

/// @brief Field _maxLifetime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxLifetime, put=__cordl_internal_set__maxLifetime)) float_t  _maxLifetime;

/// @brief Field _particleSystem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _psDefaultEmissionRate, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__psDefaultEmissionRate, put=__cordl_internal_set__psDefaultEmissionRate)) float_t  _psDefaultEmissionRate;

/// @brief Field _psEmissionModule, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__psEmissionModule, put=__cordl_internal_set__psEmissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  _psEmissionModule;

/// @brief Field _reheatSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reheatSpeed, put=__cordl_internal_set__reheatSpeed)) float_t  _reheatSpeed;

/// @brief Field _spatialGridPosition, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get__spatialGridPosition, put=__cordl_internal_set__spatialGridPosition)) ::UnityEngine::Vector3Int  _spatialGridPosition;

/// @brief Field _stayExtinguishedDuration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__stayExtinguishedDuration, put=__cordl_internal_set__stayExtinguishedDuration)) float_t  _stayExtinguishedDuration;

/// @brief Field _thermalVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__thermalVolume, put=__cordl_internal_set__thermalVolume)) ::UnityW<::GlobalNamespace::ThermalSourceVolume>  _thermalVolume;

/// @brief Field _timeAlive, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeAlive, put=__cordl_internal_set__timeAlive)) float_t  _timeAlive;

/// @brief Field _timeSinceDyingStart, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeSinceDyingStart, put=__cordl_internal_set__timeSinceDyingStart)) float_t  _timeSinceDyingStart;

/// @brief Field _timeSinceExtinguished, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeSinceExtinguished, put=__cordl_internal_set__timeSinceExtinguished)) float_t  _timeSinceExtinguished;

/// @brief Method Awake, addr 0x5d3d740, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Reactions::FireInstance* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d3d798, size 0x58, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d3d848, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d3d7f0, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5d3d8a0, size 0x68, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr float_t const& __cordl_internal_get__deathStateDuration() const;

constexpr float_t& __cordl_internal_get__deathStateDuration() ;

constexpr float_t const& __cordl_internal_get__defaultTemperature() const;

constexpr float_t& __cordl_internal_get__defaultTemperature() ;

constexpr bool const& __cordl_internal_get__despawnOnExtinguish() const;

constexpr bool& __cordl_internal_get__despawnOnExtinguish() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__emiRenderers_defaultColors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__emiRenderers_defaultColors() ;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__emiRenderers_matPropBlocks() const;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& __cordl_internal_get__emiRenderers_matPropBlocks() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get__emissiveRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get__emissiveRenderers() ;

constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__extinguishSound() const;

constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__extinguishSound() ;

constexpr float_t const& __cordl_internal_get__extinguishSoundVolume() const;

constexpr float_t& __cordl_internal_get__extinguishSoundVolume() ;

constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__igniteSound() const;

constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__igniteSound() ;

constexpr float_t const& __cordl_internal_get__igniteSoundVolume() const;

constexpr float_t& __cordl_internal_get__igniteSoundVolume() ;

constexpr bool const& __cordl_internal_get__isDespawning() const;

constexpr bool& __cordl_internal_get__isDespawning() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__loopingAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__loopingAudioSource() ;

constexpr float_t const& __cordl_internal_get__maxLifetime() const;

constexpr float_t& __cordl_internal_get__maxLifetime() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr float_t const& __cordl_internal_get__psDefaultEmissionRate() const;

constexpr float_t& __cordl_internal_get__psDefaultEmissionRate() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get__psEmissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get__psEmissionModule() ;

constexpr float_t const& __cordl_internal_get__reheatSpeed() const;

constexpr float_t& __cordl_internal_get__reheatSpeed() ;

constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__spatialGridPosition() const;

constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__spatialGridPosition() ;

constexpr float_t const& __cordl_internal_get__stayExtinguishedDuration() const;

constexpr float_t& __cordl_internal_get__stayExtinguishedDuration() ;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume> const& __cordl_internal_get__thermalVolume() const;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume>& __cordl_internal_get__thermalVolume() ;

constexpr float_t const& __cordl_internal_get__timeAlive() const;

constexpr float_t& __cordl_internal_get__timeAlive() ;

constexpr float_t const& __cordl_internal_get__timeSinceDyingStart() const;

constexpr float_t& __cordl_internal_get__timeSinceDyingStart() ;

constexpr float_t const& __cordl_internal_get__timeSinceExtinguished() const;

constexpr float_t& __cordl_internal_get__timeSinceExtinguished() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__deathStateDuration(float_t  value) ;

constexpr void __cordl_internal_set__defaultTemperature(float_t  value) ;

constexpr void __cordl_internal_set__despawnOnExtinguish(bool  value) ;

constexpr void __cordl_internal_set__emiRenderers_defaultColors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__emiRenderers_matPropBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value) ;

constexpr void __cordl_internal_set__emissiveRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set__extinguishSound(::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__extinguishSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__igniteSound(::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__igniteSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__isDespawning(bool  value) ;

constexpr void __cordl_internal_set__loopingAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__maxLifetime(float_t  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__psDefaultEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set__psEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set__reheatSpeed(float_t  value) ;

constexpr void __cordl_internal_set__spatialGridPosition(::UnityEngine::Vector3Int  value) ;

constexpr void __cordl_internal_set__stayExtinguishedDuration(float_t  value) ;

constexpr void __cordl_internal_set__thermalVolume(::UnityW<::GlobalNamespace::ThermalSourceVolume>  value) ;

constexpr void __cordl_internal_set__timeAlive(float_t  value) ;

constexpr void __cordl_internal_set__timeSinceDyingStart(float_t  value) ;

constexpr void __cordl_internal_set__timeSinceExtinguished(float_t  value) ;

/// @brief Method .ctor, addr 0x5d3d908, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FireInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FireInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FireInstance(FireInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FireInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FireInstance(FireInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4699};

/// [Header("Scene References")]
/// [Tooltip("If not assigned it will try to auto assign to a component on the same GameObject.")]
/// [SerializeField]
/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// [Tooltip("If not assigned it will try to auto assign to a component on the same GameObject.")]
/// [FormerlySerializedAs("_thermalSourceVolume")]
/// [SerializeField]
/// @brief Field _thermalVolume, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalSourceVolume>  ____thermalVolume;

/// [SerializeField]
/// @brief Field _particleSystem, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// [FormerlySerializedAs("_audioSource")]
/// [SerializeField]
/// @brief Field _loopingAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____loopingAudioSource;

/// [Tooltip("The emissive color will be darkened on the materials of these renderers as the fire is extinguished.")]
/// [SerializeField]
/// @brief Field _emissiveRenderers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ____emissiveRenderers;

/// [Header("Asset References")]
/// [SerializeField]
/// @brief Field _extinguishSound, offset: 0x48, size: 0x10, def value: None
 ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  ____extinguishSound;

/// [SerializeField]
/// @brief Field _extinguishSoundVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ____extinguishSoundVolume;

/// [SerializeField]
/// @brief Field _igniteSound, offset: 0x60, size: 0x10, def value: None
 ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  ____igniteSound;

/// [SerializeField]
/// @brief Field _igniteSoundVolume, offset: 0x70, size: 0x4, def value: None
 float_t  ____igniteSoundVolume;

/// [Header("Values")]
/// [SerializeField]
/// @brief Field _despawnOnExtinguish, offset: 0x74, size: 0x1, def value: None
 bool  ____despawnOnExtinguish;

/// [SerializeField]
/// @brief Field _maxLifetime, offset: 0x78, size: 0x4, def value: None
 float_t  ____maxLifetime;

/// [Tooltip("How long it should take to reheat to it\'s default temperature.")]
/// [SerializeField]
/// @brief Field _reheatSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ____reheatSpeed;

/// [Tooltip("If you completely extinguish the object, how long should it stay extinguished?")]
/// [SerializeField]
/// @brief Field _stayExtinguishedDuration, offset: 0x80, size: 0x4, def value: None
 float_t  ____stayExtinguishedDuration;

/// @brief Field _defaultTemperature, offset: 0x84, size: 0x4, def value: None
 float_t  ____defaultTemperature;

/// @brief Field _timeSinceExtinguished, offset: 0x88, size: 0x4, def value: None
 float_t  ____timeSinceExtinguished;

/// @brief Field _timeSinceDyingStart, offset: 0x8c, size: 0x4, def value: None
 float_t  ____timeSinceDyingStart;

/// @brief Field _timeAlive, offset: 0x90, size: 0x4, def value: None
 float_t  ____timeAlive;

/// @brief Field _psDefaultEmissionRate, offset: 0x94, size: 0x4, def value: None
 float_t  ____psDefaultEmissionRate;

/// @brief Field _psEmissionModule, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ____psEmissionModule;

/// @brief Field _spatialGridPosition, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  ____spatialGridPosition;

/// @brief Field _isDespawning, offset: 0xac, size: 0x1, def value: None
 bool  ____isDespawning;

/// @brief Field _deathStateDuration, offset: 0xb0, size: 0x4, def value: None
 float_t  ____deathStateDuration;

/// @brief Field _emiRenderers_matPropBlocks, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  ____emiRenderers_matPropBlocks;

/// @brief Field _emiRenderers_defaultColors, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____emiRenderers_defaultColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____thermalVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____particleSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____loopingAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____emissiveRenderers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____extinguishSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____extinguishSoundVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____igniteSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____igniteSoundVolume) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____despawnOnExtinguish) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____maxLifetime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____reheatSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____stayExtinguishedDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____defaultTemperature) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____timeSinceExtinguished) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____timeSinceDyingStart) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____timeAlive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____psDefaultEmissionRate) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____psEmissionModule) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____spatialGridPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____isDespawning) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____deathStateDuration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____emiRenderers_matPropBlocks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FireInstance, ____emiRenderers_defaultColors) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::FireInstance) == 0xc8, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
