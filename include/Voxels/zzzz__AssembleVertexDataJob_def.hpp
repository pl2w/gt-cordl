#pragma once
// IWYU pragma private; include "Voxels/AssembleVertexDataJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Voxels/zzzz__MeshVertexData_def.hpp"
#include "Voxels/zzzz__NativeCounter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssembleVertexDataJob)
namespace GlobalNamespace {
struct AssembleVertexDataJob_Key;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Voxels {
struct MeshVertexData;
}
// Forward declare root types
namespace Voxels {
struct AssembleVertexDataJob;
}
// Write type traits
MARK_VAL_T(::Voxels::AssembleVertexDataJob);
DEFINE_IL2CPP_CLASS(::Voxels::AssembleVertexDataJob, "Voxels", "AssembleVertexDataJob");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, Voxels.MeshVertexData, Voxels.NativeCounter
namespace Voxels {
// Is value type: true
// CS Name: Voxels.AssembleVertexDataJob
struct CORDL_TYPE AssembleVertexDataJob {
public:
// Declarations
using Key = ::GlobalNamespace::AssembleVertexDataJob_Key;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5db61b0, size 0x360, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method GetOrCreate, addr 0x5db6510, size 0x29c, virtual false, abstract: false, final false
inline uint16_t GetOrCreate(int32_t  srcIdx, ::Unity::Mathematics::int4  mats, ::Unity::Mathematics::float4  blend, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::GlobalNamespace::AssembleVertexDataJob_Key,int32_t>>  map, ::by_ref<::Unity::Collections::NativeList_1<::Voxels::MeshVertexData>>  vertsOut) ;

/// @brief Method MakeMatSet, addr 0x5db6194, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 MakeMatSet(uint8_t  m0, uint8_t  m1, uint8_t  m2) ;

/// @brief Method Sort3, addr 0x5db6168, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 Sort3(int32_t  a, int32_t  b, int32_t  c) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr AssembleVertexDataJob() ;

// Ctor Parameters [CppParam { name: "vertexData", ty: "::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcVerts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcMats", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcNorm", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcTris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleCounter", ty: "::Voxels::NativeCounter", modifiers: "", def_value: None, comment: None }]
constexpr AssembleVertexDataJob(::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData, ::Unity::Collections::NativeArray_1<uint16_t>  triangleData, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<uint8_t>  srcMats, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcNorm, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, ::Voxels::NativeCounter  triangleCounter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field vertexData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData;

/// [NativeDisableParallelForRestriction]
/// [WriteOnly]
/// @brief Field triangleData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  triangleData;

/// [ReadOnly]
/// @brief Field srcVerts, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts;

/// [ReadOnly]
/// @brief Field srcMats, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  srcMats;

/// [ReadOnly]
/// @brief Field srcNorm, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcNorm;

/// [ReadOnly]
/// @brief Field srcTris, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  srcTris;

/// @brief Field triangleCounter, offset: 0x60, size: 0x10, def value: None
 ::Voxels::NativeCounter  triangleCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::AssembleVertexDataJob, vertexData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, triangleData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, srcVerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, srcMats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, srcNorm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, srcTris) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Voxels::AssembleVertexDataJob, triangleCounter) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Voxels::AssembleVertexDataJob) == 0x70, "Size mismatch!");

} // namespace end def Voxels
