#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectile_AOEKnockbackConfig.hpp"
#include "GlobalNamespace/zzzz__PlayerEffect_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
// Ctor Parameters [CppParam { name: "applyAOEKnockback", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aeoInnerRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aeoOuterRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "knockbackVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "impactVelocityThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerProximityEffect", ty: "::GlobalNamespace::PlayerEffect", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig::SlingshotProjectile_AOEKnockbackConfig(bool  applyAOEKnockback, float_t  aeoInnerRadius, float_t  aeoOuterRadius, float_t  knockbackVelocity, float_t  impactVelocityThreshold, ::GlobalNamespace::PlayerEffect  playerProximityEffect) noexcept  {
this->applyAOEKnockback = applyAOEKnockback;
this->aeoInnerRadius = aeoInnerRadius;
this->aeoOuterRadius = aeoOuterRadius;
this->knockbackVelocity = knockbackVelocity;
this->impactVelocityThreshold = impactVelocityThreshold;
this->playerProximityEffect = playerProximityEffect;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig::SlingshotProjectile_AOEKnockbackConfig()   {
}
