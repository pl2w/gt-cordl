#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_AspectStretcher_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingStateCache_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingState_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfinerOven)
namespace GlobalNamespace {
struct ConfinerOven_AspectStretcher;
}
namespace GlobalNamespace {
struct ConfinerOven_BakingStateCache;
}
namespace GlobalNamespace {
struct ConfinerOven_BakingState;
}
namespace GlobalNamespace {
struct ConfinerOven_PolygonSolution;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class ConfinerOven_BakedSolution;
}
namespace Unity::Cinemachine {
class ConfinerOven_FloatToIntScaler;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct Rect64;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ConfinerOven;
}
namespace Unity::Cinemachine {
class ConfinerOven_BakedSolution;
}
namespace Unity::Cinemachine {
class ConfinerOven_FloatToIntScaler;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ConfinerOven*);
MARK_REF_T(::Unity::Cinemachine::ConfinerOven_BakedSolution*);
MARK_REF_T(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ConfinerOven*, "Unity.Cinemachine", "ConfinerOven");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ConfinerOven_BakedSolution*, "Unity.Cinemachine", "ConfinerOven/BakedSolution");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*, "Unity.Cinemachine", "ConfinerOven/FloatToIntScaler");
// Dependencies System.Object, Unity.Cinemachine.ConfinerOven::AspectStretcher, Unity.Cinemachine.ConfinerOven::BakingState, Unity.Cinemachine.ConfinerOven::BakingStateCache, Unity.Cinemachine.Point64, UnityEngine.Rect
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ConfinerOven
class CORDL_TYPE ConfinerOven : public ::System::Object {
public:
// Declarations
using AspectStretcher = ::GlobalNamespace::ConfinerOven_AspectStretcher;

using BakingState = ::GlobalNamespace::ConfinerOven_BakingState;

using BakingStateCache = ::GlobalNamespace::ConfinerOven_BakingStateCache;

using PolygonSolution = ::GlobalNamespace::ConfinerOven_PolygonSolution;

using BakedSolution = ::Unity::Cinemachine::ConfinerOven_BakedSolution;

using FloatToIntScaler = ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler;

 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::ConfinerOven_BakingState  State;

/// @brief Field <State>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::ConfinerOven_BakingState  _State_k__BackingField;

/// @brief Field bakeProgress, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_bakeProgress, put=__cordl_internal_set_bakeProgress)) float_t  bakeProgress;

/// @brief Field m_AspectStretcher, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AspectStretcher, put=__cordl_internal_set_m_AspectStretcher)) ::GlobalNamespace::ConfinerOven_AspectStretcher  m_AspectStretcher;

/// @brief Field m_Cache, offset 0x68, size 0x58 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::GlobalNamespace::ConfinerOven_BakingStateCache  m_Cache;

/// @brief Field m_FloatToInt, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatToInt, put=__cordl_internal_set_m_FloatToInt)) ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  m_FloatToInt;

/// @brief Field m_MidPoint, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_MidPoint, put=__cordl_internal_set_m_MidPoint)) ::Unity::Cinemachine::Point64  m_MidPoint;

/// @brief Field m_MinFrustumHeightWithBones, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinFrustumHeightWithBones, put=__cordl_internal_set_m_MinFrustumHeightWithBones)) float_t  m_MinFrustumHeightWithBones;

/// @brief Field m_OriginalPolygon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalPolygon, put=__cordl_internal_set_m_OriginalPolygon)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  m_OriginalPolygon;

/// @brief Field m_PolygonRect, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PolygonRect, put=__cordl_internal_set_m_PolygonRect)) ::UnityEngine::Rect  m_PolygonRect;

/// @brief Field m_Skeleton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Skeleton, put=__cordl_internal_set_m_Skeleton)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  m_Skeleton;

/// @brief Field m_SkeletonPadding, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SkeletonPadding, put=__cordl_internal_set_m_SkeletonPadding)) float_t  m_SkeletonPadding;

/// @brief Method BakeConfiner, addr 0xaeb6060, size 0x4b0, virtual false, abstract: false, final false
inline void BakeConfiner(float_t  maxComputationTimePerFrameInSeconds) ;

/// @brief Method GetBakedSolution, addr 0xaeb59f4, size 0x288, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ConfinerOven_BakedSolution* GetBakedSolution(float_t  frustumHeight) ;

/// @brief Method Initialize, addr 0xaeb51d4, size 0x820, virtual false, abstract: false, final false
inline void Initialize(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding) ;

static inline ::Unity::Cinemachine::ConfinerOven* New_ctor(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding) ;

/// [CompilerGenerated]
/// @brief Method <BakeConfiner>g__ComputeSkeleton|25_0, addr 0xaeb6624, size 0x360, virtual false, abstract: false, final false
inline void _BakeConfiner_g__ComputeSkeleton_25_0(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*>  solutions) ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__GetPolygonBoundingBox|24_0, addr 0xaeb5dfc, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect _Initialize_g__GetPolygonBoundingBox_24_0(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  polygons) ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__MidPointOfIntRect|24_1, addr 0xaeb600c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 _Initialize_g__MidPointOfIntRect_24_1(::Unity::Cinemachine::Rect64  bounds) ;

constexpr ::GlobalNamespace::ConfinerOven_BakingState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::ConfinerOven_BakingState& __cordl_internal_get__State_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_bakeProgress() const;

constexpr float_t& __cordl_internal_get_bakeProgress() ;

constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher const& __cordl_internal_get_m_AspectStretcher() const;

constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher& __cordl_internal_get_m_AspectStretcher() ;

constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache const& __cordl_internal_get_m_Cache() const;

constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache& __cordl_internal_get_m_Cache() ;

constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* const& __cordl_internal_get_m_FloatToInt() const;

constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*& __cordl_internal_get_m_FloatToInt() ;

constexpr ::Unity::Cinemachine::Point64 const& __cordl_internal_get_m_MidPoint() const;

constexpr ::Unity::Cinemachine::Point64& __cordl_internal_get_m_MidPoint() ;

constexpr float_t const& __cordl_internal_get_m_MinFrustumHeightWithBones() const;

constexpr float_t& __cordl_internal_get_m_MinFrustumHeightWithBones() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get_m_OriginalPolygon() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get_m_OriginalPolygon() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_PolygonRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_PolygonRect() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get_m_Skeleton() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get_m_Skeleton() ;

constexpr float_t const& __cordl_internal_get_m_SkeletonPadding() const;

constexpr float_t& __cordl_internal_get_m_SkeletonPadding() ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::ConfinerOven_BakingState  value) ;

constexpr void __cordl_internal_set_bakeProgress(float_t  value) ;

constexpr void __cordl_internal_set_m_AspectStretcher(::GlobalNamespace::ConfinerOven_AspectStretcher  value) ;

constexpr void __cordl_internal_set_m_Cache(::GlobalNamespace::ConfinerOven_BakingStateCache  value) ;

constexpr void __cordl_internal_set_m_FloatToInt(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  value) ;

constexpr void __cordl_internal_set_m_MidPoint(::Unity::Cinemachine::Point64  value) ;

constexpr void __cordl_internal_set_m_MinFrustumHeightWithBones(float_t  value) ;

constexpr void __cordl_internal_set_m_OriginalPolygon(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set_m_PolygonRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_m_Skeleton(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set_m_SkeletonPadding(float_t  value) ;

/// @brief Method .ctor, addr 0xaeb50e4, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding) ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0xaeb5dec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConfinerOven_BakingState get_State() ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0xaeb5df4, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::ConfinerOven_BakingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfinerOven(ConfinerOven && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfinerOven(ConfinerOven const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22315};

/// @brief Field k_MaxComputationTimeForFullSkeletonBakeInSeconds offset 0xffffffff size 0x4
static constexpr float_t  k_MaxComputationTimeForFullSkeletonBakeInSeconds{static_cast<float_t>(5.0f)};

/// @brief Field k_MiterLimit offset 0xffffffff size 0x4
static constexpr int32_t  k_MiterLimit{static_cast<int32_t>(0x2)};

/// @brief Field m_MinFrustumHeightWithBones, offset: 0x10, size: 0x4, def value: None
 float_t  ___m_MinFrustumHeightWithBones;

/// @brief Field m_SkeletonPadding, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_SkeletonPadding;

/// @brief Field m_OriginalPolygon, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ___m_OriginalPolygon;

/// @brief Field m_MidPoint, offset: 0x20, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  ___m_MidPoint;

/// @brief Field m_Skeleton, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ___m_Skeleton;

/// @brief Field m_FloatToInt, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  ___m_FloatToInt;

/// @brief Field m_PolygonRect, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_PolygonRect;

/// @brief Field m_AspectStretcher, offset: 0x50, size: 0xc, def value: None
 ::GlobalNamespace::ConfinerOven_AspectStretcher  ___m_AspectStretcher;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::ConfinerOven_BakingState  ____State_k__BackingField;

/// @brief Field bakeProgress, offset: 0x60, size: 0x4, def value: None
 float_t  ___bakeProgress;

/// @brief Field m_Cache, offset: 0x68, size: 0x58, def value: None
 ::GlobalNamespace::ConfinerOven_BakingStateCache  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_MinFrustumHeightWithBones) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_SkeletonPadding) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_OriginalPolygon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_MidPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_Skeleton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_FloatToInt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_PolygonRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_AspectStretcher) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ____State_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___bakeProgress) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven, ___m_Cache) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ConfinerOven) == 0xc0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, Unity.Cinemachine.ConfinerOven::AspectStretcher
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ConfinerOven/BakedSolution
class CORDL_TYPE ConfinerOven_BakedSolution : public ::System::Object {
public:
// Declarations
/// @brief Field m_AspectStretcher, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AspectStretcher, put=__cordl_internal_set_m_AspectStretcher)) ::GlobalNamespace::ConfinerOven_AspectStretcher  m_AspectStretcher;

/// @brief Field m_FloatToInt, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatToInt, put=__cordl_internal_set_m_FloatToInt)) ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  m_FloatToInt;

/// @brief Field m_FrustumSizeIntSpace, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrustumSizeIntSpace, put=__cordl_internal_set_m_FrustumSizeIntSpace)) float_t  m_FrustumSizeIntSpace;

/// @brief Field m_HasBones, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasBones, put=__cordl_internal_set_m_HasBones)) bool  m_HasBones;

/// @brief Field m_OriginalPolygon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalPolygon, put=__cordl_internal_set_m_OriginalPolygon)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  m_OriginalPolygon;

/// @brief Field m_Solution, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Solution, put=__cordl_internal_set_m_Solution)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  m_Solution;

/// @brief Field m_SqrPolygonDiagonal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SqrPolygonDiagonal, put=__cordl_internal_set_m_SqrPolygonDiagonal)) double_t  m_SqrPolygonDiagonal;

/// @brief Method ConfinePoint, addr 0xaeb69ac, size 0x354, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ConfinePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  pointToConfine) ;

/// @brief Method FindIntersection, addr 0xaeb71dc, size 0x158, virtual false, abstract: false, final false
static inline int32_t FindIntersection(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p3, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p4, double_t  epsilon) ;

/// @brief Method IsValid, addr 0xaeb699c, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::Unity::Cinemachine::ConfinerOven_BakedSolution* New_ctor(float_t  aspectRatio, float_t  frustumHeight, bool  hasBones, ::UnityEngine::Rect  polygonBounds, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  originalPolygon, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solution) ;

/// [CompilerGenerated]
/// @brief Method <ConfinePoint>g__ClosestPointOnSegment|9_2, addr 0xaeb6df0, size 0x90, virtual false, abstract: false, final false
inline float_t _ConfinePoint_g__ClosestPointOnSegment_9_2(::Unity::Cinemachine::Point64  point, ::Unity::Cinemachine::Point64  s0, ::Unity::Cinemachine::Point64  s1) ;

/// [CompilerGenerated]
/// @brief Method <ConfinePoint>g__DoesIntersectOriginal|9_3, addr 0xaeb7050, size 0x174, virtual false, abstract: false, final false
inline bool _ConfinePoint_g__DoesIntersectOriginal_9_3(::Unity::Cinemachine::Point64  l1, ::Unity::Cinemachine::Point64  l2) ;

/// [CompilerGenerated]
/// @brief Method <ConfinePoint>g__IntPointLerp|9_0, addr 0xaeb6e80, size 0x1d0, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::Point64 _ConfinePoint_g__IntPointLerp_9_0(::Unity::Cinemachine::Point64  a, ::Unity::Cinemachine::Point64  b, float_t  lerp) ;

/// [CompilerGenerated]
/// @brief Method <ConfinePoint>g__IsInsideOriginal|9_1, addr 0xaeb6d00, size 0xf0, virtual false, abstract: false, final false
inline bool _ConfinePoint_g__IsInsideOriginal_9_1(::Unity::Cinemachine::Point64  point) ;

/// [CompilerGenerated]
/// @brief Method <FindIntersection>g__IntPointDiffSqrMagnitude|10_0, addr 0xaeb7334, size 0x20, virtual false, abstract: false, final false
static inline double_t _FindIntersection_g__IntPointDiffSqrMagnitude_10_0(::Unity::Cinemachine::Point64  point1, ::Unity::Cinemachine::Point64  point2) ;

constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher const& __cordl_internal_get_m_AspectStretcher() const;

constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher& __cordl_internal_get_m_AspectStretcher() ;

constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* const& __cordl_internal_get_m_FloatToInt() const;

constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*& __cordl_internal_get_m_FloatToInt() ;

constexpr float_t const& __cordl_internal_get_m_FrustumSizeIntSpace() const;

constexpr float_t& __cordl_internal_get_m_FrustumSizeIntSpace() ;

constexpr bool const& __cordl_internal_get_m_HasBones() const;

constexpr bool& __cordl_internal_get_m_HasBones() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get_m_OriginalPolygon() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get_m_OriginalPolygon() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get_m_Solution() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get_m_Solution() ;

constexpr double_t const& __cordl_internal_get_m_SqrPolygonDiagonal() const;

constexpr double_t& __cordl_internal_get_m_SqrPolygonDiagonal() ;

constexpr void __cordl_internal_set_m_AspectStretcher(::GlobalNamespace::ConfinerOven_AspectStretcher  value) ;

constexpr void __cordl_internal_set_m_FloatToInt(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  value) ;

constexpr void __cordl_internal_set_m_FrustumSizeIntSpace(float_t  value) ;

constexpr void __cordl_internal_set_m_HasBones(bool  value) ;

constexpr void __cordl_internal_set_m_OriginalPolygon(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set_m_Solution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set_m_SqrPolygonDiagonal(double_t  value) ;

/// @brief Method .ctor, addr 0xaeb5c7c, size 0x160, virtual false, abstract: false, final false
inline void _ctor(float_t  aspectRatio, float_t  frustumHeight, bool  hasBones, ::UnityEngine::Rect  polygonBounds, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  originalPolygon, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solution) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_BakedSolution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven_BakedSolution", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfinerOven_BakedSolution(ConfinerOven_BakedSolution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven_BakedSolution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfinerOven_BakedSolution(ConfinerOven_BakedSolution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22310};

/// @brief Field m_FrustumSizeIntSpace, offset: 0x10, size: 0x4, def value: None
 float_t  ___m_FrustumSizeIntSpace;

/// @brief Field m_AspectStretcher, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::ConfinerOven_AspectStretcher  ___m_AspectStretcher;

/// @brief Field m_HasBones, offset: 0x20, size: 0x1, def value: None
 bool  ___m_HasBones;

/// @brief Field m_SqrPolygonDiagonal, offset: 0x28, size: 0x8, def value: None
 double_t  ___m_SqrPolygonDiagonal;

/// @brief Field m_OriginalPolygon, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ___m_OriginalPolygon;

/// @brief Field m_Solution, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ___m_Solution;

/// @brief Field m_FloatToInt, offset: 0x40, size: 0x8, def value: None
 ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  ___m_FloatToInt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_FrustumSizeIntSpace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_AspectStretcher) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_HasBones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_SqrPolygonDiagonal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_OriginalPolygon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_Solution) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_BakedSolution, ___m_FloatToInt) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ConfinerOven_BakedSolution) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ConfinerOven/FloatToIntScaler
class CORDL_TYPE ConfinerOven_FloatToIntScaler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ClipperEpsilon)) float_t  ClipperEpsilon;

/// @brief Field m_FloatToInt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatToInt, put=__cordl_internal_set_m_FloatToInt)) int64_t  m_FloatToInt;

/// @brief Field m_IntToFloat, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_IntToFloat, put=__cordl_internal_set_m_IntToFloat)) float_t  m_IntToFloat;

/// @brief Method FloatToInt, addr 0xaeb5ddc, size 0x10, virtual false, abstract: false, final false
inline float_t FloatToInt(float_t  f) ;

/// @brief Method IntToFloat, addr 0xaeb6510, size 0x10, virtual false, abstract: false, final false
inline float_t IntToFloat(int64_t  i) ;

static inline ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* New_ctor(::UnityEngine::Rect  polygonBounds) ;

constexpr int64_t const& __cordl_internal_get_m_FloatToInt() const;

constexpr int64_t& __cordl_internal_get_m_FloatToInt() ;

constexpr float_t const& __cordl_internal_get_m_IntToFloat() const;

constexpr float_t& __cordl_internal_get_m_IntToFloat() ;

constexpr void __cordl_internal_set_m_FloatToInt(int64_t  value) ;

constexpr void __cordl_internal_set_m_IntToFloat(float_t  value) ;

/// @brief Method .ctor, addr 0xaeb5f58, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rect  polygonBounds) ;

/// @brief Method get_ClipperEpsilon, addr 0xaeb6984, size 0x18, virtual false, abstract: false, final false
inline float_t get_ClipperEpsilon() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_FloatToIntScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven_FloatToIntScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfinerOven_FloatToIntScaler(ConfinerOven_FloatToIntScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfinerOven_FloatToIntScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfinerOven_FloatToIntScaler(ConfinerOven_FloatToIntScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22309};

/// @brief Field m_FloatToInt, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_FloatToInt;

/// @brief Field m_IntToFloat, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_IntToFloat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler, ___m_FloatToInt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler, ___m_IntToFloat) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
