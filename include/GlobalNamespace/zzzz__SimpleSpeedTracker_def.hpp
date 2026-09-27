#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleSpeedTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_AxisFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleSpeedTracker)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct SimpleSpeedTracker_AxisFilter;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleSpeedTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleSpeedTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleSpeedTracker*, "", "SimpleSpeedTracker");
// Dependencies SimpleSpeedTracker::AxisFilter, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleSpeedTracker
class CORDL_TYPE SimpleSpeedTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AxisFilter = ::GlobalNamespace::SimpleSpeedTracker_AxisFilter;

 __declspec(property(get=get_HasAxisFilter)) bool  HasAxisFilter;

/// @brief Field continuousProperties, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field debugCurrentSpeed, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCurrentSpeed, put=__cordl_internal_set_debugCurrentSpeed)) float_t  debugCurrentSpeed;

/// @brief Field eventThreshold, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventThreshold, put=__cordl_internal_set_eventThreshold)) float_t  eventThreshold;

/// @brief Field lastPos, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPos, put=__cordl_internal_set_lastPos)) ::UnityEngine::Vector3  lastPos;

/// @brief Field lastRawSpeed, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRawSpeed, put=__cordl_internal_set_lastRawSpeed)) float_t  lastRawSpeed;

/// @brief Field lastSliceTime, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSliceTime, put=__cordl_internal_set_lastSliceTime)) float_t  lastSliceTime;

/// @brief Field lastSpeed, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpeed, put=__cordl_internal_set_lastSpeed)) float_t  lastSpeed;

/// @brief Field lastVelocity, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastVelocity, put=__cordl_internal_set_lastVelocity)) ::UnityEngine::Vector3  lastVelocity;

/// @brief Field negativeThreshold, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_negativeThreshold, put=__cordl_internal_set_negativeThreshold)) float_t  negativeThreshold;

/// @brief Field onAboveNegativeThreshold, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveNegativeThreshold, put=__cordl_internal_set_onAboveNegativeThreshold)) ::UnityEngine::Events::UnityEvent*  onAboveNegativeThreshold;

/// @brief Field onAbovePositiveThreshold, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAbovePositiveThreshold, put=__cordl_internal_set_onAbovePositiveThreshold)) ::UnityEngine::Events::UnityEvent*  onAbovePositiveThreshold;

/// @brief Field onBelowNegativeThreshold, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowNegativeThreshold, put=__cordl_internal_set_onBelowNegativeThreshold)) ::UnityEngine::Events::UnityEvent*  onBelowNegativeThreshold;

/// @brief Field onBelowPositiveThreshold, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowPositiveThreshold, put=__cordl_internal_set_onBelowPositiveThreshold)) ::UnityEngine::Events::UnityEvent*  onBelowPositiveThreshold;

/// @brief Field onSpeedAboveThreshold, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSpeedAboveThreshold, put=__cordl_internal_set_onSpeedAboveThreshold)) ::UnityEngine::Events::UnityEvent*  onSpeedAboveThreshold;

/// @brief Field onSpeedBelowThreshold, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSpeedBelowThreshold, put=__cordl_internal_set_onSpeedBelowThreshold)) ::UnityEngine::Events::UnityEvent*  onSpeedBelowThreshold;

/// @brief Field onSpeedUpdated, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSpeedUpdated, put=__cordl_internal_set_onSpeedUpdated)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onSpeedUpdated;

/// @brief Field positiveThreshold, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_positiveThreshold, put=__cordl_internal_set_positiveThreshold)) float_t  positiveThreshold;

/// @brief Field postprocessCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_postprocessCurve, put=__cordl_internal_set_postprocessCurve)) ::UnityEngine::AnimationCurve*  postprocessCurve;

/// @brief Field responsiveness, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_responsiveness, put=__cordl_internal_set_responsiveness)) float_t  responsiveness;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field trackAxis, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackAxis, put=__cordl_internal_set_trackAxis)) ::GlobalNamespace::SimpleSpeedTracker_AxisFilter  trackAxis;

/// @brief Field useRawSpeed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRawSpeed, put=__cordl_internal_set_useRawSpeed)) bool  useRawSpeed;

/// @brief Field useWorldAxes, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWorldAxes, put=__cordl_internal_set_useWorldAxes)) bool  useWorldAxes;

/// @brief Field wasAboveThreshold, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAboveThreshold, put=__cordl_internal_set_wasAboveThreshold)) bool  wasAboveThreshold;

/// @brief Field wasMovingNegative, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasMovingNegative, put=__cordl_internal_set_wasMovingNegative)) bool  wasMovingNegative;

/// @brief Field wasMovingPositive, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasMovingPositive, put=__cordl_internal_set_wasMovingPositive)) bool  wasMovingPositive;

/// @brief Field worldSpace, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldSpace, put=__cordl_internal_set_worldSpace)) ::UnityW<::UnityEngine::Transform>  worldSpace;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method GetLocalVelocity, addr 0x565b06c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalVelocity() ;

/// @brief Method GetPostProcessSpeed, addr 0x565b034, size 0x24, virtual false, abstract: false, final false
inline float_t GetPostProcessSpeed() ;

/// @brief Method GetRawSpeed, addr 0x565b058, size 0x8, virtual false, abstract: false, final false
inline float_t GetRawSpeed() ;

/// @brief Method GetSignedSpeedAlongForward, addr 0x565b114, size 0xb4, virtual false, abstract: false, final false
inline float_t GetSignedSpeedAlongForward(::UnityEngine::Transform*  reference) ;

/// @brief Method GetSignedSpeedX, addr 0x565b1c8, size 0x3c, virtual false, abstract: false, final false
inline float_t GetSignedSpeedX() ;

/// @brief Method GetSignedSpeedY, addr 0x565b204, size 0x3c, virtual false, abstract: false, final false
inline float_t GetSignedSpeedY() ;

/// @brief Method GetSignedSpeedZ, addr 0x565b240, size 0x3c, virtual false, abstract: false, final false
inline float_t GetSignedSpeedZ() ;

/// @brief Method GetVelocityInAxisSpace, addr 0x565b27c, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVelocityInAxisSpace() ;

/// @brief Method GetWorldVelocity, addr 0x565b060, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldVelocity() ;

static inline ::GlobalNamespace::SimpleSpeedTracker* New_ctor() ;

/// @brief Method OnDisable, addr 0x565aa54, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x565a954, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResolveAxisForward, addr 0x565af34, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveAxisForward() ;

/// @brief Method ResolveAxisRight, addr 0x565ad34, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveAxisRight() ;

/// @brief Method ResolveAxisUp, addr 0x565ae34, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveAxisUp() ;

/// @brief Method SliceUpdate, addr 0x565aa60, size 0x2d4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_debugCurrentSpeed() const;

constexpr float_t& __cordl_internal_get_debugCurrentSpeed() ;

constexpr float_t const& __cordl_internal_get_eventThreshold() const;

constexpr float_t& __cordl_internal_get_eventThreshold() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPos() ;

constexpr float_t const& __cordl_internal_get_lastRawSpeed() const;

constexpr float_t& __cordl_internal_get_lastRawSpeed() ;

constexpr float_t const& __cordl_internal_get_lastSliceTime() const;

constexpr float_t& __cordl_internal_get_lastSliceTime() ;

constexpr float_t const& __cordl_internal_get_lastSpeed() const;

constexpr float_t& __cordl_internal_get_lastSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastVelocity() ;

constexpr float_t const& __cordl_internal_get_negativeThreshold() const;

constexpr float_t& __cordl_internal_get_negativeThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onAboveNegativeThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onAboveNegativeThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onAbovePositiveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onAbovePositiveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onBelowNegativeThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onBelowNegativeThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onBelowPositiveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onBelowPositiveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSpeedAboveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSpeedAboveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSpeedBelowThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSpeedBelowThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onSpeedUpdated() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onSpeedUpdated() ;

constexpr float_t const& __cordl_internal_get_positiveThreshold() const;

constexpr float_t& __cordl_internal_get_positiveThreshold() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_postprocessCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_postprocessCurve() ;

constexpr float_t const& __cordl_internal_get_responsiveness() const;

constexpr float_t& __cordl_internal_get_responsiveness() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::SimpleSpeedTracker_AxisFilter const& __cordl_internal_get_trackAxis() const;

constexpr ::GlobalNamespace::SimpleSpeedTracker_AxisFilter& __cordl_internal_get_trackAxis() ;

constexpr bool const& __cordl_internal_get_useRawSpeed() const;

constexpr bool& __cordl_internal_get_useRawSpeed() ;

constexpr bool const& __cordl_internal_get_useWorldAxes() const;

constexpr bool& __cordl_internal_get_useWorldAxes() ;

constexpr bool const& __cordl_internal_get_wasAboveThreshold() const;

constexpr bool& __cordl_internal_get_wasAboveThreshold() ;

constexpr bool const& __cordl_internal_get_wasMovingNegative() const;

constexpr bool& __cordl_internal_get_wasMovingNegative() ;

constexpr bool const& __cordl_internal_get_wasMovingPositive() const;

constexpr bool& __cordl_internal_get_wasMovingPositive() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_worldSpace() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_worldSpace() ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_debugCurrentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_eventThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRawSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lastSliceTime(float_t  value) ;

constexpr void __cordl_internal_set_lastSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lastVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_negativeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_onAboveNegativeThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onAbovePositiveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onBelowNegativeThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onBelowPositiveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onSpeedAboveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onSpeedBelowThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onSpeedUpdated(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_positiveThreshold(float_t  value) ;

constexpr void __cordl_internal_set_postprocessCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_responsiveness(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_trackAxis(::GlobalNamespace::SimpleSpeedTracker_AxisFilter  value) ;

constexpr void __cordl_internal_set_useRawSpeed(bool  value) ;

constexpr void __cordl_internal_set_useWorldAxes(bool  value) ;

constexpr void __cordl_internal_set_wasAboveThreshold(bool  value) ;

constexpr void __cordl_internal_set_wasMovingNegative(bool  value) ;

constexpr void __cordl_internal_set_wasMovingPositive(bool  value) ;

constexpr void __cordl_internal_set_worldSpace(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x565b314, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasAxisFilter, addr 0x565a944, size 0x10, virtual false, abstract: false, final false
inline bool get_HasAxisFilter() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleSpeedTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleSpeedTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleSpeedTracker(SimpleSpeedTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleSpeedTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleSpeedTracker(SimpleSpeedTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{763};

/// [Header("Settings")]
/// [Tooltip("Transform whose movement speed is tracked. If left empty, uses this object\u{2019}s transform.")]
/// [SerializeField]
/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Tooltip("If enabled, speed and direction calculations use world (global) space, otherwise local space.\nUse Local Space when you want speed relative to the object\u{2019}s facing direction (e.g., how fast a sword swings forward)")]
/// [SerializeField]
/// @brief Field useWorldAxes, offset: 0x28, size: 0x1, def value: None
 bool  ___useWorldAxes;

/// [Tooltip("Optional transform defining a custom world reference.\nIf set, that transform\u{2019}s Right/Up/Forward axes are treated as world axes.\nIf left empty, Unity\u{2019}s global world axes are used.")]
/// [SerializeField]
/// @brief Field worldSpace, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___worldSpace;

/// [Tooltip("If true, uses raw instantaneous speed without smoothing.\nIf false, smooths speed using the Responsiveness setting below.")]
/// [SerializeField]
/// @brief Field useRawSpeed, offset: 0x38, size: 0x1, def value: None
 bool  ___useRawSpeed;

/// [SerializeField]
/// @brief Field responsiveness, offset: 0x3c, size: 0x4, def value: None
 float_t  ___responsiveness;

/// [SerializeField]
/// @brief Field postprocessCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___postprocessCurve;

/// [Header("Axis Filter")]
/// [Tooltip("Optionally restrict speed tracking to a single axis.\nWhen set, speed is signed: positive = moving along the axis, negative = moving against it.\nAxes are resolved using the Space settings above (Local vs World).")]
/// [SerializeField]
/// @brief Field trackAxis, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::SimpleSpeedTracker_AxisFilter  ___trackAxis;

/// [Header("Property Output")]
/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x50, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [Header("Events")]
/// [Tooltip("Speed threshold used to trigger the Above/Below events.\nWhen an axis filter is set, this compares against absolute speed on that axis.")]
/// [SerializeField]
/// @brief Field eventThreshold, offset: 0x58, size: 0x4, def value: None
 float_t  ___eventThreshold;

/// @brief Field onSpeedUpdated, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onSpeedUpdated;

/// @brief Field onSpeedAboveThreshold, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSpeedAboveThreshold;

/// @brief Field onSpeedBelowThreshold, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSpeedBelowThreshold;

/// [Tooltip("Signed speed along the positive axis direction required to fire onAbovePositiveThreshold / onBelowPositiveThreshold.")]
/// [SerializeField]
/// @brief Field positiveThreshold, offset: 0x78, size: 0x4, def value: None
 float_t  ___positiveThreshold;

/// @brief Field onAbovePositiveThreshold, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAbovePositiveThreshold;

/// @brief Field onBelowPositiveThreshold, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onBelowPositiveThreshold;

/// [Tooltip("Signed speed threshold for the negative axis direction. Enter as a negative number.\nFires onAboveNegativeThreshold / onBelowNegativeThreshold when signed speed crosses this value.")]
/// [SerializeField]
/// @brief Field negativeThreshold, offset: 0x90, size: 0x4, def value: None
 float_t  ___negativeThreshold;

/// @brief Field onAboveNegativeThreshold, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAboveNegativeThreshold;

/// @brief Field onBelowNegativeThreshold, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onBelowNegativeThreshold;

/// [Header("Debug")]
/// [Tooltip("Current displayed speed value (raw or smoothed). Signed when Axis Filter is set.")]
/// @brief Field debugCurrentSpeed, offset: 0xa8, size: 0x4, def value: None
 float_t  ___debugCurrentSpeed;

/// @brief Field lastSpeed, offset: 0xac, size: 0x4, def value: None
 float_t  ___lastSpeed;

/// @brief Field lastRawSpeed, offset: 0xb0, size: 0x4, def value: None
 float_t  ___lastRawSpeed;

/// @brief Field lastVelocity, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastVelocity;

/// @brief Field lastPos, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPos;

/// @brief Field lastSliceTime, offset: 0xcc, size: 0x4, def value: None
 float_t  ___lastSliceTime;

/// @brief Field wasAboveThreshold, offset: 0xd0, size: 0x1, def value: None
 bool  ___wasAboveThreshold;

/// @brief Field wasMovingPositive, offset: 0xd1, size: 0x1, def value: None
 bool  ___wasMovingPositive;

/// @brief Field wasMovingNegative, offset: 0xd2, size: 0x1, def value: None
 bool  ___wasMovingNegative;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___useWorldAxes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___worldSpace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___useRawSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___responsiveness) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___postprocessCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___trackAxis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___continuousProperties) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___eventThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onSpeedUpdated) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onSpeedAboveThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onSpeedBelowThreshold) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___positiveThreshold) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onAbovePositiveThreshold) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onBelowPositiveThreshold) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___negativeThreshold) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onAboveNegativeThreshold) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___onBelowNegativeThreshold) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___debugCurrentSpeed) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___lastSpeed) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___lastRawSpeed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___lastVelocity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___lastPos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___lastSliceTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___wasAboveThreshold) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___wasMovingPositive) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleSpeedTracker, ___wasMovingNegative) == 0xd2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleSpeedTracker) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
