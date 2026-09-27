#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_LiquidProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GTPlayer_LiquidProperties)
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_LiquidProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_LiquidProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_LiquidProperties, "GorillaLocomotion", "GTPlayer/LiquidProperties");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/LiquidProperties
struct CORDL_TYPE GTPlayer_LiquidProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_LiquidProperties() ;

// Ctor Parameters [CppParam { name: "resistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buoyancy", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dampingFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceJumpFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_LiquidProperties(float_t  resistance, float_t  buoyancy, float_t  dampingFactor, float_t  surfaceJumpFactor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Range(0, 2)]
/// [Tooltip("0: no resistance just like air, 1: full resistance like solid geometry")]
/// @brief Field resistance, offset: 0x0, size: 0x4, def value: None
 float_t  resistance;

/// [Range(0, 3)]
/// [Tooltip("0: no buoyancy. 1: Fully compensates gravity. 2: net force is upwards equal to gravity")]
/// @brief Field buoyancy, offset: 0x4, size: 0x4, def value: None
 float_t  buoyancy;

/// [Range(0, 100)]
/// [Tooltip("Damping Half-life Multiplier")]
/// @brief Field dampingFactor, offset: 0x8, size: 0x4, def value: None
 float_t  dampingFactor;

/// [Range(0, 1)]
/// @brief Field surfaceJumpFactor, offset: 0xc, size: 0x4, def value: None
 float_t  surfaceJumpFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_LiquidProperties, resistance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_LiquidProperties, buoyancy) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_LiquidProperties, dampingFactor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_LiquidProperties, surfaceJumpFactor) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_LiquidProperties) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
