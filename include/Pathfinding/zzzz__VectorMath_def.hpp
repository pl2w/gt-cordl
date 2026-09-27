#pragma once
// IWYU pragma private; include "Pathfinding/VectorMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorMath)
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
struct Side;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class VectorMath;
}
// Write type traits
MARK_REF_T(::Pathfinding::VectorMath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::VectorMath*, "Pathfinding", "VectorMath");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.VectorMath
class CORDL_TYPE VectorMath : public ::System::Object {
public:
// Declarations
/// @brief Method ClampMagnitudeXZ, addr 0x5e4ee00, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClampMagnitudeXZ(::UnityEngine::Vector3  v, float_t  maxMagnitude) ;

/// @brief Method ClosestPointOnLine, addr 0x5e4d258, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnLine(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point) ;

/// @brief Method ClosestPointOnLineFactor, addr 0x5e4d4b8, size 0x84, virtual false, abstract: false, final false
static inline float_t ClosestPointOnLineFactor(::Pathfinding::Int2  lineStart, ::Pathfinding::Int2  lineEnd, ::Pathfinding::Int2  point) ;

/// @brief Method ClosestPointOnLineFactor, addr 0x5e4d404, size 0xb4, virtual false, abstract: false, final false
static inline float_t ClosestPointOnLineFactor(::Pathfinding::Int3  lineStart, ::Pathfinding::Int3  lineEnd, ::Pathfinding::Int3  point) ;

/// @brief Method ClosestPointOnLineFactor, addr 0x5e4d398, size 0x6c, virtual false, abstract: false, final false
static inline float_t ClosestPointOnLineFactor(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point) ;

/// @brief Method ClosestPointOnSegment, addr 0x5e4d53c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnSegment(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point) ;

/// @brief Method ClosestPointOnSegmentXZ, addr 0x5e4d5d0, size 0x184, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnSegmentXZ(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point) ;

/// @brief Method ComplexMultiply, addr 0x5e4d220, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ComplexMultiply(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method ComplexMultiplyConjugate, addr 0x5e4d23c, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ComplexMultiplyConjugate(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method IsClockwiseMarginXZ, addr 0x5e4dd70, size 0x38, virtual false, abstract: false, final false
static inline bool IsClockwiseMarginXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method IsClockwiseOrColinear, addr 0x5e4de20, size 0x30, virtual false, abstract: false, final false
static inline bool IsClockwiseOrColinear(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  c) ;

/// @brief Method IsClockwiseOrColinearXZ, addr 0x5e4ddfc, size 0x24, virtual false, abstract: false, final false
static inline bool IsClockwiseOrColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c) ;

/// @brief Method IsClockwiseXZ, addr 0x5e4ddd8, size 0x24, virtual false, abstract: false, final false
static inline bool IsClockwiseXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c) ;

/// @brief Method IsClockwiseXZ, addr 0x5e4dda8, size 0x30, virtual false, abstract: false, final false
static inline bool IsClockwiseXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method IsColinear, addr 0x5e4debc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c) ;

/// @brief Method IsColinear, addr 0x5e4de50, size 0x6c, virtual false, abstract: false, final false
static inline bool IsColinear(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method IsColinearAlmostXZ, addr 0x5e4df60, size 0x24, virtual false, abstract: false, final false
static inline bool IsColinearAlmostXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c) ;

/// @brief Method IsColinearXZ, addr 0x5e4def8, size 0x24, virtual false, abstract: false, final false
static inline bool IsColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c) ;

/// @brief Method IsColinearXZ, addr 0x5e4df1c, size 0x44, virtual false, abstract: false, final false
static inline bool IsColinearXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method LineCircleIntersectionFactor, addr 0x5e4ea54, size 0xe4, virtual false, abstract: false, final false
static inline float_t LineCircleIntersectionFactor(::UnityEngine::Vector3  circleCenter, ::UnityEngine::Vector3  linePoint1, ::UnityEngine::Vector3  linePoint2, float_t  radius) ;

/// @brief Method LineDirIntersectionPointXZ, addr 0x5e4e188, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LineDirIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  dir1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  dir2) ;

/// @brief Method LineDirIntersectionPointXZ, addr 0x5e4e1e4, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LineDirIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  dir1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  dir2, ::by_ref<bool>  intersects) ;

/// @brief Method LineIntersectionFactorXZ, addr 0x5e4e32c, size 0xe4, virtual false, abstract: false, final false
static inline bool LineIntersectionFactorXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2, ::by_ref<float_t>  factor1, ::by_ref<float_t>  factor2) ;

/// @brief Method LineIntersectionFactorXZ, addr 0x5e4e410, size 0x94, virtual false, abstract: false, final false
static inline bool LineIntersectionFactorXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<float_t>  factor1, ::by_ref<float_t>  factor2) ;

/// @brief Method LineIntersectionFactorXZ, addr 0x5e4e578, size 0x58, virtual false, abstract: false, final false
static inline float_t LineIntersectionFactorXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2) ;

/// @brief Method LineIntersectionPoint, addr 0x5e4e68c, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 LineIntersectionPoint(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  end1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  end2) ;

/// @brief Method LineIntersectionPoint, addr 0x5e4e6e0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 LineIntersectionPoint(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  end1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  end2, ::by_ref<bool>  intersects) ;

/// @brief Method LineIntersectionPointXZ, addr 0x5e4e5d0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LineIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2) ;

/// @brief Method LineIntersectionPointXZ, addr 0x5e4e610, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LineIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<bool>  intersects) ;

/// @brief Method LineLineIntersectionFactor, addr 0x5e4e138, size 0x50, virtual false, abstract: false, final false
static inline bool LineLineIntersectionFactor(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  dir1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  dir2, ::by_ref<float_t>  t) ;

/// @brief Method LineRayIntersectionFactorXZ, addr 0x5e4e4a4, size 0xd4, virtual false, abstract: false, final false
static inline float_t LineRayIntersectionFactorXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2) ;

/// @brief Method MagnitudeXZ, addr 0x5e4ee34, size 0x14, virtual false, abstract: false, final false
static inline float_t MagnitudeXZ(::UnityEngine::Vector3  v) ;

/// @brief Method Normalize, addr 0x5e4ed3c, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Normalize(::UnityEngine::Vector2  v, ::by_ref<float_t>  magnitude) ;

/// @brief Method Normalize, addr 0x5e4eb38, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3  v, ::by_ref<float_t>  magnitude) ;

/// @brief Method RaySegmentIntersectXZ, addr 0x5e4e24c, size 0xe0, virtual false, abstract: false, final false
static inline bool RaySegmentIntersectXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2) ;

/// @brief Method ReversesFaceOrientations, addr 0x5e4ec18, size 0xc4, virtual false, abstract: false, final false
static inline bool ReversesFaceOrientations(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method ReversesFaceOrientationsXZ, addr 0x5e4ecdc, size 0x60, virtual false, abstract: false, final false
static inline bool ReversesFaceOrientationsXZ(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method RightOrColinear, addr 0x5e4dcec, size 0x30, virtual false, abstract: false, final false
static inline bool RightOrColinear(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  p) ;

/// @brief Method RightOrColinear, addr 0x5e4dcc4, size 0x28, virtual false, abstract: false, final false
static inline bool RightOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  p) ;

/// @brief Method RightOrColinearXZ, addr 0x5e4dd4c, size 0x24, virtual false, abstract: false, final false
static inline bool RightOrColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p) ;

/// @brief Method RightOrColinearXZ, addr 0x5e4dd1c, size 0x30, virtual false, abstract: false, final false
static inline bool RightOrColinearXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p) ;

/// @brief Method RightXZ, addr 0x5e4dc74, size 0x24, virtual false, abstract: false, final false
static inline bool RightXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p) ;

/// @brief Method RightXZ, addr 0x5e4dc3c, size 0x38, virtual false, abstract: false, final false
static inline bool RightXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p) ;

/// @brief Method SegmentIntersectionPointXZ, addr 0x5e4e740, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SegmentIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<bool>  intersects) ;

/// @brief Method SegmentIntersectsBounds, addr 0x5e4e7f0, size 0x264, virtual false, abstract: false, final false
static inline bool SegmentIntersectsBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method SegmentsIntersect, addr 0x5e4df84, size 0xa8, virtual false, abstract: false, final false
static inline bool SegmentsIntersect(::Pathfinding::Int2  start1, ::Pathfinding::Int2  end1, ::Pathfinding::Int2  start2, ::Pathfinding::Int2  end2) ;

/// @brief Method SegmentsIntersectXZ, addr 0x5e4e02c, size 0x88, virtual false, abstract: false, final false
static inline bool SegmentsIntersectXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2) ;

/// @brief Method SegmentsIntersectXZ, addr 0x5e4e0b4, size 0x84, virtual false, abstract: false, final false
static inline bool SegmentsIntersectXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2) ;

/// @brief Method SideXZ, addr 0x5e4dc98, size 0x2c, virtual false, abstract: false, final false
static inline ::Pathfinding::Side SideXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p) ;

/// @brief Method SignedTriangleAreaTimes2XZ, addr 0x5e4dc14, size 0x28, virtual false, abstract: false, final false
static inline float_t SignedTriangleAreaTimes2XZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c) ;

/// @brief Method SignedTriangleAreaTimes2XZ, addr 0x5e4dbf8, size 0x1c, virtual false, abstract: false, final false
static inline int64_t SignedTriangleAreaTimes2XZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c) ;

/// @brief Method SqrDistancePointSegment, addr 0x5e4d88c, size 0x58, virtual false, abstract: false, final false
static inline float_t SqrDistancePointSegment(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p) ;

/// @brief Method SqrDistancePointSegmentApproximate, addr 0x5e4d7f0, size 0x9c, virtual false, abstract: false, final false
static inline float_t SqrDistancePointSegmentApproximate(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p) ;

/// @brief Method SqrDistancePointSegmentApproximate, addr 0x5e4d754, size 0x9c, virtual false, abstract: false, final false
static inline float_t SqrDistancePointSegmentApproximate(int32_t  x, int32_t  z, int32_t  px, int32_t  pz, int32_t  qx, int32_t  qz) ;

/// @brief Method SqrDistanceSegmentSegment, addr 0x5e4d8e4, size 0x2fc, virtual false, abstract: false, final false
static inline float_t SqrDistanceSegmentSegment(::UnityEngine::Vector3  s1, ::UnityEngine::Vector3  e1, ::UnityEngine::Vector3  s2, ::UnityEngine::Vector3  e2) ;

/// @brief Method SqrDistanceXZ, addr 0x5e4dbe0, size 0x18, virtual false, abstract: false, final false
static inline float_t SqrDistanceXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorMath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorMath(VectorMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorMath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorMath(VectorMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::VectorMath) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
