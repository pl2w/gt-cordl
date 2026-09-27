#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Clipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_def.hpp"
#include "Unity/Cinemachine/zzzz__RectD_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct ClipType;
}
namespace Unity::Cinemachine {
struct EndType;
}
namespace Unity::Cinemachine {
struct FillRule;
}
namespace Unity::Cinemachine {
struct JoinType;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct PointD;
}
namespace Unity::Cinemachine {
struct PointInPolygonResult;
}
namespace Unity::Cinemachine {
class PolyPath64;
}
namespace Unity::Cinemachine {
class PolyPathD;
}
namespace Unity::Cinemachine {
class PolyTree64;
}
namespace Unity::Cinemachine {
class PolyTreeD;
}
namespace Unity::Cinemachine {
struct Rect64;
}
namespace Unity::Cinemachine {
struct RectD;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Clipper;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Clipper*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Clipper*, "Unity.Cinemachine", "Clipper");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.Rect64, Unity.Cinemachine.RectD
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Clipper
class CORDL_TYPE Clipper : public ::System::Object {
public:
// Declarations
/// @brief Field MaxInvalidRect64, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_MaxInvalidRect64, put=setStaticF_MaxInvalidRect64)) ::Unity::Cinemachine::Rect64  MaxInvalidRect64;

/// @brief Field MaxInvalidRectD, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_MaxInvalidRectD, put=setStaticF_MaxInvalidRectD)) ::Unity::Cinemachine::RectD  MaxInvalidRectD;

/// @brief Method AddPolyNodeToPaths, addr 0xaeed378, size 0x1b8, virtual false, abstract: false, final false
static inline void AddPolyNodeToPaths(::Unity::Cinemachine::PolyPath64*  polyPath, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method AddPolyNodeToPathsD, addr 0xaeed698, size 0x1b8, virtual false, abstract: false, final false
static inline void AddPolyNodeToPathsD(::Unity::Cinemachine::PolyPathD*  polyPath, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method Area, addr 0xaee914c, size 0x1a8, virtual false, abstract: false, final false
static inline double_t Area(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method Area, addr 0xaee945c, size 0x19c, virtual false, abstract: false, final false
static inline double_t Area(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method Area, addr 0xaee92f4, size 0x168, virtual false, abstract: false, final false
static inline double_t Area(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method Area, addr 0xaee95f8, size 0x168, virtual false, abstract: false, final false
static inline double_t Area(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method BooleanOp, addr 0xaee8478, size 0x108, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* BooleanOp(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip) ;

/// @brief Method BooleanOp, addr 0xaee85f4, size 0x104, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* BooleanOp(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, int32_t  roundingDecimalPrecision) ;

/// @brief Method Difference, addr 0xaee88b8, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Difference(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Difference, addr 0xaee8928, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Difference(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method GetBounds, addr 0xaeec434, size 0x2cc, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Rect64 GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method GetBounds, addr 0xaeec700, size 0x2e4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::RectD GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method InflatePaths, addr 0xaee8a80, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* InflatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  delta, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType, double_t  miterLimit) ;

/// @brief Method InflatePaths, addr 0xaee8b30, size 0x18c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* InflatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  delta, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType, double_t  miterLimit, int32_t  precision) ;

/// @brief Method Intersect, addr 0xaee8408, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Intersect(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Intersect, addr 0xaee8580, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Intersect(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method IsPositive, addr 0xaee9760, size 0x60, virtual false, abstract: false, final false
static inline bool IsPositive(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  poly) ;

/// @brief Method IsPositive, addr 0xaee97c0, size 0x60, virtual false, abstract: false, final false
static inline bool IsPositive(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  poly) ;

/// @brief Method MakePath, addr 0xaeec9e4, size 0x138, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* MakePath(::ArrayW<int32_t>  arr) ;

/// @brief Method MakePath, addr 0xaeecb1c, size 0x138, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* MakePath(::ArrayW<int64_t>  arr) ;

/// @brief Method MakePath, addr 0xaeecc54, size 0x138, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* MakePath(::ArrayW<double_t>  arr) ;

/// @brief Method MinkowskiDiff, addr 0xaee9144, size 0x8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* MinkowskiDiff(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed) ;

/// @brief Method MinkowskiSum, addr 0xaee913c, size 0x8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* MinkowskiSum(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed) ;

/// @brief Method OffsetPath, addr 0xaee9e50, size 0x208, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* OffsetPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int64_t  dx, int64_t  dy) ;

/// @brief Method Path64, addr 0xaeead9c, size 0x200, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Path64(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method Path64ToString, addr 0xaee9820, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW Path64ToString(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method PathD, addr 0xaeeb3fc, size 0x1f8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* PathD(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method PathDToString, addr 0xaee9b38, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW PathDToString(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method Paths64, addr 0xaeeaf9c, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Paths64(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method Paths64ToString, addr 0xaee99ac, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW Paths64ToString(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method PathsD, addr 0xaeeb1cc, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* PathsD(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method PathsDToString, addr 0xaee9cc4, size 0x18c, virtual false, abstract: false, final false
static inline ::StringW PathsDToString(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method PerpendicDistFromLineSqrd, addr 0xaeedb50, size 0xe0, virtual false, abstract: false, final false
static inline double_t PerpendicDistFromLineSqrd(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  line1, ::Unity::Cinemachine::Point64  line2) ;

/// @brief Method PerpendicDistFromLineSqrd, addr 0xaeeda98, size 0xb8, virtual false, abstract: false, final false
static inline double_t PerpendicDistFromLineSqrd(::Unity::Cinemachine::PointD  pt, ::Unity::Cinemachine::PointD  line1, ::Unity::Cinemachine::PointD  line2) ;

/// @brief Method PointInPolygon, addr 0xaeef170, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PointInPolygonResult PointInPolygon(::Unity::Cinemachine::Point64  pt, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  polygon) ;

/// @brief Method PointsNearEqual, addr 0xaeecd94, size 0x94, virtual false, abstract: false, final false
static inline bool PointsNearEqual(::Unity::Cinemachine::PointD  pt1, ::Unity::Cinemachine::PointD  pt2, double_t  distanceSqrd) ;

/// @brief Method PolyTreeToPaths64, addr 0xaeed530, size 0x168, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* PolyTreeToPaths64(::Unity::Cinemachine::PolyTree64*  polyTree) ;

/// @brief Method PolyTreeToPathsD, addr 0xaeed850, size 0x248, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* PolyTreeToPathsD(::Unity::Cinemachine::PolyTreeD*  polyTree) ;

/// @brief Method RDP, addr 0xaeedc30, size 0x270, virtual false, abstract: false, final false
static inline void RDP(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int32_t  begin, int32_t  end, double_t  epsSqrd, ::System::Collections::Generic::List_1<bool>*  flags) ;

/// @brief Method RDP, addr 0xaeee350, size 0x254, virtual false, abstract: false, final false
static inline void RDP(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, int32_t  begin, int32_t  end, double_t  epsSqrd, ::System::Collections::Generic::List_1<bool>*  flags) ;

/// @brief Method RamerDouglasPeucker, addr 0xaeee110, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* RamerDouglasPeucker(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  epsilon) ;

/// @brief Method RamerDouglasPeucker, addr 0xaeee808, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* RamerDouglasPeucker(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  epsilon) ;

/// @brief Method RamerDouglasPeucker, addr 0xaeedea0, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* RamerDouglasPeucker(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  epsilon) ;

/// @brief Method RamerDouglasPeucker, addr 0xaeee5a4, size 0x264, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* RamerDouglasPeucker(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  epsilon) ;

/// @brief Method ReversePath, addr 0xaeebe94, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* ReversePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method ReversePath, addr 0xaeebf34, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* ReversePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method ReversePaths, addr 0xaeebfd4, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method ReversePaths, addr 0xaeec204, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method ScalePath, addr 0xaeea0a8, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* ScalePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  scale) ;

/// @brief Method ScalePath, addr 0xaeea524, size 0x218, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* ScalePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  scale) ;

/// @brief Method ScalePath64, addr 0xaeea988, size 0x210, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* ScalePath64(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  scale) ;

/// @brief Method ScalePathD, addr 0xaeeab98, size 0x204, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* ScalePathD(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  scale) ;

/// @brief Method ScalePaths, addr 0xaeea2d8, size 0x24c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* ScalePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  scale) ;

/// @brief Method ScalePaths, addr 0xaeea73c, size 0x24c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* ScalePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  scale) ;

/// @brief Method ScalePaths64, addr 0xaee8cbc, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* ScalePaths64(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  scale) ;

/// @brief Method ScalePathsD, addr 0xaee8efc, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* ScalePathsD(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  scale) ;

/// @brief Method ScalePoint64, addr 0xaeea058, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 ScalePoint64(::Unity::Cinemachine::Point64  pt, double_t  scale) ;

/// @brief Method ScalePointD, addr 0xaeea090, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PointD ScalePointD(::Unity::Cinemachine::Point64  pt, double_t  scale) ;

/// @brief Method Sqr, addr 0xaeecd8c, size 0x8, virtual false, abstract: false, final false
static inline double_t Sqr(double_t  value) ;

/// @brief Method StripDuplicates, addr 0xaeed144, size 0x234, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* StripDuplicates(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosedPath) ;

/// @brief Method StripNearDuplicates, addr 0xaeece28, size 0x31c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* StripNearDuplicates(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  minEdgeLenSqrd, bool  isClosedPath) ;

/// @brief Method TranslatePath, addr 0xaeeb5f4, size 0x208, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* TranslatePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int64_t  dx, int64_t  dy) ;

/// @brief Method TranslatePath, addr 0xaeeba44, size 0x208, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* TranslatePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  dx, double_t  dy) ;

/// @brief Method TranslatePaths, addr 0xaeeb7fc, size 0x248, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* TranslatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, int64_t  dx, int64_t  dy) ;

/// @brief Method TranslatePaths, addr 0xaeebc4c, size 0x248, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* TranslatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  dx, double_t  dy) ;

/// @brief Method TrimCollinear, addr 0xaeeea48, size 0x618, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* TrimCollinear(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isOpen) ;

/// @brief Method TrimCollinear, addr 0xaeef060, size 0x110, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* TrimCollinear(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, int32_t  precision, bool  isOpen) ;

/// @brief Method Union, addr 0xaee8764, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Union, addr 0xaee86f8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Union, addr 0xaee8844, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Union, addr 0xaee87d4, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Xor, addr 0xaee899c, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Xor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

/// @brief Method Xor, addr 0xaee8a0c, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Xor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule) ;

static inline ::Unity::Cinemachine::Rect64 getStaticF_MaxInvalidRect64() ;

static inline ::Unity::Cinemachine::RectD getStaticF_MaxInvalidRectD() ;

static inline void setStaticF_MaxInvalidRect64(::Unity::Cinemachine::Rect64  value) ;

static inline void setStaticF_MaxInvalidRectD(::Unity::Cinemachine::RectD  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22503};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Clipper) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
