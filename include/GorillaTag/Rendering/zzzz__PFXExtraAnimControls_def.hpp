#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/PFXExtraAnimControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PFXExtraAnimControls)
// Forward declare root types
namespace GorillaTag::Rendering {
class PFXExtraAnimControls;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::PFXExtraAnimControls*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::PFXExtraAnimControls*, "GorillaTag.Rendering", "PFXExtraAnimControls");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::Burst, UnityEngine.ParticleSystem::EmissionModule
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.PFXExtraAnimControls
class CORDL_TYPE PFXExtraAnimControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field adjustedEmitBursts, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_adjustedEmitBursts, put=__cordl_internal_set_adjustedEmitBursts)) ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  adjustedEmitBursts;

/// @brief Field cachedEmitBursts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedEmitBursts, put=__cordl_internal_set_cachedEmitBursts)) ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  cachedEmitBursts;

/// @brief Field emissionModules, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_emissionModules, put=__cordl_internal_set_emissionModules)) ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  emissionModules;

/// @brief Field emitBurstProbabilityMult, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_emitBurstProbabilityMult, put=__cordl_internal_set_emitBurstProbabilityMult)) float_t  emitBurstProbabilityMult;

/// @brief Field emitRateMult, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_emitRateMult, put=__cordl_internal_set_emitRateMult)) float_t  emitRateMult;

/// @brief Field particleSystems, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystems, put=__cordl_internal_set_particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particleSystems;

/// @brief Method Awake, addr 0x5d59f9c, size 0x2f8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d5a294, size 0x18c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Rendering::PFXExtraAnimControls* New_ctor() ;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& __cordl_internal_get_adjustedEmitBursts() const;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& __cordl_internal_get_adjustedEmitBursts() ;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>> const& __cordl_internal_get_cachedEmitBursts() const;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>& __cordl_internal_get_cachedEmitBursts() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& __cordl_internal_get_emissionModules() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& __cordl_internal_get_emissionModules() ;

constexpr float_t const& __cordl_internal_get_emitBurstProbabilityMult() const;

constexpr float_t& __cordl_internal_get_emitBurstProbabilityMult() ;

constexpr float_t const& __cordl_internal_get_emitRateMult() const;

constexpr float_t& __cordl_internal_get_emitRateMult() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particleSystems() ;

constexpr void __cordl_internal_set_adjustedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value) ;

constexpr void __cordl_internal_set_cachedEmitBursts(::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  value) ;

constexpr void __cordl_internal_set_emissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value) ;

constexpr void __cordl_internal_set_emitBurstProbabilityMult(float_t  value) ;

constexpr void __cordl_internal_set_emitRateMult(float_t  value) ;

constexpr void __cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

/// @brief Method .ctor, addr 0x5d5a420, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PFXExtraAnimControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PFXExtraAnimControls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PFXExtraAnimControls(PFXExtraAnimControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PFXExtraAnimControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PFXExtraAnimControls(PFXExtraAnimControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4810};

/// @brief Field emitRateMult, offset: 0x20, size: 0x4, def value: None
 float_t  ___emitRateMult;

/// @brief Field emitBurstProbabilityMult, offset: 0x24, size: 0x4, def value: None
 float_t  ___emitBurstProbabilityMult;

/// [SerializeField]
/// @brief Field particleSystems, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particleSystems;

/// @brief Field emissionModules, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  ___emissionModules;

/// @brief Field cachedEmitBursts, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  ___cachedEmitBursts;

/// @brief Field adjustedEmitBursts, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::GlobalNamespace::ParticleSystem_Burst>>  ___adjustedEmitBursts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___emitRateMult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___emitBurstProbabilityMult) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___particleSystems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___emissionModules) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___cachedEmitBursts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::PFXExtraAnimControls, ___adjustedEmitBursts) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::PFXExtraAnimControls) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
