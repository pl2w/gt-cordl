#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapXformToLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapXformToLine)
namespace GlobalNamespace {
template<typename T>
class IRangedVariable_1;
}
namespace GlobalNamespace {
template<typename T>
class Ref_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SnapXformToLine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnapXformToLine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapXformToLine*, "", "SnapXformToLine");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnapXformToLine
class CORDL_TYPE SnapXformToLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _closest, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__closest, put=__cordl_internal_set__closest)) ::UnityEngine::Vector3  _closest;

/// @brief Field _linear, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__linear, put=__cordl_internal_set__linear)) float_t  _linear;

/// @brief Field apply, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_apply, put=__cordl_internal_set_apply)) bool  apply;

/// @brief Field from, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityW<::UnityEngine::Transform>  from;

 __declspec(property(get=get_linePoint)) ::UnityEngine::Vector3  linePoint;

 __declspec(property(get=get_linearDistance)) float_t  linearDistance;

/// @brief Field onLinearDistanceChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLinearDistanceChanged, put=__cordl_internal_set_onLinearDistanceChanged)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onLinearDistanceChanged;

/// @brief Field onPositionChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPositionChanged, put=__cordl_internal_set_onPositionChanged)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  onPositionChanged;

/// @brief Field output, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*  output;

/// @brief Field resetOnDisable, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetOnDisable, put=__cordl_internal_set_resetOnDisable)) bool  resetOnDisable;

/// @brief Field snapOrientation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapOrientation, put=__cordl_internal_set_snapOrientation)) bool  snapOrientation;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field to, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityW<::UnityEngine::Transform>  to;

/// @brief Method GetClosestPointOnLine, addr 0x5986128, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetClosestPointOnLine(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method GetSnappedPoint, addr 0x5985e84, size 0x12c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSnappedPoint(::UnityEngine::Vector3  point) ;

/// @brief Method GetSnappedPoint, addr 0x5986100, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSnappedPoint(::UnityEngine::Transform*  t) ;

/// @brief Method LateUpdate, addr 0x59861bc, size 0xc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SnapXformToLine* New_ctor() ;

/// @brief Method OnDisable, addr 0x59861a8, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Snap, addr 0x59858a0, size 0x54c, virtual false, abstract: false, final false
inline void Snap(::UnityEngine::Transform*  xform, bool  applyToXform) ;

/// @brief Method SnapTarget, addr 0x5985894, size 0xc, virtual false, abstract: false, final false
inline void SnapTarget(bool  applyToXform) ;

/// @brief Method SnapTarget, addr 0x5985dec, size 0x98, virtual false, abstract: false, final false
inline void SnapTarget(::UnityEngine::Vector3  point) ;

/// @brief Method SnapTargetLinear, addr 0x5985fb0, size 0x150, virtual false, abstract: false, final false
inline void SnapTargetLinear(float_t  t) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__closest() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__closest() ;

constexpr float_t const& __cordl_internal_get__linear() const;

constexpr float_t& __cordl_internal_get__linear() ;

constexpr bool const& __cordl_internal_get_apply() const;

constexpr bool& __cordl_internal_get_apply() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_from() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_from() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onLinearDistanceChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onLinearDistanceChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_onPositionChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_onPositionChanged() ;

constexpr ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>* const& __cordl_internal_get_output() const;

constexpr ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*& __cordl_internal_get_output() ;

constexpr bool const& __cordl_internal_get_resetOnDisable() const;

constexpr bool& __cordl_internal_get_resetOnDisable() ;

constexpr bool const& __cordl_internal_get_snapOrientation() const;

constexpr bool& __cordl_internal_get_snapOrientation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_to() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set__closest(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__linear(float_t  value) ;

constexpr void __cordl_internal_set_apply(bool  value) ;

constexpr void __cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onLinearDistanceChanged(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_onPositionChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_output(::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set_resetOnDisable(bool  value) ;

constexpr void __cordl_internal_set_snapOrientation(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x59861c8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_linePoint, addr 0x5985880, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_linePoint() ;

/// @brief Method get_linearDistance, addr 0x598588c, size 0x8, virtual false, abstract: false, final false
inline float_t get_linearDistance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapXformToLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapXformToLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapXformToLine(SnapXformToLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapXformToLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapXformToLine(SnapXformToLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2546};

/// @brief Field apply, offset: 0x20, size: 0x1, def value: None
 bool  ___apply;

/// @brief Field snapOrientation, offset: 0x21, size: 0x1, def value: None
 bool  ___snapOrientation;

/// @brief Field resetOnDisable, offset: 0x22, size: 0x1, def value: None
 bool  ___resetOnDisable;

/// [Space]
/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Space]
/// @brief Field from, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___from;

/// @brief Field to, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___to;

/// @brief Field _closest, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____closest;

/// @brief Field _linear, offset: 0x4c, size: 0x4, def value: None
 float_t  ____linear;

/// @brief Field output, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::Ref_1<::GlobalNamespace::IRangedVariable_1<float_t>*>*  ___output;

/// @brief Field onLinearDistanceChanged, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onLinearDistanceChanged;

/// @brief Field onPositionChanged, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___onPositionChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___apply) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___snapOrientation) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___resetOnDisable) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___from) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___to) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ____closest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ____linear) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___output) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___onLinearDistanceChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapXformToLine, ___onPositionChanged) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapXformToLine) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
