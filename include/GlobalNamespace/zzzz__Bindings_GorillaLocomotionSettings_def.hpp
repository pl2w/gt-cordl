#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_GorillaLocomotionSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_GorillaLocomotionSettings)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_GorillaLocomotionSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_GorillaLocomotionSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_GorillaLocomotionSettings, "", "Bindings/GorillaLocomotionSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/GorillaLocomotionSettings
struct CORDL_TYPE Bindings_GorillaLocomotionSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_GorillaLocomotionSettings() ;

// Ctor Parameters [CppParam { name: "velocityLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "slideVelocityLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxJumpSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jumpMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_GorillaLocomotionSettings(float_t  velocityLimit, float_t  slideVelocityLimit, float_t  maxJumpSpeed, float_t  jumpMultiplier) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3168};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field velocityLimit, offset: 0x0, size: 0x4, def value: None
 float_t  velocityLimit;

/// @brief Field slideVelocityLimit, offset: 0x4, size: 0x4, def value: None
 float_t  slideVelocityLimit;

/// @brief Field maxJumpSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  maxJumpSpeed;

/// @brief Field jumpMultiplier, offset: 0xc, size: 0x4, def value: None
 float_t  jumpMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_GorillaLocomotionSettings, velocityLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_GorillaLocomotionSettings, slideVelocityLimit) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_GorillaLocomotionSettings, maxJumpSpeed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_GorillaLocomotionSettings, jumpMultiplier) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_GorillaLocomotionSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
