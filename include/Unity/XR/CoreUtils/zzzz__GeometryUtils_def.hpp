#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GeometryUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryUtils)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GeometryUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GeometryUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GeometryUtils*, "Unity.XR.CoreUtils", "GeometryUtils");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GeometryUtils
class CORDL_TYPE GeometryUtils : public ::System::Object {
public:
// Declarations
/// @brief Field k_Forward, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_k_Forward, put=setStaticF_k_Forward)) ::UnityEngine::Vector3  k_Forward;

/// @brief Field k_HullEdgeDirections, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_HullEdgeDirections, put=setStaticF_k_HullEdgeDirections)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  k_HullEdgeDirections;

/// @brief Field k_HullIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_HullIndices, put=setStaticF_k_HullIndices)) ::System::Collections::Generic::HashSet_1<int32_t>*  k_HullIndices;

/// @brief Field k_Up, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_k_Up, put=setStaticF_k_Up)) ::UnityEngine::Vector3  k_Up;

/// @brief Field k_VerticalCorrection, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_VerticalCorrection, put=setStaticF_k_VerticalCorrection)) ::UnityEngine::Quaternion  k_VerticalCorrection;

/// @brief Field k_Zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_k_Zero, put=setStaticF_k_Zero)) ::UnityEngine::Vector3  k_Zero;

/// @brief Method ClosestPointOnLineSegment, addr 0xb3f3b68, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnLineSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method ClosestPointsOnTwoLineSegments, addr 0xb3f48b4, size 0xa3c, virtual false, abstract: false, final false
static inline bool ClosestPointsOnTwoLineSegments(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  aLineVector, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  bLineVector, ::by_ref<::UnityEngine::Vector3>  resultA, ::by_ref<::UnityEngine::Vector3>  resultB, double_t  parallelTest) ;

/// @brief Method ClosestPolygonApproach, addr 0xb3f52f0, size 0x32c, virtual false, abstract: false, final false
static inline void ClosestPolygonApproach(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verticesA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verticesB, ::by_ref<::UnityEngine::Vector3>  pointA, ::by_ref<::UnityEngine::Vector3>  pointB, float_t  parallelTest) ;

/// @brief Method ClosestTimesOnTwoLines, addr 0xb3f42a4, size 0x1b0, virtual false, abstract: false, final false
static inline bool ClosestTimesOnTwoLines(::UnityEngine::Vector3  positionA, ::UnityEngine::Vector3  velocityA, ::UnityEngine::Vector3  positionB, ::UnityEngine::Vector3  velocityB, ::by_ref<float_t>  s, ::by_ref<float_t>  t, double_t  parallelTest) ;

/// @brief Method ClosestTimesOnTwoLinesXZ, addr 0xb3f4744, size 0x170, virtual false, abstract: false, final false
static inline bool ClosestTimesOnTwoLinesXZ(::UnityEngine::Vector3  positionA, ::UnityEngine::Vector3  velocityA, ::UnityEngine::Vector3  positionB, ::UnityEngine::Vector3  velocityB, ::by_ref<float_t>  s, ::by_ref<float_t>  t, double_t  parallelTest) ;

/// @brief Method ConvexHull2D, addr 0xb3f5d94, size 0x47c, virtual false, abstract: false, final false
static inline bool ConvexHull2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  hull) ;

/// @brief Method ConvexPolygonArea, addr 0xb3f72a4, size 0x12c, virtual false, abstract: false, final false
static inline float_t ConvexPolygonArea(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices) ;

/// @brief Method FindClosestEdge, addr 0xb3f3920, size 0x248, virtual false, abstract: false, final false
static inline bool FindClosestEdge(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::UnityEngine::Vector3  point, ::by_ref<::UnityEngine::Vector3>  vertexA, ::by_ref<::UnityEngine::Vector3>  vertexB) ;

/// @brief Method NormalizeRotationKeepingUp, addr 0xb3f7988, size 0x214, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion NormalizeRotationKeepingUp(::UnityEngine::Quaternion  rot) ;

/// @brief Method OrientedMinimumBoundingBox2D, addr 0xb3f6398, size 0xa08, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 OrientedMinimumBoundingBox2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  convexHull, ::ArrayW<::UnityEngine::Vector3>  boundingBox) ;

/// @brief Method PointInPolygon, addr 0xb3f561c, size 0x39c, virtual false, abstract: false, final false
static inline bool PointInPolygon(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices) ;

/// @brief Method PointInPolygon3D, addr 0xb3f59b8, size 0x1f4, virtual false, abstract: false, final false
static inline bool PointInPolygon3D(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices) ;

/// @brief Method PointOnLineSegmentXZ, addr 0xb3f7910, size 0x78, virtual false, abstract: false, final false
static inline bool PointOnLineSegmentXZ(::UnityEngine::Vector3  testPoint, ::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, float_t  epsilon) ;

/// @brief Method PointOnOppositeSideOfPolygon, addr 0xb3f3d48, size 0x55c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 PointOnOppositeSideOfPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::UnityEngine::Vector3  point) ;

/// @brief Method PointOnPolygonBoundsXZ, addr 0xb3f770c, size 0x204, virtual false, abstract: false, final false
static inline bool PointOnPolygonBoundsXZ(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, float_t  epsilon) ;

/// @brief Method PolygonCentroid2D, addr 0xb3f6210, size 0x188, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 PolygonCentroid2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices) ;

/// @brief Method PolygonInPolygon, addr 0xb3f73d0, size 0x1ac, virtual false, abstract: false, final false
static inline bool PolygonInPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB) ;

/// @brief Method PolygonUVPoseFromPlanePose, addr 0xb3f7b9c, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose PolygonUVPoseFromPlanePose(::UnityEngine::Pose  pose) ;

/// @brief Method PolygonVertexToUV, addr 0xb3f7c64, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 PolygonVertexToUV(::UnityEngine::Vector3  vertexPos, ::UnityEngine::Pose  planePose, ::UnityEngine::Pose  uvPose) ;

/// @brief Method PolygonsWithinRange, addr 0xb3f757c, size 0x74, virtual false, abstract: false, final false
static inline bool PolygonsWithinRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB, float_t  maxDistance) ;

/// @brief Method PolygonsWithinSqRange, addr 0xb3f75f0, size 0x11c, virtual false, abstract: false, final false
static inline bool PolygonsWithinSqRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB, float_t  maxSqDistance) ;

/// @brief Method ProjectPointOnPlane, addr 0xb3f5bac, size 0x1e8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectPointOnPlane(::UnityEngine::Vector3  planeNormal, ::UnityEngine::Vector3  planePoint, ::UnityEngine::Vector3  point) ;

/// @brief Method RotateCalipers, addr 0xb3f6da0, size 0x474, virtual false, abstract: false, final false
static inline void RotateCalipers(::UnityEngine::Vector3  alignEdge, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB, ::by_ref<int32_t>  indexC, ::by_ref<int32_t>  indexD, ::by_ref<::UnityEngine::Vector3>  caliperA, ::by_ref<::UnityEngine::Vector3>  caliperB, ::by_ref<::UnityEngine::Vector3>  caliperC, ::by_ref<::UnityEngine::Vector3>  caliperD, ::by_ref<::UnityEngine::Vector3>  caliperAEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperBEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperCEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperDEndCorner) ;

/// @brief Method RotationForBox, addr 0xb3f7214, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RotationForBox(::ArrayW<::UnityEngine::Vector3>  vertices) ;

/// @brief Method TriangulatePolygon, addr 0xb3f4454, size 0x2f0, virtual false, abstract: false, final false
static inline void TriangulatePolygon(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  vertCount, bool  reverse) ;

static inline ::UnityEngine::Vector3 getStaticF_k_Forward() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_k_HullEdgeDirections() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_HullIndices() ;

static inline ::UnityEngine::Vector3 getStaticF_k_Up() ;

static inline ::UnityEngine::Quaternion getStaticF_k_VerticalCorrection() ;

static inline ::UnityEngine::Vector3 getStaticF_k_Zero() ;

static inline void setStaticF_k_Forward(::UnityEngine::Vector3  value) ;

static inline void setStaticF_k_HullEdgeDirections(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_k_HullIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

static inline void setStaticF_k_Up(::UnityEngine::Vector3  value) ;

static inline void setStaticF_k_VerticalCorrection(::UnityEngine::Quaternion  value) ;

static inline void setStaticF_k_Zero(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeometryUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryUtils(GeometryUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryUtils(GeometryUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30417};

/// @brief Field k_MostlyVertical offset 0xffffffff size 0x4
static constexpr float_t  k_MostlyVertical{static_cast<float_t>(0.95f)};

/// @brief Field k_TwoPi offset 0xffffffff size 0x4
static constexpr float_t  k_TwoPi{static_cast<float_t>(6.2831855f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GeometryUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
