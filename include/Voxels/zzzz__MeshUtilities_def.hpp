#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities)
namespace GlobalNamespace {
struct MeshUtilities_BuildAdjJob;
}
namespace GlobalNamespace {
struct MeshUtilities_FaceNormalJob;
}
namespace GlobalNamespace {
struct MeshUtilities_MeshData;
}
namespace GlobalNamespace {
struct MeshUtilities_SplitJob;
}
namespace GlobalNamespace {
struct MeshUtilities_SplitVoxelMeshJob;
}
namespace GlobalNamespace {
struct MeshUtilities_TriNormalJob;
}
namespace GlobalNamespace {
struct MeshUtilities_VertexNormalJob;
}
namespace GlobalNamespace {
struct MeshUtilities_VoxelMeshData;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Voxels {
class MeshUtilities;
}
// Write type traits
MARK_REF_T(::Voxels::MeshUtilities*);
DEFINE_IL2CPP_CLASS(::Voxels::MeshUtilities*, "Voxels", "MeshUtilities");
// [Extension]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.MeshUtilities
class CORDL_TYPE MeshUtilities : public ::System::Object {
public:
// Declarations
using BuildAdjJob = ::GlobalNamespace::MeshUtilities_BuildAdjJob;

using FaceNormalJob = ::GlobalNamespace::MeshUtilities_FaceNormalJob;

using MeshData = ::GlobalNamespace::MeshUtilities_MeshData;

using SplitJob = ::GlobalNamespace::MeshUtilities_SplitJob;

using SplitVoxelMeshJob = ::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob;

using TriNormalJob = ::GlobalNamespace::MeshUtilities_TriNormalJob;

using VertexNormalJob = ::GlobalNamespace::MeshUtilities_VertexNormalJob;

using VoxelMeshData = ::GlobalNamespace::MeshUtilities_VoxelMeshData;

/// @brief Method RecalcNormalsJobified, addr 0x5db33ec, size 0x38c, virtual false, abstract: false, final false
static inline void RecalcNormalsJobified(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  verts, ::Unity::Collections::NativeList_1<int32_t>  tris, bool  areaWeight, ::Unity::Collections::Allocator  alloc, ::by_ref<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>  outNormals) ;

/// @brief Method SplitByAngle, addr 0x5db3080, size 0x2f0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MeshUtilities_MeshData SplitByAngle(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method SplitByAngle, addr 0x5db3778, size 0x33c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MeshUtilities_VoxelMeshData SplitByAngle(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<uint8_t>  srcMats, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator) ;

/// [Extension]
/// @brief Method SplitByAngle, addr 0x5db2d10, size 0x370, virtual false, abstract: false, final false
static inline void SplitByAngle(::UnityEngine::Mesh*  mesh, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshUtilities(MeshUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshUtilities(MeshUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::MeshUtilities) == 0x10, "Size mismatch!");

} // namespace end def Voxels
