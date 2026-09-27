#pragma once
// IWYU pragma private; include "FastSurfaceNets/FillChunkJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FillChunkJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace FastSurfaceNets {
struct FillChunkJob;
}
// Write type traits
MARK_VAL_T(::FastSurfaceNets::FillChunkJob);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::FillChunkJob, "FastSurfaceNets", "FillChunkJob");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3
namespace FastSurfaceNets {
// Is value type: true
// CS Name: FastSurfaceNets.FillChunkJob
struct CORDL_TYPE FillChunkJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5daac14, size 0xe0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr FillChunkJob() ;

// Ctor Parameters [CppParam { name: "sdf", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shape", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "shapeMin", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "shapeMax", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "min", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "strideY", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "strideZ", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FillChunkJob(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  chunkPosition, ::Unity::Mathematics::int3  shapeMin, ::Unity::Mathematics::int3  shapeMax, float_t  noiseScale, float_t  heightScale, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, int32_t  strideY, int32_t  strideZ) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// [WriteOnly]
/// @brief Field sdf, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  sdf;

/// [ReadOnly]
/// @brief Field shape, offset: 0x10, size: 0xc, def value: None
 ::Unity::Mathematics::int3  shape;

/// [ReadOnly]
/// @brief Field chunkPosition, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::int3  chunkPosition;

/// [ReadOnly]
/// @brief Field shapeMin, offset: 0x28, size: 0xc, def value: None
 ::Unity::Mathematics::int3  shapeMin;

/// [ReadOnly]
/// @brief Field shapeMax, offset: 0x34, size: 0xc, def value: None
 ::Unity::Mathematics::int3  shapeMax;

/// [ReadOnly]
/// @brief Field noiseScale, offset: 0x40, size: 0x4, def value: None
 float_t  noiseScale;

/// [ReadOnly]
/// @brief Field heightScale, offset: 0x44, size: 0x4, def value: None
 float_t  heightScale;

/// [ReadOnly]
/// @brief Field min, offset: 0x48, size: 0xc, def value: None
 ::Unity::Mathematics::int3  min;

/// [ReadOnly]
/// @brief Field max, offset: 0x54, size: 0xc, def value: None
 ::Unity::Mathematics::int3  max;

/// [ReadOnly]
/// @brief Field strideY, offset: 0x60, size: 0x4, def value: None
 int32_t  strideY;

/// [ReadOnly]
/// @brief Field strideZ, offset: 0x64, size: 0x4, def value: None
 int32_t  strideZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::FastSurfaceNets::FillChunkJob, sdf) == 0x0, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, shape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, chunkPosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, shapeMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, shapeMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, noiseScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, heightScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, min) == 0x48, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, max) == 0x54, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, strideY) == 0x60, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::FillChunkJob, strideZ) == 0x64, "Offset mismatch!");

static_assert(sizeof(::FastSurfaceNets::FillChunkJob) == 0x68, "Size mismatch!");

} // namespace end def FastSurfaceNets
