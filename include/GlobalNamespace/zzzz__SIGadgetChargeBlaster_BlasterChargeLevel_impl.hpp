#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetChargeBlaster_BlasterChargeLevel.hpp"
#include "GlobalNamespace/zzzz__SIGadgetChargeBlaster_BlasterChargeLevel_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
// Ctor Parameters [CppParam { name: "chargeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chargingVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firingVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chargingHapticStrength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firingHapticStrength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firingHapticDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firingClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fireFX", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chargingFX", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "projectilePrefab", ty: "::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel::SIGadgetChargeBlaster_BlasterChargeLevel(float_t  chargeThreshold, float_t  chargingVolume, float_t  firingVolume, float_t  chargingHapticStrength, float_t  firingHapticStrength, float_t  firingHapticDuration, ::UnityW<::UnityEngine::AudioClip>  firingClip, ::UnityW<::UnityEngine::ParticleSystem>  fireFX, ::UnityW<::UnityEngine::GameObject>  chargingFX, ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectilePrefab) noexcept  {
this->chargeThreshold = chargeThreshold;
this->chargingVolume = chargingVolume;
this->firingVolume = firingVolume;
this->chargingHapticStrength = chargingHapticStrength;
this->firingHapticStrength = firingHapticStrength;
this->firingHapticDuration = firingHapticDuration;
this->firingClip = firingClip;
this->fireFX = fireFX;
this->chargingFX = chargingFX;
this->projectilePrefab = projectilePrefab;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel::SIGadgetChargeBlaster_BlasterChargeLevel()   {
}
