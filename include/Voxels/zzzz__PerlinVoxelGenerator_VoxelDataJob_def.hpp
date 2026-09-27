#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator_VoxelDataJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerlinVoxelGenerator_VoxelDataJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct PerlinVoxelGenerator_VoxelDataJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, "Voxels", "PerlinVoxelGenerator/VoxelDataJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.PerlinVoxelGenerator/VoxelDataJob
struct CORDL_TYPE PerlinVoxelGenerator_VoxelDataJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5db0080, size 0x210, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr PerlinVoxelGenerator_VoxelDataJob() ;

// Ctor Parameters [CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundLevel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightCompensation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "octaves", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "persistence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr PerlinVoxelGenerator_VoxelDataJob(::Unity::Mathematics::int3  chunkPosition, int32_t  chunkSize, int32_t  dimension, float_t  noiseScale, float_t  groundLevel, float_t  heightScale, float_t  heightCompensation, int32_t  octaves, float_t  persistence, int32_t  seed, ::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field chunkPosition, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::int3  chunkPosition;

/// @brief Field chunkSize, offset: 0xc, size: 0x4, def value: None
 int32_t  chunkSize;

/// @brief Field dimension, offset: 0x10, size: 0x4, def value: None
 int32_t  dimension;

/// @brief Field noiseScale, offset: 0x14, size: 0x4, def value: None
 float_t  noiseScale;

/// @brief Field groundLevel, offset: 0x18, size: 0x4, def value: None
 float_t  groundLevel;

/// @brief Field heightScale, offset: 0x1c, size: 0x4, def value: None
 float_t  heightScale;

/// @brief Field heightCompensation, offset: 0x20, size: 0x4, def value: None
 float_t  heightCompensation;

/// @brief Field octaves, offset: 0x24, size: 0x4, def value: None
 int32_t  octaves;

/// @brief Field persistence, offset: 0x28, size: 0x4, def value: None
 float_t  persistence;

/// @brief Field seed, offset: 0x2c, size: 0x4, def value: None
 int32_t  seed;

/// [WriteOnly]
/// @brief Field voxels, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  voxels;

/// [WriteOnly]
/// @brief Field materials, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  materials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, chunkPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, chunkSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, dimension) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, noiseScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, groundLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, heightScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, heightCompensation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, octaves) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, persistence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, seed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, voxels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob, materials) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
