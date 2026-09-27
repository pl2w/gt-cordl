#pragma once
// IWYU pragma private; include "UnityEngine/Splines/CurveUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveUtility)
namespace GlobalNamespace {
struct CurveUtility_FrenetFrame;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct DistanceToInterpolation;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine::Splines {
class CurveUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::CurveUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::CurveUtility*, "UnityEngine.Splines", "CurveUtility");
// Dependencies System.Collections.Generic.IReadOnlyList`1<T>, System.Object, UnityEngine.Splines.DistanceToInterpolation
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.CurveUtility
class CORDL_TYPE CurveUtility : public ::System::Object {
public:
// Declarations
using FrenetFrame = ::GlobalNamespace::CurveUtility_FrenetFrame;

/// @brief Field k_DistanceLUT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DistanceLUT, put=setStaticF_k_DistanceLUT)) ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  k_DistanceLUT;

/// @brief Method ApproximateLength, addr 0xb30ce08, size 0x2b0, virtual false, abstract: false, final false
static inline float_t ApproximateLength(::UnityEngine::Splines::BezierCurve  curve) ;

/// @brief Method Approximately, addr 0xb30cdc4, size 0x44, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method CalculateCurveLengths, addr 0xb30cb30, size 0xd8, virtual false, abstract: false, final false
static inline void CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable) ;

/// @brief Method CalculateCurveLengths, addr 0xb30cc08, size 0x1bc, virtual false, abstract: false, final false
static inline void CalculateCurveLengths(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::DistanceToInterpolation>  lookupTable) ;

/// @brief Method CalculateLength, addr 0xb30c994, size 0x19c, virtual false, abstract: false, final false
static inline float_t CalculateLength(::UnityEngine::Splines::BezierCurve  curve, int32_t  resolution) ;

/// @brief Method DeCasteljau, addr 0xb30c7ac, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 DeCasteljau(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateAcceleration, addr 0xb30c544, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateAcceleration(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateCurvature, addr 0xb30c5f8, size 0x1b4, virtual false, abstract: false, final false
static inline float_t EvaluateCurvature(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluatePosition, addr 0xb30c3a8, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluatePosition(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateTangent, addr 0xb30c474, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateTangent(::UnityEngine::Splines::BezierCurve  curve, float_t  t) ;

/// @brief Method EvaluateUpVector, addr 0xb30d1fc, size 0xdec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EvaluateUpVector(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, bool  fixEndUpMismatch) ;

/// @brief Method EvaluateUpVectors, addr 0xb30d0b8, size 0x144, virtual false, abstract: false, final false
static inline void EvaluateUpVectors(::UnityEngine::Splines::BezierCurve  curve, ::Unity::Mathematics::float3  startUp, ::Unity::Mathematics::float3  endUp, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  upVectors) ;

/// @brief Method GetDistanceToInterpolation, addr 0xb30e29c, size 0xb0, virtual false, abstract: false, final false
static inline float_t GetDistanceToInterpolation(::UnityEngine::Splines::BezierCurve  curve, float_t  distance) ;

/// @brief Method GetDistanceToInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::DistanceToInterpolation>*>)
static inline float_t GetDistanceToInterpolation(T  lut, float_t  distance) ;

/// @brief Method GetNearestPoint, addr 0xb30e34c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, int32_t  resolution) ;

/// @brief Method GetNearestPoint, addr 0xb30e400, size 0x2cc, virtual false, abstract: false, final false
static inline float_t GetNearestPoint(::UnityEngine::Splines::BezierCurve  curve, ::UnityEngine::Ray  ray, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<float_t>  interpolation, int32_t  resolution) ;

/// @brief Method GetNextRotationMinimizingFrame, addr 0xb30dfe8, size 0x2b4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CurveUtility_FrenetFrame GetNextRotationMinimizingFrame(::UnityEngine::Splines::BezierCurve  curve, ::GlobalNamespace::CurveUtility_FrenetFrame  previousRMFrame, float_t  nextRMFrameT) ;

/// @brief Method Split, addr 0xb30c864, size 0x130, virtual false, abstract: false, final false
static inline void Split(::UnityEngine::Splines::BezierCurve  curve, float_t  t, ::by_ref<::UnityEngine::Splines::BezierCurve>  left, ::by_ref<::UnityEngine::Splines::BezierCurve>  right) ;

static inline ::ArrayW<::UnityEngine::Splines::DistanceToInterpolation> getStaticF_k_DistanceLUT() ;

static inline void setStaticF_k_DistanceLUT(::ArrayW<::UnityEngine::Splines::DistanceToInterpolation>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility(CurveUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility(CurveUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27921};

/// @brief Field k_Epsilon offset 0xffffffff size 0x4
static constexpr float_t  k_Epsilon{static_cast<float_t>(0.0001f)};

/// @brief Field k_NormalsPerCurve offset 0xffffffff size 0x4
static constexpr int32_t  k_NormalsPerCurve{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::CurveUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
