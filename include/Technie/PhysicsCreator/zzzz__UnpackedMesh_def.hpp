#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/UnpackedMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnpackedMesh)
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class UnpackedMesh;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::UnpackedMesh*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::UnpackedMesh*, "Technie.PhysicsCreator", "UnpackedMesh");
// Dependencies System.Object, UnityEngine.BoneWeight, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.UnpackedMesh
class CORDL_TYPE UnpackedMesh : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BoneWeights)) ::ArrayW<::UnityEngine::BoneWeight>  BoneWeights;

 __declspec(property(get=get_Indices)) ::ArrayW<int32_t>  Indices;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_ModelSpaceTransform)) ::UnityW<::UnityEngine::Transform>  ModelSpaceTransform;

 __declspec(property(get=get_ModelSpaceVertices)) ::ArrayW<::UnityEngine::Vector3>  ModelSpaceVertices;

 __declspec(property(get=get_NumVertices)) int32_t  NumVertices;

 __declspec(property(get=get_RawVertices)) ::ArrayW<::UnityEngine::Vector3>  RawVertices;

 __declspec(property(get=get_SkinnedRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  SkinnedRenderer;

/// @brief Field indices, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_indices, put=__cordl_internal_set_indices)) ::ArrayW<int32_t>  indices;

/// @brief Field modelSpaceVertices, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_modelSpaceVertices, put=__cordl_internal_set_modelSpaceVertices)) ::ArrayW<::UnityEngine::Vector3>  modelSpaceVertices;

/// @brief Field normals, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field rigidRenderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidRenderer, put=__cordl_internal_set_rigidRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  rigidRenderer;

/// @brief Field skinnedRenderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedRenderer, put=__cordl_internal_set_skinnedRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedRenderer;

/// @brief Field srcMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcMesh, put=__cordl_internal_set_srcMesh)) ::UnityW<::UnityEngine::Mesh>  srcMesh;

/// @brief Field vertices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Field weights, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_weights, put=__cordl_internal_set_weights)) ::ArrayW<::UnityEngine::BoneWeight>  weights;

/// @brief Method ApplyBindPoseWeighted, addr 0xadd6a0c, size 0x334, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ApplyBindPoseWeighted(::UnityEngine::Vector3  inputVertex, ::UnityEngine::BoneWeight  weight, ::ArrayW<::UnityEngine::Matrix4x4>  bindPoses, ::ArrayW<::UnityEngine::Transform*>  bones, ::UnityEngine::Transform*  outputLocalSpace) ;

/// @brief Method Create, addr 0xadd64b4, size 0x16c, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::UnpackedMesh* Create(::UnityEngine::Renderer*  renderer) ;

static inline ::Technie::PhysicsCreator::UnpackedMesh* New_ctor(::UnityEngine::MeshRenderer*  rigidRenderer) ;

static inline ::Technie::PhysicsCreator::UnpackedMesh* New_ctor(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_indices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_indices() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_modelSpaceVertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_modelSpaceVertices() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_normals() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_rigidRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_rigidRenderer() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedRenderer() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_srcMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_srcMesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertices() ;

constexpr ::ArrayW<::UnityEngine::BoneWeight> const& __cordl_internal_get_weights() const;

constexpr ::ArrayW<::UnityEngine::BoneWeight>& __cordl_internal_get_weights() ;

constexpr void __cordl_internal_set_indices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_modelSpaceVertices(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_rigidRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_skinnedRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_srcMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_weights(::ArrayW<::UnityEngine::BoneWeight>  value) ;

/// @brief Method .ctor, addr 0xadd6864, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::MeshRenderer*  rigidRenderer) ;

/// @brief Method .ctor, addr 0xadd6620, size 0x244, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer) ;

/// @brief Method get_BoneWeights, addr 0xadd648c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::BoneWeight> get_BoneWeights() ;

/// @brief Method get_Indices, addr 0xadd64ac, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_Indices() ;

/// @brief Method get_Mesh, addr 0xadd63d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_ModelSpaceTransform, addr 0xadd63e0, size 0x9c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_ModelSpaceTransform() ;

/// @brief Method get_ModelSpaceVertices, addr 0xadd6484, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_ModelSpaceVertices() ;

/// @brief Method get_NumVertices, addr 0xadd6494, size 0x18, virtual false, abstract: false, final false
inline int32_t get_NumVertices() ;

/// @brief Method get_RawVertices, addr 0xadd647c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_RawVertices() ;

/// @brief Method get_SkinnedRenderer, addr 0xadd63d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_SkinnedRenderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnpackedMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnpackedMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnpackedMesh(UnpackedMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnpackedMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnpackedMesh(UnpackedMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30523};

/// @brief Field rigidRenderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___rigidRenderer;

/// @brief Field skinnedRenderer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedRenderer;

/// @brief Field srcMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___srcMesh;

/// @brief Field vertices, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertices;

/// @brief Field normals, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___normals;

/// @brief Field weights, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoneWeight>  ___weights;

/// @brief Field indices, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___indices;

/// @brief Field modelSpaceVertices, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___modelSpaceVertices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___rigidRenderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___skinnedRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___srcMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___vertices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___normals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___weights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___indices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::UnpackedMesh, ___modelSpaceVertices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::UnpackedMesh) == 0x50, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
