#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowingSnowballThrowable_SizeParameters.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_impl.hpp"
#include "GlobalNamespace/zzzz__GrowingSnowballThrowable_SizeParameters_def.hpp"
// Ctor Parameters [CppParam { name: "snowballScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "impactEffectScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "impactSoundVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "impactSoundPitch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "throwSpeedMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravityMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aoeKnockbackConfig", ty: "::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GrowingSnowballThrowable_SizeParameters::GrowingSnowballThrowable_SizeParameters(float_t  snowballScale, float_t  impactEffectScale, float_t  impactSoundVolume, float_t  impactSoundPitch, float_t  throwSpeedMultiplier, float_t  gravityMultiplier, ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  aoeKnockbackConfig) noexcept  {
this->snowballScale = snowballScale;
this->impactEffectScale = impactEffectScale;
this->impactSoundVolume = impactSoundVolume;
this->impactSoundPitch = impactSoundPitch;
this->throwSpeedMultiplier = throwSpeedMultiplier;
this->gravityMultiplier = gravityMultiplier;
this->aoeKnockbackConfig = aoeKnockbackConfig;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrowingSnowballThrowable_SizeParameters::GrowingSnowballThrowable_SizeParameters()   {
}
