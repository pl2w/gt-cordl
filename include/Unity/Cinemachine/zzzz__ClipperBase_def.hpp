#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperBase)
namespace GlobalNamespace {
struct ClipperBase_IntersectListSort;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class Active;
}
namespace Unity::Cinemachine {
struct ClipType;
}
namespace Unity::Cinemachine {
struct FillRule;
}
namespace Unity::Cinemachine {
struct IntersectNode;
}
namespace Unity::Cinemachine {
class Joiner;
}
namespace Unity::Cinemachine {
struct LocalMinima;
}
namespace Unity::Cinemachine {
class OutPt;
}
namespace Unity::Cinemachine {
class OutRec;
}
namespace Unity::Cinemachine {
struct PathType;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
class PolyPathBase;
}
namespace Unity::Cinemachine {
struct Rect64;
}
namespace Unity::Cinemachine {
class Vertex;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ClipperBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ClipperBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ClipperBase*, "Unity.Cinemachine", "ClipperBase");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.ClipType, Unity.Cinemachine.FillRule
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ClipperBase
class CORDL_TYPE ClipperBase : public ::System::Object {
public:
// Declarations
using IntersectListSort = ::GlobalNamespace::ClipperBase_IntersectListSort;

 __declspec(property(get=get_PreserveCollinear, put=set_PreserveCollinear)) bool  PreserveCollinear;

 __declspec(property(get=get_ReverseSolution, put=set_ReverseSolution)) bool  ReverseSolution;

/// @brief Field <PreserveCollinear>k__BackingField, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreserveCollinear_k__BackingField, put=__cordl_internal_set__PreserveCollinear_k__BackingField)) bool  _PreserveCollinear_k__BackingField;

/// @brief Field <ReverseSolution>k__BackingField, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReverseSolution_k__BackingField, put=__cordl_internal_set__ReverseSolution_k__BackingField)) bool  _ReverseSolution_k__BackingField;

/// @brief Field _actives, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__actives, put=__cordl_internal_set__actives)) ::Unity::Cinemachine::Active*  _actives;

/// @brief Field _cliptype, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__cliptype, put=__cordl_internal_set__cliptype)) ::Unity::Cinemachine::ClipType  _cliptype;

/// @brief Field _currentBotY, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentBotY, put=__cordl_internal_set__currentBotY)) int64_t  _currentBotY;

/// @brief Field _currentLocMin, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentLocMin, put=__cordl_internal_set__currentLocMin)) int32_t  _currentLocMin;

/// @brief Field _fillrule, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__fillrule, put=__cordl_internal_set__fillrule)) ::Unity::Cinemachine::FillRule  _fillrule;

/// @brief Field _hasOpenPaths, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasOpenPaths, put=__cordl_internal_set__hasOpenPaths)) bool  _hasOpenPaths;

/// @brief Field _horzJoiners, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__horzJoiners, put=__cordl_internal_set__horzJoiners)) ::Unity::Cinemachine::Joiner*  _horzJoiners;

/// @brief Field _intersectList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__intersectList, put=__cordl_internal_set__intersectList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*  _intersectList;

/// @brief Field _isSortedMinimaList, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSortedMinimaList, put=__cordl_internal_set__isSortedMinimaList)) bool  _isSortedMinimaList;

/// @brief Field _joinerList, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinerList, put=__cordl_internal_set__joinerList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  _joinerList;

/// @brief Field _minimaList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__minimaList, put=__cordl_internal_set__minimaList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*  _minimaList;

/// @brief Field _outrecList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__outrecList, put=__cordl_internal_set__outrecList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  _outrecList;

/// @brief Field _scanlineList, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__scanlineList, put=__cordl_internal_set__scanlineList)) ::System::Collections::Generic::List_1<int64_t>*  _scanlineList;

/// @brief Field _sel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sel, put=__cordl_internal_set__sel)) ::Unity::Cinemachine::Active*  _sel;

/// @brief Field _succeeded, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get__succeeded, put=__cordl_internal_set__succeeded)) bool  _succeeded;

/// @brief Field _using_polytree, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__using_polytree, put=__cordl_internal_set__using_polytree)) bool  _using_polytree;

/// @brief Field _vertexList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__vertexList, put=__cordl_internal_set__vertexList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*  _vertexList;

/// @brief Method AddClip, addr 0xaef1444, size 0xc, virtual false, abstract: false, final false
inline void AddClip(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method AddJoin, addr 0xaef2710, size 0xdc, virtual false, abstract: false, final false
inline void AddJoin(::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2) ;

/// @brief Method AddLocMin, addr 0xaef0acc, size 0xf8, virtual false, abstract: false, final false
inline void AddLocMin(::Unity::Cinemachine::Vertex*  vert, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddLocalMaxPoly, addr 0xaef3570, size 0x290, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* AddLocalMaxPoly(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt) ;

/// @brief Method AddLocalMinPoly, addr 0xaef242c, size 0x2e4, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* AddLocalMinPoly(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt, bool  isNew) ;

/// @brief Method AddNewIntersectNode, addr 0xaef5830, size 0x208, virtual false, abstract: false, final false
inline void AddNewIntersectNode(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, int64_t  topY) ;

/// @brief Method AddOpenSubject, addr 0xaef1438, size 0xc, virtual false, abstract: false, final false
inline void AddOpenSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method AddOutPt, addr 0xaef3c4c, size 0x15c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* AddOutPt(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Point64  pt) ;

/// @brief Method AddPath, addr 0xaef1314, size 0x124, virtual false, abstract: false, final false
inline void AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddPaths, addr 0xaef1450, size 0x18, virtual false, abstract: false, final false
inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddPathsToVertexList, addr 0xaef0bc4, size 0x744, virtual false, abstract: false, final false
inline void AddPathsToVertexList(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddSubject, addr 0xaef1308, size 0xc, virtual false, abstract: false, final false
inline void AddSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method AddTrialHorzJoin, addr 0xaef5d14, size 0xc0, virtual false, abstract: false, final false
inline void AddTrialHorzJoin(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method AdjustCurrXAndCopyToSEL, addr 0xaef40f4, size 0x7c, virtual false, abstract: false, final false
inline void AdjustCurrXAndCopyToSEL(int64_t  topY) ;

/// @brief Method AreReallyClose, addr 0xaef60f0, size 0xa4, virtual false, abstract: false, final false
static inline bool AreReallyClose(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2) ;

/// @brief Method Area, addr 0xaef0224, size 0x58, virtual false, abstract: false, final false
static inline double_t Area(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method AreaTriangle, addr 0xaef027c, size 0x48, virtual false, abstract: false, final false
static inline double_t AreaTriangle(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3) ;

/// @brief Method BuildIntersectList, addr 0xaef520c, size 0x2f0, virtual false, abstract: false, final false
inline bool BuildIntersectList(int64_t  topY) ;

/// @brief Method BuildPath, addr 0xaef831c, size 0x1bc, virtual false, abstract: false, final false
inline bool BuildPath(::Unity::Cinemachine::OutPt*  op, bool  reverse, bool  isOpen, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method BuildPaths, addr 0xaef84d8, size 0x37c, virtual false, abstract: false, final false
inline bool BuildPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen) ;

/// @brief Method BuildTree, addr 0xaef8dec, size 0x40c, virtual false, abstract: false, final false
inline bool BuildTree(::Unity::Cinemachine::PolyPathBase*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen) ;

/// @brief Method CheckDisposeAdjacent, addr 0xaef7808, size 0x1dc, virtual false, abstract: false, final false
static inline bool CheckDisposeAdjacent(::by_ref<::Unity::Cinemachine::OutPt*>  op, ::Unity::Cinemachine::OutPt*  guard, ::Unity::Cinemachine::OutRec*  outRec) ;

/// [NullableContext(2)]
/// @brief Method CleanCollinear, addr 0xaef3800, size 0x1c4, virtual false, abstract: false, final false
inline void CleanCollinear(::Unity::Cinemachine::OutRec*  outrec) ;

/// @brief Method Clear, addr 0xaef05c4, size 0xb0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearSolution, addr 0xaef040c, size 0x148, virtual false, abstract: false, final false
inline void ClearSolution() ;

/// @brief Method CollinearSegsOverlap, addr 0xaef638c, size 0x12c, virtual false, abstract: false, final false
static inline bool CollinearSegsOverlap(::Unity::Cinemachine::Point64  seg1a, ::Unity::Cinemachine::Point64  seg1b, ::Unity::Cinemachine::Point64  seg2a, ::Unity::Cinemachine::Point64  seg2b) ;

/// [NullableContext(2)]
/// @brief Method CompleteSplit, addr 0xaef7a58, size 0x39c, virtual false, abstract: false, final false
inline void CompleteSplit(::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, /* [Nullable(1)] */ ::Unity::Cinemachine::OutRec*  outrec) ;

/// @brief Method ConvertHorzTrialsToJoins, addr 0xaef4c4c, size 0x3c8, virtual false, abstract: false, final false
inline void ConvertHorzTrialsToJoins() ;

/// @brief Method DeepCheckOwner, addr 0xaef8a34, size 0x3b8, virtual false, abstract: false, final false
inline bool DeepCheckOwner(::Unity::Cinemachine::OutRec*  outrec, ::Unity::Cinemachine::OutRec*  owner) ;

/// @brief Method DeleteFromAEL, addr 0xaef4084, size 0x70, virtual false, abstract: false, final false
inline void DeleteFromAEL(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method DeleteJoin, addr 0xaef69a8, size 0x14c, virtual false, abstract: false, final false
inline void DeleteJoin(::Unity::Cinemachine::Joiner*  joiner) ;

/// @brief Method DeleteTrialHorzJoin, addr 0xaef6884, size 0x124, virtual false, abstract: false, final false
inline void DeleteTrialHorzJoin(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method DisposeIntersectNodes, addr 0xaef0554, size 0x70, virtual false, abstract: false, final false
inline void DisposeIntersectNodes() ;

/// @brief Method DisposeOutPt, addr 0xaef6774, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::OutPt* DisposeOutPt(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method DistanceFromLineSqrd, addr 0xaef79e4, size 0x54, virtual false, abstract: false, final false
static inline double_t DistanceFromLineSqrd(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  linePt1, ::Unity::Cinemachine::Point64  linePt2) ;

/// @brief Method DistanceSqr, addr 0xaef7a38, size 0x20, virtual false, abstract: false, final false
static inline double_t DistanceSqr(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2) ;

/// @brief Method DoHorizontal, addr 0xaef427c, size 0x9d0, virtual false, abstract: false, final false
inline void DoHorizontal(::Unity::Cinemachine::Active*  horz) ;

/// @brief Method DoIntersections, addr 0xaef5014, size 0x2c, virtual false, abstract: false, final false
inline void DoIntersections(int64_t  topY) ;

/// @brief Method DoMaxima, addr 0xaef5dd4, size 0x300, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Active* DoMaxima(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method DoSplitOp, addr 0xaef7f1c, size 0x400, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* DoSplitOp(::by_ref<::Unity::Cinemachine::OutPt*>  outRecOp, ::Unity::Cinemachine::OutPt*  splitOp) ;

/// @brief Method DoTopOfScanbeam, addr 0xaef5040, size 0xf8, virtual false, abstract: false, final false
inline void DoTopOfScanbeam(int64_t  y) ;

/// @brief Method EdgesAdjacentInAEL, addr 0xaef03d4, size 0x38, virtual false, abstract: false, final false
static inline bool EdgesAdjacentInAEL(::Unity::Cinemachine::IntersectNode  inode) ;

/// @brief Method ExecuteInternal, addr 0xaef4170, size 0x10c, virtual false, abstract: false, final false
inline void ExecuteInternal(::Unity::Cinemachine::ClipType  ct, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method ExtractFromSEL, addr 0xaef5a38, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Active* ExtractFromSEL(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method FindEdgeWithMatchingLocMin, addr 0xaef3fc8, size 0xbc, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Active* FindEdgeWithMatchingLocMin(::Unity::Cinemachine::Active*  e) ;

/// @brief Method FindJoinParent, addr 0xaef6cd0, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Joiner* FindJoinParent(::Unity::Cinemachine::Joiner*  joiner, ::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method FindTrialJoinParent, addr 0xaef6af4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Joiner* FindTrialJoinParent(::by_ref<::Unity::Cinemachine::Joiner*>  joiner, ::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method FixSelfIntersects, addr 0xaef7e3c, size 0xe0, virtual false, abstract: false, final false
inline void FixSelfIntersects(::by_ref<::Unity::Cinemachine::OutPt*>  op) ;

/// @brief Method GetBounds, addr 0xaef91f8, size 0xe38, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Rect64 GetBounds() ;

/// @brief Method GetBounds, addr 0xaef88ac, size 0x188, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Rect64 GetBounds(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method GetCurrYMaximaVertex, addr 0xaeeffe8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Vertex* GetCurrYMaximaVertex(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method GetDx, addr 0xaeef924, size 0x38, virtual false, abstract: false, final false
static inline double_t GetDx(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2) ;

/// @brief Method GetHorzExtendedHorzSeg, addr 0xaef6b4c, size 0x184, virtual false, abstract: false, final false
inline bool GetHorzExtendedHorzSeg(::by_ref<::Unity::Cinemachine::OutPt*>  op, ::by_ref<::Unity::Cinemachine::OutPt*>  op2) ;

/// @brief Method GetHorzMaximaPair, addr 0xaef005c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Active* GetHorzMaximaPair(::Unity::Cinemachine::Active*  horz, ::Unity::Cinemachine::Vertex*  maxVert) ;

/// @brief Method GetHorzTrialParent, addr 0xaef6518, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Joiner* GetHorzTrialParent(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method GetIntersectPoint, addr 0xaeefb58, size 0x34c, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 GetIntersectPoint(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method GetMaximaPair, addr 0xaeeffb8, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Active* GetMaximaPair(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method GetPolyType, addr 0xaeefb1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PathType GetPolyType(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method GetPrevHotEdge, addr 0xaeef8d0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Active* GetPrevHotEdge(::Unity::Cinemachine::Active*  ae) ;

/// [NullableContext(2)]
/// @brief Method GetRealOutRec, addr 0xaef02c4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::OutRec* GetRealOutRec(::Unity::Cinemachine::OutRec*  outRec) ;

/// @brief Method HasLocMinAtY, addr 0xaef09e4, size 0x8c, virtual false, abstract: false, final false
inline bool HasLocMinAtY(int64_t  y) ;

/// @brief Method HorzEdgesOverlap, addr 0xaef64b8, size 0x60, virtual false, abstract: false, final false
static inline bool HorzEdgesOverlap(int64_t  x1a, int64_t  x1b, int64_t  x2a, int64_t  x2b) ;

/// @brief Method HorzIsSpike, addr 0xaef5b68, size 0x60, virtual false, abstract: false, final false
inline bool HorzIsSpike(::Unity::Cinemachine::Active*  horz) ;

/// @brief Method Insert1Before2InSEL, addr 0xaef5a88, size 0x6c, virtual false, abstract: false, final false
inline void Insert1Before2InSEL(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method InsertLeftEdge, addr 0xaef1b98, size 0x108, virtual false, abstract: false, final false
inline void InsertLeftEdge(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method InsertLocalMinimaIntoAEL, addr 0xaef1d08, size 0x724, virtual false, abstract: false, final false
inline void InsertLocalMinimaIntoAEL(int64_t  botY) ;

/// @brief Method InsertOp, addr 0xaef66b0, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::OutPt* InsertOp(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutPt*  insertAfter) ;

/// @brief Method InsertRightEdge, addr 0xaef1ca0, size 0x68, virtual false, abstract: false, final false
inline void InsertRightEdge(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method InsertScanline, addr 0xaef083c, size 0x98, virtual false, abstract: false, final false
inline void InsertScanline(int64_t  y) ;

/// @brief Method IntersectEdges, addr 0xaef27ec, size 0x6a8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* IntersectEdges(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt) ;

/// @brief Method IsContributingClosed, addr 0xaef1468, size 0x1dc, virtual false, abstract: false, final false
inline bool IsContributingClosed(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsContributingOpen, addr 0xaef1644, size 0x7c, virtual false, abstract: false, final false
inline bool IsContributingOpen(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsFront, addr 0xaeef8fc, size 0x28, virtual false, abstract: false, final false
static inline bool IsFront(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsHeadingLeftHorz, addr 0xaeefabc, size 0x24, virtual false, abstract: false, final false
static inline bool IsHeadingLeftHorz(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsHeadingRightHorz, addr 0xaeefa98, size 0x24, virtual false, abstract: false, final false
static inline bool IsHeadingRightHorz(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsHorizontal, addr 0xaeefa78, size 0x20, virtual false, abstract: false, final false
static inline bool IsHorizontal(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsHotEdge, addr 0xaeef84c, size 0x1c, virtual false, abstract: false, final false
static inline bool IsHotEdge(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsMaxima, addr 0xaeeff94, size 0x24, virtual false, abstract: false, final false
static inline bool IsMaxima(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsMaxima, addr 0xaeeff7c, size 0x18, virtual false, abstract: false, final false
static inline bool IsMaxima(::Unity::Cinemachine::Vertex*  vertex) ;

/// @brief Method IsOdd, addr 0xaeef844, size 0x8, virtual false, abstract: false, final false
static inline bool IsOdd(int32_t  val) ;

/// @brief Method IsOpen, addr 0xaeef868, size 0x14, virtual false, abstract: false, final false
static inline bool IsOpen(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsOpenEnd, addr 0xaeef87c, size 0x38, virtual false, abstract: false, final false
static inline bool IsOpenEnd(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method IsOpenEnd, addr 0xaeef8b4, size 0x1c, virtual false, abstract: false, final false
static inline bool IsOpenEnd(::Unity::Cinemachine::Vertex*  v) ;

/// @brief Method IsSamePolyType, addr 0xaeefb30, size 0x28, virtual false, abstract: false, final false
static inline bool IsSamePolyType(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method IsValidAelOrder, addr 0xaef1928, size 0x270, virtual false, abstract: false, final false
inline bool IsValidAelOrder(::Unity::Cinemachine::Active*  resident, ::Unity::Cinemachine::Active*  newcomer) ;

/// [NullableContext(2)]
/// @brief Method IsValidClosedPath, addr 0xaef6194, size 0x144, virtual false, abstract: false, final false
static inline bool IsValidClosedPath(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method IsValidPath, addr 0xaef60d4, size 0x1c, virtual false, abstract: false, final false
static inline bool IsValidPath(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method JoinOutrecPaths, addr 0xaef39c4, size 0x288, virtual false, abstract: false, final false
inline void JoinOutrecPaths(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

static inline ::Unity::Cinemachine::ClipperBase* New_ctor() ;

/// @brief Method NextVertex, addr 0xaeefef4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Vertex* NextVertex(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method OutPtInTrialHorzList, addr 0xaef6578, size 0x40, virtual false, abstract: false, final false
inline bool OutPtInTrialHorzList(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method OutrecIsAscending, addr 0xaef0354, size 0x28, virtual false, abstract: false, final false
inline bool OutrecIsAscending(::Unity::Cinemachine::Active*  hotEdge) ;

/// @brief Method Path1InsidePath2, addr 0xaef8854, size 0x58, virtual false, abstract: false, final false
inline bool Path1InsidePath2(::Unity::Cinemachine::OutRec*  or1, ::Unity::Cinemachine::OutRec*  or2) ;

/// @brief Method PointBetween, addr 0xaef6330, size 0x5c, virtual false, abstract: false, final false
static inline bool PointBetween(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  corner1, ::Unity::Cinemachine::Point64  corner2) ;

/// [NullableContext(2)]
/// @brief Method PopHorz, addr 0xaef31ac, size 0x4c, virtual false, abstract: false, final false
inline bool PopHorz(::by_ref<::Unity::Cinemachine::Active*>  ae) ;

/// @brief Method PopLocalMinima, addr 0xaef0a70, size 0x5c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::LocalMinima PopLocalMinima() ;

/// @brief Method PopScanline, addr 0xaef08d4, size 0x110, virtual false, abstract: false, final false
inline bool PopScanline(::by_ref<int64_t>  y) ;

/// @brief Method PrevPrevVertex, addr 0xaeeff30, size 0x4c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Vertex* PrevPrevVertex(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method ProcessIntersectList, addr 0xaef54fc, size 0x334, virtual false, abstract: false, final false
inline void ProcessIntersectList() ;

/// @brief Method ProcessJoin, addr 0xaef6d18, size 0xaf0, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutRec* ProcessJoin(::Unity::Cinemachine::Joiner*  j) ;

/// @brief Method ProcessJoinList, addr 0xaef5138, size 0xd4, virtual false, abstract: false, final false
inline void ProcessJoinList() ;

/// @brief Method PushHorz, addr 0xaef316c, size 0x40, virtual false, abstract: false, final false
inline void PushHorz(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method Reset, addr 0xaef0674, size 0x1c8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetHorzDirection, addr 0xaef5af4, size 0x74, virtual false, abstract: false, final false
inline bool ResetHorzDirection(::Unity::Cinemachine::Active*  horz, /* [Nullable(2)] */ ::Unity::Cinemachine::Active*  maxPair, ::by_ref<int64_t>  leftX, ::by_ref<int64_t>  rightX) ;

/// @brief Method SafeDeleteOutPtJoiners, addr 0xaef67cc, size 0xb8, virtual false, abstract: false, final false
inline void SafeDeleteOutPtJoiners(::Unity::Cinemachine::OutPt*  op) ;

/// @brief Method SafeDisposeOutPts, addr 0xaef6604, size 0xac, virtual false, abstract: false, final false
inline void SafeDisposeOutPts(::by_ref<::Unity::Cinemachine::OutPt*>  op) ;

/// @brief Method SetDx, addr 0xaeefea4, size 0x50, virtual false, abstract: false, final false
static inline void SetDx(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method SetSides, addr 0xaef00f4, size 0x38, virtual false, abstract: false, final false
static inline void SetSides(::Unity::Cinemachine::OutRec*  outrec, ::Unity::Cinemachine::Active*  startEdge, ::Unity::Cinemachine::Active*  endEdge) ;

/// @brief Method SetWindCountForClosedPathEdge, addr 0xaef16c0, size 0x198, virtual false, abstract: false, final false
inline void SetWindCountForClosedPathEdge(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method SetWindCountForOpenPathEdge, addr 0xaef1858, size 0xd0, virtual false, abstract: false, final false
inline void SetWindCountForOpenPathEdge(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method StartOpenPath, addr 0xaef2f80, size 0x1ec, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::OutPt* StartOpenPath(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Point64  pt) ;

/// @brief Method SwapActives, addr 0xaeefae0, size 0x3c, virtual false, abstract: false, final false
static inline void SwapActives(::by_ref<::Unity::Cinemachine::Active*>  ae1, ::by_ref<::Unity::Cinemachine::Active*>  ae2) ;

/// @brief Method SwapFrontBackSides, addr 0xaef037c, size 0x58, virtual false, abstract: false, final false
static inline void SwapFrontBackSides(::Unity::Cinemachine::OutRec*  outrec) ;

/// @brief Method SwapOutrecs, addr 0xaef012c, size 0xf8, virtual false, abstract: false, final false
static inline void SwapOutrecs(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method SwapPositionsInAEL, addr 0xaef2e94, size 0xec, virtual false, abstract: false, final false
inline void SwapPositionsInAEL(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2) ;

/// @brief Method TestJoinWithNext1, addr 0xaef33b4, size 0xb0, virtual false, abstract: false, final false
inline bool TestJoinWithNext1(::Unity::Cinemachine::Active*  e, int64_t  currY) ;

/// @brief Method TestJoinWithNext2, addr 0xaef3464, size 0x10c, virtual false, abstract: false, final false
inline bool TestJoinWithNext2(::Unity::Cinemachine::Active*  e, ::Unity::Cinemachine::Point64  currPt) ;

/// @brief Method TestJoinWithPrev1, addr 0xaef31f8, size 0xb0, virtual false, abstract: false, final false
inline bool TestJoinWithPrev1(::Unity::Cinemachine::Active*  e, int64_t  currY) ;

/// @brief Method TestJoinWithPrev2, addr 0xaef32a8, size 0x10c, virtual false, abstract: false, final false
inline bool TestJoinWithPrev2(::Unity::Cinemachine::Active*  e, ::Unity::Cinemachine::Point64  currPt) ;

/// @brief Method TopX, addr 0xaeef95c, size 0x11c, virtual false, abstract: false, final false
static inline int64_t TopX(::Unity::Cinemachine::Active*  ae, int64_t  currentY) ;

/// @brief Method TrimHorz, addr 0xaef5bc8, size 0x14c, virtual false, abstract: false, final false
inline bool TrimHorz(::Unity::Cinemachine::Active*  horzEdge, bool  preserveCollinear) ;

/// @brief Method UncoupleOutRec, addr 0xaef02dc, size 0x78, virtual false, abstract: false, final false
static inline void UncoupleOutRec(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method UpdateEdgeIntoAEL, addr 0xaef3da8, size 0x220, virtual false, abstract: false, final false
inline void UpdateEdgeIntoAEL(::Unity::Cinemachine::Active*  ae) ;

/// @brief Method UpdateOutrecOwner, addr 0xaef7df4, size 0x48, virtual false, abstract: false, final false
static inline void UpdateOutrecOwner(::Unity::Cinemachine::OutRec*  outrec) ;

/// [NullableContext(2)]
/// @brief Method ValidateClosedPathEx, addr 0xaef65b8, size 0x4c, virtual false, abstract: false, final false
inline bool ValidateClosedPathEx(::by_ref<::Unity::Cinemachine::OutPt*>  op) ;

/// @brief Method ValueBetween, addr 0xaef62d8, size 0x30, virtual false, abstract: false, final false
static inline bool ValueBetween(int64_t  val, int64_t  end1, int64_t  end2) ;

/// @brief Method ValueEqualOrBetween, addr 0xaef6308, size 0x28, virtual false, abstract: false, final false
static inline bool ValueEqualOrBetween(int64_t  val, int64_t  end1, int64_t  end2) ;

constexpr bool const& __cordl_internal_get__PreserveCollinear_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreserveCollinear_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ReverseSolution_k__BackingField() const;

constexpr bool& __cordl_internal_get__ReverseSolution_k__BackingField() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get__actives() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get__actives() ;

constexpr ::Unity::Cinemachine::ClipType const& __cordl_internal_get__cliptype() const;

constexpr ::Unity::Cinemachine::ClipType& __cordl_internal_get__cliptype() ;

constexpr int64_t const& __cordl_internal_get__currentBotY() const;

constexpr int64_t& __cordl_internal_get__currentBotY() ;

constexpr int32_t const& __cordl_internal_get__currentLocMin() const;

constexpr int32_t& __cordl_internal_get__currentLocMin() ;

constexpr ::Unity::Cinemachine::FillRule const& __cordl_internal_get__fillrule() const;

constexpr ::Unity::Cinemachine::FillRule& __cordl_internal_get__fillrule() ;

constexpr bool const& __cordl_internal_get__hasOpenPaths() const;

constexpr bool& __cordl_internal_get__hasOpenPaths() ;

constexpr ::Unity::Cinemachine::Joiner* const& __cordl_internal_get__horzJoiners() const;

constexpr ::Unity::Cinemachine::Joiner*& __cordl_internal_get__horzJoiners() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>* const& __cordl_internal_get__intersectList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*& __cordl_internal_get__intersectList() ;

constexpr bool const& __cordl_internal_get__isSortedMinimaList() const;

constexpr bool& __cordl_internal_get__isSortedMinimaList() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>* const& __cordl_internal_get__joinerList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*& __cordl_internal_get__joinerList() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>* const& __cordl_internal_get__minimaList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*& __cordl_internal_get__minimaList() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>* const& __cordl_internal_get__outrecList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*& __cordl_internal_get__outrecList() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get__scanlineList() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get__scanlineList() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get__sel() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get__sel() ;

constexpr bool const& __cordl_internal_get__succeeded() const;

constexpr bool& __cordl_internal_get__succeeded() ;

constexpr bool const& __cordl_internal_get__using_polytree() const;

constexpr bool& __cordl_internal_get__using_polytree() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>* const& __cordl_internal_get__vertexList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*& __cordl_internal_get__vertexList() ;

constexpr void __cordl_internal_set__PreserveCollinear_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ReverseSolution_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__actives(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set__cliptype(::Unity::Cinemachine::ClipType  value) ;

constexpr void __cordl_internal_set__currentBotY(int64_t  value) ;

constexpr void __cordl_internal_set__currentLocMin(int32_t  value) ;

constexpr void __cordl_internal_set__fillrule(::Unity::Cinemachine::FillRule  value) ;

constexpr void __cordl_internal_set__hasOpenPaths(bool  value) ;

constexpr void __cordl_internal_set__horzJoiners(::Unity::Cinemachine::Joiner*  value) ;

constexpr void __cordl_internal_set__intersectList(::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*  value) ;

constexpr void __cordl_internal_set__isSortedMinimaList(bool  value) ;

constexpr void __cordl_internal_set__joinerList(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  value) ;

constexpr void __cordl_internal_set__minimaList(::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*  value) ;

constexpr void __cordl_internal_set__outrecList(::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  value) ;

constexpr void __cordl_internal_set__scanlineList(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set__sel(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set__succeeded(bool  value) ;

constexpr void __cordl_internal_set__using_polytree(bool  value) ;

constexpr void __cordl_internal_set__vertexList(::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*  value) ;

/// @brief Method .ctor, addr 0xaeef61c, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PreserveCollinear, addr 0xaeef5fc, size 0x8, virtual false, abstract: false, final false
inline bool get_PreserveCollinear() ;

/// [CompilerGenerated]
/// @brief Method get_ReverseSolution, addr 0xaeef60c, size 0x8, virtual false, abstract: false, final false
inline bool get_ReverseSolution() ;

/// [CompilerGenerated]
/// @brief Method set_PreserveCollinear, addr 0xaeef604, size 0x8, virtual false, abstract: false, final false
inline void set_PreserveCollinear(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReverseSolution, addr 0xaeef614, size 0x8, virtual false, abstract: false, final false
inline void set_ReverseSolution(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperBase(ClipperBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperBase(ClipperBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22515};

/// @brief Field _cliptype, offset: 0x10, size: 0x4, def value: None
 ::Unity::Cinemachine::ClipType  ____cliptype;

/// @brief Field _fillrule, offset: 0x14, size: 0x4, def value: None
 ::Unity::Cinemachine::FillRule  ____fillrule;

/// [Nullable(2)]
/// @brief Field _actives, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ____actives;

/// [Nullable(2)]
/// @brief Field _sel, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ____sel;

/// [Nullable(2)]
/// @brief Field _horzJoiners, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::Joiner*  ____horzJoiners;

/// @brief Field _minimaList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*  ____minimaList;

/// @brief Field _intersectList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*  ____intersectList;

/// @brief Field _vertexList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*  ____vertexList;

/// @brief Field _outrecList, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  ____outrecList;

/// [Nullable(new[] { 1, 2 })]
/// @brief Field _joinerList, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  ____joinerList;

/// @brief Field _scanlineList, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ____scanlineList;

/// @brief Field _currentLocMin, offset: 0x60, size: 0x4, def value: None
 int32_t  ____currentLocMin;

/// @brief Field _currentBotY, offset: 0x68, size: 0x8, def value: None
 int64_t  ____currentBotY;

/// @brief Field _isSortedMinimaList, offset: 0x70, size: 0x1, def value: None
 bool  ____isSortedMinimaList;

/// @brief Field _hasOpenPaths, offset: 0x71, size: 0x1, def value: None
 bool  ____hasOpenPaths;

/// @brief Field _using_polytree, offset: 0x72, size: 0x1, def value: None
 bool  ____using_polytree;

/// @brief Field _succeeded, offset: 0x73, size: 0x1, def value: None
 bool  ____succeeded;

/// [CompilerGenerated]
/// @brief Field <PreserveCollinear>k__BackingField, offset: 0x74, size: 0x1, def value: None
 bool  ____PreserveCollinear_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReverseSolution>k__BackingField, offset: 0x75, size: 0x1, def value: None
 bool  ____ReverseSolution_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____cliptype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____fillrule) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____actives) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____sel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____horzJoiners) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____minimaList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____intersectList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____vertexList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____outrecList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____joinerList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____scanlineList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____currentLocMin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____currentBotY) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____isSortedMinimaList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____hasOpenPaths) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____using_polytree) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____succeeded) == 0x73, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____PreserveCollinear_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperBase, ____ReverseSolution_k__BackingField) == 0x75, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ClipperBase) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine
