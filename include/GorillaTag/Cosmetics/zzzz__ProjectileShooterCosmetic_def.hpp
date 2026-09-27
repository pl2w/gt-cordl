#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ProjectileShooterCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootActivator_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ProjectileShooterCosmetic_ShootDirection_def.hpp"
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectileShooterCosmetic)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct ProjectileShooterCosmetic_ShootActivator;
}
namespace GlobalNamespace {
struct ProjectileShooterCosmetic_ShootDirection;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
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
class GameObject;
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
namespace GorillaTag::Cosmetics {
class ProjectileShooterCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ProjectileShooterCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ProjectileShooterCosmetic*, "GorillaTag.Cosmetics", "ProjectileShooterCosmetic");
// Dependencies GorillaTag.Cosmetics.ProjectileShooterCosmetic::ShootActivator, GorillaTag.Cosmetics.ProjectileShooterCosmetic::ShootDirection, GorillaTag.HashWrapper, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ProjectileShooterCosmetic
class CORDL_TYPE ProjectileShooterCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ShootActivator = ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator;

using ShootDirection = ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection;

 __declspec(property(get=get_IsCoolingDown)) bool  IsCoolingDown;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <shootingAllowed>k__BackingField, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__shootingAllowed_k__BackingField, put=__cordl_internal_set__shootingAllowed_k__BackingField)) bool  _shootingAllowed_k__BackingField;

/// @brief Field allowCharging, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowCharging, put=__cordl_internal_set_allowCharging)) bool  allowCharging;

/// @brief Field chargeDecaySpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeDecaySpeed, put=__cordl_internal_set_chargeDecaySpeed)) float_t  chargeDecaySpeed;

/// @brief Field chargeHapticsIntensity, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeHapticsIntensity, put=__cordl_internal_set_chargeHapticsIntensity)) float_t  chargeHapticsIntensity;

/// @brief Field chargeRateCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeRateCurve, put=__cordl_internal_set_chargeRateCurve)) ::UnityEngine::AnimationCurve*  chargeRateCurve;

/// @brief Field chargeTime, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeTime, put=__cordl_internal_set_chargeTime)) float_t  chargeTime;

/// @brief Field chargeToShotSpeedCurve, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeToShotSpeedCurve, put=__cordl_internal_set_chargeToShotSpeedCurve)) ::UnityEngine::AnimationCurve*  chargeToShotSpeedCurve;

/// @brief Field continuousChargingProperties, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousChargingProperties, put=__cordl_internal_set_continuousChargingProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousChargingProperties;

/// @brief Field cooldownRemaining, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownRemaining, put=__cordl_internal_set_cooldownRemaining)) float_t  cooldownRemaining;

/// @brief Field cooldownSeconds, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownSeconds, put=__cordl_internal_set_cooldownSeconds)) float_t  cooldownSeconds;

/// @brief Field currentStep, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStep, put=__cordl_internal_set_currentStep)) int32_t  currentStep;

/// @brief Field debugShootDirection, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugShootDirection, put=__cordl_internal_set_debugShootDirection)) ::UnityW<::UnityEngine::Transform>  debugShootDirection;

/// @brief Field drawShootVector, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawShootVector, put=__cordl_internal_set_drawShootVector)) bool  drawShootVector;

/// @brief Field enableHaptics, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableHaptics, put=__cordl_internal_set_enableHaptics)) bool  enableHaptics;

/// @brief Field hapticsBothHands, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_hapticsBothHands, put=__cordl_internal_set_hapticsBothHands)) bool  hapticsBothHands;

/// @brief Field isLocal, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field isPressed, offset 0x109, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPressed, put=__cordl_internal_set_isPressed)) bool  isPressed;

/// @brief Field lastStep, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStep, put=__cordl_internal_set_lastStep)) int32_t  lastStep;

/// @brief Field logVelocityEstimatorSpeed, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVelocityEstimatorSpeed, put=__cordl_internal_set_logVelocityEstimatorSpeed)) bool  logVelocityEstimatorSpeed;

/// @brief Field maxChargeHapticsIntensity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargeHapticsIntensity, put=__cordl_internal_set_maxChargeHapticsIntensity)) float_t  maxChargeHapticsIntensity;

/// @brief Field maxChargeSeconds, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargeSeconds, put=__cordl_internal_set_maxChargeSeconds)) float_t  maxChargeSeconds;

/// @brief Field numberOfProgressSteps, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_numberOfProgressSteps, put=__cordl_internal_set_numberOfProgressSteps)) int32_t  numberOfProgressSteps;

/// @brief Field offsetRigPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetRigPosition, put=__cordl_internal_set_offsetRigPosition)) ::UnityEngine::Vector3  offsetRigPosition;

/// @brief Field onChargeCancelled, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChargeCancelled, put=__cordl_internal_set_onChargeCancelled)) ::UnityEngine::Events::UnityEvent*  onChargeCancelled;

/// @brief Field onCooldownFinished, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCooldownFinished, put=__cordl_internal_set_onCooldownFinished)) ::UnityEngine::Events::UnityEvent*  onCooldownFinished;

/// @brief Field onMaxCharge, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaxCharge, put=__cordl_internal_set_onMaxCharge)) ::UnityEngine::Events::UnityEvent*  onMaxCharge;

/// @brief Field onMovedToNextStep, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMovedToNextStep, put=__cordl_internal_set_onMovedToNextStep)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onMovedToNextStep;

/// @brief Field onReachedLastProgressStep, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReachedLastProgressStep, put=__cordl_internal_set_onReachedLastProgressStep)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onReachedLastProgressStep;

/// @brief Field onShoot, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onShoot, put=__cordl_internal_set_onShoot)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onShoot;

/// @brief Field onShootLocal, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onShootLocal, put=__cordl_internal_set_onShootLocal)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onShootLocal;

/// @brief Field projectilePrefab, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::GorillaTag::HashWrapper  projectilePrefab;

/// @brief Field projectileTrailPrefab, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileTrailPrefab, put=__cordl_internal_set_projectileTrailPrefab)) ::GorillaTag::HashWrapper  projectileTrailPrefab;

/// @brief Field rig, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field runChargeCancelledEventOnShoot, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_runChargeCancelledEventOnShoot, put=__cordl_internal_set_runChargeCancelledEventOnShoot)) bool  runChargeCancelledEventOnShoot;

/// @brief Field shootActivatorType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootActivatorType, put=__cordl_internal_set_shootActivatorType)) ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator  shootActivatorType;

/// @brief Field shootDirectionType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootDirectionType, put=__cordl_internal_set_shootDirectionType)) ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection  shootDirectionType;

/// @brief Field shootFromTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootFromTransform, put=__cordl_internal_set_shootFromTransform)) ::UnityW<::UnityEngine::Transform>  shootFromTransform;

/// @brief Field shootHapticsDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootHapticsDuration, put=__cordl_internal_set_shootHapticsDuration)) float_t  shootHapticsDuration;

/// @brief Field shootHapticsIntensity, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootHapticsIntensity, put=__cordl_internal_set_shootHapticsIntensity)) float_t  shootHapticsIntensity;

/// @brief Field shootMaxSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootMaxSpeed, put=__cordl_internal_set_shootMaxSpeed)) float_t  shootMaxSpeed;

/// @brief Field shootMinSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootMinSpeed, put=__cordl_internal_set_shootMinSpeed)) float_t  shootMinSpeed;

 __declspec(property(get=get_shootingAllowed, put=set_shootingAllowed)) bool  shootingAllowed;

/// @brief Field snapToMaxChargeAt, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapToMaxChargeAt, put=__cordl_internal_set_snapToMaxChargeAt)) float_t  snapToMaxChargeAt;

/// @brief Field transferrableObject, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Field velocityEstimator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Field velocityEstimatorMinRigDotProduct, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorMinRigDotProduct, put=__cordl_internal_set_velocityEstimatorMinRigDotProduct)) float_t  velocityEstimatorMinRigDotProduct;

/// @brief Field velocityEstimatorStartGestureSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorStartGestureSpeed, put=__cordl_internal_set_velocityEstimatorStartGestureSpeed)) float_t  velocityEstimatorStartGestureSpeed;

/// @brief Field velocityEstimatorStopGestureSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorStopGestureSpeed, put=__cordl_internal_set_velocityEstimatorStopGestureSpeed)) float_t  velocityEstimatorStopGestureSpeed;

/// @brief Field velocityEstimatorThresholdMet, offset 0x10a, size 0x1 
 __declspec(property(get=__cordl_internal_get_velocityEstimatorThresholdMet, put=__cordl_internal_set_velocityEstimatorThresholdMet)) bool  velocityEstimatorThresholdMet;

/// @brief Field whileCharging, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileCharging, put=__cordl_internal_set_whileCharging)) ::UnityEngine::Events::UnityEvent_1<float_t>*  whileCharging;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AttachTrail, addr 0x5d9f32c, size 0x18c, virtual false, abstract: false, final false
inline void AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam) ;

/// @brief Method Awake, addr 0x5d9e42c, size 0x21c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetChargeFrac, addr 0x5d9eb84, size 0x4c, virtual false, abstract: false, final false
inline float_t GetChargeFrac() ;

/// @brief Method GetShootPositionAndRotation, addr 0x5d9ee40, size 0xc4, virtual false, abstract: false, final false
inline void GetShootPositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetVectorFromBodyToLaunchPosition, addr 0x5d9ed7c, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVectorFromBodyToLaunchPosition() ;

/// @brief Method IsMovementShoot, addr 0x5d9e3ec, size 0x10, virtual false, abstract: false, final false
inline bool IsMovementShoot() ;

/// @brief Method IsRigDirection, addr 0x5d9e3fc, size 0x10, virtual false, abstract: false, final false
inline bool IsRigDirection() ;

static inline ::GorillaTag::Cosmetics::ProjectileShooterCosmetic* New_ctor() ;

/// @brief Method OnButtonPressed, addr 0x5d9f4b8, size 0xb0, virtual false, abstract: false, final false
inline void OnButtonPressed() ;

/// @brief Method OnButtonReleased, addr 0x5d9f568, size 0xc0, virtual false, abstract: false, final false
inline void OnButtonReleased() ;

/// @brief Method ResetShoot, addr 0x5d9f628, size 0x7c, virtual false, abstract: false, final false
inline void ResetShoot() ;

/// @brief Method SetPressState, addr 0x5d9eb78, size 0xc, virtual false, abstract: false, final false
inline void SetPressState(bool  pressed) ;

/// @brief Method Shoot, addr 0x5d9ef04, size 0x428, virtual false, abstract: false, final false
inline void Shoot() ;

/// @brief Method Tick, addr 0x5d9e658, size 0x520, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryRunHaptics, addr 0x5d9ebd0, size 0x1ac, virtual false, abstract: false, final false
inline void TryRunHaptics(float_t  intensity, float_t  duration) ;

/// @brief Method TryShoot, addr 0x5d9ede8, size 0x58, virtual false, abstract: false, final false
inline bool TryShoot() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get__shootingAllowed_k__BackingField() const;

constexpr bool& __cordl_internal_get__shootingAllowed_k__BackingField() ;

constexpr bool const& __cordl_internal_get_allowCharging() const;

constexpr bool& __cordl_internal_get_allowCharging() ;

constexpr float_t const& __cordl_internal_get_chargeDecaySpeed() const;

constexpr float_t& __cordl_internal_get_chargeDecaySpeed() ;

constexpr float_t const& __cordl_internal_get_chargeHapticsIntensity() const;

constexpr float_t& __cordl_internal_get_chargeHapticsIntensity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_chargeRateCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_chargeRateCurve() ;

constexpr float_t const& __cordl_internal_get_chargeTime() const;

constexpr float_t& __cordl_internal_get_chargeTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_chargeToShotSpeedCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_chargeToShotSpeedCurve() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousChargingProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousChargingProperties() ;

constexpr float_t const& __cordl_internal_get_cooldownRemaining() const;

constexpr float_t& __cordl_internal_get_cooldownRemaining() ;

constexpr float_t const& __cordl_internal_get_cooldownSeconds() const;

constexpr float_t& __cordl_internal_get_cooldownSeconds() ;

constexpr int32_t const& __cordl_internal_get_currentStep() const;

constexpr int32_t& __cordl_internal_get_currentStep() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_debugShootDirection() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_debugShootDirection() ;

constexpr bool const& __cordl_internal_get_drawShootVector() const;

constexpr bool& __cordl_internal_get_drawShootVector() ;

constexpr bool const& __cordl_internal_get_enableHaptics() const;

constexpr bool& __cordl_internal_get_enableHaptics() ;

constexpr bool const& __cordl_internal_get_hapticsBothHands() const;

constexpr bool& __cordl_internal_get_hapticsBothHands() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr bool const& __cordl_internal_get_isPressed() const;

constexpr bool& __cordl_internal_get_isPressed() ;

constexpr int32_t const& __cordl_internal_get_lastStep() const;

constexpr int32_t& __cordl_internal_get_lastStep() ;

constexpr bool const& __cordl_internal_get_logVelocityEstimatorSpeed() const;

constexpr bool& __cordl_internal_get_logVelocityEstimatorSpeed() ;

constexpr float_t const& __cordl_internal_get_maxChargeHapticsIntensity() const;

constexpr float_t& __cordl_internal_get_maxChargeHapticsIntensity() ;

constexpr float_t const& __cordl_internal_get_maxChargeSeconds() const;

constexpr float_t& __cordl_internal_get_maxChargeSeconds() ;

constexpr int32_t const& __cordl_internal_get_numberOfProgressSteps() const;

constexpr int32_t& __cordl_internal_get_numberOfProgressSteps() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetRigPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetRigPosition() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onChargeCancelled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onChargeCancelled() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCooldownFinished() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCooldownFinished() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onMaxCharge() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onMaxCharge() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onMovedToNextStep() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onMovedToNextStep() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onReachedLastProgressStep() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onReachedLastProgressStep() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onShoot() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onShoot() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onShootLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onShootLocal() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_projectilePrefab() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_projectilePrefab() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_projectileTrailPrefab() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_projectileTrailPrefab() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr bool const& __cordl_internal_get_runChargeCancelledEventOnShoot() const;

constexpr bool& __cordl_internal_get_runChargeCancelledEventOnShoot() ;

constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator const& __cordl_internal_get_shootActivatorType() const;

constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator& __cordl_internal_get_shootActivatorType() ;

constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection const& __cordl_internal_get_shootDirectionType() const;

constexpr ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection& __cordl_internal_get_shootDirectionType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shootFromTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shootFromTransform() ;

constexpr float_t const& __cordl_internal_get_shootHapticsDuration() const;

constexpr float_t& __cordl_internal_get_shootHapticsDuration() ;

constexpr float_t const& __cordl_internal_get_shootHapticsIntensity() const;

constexpr float_t& __cordl_internal_get_shootHapticsIntensity() ;

constexpr float_t const& __cordl_internal_get_shootMaxSpeed() const;

constexpr float_t& __cordl_internal_get_shootMaxSpeed() ;

constexpr float_t const& __cordl_internal_get_shootMinSpeed() const;

constexpr float_t& __cordl_internal_get_shootMinSpeed() ;

constexpr float_t const& __cordl_internal_get_snapToMaxChargeAt() const;

constexpr float_t& __cordl_internal_get_snapToMaxChargeAt() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr float_t const& __cordl_internal_get_velocityEstimatorMinRigDotProduct() const;

constexpr float_t& __cordl_internal_get_velocityEstimatorMinRigDotProduct() ;

constexpr float_t const& __cordl_internal_get_velocityEstimatorStartGestureSpeed() const;

constexpr float_t& __cordl_internal_get_velocityEstimatorStartGestureSpeed() ;

constexpr float_t const& __cordl_internal_get_velocityEstimatorStopGestureSpeed() const;

constexpr float_t& __cordl_internal_get_velocityEstimatorStopGestureSpeed() ;

constexpr bool const& __cordl_internal_get_velocityEstimatorThresholdMet() const;

constexpr bool& __cordl_internal_get_velocityEstimatorThresholdMet() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_whileCharging() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_whileCharging() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__shootingAllowed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allowCharging(bool  value) ;

constexpr void __cordl_internal_set_chargeDecaySpeed(float_t  value) ;

constexpr void __cordl_internal_set_chargeHapticsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_chargeRateCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_chargeTime(float_t  value) ;

constexpr void __cordl_internal_set_chargeToShotSpeedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_continuousChargingProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_cooldownRemaining(float_t  value) ;

constexpr void __cordl_internal_set_cooldownSeconds(float_t  value) ;

constexpr void __cordl_internal_set_currentStep(int32_t  value) ;

constexpr void __cordl_internal_set_debugShootDirection(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_drawShootVector(bool  value) ;

constexpr void __cordl_internal_set_enableHaptics(bool  value) ;

constexpr void __cordl_internal_set_hapticsBothHands(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_isPressed(bool  value) ;

constexpr void __cordl_internal_set_lastStep(int32_t  value) ;

constexpr void __cordl_internal_set_logVelocityEstimatorSpeed(bool  value) ;

constexpr void __cordl_internal_set_maxChargeHapticsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_maxChargeSeconds(float_t  value) ;

constexpr void __cordl_internal_set_numberOfProgressSteps(int32_t  value) ;

constexpr void __cordl_internal_set_offsetRigPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_onChargeCancelled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onCooldownFinished(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onMaxCharge(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onMovedToNextStep(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onReachedLastProgressStep(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onShoot(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_onShootLocal(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_projectileTrailPrefab(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_runChargeCancelledEventOnShoot(bool  value) ;

constexpr void __cordl_internal_set_shootActivatorType(::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator  value) ;

constexpr void __cordl_internal_set_shootDirectionType(::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection  value) ;

constexpr void __cordl_internal_set_shootFromTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shootHapticsDuration(float_t  value) ;

constexpr void __cordl_internal_set_shootHapticsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_shootMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_shootMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_snapToMaxChargeAt(float_t  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_velocityEstimatorMinRigDotProduct(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimatorStartGestureSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimatorStopGestureSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimatorThresholdMet(bool  value) ;

constexpr void __cordl_internal_set_whileCharging(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x5d9f6a4, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsCoolingDown, addr 0x5d9e41c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCoolingDown() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d9e648, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_shootingAllowed, addr 0x5d9e40c, size 0x8, virtual false, abstract: false, final false
inline bool get_shootingAllowed() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d9e650, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_shootingAllowed, addr 0x5d9e414, size 0x8, virtual false, abstract: false, final false
inline void set_shootingAllowed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectileShooterCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectileShooterCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectileShooterCosmetic(ProjectileShooterCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectileShooterCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectileShooterCosmetic(ProjectileShooterCosmetic const& ) = delete;

/// @brief Field CHARGE_MSG offset 0xffffffff size 0x8
static constexpr ::ConstString  CHARGE_MSG{u"only enabled when allowCharging is true."};

/// @brief Field CHARGE_STR offset 0xffffffff size 0x8
static constexpr ::ConstString  CHARGE_STR{u"allowCharging"};

/// @brief Field HAPTICS_STR offset 0xffffffff size 0x8
static constexpr ::ConstString  HAPTICS_STR{u"enableHaptics"};

/// @brief Field MOVE_STR offset 0xffffffff size 0x8
static constexpr ::ConstString  MOVE_STR{u"IsMovementShoot"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4965};

/// [SerializeField]
/// @brief Field projectilePrefab, offset: 0x20, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___projectilePrefab;

/// [SerializeField]
/// @brief Field projectileTrailPrefab, offset: 0x24, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___projectileTrailPrefab;

/// [FormerlySerializedAs("launchActivatorType")]
/// [SerializeField]
/// @brief Field shootActivatorType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ProjectileShooterCosmetic_ShootActivator  ___shootActivatorType;

/// [FormerlySerializedAs("launchDirectionType")]
/// [SerializeField]
/// @brief Field shootDirectionType, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ProjectileShooterCosmetic_ShootDirection  ___shootDirectionType;

/// [SerializeField]
/// @brief Field offsetRigPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetRigPosition;

/// [FormerlySerializedAs("launchTransform")]
/// [SerializeField]
/// @brief Field shootFromTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shootFromTransform;

/// [SerializeField]
/// @brief Field drawShootVector, offset: 0x48, size: 0x1, def value: None
 bool  ___drawShootVector;

/// [FormerlySerializedAs("cooldown")]
/// [SerializeField]
/// @brief Field cooldownSeconds, offset: 0x4c, size: 0x4, def value: None
 float_t  ___cooldownSeconds;

/// [Space]
/// [SerializeField]
/// @brief Field enableHaptics, offset: 0x50, size: 0x1, def value: None
 bool  ___enableHaptics;

/// [FormerlySerializedAs("hapticsIntensity")]
/// [SerializeField]
/// @brief Field shootHapticsIntensity, offset: 0x54, size: 0x4, def value: None
 float_t  ___shootHapticsIntensity;

/// [FormerlySerializedAs("hapticsDuration")]
/// [SerializeField]
/// @brief Field shootHapticsDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___shootHapticsDuration;

/// [SerializeField]
/// [Tooltip("only enabled when allowCharging is true.")]
/// @brief Field chargeHapticsIntensity, offset: 0x5c, size: 0x4, def value: None
 float_t  ___chargeHapticsIntensity;

/// [SerializeField]
/// [Tooltip("only enabled when allowCharging is true.")]
/// @brief Field maxChargeHapticsIntensity, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxChargeHapticsIntensity;

/// [SerializeField]
/// @brief Field hapticsBothHands, offset: 0x64, size: 0x1, def value: None
 bool  ___hapticsBothHands;

/// [Space]
/// [SerializeField]
/// @brief Field velocityEstimator, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// [SerializeField]
/// @brief Field velocityEstimatorStartGestureSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___velocityEstimatorStartGestureSpeed;

/// [SerializeField]
/// @brief Field velocityEstimatorStopGestureSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___velocityEstimatorStopGestureSpeed;

/// [SerializeField]
/// @brief Field velocityEstimatorMinRigDotProduct, offset: 0x78, size: 0x4, def value: None
 float_t  ___velocityEstimatorMinRigDotProduct;

/// [SerializeField]
/// @brief Field logVelocityEstimatorSpeed, offset: 0x7c, size: 0x1, def value: None
 bool  ___logVelocityEstimatorSpeed;

/// [FormerlySerializedAs("launchMinSpeed")]
/// [SerializeField]
/// [Tooltip("only enabled when allowCharging is true.")]
/// @brief Field shootMinSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___shootMinSpeed;

/// [FormerlySerializedAs("launchMaxSpeed")]
/// [SerializeField]
/// @brief Field shootMaxSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___shootMaxSpeed;

/// [SerializeField]
/// @brief Field allowCharging, offset: 0x88, size: 0x1, def value: None
 bool  ___allowCharging;

/// [SerializeField]
/// @brief Field maxChargeSeconds, offset: 0x8c, size: 0x4, def value: None
 float_t  ___maxChargeSeconds;

/// [SerializeField]
/// @brief Field snapToMaxChargeAt, offset: 0x90, size: 0x4, def value: None
 float_t  ___snapToMaxChargeAt;

/// [SerializeField]
/// @brief Field chargeDecaySpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___chargeDecaySpeed;

/// [SerializeField]
/// @brief Field runChargeCancelledEventOnShoot, offset: 0x98, size: 0x1, def value: None
 bool  ___runChargeCancelledEventOnShoot;

/// [SerializeField]
/// @brief Field chargeRateCurve, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___chargeRateCurve;

/// [SerializeField]
/// @brief Field chargeToShotSpeedCurve, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___chargeToShotSpeedCurve;

/// [FormerlySerializedAs("onReadyToShoot")]
/// @brief Field onCooldownFinished, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCooldownFinished;

/// @brief Field continuousChargingProperties, offset: 0xb8, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousChargingProperties;

/// @brief Field whileCharging, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___whileCharging;

/// @brief Field onMaxCharge, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onMaxCharge;

/// @brief Field onChargeCancelled, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onChargeCancelled;

/// [FormerlySerializedAs("onLaunchProjectileShared")]
/// @brief Field onShoot, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onShoot;

/// [FormerlySerializedAs("onOwnerLaunchProjectile")]
/// @brief Field onShootLocal, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onShootLocal;

/// [SerializeField]
/// @brief Field numberOfProgressSteps, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___numberOfProgressSteps;

/// @brief Field onMovedToNextStep, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onMovedToNextStep;

/// @brief Field onReachedLastProgressStep, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onReachedLastProgressStep;

/// @brief Field currentStep, offset: 0x100, size: 0x4, def value: None
 int32_t  ___currentStep;

/// @brief Field lastStep, offset: 0x104, size: 0x4, def value: None
 int32_t  ___lastStep;

/// [CompilerGenerated]
/// @brief Field <shootingAllowed>k__BackingField, offset: 0x108, size: 0x1, def value: None
 bool  ____shootingAllowed_k__BackingField;

/// @brief Field isPressed, offset: 0x109, size: 0x1, def value: None
 bool  ___isPressed;

/// @brief Field velocityEstimatorThresholdMet, offset: 0x10a, size: 0x1, def value: None
 bool  ___velocityEstimatorThresholdMet;

/// @brief Field cooldownRemaining, offset: 0x10c, size: 0x4, def value: None
 float_t  ___cooldownRemaining;

/// @brief Field chargeTime, offset: 0x110, size: 0x4, def value: None
 float_t  ___chargeTime;

/// @brief Field transferrableObject, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field rig, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field isLocal, offset: 0x128, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field debugShootDirection, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___debugShootDirection;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x138, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___projectilePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___projectileTrailPrefab) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootActivatorType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootDirectionType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___offsetRigPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootFromTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___drawShootVector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___cooldownSeconds) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___enableHaptics) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootHapticsIntensity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootHapticsDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___chargeHapticsIntensity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___maxChargeHapticsIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___hapticsBothHands) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___velocityEstimator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___velocityEstimatorStartGestureSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___velocityEstimatorStopGestureSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___velocityEstimatorMinRigDotProduct) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___logVelocityEstimatorSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootMinSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___shootMaxSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___allowCharging) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___maxChargeSeconds) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___snapToMaxChargeAt) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___chargeDecaySpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___runChargeCancelledEventOnShoot) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___chargeRateCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___chargeToShotSpeedCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onCooldownFinished) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___continuousChargingProperties) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___whileCharging) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onMaxCharge) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onChargeCancelled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onShoot) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onShootLocal) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___numberOfProgressSteps) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onMovedToNextStep) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___onReachedLastProgressStep) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___currentStep) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___lastStep) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ____shootingAllowed_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___isPressed) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___velocityEstimatorThresholdMet) == 0x10a, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___cooldownRemaining) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___chargeTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___transferrableObject) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___rig) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___isLocal) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ___debugShootDirection) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic, ____TickRunning_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ProjectileShooterCosmetic) == 0x140, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
