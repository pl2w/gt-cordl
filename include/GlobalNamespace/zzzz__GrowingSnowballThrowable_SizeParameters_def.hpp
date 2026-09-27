#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowingSnowballThrowable_SizeParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GrowingSnowballThrowable_SizeParameters)
// Forward declare root types
namespace GlobalNamespace {
struct GrowingSnowballThrowable_SizeParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, "", "GrowingSnowballThrowable/SizeParameters");
// Dependencies SlingshotProjectile::AOEKnockbackConfig
namespace GlobalNamespace {
// Is value type: true
// CS Name: GrowingSnowballThrowable/SizeParameters
struct CORDL_TYPE GrowingSnowballThrowable_SizeParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GrowingSnowballThrowable_SizeParameters() ;

// Ctor Parameters [CppParam { name: "snowballScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "impactEffectScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "impactSoundVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "impactSoundPitch", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "throwSpeedMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gravityMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "aoeKnockbackConfig", ty: "::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig", modifiers: "", def_value: None, comment: None }]
constexpr GrowingSnowballThrowable_SizeParameters(float_t  snowballScale, float_t  impactEffectScale, float_t  impactSoundVolume, float_t  impactSoundPitch, float_t  throwSpeedMultiplier, float_t  gravityMultiplier, ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  aoeKnockbackConfig) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field snowballScale, offset: 0x0, size: 0x4, def value: None
 float_t  snowballScale;

/// @brief Field impactEffectScale, offset: 0x4, size: 0x4, def value: None
 float_t  impactEffectScale;

/// @brief Field impactSoundVolume, offset: 0x8, size: 0x4, def value: None
 float_t  impactSoundVolume;

/// @brief Field impactSoundPitch, offset: 0xc, size: 0x4, def value: None
 float_t  impactSoundPitch;

/// @brief Field throwSpeedMultiplier, offset: 0x10, size: 0x4, def value: None
 float_t  throwSpeedMultiplier;

/// @brief Field gravityMultiplier, offset: 0x14, size: 0x4, def value: None
 float_t  gravityMultiplier;

/// @brief Field aoeKnockbackConfig, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  aoeKnockbackConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, snowballScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, impactEffectScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, impactSoundVolume) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, impactSoundPitch) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, throwSpeedMultiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, gravityMultiplier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters, aoeKnockbackConfig) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrowingSnowballThrowable_SizeParameters) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
