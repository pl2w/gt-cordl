#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/MedusaEyeLantern.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__MedusaEyeLantern_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MedusaEyeLantern)
namespace GlobalNamespace {
struct MedusaEyeLantern_State;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaTag::Cosmetics {
class DistanceCheckerCosmetic;
}
namespace GorillaTag::Cosmetics {
class MedusaEyeLantern_EyeState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
// Forward declare root types
namespace GorillaTag::Cosmetics {
class MedusaEyeLantern;
}
namespace GorillaTag::Cosmetics {
class MedusaEyeLantern_EyeState;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::MedusaEyeLantern*);
MARK_REF_T(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::MedusaEyeLantern*, "GorillaTag.Cosmetics", "MedusaEyeLantern");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*, "GorillaTag.Cosmetics", "MedusaEyeLantern/EyeState");
// Dependencies GorillaTag.Cosmetics.MedusaEyeLantern::EyeState, GorillaTag.Cosmetics.MedusaEyeLantern::State, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.MedusaEyeLantern
class CORDL_TYPE MedusaEyeLantern : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::MedusaEyeLantern_State;

using EyeState = ::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState;

/// @brief Field OnPetrification, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPetrification, put=__cordl_internal_set_OnPetrification)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  OnPetrification;

/// @brief Field allStates, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_allStates, put=__cordl_internal_set_allStates)) ::ArrayW<::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>  allStates;

/// @brief Field allStatesDict, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allStatesDict, put=__cordl_internal_set_allStatesDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MedusaEyeLantern_State,::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>*  allStatesDict;

/// @brief Field currentState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::MedusaEyeLantern_State  currentState;

/// @brief Field distanceChecker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_distanceChecker, put=__cordl_internal_set_distanceChecker)) ::UnityW<::GorillaTag::Cosmetics::DistanceCheckerCosmetic>  distanceChecker;

/// @brief Field faceDistanceOffset, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceDistanceOffset, put=__cordl_internal_set_faceDistanceOffset)) float_t  faceDistanceOffset;

/// @brief Field initialRotation, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field lastState, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::MedusaEyeLantern_State  lastState;

/// @brief Field lookAtEyeAngleThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtEyeAngleThreshold, put=__cordl_internal_set_lookAtEyeAngleThreshold)) float_t  lookAtEyeAngleThreshold;

/// @brief Field lookAtTargetSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtTargetSpeed, put=__cordl_internal_set_lookAtTargetSpeed)) float_t  lookAtTargetSpeed;

/// @brief Field maxRotationAngle, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRotationAngle, put=__cordl_internal_set_maxRotationAngle)) float_t  maxRotationAngle;

/// @brief Field petrificationDuration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_petrificationDuration, put=__cordl_internal_set_petrificationDuration)) float_t  petrificationDuration;

/// @brief Field petrificationStarted, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_petrificationStarted, put=__cordl_internal_set_petrificationStarted)) float_t  petrificationStarted;

/// @brief Field resetCooldown, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetCooldown, put=__cordl_internal_set_resetCooldown)) float_t  resetCooldown;

/// @brief Field resetTargetTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetTargetTime, put=__cordl_internal_set_resetTargetTime)) float_t  resetTargetTime;

/// @brief Field resetTargetTimer, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetTargetTimer, put=__cordl_internal_set_resetTargetTimer)) float_t  resetTargetTimer;

/// @brief Field rotatingObjectTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingObjectTransform, put=__cordl_internal_set_rotatingObjectTransform)) ::UnityW<::UnityEngine::Transform>  rotatingObjectTransform;

/// @brief Field rotationSmoothing, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSmoothing, put=__cordl_internal_set_rotationSmoothing)) float_t  rotationSmoothing;

/// @brief Field rotationSpeedMultiplier, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeedMultiplier, put=__cordl_internal_set_rotationSpeedMultiplier)) float_t  rotationSpeedMultiplier;

/// @brief Field sloshVelocityThreshold, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_sloshVelocityThreshold, put=__cordl_internal_set_sloshVelocityThreshold)) float_t  sloshVelocityThreshold;

/// @brief Field targetHeadAngleThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetHeadAngleThreshold, put=__cordl_internal_set_targetHeadAngleThreshold)) float_t  targetHeadAngleThreshold;

/// @brief Field targetRig, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field targetRotation, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetRotation, put=__cordl_internal_set_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

/// @brief Field transferableParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferableParent, put=__cordl_internal_set_transferableParent)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferableParent;

/// @brief Field velocityTracker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityTracker, put=__cordl_internal_set_velocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Field warmUpProgressTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_warmUpProgressTime, put=__cordl_internal_set_warmUpProgressTime)) float_t  warmUpProgressTime;

/// @brief Field warmupCounter, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_warmupCounter, put=__cordl_internal_set_warmupCounter)) float_t  warmupCounter;

/// @brief Method Awake, addr 0x5d72400, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EyeIsLockedOn, addr 0x5d72d30, size 0x14, virtual false, abstract: false, final false
inline bool EyeIsLockedOn() ;

/// @brief Method FaceTarget, addr 0x5d72e84, size 0x60c, virtual false, abstract: false, final false
inline void FaceTarget() ;

/// @brief Method HandleOnNewPlayerDetected, addr 0x5d72d80, size 0x44, virtual false, abstract: false, final false
inline void HandleOnNewPlayerDetected(::GlobalNamespace::VRRig*  target, float_t  distance) ;

/// @brief Method HandleOnNoOneInRange, addr 0x5d72d44, size 0x3c, virtual false, abstract: false, final false
inline void HandleOnNoOneInRange() ;

/// @brief Method IsTargetLookingAtEye, addr 0x5d73490, size 0x3c8, virtual false, abstract: false, final false
inline bool IsTargetLookingAtEye() ;

static inline ::GorillaTag::Cosmetics::MedusaEyeLantern* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d724a0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayHaptic, addr 0x5d73858, size 0x188, virtual false, abstract: false, final false
inline void PlayHaptic(::GlobalNamespace::MedusaEyeLantern_State  state) ;

/// @brief Method Sloshing, addr 0x5d72dc4, size 0xc0, virtual false, abstract: false, final false
inline void Sloshing() ;

/// @brief Method Start, addr 0x5d724f0, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchState, addr 0x5d7259c, size 0xdc, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::MedusaEyeLantern_State  newState) ;

/// @brief Method Update, addr 0x5d72678, size 0x3f4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateState, addr 0x5d72a6c, size 0x2c4, virtual false, abstract: false, final false
inline void UpdateState() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_OnPetrification() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_OnPetrification() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*> const& __cordl_internal_get_allStates() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>& __cordl_internal_get_allStates() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MedusaEyeLantern_State,::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>* const& __cordl_internal_get_allStatesDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MedusaEyeLantern_State,::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>*& __cordl_internal_get_allStatesDict() ;

constexpr ::GlobalNamespace::MedusaEyeLantern_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::MedusaEyeLantern_State& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::DistanceCheckerCosmetic> const& __cordl_internal_get_distanceChecker() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::DistanceCheckerCosmetic>& __cordl_internal_get_distanceChecker() ;

constexpr float_t const& __cordl_internal_get_faceDistanceOffset() const;

constexpr float_t& __cordl_internal_get_faceDistanceOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr ::GlobalNamespace::MedusaEyeLantern_State const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::MedusaEyeLantern_State& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_lookAtEyeAngleThreshold() const;

constexpr float_t& __cordl_internal_get_lookAtEyeAngleThreshold() ;

constexpr float_t const& __cordl_internal_get_lookAtTargetSpeed() const;

constexpr float_t& __cordl_internal_get_lookAtTargetSpeed() ;

constexpr float_t const& __cordl_internal_get_maxRotationAngle() const;

constexpr float_t& __cordl_internal_get_maxRotationAngle() ;

constexpr float_t const& __cordl_internal_get_petrificationDuration() const;

constexpr float_t& __cordl_internal_get_petrificationDuration() ;

constexpr float_t const& __cordl_internal_get_petrificationStarted() const;

constexpr float_t& __cordl_internal_get_petrificationStarted() ;

constexpr float_t const& __cordl_internal_get_resetCooldown() const;

constexpr float_t& __cordl_internal_get_resetCooldown() ;

constexpr float_t const& __cordl_internal_get_resetTargetTime() const;

constexpr float_t& __cordl_internal_get_resetTargetTime() ;

constexpr float_t const& __cordl_internal_get_resetTargetTimer() const;

constexpr float_t& __cordl_internal_get_resetTargetTimer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotatingObjectTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotatingObjectTransform() ;

constexpr float_t const& __cordl_internal_get_rotationSmoothing() const;

constexpr float_t& __cordl_internal_get_rotationSmoothing() ;

constexpr float_t const& __cordl_internal_get_rotationSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_rotationSpeedMultiplier() ;

constexpr float_t const& __cordl_internal_get_sloshVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_sloshVelocityThreshold() ;

constexpr float_t const& __cordl_internal_get_targetHeadAngleThreshold() const;

constexpr float_t& __cordl_internal_get_targetHeadAngleThreshold() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferableParent() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferableParent() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_velocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_velocityTracker() ;

constexpr float_t const& __cordl_internal_get_warmUpProgressTime() const;

constexpr float_t& __cordl_internal_get_warmUpProgressTime() ;

constexpr float_t const& __cordl_internal_get_warmupCounter() const;

constexpr float_t& __cordl_internal_get_warmupCounter() ;

constexpr void __cordl_internal_set_OnPetrification(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_allStates(::ArrayW<::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>  value) ;

constexpr void __cordl_internal_set_allStatesDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MedusaEyeLantern_State,::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::MedusaEyeLantern_State  value) ;

constexpr void __cordl_internal_set_distanceChecker(::UnityW<::GorillaTag::Cosmetics::DistanceCheckerCosmetic>  value) ;

constexpr void __cordl_internal_set_faceDistanceOffset(float_t  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::MedusaEyeLantern_State  value) ;

constexpr void __cordl_internal_set_lookAtEyeAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lookAtTargetSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxRotationAngle(float_t  value) ;

constexpr void __cordl_internal_set_petrificationDuration(float_t  value) ;

constexpr void __cordl_internal_set_petrificationStarted(float_t  value) ;

constexpr void __cordl_internal_set_resetCooldown(float_t  value) ;

constexpr void __cordl_internal_set_resetTargetTime(float_t  value) ;

constexpr void __cordl_internal_set_resetTargetTimer(float_t  value) ;

constexpr void __cordl_internal_set_rotatingObjectTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rotationSmoothing(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_sloshVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_targetHeadAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_transferableParent(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

constexpr void __cordl_internal_set_warmUpProgressTime(float_t  value) ;

constexpr void __cordl_internal_set_warmupCounter(float_t  value) ;

/// @brief Method .ctor, addr 0x5d739e0, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MedusaEyeLantern() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MedusaEyeLantern", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MedusaEyeLantern(MedusaEyeLantern && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MedusaEyeLantern", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MedusaEyeLantern(MedusaEyeLantern const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4855};

/// [SerializeField]
/// @brief Field distanceChecker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::DistanceCheckerCosmetic>  ___distanceChecker;

/// [SerializeField]
/// @brief Field transferableParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferableParent;

/// [SerializeField]
/// @brief Field velocityTracker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___velocityTracker;

/// [SerializeField]
/// @brief Field rotatingObjectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotatingObjectTransform;

/// [Space]
/// [Header("Rotation Settings")]
/// [SerializeField]
/// @brief Field maxRotationAngle, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxRotationAngle;

/// [SerializeField]
/// @brief Field sloshVelocityThreshold, offset: 0x44, size: 0x4, def value: None
 float_t  ___sloshVelocityThreshold;

/// [SerializeField]
/// @brief Field rotationSmoothing, offset: 0x48, size: 0x4, def value: None
 float_t  ___rotationSmoothing;

/// [SerializeField]
/// @brief Field rotationSpeedMultiplier, offset: 0x4c, size: 0x4, def value: None
 float_t  ___rotationSpeedMultiplier;

/// [Space]
/// [Header("Target Tracking Settings")]
/// [SerializeField]
/// @brief Field lookAtEyeAngleThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___lookAtEyeAngleThreshold;

/// [SerializeField]
/// @brief Field targetHeadAngleThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___targetHeadAngleThreshold;

/// [SerializeField]
/// @brief Field lookAtTargetSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___lookAtTargetSpeed;

/// [SerializeField]
/// @brief Field warmUpProgressTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___warmUpProgressTime;

/// [SerializeField]
/// @brief Field resetCooldown, offset: 0x60, size: 0x4, def value: None
 float_t  ___resetCooldown;

/// [SerializeField]
/// @brief Field faceDistanceOffset, offset: 0x64, size: 0x4, def value: None
 float_t  ___faceDistanceOffset;

/// [SerializeField]
/// @brief Field petrificationDuration, offset: 0x68, size: 0x4, def value: None
 float_t  ___petrificationDuration;

/// [Space]
/// [Header("Eye State Settings")]
/// @brief Field allStates, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>  ___allStates;

/// @brief Field OnPetrification, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___OnPetrification;

/// @brief Field initialRotation, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

/// @brief Field targetRotation, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___targetRotation;

/// @brief Field currentState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::MedusaEyeLantern_State  ___currentState;

/// @brief Field lastState, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::MedusaEyeLantern_State  ___lastState;

/// @brief Field petrificationStarted, offset: 0xa8, size: 0x4, def value: None
 float_t  ___petrificationStarted;

/// @brief Field warmupCounter, offset: 0xac, size: 0x4, def value: None
 float_t  ___warmupCounter;

/// @brief Field allStatesDict, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MedusaEyeLantern_State,::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState*>*  ___allStatesDict;

/// @brief Field targetRig, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field resetTargetTimer, offset: 0xc0, size: 0x4, def value: None
 float_t  ___resetTargetTimer;

/// @brief Field resetTargetTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___resetTargetTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___distanceChecker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___transferableParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___velocityTracker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___rotatingObjectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___maxRotationAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___sloshVelocityThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___rotationSmoothing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___rotationSpeedMultiplier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___lookAtEyeAngleThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___targetHeadAngleThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___lookAtTargetSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___warmUpProgressTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___resetCooldown) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___faceDistanceOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___petrificationDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___allStates) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___OnPetrification) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___initialRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___targetRotation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___currentState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___lastState) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___petrificationStarted) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___warmupCounter) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___allStatesDict) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___targetRig) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___resetTargetTimer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern, ___resetTargetTime) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::MedusaEyeLantern) == 0xc8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.MedusaEyeLantern::State, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.MedusaEyeLantern/EyeState
class CORDL_TYPE MedusaEyeLantern_EyeState : public ::System::Object {
public:
// Declarations
/// @brief Field eyeState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeState, put=__cordl_internal_set_eyeState)) ::GlobalNamespace::MedusaEyeLantern_State  eyeState;

/// @brief Field hapticStrength, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) ::UnityEngine::AnimationCurve*  hapticStrength;

/// @brief Field onEnterState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterState, put=__cordl_internal_set_onEnterState)) ::UnityEngine::Events::UnityEvent*  onEnterState;

/// @brief Field onExitState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitState, put=__cordl_internal_set_onExitState)) ::UnityEngine::Events::UnityEvent*  onExitState;

static inline ::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState* New_ctor() ;

constexpr ::GlobalNamespace::MedusaEyeLantern_State const& __cordl_internal_get_eyeState() const;

constexpr ::GlobalNamespace::MedusaEyeLantern_State& __cordl_internal_get_eyeState() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hapticStrength() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hapticStrength() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onEnterState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onEnterState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onExitState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onExitState() ;

constexpr void __cordl_internal_set_eyeState(::GlobalNamespace::MedusaEyeLantern_State  value) ;

constexpr void __cordl_internal_set_hapticStrength(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_onEnterState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onExitState(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5d73ad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MedusaEyeLantern_EyeState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MedusaEyeLantern_EyeState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MedusaEyeLantern_EyeState(MedusaEyeLantern_EyeState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MedusaEyeLantern_EyeState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MedusaEyeLantern_EyeState(MedusaEyeLantern_EyeState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4853};

/// @brief Field eyeState, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::MedusaEyeLantern_State  ___eyeState;

/// @brief Field hapticStrength, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___hapticStrength;

/// @brief Field onEnterState, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onEnterState;

/// @brief Field onExitState, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onExitState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState, ___eyeState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState, ___hapticStrength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState, ___onEnterState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState, ___onExitState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::MedusaEyeLantern_EyeState) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
