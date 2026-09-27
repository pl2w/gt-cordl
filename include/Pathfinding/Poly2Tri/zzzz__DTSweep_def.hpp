#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweep.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweep)
namespace Pathfinding::Poly2Tri {
class AdvancingFrontNode;
}
namespace Pathfinding::Poly2Tri {
class DTSweepConstraint;
}
namespace Pathfinding::Poly2Tri {
class DTSweepContext;
}
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
struct Orientation;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class DTSweep;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::DTSweep*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::DTSweep*, "Pathfinding.Poly2Tri", "DTSweep");
// Dependencies System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.DTSweep
class CORDL_TYPE DTSweep : public ::System::Object {
public:
// Declarations
/// @brief Method BasinAngle, addr 0xa6b553c, size 0x98, virtual false, abstract: false, final false
static inline double_t BasinAngle(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method EdgeEvent, addr 0xa6b2e70, size 0x19c, virtual false, abstract: false, final false
static inline void EdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method EdgeEvent, addr 0xa6b417c, size 0x1dc, virtual false, abstract: false, final false
static inline void EdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle, ::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method Fill, addr 0xa6b3968, size 0x190, virtual false, abstract: false, final false
static inline void Fill(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillAdvancingFront, addr 0xa6b3d0c, size 0xf8, virtual false, abstract: false, final false
static inline void FillAdvancingFront(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  n) ;

/// @brief Method FillBasin, addr 0xa6b55d4, size 0x1d4, virtual false, abstract: false, final false
static inline void FillBasin(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillBasinReq, addr 0xa6b57a8, size 0x174, virtual false, abstract: false, final false
static inline void FillBasinReq(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillEdgeEvent, addr 0xa6b4150, size 0x2c, virtual false, abstract: false, final false
static inline void FillEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftAboveEdgeEvent, addr 0xa6b4464, size 0x108, virtual false, abstract: false, final false
static inline void FillLeftAboveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftBelowEdgeEvent, addr 0xa6b4ac0, size 0x128, virtual false, abstract: false, final false
static inline void FillLeftBelowEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftConcaveEdgeEvent, addr 0xa6b49cc, size 0xf4, virtual false, abstract: false, final false
static inline void FillLeftConcaveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftConvexEdgeEvent, addr 0xa6b48b4, size 0x118, virtual false, abstract: false, final false
static inline void FillLeftConvexEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightAboveEdgeEvent, addr 0xa6b4358, size 0x10c, virtual false, abstract: false, final false
static inline void FillRightAboveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightBelowEdgeEvent, addr 0xa6b4788, size 0x12c, virtual false, abstract: false, final false
static inline void FillRightBelowEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightConcaveEdgeEvent, addr 0xa6b456c, size 0xfc, virtual false, abstract: false, final false
static inline void FillRightConcaveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightConvexEdgeEvent, addr 0xa6b4668, size 0x120, virtual false, abstract: false, final false
static inline void FillRightConvexEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FinalizationConvexHull, addr 0xa6b29ec, size 0x284, virtual false, abstract: false, final false
static inline void FinalizationConvexHull(::Pathfinding::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method FinalizationPolygon, addr 0xa6b2948, size 0xa4, virtual false, abstract: false, final false
static inline void FinalizationPolygon(::Pathfinding::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method FlipEdgeEvent, addr 0xa6b4dc8, size 0x27c, virtual false, abstract: false, final false
static inline void FlipEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method FlipScanEdgeEvent, addr 0xa6b5310, size 0x160, virtual false, abstract: false, final false
static inline void FlipScanEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  flipTriangle, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method HoleAngle, addr 0xa6b547c, size 0xc0, virtual false, abstract: false, final false
static inline double_t HoleAngle(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method IsEdgeSideOfTriangle, addr 0xa6b40a4, size 0xac, virtual false, abstract: false, final false
static inline bool IsEdgeSideOfTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq) ;

/// @brief Method IsShallow, addr 0xa6b591c, size 0x64, virtual false, abstract: false, final false
static inline bool IsShallow(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method Legalize, addr 0xa6b3e04, size 0x248, virtual false, abstract: false, final false
static inline bool Legalize(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method NewFrontTriangle, addr 0xa6b3b1c, size 0x1dc, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  point, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method NextFlipPoint, addr 0xa6b51b8, size 0x158, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::TriangulationPoint* NextFlipPoint(::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method NextFlipTriangle, addr 0xa6b5114, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::DelaunayTriangle* NextFlipTriangle(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::Orientation  o, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method PointEvent, addr 0xa6b2c80, size 0x10c, virtual false, abstract: false, final false
static inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* PointEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method RotateTrianglePair, addr 0xa6b317c, size 0x490, virtual false, abstract: false, final false
static inline void RotateTrianglePair(::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method Sweep, addr 0xa6b2734, size 0x214, virtual false, abstract: false, final false
static inline void Sweep(::Pathfinding::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method Triangulate, addr 0xa6b0254, size 0x4c, virtual false, abstract: false, final false
static inline void Triangulate(::Pathfinding::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method TurnAdvancingFrontConvex, addr 0xa6b3010, size 0x16c, virtual false, abstract: false, final false
static inline void TurnAdvancingFrontConvex(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  b, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  c) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DTSweep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweep(DTSweep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweep(DTSweep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Poly2Tri::DTSweep) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
