#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineHelpers)
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Cinemachine {
class SplineHelpers;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::SplineHelpers*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineHelpers*, "Unity.Cinemachine", "SplineHelpers");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SplineHelpers
class CORDL_TYPE SplineHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method Bezier1, addr 0xaebc86c, size 0x64, virtual false, abstract: false, final false
static inline float_t Bezier1(float_t  t, float_t  p0, float_t  p1, float_t  p2, float_t  p3) ;

/// @brief Method Bezier3, addr 0xaebc5c4, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Bezier3(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) ;

/// @brief Method BezierTangent1, addr 0xaebc8d0, size 0x78, virtual false, abstract: false, final false
static inline float_t BezierTangent1(float_t  t, float_t  p0, float_t  p1, float_t  p2, float_t  p3) ;

/// @brief Method BezierTangent3, addr 0xaebc670, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 BezierTangent3(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) ;

/// @brief Method BezierTangentWeights3, addr 0xaebc76c, size 0x100, virtual false, abstract: false, final false
static inline void BezierTangentWeights3(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, ::by_ref<::UnityEngine::Vector3>  w0, ::by_ref<::UnityEngine::Vector3>  w1, ::by_ref<::UnityEngine::Vector3>  w2) ;

/// @brief Method ComputeSmoothControlPoints, addr 0xaebd634, size 0x780, virtual false, abstract: false, final false
static inline void ComputeSmoothControlPoints(::by_ref<::ArrayW<::Unity::Mathematics::float3>>  knot, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl1, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl2) ;

/// @brief Method ComputeSmoothControlPoints, addr 0xaebc948, size 0xa38, virtual false, abstract: false, final false
static inline void ComputeSmoothControlPoints(::by_ref<::ArrayW<::UnityEngine::Vector4>>  knot, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl1, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl2) ;

/// @brief Method ComputeSmoothControlPointsLooped, addr 0xaebddb4, size 0x30c, virtual false, abstract: false, final false
static inline void ComputeSmoothControlPointsLooped(::by_ref<::ArrayW<::Unity::Mathematics::float3>>  knot, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl1, ::by_ref<::ArrayW<::Unity::Mathematics::float3>>  ctrl2) ;

/// @brief Method ComputeSmoothControlPointsLooped, addr 0xaebd380, size 0x2b4, virtual false, abstract: false, final false
static inline void ComputeSmoothControlPointsLooped(::by_ref<::ArrayW<::UnityEngine::Vector4>>  knot, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl1, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  ctrl2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineHelpers(SplineHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineHelpers(SplineHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::SplineHelpers) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
