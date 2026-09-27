#pragma once
// IWYU pragma private; include "MathGeoLib/OrientedBoundingBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OrientedBoundingBox)
namespace MathGeoLib {
struct Line3;
}
namespace MathGeoLib {
struct Matrix3X4;
}
namespace MathGeoLib {
class OrientedBoundingBox_NativeMethods;
}
namespace MathGeoLib {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MathGeoLib {
class OrientedBoundingBox;
}
namespace MathGeoLib {
class OrientedBoundingBox_NativeMethods;
}
// Write type traits
MARK_REF_T(::MathGeoLib::OrientedBoundingBox*);
MARK_REF_T(::MathGeoLib::OrientedBoundingBox_NativeMethods*);
DEFINE_IL2CPP_CLASS(::MathGeoLib::OrientedBoundingBox*, "MathGeoLib", "OrientedBoundingBox");
DEFINE_IL2CPP_CLASS(::MathGeoLib::OrientedBoundingBox_NativeMethods*, "MathGeoLib", "OrientedBoundingBox/NativeMethods");
// [PublicAPI]
// Dependencies System.Object, UnityEngine.Vector3
namespace MathGeoLib {
// Is value type: false
// CS Name: MathGeoLib.OrientedBoundingBox
class CORDL_TYPE OrientedBoundingBox : public ::System::Object {
public:
// Declarations
using NativeMethods = ::MathGeoLib::OrientedBoundingBox_NativeMethods;

/// @brief Field Axis1, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_Axis1, put=__cordl_internal_set_Axis1)) ::UnityEngine::Vector3  Axis1;

/// @brief Field Axis2, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_Axis2, put=__cordl_internal_set_Axis2)) ::UnityEngine::Vector3  Axis2;

/// @brief Field Axis3, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_Axis3, put=__cordl_internal_set_Axis3)) ::UnityEngine::Vector3  Axis3;

/// @brief Field Center, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Extent, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Extent, put=__cordl_internal_set_Extent)) ::UnityEngine::Vector3  Extent;

/// @brief Method BruteEnclosing, addr 0x55e30ec, size 0x128, virtual false, abstract: false, final false
static inline ::MathGeoLib::OrientedBoundingBox* BruteEnclosing(::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method Contains, addr 0x55e32d0, size 0x4, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  point) ;

/// @brief Method CornerPoint, addr 0x55e3388, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CornerPoint(int32_t  index) ;

/// @brief Method Distance, addr 0x55e3840, size 0x4, virtual false, abstract: false, final false
inline float_t Distance(::UnityEngine::Vector3  point) ;

/// @brief Method Edge, addr 0x55e39c8, size 0x38, virtual false, abstract: false, final false
inline ::MathGeoLib::Line3 Edge(int32_t  index) ;

/// @brief Method Enclose, addr 0x55e3450, size 0x4, virtual false, abstract: false, final false
inline void Enclose(::UnityEngine::Vector3  point) ;

/// @brief Method FacePlane, addr 0x55e3c2c, size 0x28, virtual false, abstract: false, final false
inline ::MathGeoLib::Plane FacePlane(int32_t  index) ;

/// @brief Method FacePoint, addr 0x55e3500, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 FacePoint(int32_t  index, float_t  u, float_t  v) ;

/// @brief Method LocalToWorld, addr 0x55e3b64, size 0x3c, virtual false, abstract: false, final false
inline ::MathGeoLib::Matrix3X4 LocalToWorld() ;

/// @brief [PublicAPI]
static inline ::MathGeoLib::OrientedBoundingBox* New_ctor() ;

static inline ::MathGeoLib::OrientedBoundingBox* New_ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extent, ::UnityEngine::Vector3  axis1, ::UnityEngine::Vector3  axis2, ::UnityEngine::Vector3  axis3) ;

/// @brief Method OptimalEnclosing, addr 0x55e2f08, size 0x128, virtual false, abstract: false, final false
static inline ::MathGeoLib::OrientedBoundingBox* OptimalEnclosing(::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method PointInside, addr 0x55e35e0, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PointInside(float_t  x, float_t  y, float_t  z) ;

/// @brief Method PointOnEdge, addr 0x55e38f0, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PointOnEdge(int32_t  index, float_t  u) ;

/// @brief Method Scale, addr 0x55e36c0, size 0x4, virtual false, abstract: false, final false
inline void Scale(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  factor) ;

/// @brief Method ToString, addr 0x55e3cf0, size 0x1e4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Translate, addr 0x55e3790, size 0x4, virtual false, abstract: false, final false
inline void Translate(::UnityEngine::Vector3  offset) ;

/// @brief Method WorldToLocal, addr 0x55e3a9c, size 0x3c, virtual false, abstract: false, final false
inline ::MathGeoLib::Matrix3X4 WorldToLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Axis1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Axis1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Axis2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Axis2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Axis3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Axis3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Extent() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Extent() ;

constexpr void __cordl_internal_set_Axis1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Axis2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Axis3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Extent(::UnityEngine::Vector3  value) ;

/// [PublicAPI]
/// @brief Method .ctor, addr 0x55e2d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x55e2d30, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extent, ::UnityEngine::Vector3  axis1, ::UnityEngine::Vector3  axis2, ::UnityEngine::Vector3  axis3) ;

/// @brief Method get_NumEdges, addr 0x55e2dd0, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_NumEdges() ;

/// @brief Method get_NumFaces, addr 0x55e2e38, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_NumFaces() ;

/// @brief Method get_NumVertices, addr 0x55e2ea0, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_NumVertices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrientedBoundingBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrientedBoundingBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrientedBoundingBox(OrientedBoundingBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrientedBoundingBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrientedBoundingBox(OrientedBoundingBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32991};

/// @brief Field Center, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Field Extent, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Extent;

/// @brief Field Axis1, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Axis1;

/// @brief Field Axis2, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Axis2;

/// @brief Field Axis3, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Axis3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MathGeoLib::OrientedBoundingBox, ___Center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::OrientedBoundingBox, ___Extent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::OrientedBoundingBox, ___Axis1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::OrientedBoundingBox, ___Axis2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::OrientedBoundingBox, ___Axis3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MathGeoLib::OrientedBoundingBox) == 0x50, "Size mismatch!");

} // namespace end def MathGeoLib
// Dependencies System.Object
namespace MathGeoLib {
// Is value type: false
// CS Name: MathGeoLib.OrientedBoundingBox/NativeMethods
class CORDL_TYPE OrientedBoundingBox_NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method obb_brute_enclosing, addr 0x55e3214, size 0xbc, virtual false, abstract: false, final false
static inline void obb_brute_enclosing(::ArrayW<::UnityEngine::Vector3>  points, int32_t  numPoints, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  extent, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  axis) ;

/// @brief Method obb_contains, addr 0x55e32d4, size 0xb4, virtual false, abstract: false, final false
static inline bool obb_contains(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point) ;

/// @brief Method obb_corner_point, addr 0x55e33b4, size 0x9c, virtual false, abstract: false, final false
static inline void obb_corner_point(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::UnityEngine::Vector3>  point) ;

/// @brief Method obb_distance, addr 0x55e3844, size 0xac, virtual false, abstract: false, final false
static inline float_t obb_distance(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point) ;

/// @brief Method obb_edge, addr 0x55e3a00, size 0x9c, virtual false, abstract: false, final false
static inline void obb_edge(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::MathGeoLib::Line3>  segment) ;

/// @brief Method obb_enclose, addr 0x55e3454, size 0xac, virtual false, abstract: false, final false
static inline void obb_enclose(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point) ;

/// @brief Method obb_face_plane, addr 0x55e3c54, size 0x9c, virtual false, abstract: false, final false
static inline void obb_face_plane(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::MathGeoLib::Plane>  plane) ;

/// @brief Method obb_face_point, addr 0x55e352c, size 0xb4, virtual false, abstract: false, final false
static inline void obb_face_point(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, float_t  u, float_t  v, ::by_ref<::UnityEngine::Vector3>  point) ;

/// @brief Method obb_local_to_world, addr 0x55e3ba0, size 0x8c, virtual false, abstract: false, final false
static inline void obb_local_to_world(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::by_ref<::MathGeoLib::Matrix3X4>  world) ;

/// @brief Method obb_num_edges, addr 0x55e2dd4, size 0x64, virtual false, abstract: false, final false
static inline int32_t obb_num_edges() ;

/// @brief Method obb_num_faces, addr 0x55e2e3c, size 0x64, virtual false, abstract: false, final false
static inline int32_t obb_num_faces() ;

/// @brief Method obb_num_vertices, addr 0x55e2ea4, size 0x64, virtual false, abstract: false, final false
static inline int32_t obb_num_vertices() ;

/// @brief Method obb_optimal_enclosing, addr 0x55e3030, size 0xbc, virtual false, abstract: false, final false
static inline void obb_optimal_enclosing(::ArrayW<::UnityEngine::Vector3>  points, int32_t  numPoints, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  extent, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  axis) ;

/// @brief Method obb_point_inside, addr 0x55e360c, size 0xb4, virtual false, abstract: false, final false
static inline void obb_point_inside(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, float_t  x, float_t  y, float_t  z, ::by_ref<::UnityEngine::Vector3>  point) ;

/// @brief Method obb_point_on_edge, addr 0x55e391c, size 0xac, virtual false, abstract: false, final false
static inline void obb_point_on_edge(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, float_t  u, ::by_ref<::UnityEngine::Vector3>  point) ;

/// @brief Method obb_scale, addr 0x55e36c4, size 0xcc, virtual false, abstract: false, final false
static inline void obb_scale(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  factor) ;

/// @brief Method obb_translate, addr 0x55e3794, size 0xac, virtual false, abstract: false, final false
static inline void obb_translate(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  offset) ;

/// @brief Method obb_world_to_local, addr 0x55e3ad8, size 0x8c, virtual false, abstract: false, final false
static inline void obb_world_to_local(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::by_ref<::MathGeoLib::Matrix3X4>  local) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrientedBoundingBox_NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrientedBoundingBox_NativeMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrientedBoundingBox_NativeMethods(OrientedBoundingBox_NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrientedBoundingBox_NativeMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrientedBoundingBox_NativeMethods(OrientedBoundingBox_NativeMethods const& ) = delete;

/// @brief Field DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  DllName{u"MathGeoLib.Exports.dll"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MathGeoLib::OrientedBoundingBox_NativeMethods) == 0x10, "Size mismatch!");

} // namespace end def MathGeoLib
