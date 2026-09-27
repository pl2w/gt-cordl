#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcherButterflyNet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterCatcherButterflyNet)
namespace GlobalNamespace {
struct CosmeticCritterAction;
}
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterCatcherButterflyNet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterCatcherButterflyNet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterCatcherButterflyNet*, "", "CosmeticCritterCatcherButterflyNet");
// Dependencies CosmeticCritterCatcher
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterCatcherButterflyNet
class CORDL_TYPE CosmeticCritterCatcherButterflyNet : public ::GlobalNamespace::CosmeticCritterCatcher {
public:
// Declarations
/// @brief Field catchFX, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchFX, put=__cordl_internal_set_catchFX)) ::UnityW<::UnityEngine::ParticleSystem>  catchFX;

/// @brief Field catchSFX, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchSFX, put=__cordl_internal_set_catchSFX)) ::UnityW<::UnityEngine::AudioSource>  catchSFX;

/// @brief Field caughtButterflyParticleSystem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_caughtButterflyParticleSystem, put=__cordl_internal_set_caughtButterflyParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  caughtButterflyParticleSystem;

/// @brief Field maxCatchRadius, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCatchRadius, put=__cordl_internal_set_maxCatchRadius)) float_t  maxCatchRadius;

/// @brief Field minCatchSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minCatchSpeed, put=__cordl_internal_set_minCatchSpeed)) float_t  minCatchSpeed;

/// @brief Field velocityEstimator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method GetLocalCatchAction, addr 0x57f1a14, size 0x138, virtual true, abstract: false, final false
inline ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter) ;

static inline ::GlobalNamespace::CosmeticCritterCatcherButterflyNet* New_ctor() ;

/// @brief Method OnCatch, addr 0x57f1cc0, size 0xcc, virtual true, abstract: false, final false
inline void OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

/// @brief Method ValidateRemoteCatchAction, addr 0x57f1b4c, size 0x174, virtual true, abstract: false, final false
inline bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_catchFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_catchFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_catchSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_catchSFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_caughtButterflyParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_caughtButterflyParticleSystem() ;

constexpr float_t const& __cordl_internal_get_maxCatchRadius() const;

constexpr float_t& __cordl_internal_get_maxCatchRadius() ;

constexpr float_t const& __cordl_internal_get_minCatchSpeed() const;

constexpr float_t& __cordl_internal_get_minCatchSpeed() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_catchFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_catchSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_caughtButterflyParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_maxCatchRadius(float_t  value) ;

constexpr void __cordl_internal_set_minCatchSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x57f1d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterCatcherButterflyNet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcherButterflyNet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterCatcherButterflyNet(CosmeticCritterCatcherButterflyNet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcherButterflyNet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterCatcherButterflyNet(CosmeticCritterCatcherButterflyNet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{193};

/// [Tooltip("Use this for calculating the catch position and velocity.")]
/// [SerializeField]
/// @brief Field velocityEstimator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// [Tooltip("Catch the Butterfly if it is within this radius.")]
/// [SerializeField]
/// @brief Field maxCatchRadius, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxCatchRadius;

/// [Tooltip("Only catch the Butterfly if the net is moving faster than this speed.")]
/// [SerializeField]
/// @brief Field minCatchSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___minCatchSpeed;

/// [Tooltip("Spawn a particle inside the net representing the caught Butterfly.")]
/// [SerializeField]
/// @brief Field caughtButterflyParticleSystem, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___caughtButterflyParticleSystem;

/// [Tooltip("Play this particle effect when catching a Butterfly.")]
/// [SerializeField]
/// @brief Field catchFX, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___catchFX;

/// [Tooltip("Play this sound when catching a Butterfly.")]
/// [SerializeField]
/// @brief Field catchSFX, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___catchSFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___velocityEstimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___maxCatchRadius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___minCatchSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___caughtButterflyParticleSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___catchFX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet, ___catchSFX) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterCatcherButterflyNet) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
