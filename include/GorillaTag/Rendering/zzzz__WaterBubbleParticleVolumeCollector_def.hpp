#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/WaterBubbleParticleVolumeCollector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TriggerModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(WaterBubbleParticleVolumeCollector)
// Forward declare root types
namespace GorillaTag::Rendering {
class WaterBubbleParticleVolumeCollector;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*, "GorillaTag.Rendering", "WaterBubbleParticleVolumeCollector");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::TriggerModule
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.WaterBubbleParticleVolumeCollector
class CORDL_TYPE WaterBubbleParticleVolumeCollector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bubbleableVolumeColliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleableVolumeColliders, put=__cordl_internal_set_bubbleableVolumeColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  bubbleableVolumeColliders;

/// @brief Field emissionEnabled, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_emissionEnabled, put=__cordl_internal_set_emissionEnabled)) bool  emissionEnabled;

/// @brief Field particleEmissionModules, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleEmissionModules, put=__cordl_internal_set_particleEmissionModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  particleEmissionModules;

/// @brief Field particleSystems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystems, put=__cordl_internal_set_particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particleSystems;

/// @brief Field particleTriggerModules, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleTriggerModules, put=__cordl_internal_set_particleTriggerModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>  particleTriggerModules;

/// @brief Method Awake, addr 0x5d546ac, size 0x654, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d54d94, size 0xc0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector* New_ctor() ;

/// @brief Method SetEmissionState, addr 0x5d54d00, size 0x94, virtual false, abstract: false, final false
inline void SetEmissionState(bool  setEnabled) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_bubbleableVolumeColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_bubbleableVolumeColliders() ;

constexpr bool const& __cordl_internal_get_emissionEnabled() const;

constexpr bool& __cordl_internal_get_emissionEnabled() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& __cordl_internal_get_particleEmissionModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& __cordl_internal_get_particleEmissionModules() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particleSystems() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule> const& __cordl_internal_get_particleTriggerModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>& __cordl_internal_get_particleTriggerModules() ;

constexpr void __cordl_internal_set_bubbleableVolumeColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_emissionEnabled(bool  value) ;

constexpr void __cordl_internal_set_particleEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value) ;

constexpr void __cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_particleTriggerModules(::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>  value) ;

/// @brief Method .ctor, addr 0x5d54e54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterBubbleParticleVolumeCollector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterBubbleParticleVolumeCollector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterBubbleParticleVolumeCollector(WaterBubbleParticleVolumeCollector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterBubbleParticleVolumeCollector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterBubbleParticleVolumeCollector(WaterBubbleParticleVolumeCollector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4798};

/// @brief Field particleSystems, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particleSystems;

/// @brief Field particleTriggerModules, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>  ___particleTriggerModules;

/// @brief Field particleEmissionModules, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  ___particleEmissionModules;

/// @brief Field bubbleableVolumeColliders, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___bubbleableVolumeColliders;

/// @brief Field emissionEnabled, offset: 0x40, size: 0x1, def value: None
 bool  ___emissionEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector, ___particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector, ___particleTriggerModules) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector, ___particleEmissionModules) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector, ___bubbleableVolumeColliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector, ___emissionEnabled) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
