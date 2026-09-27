#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableSpinner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ManipulatableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ManipulatableSpinner)
namespace GlobalNamespace {
class BezierSpline;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ManipulatableSpinner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ManipulatableSpinner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManipulatableSpinner*, "", "ManipulatableSpinner");
// [RequireComponent(typeof(BezierSpline))]
// Dependencies ManipulatableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ManipulatableSpinner
class CORDL_TYPE ManipulatableSpinner : public ::GlobalNamespace::ManipulatableObject {
public:
// Declarations
/// @brief Field <angle>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__angle_k__BackingField, put=__cordl_internal_set__angle_k__BackingField)) float_t  _angle_k__BackingField;

 __declspec(property(get=get_angle, put=set_angle)) float_t  angle;

/// @brief Field applyReleaseVelocity, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyReleaseVelocity, put=__cordl_internal_set_applyReleaseVelocity)) bool  applyReleaseVelocity;

/// @brief Field breakDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakDistance, put=__cordl_internal_set_breakDistance)) float_t  breakDistance;

/// @brief Field currentHandT, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHandT, put=__cordl_internal_set_currentHandT)) float_t  currentHandT;

/// @brief Field lowSpeedDrag, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowSpeedDrag, put=__cordl_internal_set_lowSpeedDrag)) float_t  lowSpeedDrag;

/// @brief Field lowSpeedThreshold, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowSpeedThreshold, put=__cordl_internal_set_lowSpeedThreshold)) float_t  lowSpeedThreshold;

/// @brief Field previousHandT, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousHandT, put=__cordl_internal_set_previousHandT)) float_t  previousHandT;

/// @brief Field releaseDrag, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseDrag, put=__cordl_internal_set_releaseDrag)) float_t  releaseDrag;

/// @brief Field spline, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Field tVelocity, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_tVelocity, put=__cordl_internal_set_tVelocity)) float_t  tVelocity;

/// @brief Method Awake, addr 0x575e11c, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindPositionOnSpline, addr 0x575e1b0, size 0xf4, virtual false, abstract: false, final false
inline float_t FindPositionOnSpline(::UnityEngine::Vector3  grabPoint) ;

static inline ::GlobalNamespace::ManipulatableSpinner* New_ctor() ;

/// @brief Method OnHeldUpdate, addr 0x575e370, size 0xd4, virtual true, abstract: false, final false
inline void OnHeldUpdate(::UnityEngine::GameObject*  hand) ;

/// @brief Method OnReleasedUpdate, addr 0x575e444, size 0x80, virtual true, abstract: false, final false
inline void OnReleasedUpdate() ;

/// @brief Method OnStartManipulation, addr 0x575e174, size 0x3c, virtual true, abstract: false, final false
inline void OnStartManipulation(::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnStopManipulation, addr 0x575e2a4, size 0x4, virtual true, abstract: false, final false
inline void OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity) ;

/// @brief Method SetAngle, addr 0x575e4c4, size 0x8, virtual false, abstract: false, final false
inline void SetAngle(float_t  newAngle) ;

/// @brief Method SetVelocity, addr 0x575e4cc, size 0x8, virtual false, abstract: false, final false
inline void SetVelocity(float_t  newVelocity) ;

/// @brief Method ShouldHandDetach, addr 0x575e2a8, size 0xc8, virtual true, abstract: false, final false
inline bool ShouldHandDetach(::UnityEngine::GameObject*  hand) ;

constexpr float_t const& __cordl_internal_get__angle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__angle_k__BackingField() ;

constexpr bool const& __cordl_internal_get_applyReleaseVelocity() const;

constexpr bool& __cordl_internal_get_applyReleaseVelocity() ;

constexpr float_t const& __cordl_internal_get_breakDistance() const;

constexpr float_t& __cordl_internal_get_breakDistance() ;

constexpr float_t const& __cordl_internal_get_currentHandT() const;

constexpr float_t& __cordl_internal_get_currentHandT() ;

constexpr float_t const& __cordl_internal_get_lowSpeedDrag() const;

constexpr float_t& __cordl_internal_get_lowSpeedDrag() ;

constexpr float_t const& __cordl_internal_get_lowSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_lowSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_previousHandT() const;

constexpr float_t& __cordl_internal_get_previousHandT() ;

constexpr float_t const& __cordl_internal_get_releaseDrag() const;

constexpr float_t& __cordl_internal_get_releaseDrag() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr float_t const& __cordl_internal_get_tVelocity() const;

constexpr float_t& __cordl_internal_get_tVelocity() ;

constexpr void __cordl_internal_set__angle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_applyReleaseVelocity(bool  value) ;

constexpr void __cordl_internal_set_breakDistance(float_t  value) ;

constexpr void __cordl_internal_set_currentHandT(float_t  value) ;

constexpr void __cordl_internal_set_lowSpeedDrag(float_t  value) ;

constexpr void __cordl_internal_set_lowSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_previousHandT(float_t  value) ;

constexpr void __cordl_internal_set_releaseDrag(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

constexpr void __cordl_internal_set_tVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x575e4d4, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_angle, addr 0x575e10c, size 0x8, virtual false, abstract: false, final false
inline float_t get_angle() ;

/// [CompilerGenerated]
/// @brief Method set_angle, addr 0x575e114, size 0x8, virtual false, abstract: false, final false
inline void set_angle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManipulatableSpinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableSpinner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManipulatableSpinner(ManipulatableSpinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManipulatableSpinner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManipulatableSpinner(ManipulatableSpinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1339};

/// @brief Field breakDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___breakDistance;

/// @brief Field applyReleaseVelocity, offset: 0x34, size: 0x1, def value: None
 bool  ___applyReleaseVelocity;

/// @brief Field releaseDrag, offset: 0x38, size: 0x4, def value: None
 float_t  ___releaseDrag;

/// @brief Field lowSpeedThreshold, offset: 0x3c, size: 0x4, def value: None
 float_t  ___lowSpeedThreshold;

/// @brief Field lowSpeedDrag, offset: 0x40, size: 0x4, def value: None
 float_t  ___lowSpeedDrag;

/// @brief Field spline, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// @brief Field previousHandT, offset: 0x50, size: 0x4, def value: None
 float_t  ___previousHandT;

/// @brief Field currentHandT, offset: 0x54, size: 0x4, def value: None
 float_t  ___currentHandT;

/// @brief Field tVelocity, offset: 0x58, size: 0x4, def value: None
 float_t  ___tVelocity;

/// [CompilerGenerated]
/// @brief Field <angle>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____angle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___breakDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___applyReleaseVelocity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___releaseDrag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___lowSpeedThreshold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___lowSpeedDrag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___spline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___previousHandT) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___currentHandT) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ___tVelocity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManipulatableSpinner, ____angle_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManipulatableSpinner) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
