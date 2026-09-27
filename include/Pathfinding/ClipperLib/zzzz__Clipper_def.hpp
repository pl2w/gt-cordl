#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Clipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__ClipType_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipperBase_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyFillType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipper)
namespace Pathfinding::ClipperLib {
struct ClipType;
}
namespace Pathfinding::ClipperLib {
struct Direction;
}
namespace Pathfinding::ClipperLib {
struct IntPoint;
}
namespace Pathfinding::ClipperLib {
class IntersectNode;
}
namespace Pathfinding::ClipperLib {
class Join;
}
namespace Pathfinding::ClipperLib {
class OutPt;
}
namespace Pathfinding::ClipperLib {
class OutRec;
}
namespace Pathfinding::ClipperLib {
struct PolyFillType;
}
namespace Pathfinding::ClipperLib {
class PolyTree;
}
namespace Pathfinding::ClipperLib {
class Scanbeam;
}
namespace Pathfinding::ClipperLib {
class TEdge;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class Clipper;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::Clipper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::Clipper*, "Pathfinding.ClipperLib", "Clipper");
// Dependencies Pathfinding.ClipperLib.ClipType, Pathfinding.ClipperLib.ClipperBase, Pathfinding.ClipperLib.PolyFillType
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.Clipper
class CORDL_TYPE Clipper : public ::Pathfinding::ClipperLib::ClipperBase {
public:
// Declarations
 __declspec(property(get=get_ReverseSolution, put=set_ReverseSolution)) bool  ReverseSolution;

 __declspec(property(get=get_StrictlySimple, put=set_StrictlySimple)) bool  StrictlySimple;

/// @brief Field <ReverseSolution>k__BackingField, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReverseSolution_k__BackingField, put=__cordl_internal_set__ReverseSolution_k__BackingField)) bool  _ReverseSolution_k__BackingField;

/// @brief Field <StrictlySimple>k__BackingField, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__StrictlySimple_k__BackingField, put=__cordl_internal_set__StrictlySimple_k__BackingField)) bool  _StrictlySimple_k__BackingField;

/// @brief Field <>f__am$cacheE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cacheE, put=setStaticF___f__am$cacheE)) ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  __f__am$cacheE;

/// @brief Field <>f__am$cacheF, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cacheF, put=setStaticF___f__am$cacheF)) ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  __f__am$cacheF;

/// @brief Field m_ActiveEdges, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveEdges, put=__cordl_internal_set_m_ActiveEdges)) ::Pathfinding::ClipperLib::TEdge*  m_ActiveEdges;

/// @brief Field m_ClipFillType, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ClipFillType, put=__cordl_internal_set_m_ClipFillType)) ::Pathfinding::ClipperLib::PolyFillType  m_ClipFillType;

/// @brief Field m_ClipType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ClipType, put=__cordl_internal_set_m_ClipType)) ::Pathfinding::ClipperLib::ClipType  m_ClipType;

/// @brief Field m_ExecuteLocked, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ExecuteLocked, put=__cordl_internal_set_m_ExecuteLocked)) bool  m_ExecuteLocked;

/// @brief Field m_GhostJoins, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GhostJoins, put=__cordl_internal_set_m_GhostJoins)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  m_GhostJoins;

/// @brief Field m_IntersectNodes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IntersectNodes, put=__cordl_internal_set_m_IntersectNodes)) ::Pathfinding::ClipperLib::IntersectNode*  m_IntersectNodes;

/// @brief Field m_Joins, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Joins, put=__cordl_internal_set_m_Joins)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  m_Joins;

/// @brief Field m_PolyOuts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PolyOuts, put=__cordl_internal_set_m_PolyOuts)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*  m_PolyOuts;

/// @brief Field m_Scanbeam, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Scanbeam, put=__cordl_internal_set_m_Scanbeam)) ::Pathfinding::ClipperLib::Scanbeam*  m_Scanbeam;

/// @brief Field m_SortedEdges, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortedEdges, put=__cordl_internal_set_m_SortedEdges)) ::Pathfinding::ClipperLib::TEdge*  m_SortedEdges;

/// @brief Field m_SubjFillType, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SubjFillType, put=__cordl_internal_set_m_SubjFillType)) ::Pathfinding::ClipperLib::PolyFillType  m_SubjFillType;

/// @brief Field m_UsingPolyTree, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UsingPolyTree, put=__cordl_internal_set_m_UsingPolyTree)) bool  m_UsingPolyTree;

/// @brief Method AddEdgeToSEL, addr 0xa687f5c, size 0xa0, virtual false, abstract: false, final false
inline void AddEdgeToSEL(::Pathfinding::ClipperLib::TEdge*  edge) ;

/// @brief Method AddGhostJoin, addr 0xa68760c, size 0x110, virtual false, abstract: false, final false
inline void AddGhostJoin(::Pathfinding::ClipperLib::OutPt*  Op, ::Pathfinding::ClipperLib::IntPoint  OffPt) ;

/// @brief Method AddJoin, addr 0xa6874e8, size 0x124, virtual false, abstract: false, final false
inline void AddJoin(::Pathfinding::ClipperLib::OutPt*  Op1, ::Pathfinding::ClipperLib::OutPt*  Op2, ::Pathfinding::ClipperLib::IntPoint  OffPt) ;

/// @brief Method AddLocalMaxPoly, addr 0xa688c08, size 0x7c, virtual false, abstract: false, final false
inline void AddLocalMaxPoly(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method AddLocalMinPoly, addr 0xa687de4, size 0x178, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutPt* AddLocalMinPoly(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method AddOutPt, addr 0xa687bcc, size 0x218, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutPt* AddOutPt(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method AppendPolygon, addr 0xa688c84, size 0x364, virtual false, abstract: false, final false
inline void AppendPolygon(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2) ;

/// @brief Method Area, addr 0xa686c04, size 0x6c, virtual false, abstract: false, final false
inline double_t Area(::Pathfinding::ClipperLib::OutRec*  outRec) ;

/// @brief Method Area, addr 0xa68aa98, size 0x178, virtual false, abstract: false, final false
static inline double_t Area(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly) ;

/// @brief Method BuildIntersectList, addr 0xa68a110, size 0x228, virtual false, abstract: false, final false
inline void BuildIntersectList(int64_t  botY, int64_t  topY) ;

/// @brief Method BuildResult, addr 0xa685d18, size 0x26c, virtual false, abstract: false, final false
inline void BuildResult(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  polyg) ;

/// @brief Method BuildResult2, addr 0xa685fe4, size 0x32c, virtual false, abstract: false, final false
inline void BuildResult2(::Pathfinding::ClipperLib::PolyTree*  polytree) ;

/// @brief Method Clear, addr 0xa6855b0, size 0x64, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyAELToSEL, addr 0xa688740, size 0x48, virtual false, abstract: false, final false
inline void CopyAELToSEL() ;

/// @brief Method CreateOutRec, addr 0xa688fe8, size 0x144, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutRec* CreateOutRec() ;

/// @brief Method DeleteFromAEL, addr 0xa689708, size 0xa4, virtual false, abstract: false, final false
inline void DeleteFromAEL(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method DeleteFromSEL, addr 0xa6897ac, size 0xa4, virtual false, abstract: false, final false
inline void DeleteFromSEL(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method DisposeAllPolyPts, addr 0xa685614, size 0xa4, virtual false, abstract: false, final false
inline void DisposeAllPolyPts() ;

/// @brief Method DisposeIntersectNodes, addr 0xa68a428, size 0x4c, virtual false, abstract: false, final false
inline void DisposeIntersectNodes() ;

/// @brief Method DisposeOutPts, addr 0xa6874c4, size 0x24, virtual false, abstract: false, final false
inline void DisposeOutPts(::Pathfinding::ClipperLib::OutPt*  pp) ;

/// @brief Method DisposeOutRec, addr 0xa687430, size 0x94, virtual false, abstract: false, final false
inline void DisposeOutRec(int32_t  index) ;

/// @brief Method DoMaxima, addr 0xa68a940, size 0x140, virtual false, abstract: false, final false
inline void DoMaxima(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method DoSimplePolygons, addr 0xa6871f8, size 0x238, virtual false, abstract: false, final false
inline void DoSimplePolygons() ;

/// @brief Method DupOutPt, addr 0xa68ac40, size 0x104, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutPt* DupOutPt(::Pathfinding::ClipperLib::OutPt*  outPt, bool  InsertAfter) ;

/// @brief Method E2InsertsBeforeE1, addr 0xa688608, size 0x6c, virtual false, abstract: false, final false
inline bool E2InsertsBeforeE1(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2) ;

/// @brief Method EdgesAdjacent, addr 0xa68a83c, size 0x40, virtual false, abstract: false, final false
inline bool EdgesAdjacent(::Pathfinding::ClipperLib::IntersectNode*  inode) ;

/// @brief Method Execute, addr 0xa685f84, size 0x60, virtual false, abstract: false, final false
inline bool Execute(::Pathfinding::ClipperLib::ClipType  clipType, ::Pathfinding::ClipperLib::PolyTree*  polytree, ::Pathfinding::ClipperLib::PolyFillType  subjFillType, ::Pathfinding::ClipperLib::PolyFillType  clipFillType) ;

/// @brief Method Execute, addr 0xa68589c, size 0x11c, virtual false, abstract: false, final false
inline bool Execute(::Pathfinding::ClipperLib::ClipType  clipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  solution, ::Pathfinding::ClipperLib::PolyFillType  subjFillType, ::Pathfinding::ClipperLib::PolyFillType  clipFillType) ;

/// @brief Method ExecuteInternal, addr 0xa6859b8, size 0x360, virtual false, abstract: false, final false
inline bool ExecuteInternal() ;

/// @brief Method FirstIsBottomPt, addr 0xa689208, size 0x214, virtual false, abstract: false, final false
inline bool FirstIsBottomPt(::Pathfinding::ClipperLib::OutPt*  btmPt1, ::Pathfinding::ClipperLib::OutPt*  btmPt2) ;

/// @brief Method FixHoleLinkage, addr 0xa686310, size 0x64, virtual false, abstract: false, final false
inline void FixHoleLinkage(::Pathfinding::ClipperLib::OutRec*  outRec) ;

/// @brief Method FixupFirstLefts1, addr 0xa68b8f4, size 0xd8, virtual false, abstract: false, final false
inline void FixupFirstLefts1(::Pathfinding::ClipperLib::OutRec*  OldOutRec, ::Pathfinding::ClipperLib::OutRec*  NewOutRec) ;

/// @brief Method FixupFirstLefts2, addr 0xa68b9cc, size 0x150, virtual false, abstract: false, final false
inline void FixupFirstLefts2(::Pathfinding::ClipperLib::OutRec*  OldOutRec, ::Pathfinding::ClipperLib::OutRec*  NewOutRec) ;

/// @brief Method FixupIntersectionOrder, addr 0xa68a338, size 0x74, virtual false, abstract: false, final false
inline bool FixupIntersectionOrder() ;

/// @brief Method FixupOutPolygon, addr 0xa687040, size 0x1b8, virtual false, abstract: false, final false
inline void FixupOutPolygon(::Pathfinding::ClipperLib::OutRec*  outRec) ;

/// @brief Method GetBottomPt, addr 0xa68941c, size 0xec, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutPt* GetBottomPt(::Pathfinding::ClipperLib::OutPt*  pp) ;

/// @brief Method GetDx, addr 0xa6891e0, size 0x28, virtual false, abstract: false, final false
inline double_t GetDx(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2) ;

/// @brief Method GetHorzDirection, addr 0xa689ddc, size 0x3c, virtual false, abstract: false, final false
inline void GetHorzDirection(::Pathfinding::ClipperLib::TEdge*  HorzEdge, ::by_ref<::Pathfinding::ClipperLib::Direction>  Dir, ::by_ref<int64_t>  Left, ::by_ref<int64_t>  Right) ;

/// @brief Method GetLowermostRec, addr 0xa689508, size 0xe4, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutRec* GetLowermostRec(::Pathfinding::ClipperLib::OutRec*  outRec1, ::Pathfinding::ClipperLib::OutRec*  outRec2) ;

/// @brief Method GetMaximaPair, addr 0xa689fe0, size 0xa0, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* GetMaximaPair(::Pathfinding::ClipperLib::TEdge*  e) ;

/// @brief Method GetNextInAEL, addr 0xa68a080, size 0x30, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::TEdge* GetNextInAEL(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::Direction  Direction) ;

/// @brief Method GetOutRec, addr 0xa689618, size 0xa0, virtual false, abstract: false, final false
inline ::Pathfinding::ClipperLib::OutRec* GetOutRec(int32_t  idx) ;

/// @brief Method GetOverlap, addr 0xa68ad44, size 0x138, virtual false, abstract: false, final false
inline bool GetOverlap(int64_t  a1, int64_t  a2, int64_t  b1, int64_t  b2, ::by_ref<int64_t>  Left, ::by_ref<int64_t>  Right) ;

/// @brief Method HorzSegmentsOverlap, addr 0xa687ffc, size 0x8c, virtual false, abstract: false, final false
inline bool HorzSegmentsOverlap(::Pathfinding::ClipperLib::IntPoint  Pt1a, ::Pathfinding::ClipperLib::IntPoint  Pt1b, ::Pathfinding::ClipperLib::IntPoint  Pt2a, ::Pathfinding::ClipperLib::IntPoint  Pt2b) ;

/// @brief Method InsertEdgeIntoAEL, addr 0xa68771c, size 0x100, virtual false, abstract: false, final false
inline void InsertEdgeIntoAEL(::Pathfinding::ClipperLib::TEdge*  edge, ::Pathfinding::ClipperLib::TEdge*  startEdge) ;

/// @brief Method InsertIntersectNode, addr 0xa68a73c, size 0x100, virtual false, abstract: false, final false
inline void InsertIntersectNode(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt) ;

/// @brief Method InsertLocalMinimaIntoAEL, addr 0xa68639c, size 0x3a0, virtual false, abstract: false, final false
inline void InsertLocalMinimaIntoAEL(int64_t  botY) ;

/// @brief Method InsertScanbeam, addr 0xa685728, size 0x154, virtual false, abstract: false, final false
inline void InsertScanbeam(int64_t  Y) ;

/// @brief Method IntersectEdges, addr 0xa688088, size 0x580, virtual false, abstract: false, final false
inline void IntersectEdges(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt, bool  protect) ;

/// @brief Method IntersectPoint, addr 0xa68a474, size 0x2c8, virtual false, abstract: false, final false
inline bool IntersectPoint(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2, ::by_ref<::Pathfinding::ClipperLib::IntPoint>  ip) ;

/// @brief Method IsContributing, addr 0xa687a4c, size 0x180, virtual false, abstract: false, final false
inline bool IsContributing(::Pathfinding::ClipperLib::TEdge*  edge) ;

/// @brief Method IsEvenOddAltFillType, addr 0xa688710, size 0x30, virtual false, abstract: false, final false
inline bool IsEvenOddAltFillType(::Pathfinding::ClipperLib::TEdge*  edge) ;

/// @brief Method IsEvenOddFillType, addr 0xa6886e0, size 0x30, virtual false, abstract: false, final false
inline bool IsEvenOddFillType(::Pathfinding::ClipperLib::TEdge*  edge) ;

/// @brief Method IsIntermediate, addr 0xa68a0dc, size 0x34, virtual false, abstract: false, final false
inline bool IsIntermediate(::Pathfinding::ClipperLib::TEdge*  e, double_t  Y) ;

/// @brief Method IsMaxima, addr 0xa68a0b0, size 0x2c, virtual false, abstract: false, final false
inline bool IsMaxima(::Pathfinding::ClipperLib::TEdge*  e, double_t  Y) ;

/// @brief Method JoinCommonEdges, addr 0xa686cc8, size 0x378, virtual false, abstract: false, final false
inline void JoinCommonEdges() ;

/// @brief Method JoinHorz, addr 0xa68ae7c, size 0x348, virtual false, abstract: false, final false
inline bool JoinHorz(::Pathfinding::ClipperLib::OutPt*  op1, ::Pathfinding::ClipperLib::OutPt*  op1b, ::Pathfinding::ClipperLib::OutPt*  op2, ::Pathfinding::ClipperLib::OutPt*  op2b, ::Pathfinding::ClipperLib::IntPoint  Pt, bool  DiscardLeft) ;

/// @brief Method JoinPoints, addr 0xa68b1c4, size 0x698, virtual false, abstract: false, final false
inline bool JoinPoints(::Pathfinding::ClipperLib::Join*  j, ::by_ref<::Pathfinding::ClipperLib::OutPt*>  p1, ::by_ref<::Pathfinding::ClipperLib::OutPt*>  p2) ;

static inline ::Pathfinding::ClipperLib::Clipper* New_ctor(int32_t  InitOptions) ;

/// @brief Method Orientation, addr 0xa68aa80, size 0x18, virtual false, abstract: false, final false
static inline bool Orientation(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly) ;

/// @brief Method Param1RightOfParam2, addr 0xa6895ec, size 0x2c, virtual false, abstract: false, final false
inline bool Param1RightOfParam2(::Pathfinding::ClipperLib::OutRec*  outRec1, ::Pathfinding::ClipperLib::OutRec*  outRec2) ;

/// @brief Method PointCount, addr 0xa68ac10, size 0x30, virtual false, abstract: false, final false
inline int32_t PointCount(::Pathfinding::ClipperLib::OutPt*  pts) ;

/// @brief Method Poly2ContainsPoly1, addr 0xa68b85c, size 0x98, virtual false, abstract: false, final false
inline bool Poly2ContainsPoly1(::Pathfinding::ClipperLib::OutPt*  outPt1, ::Pathfinding::ClipperLib::OutPt*  outPt2, bool  UseFullRange) ;

/// @brief Method PopScanbeam, addr 0xa686374, size 0x28, virtual false, abstract: false, final false
inline int64_t PopScanbeam() ;

/// @brief Method PrepareHorzJoins, addr 0xa689e18, size 0x1c8, virtual false, abstract: false, final false
inline void PrepareHorzJoins(::Pathfinding::ClipperLib::TEdge*  horzEdge, bool  isTopOfScanbeam) ;

/// @brief Method ProcessEdgesAtTopOfScanbeam, addr 0xa6868bc, size 0x348, virtual false, abstract: false, final false
inline void ProcessEdgesAtTopOfScanbeam(int64_t  topY) ;

/// @brief Method ProcessHorizontal, addr 0xa689994, size 0x448, virtual false, abstract: false, final false
inline void ProcessHorizontal(::Pathfinding::ClipperLib::TEdge*  horzEdge, bool  isTopOfScanbeam) ;

/// @brief Method ProcessHorizontals, addr 0xa68673c, size 0x48, virtual false, abstract: false, final false
inline void ProcessHorizontals(bool  isTopOfScanbeam) ;

/// @brief Method ProcessIntersectList, addr 0xa68a3ac, size 0x7c, virtual false, abstract: false, final false
inline void ProcessIntersectList() ;

/// @brief Method ProcessIntersections, addr 0xa686784, size 0x138, virtual false, abstract: false, final false
inline bool ProcessIntersections(int64_t  botY, int64_t  topY) ;

/// @brief Method Reset, addr 0xa6856b8, size 0x70, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ReversePolyPtLinks, addr 0xa686c70, size 0x58, virtual false, abstract: false, final false
inline void ReversePolyPtLinks(::Pathfinding::ClipperLib::OutPt*  pp) ;

/// @brief Method Round, addr 0xa68a910, size 0x30, virtual false, abstract: false, final false
static inline int64_t Round(double_t  value) ;

/// @brief Method SetHoleState, addr 0xa68912c, size 0xb4, virtual false, abstract: false, final false
inline void SetHoleState(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::OutRec*  outRec) ;

/// @brief Method SetWindingCount, addr 0xa68781c, size 0x230, virtual false, abstract: false, final false
inline void SetWindingCount(::Pathfinding::ClipperLib::TEdge*  edge) ;

/// @brief Method SwapIntersectNodes, addr 0xa68a87c, size 0x94, virtual false, abstract: false, final false
inline void SwapIntersectNodes(::Pathfinding::ClipperLib::IntersectNode*  int1, ::Pathfinding::ClipperLib::IntersectNode*  int2) ;

/// @brief Method SwapPolyIndexes, addr 0xa6896e0, size 0x28, virtual false, abstract: false, final false
static inline void SwapPolyIndexes(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2) ;

/// @brief Method SwapPositionsInAEL, addr 0xa688788, size 0x23c, virtual false, abstract: false, final false
inline void SwapPositionsInAEL(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2) ;

/// @brief Method SwapPositionsInSEL, addr 0xa6889c4, size 0x244, virtual false, abstract: false, final false
inline void SwapPositionsInSEL(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2) ;

/// @brief Method SwapSides, addr 0xa6896b8, size 0x28, virtual false, abstract: false, final false
static inline void SwapSides(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2) ;

/// @brief Method TopX, addr 0xa688674, size 0x6c, virtual false, abstract: false, final false
static inline int64_t TopX(::Pathfinding::ClipperLib::TEdge*  edge, int64_t  currentY) ;

/// @brief Method UpdateEdgeIntoAEL, addr 0xa689850, size 0x144, virtual false, abstract: false, final false
inline void UpdateEdgeIntoAEL(::by_ref<::Pathfinding::ClipperLib::TEdge*>  e) ;

/// @brief Method UpdateOutPtIdxs, addr 0xa68bb1c, size 0x34, virtual false, abstract: false, final false
inline void UpdateOutPtIdxs(::Pathfinding::ClipperLib::OutRec*  outrec) ;

constexpr bool const& __cordl_internal_get__ReverseSolution_k__BackingField() const;

constexpr bool& __cordl_internal_get__ReverseSolution_k__BackingField() ;

constexpr bool const& __cordl_internal_get__StrictlySimple_k__BackingField() const;

constexpr bool& __cordl_internal_get__StrictlySimple_k__BackingField() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_m_ActiveEdges() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_m_ActiveEdges() ;

constexpr ::Pathfinding::ClipperLib::PolyFillType const& __cordl_internal_get_m_ClipFillType() const;

constexpr ::Pathfinding::ClipperLib::PolyFillType& __cordl_internal_get_m_ClipFillType() ;

constexpr ::Pathfinding::ClipperLib::ClipType const& __cordl_internal_get_m_ClipType() const;

constexpr ::Pathfinding::ClipperLib::ClipType& __cordl_internal_get_m_ClipType() ;

constexpr bool const& __cordl_internal_get_m_ExecuteLocked() const;

constexpr bool& __cordl_internal_get_m_ExecuteLocked() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>* const& __cordl_internal_get_m_GhostJoins() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*& __cordl_internal_get_m_GhostJoins() ;

constexpr ::Pathfinding::ClipperLib::IntersectNode* const& __cordl_internal_get_m_IntersectNodes() const;

constexpr ::Pathfinding::ClipperLib::IntersectNode*& __cordl_internal_get_m_IntersectNodes() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>* const& __cordl_internal_get_m_Joins() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*& __cordl_internal_get_m_Joins() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>* const& __cordl_internal_get_m_PolyOuts() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*& __cordl_internal_get_m_PolyOuts() ;

constexpr ::Pathfinding::ClipperLib::Scanbeam* const& __cordl_internal_get_m_Scanbeam() const;

constexpr ::Pathfinding::ClipperLib::Scanbeam*& __cordl_internal_get_m_Scanbeam() ;

constexpr ::Pathfinding::ClipperLib::TEdge* const& __cordl_internal_get_m_SortedEdges() const;

constexpr ::Pathfinding::ClipperLib::TEdge*& __cordl_internal_get_m_SortedEdges() ;

constexpr ::Pathfinding::ClipperLib::PolyFillType const& __cordl_internal_get_m_SubjFillType() const;

constexpr ::Pathfinding::ClipperLib::PolyFillType& __cordl_internal_get_m_SubjFillType() ;

constexpr bool const& __cordl_internal_get_m_UsingPolyTree() const;

constexpr bool& __cordl_internal_get_m_UsingPolyTree() ;

constexpr void __cordl_internal_set__ReverseSolution_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StrictlySimple_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_ActiveEdges(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_m_ClipFillType(::Pathfinding::ClipperLib::PolyFillType  value) ;

constexpr void __cordl_internal_set_m_ClipType(::Pathfinding::ClipperLib::ClipType  value) ;

constexpr void __cordl_internal_set_m_ExecuteLocked(bool  value) ;

constexpr void __cordl_internal_set_m_GhostJoins(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  value) ;

constexpr void __cordl_internal_set_m_IntersectNodes(::Pathfinding::ClipperLib::IntersectNode*  value) ;

constexpr void __cordl_internal_set_m_Joins(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  value) ;

constexpr void __cordl_internal_set_m_PolyOuts(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*  value) ;

constexpr void __cordl_internal_set_m_Scanbeam(::Pathfinding::ClipperLib::Scanbeam*  value) ;

constexpr void __cordl_internal_set_m_SortedEdges(::Pathfinding::ClipperLib::TEdge*  value) ;

constexpr void __cordl_internal_set_m_SubjFillType(::Pathfinding::ClipperLib::PolyFillType  value) ;

constexpr void __cordl_internal_set_m_UsingPolyTree(bool  value) ;

/// @brief Method .ctor, addr 0xa68544c, size 0x164, virtual false, abstract: false, final false
inline void _ctor(int32_t  InitOptions) ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>* getStaticF___f__am$cacheE() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>* getStaticF___f__am$cacheF() ;

/// [CompilerGenerated]
/// @brief Method get_ReverseSolution, addr 0xa68587c, size 0x8, virtual false, abstract: false, final false
inline bool get_ReverseSolution() ;

/// [CompilerGenerated]
/// @brief Method get_StrictlySimple, addr 0xa68588c, size 0x8, virtual false, abstract: false, final false
inline bool get_StrictlySimple() ;

static inline void setStaticF___f__am$cacheE(::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  value) ;

static inline void setStaticF___f__am$cacheF(::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReverseSolution, addr 0xa685884, size 0x8, virtual false, abstract: false, final false
inline void set_ReverseSolution(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_StrictlySimple, addr 0xa685894, size 0x8, virtual false, abstract: false, final false
inline void set_StrictlySimple(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Clipper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Clipper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Clipper(Clipper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clipper(Clipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31663};

/// @brief Field ioPreserveCollinear offset 0xffffffff size 0x4
static constexpr int32_t  ioPreserveCollinear{static_cast<int32_t>(0x4)};

/// @brief Field ioReverseSolution offset 0xffffffff size 0x4
static constexpr int32_t  ioReverseSolution{static_cast<int32_t>(0x1)};

/// @brief Field ioStrictlySimple offset 0xffffffff size 0x4
static constexpr int32_t  ioStrictlySimple{static_cast<int32_t>(0x2)};

/// @brief Field m_PolyOuts, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*  ___m_PolyOuts;

/// @brief Field m_ClipType, offset: 0x38, size: 0x4, def value: None
 ::Pathfinding::ClipperLib::ClipType  ___m_ClipType;

/// @brief Field m_Scanbeam, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::Scanbeam*  ___m_Scanbeam;

/// @brief Field m_ActiveEdges, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___m_ActiveEdges;

/// @brief Field m_SortedEdges, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::TEdge*  ___m_SortedEdges;

/// @brief Field m_IntersectNodes, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::IntersectNode*  ___m_IntersectNodes;

/// @brief Field m_ExecuteLocked, offset: 0x60, size: 0x1, def value: None
 bool  ___m_ExecuteLocked;

/// @brief Field m_ClipFillType, offset: 0x64, size: 0x4, def value: None
 ::Pathfinding::ClipperLib::PolyFillType  ___m_ClipFillType;

/// @brief Field m_SubjFillType, offset: 0x68, size: 0x4, def value: None
 ::Pathfinding::ClipperLib::PolyFillType  ___m_SubjFillType;

/// @brief Field m_Joins, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  ___m_Joins;

/// @brief Field m_GhostJoins, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  ___m_GhostJoins;

/// @brief Field m_UsingPolyTree, offset: 0x80, size: 0x1, def value: None
 bool  ___m_UsingPolyTree;

/// [CompilerGenerated]
/// @brief Field <ReverseSolution>k__BackingField, offset: 0x81, size: 0x1, def value: None
 bool  ____ReverseSolution_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StrictlySimple>k__BackingField, offset: 0x82, size: 0x1, def value: None
 bool  ____StrictlySimple_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_PolyOuts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_ClipType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_Scanbeam) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_ActiveEdges) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_SortedEdges) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_IntersectNodes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_ExecuteLocked) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_ClipFillType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_SubjFillType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_Joins) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_GhostJoins) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ___m_UsingPolyTree) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ____ReverseSolution_k__BackingField) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::Clipper, ____StrictlySimple_k__BackingField) == 0x82, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::Clipper) == 0x88, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
