#pragma once
// IWYU pragma private; include "Voxels/SurfaceNetsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNetsJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
// Forward declare root types
namespace Voxels {
struct SurfaceNetsJob;
}
// Write type traits
MARK_VAL_T(::Voxels::SurfaceNetsJob);
DEFINE_IL2CPP_CLASS(::Voxels::SurfaceNetsJob, "Voxels", "SurfaceNetsJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, Unity.Mathematics.int2, Unity.Mathematics.int3, Voxels.SurfaceNetsBuffer
namespace Voxels {
// Is value type: true
// CS Name: Voxels.SurfaceNetsJob
struct CORDL_TYPE SurfaceNetsJob {
public:
// Declarations
/// @brief Field cornerVecs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cornerVecs, put=setStaticF_cornerVecs)) ::ArrayW<::Unity::Mathematics::float3>  cornerVecs;

/// @brief Field cubeCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cubeCorners, put=setStaticF_cubeCorners)) ::ArrayW<::Unity::Mathematics::int3>  cubeCorners;

/// @brief Field cubeEdges, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cubeEdges, put=setStaticF_cubeEdges)) ::ArrayW<::Unity::Mathematics::int2>  cubeEdges;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method AccumulateNormals, addr 0x5db5694, size 0x3b0, virtual false, abstract: false, final false
inline void AccumulateNormals() ;

/// @brief Method EdgeIntersection, addr 0x5db5a44, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EdgeIntersection(int32_t  c1, int32_t  c2, float_t  v1, float_t  v2) ;

/// @brief Method EstimateSurfaceInCube, addr 0x5db51e4, size 0x270, virtual false, abstract: false, final false
inline bool EstimateSurfaceInCube(::Unity::Mathematics::int3  voxel, int32_t  cubeMin, int32_t  sx, int32_t  sy, int32_t  sz, ::by_ref<::Unity::Mathematics::float3>  centroid) ;

/// @brief Method Execute, addr 0x5db4f08, size 0x2dc, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method MakeAllQuads, addr 0x5db5454, size 0x240, virtual false, abstract: false, final false
inline void MakeAllQuads(int32_t  sx, int32_t  sy, int32_t  sz) ;

/// @brief Method TryQuad, addr 0x5db5b2c, size 0x348, virtual false, abstract: false, final false
inline void TryQuad(int32_t  p1, int32_t  p2, int32_t  strideB, int32_t  strideC) ;

static inline ::ArrayW<::Unity::Mathematics::float3> getStaticF_cornerVecs() ;

static inline ::ArrayW<::Unity::Mathematics::int3> getStaticF_cubeCorners() ;

static inline ::ArrayW<::Unity::Mathematics::int2> getStaticF_cubeEdges() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

static inline void setStaticF_cornerVecs(::ArrayW<::Unity::Mathematics::float3>  value) ;

static inline void setStaticF_cubeCorners(::ArrayW<::Unity::Mathematics::int3>  value) ;

static inline void setStaticF_cubeEdges(::ArrayW<::Unity::Mathematics::int2>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsJob() ;

// Ctor Parameters [CppParam { name: "sdf", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shape", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "min", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "isoLevel", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::Voxels::SurfaceNetsBuffer", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceNetsJob(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Collections::NativeArray_1<uint8_t>  material, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, uint8_t  isoLevel, ::Voxels::SurfaceNetsBuffer  buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// [ReadOnly]
/// @brief Field sdf, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  sdf;

/// [ReadOnly]
/// @brief Field material, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  material;

/// @brief Field shape, offset: 0x20, size: 0xc, def value: None
 ::Unity::Mathematics::int3  shape;

/// @brief Field min, offset: 0x2c, size: 0xc, def value: None
 ::Unity::Mathematics::int3  min;

/// @brief Field max, offset: 0x38, size: 0xc, def value: None
 ::Unity::Mathematics::int3  max;

/// @brief Field isoLevel, offset: 0x44, size: 0x1, def value: None
 uint8_t  isoLevel;

/// @brief Field buffer, offset: 0x48, size: 0x40, def value: None
 ::Voxels::SurfaceNetsBuffer  buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::SurfaceNetsJob, sdf) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, min) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, max) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, isoLevel) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsJob, buffer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Voxels::SurfaceNetsJob) == 0x88, "Size mismatch!");

} // namespace end def Voxels
