#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweep.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweep)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweep;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweep*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::Poly2Tri::DTSweep*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweep
class CORDL_TYPE DTSweep : public ::System::Object {
public:
// Declarations
/// @brief Method BasinAngle, addr 0xb0811a0, size 0x98, virtual false, abstract: false, final false
static inline double_t BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method EdgeEvent, addr 0xb07eb10, size 0x198, virtual false, abstract: false, final false
static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method EdgeEvent, addr 0xb07fe18, size 0x1dc, virtual false, abstract: false, final false
static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method Fill, addr 0xb07f604, size 0x190, virtual false, abstract: false, final false
static inline void Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillAdvancingFront, addr 0xb07f9a8, size 0xf8, virtual false, abstract: false, final false
static inline void FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  n) ;

/// @brief Method FillBasin, addr 0xb081238, size 0x1d4, virtual false, abstract: false, final false
static inline void FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillBasinReq, addr 0xb08140c, size 0x174, virtual false, abstract: false, final false
static inline void FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillEdgeEvent, addr 0xb07fdec, size 0x2c, virtual false, abstract: false, final false
static inline void FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftAboveEdgeEvent, addr 0xb080100, size 0x108, virtual false, abstract: false, final false
static inline void FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftBelowEdgeEvent, addr 0xb08075c, size 0x128, virtual false, abstract: false, final false
static inline void FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftConcaveEdgeEvent, addr 0xb080668, size 0xf4, virtual false, abstract: false, final false
static inline void FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillLeftConvexEdgeEvent, addr 0xb080550, size 0x118, virtual false, abstract: false, final false
static inline void FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightAboveEdgeEvent, addr 0xb07fff4, size 0x10c, virtual false, abstract: false, final false
static inline void FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightBelowEdgeEvent, addr 0xb080424, size 0x12c, virtual false, abstract: false, final false
static inline void FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightConcaveEdgeEvent, addr 0xb080208, size 0xfc, virtual false, abstract: false, final false
static inline void FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FillRightConvexEdgeEvent, addr 0xb080304, size 0x120, virtual false, abstract: false, final false
static inline void FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method FinalizationConvexHull, addr 0xb07e690, size 0x280, virtual false, abstract: false, final false
static inline void FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method FinalizationPolygon, addr 0xb07e5ec, size 0xa4, virtual false, abstract: false, final false
static inline void FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method FlipEdgeEvent, addr 0xb0808e4, size 0x384, virtual false, abstract: false, final false
static inline void FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method FlipScanEdgeEvent, addr 0xb080f34, size 0x1a0, virtual false, abstract: false, final false
static inline void FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  flipTriangle, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p) ;

/// @brief Method HoleAngle, addr 0xb0810e0, size 0xc0, virtual false, abstract: false, final false
static inline double_t HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method IsEdgeSideOfTriangle, addr 0xb07fd40, size 0xac, virtual false, abstract: false, final false
static inline bool IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq) ;

/// @brief Method IsShallow, addr 0xb081580, size 0x64, virtual false, abstract: false, final false
static inline bool IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method Legalize, addr 0xb07faa0, size 0x248, virtual false, abstract: false, final false
static inline bool Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t) ;

/// @brief Method NewFrontTriangle, addr 0xb07f7b8, size 0x1dc, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method NextFlipPoint, addr 0xb080ddc, size 0x158, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method NextFlipTriangle, addr 0xb080d38, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation  o, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method PointEvent, addr 0xb07e920, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method RotateTrianglePair, addr 0xb07ee18, size 0x490, virtual false, abstract: false, final false
static inline void RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op) ;

/// @brief Method Sweep, addr 0xb07e3d8, size 0x214, virtual false, abstract: false, final false
static inline void Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method Triangulate, addr 0xb07e0f0, size 0x4c, virtual false, abstract: false, final false
static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx) ;

/// @brief Method TurnAdvancingFrontConvex, addr 0xb07ecac, size 0x16c, virtual false, abstract: false, final false
static inline void TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  b, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  c) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::DTSweep) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
