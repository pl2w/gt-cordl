#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshCut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NavmeshClipper_def.hpp"
#include "Pathfinding/zzzz__NavmeshCut_MeshType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshCut)
namespace GlobalNamespace {
struct NavmeshCut_MeshType;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding {
struct Int2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class NavmeshCut;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshCut*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshCut*, "Pathfinding", "NavmeshCut");
// [AddComponentMenu("Pathfinding/Navmesh/Navmesh Cut")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_navmesh_cut.php")]
// Dependencies Pathfinding.NavmeshClipper, Pathfinding.NavmeshCut::MeshType, UnityEngine.Color, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshCut
class CORDL_TYPE NavmeshCut : public ::Pathfinding::NavmeshClipper {
public:
// Declarations
using MeshType = ::GlobalNamespace::NavmeshCut_MeshType;

/// @brief Field GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmoColor, put=setStaticF_GizmoColor)) ::UnityEngine::Color  GizmoColor;

/// @brief Field center, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field circleRadius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_circleRadius, put=__cordl_internal_set_circleRadius)) float_t  circleRadius;

/// @brief Field circleResolution, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_circleResolution, put=__cordl_internal_set_circleResolution)) int32_t  circleResolution;

/// @brief Field contours, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_contours, put=__cordl_internal_set_contours)) ::ArrayW<::ArrayW<::UnityEngine::Vector3>>  contours;

/// @brief Field cutsAddedGeom, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_cutsAddedGeom, put=__cordl_internal_set_cutsAddedGeom)) bool  cutsAddedGeom;

/// @brief Field edges, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_edges, put=setStaticF_edges)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  edges;

/// @brief Field height, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field isDual, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDual, put=__cordl_internal_set_isDual)) bool  isDual;

/// @brief Field lastMesh, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastMesh, put=__cordl_internal_set_lastMesh)) ::UnityW<::UnityEngine::Mesh>  lastMesh;

/// @brief Field lastPosition, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastRotation, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRotation, put=__cordl_internal_set_lastRotation)) ::UnityEngine::Quaternion  lastRotation;

/// @brief Field mesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field meshScale, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_meshScale, put=__cordl_internal_set_meshScale)) float_t  meshScale;

/// @brief Field pointers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pointers, put=setStaticF_pointers)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pointers;

/// @brief Field rectangleSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectangleSize, put=__cordl_internal_set_rectangleSize)) ::UnityEngine::Vector2  rectangleSize;

/// @brief Field tr, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field type, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::NavmeshCut_MeshType  type;

/// @brief Field updateDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateDistance, put=__cordl_internal_set_updateDistance)) float_t  updateDistance;

/// @brief Field updateRotationDistance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateRotationDistance, put=__cordl_internal_set_updateRotationDistance)) float_t  updateRotationDistance;

/// @brief Field useRotationAndScale, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRotationAndScale, put=__cordl_internal_set_useRotationAndScale)) bool  useRotationAndScale;

/// @brief Method Awake, addr 0x5ea7b20, size 0x2c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateMeshContour, addr 0x5ea7ce8, size 0x7e4, virtual false, abstract: false, final false
inline void CalculateMeshContour() ;

/// @brief Method ForceUpdate, addr 0x5ea7b8c, size 0x14, virtual true, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method GetBounds, addr 0x5ea84cc, size 0x2a0, virtual true, abstract: false, final false
inline ::UnityEngine::Rect GetBounds(::Pathfinding::Util::GraphTransform*  inverseTransform) ;

/// @brief Method GetContour, addr 0x5ea876c, size 0x698, virtual false, abstract: false, final false
inline void GetContour(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*  buffer) ;

/// @brief Method GetY, addr 0x5ea9240, size 0x7c, virtual false, abstract: false, final false
inline float_t GetY(::Pathfinding::Util::GraphTransform*  transform) ;

static inline ::Pathfinding::NavmeshCut* New_ctor() ;

/// @brief Method NotifyUpdated, addr 0x5ea7c9c, size 0x4c, virtual true, abstract: false, final false
inline void NotifyUpdated() ;

/// @brief Method OnDrawGizmos, addr 0x5ea8fe0, size 0x260, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5ea92bc, size 0x4b4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5ea7b4c, size 0x40, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RequiresUpdate, addr 0x5ea7ba0, size 0xf8, virtual true, abstract: false, final false
inline bool RequiresUpdate() ;

/// @brief Method TransformBuffer, addr 0x5ea8e04, size 0x1dc, virtual false, abstract: false, final false
inline void TransformBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, bool  reverse) ;

/// @brief Method UsedForCut, addr 0x5ea7c98, size 0x4, virtual true, abstract: false, final false
inline void UsedForCut() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr float_t const& __cordl_internal_get_circleRadius() const;

constexpr float_t& __cordl_internal_get_circleRadius() ;

constexpr int32_t const& __cordl_internal_get_circleResolution() const;

constexpr int32_t& __cordl_internal_get_circleResolution() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector3>> const& __cordl_internal_get_contours() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector3>>& __cordl_internal_get_contours() ;

constexpr bool const& __cordl_internal_get_cutsAddedGeom() const;

constexpr bool& __cordl_internal_get_cutsAddedGeom() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr bool const& __cordl_internal_get_isDual() const;

constexpr bool& __cordl_internal_get_isDual() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_lastMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_lastMesh() ;

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

constexpr ::GlobalNamespace::NavmeshCut_MeshType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::NavmeshCut_MeshType& __cordl_internal_get_type() ;

constexpr float_t const& __cordl_internal_get_updateDistance() const;

constexpr float_t& __cordl_internal_get_updateDistance() ;

constexpr float_t const& __cordl_internal_get_updateRotationDistance() const;

constexpr float_t& __cordl_internal_get_updateRotationDistance() ;

constexpr bool const& __cordl_internal_get_useRotationAndScale() const;

constexpr bool& __cordl_internal_get_useRotationAndScale() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_circleRadius(float_t  value) ;

constexpr void __cordl_internal_set_circleResolution(int32_t  value) ;

constexpr void __cordl_internal_set_contours(::ArrayW<::ArrayW<::UnityEngine::Vector3>>  value) ;

constexpr void __cordl_internal_set_cutsAddedGeom(bool  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_isDual(bool  value) ;

constexpr void __cordl_internal_set_lastMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_meshScale(float_t  value) ;

constexpr void __cordl_internal_set_rectangleSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::NavmeshCut_MeshType  value) ;

constexpr void __cordl_internal_set_updateDistance(float_t  value) ;

constexpr void __cordl_internal_set_updateRotationDistance(float_t  value) ;

constexpr void __cordl_internal_set_useRotationAndScale(bool  value) ;

/// @brief Method .ctor, addr 0x5ea9770, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_GizmoColor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>* getStaticF_edges() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_pointers() ;

static inline void setStaticF_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_edges(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  value) ;

static inline void setStaticF_pointers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshCut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshCut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshCut(NavmeshCut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshCut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshCut(NavmeshCut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21380};

/// [Tooltip("Shape of the cut")]
/// @brief Field type, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::NavmeshCut_MeshType  ___type;

/// [Tooltip("The contour(s) of the mesh will be extracted. This mesh should only be a 2D surface, not a volume (see documentation).")]
/// @brief Field mesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field rectangleSize, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rectangleSize;

/// @brief Field circleRadius, offset: 0x40, size: 0x4, def value: None
 float_t  ___circleRadius;

/// @brief Field circleResolution, offset: 0x44, size: 0x4, def value: None
 int32_t  ___circleResolution;

/// @brief Field height, offset: 0x48, size: 0x4, def value: None
 float_t  ___height;

/// [Tooltip("Scale of the custom mesh")]
/// @brief Field meshScale, offset: 0x4c, size: 0x4, def value: None
 float_t  ___meshScale;

/// @brief Field center, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// [Tooltip("Distance between positions to require an update of the navmesh\nA smaller distance gives better accuracy, but requires more updates when moving the object over time, so it is often slower.")]
/// @brief Field updateDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___updateDistance;

/// [Tooltip("Only makes a split in the navmesh, but does not remove the geometry to make a hole")]
/// @brief Field isDual, offset: 0x60, size: 0x1, def value: None
 bool  ___isDual;

/// @brief Field cutsAddedGeom, offset: 0x61, size: 0x1, def value: None
 bool  ___cutsAddedGeom;

/// [Tooltip("How many degrees rotation that is required for an update to the navmesh. Should be between 0 and 180.")]
/// @brief Field updateRotationDistance, offset: 0x64, size: 0x4, def value: None
 float_t  ___updateRotationDistance;

/// [Tooltip("Includes rotation in calculations. This is slower since a lot more matrix multiplications are needed but gives more flexibility.")]
/// [FormerlySerializedAs("useRotation")]
/// @brief Field useRotationAndScale, offset: 0x68, size: 0x1, def value: None
 bool  ___useRotationAndScale;

/// @brief Field contours, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Vector3>>  ___contours;

/// @brief Field tr, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field lastMesh, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___lastMesh;

/// @brief Field lastPosition, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field lastRotation, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshCut, ___type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___rectangleSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___circleRadius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___circleResolution) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___height) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___meshScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___center) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___updateDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___isDual) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___cutsAddedGeom) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___updateRotationDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___useRotationAndScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___contours) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___tr) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___lastMesh) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___lastPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshCut, ___lastRotation) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshCut) == 0xa8, "Size mismatch!");

} // namespace end def Pathfinding
