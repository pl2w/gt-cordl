#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineUtility)
namespace GlobalNamespace {
struct SplineUtility_Segment;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class ISplineContainer;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineInfo;
}
namespace UnityEngine::Splines {
struct SplineKnotIndex;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine::Splines {
struct TangentMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineUtility*, "UnityEngine.Splines", "SplineUtility");
// [Extension]
// Dependencies System.Collections.Generic.IList`1<T>, System.Object, Unity.Mathematics.float3, UnityEngine.Splines.ISpline, UnityEngine.Splines.ISplineContainer
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineUtility
class CORDL_TYPE SplineUtility : public ::System::Object {
public:
// Declarations
using Segment = ::GlobalNamespace::SplineUtility_Segment;

/// [Extension]
/// @brief Method AddSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline ::UnityEngine::Splines::Spline* AddSpline(T  container) ;

/// [Extension]
/// @brief Method AddSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline void AddSpline(T  container, ::UnityEngine::Splines::Spline*  spline) ;

/// [Extension]
/// @brief Method AreKnotLinked, addr 0xb32b2f0, size 0x22c, virtual false, abstract: false, final false
static inline bool AreKnotLinked(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB) ;

/// @brief Method AreTangentsModifiable, addr 0xb32b51c, size 0x10, virtual false, abstract: false, final false
static inline bool AreTangentsModifiable(::UnityEngine::Splines::TangentMode  mode) ;

/// @brief Method Bernstein, addr 0xb32b0cc, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Bernstein(float_t  t, ::ArrayW<::Unity::Mathematics::float3>  bezier, int32_t  degree) ;

/// @brief Method CalculateCenterTangent, addr 0xb32b1f8, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 CalculateCenterTangent(::Unity::Mathematics::float3  prevPoint, ::Unity::Mathematics::float3  centerPoint, ::Unity::Mathematics::float3  nextPoint) ;

/// [Extension]
/// @brief Method CalculateLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t CalculateLength(T  spline, ::Unity::Mathematics::float4x4  transform) ;

/// @brief Method CalculatePreferredNormalForDirection, addr 0xb32a0c4, size 0x2d0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 CalculatePreferredNormalForDirection(::Unity::Mathematics::float3  splineDirection) ;

/// [Extension]
/// @brief Method CalculateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 CalculateUpVector(T  spline, int32_t  curveIndex, float_t  curveT) ;

/// [Extension]
/// @brief Method CalculateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 CalculateUpVector(T  spline, float_t  t) ;

/// @brief Method ComputeMaxError, addr 0xb32ae04, size 0x2c8, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<float_t,int32_t> ComputeMaxError(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::ArrayW<::Unity::Mathematics::float3>  positions, float_t  errorThreshold, bool  splineClosed) ;

/// [Extension]
/// @brief Method ConvertIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t ConvertIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// [Extension]
/// @brief Method ConvertIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t ConvertIndexUnit(T  spline, float_t  value, ::UnityEngine::Splines::PathIndexUnit  fromPathUnit, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// @brief Method ConvertNormalizedIndexUnit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t ConvertNormalizedIndexUnit(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  targetPathUnit) ;

/// [Extension]
/// @brief Method CopyKnotLinks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline void CopyKnotLinks(T  container, int32_t  srcSplineIndex, int32_t  destSplineIndex) ;

/// [Extension]
/// @brief Method CurveToSplineT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t CurveToSplineT(T  spline, float_t  curve) ;

/// [Extension]
/// @brief Method DuplicateKnot, addr 0xb32d4e0, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex DuplicateKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  originalKnot, int32_t  targetIndex) ;

/// [Extension]
/// @brief Method DuplicateSpline, addr 0xb32d68c, size 0x4c8, virtual false, abstract: false, final false
static inline void DuplicateSpline(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  fromKnot, ::UnityEngine::Splines::SplineKnotIndex  toKnot, ::by_ref<int32_t>  newSplineIndex) ;

/// [Extension]
/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline bool Evaluate(T  spline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector) ;

/// [Extension]
/// @brief Method EvaluateAcceleration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 EvaluateAcceleration(T  spline, float_t  t) ;

/// [Extension]
/// @brief Method EvaluateCurvature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t EvaluateCurvature(T  spline, float_t  t) ;

/// [Extension]
/// @brief Method EvaluateCurvatureCenter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 EvaluateCurvatureCenter(T  spline, float_t  t) ;

/// @brief Method EvaluateNurbs, addr 0xb326d34, size 0x314, virtual false, abstract: false, final false
static inline bool EvaluateNurbs(float_t  t, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  controlPoints, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  order, ::by_ref<::Unity::Mathematics::float3>  position) ;

/// [Extension]
/// @brief Method EvaluatePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 EvaluatePosition(T  spline, float_t  t) ;

/// [Extension]
/// @brief Method EvaluateTangent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 EvaluateTangent(T  spline, float_t  t) ;

/// [Extension]
/// @brief Method EvaluateUpVector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 EvaluateUpVector(T  spline, float_t  t) ;

/// [Extension]
/// @brief Method EvaluateUpVectorsForCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::ArrayW<::Unity::Mathematics::float3>  upVectors) ;

/// [Extension]
/// @brief Method EvaluateUpVectorsForCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void EvaluateUpVectorsForCurve(T  spline, int32_t  curveIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors) ;

/// @brief Method FitSplineToPoints, addr 0xb328330, size 0xabc, virtual false, abstract: false, final false
static inline bool FitSplineToPoints(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  points, float_t  errorThreshold, bool  closed, ::by_ref<::UnityEngine::Splines::Spline*>  spline) ;

/// @brief Method FitSplineToPointsStepInternal, addr 0xb328dec, size 0x12d8, virtual false, abstract: false, final false
static inline bool FitSplineToPointsStepInternal(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent, float_t  errorThreshold, bool  closed, bool  splineClosed, ::by_ref<::UnityEngine::Splines::Spline*>  spline) ;

/// @brief Method GenerateSplineFromTValues, addr 0xb32a394, size 0xa70, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::Spline* GenerateSplineFromTValues(::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*  allPoints, int32_t  rangeStart, int32_t  rangeEnd, bool  closed, ::ArrayW<float_t>  tValues, ::Unity::Mathematics::float3  leftTangent, ::Unity::Mathematics::float3  rightTangent) ;

/// @brief Method GetAutoSmoothKnot, addr 0xb327a14, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next) ;

/// @brief Method GetAutoSmoothKnot, addr 0xb327a74, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal) ;

/// @brief Method GetAutoSmoothKnot, addr 0xb327ad8, size 0x208, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot GetAutoSmoothKnot(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, ::Unity::Mathematics::float3  normal, float_t  tension) ;

/// @brief Method GetAutoSmoothTangent, addr 0xb3276b0, size 0x348, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  current, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// @brief Method GetAutoSmoothTangent, addr 0xb327584, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// [Extension]
/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::UnityEngine::Bounds GetBounds(T  spline) ;

/// [Extension]
/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::UnityEngine::Bounds GetBounds(T  spline, ::Unity::Mathematics::float4x4  transform) ;

/// @brief Method GetCatmullRomTangent, addr 0xb32757c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetCatmullRomTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next) ;

/// [Extension]
/// @brief Method GetCurveCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline int32_t GetCurveCount(T  spline) ;

/// @brief Method GetExplicitLinearTangent, addr 0xb327488, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetExplicitLinearTangent(::UnityEngine::Splines::BezierKnot  from, ::UnityEngine::Splines::BezierKnot  to) ;

/// @brief Method GetExplicitLinearTangent, addr 0xb327468, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetExplicitLinearTangent(::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  to) ;

/// @brief Method GetKnotRotation, addr 0xb327ce0, size 0x4f8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion GetKnotRotation(::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::GlobalNamespace::SplineUtility_Segment GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::GlobalNamespace::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::GlobalNamespace::SplineUtility_Segment GetNearestPoint(T  spline, ::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::GlobalNamespace::SplineUtility_Segment  range, ::by_ref<float_t>  distance, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  time, int32_t  segments) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t GetNearestPoint(T  spline, ::Unity::Mathematics::float3  point, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations) ;

/// @brief Method GetNearestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t GetNearestPoint(T  spline, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  nearest, ::by_ref<float_t>  t, int32_t  resolution, int32_t  iterations) ;

/// @brief Method GetNormalizedInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline float_t GetNormalizedInterpolation(T  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  originalPathUnit) ;

/// @brief Method GetNurbsBasisFunctions, addr 0xb327048, size 0x250, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> GetNurbsBasisFunctions(int32_t  degree, float_t  t, ::System::Collections::Generic::List_1<double_t>*  knotVector, int32_t  span) ;

/// [Extension]
/// @brief Method GetPointAtLinearDistance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::Unity::Mathematics::float3 GetPointAtLinearDistance(T  spline, float_t  fromT, float_t  relativeDistance, ::by_ref<float_t>  resultPointT) ;

/// [Obsolete("Use GetSubdivisionCount instead.", false)]
/// @brief Method GetSegmentCount, addr 0xb327298, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetSegmentCount(float_t  length, int32_t  resolution) ;

/// @brief Method GetSubdivisionCount, addr 0xb32729c, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetSubdivisionCount(float_t  length, int32_t  resolution) ;

/// @brief Method GetUniformAutoSmoothTangent, addr 0xb3279f8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetUniformAutoSmoothTangent(::Unity::Mathematics::float3  previous, ::Unity::Mathematics::float3  next, float_t  tension) ;

/// @brief Method IsIndexValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline bool IsIndexValid(T  container, ::UnityEngine::Splines::SplineKnotIndex  index) ;

/// [Extension]
/// @brief Method JoinSplinesOnKnots, addr 0xb32c6f0, size 0xdf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex JoinSplinesOnKnots(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  mainKnot, ::UnityEngine::Splines::SplineKnotIndex  otherKnot) ;

/// [Extension]
/// @brief Method LinkKnots, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline void LinkKnots(T  container, ::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB) ;

/// [Extension]
/// @brief Method Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::UnityEngine::Splines::BezierKnot Next(T  spline, int32_t  index) ;

/// @brief Method NextIndex, addr 0xb327444, size 0x24, virtual false, abstract: false, final false
static inline int32_t NextIndex(int32_t  index, int32_t  count, bool  wrap) ;

/// [Extension]
/// @brief Method NextIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline int32_t NextIndex(T  spline, int32_t  index) ;

/// [Extension]
/// @brief Method Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline ::UnityEngine::Splines::BezierKnot Previous(T  spline, int32_t  index) ;

/// @brief Method PreviousIndex, addr 0xb327424, size 0x20, virtual false, abstract: false, final false
static inline int32_t PreviousIndex(int32_t  index, int32_t  count, bool  wrap) ;

/// [Extension]
/// @brief Method PreviousIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline int32_t PreviousIndex(T  spline, int32_t  index) ;

/// @brief Method ReducePoints, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>)
static inline ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* ReducePoints(T  line, float_t  epsilon) ;

/// @brief Method ReducePoints, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>)
static inline void ReducePoints(T  line, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  results, float_t  epsilon) ;

/// [Extension]
/// @brief Method RemoveSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline bool RemoveSpline(T  container, ::UnityEngine::Splines::Spline*  spline) ;

/// [Extension]
/// @brief Method RemoveSplineAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline bool RemoveSplineAt(T  container, int32_t  splineIndex) ;

/// [Extension]
/// @brief Method ReorderSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline bool ReorderSpline(T  container, int32_t  previousSplineIndex, int32_t  newSplineIndex) ;

/// [Extension]
/// @brief Method ReverseFlow, addr 0xb32b52c, size 0x44, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::ISplineContainer*  container, int32_t  splineIndex) ;

/// @brief Method ReverseFlow, addr 0xb32c108, size 0x5e8, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::Spline*  spline) ;

/// @brief Method ReverseFlow, addr 0xb32b570, size 0xb98, virtual false, abstract: false, final false
static inline void ReverseFlow(::UnityEngine::Splines::SplineInfo  splineInfo) ;

/// [Extension]
/// @brief Method SetLinkedKnotPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline void SetLinkedKnotPosition(T  container, ::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method SetPivot, addr 0xb3281d8, size 0x158, virtual false, abstract: false, final false
static inline void SetPivot(::UnityEngine::Splines::SplineContainer*  container, ::UnityEngine::Vector3  position) ;

/// [Extension]
/// @brief Method SplineToCurveT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline int32_t SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT) ;

/// [Extension]
/// @brief Method SplineToCurveT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline int32_t SplineToCurveT(T  spline, float_t  splineT, ::by_ref<float_t>  curveT, bool  useLUT) ;

/// [Extension]
/// @brief Method SplitSplineOnKnot, addr 0xb32db54, size 0x4a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::SplineKnotIndex SplitSplineOnKnot(::UnityEngine::Splines::ISplineContainer*  container, ::UnityEngine::Splines::SplineKnotIndex  knotInfo) ;

/// [Extension]
/// @brief Method UnlinkKnots, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISplineContainer*>)
static inline void UnlinkKnots(T  container, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*  knots) ;

/// @brief Method WrapInterpolation, addr 0xb32735c, size 0xc8, virtual false, abstract: false, final false
static inline float_t WrapInterpolation(float_t  t, bool  closed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineUtility(SplineUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineUtility(SplineUtility const& ) = delete;

/// @brief Field CatmullRomTension offset 0xffffffff size 0x4
static constexpr float_t  CatmullRomTension{static_cast<float_t>(0.5f)};

/// @brief Field DefaultTension offset 0xffffffff size 0x4
static constexpr float_t  DefaultTension{static_cast<float_t>(0.33333334f)};

/// @brief Field DrawResolutionDefault offset 0xffffffff size 0x4
static constexpr int32_t  DrawResolutionDefault{static_cast<int32_t>(0xa)};

/// @brief Field PickResolutionDefault offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionDefault{static_cast<int32_t>(0x4)};

/// @brief Field PickResolutionMax offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionMax{static_cast<int32_t>(0x40)};

/// @brief Field PickResolutionMin offset 0xffffffff size 0x4
static constexpr int32_t  PickResolutionMin{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28005};

/// @brief Field k_SubdivisionCountMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SubdivisionCountMax{static_cast<int32_t>(0x400)};

/// @brief Field k_SubdivisionCountMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SubdivisionCountMin{static_cast<int32_t>(0x6)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
