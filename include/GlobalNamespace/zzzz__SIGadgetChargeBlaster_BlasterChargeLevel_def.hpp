#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetChargeBlaster_BlasterChargeLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SIGadgetChargeBlaster_BlasterChargeLevel)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetChargeBlaster_BlasterChargeLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, "", "SIGadgetChargeBlaster/BlasterChargeLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetChargeBlaster/BlasterChargeLevel
struct CORDL_TYPE SIGadgetChargeBlaster_BlasterChargeLevel {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetChargeBlaster_BlasterChargeLevel() ;

// Ctor Parameters [CppParam { name: "chargeThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "chargingVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firingVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "chargingHapticStrength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firingHapticStrength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firingHapticDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firingClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fireFX", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }, CppParam { name: "chargingFX", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "projectilePrefab", ty: "::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetChargeBlaster_BlasterChargeLevel(float_t  chargeThreshold, float_t  chargingVolume, float_t  firingVolume, float_t  chargingHapticStrength, float_t  firingHapticStrength, float_t  firingHapticDuration, ::UnityW<::UnityEngine::AudioClip>  firingClip, ::UnityW<::UnityEngine::ParticleSystem>  fireFX, ::UnityW<::UnityEngine::GameObject>  chargingFX, ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectilePrefab) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field chargeThreshold, offset: 0x0, size: 0x4, def value: None
 float_t  chargeThreshold;

/// @brief Field chargingVolume, offset: 0x4, size: 0x4, def value: None
 float_t  chargingVolume;

/// @brief Field firingVolume, offset: 0x8, size: 0x4, def value: None
 float_t  firingVolume;

/// @brief Field chargingHapticStrength, offset: 0xc, size: 0x4, def value: None
 float_t  chargingHapticStrength;

/// @brief Field firingHapticStrength, offset: 0x10, size: 0x4, def value: None
 float_t  firingHapticStrength;

/// @brief Field firingHapticDuration, offset: 0x14, size: 0x4, def value: None
 float_t  firingHapticDuration;

/// @brief Field firingClip, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  firingClip;

/// @brief Field fireFX, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  fireFX;

/// @brief Field chargingFX, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  chargingFX;

/// @brief Field projectilePrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectilePrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, chargeThreshold) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, chargingVolume) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, firingVolume) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, chargingHapticStrength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, firingHapticStrength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, firingHapticDuration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, firingClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, fireFX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, chargingFX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel, projectilePrefab) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
