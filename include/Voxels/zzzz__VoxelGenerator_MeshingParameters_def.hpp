#pragma once
// IWYU pragma private; include "Voxels/VoxelGenerator_MeshingParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Voxels/zzzz__MeshGenerationMode_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VoxelGenerator_MeshingParameters)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelGenerator_MeshingParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelGenerator_MeshingParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelGenerator_MeshingParameters, "Voxels", "VoxelGenerator/MeshingParameters");
// Dependencies Voxels.MeshGenerationMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelGenerator/MeshingParameters
struct CORDL_TYPE VoxelGenerator_MeshingParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelGenerator_MeshingParameters() ;

// Ctor Parameters [CppParam { name: "MeshGenerationMode", ty: "::Voxels::MeshGenerationMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "NormalThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AreaWeightedNormals", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr VoxelGenerator_MeshingParameters(::Voxels::MeshGenerationMode  MeshGenerationMode, float_t  NormalThreshold, bool  AreaWeightedNormals) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field MeshGenerationMode, offset: 0x0, size: 0x4, def value: None
 ::Voxels::MeshGenerationMode  MeshGenerationMode;

/// @brief Field NormalThreshold, offset: 0x4, size: 0x4, def value: None
 float_t  NormalThreshold;

/// @brief Field AreaWeightedNormals, offset: 0x8, size: 0x1, def value: None
 bool  AreaWeightedNormals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelGenerator_MeshingParameters, MeshGenerationMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelGenerator_MeshingParameters, NormalThreshold) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelGenerator_MeshingParameters, AreaWeightedNormals) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelGenerator_MeshingParameters) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
