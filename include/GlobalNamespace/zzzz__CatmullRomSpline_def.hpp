#pragma once
// IWYU pragma private; include "GlobalNamespace/CatmullRomSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CatmullRomSpline)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CatmullRomSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CatmullRomSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CatmullRomSpline*, "", "CatmullRomSpline");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: CatmullRomSpline
class CORDL_TYPE CatmullRomSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field controlPointTransforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPointTransforms, put=__cordl_internal_set_controlPointTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  controlPointTransforms;

/// @brief Field controlPoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPoints, put=__cordl_internal_set_controlPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints;

/// @brief Field controlPointsTransformationMatricies, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPointsTransformationMatricies, put=__cordl_internal_set_controlPointsTransformationMatricies)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  controlPointsTransformationMatricies;

/// @brief Field debugTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugTransform, put=__cordl_internal_set_debugTransform)) ::UnityW<::UnityEngine::Transform>  debugTransform;

/// @brief Field testFloat, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_testFloat, put=__cordl_internal_set_testFloat)) float_t  testFloat;

/// @brief Method Awake, addr 0x5b138f4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CatmullRom, addr 0x5b14a34, size 0x1e8, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 CatmullRom(float_t  t, ::UnityEngine::Matrix4x4  p0, ::UnityEngine::Matrix4x4  p1, ::UnityEngine::Matrix4x4  p2, ::UnityEngine::Matrix4x4  p3) ;

/// @brief Method CatmullRom, addr 0x5b13c14, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CatmullRom(float_t  t, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) ;

/// @brief Method Evaluate, addr 0x5b147f8, size 0x23c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 Evaluate(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  controlPoints, float_t  t) ;

/// @brief Method Evaluate, addr 0x5b138f8, size 0x31c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Evaluate(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, float_t  t) ;

/// @brief Method Evaluate, addr 0x5b13d1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Evaluate(float_t  t) ;

/// @brief Method GetClosestEvaluationOnSpline, addr 0x5b13d24, size 0x2cc, virtual false, abstract: false, final false
static inline float_t GetClosestEvaluationOnSpline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, ::UnityEngine::Vector3  worldPoint, ::by_ref<::UnityEngine::Vector3>  linePoint) ;

/// @brief Method GetClosestEvaluationOnSpline, addr 0x5b13ff0, size 0x8, virtual false, abstract: false, final false
inline float_t GetClosestEvaluationOnSpline(::UnityEngine::Vector3  worldPoint, ::by_ref<::UnityEngine::Vector3>  linePoint) ;

/// @brief Method GetForwardTangent, addr 0x5b13ff8, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetForwardTangent(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPoints, float_t  t, float_t  step) ;

/// @brief Method GetForwardTangent, addr 0x5b14168, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetForwardTangent(float_t  t, float_t  step) ;

static inline ::GlobalNamespace::CatmullRomSpline* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5b142d8, size 0x520, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method RefreshControlPoints, addr 0x5b136e0, size 0x214, virtual false, abstract: false, final false
inline void RefreshControlPoints() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_controlPointTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_controlPointTransforms() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_controlPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_controlPoints() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_controlPointsTransformationMatricies() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_controlPointsTransformationMatricies() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_debugTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_debugTransform() ;

constexpr float_t const& __cordl_internal_get_testFloat() const;

constexpr float_t& __cordl_internal_get_testFloat() ;

constexpr void __cordl_internal_set_controlPointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_controlPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_controlPointsTransformationMatricies(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_debugTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_testFloat(float_t  value) ;

/// @brief Method .ctor, addr 0x5b14c1c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatmullRomSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatmullRomSpline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CatmullRomSpline(CatmullRomSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatmullRomSpline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatmullRomSpline(CatmullRomSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3553};

/// @brief Field controlPointTransforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___controlPointTransforms;

/// @brief Field debugTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___debugTransform;

/// @brief Field controlPoints, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___controlPoints;

/// @brief Field controlPointsTransformationMatricies, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ___controlPointsTransformationMatricies;

/// @brief Field testFloat, offset: 0x40, size: 0x4, def value: None
 float_t  ___testFloat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CatmullRomSpline, ___controlPointTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CatmullRomSpline, ___debugTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CatmullRomSpline, ___controlPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CatmullRomSpline, ___controlPointsTransformationMatricies) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CatmullRomSpline, ___testFloat) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CatmullRomSpline) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
