#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Face.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Face)
namespace Technie::PhysicsCreator::QHull {
class FaceList;
}
namespace Technie::PhysicsCreator::QHull {
class HalfEdge;
}
namespace Technie::PhysicsCreator::QHull {
class Point3d;
}
namespace Technie::PhysicsCreator::QHull {
class Vector3d;
}
namespace Technie::PhysicsCreator::QHull {
class Vertex;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class Face;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::Face*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::Face*, "Technie.PhysicsCreator.QHull", "Face");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.Face
class CORDL_TYPE Face : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) double_t  area;

/// @brief Field centroid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_centroid, put=__cordl_internal_set_centroid)) ::Technie::PhysicsCreator::QHull::Point3d*  centroid;

/// @brief Field he0, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_he0, put=__cordl_internal_set_he0)) ::Technie::PhysicsCreator::QHull::HalfEdge*  he0;

/// @brief Field index, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field mark, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_mark, put=__cordl_internal_set_mark)) int32_t  mark;

/// @brief Field next, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Technie::PhysicsCreator::QHull::Face*  next;

/// @brief Field normal, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_normal, put=__cordl_internal_set_normal)) ::Technie::PhysicsCreator::QHull::Vector3d*  normal;

/// @brief Field numVerts, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVerts, put=__cordl_internal_set_numVerts)) int32_t  numVerts;

/// @brief Field outside, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_outside, put=__cordl_internal_set_outside)) ::Technie::PhysicsCreator::QHull::Vertex*  outside;

/// @brief Field planeOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_planeOffset, put=__cordl_internal_set_planeOffset)) double_t  planeOffset;

static inline ::Technie::PhysicsCreator::QHull::Face* New_ctor() ;

constexpr double_t const& __cordl_internal_get_area() const;

constexpr double_t& __cordl_internal_get_area() ;

constexpr ::Technie::PhysicsCreator::QHull::Point3d* const& __cordl_internal_get_centroid() const;

constexpr ::Technie::PhysicsCreator::QHull::Point3d*& __cordl_internal_get_centroid() ;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& __cordl_internal_get_he0() const;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& __cordl_internal_get_he0() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_mark() const;

constexpr int32_t& __cordl_internal_get_mark() ;

constexpr ::Technie::PhysicsCreator::QHull::Face* const& __cordl_internal_get_next() const;

constexpr ::Technie::PhysicsCreator::QHull::Face*& __cordl_internal_get_next() ;

constexpr ::Technie::PhysicsCreator::QHull::Vector3d* const& __cordl_internal_get_normal() const;

constexpr ::Technie::PhysicsCreator::QHull::Vector3d*& __cordl_internal_get_normal() ;

constexpr int32_t const& __cordl_internal_get_numVerts() const;

constexpr int32_t& __cordl_internal_get_numVerts() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_outside() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_outside() ;

constexpr double_t const& __cordl_internal_get_planeOffset() const;

constexpr double_t& __cordl_internal_get_planeOffset() ;

constexpr void __cordl_internal_set_area(double_t  value) ;

constexpr void __cordl_internal_set_centroid(::Technie::PhysicsCreator::QHull::Point3d*  value) ;

constexpr void __cordl_internal_set_he0(::Technie::PhysicsCreator::QHull::HalfEdge*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_mark(int32_t  value) ;

constexpr void __cordl_internal_set_next(::Technie::PhysicsCreator::QHull::Face*  value) ;

constexpr void __cordl_internal_set_normal(::Technie::PhysicsCreator::QHull::Vector3d*  value) ;

constexpr void __cordl_internal_set_numVerts(int32_t  value) ;

constexpr void __cordl_internal_set_outside(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

constexpr void __cordl_internal_set_planeOffset(double_t  value) ;

/// @brief Method .ctor, addr 0xaddcc70, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method areaSquared, addr 0xaddda1c, size 0xc8, virtual false, abstract: false, final false
inline double_t areaSquared(::Technie::PhysicsCreator::QHull::HalfEdge*  hedge0, ::Technie::PhysicsCreator::QHull::HalfEdge*  hedge1) ;

/// @brief Method checkConsistency, addr 0xaddd1f8, size 0x53c, virtual false, abstract: false, final false
inline void checkConsistency() ;

/// @brief Method computeCentroid, addr 0xaddc310, size 0x80, virtual false, abstract: false, final false
inline void computeCentroid(::Technie::PhysicsCreator::QHull::Point3d*  centroid) ;

/// @brief Method computeNormal, addr 0xaddc540, size 0x148, virtual false, abstract: false, final false
inline void computeNormal(::Technie::PhysicsCreator::QHull::Vector3d*  normal) ;

/// @brief Method computeNormal, addr 0xaddc3e8, size 0x158, virtual false, abstract: false, final false
inline void computeNormal(::Technie::PhysicsCreator::QHull::Vector3d*  normal, double_t  minArea) ;

/// @brief Method computeNormalAndCentroid, addr 0xaddc820, size 0x194, virtual false, abstract: false, final false
inline void computeNormalAndCentroid() ;

/// @brief Method computeNormalAndCentroid, addr 0xaddcac8, size 0x3c, virtual false, abstract: false, final false
inline void computeNormalAndCentroid(double_t  minArea) ;

/// @brief Method connectHalfEdges, addr 0xaddd048, size 0x198, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Face* connectHalfEdges(::Technie::PhysicsCreator::QHull::HalfEdge*  hedgePrev, ::Technie::PhysicsCreator::QHull::HalfEdge*  hedge) ;

/// @brief Method create, addr 0xaddcd70, size 0x170, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::QHull::Face* create(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  vtxArray, ::ArrayW<int32_t>  indices) ;

/// @brief Method createTriangle, addr 0xaddcb04, size 0x8, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::QHull::Face* createTriangle(::Technie::PhysicsCreator::QHull::Vertex*  v0, ::Technie::PhysicsCreator::QHull::Vertex*  v1, ::Technie::PhysicsCreator::QHull::Vertex*  v2) ;

/// @brief Method createTriangle, addr 0xaddcb0c, size 0x164, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::QHull::Face* createTriangle(::Technie::PhysicsCreator::QHull::Vertex*  v0, ::Technie::PhysicsCreator::QHull::Vertex*  v1, ::Technie::PhysicsCreator::QHull::Vertex*  v2, double_t  minArea) ;

/// @brief Method distanceToPlane, addr 0xaddcf90, size 0x48, virtual false, abstract: false, final false
inline double_t distanceToPlane(::Technie::PhysicsCreator::QHull::Point3d*  p) ;

/// @brief Method findEdge, addr 0xaddcf44, size 0x4c, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* findEdge(::Technie::PhysicsCreator::QHull::Vertex*  vt, ::Technie::PhysicsCreator::QHull::Vertex*  vh) ;

/// @brief Method getCentroid, addr 0xaddcfe0, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Point3d* getCentroid() ;

/// @brief Method getEdge, addr 0xaddcef0, size 0x4c, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* getEdge(int32_t  i) ;

/// @brief Method getFirstEdge, addr 0xaddcf3c, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* getFirstEdge() ;

/// @brief Method getNormal, addr 0xaddcfd8, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vector3d* getNormal() ;

/// @brief Method getVertexIndices, addr 0xaddcff0, size 0x58, virtual false, abstract: false, final false
inline void getVertexIndices(::ArrayW<int32_t>  idxs) ;

/// @brief Method getVertexString, addr 0xaddc9e8, size 0xd8, virtual false, abstract: false, final false
inline ::StringW getVertexString() ;

/// @brief Method mergeAdjacentFace, addr 0xaddd800, size 0x21c, virtual false, abstract: false, final false
inline int32_t mergeAdjacentFace(::Technie::PhysicsCreator::QHull::HalfEdge*  hedgeAdj, ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  discarded) ;

/// @brief Method numVertices, addr 0xaddcfe8, size 0x8, virtual false, abstract: false, final false
inline int32_t numVertices() ;

/// @brief Method triangulate, addr 0xadddae4, size 0x1d0, virtual false, abstract: false, final false
inline void triangulate(::Technie::PhysicsCreator::QHull::FaceList*  newFaces, double_t  minArea) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Face() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Face(Face && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Face", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Face(Face const& ) = delete;

/// @brief Field DELETED offset 0xffffffff size 0x4
static constexpr int32_t  DELETED{static_cast<int32_t>(0x3)};

/// @brief Field NON_CONVEX offset 0xffffffff size 0x4
static constexpr int32_t  NON_CONVEX{static_cast<int32_t>(0x2)};

/// @brief Field VISIBLE offset 0xffffffff size 0x4
static constexpr int32_t  VISIBLE{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30536};

/// @brief Field he0, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::HalfEdge*  ___he0;

/// @brief Field normal, offset: 0x18, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vector3d*  ___normal;

/// @brief Field area, offset: 0x20, size: 0x8, def value: None
 double_t  ___area;

/// @brief Field centroid, offset: 0x28, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Point3d*  ___centroid;

/// @brief Field planeOffset, offset: 0x30, size: 0x8, def value: None
 double_t  ___planeOffset;

/// @brief Field index, offset: 0x38, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field numVerts, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___numVerts;

/// @brief Field next, offset: 0x40, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Face*  ___next;

/// @brief Field mark, offset: 0x48, size: 0x4, def value: None
 int32_t  ___mark;

/// @brief Field outside, offset: 0x50, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___outside;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___he0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___area) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___centroid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___planeOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___index) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___numVerts) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___next) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___mark) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Face, ___outside) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::Face) == 0x58, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
