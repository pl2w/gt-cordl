#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LagCompensationUtils)
namespace GlobalNamespace {
struct LagCompensationUtils_BoxNarrowData;
}
namespace GlobalNamespace {
struct LagCompensationUtils_ContactData;
}
namespace GlobalNamespace {
struct LagCompensationUtils_CustomEdgesBox;
}
namespace GlobalNamespace {
struct LagCompensationUtils_CustomLine;
}
namespace GlobalNamespace {
struct LagCompensationUtils_CustomPlane;
}
namespace GlobalNamespace {
struct LagCompensationUtils_CustomPlanesBox;
}
namespace GlobalNamespace {
struct LagCompensationUtils_RotationMatrix;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class LagCompensationUtils;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::LagCompensationUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::LagCompensationUtils*, "Fusion.LagCompensation", "LagCompensationUtils");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.LagCompensationUtils
class CORDL_TYPE LagCompensationUtils : public ::System::Object {
public:
// Declarations
using BoxNarrowData = ::GlobalNamespace::LagCompensationUtils_BoxNarrowData;

using ContactData = ::GlobalNamespace::LagCompensationUtils_ContactData;

using CustomEdgesBox = ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox;

using CustomLine = ::GlobalNamespace::LagCompensationUtils_CustomLine;

using CustomPlane = ::GlobalNamespace::LagCompensationUtils_CustomPlane;

using CustomPlanesBox = ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox;

using RotationMatrix = ::GlobalNamespace::LagCompensationUtils_RotationMatrix;

/// @brief Method BoxInAABB, addr 0x6014940, size 0x138, virtual false, abstract: false, final false
static inline bool BoxInAABB(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  boxEdges, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  offset) ;

/// @brief Method ClampPointToAABB, addr 0x6015c14, size 0x70, virtual false, abstract: false, final false
static inline bool ClampPointToAABB(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  aabbExtents, ::by_ref<::UnityEngine::Vector3>  clampedPoint) ;

/// @brief Method ClipToPlane, addr 0x6014a78, size 0xac, virtual false, abstract: false, final false
static inline bool ClipToPlane(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlane>  plane, ::by_ref<::UnityEngine::Vector3>  lineStart, ::by_ref<::UnityEngine::Vector3>  lineEnd, ::by_ref<::UnityEngine::Vector3>  intersection) ;

/// @brief Method ClosestDistanceBetweenLines, addr 0x6015d34, size 0x9b4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,float_t> ClosestDistanceBetweenLines(::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1, ::UnityEngine::Vector3  b0, ::UnityEngine::Vector3  b1, bool  clampAll, bool  clampA0, bool  clampA1, bool  clampB0, bool  clampB1) ;

/// @brief Method ClosestPtPointSegment, addr 0x60150a0, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPtPointSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method GetAABBSupportPoint, addr 0x6015c84, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAABBSupportPoint(::UnityEngine::Vector3  pointA, ::UnityEngine::Vector3  pointB, ::UnityEngine::Vector3  extents) ;

/// @brief Method GetContactPointPlaneEdge, addr 0x60125e4, size 0x235c, virtual false, abstract: false, final false
static inline void GetContactPointPlaneEdge(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planes, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edges, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  offset, ::by_ref<::UnityEngine::Vector3>  boxAPosition, bool  detailedManifold, ::by_ref<int32_t>  cpCount, ::by_ref<::UnityEngine::Vector3>  contactPoint) ;

/// @brief Method GetEdgesBox, addr 0x6012374, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox GetEdgesBox(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox  edges, ::by_ref<::UnityEngine::Vector3>  translation) ;

/// @brief Method GetHitPoint, addr 0x6012488, size 0x15c, virtual false, abstract: false, final false
static inline bool GetHitPoint(::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planesA, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomPlanesBox>  planesB, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edgesA, ::by_ref<::GlobalNamespace::LagCompensationUtils_CustomEdgesBox>  edgesB, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrowA, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrowB, ::by_ref<::UnityEngine::Vector3>  boxAToBoxBOffset, bool  computeDetailedInfo, ::by_ref<::UnityEngine::Vector3>  contactPoint) ;

/// @brief Method GetPlanesBox, addr 0x60122a0, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox GetPlanesBox(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox  planes, ::by_ref<::UnityEngine::Vector3>  translation) ;

/// @brief Method LocalAABBCapsuleIntersection, addr 0x6015484, size 0x790, virtual false, abstract: false, final false
static inline bool LocalAABBCapsuleIntersection(::UnityEngine::Vector3  localCapsuleCenter, ::UnityEngine::Vector3  localCapsulePointA, ::UnityEngine::Vector3  localCapsulePointB, float_t  capsuleRadius, ::UnityEngine::Vector3  aabbExtents, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contactData) ;

/// @brief Method LocalAABBSphereContact, addr 0x6014c18, size 0x244, virtual false, abstract: false, final false
static inline bool LocalAABBSphereContact(::UnityEngine::Vector3  aabbExtents, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contact) ;

/// @brief Method LocalAABBSphereIntersection, addr 0x6014b9c, size 0x7c, virtual false, abstract: false, final false
static inline bool LocalAABBSphereIntersection(::UnityEngine::Vector3  aabbExtents, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius) ;

/// @brief Method LocalRayCapsuleIntersection, addr 0x6015128, size 0x1f4, virtual false, abstract: false, final false
static inline bool LocalRayCapsuleIntersection(::UnityEngine::Vector3  capsuleTopCenter, ::UnityEngine::Vector3  capsuleBottomCenter, float_t  capsuleRadius, ::UnityEngine::Vector3  rayLocalOrigin, ::UnityEngine::Vector3  rayLocalDir, float_t  maxDistance, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance) ;

/// @brief Method LocalSphereCapsuleIntersection, addr 0x6014e5c, size 0x244, virtual false, abstract: false, final false
static inline bool LocalSphereCapsuleIntersection(::UnityEngine::Vector3  capsuleTopCenter, ::UnityEngine::Vector3  capsuleBottomCenter, float_t  capsuleRadius, ::UnityEngine::Vector3  sphereCenter, float_t  sphereRadius, ::by_ref<::GlobalNamespace::LagCompensationUtils_ContactData>  contactData) ;

/// @brief Method NarrowBoxBox, addr 0x6011674, size 0xc2c, virtual false, abstract: false, final false
static inline bool NarrowBoxBox(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  aNarrow, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  bNarrow, bool  detailedManifold, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  normal) ;

/// @brief Method PointInAABB, addr 0x6014b24, size 0x78, virtual false, abstract: false, final false
static inline bool PointInAABB(::UnityEngine::Vector3  point, ::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxNarrow, ::by_ref<::UnityEngine::Vector3>  max, ::by_ref<::UnityEngine::Vector3>  offset) ;

/// @brief Method RayAABB, addr 0x60167fc, size 0x2a8, virtual false, abstract: false, final false
static inline bool RayAABB(::by_ref<::UnityEngine::Vector3>  minB, ::by_ref<::UnityEngine::Vector3>  maxB, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  dir, float_t  sqrMaxdistance, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance) ;

/// @brief Method RayCapsuleIntersect, addr 0x601531c, size 0x168, virtual false, abstract: false, final false
static inline float_t RayCapsuleIntersect(::UnityEngine::Vector3  rayOrigin, ::UnityEngine::Vector3  rayDir, ::UnityEngine::Vector3  capsulePointA, ::UnityEngine::Vector3  capsulePointB, float_t  capsuleRadius) ;

/// @brief Method RaySphereIntersection, addr 0x6016aa4, size 0x5bc, virtual false, abstract: false, final false
static inline bool RaySphereIntersection(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  dir, float_t  length, ::UnityEngine::Vector3  center, float_t  radius, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance) ;

/// @brief Method SphereSphere, addr 0x60166e8, size 0x114, virtual false, abstract: false, final false
static inline bool SphereSphere(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  centerB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  intersection, ::by_ref<::UnityEngine::Vector3>  normal) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensationUtils(LagCompensationUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensationUtils(LagCompensationUtils const& ) = delete;

/// @brief Field ALLOWED_DOT_DIFF offset 0xffffffff size 0x4
static constexpr float_t  ALLOWED_DOT_DIFF{static_cast<float_t>(0.975f)};

/// @brief Field EXTENTS_EXPANSION_MULTIPLIER offset 0xffffffff size 0x4
static constexpr float_t  EXTENTS_EXPANSION_MULTIPLIER{static_cast<float_t>(1.025f)};

/// @brief Field MIN_CROSS_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  MIN_CROSS_THRESHOLD{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LagCompensation::LagCompensationUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
