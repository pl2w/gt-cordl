#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TilingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TilingJob)
namespace GlobalNamespace {
struct TilingJob___c__DisplayClass19_0;
}
namespace GlobalNamespace {
struct TilingJob___c__DisplayClass20_0;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Rendering::Universal {
struct InclusiveRange;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct TilingJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::TilingJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TilingJob, "UnityEngine.Rendering.Universal", "TilingJob");
// [BurstCompile(FloatMode = (Unity.Burst.FloatMode)0, DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.float4, Unity.Mathematics.float4x4, Unity.Mathematics.int2, Unity.Mathematics.int4, UnityEngine.Rendering.Universal.Fixed2`1<T>, UnityEngine.Rendering.Universal.InclusiveRange, UnityEngine.Rendering.VisibleLight, UnityEngine.Rendering.VisibleReflectionProbe
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TilingJob
struct CORDL_TYPE TilingJob {
public:
// Declarations
using __c__DisplayClass19_0 = ::GlobalNamespace::TilingJob___c__DisplayClass19_0;

using __c__DisplayClass20_0 = ::GlobalNamespace::TilingJob___c__DisplayClass20_0;

/// @brief Field k_CubeLineIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_CubeLineIndices, put=setStaticF_k_CubeLineIndices)) ::ArrayW<::Unity::Mathematics::int4>  k_CubeLineIndices;

/// @brief Field k_CubePoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_CubePoints, put=setStaticF_k_CubePoints)) ::ArrayW<::Unity::Mathematics::float3>  k_CubePoints;

/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method EvaluateNearConic, addr 0xb2a6a04, size 0x1b8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateNearConic(float_t  near, ::Unity::Mathematics::float3  o, ::Unity::Mathematics::float3  d, float_t  r, ::Unity::Mathematics::float3  u, ::Unity::Mathematics::float3  v, float_t  theta) ;

/// @brief Method Execute, addr 0xb2a2d68, size 0x108, virtual true, abstract: false, final true
inline void Execute(int32_t  jobIndex) ;

/// @brief Method ExpandOrthographic, addr 0xb2a7d10, size 0x11c, virtual false, abstract: false, final false
inline void ExpandOrthographic(::Unity::Mathematics::float3  positionVS) ;

/// @brief Method ExpandRangeOrthographic, addr 0xb2a7f1c, size 0xd8, virtual false, abstract: false, final false
inline void ExpandRangeOrthographic(::by_ref<::UnityEngine::Rendering::Universal::InclusiveRange>  range, float_t  xVS) ;

/// @brief Method ExpandY, addr 0xb2a5f28, size 0x11c, virtual false, abstract: false, final false
inline void ExpandY(::Unity::Mathematics::float3  positionVS) ;

/// @brief Method FindNearConicTangentTheta, addr 0xb2a6794, size 0x270, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 FindNearConicTangentTheta(::Unity::Mathematics::float2  o, ::Unity::Mathematics::float2  d, float_t  r, ::Unity::Mathematics::float2  u, ::Unity::Mathematics::float2  v) ;

/// @brief Method FindNearConicYTheta, addr 0xb2a74d0, size 0x460, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 FindNearConicYTheta(float_t  near, ::Unity::Mathematics::float3  o, ::Unity::Mathematics::float3  d, float_t  r, ::Unity::Mathematics::float3  u, ::Unity::Mathematics::float3  v, float_t  y) ;

/// @brief Method GetCircleClipPoints, addr 0xb2a6590, size 0x204, virtual false, abstract: false, final false
static inline bool GetCircleClipPoints(::Unity::Mathematics::float3  circleCenter, ::Unity::Mathematics::float3  circleNormal, float_t  circleRadius, float_t  near, ::by_ref<::Unity::Mathematics::float3>  p0, ::by_ref<::Unity::Mathematics::float3>  p1) ;

/// @brief Method GetConeSideTangentPoints, addr 0xb2a6cd8, size 0x4c0, virtual false, abstract: false, final false
static inline void GetConeSideTangentPoints(::Unity::Mathematics::float3  vertex, ::Unity::Mathematics::float3  axis, float_t  cosHalfAngle, float_t  circleRadius, float_t  coneHeight, float_t  range, ::Unity::Mathematics::float3  circleU, ::Unity::Mathematics::float3  circleV, ::by_ref<::Unity::Mathematics::float3>  l1, ::by_ref<::Unity::Mathematics::float3>  l2) ;

/// @brief Method GetProjectedCircleHorizon, addr 0xb2a6398, size 0x1f8, virtual false, abstract: false, final false
static inline void GetProjectedCircleHorizon(::Unity::Mathematics::float2  center, float_t  radius, ::Unity::Mathematics::float2  U, ::Unity::Mathematics::float2  V, ::by_ref<::Unity::Mathematics::float2>  uv1, ::by_ref<::Unity::Mathematics::float2>  uv2) ;

/// @brief Method GetSphereHorizon, addr 0xb2a604c, size 0x25c, virtual false, abstract: false, final false
static inline void GetSphereHorizon(::Unity::Mathematics::float2  center, float_t  radius, float_t  near, float_t  clipRadius, ::by_ref<::Unity::Mathematics::float2>  p0, ::by_ref<::Unity::Mathematics::float2>  p1) ;

/// @brief Method GetSphereYPlaneHorizon, addr 0xb2a7930, size 0x3e0, virtual false, abstract: false, final false
static inline void GetSphereYPlaneHorizon(::Unity::Mathematics::float3  center, float_t  sphereRadius, float_t  near, float_t  clipRadius, float_t  y, ::by_ref<::Unity::Mathematics::float3>  left, ::by_ref<::Unity::Mathematics::float3>  right) ;

/// @brief Method IntersectCircleYPlane, addr 0xb2a7238, size 0x298, virtual false, abstract: false, final false
static inline bool IntersectCircleYPlane(float_t  y, ::Unity::Mathematics::float3  circleCenter, ::Unity::Mathematics::float3  circleNormal, ::Unity::Mathematics::float3  circleU, ::Unity::Mathematics::float3  circleV, float_t  circleRadius, ::by_ref<::Unity::Mathematics::float3>  p1, ::by_ref<::Unity::Mathematics::float3>  p2) ;

/// @brief Method IntersectEllipseLine, addr 0xb2a8080, size 0x16c, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<float_t,float_t> IntersectEllipseLine(float_t  a, float_t  b, ::Unity::Mathematics::float3  line) ;

/// @brief Method TileLight, addr 0xb2a3acc, size 0x1c10, virtual false, abstract: false, final false
inline void TileLight(int32_t  lightIndex) ;

/// @brief Method TileLightOrthographic, addr 0xb2a2e70, size 0xc5c, virtual false, abstract: false, final false
inline void TileLightOrthographic(int32_t  lightIndex) ;

/// @brief Method TileReflectionProbe, addr 0xb2a56dc, size 0x84c, virtual false, abstract: false, final false
inline void TileReflectionProbe(int32_t  index) ;

/// @brief Method ViewToTileSpace, addr 0xb2a7198, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 ViewToTileSpace(::Unity::Mathematics::float3  positionVS) ;

/// @brief Method ViewToTileSpaceOrthographic, addr 0xb2a7ff4, size 0x8c, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 ViewToTileSpaceOrthographic(::Unity::Mathematics::float3  positionVS) ;

/// [CompilerGenerated]
/// @brief Method <TileLightOrthographic>g__SpherePointIsValid|20_0, addr 0xb2a7e2c, size 0xf0, virtual false, abstract: false, final false
static inline bool _TileLightOrthographic_g__SpherePointIsValid_20_0(::Unity::Mathematics::float3  p, ::by_ref<::GlobalNamespace::TilingJob___c__DisplayClass20_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <TileLight>g__ConicPointIsValid|19_1, addr 0xb2a6bbc, size 0x11c, virtual false, abstract: false, final false
static inline bool _TileLight_g__ConicPointIsValid_19_1(::Unity::Mathematics::float3  p, ::by_ref<::GlobalNamespace::TilingJob___c__DisplayClass19_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <TileLight>g__SpherePointIsValid|19_0, addr 0xb2a62a8, size 0xf0, virtual false, abstract: false, final false
static inline bool _TileLight_g__SpherePointIsValid_19_0(::Unity::Mathematics::float3  p, ::by_ref<::GlobalNamespace::TilingJob___c__DisplayClass19_0>  _cordl_fixed_empty_name_whitespace) ;

static inline ::ArrayW<::Unity::Mathematics::int4> getStaticF_k_CubeLineIndices() ;

static inline ::ArrayW<::Unity::Mathematics::float3> getStaticF_k_CubePoints() ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

static inline void setStaticF_k_CubeLineIndices(::ArrayW<::Unity::Mathematics::int4>  value) ;

static inline void setStaticF_k_CubePoints(::ArrayW<::Unity::Mathematics::float3>  value) ;

/// @brief Method square, addr 0xb2a6044, size 0x8, virtual false, abstract: false, final false
static inline float_t square(float_t  x) ;

// Ctor Parameters []
// @brief default ctor
constexpr TilingJob() ;

// Ctor Parameters [CppParam { name: "lights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reflectionProbes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tileRanges", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>", modifiers: "", def_value: None, comment: None }, CppParam { name: "itemsPerTile", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rangesPerItem", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToViews", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tileScale", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "tileScaleInv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewPlaneBottoms", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewPlaneTops", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewToViewportScaleBiases", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tileCount", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None, comment: None }, CppParam { name: "near", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOrthographic", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TileYRange", ty: "::UnityEngine::Rendering::Universal::InclusiveRange", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ViewIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CenterOffset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr TilingJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  lights, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>  reflectionProbes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>  tileRanges, int32_t  itemsPerTile, int32_t  rangesPerItem, ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>  worldToViews, ::Unity::Mathematics::float2  tileScale, ::Unity::Mathematics::float2  tileScaleInv, ::UnityEngine::Rendering::Universal::Fixed2_1<float_t>  viewPlaneBottoms, ::UnityEngine::Rendering::Universal::Fixed2_1<float_t>  viewPlaneTops, ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4>  viewToViewportScaleBiases, ::Unity::Mathematics::int2  tileCount, float_t  near, bool  isOrthographic, ::UnityEngine::Rendering::Universal::InclusiveRange  m_TileYRange, int32_t  m_Offset, int32_t  m_ViewIndex, ::Unity::Mathematics::float2  m_CenterOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x120};

/// [ReadOnly]
/// @brief Field lights, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  lights;

/// [ReadOnly]
/// @brief Field reflectionProbes, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>  reflectionProbes;

/// [NativeDisableParallelForRestriction]
/// @brief Field tileRanges, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>  tileRanges;

/// @brief Field itemsPerTile, offset: 0x30, size: 0x4, def value: None
 int32_t  itemsPerTile;

/// @brief Field rangesPerItem, offset: 0x34, size: 0x4, def value: None
 int32_t  rangesPerItem;

/// @brief Field worldToViews, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>  worldToViews;

/// @brief Field tileScale, offset: 0x48, size: 0x8, def value: None
 ::Unity::Mathematics::float2  tileScale;

/// @brief Field tileScaleInv, offset: 0x50, size: 0x8, def value: None
 ::Unity::Mathematics::float2  tileScaleInv;

/// @brief Field viewPlaneBottoms, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Rendering::Universal::Fixed2_1<float_t>  viewPlaneBottoms;

/// @brief Field viewPlaneTops, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Rendering::Universal::Fixed2_1<float_t>  viewPlaneTops;

/// @brief Field viewToViewportScaleBiases, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4>  viewToViewportScaleBiases;

/// @brief Field tileCount, offset: 0x88, size: 0x8, def value: None
 ::Unity::Mathematics::int2  tileCount;

/// @brief Field near, offset: 0x90, size: 0x4, def value: None
 float_t  near;

/// @brief Field isOrthographic, offset: 0x94, size: 0x1, def value: None
 bool  isOrthographic;

/// @brief Field m_TileYRange, offset: 0x96, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::InclusiveRange  m_TileYRange;

/// @brief Field m_Offset, offset: 0x9c, size: 0x4, def value: None
 int32_t  m_Offset;

/// @brief Field m_ViewIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  m_ViewIndex;

/// @brief Field m_CenterOffset, offset: 0xa4, size: 0x8, def value: None
 ::Unity::Mathematics::float2  m_CenterOffset;

/// @brief Size padding 0x120 - 0xb0 = 0x70, packed as 0x70
 uint8_t  _cordl_size_padding[0x70];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, lights) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, reflectionProbes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileRanges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, itemsPerTile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, rangesPerItem) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, worldToViews) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileScaleInv) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewPlaneBottoms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewPlaneTops) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewToViewportScaleBiases) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, near) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, isOrthographic) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_TileYRange) == 0x96, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_Offset) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_ViewIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_CenterOffset) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::TilingJob) == 0x120, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
