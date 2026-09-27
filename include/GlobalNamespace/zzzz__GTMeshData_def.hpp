#pragma once
// IWYU pragma private; include "GlobalNamespace/GTMeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTMeshData)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class GTMeshData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTMeshData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTMeshData*, "", "GTMeshData");
// Dependencies System.Object, UnityEngine.BoneWeight, UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTMeshData
class CORDL_TYPE GTMeshData : public ::System::Object {
public:
// Declarations
/// @brief Field boneWeights, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneWeights, put=__cordl_internal_set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  boneWeights;

/// @brief Field colors32, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors32, put=__cordl_internal_set_colors32)) ::ArrayW<::UnityEngine::Color32>  colors32;

/// @brief Field mesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field normals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field subMeshCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_subMeshCount, put=__cordl_internal_set_subMeshCount)) int32_t  subMeshCount;

/// @brief Field tangents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tangents, put=__cordl_internal_set_tangents)) ::ArrayW<::UnityEngine::Vector4>  tangents;

/// @brief Field triangles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_triangles, put=__cordl_internal_set_triangles)) ::ArrayW<int32_t>  triangles;

/// @brief Field uv, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv, put=__cordl_internal_set_uv)) ::ArrayW<::UnityEngine::Vector2>  uv;

/// @brief Field uv2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv2, put=__cordl_internal_set_uv2)) ::ArrayW<::UnityEngine::Vector2>  uv2;

/// @brief Field uv3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv3, put=__cordl_internal_set_uv3)) ::ArrayW<::UnityEngine::Vector2>  uv3;

/// @brief Field uv4, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv4, put=__cordl_internal_set_uv4)) ::ArrayW<::UnityEngine::Vector2>  uv4;

/// @brief Field uv5, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv5, put=__cordl_internal_set_uv5)) ::ArrayW<::UnityEngine::Vector2>  uv5;

/// @brief Field uv6, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv6, put=__cordl_internal_set_uv6)) ::ArrayW<::UnityEngine::Vector2>  uv6;

/// @brief Field uv7, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv7, put=__cordl_internal_set_uv7)) ::ArrayW<::UnityEngine::Vector2>  uv7;

/// @brief Field uv8, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv8, put=__cordl_internal_set_uv8)) ::ArrayW<::UnityEngine::Vector2>  uv8;

/// @brief Field vertices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Method ExtractSubmesh, addr 0x5b3b024, size 0x338, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> ExtractSubmesh(int32_t  subMeshIndex, bool  optimize) ;

static inline ::GlobalNamespace::GTMeshData* New_ctor(::UnityEngine::Mesh*  m) ;

/// @brief Method Parse, addr 0x5b3b35c, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTMeshData* Parse(::UnityEngine::Mesh*  mesh) ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get_boneWeights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get_boneWeights() ;

constexpr ::ArrayW<::UnityEngine::Color32> const& __cordl_internal_get_colors32() const;

constexpr ::ArrayW<::UnityEngine::Color32>& __cordl_internal_get_colors32() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr int32_t const& __cordl_internal_get_subMeshCount() const;

constexpr int32_t& __cordl_internal_get_subMeshCount() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_tangents() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_tangents() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_triangles() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_triangles() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv2() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv2() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv3() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv3() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv4() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv4() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv5() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv5() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv6() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv6() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv7() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv7() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv8() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv8() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

constexpr void __cordl_internal_set_colors32(::ArrayW<::UnityEngine::Color32>  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_subMeshCount(int32_t  value) ;

constexpr void __cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_triangles(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_uv(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv2(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv3(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv4(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv5(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv6(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv7(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_uv8(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5b3ae54, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  m) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTMeshData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTMeshData(GTMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTMeshData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTMeshData(GTMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3695};

/// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertices;

/// @brief Field normals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___normals;

/// @brief Field tangents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___tangents;

/// @brief Field colors32, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32>  ___colors32;

/// @brief Field triangles, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___triangles;

/// @brief Field boneWeights, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ___boneWeights;

/// @brief Field uv, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv;

/// @brief Field uv2, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv2;

/// @brief Field uv3, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv3;

/// @brief Field uv4, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv4;

/// @brief Field uv5, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv5;

/// @brief Field uv6, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv6;

/// @brief Field uv7, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv7;

/// @brief Field uv8, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv8;

/// @brief Field subMeshCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ___subMeshCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTMeshData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___normals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___tangents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___colors32) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___triangles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___boneWeights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___uv8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTMeshData, ___subMeshCount) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTMeshData) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
