#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwipeReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwipeReactor_Axis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticSwipeReactor)
namespace GlobalNamespace {
struct CosmeticSwipeReactor_Axis;
}
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CosmeticSwipeReactor;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticSwipeReactor*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticSwipeReactor*, "GorillaTag.Cosmetics", "CosmeticSwipeReactor");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GorillaTag.Cosmetics.CosmeticSwipeReactor::Axis, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticSwipeReactor
class CORDL_TYPE CosmeticSwipeReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::CosmeticSwipeReactor_Axis;

/// @brief Field OnReverseSwipe, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReverseSwipe, put=__cordl_internal_set_OnReverseSwipe)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnReverseSwipe;

/// @brief Field OnSwipe, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSwipe, put=__cordl_internal_set_OnSwipe)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnSwipe;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xda, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _rig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field col, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_col, put=__cordl_internal_set_col)) ::UnityW<::UnityEngine::Collider>  col;

/// @brief Field cooldownEndL, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownEndL, put=__cordl_internal_set_cooldownEndL)) double_t  cooldownEndL;

/// @brief Field cooldownEndR, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownEndR, put=__cordl_internal_set_cooldownEndR)) double_t  cooldownEndR;

/// @brief Field distanceL, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceL, put=__cordl_internal_set_distanceL)) float_t  distanceL;

/// @brief Field distanceR, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceR, put=__cordl_internal_set_distanceR)) float_t  distanceR;

/// @brief Field handInTriggerL, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_handInTriggerL, put=__cordl_internal_set_handInTriggerL)) bool  handInTriggerL;

/// @brief Field handInTriggerR, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_handInTriggerR, put=__cordl_internal_set_handInTriggerR)) bool  handInTriggerR;

/// @brief Field handIndicatorL, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_handIndicatorL, put=__cordl_internal_set_handIndicatorL)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  handIndicatorL;

/// @brief Field handIndicatorR, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_handIndicatorR, put=__cordl_internal_set_handIndicatorR)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  handIndicatorR;

/// @brief Field isCoolingDownL, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCoolingDownL, put=__cordl_internal_set_isCoolingDownL)) bool  isCoolingDownL;

/// @brief Field isCoolingDownR, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCoolingDownR, put=__cordl_internal_set_isCoolingDownR)) bool  isCoolingDownR;

/// @brief Field isLocal, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field lastFramePosL, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastFramePosL, put=__cordl_internal_set_lastFramePosL)) ::UnityEngine::Vector3  lastFramePosL;

/// @brief Field lastFramePosR, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastFramePosR, put=__cordl_internal_set_lastFramePosR)) ::UnityEngine::Vector3  lastFramePosR;

/// @brief Field lateralMovementTolerance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lateralMovementTolerance, put=__cordl_internal_set_lateralMovementTolerance)) float_t  lateralMovementTolerance;

/// @brief Field localSwipeAxis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_localSwipeAxis, put=__cordl_internal_set_localSwipeAxis)) ::GlobalNamespace::CosmeticSwipeReactor_Axis  localSwipeAxis;

/// @brief Field maximumVelocity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumVelocity, put=__cordl_internal_set_maximumVelocity)) float_t  maximumVelocity;

/// @brief Field minimumVelocity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumVelocity, put=__cordl_internal_set_minimumVelocity)) float_t  minimumVelocity;

/// @brief Field resetCooldownOnTriggerExit, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetCooldownOnTriggerExit, put=__cordl_internal_set_resetCooldownOnTriggerExit)) bool  resetCooldownOnTriggerExit;

/// @brief Field startPosL, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPosL, put=__cordl_internal_set_startPosL)) ::UnityEngine::Vector3  startPosL;

/// @brief Field startPosR, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPosR, put=__cordl_internal_set_startPosR)) ::UnityEngine::Vector3  startPosR;

/// @brief Field swipeCooldown, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_swipeCooldown, put=__cordl_internal_set_swipeCooldown)) float_t  swipeCooldown;

/// @brief Field swipeDir, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_swipeDir, put=__cordl_internal_set_swipeDir)) ::UnityEngine::Vector3  swipeDir;

/// @brief Field swipeDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_swipeDistance, put=__cordl_internal_set_swipeDistance)) float_t  swipeDistance;

/// @brief Field swipeHaptics, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_swipeHaptics, put=__cordl_internal_set_swipeHaptics)) ::UnityEngine::AnimationCurve*  swipeHaptics;

/// @brief Field swipingUpL, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_swipingUpL, put=__cordl_internal_set_swipingUpL)) bool  swipingUpL;

/// @brief Field swipingUpR, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_swipingUpR, put=__cordl_internal_set_swipingUpR)) bool  swipingUpR;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5da6384, size 0x2d8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAxisComponent, addr 0x5da6eac, size 0x18, virtual false, abstract: false, final false
inline float_t GetAxisComponent(::UnityEngine::Vector3  vec) ;

/// @brief Method GetLateralMovement, addr 0x5da6ec4, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetLateralMovement(::UnityEngine::Vector3  vec) ;

static inline ::GorillaTag::Cosmetics::CosmeticSwipeReactor* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5da665c, size 0x1fc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5da689c, size 0x154, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ProcessHandMovement, addr 0x5da6af0, size 0x3bc, virtual false, abstract: false, final false
inline void ProcessHandMovement(::GlobalNamespace::GorillaTriggerColliderHandIndicator*  hand, ::UnityEngine::Vector3  start, ::by_ref<::UnityEngine::Vector3>  last, ::by_ref<bool>  swipingUp, ::by_ref<float_t>  dist, ::by_ref<bool>  isCoolingDown, ::by_ref<double_t>  cooldownEndTime) ;

/// @brief Method ResetProgress, addr 0x5da6858, size 0x44, virtual false, abstract: false, final false
inline void ResetProgress(bool  left, ::UnityEngine::Vector3  pos) ;

/// @brief Method Tick, addr 0x5da6a00, size 0xf0, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnReverseSwipe() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnReverseSwipe() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnSwipe() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnSwipe() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_col() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_col() ;

constexpr double_t const& __cordl_internal_get_cooldownEndL() const;

constexpr double_t& __cordl_internal_get_cooldownEndL() ;

constexpr double_t const& __cordl_internal_get_cooldownEndR() const;

constexpr double_t& __cordl_internal_get_cooldownEndR() ;

constexpr float_t const& __cordl_internal_get_distanceL() const;

constexpr float_t& __cordl_internal_get_distanceL() ;

constexpr float_t const& __cordl_internal_get_distanceR() const;

constexpr float_t& __cordl_internal_get_distanceR() ;

constexpr bool const& __cordl_internal_get_handInTriggerL() const;

constexpr bool& __cordl_internal_get_handInTriggerL() ;

constexpr bool const& __cordl_internal_get_handInTriggerR() const;

constexpr bool& __cordl_internal_get_handInTriggerR() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_handIndicatorL() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_handIndicatorL() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_handIndicatorR() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_handIndicatorR() ;

constexpr bool const& __cordl_internal_get_isCoolingDownL() const;

constexpr bool& __cordl_internal_get_isCoolingDownL() ;

constexpr bool const& __cordl_internal_get_isCoolingDownR() const;

constexpr bool& __cordl_internal_get_isCoolingDownR() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastFramePosL() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastFramePosL() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastFramePosR() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastFramePosR() ;

constexpr float_t const& __cordl_internal_get_lateralMovementTolerance() const;

constexpr float_t& __cordl_internal_get_lateralMovementTolerance() ;

constexpr ::GlobalNamespace::CosmeticSwipeReactor_Axis const& __cordl_internal_get_localSwipeAxis() const;

constexpr ::GlobalNamespace::CosmeticSwipeReactor_Axis& __cordl_internal_get_localSwipeAxis() ;

constexpr float_t const& __cordl_internal_get_maximumVelocity() const;

constexpr float_t& __cordl_internal_get_maximumVelocity() ;

constexpr float_t const& __cordl_internal_get_minimumVelocity() const;

constexpr float_t& __cordl_internal_get_minimumVelocity() ;

constexpr bool const& __cordl_internal_get_resetCooldownOnTriggerExit() const;

constexpr bool& __cordl_internal_get_resetCooldownOnTriggerExit() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosL() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosL() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosR() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosR() ;

constexpr float_t const& __cordl_internal_get_swipeCooldown() const;

constexpr float_t& __cordl_internal_get_swipeCooldown() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_swipeDir() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_swipeDir() ;

constexpr float_t const& __cordl_internal_get_swipeDistance() const;

constexpr float_t& __cordl_internal_get_swipeDistance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_swipeHaptics() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_swipeHaptics() ;

constexpr bool const& __cordl_internal_get_swipingUpL() const;

constexpr bool& __cordl_internal_get_swipingUpL() ;

constexpr bool const& __cordl_internal_get_swipingUpR() const;

constexpr bool& __cordl_internal_get_swipingUpR() ;

constexpr void __cordl_internal_set_OnReverseSwipe(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnSwipe(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_col(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_cooldownEndL(double_t  value) ;

constexpr void __cordl_internal_set_cooldownEndR(double_t  value) ;

constexpr void __cordl_internal_set_distanceL(float_t  value) ;

constexpr void __cordl_internal_set_distanceR(float_t  value) ;

constexpr void __cordl_internal_set_handInTriggerL(bool  value) ;

constexpr void __cordl_internal_set_handInTriggerR(bool  value) ;

constexpr void __cordl_internal_set_handIndicatorL(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_handIndicatorR(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_isCoolingDownL(bool  value) ;

constexpr void __cordl_internal_set_isCoolingDownR(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_lastFramePosL(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastFramePosR(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lateralMovementTolerance(float_t  value) ;

constexpr void __cordl_internal_set_localSwipeAxis(::GlobalNamespace::CosmeticSwipeReactor_Axis  value) ;

constexpr void __cordl_internal_set_maximumVelocity(float_t  value) ;

constexpr void __cordl_internal_set_minimumVelocity(float_t  value) ;

constexpr void __cordl_internal_set_resetCooldownOnTriggerExit(bool  value) ;

constexpr void __cordl_internal_set_startPosL(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startPosR(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_swipeCooldown(float_t  value) ;

constexpr void __cordl_internal_set_swipeDir(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_swipeDistance(float_t  value) ;

constexpr void __cordl_internal_set_swipeHaptics(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_swipingUpL(bool  value) ;

constexpr void __cordl_internal_set_swipingUpR(bool  value) ;

/// @brief Method .ctor, addr 0x5da6ee8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5da69f0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5da69f8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSwipeReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSwipeReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSwipeReactor(CosmeticSwipeReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSwipeReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSwipeReactor(CosmeticSwipeReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4989};

/// [SerializeField]
/// @brief Field localSwipeAxis, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticSwipeReactor_Axis  ___localSwipeAxis;

/// @brief Field swipeDir, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___swipeDir;

/// [Tooltip("Distance hand can move perpindicular to the swipe without cancelling the gesture")]
/// [SerializeField]
/// @brief Field lateralMovementTolerance, offset: 0x30, size: 0x4, def value: None
 float_t  ___lateralMovementTolerance;

/// [Tooltip("How far the hand has to move along the axis to count as a swipe\nThis distance must be contained within the trigger area")]
/// [SerializeField]
/// @brief Field swipeDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___swipeDistance;

/// [SerializeField]
/// @brief Field minimumVelocity, offset: 0x38, size: 0x4, def value: None
 float_t  ___minimumVelocity;

/// [SerializeField]
/// @brief Field maximumVelocity, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maximumVelocity;

/// [Tooltip("Delay after completing a swipe before starting the next")]
/// [SerializeField]
/// @brief Field swipeCooldown, offset: 0x40, size: 0x4, def value: None
 float_t  ___swipeCooldown;

/// [SerializeField]
/// @brief Field resetCooldownOnTriggerExit, offset: 0x44, size: 0x1, def value: None
 bool  ___resetCooldownOnTriggerExit;

/// [Tooltip("Amplitude of haptics from normalized swiped distance")]
/// [SerializeField]
/// @brief Field swipeHaptics, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___swipeHaptics;

/// @brief Field OnSwipe, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnSwipe;

/// @brief Field OnReverseSwipe, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnReverseSwipe;

/// @brief Field _rig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// @brief Field col, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___col;

/// @brief Field isLocal, offset: 0x70, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field handInTriggerR, offset: 0x71, size: 0x1, def value: None
 bool  ___handInTriggerR;

/// @brief Field handInTriggerL, offset: 0x72, size: 0x1, def value: None
 bool  ___handInTriggerL;

/// @brief Field handIndicatorR, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___handIndicatorR;

/// @brief Field handIndicatorL, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___handIndicatorL;

/// @brief Field startPosR, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPosR;

/// @brief Field startPosL, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPosL;

/// @brief Field lastFramePosR, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastFramePosR;

/// @brief Field lastFramePosL, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastFramePosL;

/// @brief Field distanceR, offset: 0xb8, size: 0x4, def value: None
 float_t  ___distanceR;

/// @brief Field distanceL, offset: 0xbc, size: 0x4, def value: None
 float_t  ___distanceL;

/// @brief Field swipingUpL, offset: 0xc0, size: 0x1, def value: None
 bool  ___swipingUpL;

/// @brief Field swipingUpR, offset: 0xc1, size: 0x1, def value: None
 bool  ___swipingUpR;

/// @brief Field cooldownEndL, offset: 0xc8, size: 0x8, def value: None
 double_t  ___cooldownEndL;

/// @brief Field cooldownEndR, offset: 0xd0, size: 0x8, def value: None
 double_t  ___cooldownEndR;

/// @brief Field isCoolingDownL, offset: 0xd8, size: 0x1, def value: None
 bool  ___isCoolingDownL;

/// @brief Field isCoolingDownR, offset: 0xd9, size: 0x1, def value: None
 bool  ___isCoolingDownR;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xda, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___localSwipeAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipeDir) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___lateralMovementTolerance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipeDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___minimumVelocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___maximumVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipeCooldown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___resetCooldownOnTriggerExit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipeHaptics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___OnSwipe) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___OnReverseSwipe) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ____rig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___col) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___isLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___handInTriggerR) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___handInTriggerL) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___handIndicatorR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___handIndicatorL) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___startPosR) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___startPosL) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___lastFramePosR) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___lastFramePosL) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___distanceR) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___distanceL) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipingUpL) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___swipingUpR) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___cooldownEndL) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___cooldownEndR) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___isCoolingDownL) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ___isCoolingDownR) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwipeReactor, ____TickRunning_k__BackingField) == 0xda, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticSwipeReactor) == 0xe0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
