#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/CapsuleLocomotionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsuleLocomotionHandler)
namespace Oculus::Interaction::Locomotion {
class CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165;
}
namespace Oculus::Interaction::Locomotion {
class CapsuleLocomotionHandler___c;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction {
class IDeltaTimeConsumer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class CapsuleLocomotionHandler;
}
namespace Oculus::Interaction::Locomotion {
class CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165;
}
namespace Oculus::Interaction::Locomotion {
class CapsuleLocomotionHandler___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*);
MARK_REF_T(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*);
MARK_REF_T(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler*, "Oculus.Interaction.Locomotion", "CapsuleLocomotionHandler");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165*, "Oculus.Interaction.Locomotion", "CapsuleLocomotionHandler/<EndOfFrameCoroutine>d__165");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*, "Oculus.Interaction.Locomotion", "CapsuleLocomotionHandler/<>c");
// [Obsolete("Use FirstPersonLocomotor instead")]
// Dependencies System.Nullable`1<T>, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.CapsuleLocomotionHandler
class CORDL_TYPE CapsuleLocomotionHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EndOfFrameCoroutine_d__165 = ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165;

using __c = ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c;

 __declspec(property(get=get_Acceleration, put=set_Acceleration)) float_t  Acceleration;

 __declspec(property(get=get_AirDamping, put=set_AirDamping)) float_t  AirDamping;

 __declspec(property(get=get_AutoUpdateHeight, put=set_AutoUpdateHeight)) bool  AutoUpdateHeight;

 __declspec(property(get=get_ControllingPlayer)) bool  ControllingPlayer;

 __declspec(property(get=get_CrouchHeightOffset, put=set_CrouchHeightOffset)) float_t  CrouchHeightOffset;

 __declspec(property(get=get_CrouchSpeedFactor, put=set_CrouchSpeedFactor)) float_t  CrouchSpeedFactor;

 __declspec(property(get=get_DefaultHeight, put=set_DefaultHeight)) float_t  DefaultHeight;

 __declspec(property(get=get_ExitHotspotDistance, put=set_ExitHotspotDistance)) float_t  ExitHotspotDistance;

 __declspec(property(get=get_GravityFactor, put=set_GravityFactor)) float_t  GravityFactor;

 __declspec(property(get=get_GroundDamping, put=set_GroundDamping)) float_t  GroundDamping;

 __declspec(property(get=get_HeightOffset, put=set_HeightOffset)) float_t  HeightOffset;

 __declspec(property(get=get_IgnoringVelocity)) bool  IgnoringVelocity;

 __declspec(property(get=get_IsCrouching)) bool  IsCrouching;

 __declspec(property(get=get_IsGrounded)) bool  IsGrounded;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_JumpDamping, put=set_JumpDamping)) float_t  JumpDamping;

 __declspec(property(get=get_JumpForce, put=set_JumpForce)) float_t  JumpForce;

 __declspec(property(get=get_LayerMask, put=set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

 __declspec(property(get=get_MaxReboundSteps, put=set_MaxReboundSteps)) int32_t  MaxReboundSteps;

 __declspec(property(get=get_MaxSlopeAngle, put=set_MaxSlopeAngle)) float_t  MaxSlopeAngle;

 __declspec(property(get=get_MaxStep, put=set_MaxStep)) float_t  MaxStep;

 __declspec(property(get=get_MaxWallPenetrationDistance, put=set_MaxWallPenetrationDistance)) float_t  MaxWallPenetrationDistance;

 __declspec(property(get=get_RunningSpeedFactor, put=set_RunningSpeedFactor)) float_t  RunningSpeedFactor;

 __declspec(property(get=get_SkinWidth, put=set_SkinWidth)) float_t  SkinWidth;

 __declspec(property(get=get_SpeedFactor, put=set_SpeedFactor)) float_t  SpeedFactor;

/// @brief Field _acceleration, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__acceleration, put=__cordl_internal_set__acceleration)) float_t  _acceleration;

/// @brief Field _accumulatedDeltaFrame, offset 0xb0, size 0x1c 
 __declspec(property(get=__cordl_internal_get__accumulatedDeltaFrame, put=__cordl_internal_set__accumulatedDeltaFrame)) ::UnityEngine::Pose  _accumulatedDeltaFrame;

/// @brief Field _airDamping, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__airDamping, put=__cordl_internal_set__airDamping)) float_t  _airDamping;

/// @brief Field _autoUpdateHeight, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoUpdateHeight, put=__cordl_internal_set__autoUpdateHeight)) bool  _autoUpdateHeight;

/// @brief Field _capsule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsule, put=__cordl_internal_set__capsule)) ::UnityW<::UnityEngine::CapsuleCollider>  _capsule;

/// @brief Field _crouchHeightOffset, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__crouchHeightOffset, put=__cordl_internal_set__crouchHeightOffset)) float_t  _crouchHeightOffset;

/// @brief Field _crouchSpeedFactor, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__crouchSpeedFactor, put=__cordl_internal_set__crouchSpeedFactor)) float_t  _crouchSpeedFactor;

/// @brief Field _defaultHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultHeight, put=__cordl_internal_set__defaultHeight)) float_t  _defaultHeight;

/// @brief Field _deferredLocomotionEvent, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__deferredLocomotionEvent, put=__cordl_internal_set__deferredLocomotionEvent)) ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _deferredLocomotionEvent;

/// @brief Field _deltaTimeProvider, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _endOfFrame, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrame, put=__cordl_internal_set__endOfFrame)) ::UnityEngine::YieldInstruction*  _endOfFrame;

/// @brief Field _endOfFrameRoutine, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrameRoutine, put=__cordl_internal_set__endOfFrameRoutine)) ::UnityEngine::Coroutine*  _endOfFrameRoutine;

/// @brief Field _exitHotspotDistance, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__exitHotspotDistance, put=__cordl_internal_set__exitHotspotDistance)) float_t  _exitHotspotDistance;

/// @brief Field _gravityFactor, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__gravityFactor, put=__cordl_internal_set__gravityFactor)) float_t  _gravityFactor;

/// @brief Field _groundDamping, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__groundDamping, put=__cordl_internal_set__groundDamping)) float_t  _groundDamping;

/// @brief Field _groundHit, offset 0xf0, size 0x2c 
 __declspec(property(get=__cordl_internal_get__groundHit, put=__cordl_internal_set__groundHit)) ::UnityEngine::RaycastHit  _groundHit;

/// @brief Field _headHotspotCenter, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__headHotspotCenter, put=__cordl_internal_set__headHotspotCenter)) ::System::Nullable_1<::UnityEngine::Vector3>  _headHotspotCenter;

/// @brief Field _heightOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightOffset, put=__cordl_internal_set__heightOffset)) float_t  _heightOffset;

/// @brief Field _isCrouching, offset 0x11e, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCrouching, put=__cordl_internal_set__isCrouching)) bool  _isCrouching;

/// @brief Field _isGrounded, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGrounded, put=__cordl_internal_set__isGrounded)) bool  _isGrounded;

/// @brief Field _isHeadInHotspot, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHeadInHotspot, put=__cordl_internal_set__isHeadInHotspot)) bool  _isHeadInHotspot;

/// @brief Field _isRunning, offset 0x11d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRunning, put=__cordl_internal_set__isRunning)) bool  _isRunning;

/// @brief Field _jumpDamping, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpDamping, put=__cordl_internal_set__jumpDamping)) float_t  _jumpDamping;

/// @brief Field _jumpForce, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpForce, put=__cordl_internal_set__jumpForce)) float_t  _jumpForce;

/// @brief Field _layerMask, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) ::UnityEngine::LayerMask  _layerMask;

/// @brief Field _logicalFeet, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__logicalFeet, put=__cordl_internal_set__logicalFeet)) ::UnityW<::UnityEngine::Transform>  _logicalFeet;

/// @brief Field _logicalHead, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__logicalHead, put=__cordl_internal_set__logicalHead)) ::UnityW<::UnityEngine::Transform>  _logicalHead;

/// @brief Field _maxReboundSteps, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxReboundSteps, put=__cordl_internal_set__maxReboundSteps)) int32_t  _maxReboundSteps;

/// @brief Field _maxSlopeAngle, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSlopeAngle, put=__cordl_internal_set__maxSlopeAngle)) float_t  _maxSlopeAngle;

/// @brief Field _maxStep, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStep, put=__cordl_internal_set__maxStep)) float_t  _maxStep;

/// @brief Field _maxWallPenetrationDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxWallPenetrationDistance, put=__cordl_internal_set__maxWallPenetrationDistance)) float_t  _maxWallPenetrationDistance;

/// @brief Field _playerEyes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerEyes, put=__cordl_internal_set__playerEyes)) ::UnityW<::UnityEngine::Transform>  _playerEyes;

/// @brief Field _playerOrigin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOrigin, put=__cordl_internal_set__playerOrigin)) ::UnityW<::UnityEngine::Transform>  _playerOrigin;

/// @brief Field _runningSpeedFactor, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__runningSpeedFactor, put=__cordl_internal_set__runningSpeedFactor)) float_t  _runningSpeedFactor;

/// @brief Field _skinWidth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__skinWidth, put=__cordl_internal_set__skinWidth)) float_t  _skinWidth;

/// @brief Field _speedFactor, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__speedFactor, put=__cordl_internal_set__speedFactor)) float_t  _speedFactor;

/// @brief Field _started, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _velocity, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocity, put=__cordl_internal_set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Field _velocityDisabled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__velocityDisabled, put=__cordl_internal_set__velocityDisabled)) bool  _velocityDisabled;

/// @brief Field _whenLocomotionEventHandled, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionEventHandled, put=__cordl_internal_set__whenLocomotionEventHandled)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  _whenLocomotionEventHandled;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept;

/// @brief Method AccumulateDelta, addr 0xa4b9794, size 0x14c, virtual false, abstract: false, final false
inline void AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method AddVelocity, addr 0xa4ba208, size 0x68, virtual false, abstract: false, final false
inline void AddVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method CalculateGround, addr 0xa4bb35c, size 0x1ec, virtual false, abstract: false, final false
inline bool CalculateGround(::by_ref<::UnityEngine::RaycastHit>  groundHit) ;

/// @brief Method CalculateGround, addr 0xa4bcdc0, size 0x444, virtual false, abstract: false, final false
inline bool CalculateGround(::UnityEngine::Vector3  origin, float_t  radius, float_t  distance, ::by_ref<::UnityEngine::RaycastHit>  groundHit) ;

/// @brief Method CatchUpCharacterToPlayer, addr 0xa4b9110, size 0x2bc, virtual false, abstract: false, final false
inline void CatchUpCharacterToPlayer() ;

/// @brief Method CatchUpPlayerToCharacter, addr 0xa4b9d24, size 0x2a0, virtual false, abstract: false, final false
inline void CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight) ;

/// @brief Method CheckMoveCharacter, addr 0xa4baddc, size 0x250, virtual false, abstract: false, final false
inline bool CheckMoveCharacter(::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  movement) ;

/// @brief Method ClimbStep, addr 0xa4bc148, size 0x818, virtual false, abstract: false, final false
inline bool ClimbStep(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  climbDelta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  stepHit) ;

/// @brief Method ConsumeDeferredLocomotionEvents, addr 0xa4b9a98, size 0x124, virtual false, abstract: false, final false
inline void ConsumeDeferredLocomotionEvents() ;

/// @brief Method Crouch, addr 0xa4ba064, size 0x18, virtual false, abstract: false, final false
inline void Crouch(bool  crouch) ;

/// @brief Method DecomposeDelta, addr 0xa4bcc28, size 0x198, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> DecomposeDelta(::UnityEngine::Vector3  delta, ::UnityEngine::RaycastHit  hit) ;

/// @brief Method DisableMovement, addr 0xa4bb198, size 0xc, virtual false, abstract: false, final false
inline void DisableMovement() ;

/// @brief Method EnableMovement, addr 0xa4bb1a4, size 0x1b8, virtual false, abstract: false, final false
inline void EnableMovement() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Locomotion.CapsuleLocomotionHandler::<EndOfFrameCoroutine>d__165))]
/// @brief Method EndOfFrameCoroutine, addr 0xa4b8c20, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EndOfFrameCoroutine() ;

/// @brief Method GetCharacterFeet, addr 0xa4b9c58, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterFeet() ;

/// @brief Method GetCharacterHead, addr 0xa4ba270, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterHead() ;

/// @brief Method GetModifiedSpeedFactor, addr 0xa4bad60, size 0x7c, virtual false, abstract: false, final false
inline float_t GetModifiedSpeedFactor() ;

/// @brief Method GetPlayerHead, addr 0xa4bb8a4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerHead() ;

/// @brief Method GetPlayerHeadTop, addr 0xa4bb820, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerHeadTop() ;

/// @brief Method HandleDeferredLocomotionEvent, addr 0xa4ba5fc, size 0x1f4, virtual false, abstract: false, final false
inline void HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method HandleLocomotionEvent, addr 0xa4ba0c0, size 0x148, virtual true, abstract: false, final true
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method InjectAllCapsuleLocomotionHandler, addr 0xa4bd7c4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllCapsuleLocomotionHandler(::UnityEngine::CapsuleCollider*  capsule) ;

/// @brief Method InjectCapsule, addr 0xa4bd7cc, size 0x8, virtual false, abstract: false, final false
inline void InjectCapsule(::UnityEngine::CapsuleCollider*  capsule) ;

/// @brief Method InjectOptionalPlayerEyes, addr 0xa4bd7d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPlayerEyes(::UnityEngine::Transform*  playerEyes) ;

/// @brief Method InjectOptionalPlayerOrigin, addr 0xa4bd7dc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPlayerOrigin(::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method IsFlat, addr 0xa4bb548, size 0x15c, virtual false, abstract: false, final false
inline bool IsFlat(::UnityEngine::Vector3  groundNormal) ;

/// @brief Method IsHeadFarFromPoint, addr 0xa4ba348, size 0x160, virtual false, abstract: false, final false
inline bool IsHeadFarFromPoint(::UnityEngine::Vector3  point, float_t  maxDistance) ;

/// @brief Method Jump, addr 0xa4b9fc4, size 0xa0, virtual false, abstract: false, final false
inline void Jump() ;

/// @brief Method LastUpdate, addr 0xa4b9bbc, size 0x9c, virtual true, abstract: false, final false
inline void LastUpdate() ;

/// @brief Method LateUpdate, addr 0xa4b9a94, size 0x4, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveAbsoluteFeet, addr 0xa4ba7f0, size 0x154, virtual false, abstract: false, final false
inline void MoveAbsoluteFeet(::UnityEngine::Vector3  target) ;

/// @brief Method MoveAbsoluteHead, addr 0xa4ba944, size 0xf0, virtual false, abstract: false, final false
inline void MoveAbsoluteHead(::UnityEngine::Vector3  target) ;

/// @brief Method MoveCapsuleCollides, addr 0xa4bc960, size 0x2c8, virtual false, abstract: false, final false
inline bool MoveCapsuleCollides(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  moveHit) ;

/// @brief Method MoveCharacter, addr 0xa4b9518, size 0x27c, virtual false, abstract: false, final false
inline void MoveCharacter(::UnityEngine::Vector3  delta) ;

/// @brief Method MoveRelative, addr 0xa4baa34, size 0x98, virtual false, abstract: false, final false
inline void MoveRelative(::UnityEngine::Vector3  offset) ;

static inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4b8c8c, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4b8be4, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RaycastHitPlane, addr 0xa4bb6a4, size 0x17c, virtual false, abstract: false, final false
inline bool RaycastHitPlane(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  enter) ;

/// @brief Method RaycastSphere, addr 0xa4bd204, size 0x134, virtual false, abstract: false, final false
static inline bool RaycastSphere(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  sphereCenter, float_t  radius, ::by_ref<float_t>  distance) ;

/// @brief Method Rebound, addr 0xa4bb914, size 0x27c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Rebound(::UnityEngine::Vector3  delta, int32_t  bounces) ;

/// @brief Method ResetPlayerToCharacter, addr 0xa4ba4a8, size 0x154, virtual false, abstract: false, final false
inline void ResetPlayerToCharacter() ;

/// @brief Method RotateAbsolute, addr 0xa4baacc, size 0x58, virtual false, abstract: false, final false
inline void RotateAbsolute(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateRelative, addr 0xa4bab24, size 0xe4, virtual false, abstract: false, final false
inline void RotateRelative(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateVelocity, addr 0xa4bac08, size 0x158, virtual false, abstract: false, final false
inline void RotateVelocity(::UnityEngine::Quaternion  target) ;

/// @brief Method Run, addr 0xa4ba0a0, size 0x20, virtual false, abstract: false, final false
inline void Run(bool  run) ;

/// @brief Method SetDeltaTimeProvider, addr 0xa4b8910, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method SlideDelta, addr 0xa4bd338, size 0x464, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 SlideDelta(::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, ::UnityEngine::RaycastHit  hit) ;

/// @brief Method Start, addr 0xa4b8b38, size 0xac, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleCrouch, addr 0xa4ba07c, size 0x10, virtual false, abstract: false, final false
inline void ToggleCrouch() ;

/// @brief Method ToggleRun, addr 0xa4ba08c, size 0x14, virtual false, abstract: false, final false
inline void ToggleRun() ;

/// @brief Method TryExitHotspot, addr 0xa4b8e4c, size 0x94, virtual false, abstract: false, final false
inline bool TryExitHotspot(bool  force) ;

/// @brief Method Update, addr 0xa4b8d28, size 0x124, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnchorPoints, addr 0xa4b98e0, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateAnchorPoints() ;

/// @brief Method UpdateCharacterHeight, addr 0xa4b8ee0, size 0x230, virtual false, abstract: false, final false
inline void UpdateCharacterHeight() ;

/// @brief Method UpdateGrounded, addr 0xa4bb02c, size 0x16c, virtual false, abstract: false, final false
inline void UpdateGrounded(bool  forceGrounded) ;

/// @brief Method UpdateVelocity, addr 0xa4b93cc, size 0x14c, virtual false, abstract: false, final false
inline void UpdateVelocity() ;

/// [CompilerGenerated]
/// @brief Method <Rebound>g__ReboundRecursive|148_0, addr 0xa4bbb90, size 0x5b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _Rebound_g__ReboundRecursive_148_0(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, int32_t  bounceStep) ;

constexpr float_t const& __cordl_internal_get__acceleration() const;

constexpr float_t& __cordl_internal_get__acceleration() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__accumulatedDeltaFrame() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__accumulatedDeltaFrame() ;

constexpr float_t const& __cordl_internal_get__airDamping() const;

constexpr float_t& __cordl_internal_get__airDamping() ;

constexpr bool const& __cordl_internal_get__autoUpdateHeight() const;

constexpr bool& __cordl_internal_get__autoUpdateHeight() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get__capsule() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get__capsule() ;

constexpr float_t const& __cordl_internal_get__crouchHeightOffset() const;

constexpr float_t& __cordl_internal_get__crouchHeightOffset() ;

constexpr float_t const& __cordl_internal_get__crouchSpeedFactor() const;

constexpr float_t& __cordl_internal_get__crouchSpeedFactor() ;

constexpr float_t const& __cordl_internal_get__defaultHeight() const;

constexpr float_t& __cordl_internal_get__defaultHeight() ;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__deferredLocomotionEvent() const;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__deferredLocomotionEvent() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__deltaTimeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__deltaTimeProvider() ;

constexpr ::UnityEngine::YieldInstruction* const& __cordl_internal_get__endOfFrame() const;

constexpr ::UnityEngine::YieldInstruction*& __cordl_internal_get__endOfFrame() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__endOfFrameRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__endOfFrameRoutine() ;

constexpr float_t const& __cordl_internal_get__exitHotspotDistance() const;

constexpr float_t& __cordl_internal_get__exitHotspotDistance() ;

constexpr float_t const& __cordl_internal_get__gravityFactor() const;

constexpr float_t& __cordl_internal_get__gravityFactor() ;

constexpr float_t const& __cordl_internal_get__groundDamping() const;

constexpr float_t& __cordl_internal_get__groundDamping() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get__groundHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get__groundHit() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__headHotspotCenter() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__headHotspotCenter() ;

constexpr float_t const& __cordl_internal_get__heightOffset() const;

constexpr float_t& __cordl_internal_get__heightOffset() ;

constexpr bool const& __cordl_internal_get__isCrouching() const;

constexpr bool& __cordl_internal_get__isCrouching() ;

constexpr bool const& __cordl_internal_get__isGrounded() const;

constexpr bool& __cordl_internal_get__isGrounded() ;

constexpr bool const& __cordl_internal_get__isHeadInHotspot() const;

constexpr bool& __cordl_internal_get__isHeadInHotspot() ;

constexpr bool const& __cordl_internal_get__isRunning() const;

constexpr bool& __cordl_internal_get__isRunning() ;

constexpr float_t const& __cordl_internal_get__jumpDamping() const;

constexpr float_t& __cordl_internal_get__jumpDamping() ;

constexpr float_t const& __cordl_internal_get__jumpForce() const;

constexpr float_t& __cordl_internal_get__jumpForce() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__logicalFeet() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__logicalFeet() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__logicalHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__logicalHead() ;

constexpr int32_t const& __cordl_internal_get__maxReboundSteps() const;

constexpr int32_t& __cordl_internal_get__maxReboundSteps() ;

constexpr float_t const& __cordl_internal_get__maxSlopeAngle() const;

constexpr float_t& __cordl_internal_get__maxSlopeAngle() ;

constexpr float_t const& __cordl_internal_get__maxStep() const;

constexpr float_t& __cordl_internal_get__maxStep() ;

constexpr float_t const& __cordl_internal_get__maxWallPenetrationDistance() const;

constexpr float_t& __cordl_internal_get__maxWallPenetrationDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerEyes() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerEyes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerOrigin() ;

constexpr float_t const& __cordl_internal_get__runningSpeedFactor() const;

constexpr float_t& __cordl_internal_get__runningSpeedFactor() ;

constexpr float_t const& __cordl_internal_get__skinWidth() const;

constexpr float_t& __cordl_internal_get__skinWidth() ;

constexpr float_t const& __cordl_internal_get__speedFactor() const;

constexpr float_t& __cordl_internal_get__speedFactor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity() ;

constexpr bool const& __cordl_internal_get__velocityDisabled() const;

constexpr bool& __cordl_internal_get__velocityDisabled() ;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& __cordl_internal_get__whenLocomotionEventHandled() const;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& __cordl_internal_get__whenLocomotionEventHandled() ;

constexpr void __cordl_internal_set__acceleration(float_t  value) ;

constexpr void __cordl_internal_set__accumulatedDeltaFrame(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__airDamping(float_t  value) ;

constexpr void __cordl_internal_set__autoUpdateHeight(bool  value) ;

constexpr void __cordl_internal_set__capsule(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set__crouchHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__crouchSpeedFactor(float_t  value) ;

constexpr void __cordl_internal_set__defaultHeight(float_t  value) ;

constexpr void __cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value) ;

constexpr void __cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__exitHotspotDistance(float_t  value) ;

constexpr void __cordl_internal_set__gravityFactor(float_t  value) ;

constexpr void __cordl_internal_set__groundDamping(float_t  value) ;

constexpr void __cordl_internal_set__groundHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set__headHotspotCenter(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__heightOffset(float_t  value) ;

constexpr void __cordl_internal_set__isCrouching(bool  value) ;

constexpr void __cordl_internal_set__isGrounded(bool  value) ;

constexpr void __cordl_internal_set__isHeadInHotspot(bool  value) ;

constexpr void __cordl_internal_set__isRunning(bool  value) ;

constexpr void __cordl_internal_set__jumpDamping(float_t  value) ;

constexpr void __cordl_internal_set__jumpForce(float_t  value) ;

constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__logicalFeet(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__logicalHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__maxReboundSteps(int32_t  value) ;

constexpr void __cordl_internal_set__maxSlopeAngle(float_t  value) ;

constexpr void __cordl_internal_set__maxStep(float_t  value) ;

constexpr void __cordl_internal_set__maxWallPenetrationDistance(float_t  value) ;

constexpr void __cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__runningSpeedFactor(float_t  value) ;

constexpr void __cordl_internal_set__skinWidth(float_t  value) ;

constexpr void __cordl_internal_set__speedFactor(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__velocityDisabled(bool  value) ;

constexpr void __cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method .ctor, addr 0xa4bd7e4, size 0x294, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionEventHandled, addr 0xa4b8918, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method get_Acceleration, addr 0xa4b88a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Acceleration() ;

/// @brief Method get_AirDamping, addr 0xa4b88d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_AirDamping() ;

/// @brief Method get_AutoUpdateHeight, addr 0xa4b8810, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoUpdateHeight() ;

/// @brief Method get_ControllingPlayer, addr 0xa4b8aa0, size 0x98, virtual false, abstract: false, final false
inline bool get_ControllingPlayer() ;

/// @brief Method get_CrouchHeightOffset, addr 0xa4b8860, size 0x8, virtual false, abstract: false, final false
inline float_t get_CrouchHeightOffset() ;

/// @brief Method get_CrouchSpeedFactor, addr 0xa4b8880, size 0x8, virtual false, abstract: false, final false
inline float_t get_CrouchSpeedFactor() ;

/// @brief Method get_DefaultHeight, addr 0xa4b8840, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefaultHeight() ;

/// @brief Method get_ExitHotspotDistance, addr 0xa4b8800, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExitHotspotDistance() ;

/// @brief Method get_GravityFactor, addr 0xa4b88f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_GravityFactor() ;

/// @brief Method get_GroundDamping, addr 0xa4b88b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_GroundDamping() ;

/// @brief Method get_HeightOffset, addr 0xa4b8850, size 0x8, virtual false, abstract: false, final false
inline float_t get_HeightOffset() ;

/// @brief Method get_IgnoringVelocity, addr 0xa4b8a80, size 0x20, virtual false, abstract: false, final false
inline bool get_IgnoringVelocity() ;

/// @brief Method get_IsCrouching, addr 0xa4b8a78, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCrouching() ;

/// @brief Method get_IsGrounded, addr 0xa4b8a68, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Method get_IsRunning, addr 0xa4b8a70, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_JumpDamping, addr 0xa4b88c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_JumpDamping() ;

/// @brief Method get_JumpForce, addr 0xa4b88e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_JumpForce() ;

/// @brief Method get_LayerMask, addr 0xa4b87e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_LayerMask() ;

/// @brief Method get_MaxReboundSteps, addr 0xa4b8900, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxReboundSteps() ;

/// @brief Method get_MaxSlopeAngle, addr 0xa4b8820, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSlopeAngle() ;

/// @brief Method get_MaxStep, addr 0xa4b8830, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxStep() ;

/// @brief Method get_MaxWallPenetrationDistance, addr 0xa4b87f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxWallPenetrationDistance() ;

/// @brief Method get_RunningSpeedFactor, addr 0xa4b8890, size 0x8, virtual false, abstract: false, final false
inline float_t get_RunningSpeedFactor() ;

/// @brief Method get_SkinWidth, addr 0xa4b87d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_SkinWidth() ;

/// @brief Method get_SpeedFactor, addr 0xa4b8870, size 0x8, virtual false, abstract: false, final false
inline float_t get_SpeedFactor() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept;

/// @brief Method remove_WhenLocomotionEventHandled, addr 0xa4b89c0, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method set_Acceleration, addr 0xa4b88a8, size 0x8, virtual false, abstract: false, final false
inline void set_Acceleration(float_t  value) ;

/// @brief Method set_AirDamping, addr 0xa4b88d8, size 0x8, virtual false, abstract: false, final false
inline void set_AirDamping(float_t  value) ;

/// @brief Method set_AutoUpdateHeight, addr 0xa4b8818, size 0x8, virtual false, abstract: false, final false
inline void set_AutoUpdateHeight(bool  value) ;

/// @brief Method set_CrouchHeightOffset, addr 0xa4b8868, size 0x8, virtual false, abstract: false, final false
inline void set_CrouchHeightOffset(float_t  value) ;

/// @brief Method set_CrouchSpeedFactor, addr 0xa4b8888, size 0x8, virtual false, abstract: false, final false
inline void set_CrouchSpeedFactor(float_t  value) ;

/// @brief Method set_DefaultHeight, addr 0xa4b8848, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultHeight(float_t  value) ;

/// @brief Method set_ExitHotspotDistance, addr 0xa4b8808, size 0x8, virtual false, abstract: false, final false
inline void set_ExitHotspotDistance(float_t  value) ;

/// @brief Method set_GravityFactor, addr 0xa4b88f8, size 0x8, virtual false, abstract: false, final false
inline void set_GravityFactor(float_t  value) ;

/// @brief Method set_GroundDamping, addr 0xa4b88b8, size 0x8, virtual false, abstract: false, final false
inline void set_GroundDamping(float_t  value) ;

/// @brief Method set_HeightOffset, addr 0xa4b8858, size 0x8, virtual false, abstract: false, final false
inline void set_HeightOffset(float_t  value) ;

/// @brief Method set_JumpDamping, addr 0xa4b88c8, size 0x8, virtual false, abstract: false, final false
inline void set_JumpDamping(float_t  value) ;

/// @brief Method set_JumpForce, addr 0xa4b88e8, size 0x8, virtual false, abstract: false, final false
inline void set_JumpForce(float_t  value) ;

/// @brief Method set_LayerMask, addr 0xa4b87e8, size 0x8, virtual false, abstract: false, final false
inline void set_LayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_MaxReboundSteps, addr 0xa4b8908, size 0x8, virtual false, abstract: false, final false
inline void set_MaxReboundSteps(int32_t  value) ;

/// @brief Method set_MaxSlopeAngle, addr 0xa4b8828, size 0x8, virtual false, abstract: false, final false
inline void set_MaxSlopeAngle(float_t  value) ;

/// @brief Method set_MaxStep, addr 0xa4b8838, size 0x8, virtual false, abstract: false, final false
inline void set_MaxStep(float_t  value) ;

/// @brief Method set_MaxWallPenetrationDistance, addr 0xa4b87f8, size 0x8, virtual false, abstract: false, final false
inline void set_MaxWallPenetrationDistance(float_t  value) ;

/// @brief Method set_RunningSpeedFactor, addr 0xa4b8898, size 0x8, virtual false, abstract: false, final false
inline void set_RunningSpeedFactor(float_t  value) ;

/// @brief Method set_SkinWidth, addr 0xa4b87d8, size 0x8, virtual false, abstract: false, final false
inline void set_SkinWidth(float_t  value) ;

/// @brief Method set_SpeedFactor, addr 0xa4b8878, size 0x8, virtual false, abstract: false, final false
inline void set_SpeedFactor(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleLocomotionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleLocomotionHandler(CapsuleLocomotionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleLocomotionHandler(CapsuleLocomotionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16244};

/// @brief Field _cornerHitEpsilon offset 0xffffffff size 0x4
static constexpr float_t  _cornerHitEpsilon{static_cast<float_t>(0.001f)};

/// @brief Field _sellionToBackOfHeadHalf offset 0xffffffff size 0x4
static constexpr float_t  _sellionToBackOfHeadHalf{static_cast<float_t>(0.0965f)};

/// @brief Field _sellionToTopOfHead offset 0xffffffff size 0x4
static constexpr float_t  _sellionToTopOfHead{static_cast<float_t>(0.1085f)};

/// [Header("Character")]
/// [SerializeField]
/// [Tooltip("Capsule collider that represents the character and will be moved by the locomotor.")]
/// @brief Field _capsule, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ____capsule;

/// [SerializeField]
/// [Min(0)]
/// [Tooltip("Extra offset added to the radius of the capsule for soft collisions.")]
/// @brief Field _skinWidth, offset: 0x28, size: 0x4, def value: None
 float_t  ____skinWidth;

/// [SerializeField]
/// [Tooltip("LayerMask check for collisions when moving.")]
/// @brief Field _layerMask, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask;

/// [Header("VR Player (Optional)")]
/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. Root of the actual VR player so it can be sync with with capsule. If you provided a _playerEyes you must also provide a _playerOrigin.")]
/// @brief Field _playerOrigin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerOrigin;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. Eyes of the actual VR player so it can be sync with the capsule. If you provided a _playerOrigin you must also provide a _playerEyes.")]
/// @brief Field _playerEyes, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerEyes;

/// [SerializeField]
/// [Tooltip("After the player penetrates the head inside a collider (for example a wall), the maximum distance before the player gets reset to the capsule position when trying to move synthetically.")]
/// @brief Field _maxWallPenetrationDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ____maxWallPenetrationDistance;

/// [SerializeField]
/// [Tooltip("After using LocomotionEvent.TranslationType.AbsoluteEyeLevel that disables the ground checks. What is the maximum deviation of the player before the physics are re-enabled.")]
/// @brief Field _exitHotspotDistance, offset: 0x44, size: 0x4, def value: None
 float_t  ____exitHotspotDistance;

/// [SerializeField]
/// [Tooltip("When _playerOrigin and _playerEyes are present. This will force the capsule height to update using the actual player height, instead of using _defaultHeight")]
/// @brief Field _autoUpdateHeight, offset: 0x48, size: 0x1, def value: None
 bool  ____autoUpdateHeight;

/// [Header("Parameters")]
/// [SerializeField]
/// [Range(0, 90)]
/// [Tooltip("Max climbable slope angle in degrees.")]
/// @brief Field _maxSlopeAngle, offset: 0x4c, size: 0x4, def value: None
 float_t  ____maxSlopeAngle;

/// [SerializeField]
/// [Min(0)]
/// [Tooltip("Max climbable height for steps.")]
/// @brief Field _maxStep, offset: 0x50, size: 0x4, def value: None
 float_t  ____maxStep;

/// [SerializeField]
/// [Tooltip("Height of the character capsule when standing normally. This might be overriden by _autoUpdateHeight")]
/// @brief Field _defaultHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ____defaultHeight;

/// [SerializeField]
/// [Tooltip("General height offset applied to the capsule.")]
/// @brief Field _heightOffset, offset: 0x58, size: 0x4, def value: None
 float_t  ____heightOffset;

/// [SerializeField]
/// [Tooltip("Height offset added while crouching.")]
/// @brief Field _crouchHeightOffset, offset: 0x5c, size: 0x4, def value: None
 float_t  ____crouchHeightOffset;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while moving normally.")]
/// @brief Field _speedFactor, offset: 0x60, size: 0x4, def value: None
 float_t  ____speedFactor;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while crouching.")]
/// @brief Field _crouchSpeedFactor, offset: 0x64, size: 0x4, def value: None
 float_t  ____crouchSpeedFactor;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while running.")]
/// @brief Field _runningSpeedFactor, offset: 0x68, size: 0x4, def value: None
 float_t  ____runningSpeedFactor;

/// [SerializeField]
/// [Tooltip("The rate of acceleration during movement.")]
/// @brief Field _acceleration, offset: 0x6c, size: 0x4, def value: None
 float_t  ____acceleration;

/// [SerializeField]
/// [Tooltip("The rate of damping on movement while grounded.")]
/// @brief Field _groundDamping, offset: 0x70, size: 0x4, def value: None
 float_t  ____groundDamping;

/// [SerializeField]
/// [Tooltip("The rate of damping on the vertical movement while jumping.")]
/// @brief Field _jumpDamping, offset: 0x74, size: 0x4, def value: None
 float_t  ____jumpDamping;

/// [SerializeField]
/// [Tooltip("The rate of damping on the horizontal movement while in the air.")]
/// @brief Field _airDamping, offset: 0x78, size: 0x4, def value: None
 float_t  ____airDamping;

/// [SerializeField]
/// [Tooltip("The force applied to the character when jumping.")]
/// @brief Field _jumpForce, offset: 0x7c, size: 0x4, def value: None
 float_t  ____jumpForce;

/// [SerializeField]
/// [Tooltip("Modifies the strength of gravity.")]
/// @brief Field _gravityFactor, offset: 0x80, size: 0x4, def value: None
 float_t  ____gravityFactor;

/// [SerializeField]
/// [Min(1)]
/// [Tooltip("Max iterations for sliding the delta movement after colliding with an obstacle.")]
/// @brief Field _maxReboundSteps, offset: 0x84, size: 0x4, def value: None
 int32_t  ____maxReboundSteps;

/// [SerializeField]
/// [Tooltip("When Velocity is ignored the character will not try to catch up to the player and the character won\'t slide or fall.It is preferred to re-enable the movement by calling EnableMovement instead of setting this variable to false directly.")]
/// @brief Field _velocityDisabled, offset: 0x88, size: 0x1, def value: None
 bool  ____velocityDisabled;

/// [Header("Anchors")]
/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. This transform pose will be updated with the pose of the character head.")]
/// @brief Field _logicalHead, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____logicalHead;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Optional. This transform pose will be updated with the pose of the character feet.")]
/// @brief Field _logicalFeet, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____logicalFeet;

/// @brief Field _deltaTimeProvider, offset: 0xa0, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

/// @brief Field _whenLocomotionEventHandled, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  ____whenLocomotionEventHandled;

/// @brief Field _accumulatedDeltaFrame, offset: 0xb0, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____accumulatedDeltaFrame;

/// @brief Field _velocity, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____velocity;

/// @brief Field _isHeadInHotspot, offset: 0xd8, size: 0x1, def value: None
 bool  ____isHeadInHotspot;

/// @brief Field _headHotspotCenter, offset: 0xe0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____headHotspotCenter;

/// @brief Field _groundHit, offset: 0xf0, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ____groundHit;

/// @brief Field _isGrounded, offset: 0x11c, size: 0x1, def value: None
 bool  ____isGrounded;

/// @brief Field _isRunning, offset: 0x11d, size: 0x1, def value: None
 bool  ____isRunning;

/// @brief Field _isCrouching, offset: 0x11e, size: 0x1, def value: None
 bool  ____isCrouching;

/// @brief Field _deferredLocomotionEvent, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____deferredLocomotionEvent;

/// @brief Field _endOfFrame, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::YieldInstruction*  ____endOfFrame;

/// @brief Field _endOfFrameRoutine, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____endOfFrameRoutine;

/// @brief Field _started, offset: 0x138, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____capsule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____skinWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____layerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____playerOrigin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____playerEyes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____maxWallPenetrationDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____exitHotspotDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____autoUpdateHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____maxSlopeAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____maxStep) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____defaultHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____heightOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____crouchHeightOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____speedFactor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____crouchSpeedFactor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____runningSpeedFactor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____acceleration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____groundDamping) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____jumpDamping) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____airDamping) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____jumpForce) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____gravityFactor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____maxReboundSteps) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____velocityDisabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____logicalHead) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____logicalFeet) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____deltaTimeProvider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____whenLocomotionEventHandled) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____accumulatedDeltaFrame) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____velocity) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____isHeadInHotspot) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____headHotspotCenter) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____groundHit) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____isGrounded) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____isRunning) == 0x11d, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____isCrouching) == 0x11e, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____deferredLocomotionEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____endOfFrame) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____endOfFrameRoutine) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler, ____started) == 0x138, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler) == 0x140, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.CapsuleLocomotionHandler/<EndOfFrameCoroutine>d__165
class CORDL_TYPE CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4bdaf8, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4bdb78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4bdb80, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4bdbb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4bdaf4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4bd79c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165(CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165(CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16243};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler__EndOfFrameCoroutine_d__165) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.CapsuleLocomotionHandler/<>c
class CORDL_TYPE CapsuleLocomotionHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*  __9;

/// @brief Field <>9__172_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__172_0, put=setStaticF___9__172_0)) ::System::Func_1<float_t>*  __9__172_0;

/// @brief Field <>9__172_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__172_1, put=setStaticF___9__172_1)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  __9__172_1;

static inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c* New_ctor() ;

/// @brief Method <.ctor>b__172_0, addr 0xa4bdae8, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__172_0() ;

/// @brief Method <.ctor>b__172_1, addr 0xa4bdaf0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__172_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_) ;

/// @brief Method .ctor, addr 0xa4bdae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__172_0() ;

static inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* getStaticF___9__172_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c*  value) ;

static inline void setStaticF___9__172_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__172_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleLocomotionHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleLocomotionHandler___c(CapsuleLocomotionHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleLocomotionHandler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleLocomotionHandler___c(CapsuleLocomotionHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::CapsuleLocomotionHandler___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
