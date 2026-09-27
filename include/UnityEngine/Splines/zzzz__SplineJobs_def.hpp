#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineJobs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
CORDL_MODULE_EXPORT(SplineJobs)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct NativeSpline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineJobs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineJobs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineJobs*, "UnityEngine.Splines", "SplineJobs");
// Dependencies System.Object, UnityEngine.Splines.ISpline
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineJobs
class CORDL_TYPE SplineJobs : public ::System::Object {
public:
// Declarations
/// @brief Method EvaluatePosition, addr 0xb325cf0, size 0x9c, virtual false, abstract: false, final false
static inline void EvaluatePosition(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions) ;

/// @brief Method EvaluatePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void EvaluatePosition(T  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions) ;

/// @brief Method EvaluatePositionTangentNormal, addr 0xb325d8c, size 0xc4, virtual false, abstract: false, final false
static inline void EvaluatePositionTangentNormal(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  tangents, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  normals) ;

/// @brief Method EvaluatePositionTangentNormal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void EvaluatePositionTangentNormal(T  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  tangents, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  normals) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineJobs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineJobs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineJobs(SplineJobs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineJobs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineJobs(SplineJobs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineJobs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
