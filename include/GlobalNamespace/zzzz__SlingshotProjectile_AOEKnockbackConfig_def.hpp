#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectile_AOEKnockbackConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SlingshotProjectile_AOEKnockbackConfig)
// Forward declare root types
namespace GlobalNamespace {
struct SlingshotProjectile_AOEKnockbackConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, "", "SlingshotProjectile/AOEKnockbackConfig");
// Dependencies PlayerEffect
namespace GlobalNamespace {
// Is value type: true
// CS Name: SlingshotProjectile/AOEKnockbackConfig
struct CORDL_TYPE SlingshotProjectile_AOEKnockbackConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectile_AOEKnockbackConfig() ;

// Ctor Parameters [CppParam { name: "applyAOEKnockback", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "aeoInnerRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "aeoOuterRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "knockbackVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "impactVelocityThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerProximityEffect", ty: "::GlobalNamespace::PlayerEffect", modifiers: "", def_value: None, comment: None }]
constexpr SlingshotProjectile_AOEKnockbackConfig(bool  applyAOEKnockback, float_t  aeoInnerRadius, float_t  aeoOuterRadius, float_t  knockbackVelocity, float_t  impactVelocityThreshold, ::GlobalNamespace::PlayerEffect  playerProximityEffect) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field applyAOEKnockback, offset: 0x0, size: 0x1, def value: None
 bool  applyAOEKnockback;

/// [Tooltip("Full knockback velocity is imparted within the inner radius")]
/// @brief Field aeoInnerRadius, offset: 0x4, size: 0x4, def value: None
 float_t  aeoInnerRadius;

/// [Tooltip("Partial knockback velocity is imparted between the inner and outer radius")]
/// @brief Field aeoOuterRadius, offset: 0x8, size: 0x4, def value: None
 float_t  aeoOuterRadius;

/// @brief Field knockbackVelocity, offset: 0xc, size: 0x4, def value: None
 float_t  knockbackVelocity;

/// [Tooltip("The required impact velocity to achieve full knockback velocity")]
/// @brief Field impactVelocityThreshold, offset: 0x10, size: 0x4, def value: None
 float_t  impactVelocityThreshold;

/// [SerializeField]
/// @brief Field playerProximityEffect, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEffect  playerProximityEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, applyAOEKnockback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, aeoInnerRadius) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, aeoOuterRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, knockbackVelocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, impactVelocityThreshold) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig, playerProximityEffect) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
