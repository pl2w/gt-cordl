#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshAdd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NavmeshAdd_MeshType_def.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshAdd)
namespace GlobalNamespace {
struct NavmeshAdd_MeshType;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding {
struct Int3;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshAdd;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshAdd*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshAdd*, "Pathfinding", "NavmeshAdd");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_navmesh_add.php")]
// Dependencies Pathfinding.NavmeshAdd::MeshType, Pathfinding.NavmeshClipper, UnityEngine.Color, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshAdd
class CORDL_TYPE NavmeshAdd : public ::Pathfinding::NavmeshClipper {
public:
// Declarations
using MeshType = ::GlobalNamespace::NavmeshAdd_MeshType;

 __declspec(property(get=get_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmoColor, put=setStaticF_GizmoColor)) ::UnityEngine::Color  GizmoColor;

/// @brief Field center, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field lastPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastRotation, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRotation, put=__cordl_internal_set_lastRotation)) ::UnityEngine::Quaternion  lastRotation;

/// @brief Field mesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field meshScale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_meshScale, put=__cordl_internal_set_meshScale)) float_t  meshScale;

/// @brief Field rectangleSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectangleSize, put=__cordl_internal_set_rectangleSize)) ::UnityEngine::Vector2  rectangleSize;

/// @brief Field tr, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field tris, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tris, put=__cordl_internal_set_tris)) ::ArrayW<int32_t>  tris;

/// @brief Field type, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::NavmeshAdd_MeshType  type;

/// @brief Field updateDistance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateDistance, put=__cordl_internal_set_updateDistance)) float_t  updateDistance;

/// @brief Field updateRotationDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateRotationDistance, put=__cordl_internal_set_updateRotationDistance)) float_t  updateRotationDistance;

/// @brief Field useRotationAndScale, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRotationAndScale, put=__cordl_internal_set_useRotationAndScale)) bool  useRotationAndScale;

/// @brief Field verts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::UnityEngine::Vector3>  verts;

/// @brief Method Awake, addr 0x5ea6960, size 0x2c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ForceUpdate, addr 0x5ea694c, size 0x14, virtual true, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method GetBounds, addr 0x5ea6d60, size 0x248, virtual true, abstract: false, final false
inline ::UnityEngine::Rect GetBounds(::Pathfinding::Util::GraphTransform*  inverseTransform) ;

/// @brief Method GetMesh, addr 0x5ea6fa8, size 0x3a4, virtual false, abstract: false, final false
inline void GetMesh(::by_ref<::ArrayW<::Pathfinding::Int3>>  vbuffer, ::by_ref<::ArrayW<int32_t>>  tbuffer, ::Pathfinding::Util::GraphTransform*  inverseTransform) ;

static inline ::Pathfinding::NavmeshAdd* New_ctor() ;

/// @brief Method NotifyUpdated, addr 0x5ea6a04, size 0x4c, virtual true, abstract: false, final false
inline void NotifyUpdated() ;

/// [ContextMenu("Rebuild Mesh")]
/// @brief Method RebuildMesh, addr 0x5ea6ac8, size 0x298, virtual false, abstract: false, final false
inline void RebuildMesh() ;

/// @brief Method RequiresUpdate, addr 0x5ea6854, size 0xf8, virtual true, abstract: false, final false
inline bool RequiresUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRotation() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr float_t const& __cordl_internal_get_meshScale() const;

constexpr float_t& __cordl_internal_get_meshScale() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rectangleSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rectangleSize() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tris() ;

constexpr ::GlobalNamespace::NavmeshAdd_MeshType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::NavmeshAdd_MeshType& __cordl_internal_get_type() ;

constexpr float_t const& __cordl_internal_get_updateDistance() const;

constexpr float_t& __cordl_internal_get_updateDistance() ;

constexpr float_t const& __cordl_internal_get_updateRotationDistance() const;

constexpr float_t& __cordl_internal_get_updateRotationDistance() ;

constexpr bool const& __cordl_internal_get_useRotationAndScale() const;

constexpr bool& __cordl_internal_get_useRotationAndScale() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_verts() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_meshScale(float_t  value) ;

constexpr void __cordl_internal_set_rectangleSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::NavmeshAdd_MeshType  value) ;

constexpr void __cordl_internal_set_updateDistance(float_t  value) ;

constexpr void __cordl_internal_set_updateRotationDistance(float_t  value) ;

constexpr void __cordl_internal_set_useRotationAndScale(bool  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5ea734c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_GizmoColor() ;

/// @brief Method get_Center, addr 0x5ea6a50, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Center() ;

static inline void setStaticF_GizmoColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshAdd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshAdd", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshAdd(NavmeshAdd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshAdd", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshAdd(NavmeshAdd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21377};

/// @brief Field type, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::NavmeshAdd_MeshType  ___type;

/// @brief Field mesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field verts, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___verts;

/// @brief Field tris, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tris;

/// @brief Field rectangleSize, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rectangleSize;

/// @brief Field meshScale, offset: 0x50, size: 0x4, def value: None
 float_t  ___meshScale;

/// @brief Field center, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// [FormerlySerializedAs("useRotation")]
/// @brief Field useRotationAndScale, offset: 0x60, size: 0x1, def value: None
 bool  ___useRotationAndScale;

/// [Tooltip("Distance between positions to require an update of the navmesh\nA smaller distance gives better accuracy, but requires more updates when moving the object over time, so it is often slower.")]
/// @brief Field updateDistance, offset: 0x64, size: 0x4, def value: None
 float_t  ___updateDistance;

/// [Tooltip("How many degrees rotation that is required for an update to the navmesh. Should be between 0 and 180.")]
/// @brief Field updateRotationDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ___updateRotationDistance;

/// @brief Field tr, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field lastPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field lastRotation, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshAdd, ___type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___verts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___tris) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___rectangleSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___meshScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___center) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___useRotationAndScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___updateDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___updateRotationDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___tr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___lastPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshAdd, ___lastRotation) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshAdd) == 0x98, "Size mismatch!");

} // namespace end def Pathfinding
