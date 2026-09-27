#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator_NoiseParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerlinVoxelGenerator_NoiseParameters)
// Forward declare root types
namespace GlobalNamespace {
struct PerlinVoxelGenerator_NoiseParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, "Voxels", "PerlinVoxelGenerator/NoiseParameters");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.PerlinVoxelGenerator/NoiseParameters
struct CORDL_TYPE PerlinVoxelGenerator_NoiseParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PerlinVoxelGenerator_NoiseParameters() ;

// Ctor Parameters [CppParam { name: "NoiseScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GroundLevel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HeightScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HeightCompensation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Octaves", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Persistence", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PerlinVoxelGenerator_NoiseParameters(float_t  NoiseScale, float_t  GroundLevel, float_t  HeightScale, float_t  HeightCompensation, int32_t  Octaves, float_t  Persistence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field NoiseScale, offset: 0x0, size: 0x4, def value: None
 float_t  NoiseScale;

/// @brief Field GroundLevel, offset: 0x4, size: 0x4, def value: None
 float_t  GroundLevel;

/// @brief Field HeightScale, offset: 0x8, size: 0x4, def value: None
 float_t  HeightScale;

/// @brief Field HeightCompensation, offset: 0xc, size: 0x4, def value: None
 float_t  HeightCompensation;

/// @brief Field Octaves, offset: 0x10, size: 0x4, def value: None
 int32_t  Octaves;

/// @brief Field Persistence, offset: 0x14, size: 0x4, def value: None
 float_t  Persistence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, NoiseScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, GroundLevel) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, HeightScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, HeightCompensation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, Octaves) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters, Persistence) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
