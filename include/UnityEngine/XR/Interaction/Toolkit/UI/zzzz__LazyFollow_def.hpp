#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_PositionFollowMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__LazyFollow_RotationFollowMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LazyFollow)
namespace GlobalNamespace {
struct LazyFollow_PositionFollowMode;
}
namespace GlobalNamespace {
struct LazyFollow_RotationFollowMode;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class LazyFollow;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow*, "UnityEngine.XR.Interaction.Toolkit.UI", "LazyFollow");
// [AddComponentMenu("XR/Lazy Follow", 22)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow::PositionFollowMode, UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow::RotationFollowMode
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow
class CORDL_TYPE LazyFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PositionFollowMode = ::GlobalNamespace::LazyFollow_PositionFollowMode;

using RotationFollowMode = ::GlobalNamespace::LazyFollow_RotationFollowMode;

 __declspec(property(get=get_applyTargetInLocalSpace, put=set_applyTargetInLocalSpace)) bool  applyTargetInLocalSpace;

 __declspec(property(get=get_followInLocalSpace, put=set_followInLocalSpace)) bool  followInLocalSpace;

/// @brief Field m_ApplyTargetInLocalSpace, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ApplyTargetInLocalSpace, put=__cordl_internal_set_m_ApplyTargetInLocalSpace)) bool  m_ApplyTargetInLocalSpace;

/// @brief Field m_BindingsGroup, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_FollowInLocalSpace, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FollowInLocalSpace, put=__cordl_internal_set_m_FollowInLocalSpace)) bool  m_FollowInLocalSpace;

/// @brief Field m_LowerMovementSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LowerMovementSpeed, put=__cordl_internal_set_m_LowerMovementSpeed)) float_t  m_LowerMovementSpeed;

/// @brief Field m_MaxAngleAllowed, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxAngleAllowed, put=__cordl_internal_set_m_MaxAngleAllowed)) float_t  m_MaxAngleAllowed;

/// @brief Field m_MaxDistanceAllowed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDistanceAllowed, put=__cordl_internal_set_m_MaxDistanceAllowed)) float_t  m_MaxDistanceAllowed;

/// @brief Field m_MinAngleAllowed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinAngleAllowed, put=__cordl_internal_set_m_MinAngleAllowed)) float_t  m_MinAngleAllowed;

/// @brief Field m_MinDistanceAllowed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinDistanceAllowed, put=__cordl_internal_set_m_MinDistanceAllowed)) float_t  m_MinDistanceAllowed;

/// @brief Field m_MovementSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MovementSpeed, put=__cordl_internal_set_m_MovementSpeed)) float_t  m_MovementSpeed;

/// @brief Field m_MovementSpeedVariancePercentage, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MovementSpeedVariancePercentage, put=__cordl_internal_set_m_MovementSpeedVariancePercentage)) float_t  m_MovementSpeedVariancePercentage;

/// @brief Field m_PositionFollowMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionFollowMode, put=__cordl_internal_set_m_PositionFollowMode)) ::GlobalNamespace::LazyFollow_PositionFollowMode  m_PositionFollowMode;

/// @brief Field m_QuaternionTweenableVariable, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_QuaternionTweenableVariable, put=__cordl_internal_set_m_QuaternionTweenableVariable)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*  m_QuaternionTweenableVariable;

/// @brief Field m_RotationFollowMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotationFollowMode, put=__cordl_internal_set_m_RotationFollowMode)) ::GlobalNamespace::LazyFollow_RotationFollowMode  m_RotationFollowMode;

/// @brief Field m_SnapOnEnable, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapOnEnable, put=__cordl_internal_set_m_SnapOnEnable)) bool  m_SnapOnEnable;

/// @brief Field m_Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Transform>  m_Target;

/// @brief Field m_TargetOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetOffset, put=__cordl_internal_set_m_TargetOffset)) ::UnityEngine::Vector3  m_TargetOffset;

/// @brief Field m_TimeUntilThresholdReachesMaxAngle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle, put=__cordl_internal_set_m_TimeUntilThresholdReachesMaxAngle)) float_t  m_TimeUntilThresholdReachesMaxAngle;

/// @brief Field m_TimeUntilThresholdReachesMaxDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance, put=__cordl_internal_set_m_TimeUntilThresholdReachesMaxDistance)) float_t  m_TimeUntilThresholdReachesMaxDistance;

/// @brief Field m_UpperMovementSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpperMovementSpeed, put=__cordl_internal_set_m_UpperMovementSpeed)) float_t  m_UpperMovementSpeed;

/// @brief Field m_Vector3TweenableVariable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Vector3TweenableVariable, put=__cordl_internal_set_m_Vector3TweenableVariable)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  m_Vector3TweenableVariable;

 __declspec(property(get=get_maxAngleAllowed, put=set_maxAngleAllowed)) float_t  maxAngleAllowed;

 __declspec(property(get=get_maxDistanceAllowed, put=set_maxDistanceAllowed)) float_t  maxDistanceAllowed;

 __declspec(property(get=get_minAngleAllowed, put=set_minAngleAllowed)) float_t  minAngleAllowed;

 __declspec(property(get=get_minDistanceAllowed, put=set_minDistanceAllowed)) float_t  minDistanceAllowed;

 __declspec(property(get=get_movementSpeed, put=set_movementSpeed)) float_t  movementSpeed;

 __declspec(property(get=get_movementSpeedVariancePercentage, put=set_movementSpeedVariancePercentage)) float_t  movementSpeedVariancePercentage;

 __declspec(property(get=get_positionFollowMode, put=set_positionFollowMode)) ::GlobalNamespace::LazyFollow_PositionFollowMode  positionFollowMode;

 __declspec(property(get=get_rotationFollowMode, put=set_rotationFollowMode)) ::GlobalNamespace::LazyFollow_RotationFollowMode  rotationFollowMode;

 __declspec(property(get=get_snapOnEnable, put=set_snapOnEnable)) bool  snapOnEnable;

 __declspec(property(get=get_target, put=set_target)) ::UnityW<::UnityEngine::Transform>  target;

 __declspec(property(get=get_targetOffset, put=set_targetOffset)) ::UnityEngine::Vector3  targetOffset;

 __declspec(property(get=get_timeUntilThresholdReachesMaxAngle, put=set_timeUntilThresholdReachesMaxAngle)) float_t  timeUntilThresholdReachesMaxAngle;

 __declspec(property(get=get_timeUntilThresholdReachesMaxDistance, put=set_timeUntilThresholdReachesMaxDistance)) float_t  timeUntilThresholdReachesMaxDistance;

/// @brief Method Awake, addr 0xb430e68, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0xb431348, size 0x1d0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4312f0, size 0x58, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4312d8, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb430f64, size 0x374, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb430df0, size 0x78, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method TryGetThresholdTargetPosition, addr 0xb431620, size 0x1cc, virtual true, abstract: false, final false
inline bool TryGetThresholdTargetPosition(::by_ref<::UnityEngine::Vector3>  newTarget) ;

/// @brief Method TryGetThresholdTargetRotation, addr 0xb4317ec, size 0x44c, virtual true, abstract: false, final false
inline bool TryGetThresholdTargetRotation(::by_ref<::UnityEngine::Quaternion>  newTarget) ;

/// @brief Method UpdatePosition, addr 0xb431518, size 0x88, virtual false, abstract: false, final false
inline void UpdatePosition(::Unity::Mathematics::float3  position) ;

/// @brief Method UpdateRotation, addr 0xb4315a0, size 0x80, virtual false, abstract: false, final false
inline void UpdateRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method UpdateUpperAndLowerSpeedBounds, addr 0xb430c8c, size 0x30, virtual false, abstract: false, final false
inline void UpdateUpperAndLowerSpeedBounds() ;

/// @brief Method ValidateFollowMode, addr 0xb430b54, size 0xec, virtual false, abstract: false, final false
inline void ValidateFollowMode() ;

constexpr bool const& __cordl_internal_get_m_ApplyTargetInLocalSpace() const;

constexpr bool& __cordl_internal_get_m_ApplyTargetInLocalSpace() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr bool const& __cordl_internal_get_m_FollowInLocalSpace() const;

constexpr bool& __cordl_internal_get_m_FollowInLocalSpace() ;

constexpr float_t const& __cordl_internal_get_m_LowerMovementSpeed() const;

constexpr float_t& __cordl_internal_get_m_LowerMovementSpeed() ;

constexpr float_t const& __cordl_internal_get_m_MaxAngleAllowed() const;

constexpr float_t& __cordl_internal_get_m_MaxAngleAllowed() ;

constexpr float_t const& __cordl_internal_get_m_MaxDistanceAllowed() const;

constexpr float_t& __cordl_internal_get_m_MaxDistanceAllowed() ;

constexpr float_t const& __cordl_internal_get_m_MinAngleAllowed() const;

constexpr float_t& __cordl_internal_get_m_MinAngleAllowed() ;

constexpr float_t const& __cordl_internal_get_m_MinDistanceAllowed() const;

constexpr float_t& __cordl_internal_get_m_MinDistanceAllowed() ;

constexpr float_t const& __cordl_internal_get_m_MovementSpeed() const;

constexpr float_t& __cordl_internal_get_m_MovementSpeed() ;

constexpr float_t const& __cordl_internal_get_m_MovementSpeedVariancePercentage() const;

constexpr float_t& __cordl_internal_get_m_MovementSpeedVariancePercentage() ;

constexpr ::GlobalNamespace::LazyFollow_PositionFollowMode const& __cordl_internal_get_m_PositionFollowMode() const;

constexpr ::GlobalNamespace::LazyFollow_PositionFollowMode& __cordl_internal_get_m_PositionFollowMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable* const& __cordl_internal_get_m_QuaternionTweenableVariable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*& __cordl_internal_get_m_QuaternionTweenableVariable() ;

constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode const& __cordl_internal_get_m_RotationFollowMode() const;

constexpr ::GlobalNamespace::LazyFollow_RotationFollowMode& __cordl_internal_get_m_RotationFollowMode() ;

constexpr bool const& __cordl_internal_get_m_SnapOnEnable() const;

constexpr bool& __cordl_internal_get_m_SnapOnEnable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetOffset() ;

constexpr float_t const& __cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle() const;

constexpr float_t& __cordl_internal_get_m_TimeUntilThresholdReachesMaxAngle() ;

constexpr float_t const& __cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance() const;

constexpr float_t& __cordl_internal_get_m_TimeUntilThresholdReachesMaxDistance() ;

constexpr float_t const& __cordl_internal_get_m_UpperMovementSpeed() const;

constexpr float_t& __cordl_internal_get_m_UpperMovementSpeed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable* const& __cordl_internal_get_m_Vector3TweenableVariable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*& __cordl_internal_get_m_Vector3TweenableVariable() ;

constexpr void __cordl_internal_set_m_ApplyTargetInLocalSpace(bool  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_FollowInLocalSpace(bool  value) ;

constexpr void __cordl_internal_set_m_LowerMovementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxAngleAllowed(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDistanceAllowed(float_t  value) ;

constexpr void __cordl_internal_set_m_MinAngleAllowed(float_t  value) ;

constexpr void __cordl_internal_set_m_MinDistanceAllowed(float_t  value) ;

constexpr void __cordl_internal_set_m_MovementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_MovementSpeedVariancePercentage(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionFollowMode(::GlobalNamespace::LazyFollow_PositionFollowMode  value) ;

constexpr void __cordl_internal_set_m_QuaternionTweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*  value) ;

constexpr void __cordl_internal_set_m_RotationFollowMode(::GlobalNamespace::LazyFollow_RotationFollowMode  value) ;

constexpr void __cordl_internal_set_m_SnapOnEnable(bool  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_TargetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TimeUntilThresholdReachesMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_TimeUntilThresholdReachesMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_UpperMovementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_Vector3TweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  value) ;

/// @brief Method .ctor, addr 0xb431c38, size 0x5e4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_applyTargetInLocalSpace, addr 0xb430c40, size 0x8, virtual false, abstract: false, final false
inline bool get_applyTargetInLocalSpace() ;

/// @brief Method get_followInLocalSpace, addr 0xb430b44, size 0x8, virtual false, abstract: false, final false
inline bool get_followInLocalSpace() ;

/// @brief Method get_maxAngleAllowed, addr 0xb430db8, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxAngleAllowed() ;

/// @brief Method get_maxDistanceAllowed, addr 0xb430d4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxDistanceAllowed() ;

/// @brief Method get_minAngleAllowed, addr 0xb430d9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_minAngleAllowed() ;

/// @brief Method get_minDistanceAllowed, addr 0xb430d30, size 0x8, virtual false, abstract: false, final false
inline float_t get_minDistanceAllowed() ;

/// @brief Method get_movementSpeed, addr 0xb430c50, size 0x8, virtual false, abstract: false, final false
inline float_t get_movementSpeed() ;

/// @brief Method get_movementSpeedVariancePercentage, addr 0xb430cbc, size 0x8, virtual false, abstract: false, final false
inline float_t get_movementSpeedVariancePercentage() ;

/// @brief Method get_positionFollowMode, addr 0xb430d20, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LazyFollow_PositionFollowMode get_positionFollowMode() ;

/// @brief Method get_rotationFollowMode, addr 0xb430d8c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LazyFollow_RotationFollowMode get_rotationFollowMode() ;

/// @brief Method get_snapOnEnable, addr 0xb430d10, size 0x8, virtual false, abstract: false, final false
inline bool get_snapOnEnable() ;

/// @brief Method get_target, addr 0xb430b1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_target() ;

/// @brief Method get_targetOffset, addr 0xb430b2c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetOffset() ;

/// @brief Method get_timeUntilThresholdReachesMaxAngle, addr 0xb430dd4, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeUntilThresholdReachesMaxAngle() ;

/// @brief Method get_timeUntilThresholdReachesMaxDistance, addr 0xb430d70, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeUntilThresholdReachesMaxDistance() ;

/// @brief Method set_applyTargetInLocalSpace, addr 0xb430c48, size 0x8, virtual false, abstract: false, final false
inline void set_applyTargetInLocalSpace(bool  value) ;

/// @brief Method set_followInLocalSpace, addr 0xb430b4c, size 0x8, virtual false, abstract: false, final false
inline void set_followInLocalSpace(bool  value) ;

/// @brief Method set_maxAngleAllowed, addr 0xb430dc0, size 0x14, virtual false, abstract: false, final false
inline void set_maxAngleAllowed(float_t  value) ;

/// @brief Method set_maxDistanceAllowed, addr 0xb430d54, size 0x1c, virtual false, abstract: false, final false
inline void set_maxDistanceAllowed(float_t  value) ;

/// @brief Method set_minAngleAllowed, addr 0xb430da4, size 0x14, virtual false, abstract: false, final false
inline void set_minAngleAllowed(float_t  value) ;

/// @brief Method set_minDistanceAllowed, addr 0xb430d38, size 0x14, virtual false, abstract: false, final false
inline void set_minDistanceAllowed(float_t  value) ;

/// @brief Method set_movementSpeed, addr 0xb430c58, size 0x34, virtual false, abstract: false, final false
inline void set_movementSpeed(float_t  value) ;

/// @brief Method set_movementSpeedVariancePercentage, addr 0xb430cc4, size 0x4c, virtual false, abstract: false, final false
inline void set_movementSpeedVariancePercentage(float_t  value) ;

/// @brief Method set_positionFollowMode, addr 0xb430d28, size 0x8, virtual false, abstract: false, final false
inline void set_positionFollowMode(::GlobalNamespace::LazyFollow_PositionFollowMode  value) ;

/// @brief Method set_rotationFollowMode, addr 0xb430d94, size 0x8, virtual false, abstract: false, final false
inline void set_rotationFollowMode(::GlobalNamespace::LazyFollow_RotationFollowMode  value) ;

/// @brief Method set_snapOnEnable, addr 0xb430d18, size 0x8, virtual false, abstract: false, final false
inline void set_snapOnEnable(bool  value) ;

/// @brief Method set_target, addr 0xb430b24, size 0x8, virtual false, abstract: false, final false
inline void set_target(::UnityEngine::Transform*  value) ;

/// @brief Method set_targetOffset, addr 0xb430b38, size 0xc, virtual false, abstract: false, final false
inline void set_targetOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_timeUntilThresholdReachesMaxAngle, addr 0xb430ddc, size 0x14, virtual false, abstract: false, final false
inline void set_timeUntilThresholdReachesMaxAngle(float_t  value) ;

/// @brief Method set_timeUntilThresholdReachesMaxDistance, addr 0xb430d78, size 0x14, virtual false, abstract: false, final false
inline void set_timeUntilThresholdReachesMaxDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LazyFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LazyFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyFollow(LazyFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyFollow(LazyFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11281};

/// @brief Field k_LowerSpeedVariance offset 0xffffffff size 0x4
static constexpr float_t  k_LowerSpeedVariance{static_cast<float_t>(0.0f)};

/// @brief Field k_UpperSpeedVariance offset 0xffffffff size 0x4
static constexpr float_t  k_UpperSpeedVariance{static_cast<float_t>(0.999f)};

/// [Header("Target Config")]
/// [SerializeField]
/// [Tooltip("(Optional) The object being followed. If not set, this will default to the main camera when this component is enabled.")]
/// @brief Field m_Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Target;

/// [SerializeField]
/// [Tooltip("The amount to offset the target\'s position when following. This position is relative/local to the target object.")]
/// @brief Field m_TargetOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetOffset;

/// [Space]
/// [SerializeField]
/// [Tooltip("If true, read the local transform of the target to lazy follow, otherwise read the world transform. If using look at rotation follow modes, only world-space follow is supported.")]
/// @brief Field m_FollowInLocalSpace, offset: 0x34, size: 0x1, def value: None
 bool  ___m_FollowInLocalSpace;

/// [SerializeField]
/// [Tooltip("If true, apply the target offset in local space. If false, apply the target offset in world space.")]
/// @brief Field m_ApplyTargetInLocalSpace, offset: 0x35, size: 0x1, def value: None
 bool  ___m_ApplyTargetInLocalSpace;

/// [Header("General Follow Params")]
/// [SerializeField]
/// [Tooltip("Movement speed used when smoothing to new target. Lower values mean the lazy follow lags further behind the target.")]
/// @brief Field m_MovementSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_MovementSpeed;

/// [SerializeField]
/// [Range(0, 0.999)]
/// [Tooltip("Adjust movement speed based on distance from the target using a tolerance percentage. 0% for constant speed.")]
/// @brief Field m_MovementSpeedVariancePercentage, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_MovementSpeedVariancePercentage;

/// [SerializeField]
/// [Tooltip("Snap to target position when this component is enabled.")]
/// @brief Field m_SnapOnEnable, offset: 0x40, size: 0x1, def value: None
 bool  ___m_SnapOnEnable;

/// [Header("Position Follow Params")]
/// [SerializeField]
/// [Tooltip("Determines the follow mode used to determine a new rotation. Look At is best used with the target being the main camera.")]
/// @brief Field m_PositionFollowMode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::LazyFollow_PositionFollowMode  ___m_PositionFollowMode;

/// [SerializeField]
/// [Tooltip("Minimum distance from target before which a follow lazy follow starts.")]
/// @brief Field m_MinDistanceAllowed, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_MinDistanceAllowed;

/// [SerializeField]
/// [Tooltip("Maximum distance from target before lazy follow targets, when time threshold is reached.")]
/// @brief Field m_MaxDistanceAllowed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_MaxDistanceAllowed;

/// [SerializeField]
/// [Tooltip("Time required to elapse (in seconds) before the max distance allowed goes from the min distance to the max.")]
/// @brief Field m_TimeUntilThresholdReachesMaxDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_TimeUntilThresholdReachesMaxDistance;

/// [Header("Rotation Follow Params")]
/// [SerializeField]
/// [Tooltip("Determines the follow mode used to determine a new rotation. Look At is best used with the target being the main camera.")]
/// @brief Field m_RotationFollowMode, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::LazyFollow_RotationFollowMode  ___m_RotationFollowMode;

/// [SerializeField]
/// [Tooltip("Minimum angle offset (in degrees) from target before which lazy follow starts.")]
/// @brief Field m_MinAngleAllowed, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_MinAngleAllowed;

/// [SerializeField]
/// [Tooltip("Maximum angle offset (in degrees) from target before lazy follow targets, when time threshold is reached.")]
/// @brief Field m_MaxAngleAllowed, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_MaxAngleAllowed;

/// [SerializeField]
/// [Tooltip("Time required to elapse (in seconds) before the max angle offset allowed goes from the min angle offset to the max.")]
/// @brief Field m_TimeUntilThresholdReachesMaxAngle, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_TimeUntilThresholdReachesMaxAngle;

/// @brief Field m_LowerMovementSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_LowerMovementSpeed;

/// @brief Field m_UpperMovementSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_UpperMovementSpeed;

/// @brief Field m_BindingsGroup, offset: 0x70, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

/// @brief Field m_Vector3TweenableVariable, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  ___m_Vector3TweenableVariable;

/// @brief Field m_QuaternionTweenableVariable, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*  ___m_QuaternionTweenableVariable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TargetOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_FollowInLocalSpace) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_ApplyTargetInLocalSpace) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MovementSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MovementSpeedVariancePercentage) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_SnapOnEnable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_PositionFollowMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MinDistanceAllowed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MaxDistanceAllowed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TimeUntilThresholdReachesMaxDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_RotationFollowMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MinAngleAllowed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_MaxAngleAllowed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_TimeUntilThresholdReachesMaxAngle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_LowerMovementSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_UpperMovementSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_BindingsGroup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_Vector3TweenableVariable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow, ___m_QuaternionTweenableVariable) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::LazyFollow) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
