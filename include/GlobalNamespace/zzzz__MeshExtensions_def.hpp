#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshExtensions)
namespace GlobalNamespace {
struct MeshExtensions_BuildAdjJob;
}
namespace GlobalNamespace {
struct MeshExtensions_FaceNormalJob;
}
namespace GlobalNamespace {
struct MeshExtensions_SplitJob;
}
namespace GlobalNamespace {
struct MeshExtensions_TriNormalJob;
}
namespace GlobalNamespace {
struct MeshExtensions_VertexNormalJob;
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
namespace GlobalNamespace {
class MeshExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MeshExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshExtensions*, "", "MeshExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MeshExtensions
class CORDL_TYPE MeshExtensions : public ::System::Object {
public:
// Declarations
using BuildAdjJob = ::GlobalNamespace::MeshExtensions_BuildAdjJob;

using FaceNormalJob = ::GlobalNamespace::MeshExtensions_FaceNormalJob;

using SplitJob = ::GlobalNamespace::MeshExtensions_SplitJob;

using TriNormalJob = ::GlobalNamespace::MeshExtensions_TriNormalJob;

using VertexNormalJob = ::GlobalNamespace::MeshExtensions_VertexNormalJob;

/// @brief Method RecalcNormalsJobified, addr 0x5d15e54, size 0x378, virtual false, abstract: false, final false
static inline void RecalcNormalsJobified(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  verts, ::Unity::Collections::NativeList_1<int32_t>  tris, bool  areaWeight, ::Unity::Collections::Allocator  alloc, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  outNormals) ;

/// [Extension]
/// @brief Method SplitByAngle, addr 0x5d14f1c, size 0x7e0, virtual false, abstract: false, final false
static inline void SplitByAngle(::UnityEngine::Mesh*  mesh, float_t  angleDeg) ;

/// [Extension]
/// @brief Method SplitByAngleBurst, addr 0x5d156fc, size 0x758, virtual false, abstract: false, final false
static inline void SplitByAngleBurst(::UnityEngine::Mesh*  mesh, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshExtensions(MeshExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshExtensions(MeshExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MeshExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
