#pragma once
// IWYU pragma private; include "Voxels/MarchingCubesMeshingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Voxels/zzzz__MeshVertexData_def.hpp"
#include "Voxels/zzzz__NativeCounter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarchingCubesMeshingJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct int3;
}
// Forward declare root types
namespace Voxels {
struct MarchingCubesMeshingJob;
}
// Write type traits
MARK_VAL_T(::Voxels::MarchingCubesMeshingJob);
DEFINE_IL2CPP_CLASS(::Voxels::MarchingCubesMeshingJob, "Voxels", "MarchingCubesMeshingJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Voxels.MeshVertexData, Voxels.NativeCounter
namespace Voxels {
// Is value type: true
// CS Name: Voxels.MarchingCubesMeshingJob
struct CORDL_TYPE MarchingCubesMeshingJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5daf100, size 0x8c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method GetMaterialValue, addr 0x5dafa94, size 0x1c, virtual false, abstract: false, final false
inline uint8_t GetMaterialValue(::Unity::Mathematics::int3  pos) ;

/// @brief Method GetVoxelValue, addr 0x5dafab0, size 0x58, virtual false, abstract: false, final false
inline uint8_t GetVoxelValue(::Unity::Mathematics::int3  pos) ;

/// @brief Method ProcessCube, addr 0x5daf18c, size 0x908, virtual false, abstract: false, final false
inline void ProcessCube(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr MarchingCubesMeshingJob() ;

// Ctor Parameters [CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isoLevel", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleCounter", ty: "::Voxels::NativeCounter", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexData", ty: "::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MarchingCubesMeshingJob(::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials, int32_t  chunkSize, uint8_t  isoLevel, ::Voxels::NativeCounter  triangleCounter, ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData, ::Unity::Collections::NativeArray_1<uint16_t>  triangleData, int32_t  dimension) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5012};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// [ReadOnly]
/// @brief Field voxels, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  voxels;

/// [ReadOnly]
/// @brief Field materials, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  materials;

/// [ReadOnly]
/// @brief Field chunkSize, offset: 0x20, size: 0x4, def value: None
 int32_t  chunkSize;

/// [ReadOnly]
/// @brief Field isoLevel, offset: 0x24, size: 0x1, def value: None
 uint8_t  isoLevel;

/// @brief Field triangleCounter, offset: 0x28, size: 0x10, def value: None
 ::Voxels::NativeCounter  triangleCounter;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field vertexData, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field triangleData, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  triangleData;

/// @brief Field dimension, offset: 0x58, size: 0x4, def value: None
 int32_t  dimension;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, voxels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, materials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, chunkSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, isoLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, triangleCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, vertexData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, triangleData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Voxels::MarchingCubesMeshingJob, dimension) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Voxels::MarchingCubesMeshingJob) == 0x60, "Size mismatch!");

} // namespace end def Voxels
