#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNets)
namespace FastSurfaceNets {
class SurfaceNetsBuffer;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
// Forward declare root types
namespace FastSurfaceNets {
class SurfaceNets;
}
// Write type traits
MARK_REF_T(::FastSurfaceNets::SurfaceNets*);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::SurfaceNets*, "FastSurfaceNets", "SurfaceNets");
// Dependencies System.Object, Unity.Mathematics.float3, Unity.Mathematics.int2, Unity.Mathematics.int3
namespace FastSurfaceNets {
// Is value type: false
// CS Name: FastSurfaceNets.SurfaceNets
class CORDL_TYPE SurfaceNets : public ::System::Object {
public:
// Declarations
/// @brief Field CornerVectors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CornerVectors, put=setStaticF_CornerVectors)) ::ArrayW<::Unity::Mathematics::float3>  CornerVectors;

/// @brief Field CubeCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CubeCorners, put=setStaticF_CubeCorners)) ::ArrayW<::Unity::Mathematics::int3>  CubeCorners;

/// @brief Field CubeEdges, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CubeEdges, put=setStaticF_CubeEdges)) ::ArrayW<::Unity::Mathematics::int2>  CubeEdges;

/// @brief Method AccumulateNormals, addr 0x5da9010, size 0x250, virtual false, abstract: false, final false
static inline void AccumulateNormals(::FastSurfaceNets::SurfaceNetsBuffer*  b) ;

/// @brief Method CentralDifferenceGradient, addr 0x5da9348, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 CentralDifferenceGradient(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  v, int32_t  sx, int32_t  sy, int32_t  sz) ;

/// @brief Method EdgeIntersection, addr 0x5da9260, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EdgeIntersection(int32_t  c1, int32_t  c2, float_t  v1, float_t  v2) ;

/// @brief Method EstimateSurfaceInCube, addr 0x5da8ae8, size 0x308, virtual false, abstract: false, final false
static inline bool EstimateSurfaceInCube(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  voxel, int32_t  cubeMinStride, int32_t  strideX, int32_t  strideY, int32_t  strideZ, ::FastSurfaceNets::SurfaceNetsBuffer*  output, ::by_ref<::Unity::Mathematics::float3>  centroid) ;

/// @brief Method Generate, addr 0x5da8698, size 0x450, virtual false, abstract: false, final false
static inline void Generate(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, ::FastSurfaceNets::SurfaceNetsBuffer*  output) ;

/// @brief Method MakeAllQuads, addr 0x5da8df0, size 0x220, virtual false, abstract: false, final false
static inline void MakeAllQuads(::ArrayW<float_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, int32_t  sx, int32_t  sy, int32_t  sz, ::FastSurfaceNets::SurfaceNetsBuffer*  outBuf) ;

/// @brief Method MaybeQuad, addr 0x5da9444, size 0x3d4, virtual false, abstract: false, final false
static inline void MaybeQuad(::ArrayW<float_t>  sdf, ::FastSurfaceNets::SurfaceNetsBuffer*  b, int32_t  p1, int32_t  p2, int32_t  strideB, int32_t  strideC) ;

static inline ::ArrayW<::Unity::Mathematics::float3> getStaticF_CornerVectors() ;

static inline ::ArrayW<::Unity::Mathematics::int3> getStaticF_CubeCorners() ;

static inline ::ArrayW<::Unity::Mathematics::int2> getStaticF_CubeEdges() ;

static inline void setStaticF_CornerVectors(::ArrayW<::Unity::Mathematics::float3>  value) ;

static inline void setStaticF_CubeCorners(::ArrayW<::Unity::Mathematics::int3>  value) ;

static inline void setStaticF_CubeEdges(::ArrayW<::Unity::Mathematics::int2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceNets(SurfaceNets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceNets(SurfaceNets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::FastSurfaceNets::SurfaceNets) == 0x10, "Size mismatch!");

} // namespace end def FastSurfaceNets
