#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor_SeedProcessingVisualState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSeedExtractor_SeedProcessingVisualState)
// Forward declare root types
namespace GlobalNamespace {
struct GRSeedExtractor_SeedProcessingVisualState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, "", "GRSeedExtractor/SeedProcessingVisualState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRSeedExtractor/SeedProcessingVisualState
struct CORDL_TYPE GRSeedExtractor_SeedProcessingVisualState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRSeedExtractor_SeedProcessingVisualState() ;

// Ctor Parameters [CppParam { name: "poolIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rollAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rampProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dropProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSeedExtractor_SeedProcessingVisualState(int32_t  poolIndex, float_t  speed, float_t  rollAngle, float_t  rampProgress, float_t  dropProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2027};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field poolIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  poolIndex;

/// @brief Field speed, offset: 0x4, size: 0x4, def value: None
 float_t  speed;

/// @brief Field rollAngle, offset: 0x8, size: 0x4, def value: None
 float_t  rollAngle;

/// @brief Field rampProgress, offset: 0xc, size: 0x4, def value: None
 float_t  rampProgress;

/// @brief Field dropProgress, offset: 0x10, size: 0x4, def value: None
 float_t  dropProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, poolIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, speed) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, rollAngle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, rampProgress) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState, dropProgress) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
