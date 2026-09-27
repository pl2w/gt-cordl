#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/QuickHull3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QuickHull3D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::QHull {
class FaceList;
}
namespace Technie::PhysicsCreator::QHull {
class Face;
}
namespace Technie::PhysicsCreator::QHull {
class HalfEdge;
}
namespace Technie::PhysicsCreator::QHull {
class Point3d;
}
namespace Technie::PhysicsCreator::QHull {
class VertexList;
}
namespace Technie::PhysicsCreator::QHull {
class Vertex;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class QuickHull3D;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::QuickHull3D*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::QuickHull3D*, "Technie.PhysicsCreator.QHull", "QuickHull3D");
// Dependencies System.Object, Technie.PhysicsCreator.QHull.Face, Technie.PhysicsCreator.QHull.Vertex
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.QuickHull3D
class CORDL_TYPE QuickHull3D : public ::System::Object {
public:
// Declarations
/// @brief Field charLength, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_charLength, put=__cordl_internal_set_charLength)) double_t  charLength;

/// @brief Field claimed, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_claimed, put=__cordl_internal_set_claimed)) ::Technie::PhysicsCreator::QHull::VertexList*  claimed;

/// @brief Field debug, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug, put=__cordl_internal_set_debug)) bool  debug;

/// @brief Field discardedFaces, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_discardedFaces, put=__cordl_internal_set_discardedFaces)) ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  discardedFaces;

/// @brief Field explicitTolerance, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_explicitTolerance, put=__cordl_internal_set_explicitTolerance)) double_t  explicitTolerance;

/// @brief Field faces, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_faces, put=__cordl_internal_set_faces)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*  faces;

/// @brief Field findIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_findIndex, put=__cordl_internal_set_findIndex)) int32_t  findIndex;

/// @brief Field horizon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizon, put=__cordl_internal_set_horizon)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  horizon;

/// @brief Field maxVtxs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxVtxs, put=__cordl_internal_set_maxVtxs)) ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  maxVtxs;

/// @brief Field minVtxs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_minVtxs, put=__cordl_internal_set_minVtxs)) ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  minVtxs;

/// @brief Field newFaces, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_newFaces, put=__cordl_internal_set_newFaces)) ::Technie::PhysicsCreator::QHull::FaceList*  newFaces;

/// @brief Field numFaces, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numFaces, put=__cordl_internal_set_numFaces)) int32_t  numFaces;

/// @brief Field numPoints, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPoints, put=__cordl_internal_set_numPoints)) int32_t  numPoints;

/// @brief Field numVertices, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVertices, put=__cordl_internal_set_numVertices)) int32_t  numVertices;

/// @brief Field pointBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointBuffer, put=__cordl_internal_set_pointBuffer)) ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  pointBuffer;

/// @brief Field tolerance, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tolerance, put=__cordl_internal_set_tolerance)) double_t  tolerance;

/// @brief Field unclaimed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_unclaimed, put=__cordl_internal_set_unclaimed)) ::Technie::PhysicsCreator::QHull::VertexList*  unclaimed;

/// @brief Field vertexPointIndices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertexPointIndices, put=__cordl_internal_set_vertexPointIndices)) ::ArrayW<int32_t>  vertexPointIndices;

static inline ::Technie::PhysicsCreator::QHull::QuickHull3D* New_ctor() ;

static inline ::Technie::PhysicsCreator::QHull::QuickHull3D* New_ctor(::ArrayW<double_t>  coords) ;

static inline ::Technie::PhysicsCreator::QHull::QuickHull3D* New_ctor(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points) ;

constexpr double_t const& __cordl_internal_get_charLength() const;

constexpr double_t& __cordl_internal_get_charLength() ;

constexpr ::Technie::PhysicsCreator::QHull::VertexList* const& __cordl_internal_get_claimed() const;

constexpr ::Technie::PhysicsCreator::QHull::VertexList*& __cordl_internal_get_claimed() ;

constexpr bool const& __cordl_internal_get_debug() const;

constexpr bool& __cordl_internal_get_debug() ;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Face*> const& __cordl_internal_get_discardedFaces() const;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>& __cordl_internal_get_discardedFaces() ;

constexpr double_t const& __cordl_internal_get_explicitTolerance() const;

constexpr double_t& __cordl_internal_get_explicitTolerance() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>* const& __cordl_internal_get_faces() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*& __cordl_internal_get_faces() ;

constexpr int32_t const& __cordl_internal_get_findIndex() const;

constexpr int32_t& __cordl_internal_get_findIndex() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>* const& __cordl_internal_get_horizon() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*& __cordl_internal_get_horizon() ;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& __cordl_internal_get_maxVtxs() const;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& __cordl_internal_get_maxVtxs() ;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& __cordl_internal_get_minVtxs() const;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& __cordl_internal_get_minVtxs() ;

constexpr ::Technie::PhysicsCreator::QHull::FaceList* const& __cordl_internal_get_newFaces() const;

constexpr ::Technie::PhysicsCreator::QHull::FaceList*& __cordl_internal_get_newFaces() ;

constexpr int32_t const& __cordl_internal_get_numFaces() const;

constexpr int32_t& __cordl_internal_get_numFaces() ;

constexpr int32_t const& __cordl_internal_get_numPoints() const;

constexpr int32_t& __cordl_internal_get_numPoints() ;

constexpr int32_t const& __cordl_internal_get_numVertices() const;

constexpr int32_t& __cordl_internal_get_numVertices() ;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& __cordl_internal_get_pointBuffer() const;

constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& __cordl_internal_get_pointBuffer() ;

constexpr double_t const& __cordl_internal_get_tolerance() const;

constexpr double_t& __cordl_internal_get_tolerance() ;

constexpr ::Technie::PhysicsCreator::QHull::VertexList* const& __cordl_internal_get_unclaimed() const;

constexpr ::Technie::PhysicsCreator::QHull::VertexList*& __cordl_internal_get_unclaimed() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_vertexPointIndices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_vertexPointIndices() ;

constexpr void __cordl_internal_set_charLength(double_t  value) ;

constexpr void __cordl_internal_set_claimed(::Technie::PhysicsCreator::QHull::VertexList*  value) ;

constexpr void __cordl_internal_set_debug(bool  value) ;

constexpr void __cordl_internal_set_discardedFaces(::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  value) ;

constexpr void __cordl_internal_set_explicitTolerance(double_t  value) ;

constexpr void __cordl_internal_set_faces(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*  value) ;

constexpr void __cordl_internal_set_findIndex(int32_t  value) ;

constexpr void __cordl_internal_set_horizon(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  value) ;

constexpr void __cordl_internal_set_maxVtxs(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value) ;

constexpr void __cordl_internal_set_minVtxs(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value) ;

constexpr void __cordl_internal_set_newFaces(::Technie::PhysicsCreator::QHull::FaceList*  value) ;

constexpr void __cordl_internal_set_numFaces(int32_t  value) ;

constexpr void __cordl_internal_set_numPoints(int32_t  value) ;

constexpr void __cordl_internal_set_numVertices(int32_t  value) ;

constexpr void __cordl_internal_set_pointBuffer(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value) ;

constexpr void __cordl_internal_set_tolerance(double_t  value) ;

constexpr void __cordl_internal_set_unclaimed(::Technie::PhysicsCreator::QHull::VertexList*  value) ;

constexpr void __cordl_internal_set_vertexPointIndices(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0xadde2c0, size 0x260, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xadde528, size 0x294, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<double_t>  coords) ;

/// @brief Method .ctor, addr 0xadde894, size 0x27c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points) ;

/// @brief Method addAdjoiningFace, addr 0xade115c, size 0x104, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* addAdjoiningFace(::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx, ::Technie::PhysicsCreator::QHull::HalfEdge*  he) ;

/// @brief Method addNewFaces, addr 0xade1260, size 0x200, virtual false, abstract: false, final false
inline void addNewFaces(::Technie::PhysicsCreator::QHull::FaceList*  newFaces, ::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  horizon) ;

/// @brief Method addPointToFace, addr 0xadddfb8, size 0x70, virtual false, abstract: false, final false
inline void addPointToFace(::Technie::PhysicsCreator::QHull::Vertex*  vtx, ::Technie::PhysicsCreator::QHull::Face*  face) ;

/// @brief Method addPointToHull, addr 0xade14f0, size 0x178, virtual false, abstract: false, final false
inline void addPointToHull(::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx) ;

/// @brief Method build, addr 0xaddf5f8, size 0x2c, virtual false, abstract: false, final false
inline void build(::ArrayW<double_t>  coords) ;

/// @brief Method build, addr 0xadde7bc, size 0xd8, virtual false, abstract: false, final false
inline void build(::ArrayW<double_t>  coords, int32_t  nump) ;

/// @brief Method build, addr 0xaddf66c, size 0x14, virtual false, abstract: false, final false
inline void build(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points) ;

/// @brief Method build, addr 0xaddeb10, size 0xc0, virtual false, abstract: false, final false
inline void build(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points, int32_t  nump) ;

/// @brief Method buildHull, addr 0xaddf624, size 0x48, virtual false, abstract: false, final false
inline void buildHull() ;

/// @brief Method calculateHorizon, addr 0xade1008, size 0x154, virtual false, abstract: false, final false
inline void calculateHorizon(::Technie::PhysicsCreator::QHull::Point3d*  eyePnt, ::Technie::PhysicsCreator::QHull::HalfEdge*  edge0, ::Technie::PhysicsCreator::QHull::Face*  face, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  horizon) ;

/// @brief Method check, addr 0xade1a40, size 0x8, virtual false, abstract: false, final false
inline bool check() ;

/// @brief Method check, addr 0xade1a48, size 0x1f4, virtual false, abstract: false, final false
inline bool check(double_t  tol) ;

/// @brief Method checkFaceConvexity, addr 0xade1844, size 0xa0, virtual false, abstract: false, final false
inline bool checkFaceConvexity(::Technie::PhysicsCreator::QHull::Face*  face, double_t  tol) ;

/// @brief Method checkFaces, addr 0xade18e4, size 0x15c, virtual false, abstract: false, final false
inline bool checkFaces(double_t  tol) ;

/// @brief Method computeMaxAndMin, addr 0xaddf19c, size 0x45c, virtual false, abstract: false, final false
inline void computeMaxAndMin() ;

/// @brief Method createInitialSimplex, addr 0xaddf9c8, size 0xbe0, virtual false, abstract: false, final false
inline void createInitialSimplex() ;

/// @brief Method deleteFacePoints, addr 0xade0d60, size 0x9c, virtual false, abstract: false, final false
inline void deleteFacePoints(::Technie::PhysicsCreator::QHull::Face*  face, ::Technie::PhysicsCreator::QHull::Face*  absorbingFace) ;

/// @brief Method doAdjacentMerge, addr 0xade0e94, size 0x174, virtual false, abstract: false, final false
inline bool doAdjacentMerge(::Technie::PhysicsCreator::QHull::Face*  face, int32_t  mergeType) ;

/// @brief Method findHalfEdge, addr 0xaddebd0, size 0x15c, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* findHalfEdge(::Technie::PhysicsCreator::QHull::Vertex*  tail, ::Technie::PhysicsCreator::QHull::Vertex*  head) ;

/// @brief Method getDebug, addr 0xadddf90, size 0x8, virtual false, abstract: false, final false
inline bool getDebug() ;

/// @brief Method getDistanceTolerance, addr 0xadddfa0, size 0x8, virtual false, abstract: false, final false
inline double_t getDistanceTolerance() ;

/// @brief Method getExplicitDistanceTolerance, addr 0xadddfb0, size 0x8, virtual false, abstract: false, final false
inline double_t getExplicitDistanceTolerance() ;

/// @brief Method getFaceIndices, addr 0xade0c08, size 0x98, virtual false, abstract: false, final false
inline void getFaceIndices(::ArrayW<int32_t>  indices, ::Technie::PhysicsCreator::QHull::Face*  face, int32_t  flags) ;

/// @brief Method getFaces, addr 0xade09dc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<int32_t>> getFaces() ;

/// @brief Method getFaces, addr 0xade09e4, size 0x224, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<int32_t>> getFaces(int32_t  indexFlags) ;

/// @brief Method getNumFaces, addr 0xade0994, size 0x48, virtual false, abstract: false, final false
inline int32_t getNumFaces() ;

/// @brief Method getNumVertices, addr 0xade06f8, size 0x8, virtual false, abstract: false, final false
inline int32_t getNumVertices() ;

/// @brief Method getVertexPointIndices, addr 0xade08ec, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> getVertexPointIndices() ;

/// @brief Method getVertices, addr 0xade0700, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*> getVertices() ;

/// @brief Method getVertices, addr 0xade0820, size 0xcc, virtual false, abstract: false, final false
inline int32_t getVertices(::ArrayW<double_t>  coords) ;

/// @brief Method initBuffers, addr 0xaddeea8, size 0x248, virtual false, abstract: false, final false
inline void initBuffers(int32_t  nump) ;

/// @brief Method markFaceVertices, addr 0xade180c, size 0x38, virtual false, abstract: false, final false
inline void markFaceVertices(::Technie::PhysicsCreator::QHull::Face*  face, int32_t  mark) ;

/// @brief Method nextPointToAdd, addr 0xade1460, size 0x80, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vertex* nextPointToAdd() ;

/// @brief Method oppFaceDistance, addr 0xade0e64, size 0x30, virtual false, abstract: false, final false
inline double_t oppFaceDistance(::Technie::PhysicsCreator::QHull::HalfEdge*  he) ;

/// @brief Method reindexFacesAndVertices, addr 0xade1668, size 0x1a4, virtual false, abstract: false, final false
inline void reindexFacesAndVertices() ;

/// @brief Method removeAllPointsFromFace, addr 0xadde1e0, size 0x70, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vertex* removeAllPointsFromFace(::Technie::PhysicsCreator::QHull::Face*  face) ;

/// @brief Method removePointFromFace, addr 0xadde11c, size 0x6c, virtual false, abstract: false, final false
inline void removePointFromFace(::Technie::PhysicsCreator::QHull::Vertex*  vtx, ::Technie::PhysicsCreator::QHull::Face*  face) ;

/// @brief Method resolveUnclaimedPoints, addr 0xade0ca0, size 0xc0, virtual false, abstract: false, final false
inline void resolveUnclaimedPoints(::Technie::PhysicsCreator::QHull::FaceList*  newFaces) ;

/// @brief Method setDebug, addr 0xadddf98, size 0x8, virtual false, abstract: false, final false
inline void setDebug(bool  enable) ;

/// @brief Method setExplicitDistanceTolerance, addr 0xadddfa8, size 0x8, virtual false, abstract: false, final false
inline void setExplicitDistanceTolerance(double_t  tol) ;

/// @brief Method setHull, addr 0xadded2c, size 0x17c, virtual false, abstract: false, final false
inline void setHull(::ArrayW<double_t>  coords, int32_t  nump, ::ArrayW<::ArrayW<int32_t>>  faceIndices, int32_t  numf) ;

/// @brief Method setPoints, addr 0xaddf0f0, size 0xac, virtual false, abstract: false, final false
inline void setPoints(::ArrayW<double_t>  coords, int32_t  nump) ;

/// @brief Method setPoints, addr 0xaddf680, size 0x88, virtual false, abstract: false, final false
inline void setPoints(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  pnts, int32_t  nump) ;

/// @brief Method triangulate, addr 0xaddf708, size 0x22c, virtual false, abstract: false, final false
inline void triangulate() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuickHull3D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuickHull3D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuickHull3D(QuickHull3D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuickHull3D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuickHull3D(QuickHull3D const& ) = delete;

/// @brief Field AUTOMATIC_TOLERANCE offset 0xffffffff size 0x8
static constexpr double_t  AUTOMATIC_TOLERANCE{static_cast<double_t>(-1.0)};

/// @brief Field CLOCKWISE offset 0xffffffff size 0x4
static constexpr int32_t  CLOCKWISE{static_cast<int32_t>(0x1)};

/// @brief Field DOUBLE_PREC offset 0xffffffff size 0x8
static constexpr double_t  DOUBLE_PREC{static_cast<double_t>(2.220446049250313e-16)};

/// @brief Field INDEXED_FROM_ONE offset 0xffffffff size 0x4
static constexpr int32_t  INDEXED_FROM_ONE{static_cast<int32_t>(0x2)};

/// @brief Field INDEXED_FROM_ZERO offset 0xffffffff size 0x4
static constexpr int32_t  INDEXED_FROM_ZERO{static_cast<int32_t>(0x4)};

/// @brief Field NONCONVEX offset 0xffffffff size 0x4
static constexpr int32_t  NONCONVEX{static_cast<int32_t>(0x2)};

/// @brief Field NONCONVEX_WRT_LARGER_FACE offset 0xffffffff size 0x4
static constexpr int32_t  NONCONVEX_WRT_LARGER_FACE{static_cast<int32_t>(0x1)};

/// @brief Field POINT_RELATIVE offset 0xffffffff size 0x4
static constexpr int32_t  POINT_RELATIVE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30541};

/// @brief Field findIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___findIndex;

/// @brief Field charLength, offset: 0x18, size: 0x8, def value: None
 double_t  ___charLength;

/// @brief Field debug, offset: 0x20, size: 0x1, def value: None
 bool  ___debug;

/// @brief Field pointBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  ___pointBuffer;

/// @brief Field vertexPointIndices, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___vertexPointIndices;

/// @brief Field discardedFaces, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  ___discardedFaces;

/// @brief Field maxVtxs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  ___maxVtxs;

/// @brief Field minVtxs, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  ___minVtxs;

/// @brief Field faces, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*  ___faces;

/// @brief Field horizon, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  ___horizon;

/// @brief Field newFaces, offset: 0x60, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::FaceList*  ___newFaces;

/// @brief Field unclaimed, offset: 0x68, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::VertexList*  ___unclaimed;

/// @brief Field claimed, offset: 0x70, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::VertexList*  ___claimed;

/// @brief Field numVertices, offset: 0x78, size: 0x4, def value: None
 int32_t  ___numVertices;

/// @brief Field numFaces, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___numFaces;

/// @brief Field numPoints, offset: 0x80, size: 0x4, def value: None
 int32_t  ___numPoints;

/// @brief Field explicitTolerance, offset: 0x88, size: 0x8, def value: None
 double_t  ___explicitTolerance;

/// @brief Field tolerance, offset: 0x90, size: 0x8, def value: None
 double_t  ___tolerance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___findIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___charLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___debug) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___pointBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___vertexPointIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___discardedFaces) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___maxVtxs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___minVtxs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___faces) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___horizon) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___newFaces) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___unclaimed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___claimed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___numVertices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___numFaces) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___numPoints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___explicitTolerance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::QuickHull3D, ___tolerance) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::QuickHull3D) == 0x98, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
