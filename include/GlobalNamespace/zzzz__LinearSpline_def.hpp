#pragma once
// IWYU pragma private; include "GlobalNamespace/LinearSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LinearSpline)
namespace GlobalNamespace {
struct LinearSpline_CurveBoundary;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LinearSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LinearSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LinearSpline*, "", "LinearSpline");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: LinearSpline
class CORDL_TYPE LinearSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CurveBoundary = ::GlobalNamespace::LinearSpline_CurveBoundary;

/// @brief Field controlPointTransforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPointTransforms, put=__cordl_internal_set_controlPointTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  controlPointTransforms;

/// @brief Field controlPoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPoints, put=__cordl_internal_set_controlPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints;

/// @brief Field cornerRadius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cornerRadius, put=__cordl_internal_set_cornerRadius)) float_t  cornerRadius;

/// @brief Field curveBoundaries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_curveBoundaries, put=__cordl_internal_set_curveBoundaries)) ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*  curveBoundaries;

/// @brief Field debugTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugTransform, put=__cordl_internal_set_debugTransform)) ::UnityW<::UnityEngine::Transform>  debugTransform;

/// @brief Field distances, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_distances, put=__cordl_internal_set_distances)) ::System::Collections::Generic::List_1<float_t>*  distances;

/// @brief Field gizmoResolution, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_gizmoResolution, put=__cordl_internal_set_gizmoResolution)) int32_t  gizmoResolution;

/// @brief Field looping, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_looping, put=__cordl_internal_set_looping)) bool  looping;

/// @brief Field roundCorners, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_roundCorners, put=__cordl_internal_set_roundCorners)) bool  roundCorners;

/// @brief Field testFloat, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_testFloat, put=__cordl_internal_set_testFloat)) float_t  testFloat;

/// @brief Field totalDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalDistance, put=__cordl_internal_set_totalDistance)) float_t  totalDistance;

/// @brief Method Awake, addr 0x5b153a0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Evaluate, addr 0x5b153a4, size 0x600, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Evaluate(float_t  t) ;

/// @brief Method GetForwardTangent, addr 0x5b159a4, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetForwardTangent(float_t  t, float_t  step) ;

static inline ::GlobalNamespace::LinearSpline* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5b15b14, size 0x110, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method RefreshControlPoints, addr 0x5b14d30, size 0x670, virtual false, abstract: false, final false
inline void RefreshControlPoints() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_controlPointTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_controlPointTransforms() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_controlPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_controlPoints() ;

constexpr float_t const& __cordl_internal_get_cornerRadius() const;

constexpr float_t& __cordl_internal_get_cornerRadius() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>* const& __cordl_internal_get_curveBoundaries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*& __cordl_internal_get_curveBoundaries() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_debugTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_debugTransform() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_distances() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_distances() ;

constexpr int32_t const& __cordl_internal_get_gizmoResolution() const;

constexpr int32_t& __cordl_internal_get_gizmoResolution() ;

constexpr bool const& __cordl_internal_get_looping() const;

constexpr bool& __cordl_internal_get_looping() ;

constexpr bool const& __cordl_internal_get_roundCorners() const;

constexpr bool& __cordl_internal_get_roundCorners() ;

constexpr float_t const& __cordl_internal_get_testFloat() const;

constexpr float_t& __cordl_internal_get_testFloat() ;

constexpr float_t const& __cordl_internal_get_totalDistance() const;

constexpr float_t& __cordl_internal_get_totalDistance() ;

constexpr void __cordl_internal_set_controlPointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_controlPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_cornerRadius(float_t  value) ;

constexpr void __cordl_internal_set_curveBoundaries(::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*  value) ;

constexpr void __cordl_internal_set_debugTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_distances(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_gizmoResolution(int32_t  value) ;

constexpr void __cordl_internal_set_looping(bool  value) ;

constexpr void __cordl_internal_set_roundCorners(bool  value) ;

constexpr void __cordl_internal_set_testFloat(float_t  value) ;

constexpr void __cordl_internal_set_totalDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5b15c24, size 0x44c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearSpline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearSpline(LinearSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearSpline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearSpline(LinearSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3556};

/// @brief Field controlPointTransforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___controlPointTransforms;

/// @brief Field debugTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___debugTransform;

/// @brief Field controlPoints, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___controlPoints;

/// @brief Field distances, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___distances;

/// @brief Field curveBoundaries, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LinearSpline_CurveBoundary>*  ___curveBoundaries;

/// @brief Field roundCorners, offset: 0x48, size: 0x1, def value: None
 bool  ___roundCorners;

/// @brief Field cornerRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___cornerRadius;

/// @brief Field looping, offset: 0x50, size: 0x1, def value: None
 bool  ___looping;

/// @brief Field testFloat, offset: 0x54, size: 0x4, def value: None
 float_t  ___testFloat;

/// @brief Field gizmoResolution, offset: 0x58, size: 0x4, def value: None
 int32_t  ___gizmoResolution;

/// @brief Field totalDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___totalDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LinearSpline, ___controlPointTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___debugTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___controlPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___distances) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___curveBoundaries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___roundCorners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___cornerRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___looping) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___testFloat) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___gizmoResolution) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline, ___totalDistance) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LinearSpline) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
