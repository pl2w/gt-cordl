#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/NoncontrollableBroomstick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoncontrollableBroomstick)
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class NoncontrollableBroomstick;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*, "GorillaLocomotion.Gameplay", "NoncontrollableBroomstick");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Splines.NativeSpline
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.NoncontrollableBroomstick
class CORDL_TYPE NoncontrollableBroomstick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SplineProgressOffet, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SplineProgressOffet, put=__cordl_internal_set_SplineProgressOffet)) float_t  SplineProgressOffet;

/// @brief Field constantVelocity, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_constantVelocity, put=__cordl_internal_set_constantVelocity)) bool  constantVelocity;

/// @brief Field duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field lookForward, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_lookForward, put=__cordl_internal_set_lookForward)) bool  lookForward;

/// @brief Field momentaryGrabOnly, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_momentaryGrabOnly, put=__cordl_internal_set_momentaryGrabOnly)) bool  momentaryGrabOnly;

/// @brief Field nativeSpline, offset 0x58, size 0x48 
 __declspec(property(get=__cordl_internal_get_nativeSpline, put=__cordl_internal_set_nativeSpline)) ::UnityEngine::Splines::NativeSpline  nativeSpline;

/// @brief Field progress, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressPerFixedUpdate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressPerFixedUpdate, put=__cordl_internal_set_progressPerFixedUpdate)) float_t  progressPerFixedUpdate;

/// @brief Field secondsToCycles, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondsToCycles, put=__cordl_internal_set_secondsToCycles)) double_t  secondsToCycles;

/// @brief Field smoothRotationTrackingRate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothRotationTrackingRate, put=__cordl_internal_set_smoothRotationTrackingRate)) float_t  smoothRotationTrackingRate;

/// @brief Field smoothRotationTrackingRateExp, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothRotationTrackingRateExp, put=__cordl_internal_set_smoothRotationTrackingRateExp)) float_t  smoothRotationTrackingRateExp;

/// @brief Field spline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Field unitySpline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unitySpline, put=__cordl_internal_set_unitySpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  unitySpline;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method FixedUpdate, addr 0x5cee190, size 0x338, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.CanBeGrabbed, addr 0x5cee4c8, size 0x8, virtual true, abstract: false, final true
inline bool GorillaLocomotion_Gameplay_IGorillaGrabable_CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased, addr 0x5cee55c, size 0x4, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased(::GlobalNamespace::GorillaGrabber*  g) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed, addr 0x5cee4d0, size 0x8c, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed(::GlobalNamespace::GorillaGrabber*  g, ::by_ref<::UnityEngine::Transform*>  grabbedObject, ::by_ref<::UnityEngine::Vector3>  grabbedLocalPosition) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x5cee594, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method MomentaryGrabOnly, addr 0x5cee56c, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5cee560, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5cee03c, size 0x154, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_SplineProgressOffet() const;

constexpr float_t& __cordl_internal_get_SplineProgressOffet() ;

constexpr bool const& __cordl_internal_get_constantVelocity() const;

constexpr bool& __cordl_internal_get_constantVelocity() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_lookForward() const;

constexpr bool& __cordl_internal_get_lookForward() ;

constexpr bool const& __cordl_internal_get_momentaryGrabOnly() const;

constexpr bool& __cordl_internal_get_momentaryGrabOnly() ;

constexpr ::UnityEngine::Splines::NativeSpline const& __cordl_internal_get_nativeSpline() const;

constexpr ::UnityEngine::Splines::NativeSpline& __cordl_internal_get_nativeSpline() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr float_t const& __cordl_internal_get_progressPerFixedUpdate() const;

constexpr float_t& __cordl_internal_get_progressPerFixedUpdate() ;

constexpr double_t const& __cordl_internal_get_secondsToCycles() const;

constexpr double_t& __cordl_internal_get_secondsToCycles() ;

constexpr float_t const& __cordl_internal_get_smoothRotationTrackingRate() const;

constexpr float_t& __cordl_internal_get_smoothRotationTrackingRate() ;

constexpr float_t const& __cordl_internal_get_smoothRotationTrackingRateExp() const;

constexpr float_t& __cordl_internal_get_smoothRotationTrackingRateExp() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_unitySpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_unitySpline() ;

constexpr void __cordl_internal_set_SplineProgressOffet(float_t  value) ;

constexpr void __cordl_internal_set_constantVelocity(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_lookForward(bool  value) ;

constexpr void __cordl_internal_set_momentaryGrabOnly(bool  value) ;

constexpr void __cordl_internal_set_nativeSpline(::UnityEngine::Splines::NativeSpline  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressPerFixedUpdate(float_t  value) ;

constexpr void __cordl_internal_set_secondsToCycles(double_t  value) ;

constexpr void __cordl_internal_set_smoothRotationTrackingRate(float_t  value) ;

constexpr void __cordl_internal_set_smoothRotationTrackingRateExp(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

constexpr void __cordl_internal_set_unitySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x5cee574, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoncontrollableBroomstick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoncontrollableBroomstick", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NoncontrollableBroomstick(NoncontrollableBroomstick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoncontrollableBroomstick", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoncontrollableBroomstick(NoncontrollableBroomstick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4535};

/// @brief Field unitySpline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___unitySpline;

/// @brief Field spline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// @brief Field duration, offset: 0x30, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field smoothRotationTrackingRate, offset: 0x34, size: 0x4, def value: None
 float_t  ___smoothRotationTrackingRate;

/// @brief Field lookForward, offset: 0x38, size: 0x1, def value: None
 bool  ___lookForward;

/// [SerializeField]
/// @brief Field SplineProgressOffet, offset: 0x3c, size: 0x4, def value: None
 float_t  ___SplineProgressOffet;

/// @brief Field progress, offset: 0x40, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field smoothRotationTrackingRateExp, offset: 0x44, size: 0x4, def value: None
 float_t  ___smoothRotationTrackingRateExp;

/// [SerializeField]
/// @brief Field constantVelocity, offset: 0x48, size: 0x1, def value: None
 bool  ___constantVelocity;

/// @brief Field progressPerFixedUpdate, offset: 0x4c, size: 0x4, def value: None
 float_t  ___progressPerFixedUpdate;

/// @brief Field secondsToCycles, offset: 0x50, size: 0x8, def value: None
 double_t  ___secondsToCycles;

/// @brief Field nativeSpline, offset: 0x58, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  ___nativeSpline;

/// [SerializeField]
/// @brief Field momentaryGrabOnly, offset: 0xa0, size: 0x1, def value: None
 bool  ___momentaryGrabOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___unitySpline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___spline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___smoothRotationTrackingRate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___lookForward) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___SplineProgressOffet) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___progress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___smoothRotationTrackingRateExp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___constantVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___progressPerFixedUpdate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___secondsToCycles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___nativeSpline) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick, ___momentaryGrabOnly) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::NoncontrollableBroomstick) == 0xa8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
