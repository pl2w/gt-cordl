#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineMath)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineMath;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineMath*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMath*, "UnityEngine.Splines", "SplineMath");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineMath
class CORDL_TYPE SplineMath : public ::System::Object {
public:
// Declarations
/// @brief Method DistancePointLine, addr 0xb32653c, size 0xc0, virtual false, abstract: false, final false
static inline float_t DistancePointLine(::Unity::Mathematics::float3  p, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method GetUnitCircleTangentLength, addr 0xb3265fc, size 0x4c, virtual false, abstract: false, final false
static inline float_t GetUnitCircleTangentLength() ;

/// @brief Method PointLineNearestPoint, addr 0xb3263d4, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 PointLineNearestPoint(::Unity::Mathematics::float3  p, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::by_ref<float_t>  lineParam) ;

/// @brief Method RayLineDistance, addr 0xb32618c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 RayLineDistance(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method RayLineNearestPoint, addr 0xb3261ec, size 0x5c, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> RayLineNearestPoint(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method RayLineNearestPoint, addr 0xb326248, size 0x18c, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Unity::Mathematics::float3,::Unity::Mathematics::float3> RayLineNearestPoint(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::by_ref<float_t>  rayParam, ::by_ref<float_t>  lineParam) ;

/// @brief Method RayLineParameter, addr 0xb3260f8, size 0x94, virtual false, abstract: false, final false
static inline float_t RayLineParameter(::Unity::Mathematics::float3  ro, ::Unity::Mathematics::float3  rd, ::Unity::Mathematics::float3  lineOrigin, ::Unity::Mathematics::float3  lineDir) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineMath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineMath(SplineMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineMath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMath(SplineMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineMath) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
