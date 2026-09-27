#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator_VoxelDataJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFVoxelGenerator_VoxelDataJob)
namespace GlobalNamespace {
struct SDFVoxelGenerator_SDFPrimitive;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SDFVoxelGenerator_VoxelDataJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, "Voxels", "SDFVoxelGenerator/VoxelDataJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3, Voxels.SDFVoxelGenerator::SDFPrimitive
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.SDFVoxelGenerator/VoxelDataJob
struct CORDL_TYPE SDFVoxelGenerator_VoxelDataJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5db0edc, size 0x4ac, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method GetDistance, addr 0x5db1388, size 0x1ac, virtual false, abstract: false, final false
static inline float_t GetDistance(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive  primitive, ::Unity::Mathematics::float3  position) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr SDFVoxelGenerator_VoxelDataJob() ;

// Ctor Parameters [CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "blocky", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "octaves", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "persistence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fill", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "operations", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>", modifiers: "", def_value: None, comment: None }]
constexpr SDFVoxelGenerator_VoxelDataJob(::Unity::Mathematics::int3  chunkPosition, int32_t  chunkSize, int32_t  dimension, bool  blocky, float_t  noiseScale, float_t  heightScale, int32_t  octaves, float_t  persistence, int32_t  seed, ::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials, uint8_t  fill, ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  operations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field chunkPosition, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::int3  chunkPosition;

/// @brief Field chunkSize, offset: 0xc, size: 0x4, def value: None
 int32_t  chunkSize;

/// @brief Field dimension, offset: 0x10, size: 0x4, def value: None
 int32_t  dimension;

/// @brief Field blocky, offset: 0x14, size: 0x1, def value: None
 bool  blocky;

/// @brief Field noiseScale, offset: 0x18, size: 0x4, def value: None
 float_t  noiseScale;

/// @brief Field heightScale, offset: 0x1c, size: 0x4, def value: None
 float_t  heightScale;

/// @brief Field octaves, offset: 0x20, size: 0x4, def value: None
 int32_t  octaves;

/// @brief Field persistence, offset: 0x24, size: 0x4, def value: None
 float_t  persistence;

/// @brief Field seed, offset: 0x28, size: 0x4, def value: None
 int32_t  seed;

/// [WriteOnly]
/// @brief Field voxels, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  voxels;

/// [WriteOnly]
/// @brief Field materials, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  materials;

/// @brief Field fill, offset: 0x50, size: 0x1, def value: None
 uint8_t  fill;

/// [ReadOnly]
/// @brief Field operations, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  operations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, chunkPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, chunkSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, dimension) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, blocky) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, noiseScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, heightScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, octaves) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, persistence) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, seed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, voxels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, materials) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, fill) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob, operations) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
