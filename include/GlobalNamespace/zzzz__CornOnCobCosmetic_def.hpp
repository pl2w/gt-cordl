#pragma once
// IWYU pragma private; include "GlobalNamespace/CornOnCobCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CornOnCobCosmetic)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class ThermalReceiver;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class CornOnCobCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CornOnCobCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CornOnCobCosmetic*, "", "CornOnCobCosmetic");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: CornOnCobCosmetic
class CORDL_TYPE CornOnCobCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field emissionModule, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_emissionModule, put=__cordl_internal_set_emissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  emissionModule;

/// @brief Field maxBurstProbability, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBurstProbability, put=__cordl_internal_set_maxBurstProbability)) float_t  maxBurstProbability;

/// @brief Field particleEmissionCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleEmissionCurve, put=__cordl_internal_set_particleEmissionCurve)) ::UnityEngine::AnimationCurve*  particleEmissionCurve;

/// @brief Field particleSys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSys, put=__cordl_internal_set_particleSys)) ::UnityW<::UnityEngine::ParticleSystem>  particleSys;

/// @brief Field previousParticleCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousParticleCount, put=__cordl_internal_set_previousParticleCount)) int32_t  previousParticleCount;

/// @brief Field soundBankPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field thermalReceiver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thermalReceiver, put=__cordl_internal_set_thermalReceiver)) ::UnityW<::GlobalNamespace::ThermalReceiver>  thermalReceiver;

/// @brief Method Awake, addr 0x5dfdd00, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5dfddb8, size 0x12c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CornOnCobCosmetic* New_ctor() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_emissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_emissionModule() ;

constexpr float_t const& __cordl_internal_get_maxBurstProbability() const;

constexpr float_t& __cordl_internal_get_maxBurstProbability() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_particleEmissionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_particleEmissionCurve() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSys() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSys() ;

constexpr int32_t const& __cordl_internal_get_previousParticleCount() const;

constexpr int32_t& __cordl_internal_get_previousParticleCount() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& __cordl_internal_get_thermalReceiver() const;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& __cordl_internal_get_thermalReceiver() ;

constexpr void __cordl_internal_set_emissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_maxBurstProbability(float_t  value) ;

constexpr void __cordl_internal_set_particleEmissionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_particleSys(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_previousParticleCount(int32_t  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value) ;

/// @brief Method .ctor, addr 0x5dfdee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CornOnCobCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CornOnCobCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CornOnCobCosmetic(CornOnCobCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CornOnCobCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CornOnCobCosmetic(CornOnCobCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{511};

/// [Tooltip("The corn will start popping based on the temperature from this ThermalReceiver.")]
/// @brief Field thermalReceiver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalReceiver>  ___thermalReceiver;

/// [Tooltip("The particle system that will be emitted when the heat source is hot enough.")]
/// @brief Field particleSys, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSys;

/// [Tooltip("The curve that determines how many particles will be emitted based on the heat source\'s temperature.\n\nThe x-axis is the heat source\'s temperature and the y-axis is the number of particles to emit.")]
/// @brief Field particleEmissionCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___particleEmissionCurve;

/// @brief Field soundBankPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// @brief Field emissionModule, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___emissionModule;

/// @brief Field maxBurstProbability, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxBurstProbability;

/// @brief Field previousParticleCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___previousParticleCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___thermalReceiver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___particleSys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___particleEmissionCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___soundBankPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___emissionModule) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___maxBurstProbability) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CornOnCobCosmetic, ___previousParticleCount) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CornOnCobCosmetic) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
