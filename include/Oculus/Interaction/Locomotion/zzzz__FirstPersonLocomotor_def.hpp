#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/FirstPersonLocomotor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FirstPersonLocomotor)
namespace GlobalNamespace {
struct LocomotionActionsBroadcaster_LocomotionAction;
}
namespace Oculus::Interaction::Locomotion {
class CharacterController;
}
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor__EndOfFrameCoroutine_d__150;
}
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor___c;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction {
class Context;
}
namespace Oculus::Interaction {
class IDeltaTimeConsumer;
}
namespace Oculus::Interaction {
class ITimeConsumer;
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
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Pose;
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
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor;
}
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor__EndOfFrameCoroutine_d__150;
}
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::FirstPersonLocomotor*);
MARK_REF_T(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*);
MARK_REF_T(::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FirstPersonLocomotor*, "Oculus.Interaction.Locomotion", "FirstPersonLocomotor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150*, "Oculus.Interaction.Locomotion", "FirstPersonLocomotor/<EndOfFrameCoroutine>d__150");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*, "Oculus.Interaction.Locomotion", "FirstPersonLocomotor/<>c");
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FirstPersonLocomotor
class CORDL_TYPE FirstPersonLocomotor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EndOfFrameCoroutine_d__150 = ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150;

using __c = ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c;

 __declspec(property(get=get_Acceleration, put=set_Acceleration)) float_t  Acceleration;

 __declspec(property(get=get_AirDamping, put=set_AirDamping)) float_t  AirDamping;

 __declspec(property(get=get_AutoUpdateHeight, put=set_AutoUpdateHeight)) bool  AutoUpdateHeight;

 __declspec(property(get=get_CoyoteTime, put=set_CoyoteTime)) float_t  CoyoteTime;

 __declspec(property(get=get_CrouchHeightOffset, put=set_CrouchHeightOffset)) float_t  CrouchHeightOffset;

 __declspec(property(get=get_CrouchSpeedFactor, put=set_CrouchSpeedFactor)) float_t  CrouchSpeedFactor;

 __declspec(property(get=get_DefaultHeight, put=set_DefaultHeight)) float_t  DefaultHeight;

 __declspec(property(get=get_ExitHotspotDistance, put=set_ExitHotspotDistance)) float_t  ExitHotspotDistance;

 __declspec(property(get=get_FlattenInputVelocity, put=set_FlattenInputVelocity)) bool  FlattenInputVelocity;

 __declspec(property(get=get_GravityFactor, put=set_GravityFactor)) float_t  GravityFactor;

 __declspec(property(get=get_GroundDamping, put=set_GroundDamping)) float_t  GroundDamping;

 __declspec(property(get=get_HeightOffset, put=set_HeightOffset)) float_t  HeightOffset;

 __declspec(property(get=get_IgnoringVelocity)) bool  IgnoringVelocity;

 __declspec(property(get=get_InputVelocityStabilization, put=set_InputVelocityStabilization)) ::UnityEngine::AnimationCurve*  InputVelocityStabilization;

 __declspec(property(get=get_IsCrouching)) bool  IsCrouching;

 __declspec(property(get=get_IsGrounded)) bool  IsGrounded;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_JumpDamping, put=set_JumpDamping)) float_t  JumpDamping;

 __declspec(property(get=get_JumpForce, put=set_JumpForce)) float_t  JumpForce;

 __declspec(property(get=get_MaxWallPenetrationDistance, put=set_MaxWallPenetrationDistance)) float_t  MaxWallPenetrationDistance;

 __declspec(property(get=get_RunningSpeedFactor, put=set_RunningSpeedFactor)) float_t  RunningSpeedFactor;

 __declspec(property(get=get_SpeedFactor, put=set_SpeedFactor)) float_t  SpeedFactor;

 __declspec(property(get=get_Velocity, put=set_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field _acceleration, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__acceleration, put=__cordl_internal_set__acceleration)) float_t  _acceleration;

/// @brief Field _accumulatedDeltaFrame, offset 0xb0, size 0x1c 
 __declspec(property(get=__cordl_internal_get__accumulatedDeltaFrame, put=__cordl_internal_set__accumulatedDeltaFrame)) ::UnityEngine::Pose  _accumulatedDeltaFrame;

/// @brief Field _airDamping, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__airDamping, put=__cordl_internal_set__airDamping)) float_t  _airDamping;

/// @brief Field _autoUpdateHeight, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoUpdateHeight, put=__cordl_internal_set__autoUpdateHeight)) bool  _autoUpdateHeight;

/// @brief Field _characterController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__characterController, put=__cordl_internal_set__characterController)) ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  _characterController;

/// @brief Field _context, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::UnityW<::Oculus::Interaction::Context>  _context;

/// @brief Field _coyoteTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__coyoteTime, put=__cordl_internal_set__coyoteTime)) float_t  _coyoteTime;

/// @brief Field _crouchHeightOffset, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__crouchHeightOffset, put=__cordl_internal_set__crouchHeightOffset)) float_t  _crouchHeightOffset;

/// @brief Field _crouchSpeedFactor, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__crouchSpeedFactor, put=__cordl_internal_set__crouchSpeedFactor)) float_t  _crouchSpeedFactor;

/// @brief Field _defaultHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultHeight, put=__cordl_internal_set__defaultHeight)) float_t  _defaultHeight;

/// @brief Field _deferredLocomotionEvent, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__deferredLocomotionEvent, put=__cordl_internal_set__deferredLocomotionEvent)) ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _deferredLocomotionEvent;

/// @brief Field _deltaTimeProvider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _endOfFrame, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrame, put=__cordl_internal_set__endOfFrame)) ::UnityEngine::YieldInstruction*  _endOfFrame;

/// @brief Field _endOfFrameRoutine, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrameRoutine, put=__cordl_internal_set__endOfFrameRoutine)) ::UnityEngine::Coroutine*  _endOfFrameRoutine;

/// @brief Field _endedFrameGrounded, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__endedFrameGrounded, put=__cordl_internal_set__endedFrameGrounded)) bool  _endedFrameGrounded;

/// @brief Field _exitHotspotDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__exitHotspotDistance, put=__cordl_internal_set__exitHotspotDistance)) float_t  _exitHotspotDistance;

/// @brief Field _flattenInputVelocity, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__flattenInputVelocity, put=__cordl_internal_set__flattenInputVelocity)) bool  _flattenInputVelocity;

/// @brief Field _gravityFactor, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__gravityFactor, put=__cordl_internal_set__gravityFactor)) float_t  _gravityFactor;

/// @brief Field _groundDamping, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__groundDamping, put=__cordl_internal_set__groundDamping)) float_t  _groundDamping;

/// @brief Field _headHotspotCenter, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__headHotspotCenter, put=__cordl_internal_set__headHotspotCenter)) ::System::Nullable_1<::UnityEngine::Vector3>  _headHotspotCenter;

/// @brief Field _heightOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightOffset, put=__cordl_internal_set__heightOffset)) float_t  _heightOffset;

/// @brief Field _inputVelocityStabilization, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputVelocityStabilization, put=__cordl_internal_set__inputVelocityStabilization)) ::UnityEngine::AnimationCurve*  _inputVelocityStabilization;

/// @brief Field _isCrouching, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCrouching, put=__cordl_internal_set__isCrouching)) bool  _isCrouching;

/// @brief Field _isHeadInHotspot, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHeadInHotspot, put=__cordl_internal_set__isHeadInHotspot)) bool  _isHeadInHotspot;

/// @brief Field _isRunning, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRunning, put=__cordl_internal_set__isRunning)) bool  _isRunning;

/// @brief Field _jumpDamping, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpDamping, put=__cordl_internal_set__jumpDamping)) float_t  _jumpDamping;

/// @brief Field _jumpForce, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpForce, put=__cordl_internal_set__jumpForce)) float_t  _jumpForce;

/// @brief Field _jumpThisFrame, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__jumpThisFrame, put=__cordl_internal_set__jumpThisFrame)) bool  _jumpThisFrame;

/// @brief Field _leftGroundTime, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftGroundTime, put=__cordl_internal_set__leftGroundTime)) float_t  _leftGroundTime;

/// @brief Field _maxStartGroundDistance, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStartGroundDistance, put=__cordl_internal_set__maxStartGroundDistance)) float_t  _maxStartGroundDistance;

/// @brief Field _maxWallPenetrationDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxWallPenetrationDistance, put=__cordl_internal_set__maxWallPenetrationDistance)) float_t  _maxWallPenetrationDistance;

/// @brief Field _playerEyes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerEyes, put=__cordl_internal_set__playerEyes)) ::UnityW<::UnityEngine::Transform>  _playerEyes;

/// @brief Field _playerOrigin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOrigin, put=__cordl_internal_set__playerOrigin)) ::UnityW<::UnityEngine::Transform>  _playerOrigin;

/// @brief Field _runningSpeedFactor, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__runningSpeedFactor, put=__cordl_internal_set__runningSpeedFactor)) float_t  _runningSpeedFactor;

/// @brief Field _speedFactor, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__speedFactor, put=__cordl_internal_set__speedFactor)) float_t  _speedFactor;

/// @brief Field _started, offset 0x112, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeProvider, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _velocity, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocity, put=__cordl_internal_set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Field _velocityDisabled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__velocityDisabled, put=__cordl_internal_set__velocityDisabled)) bool  _velocityDisabled;

/// @brief Field _whenLocomotionEventHandled, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionEventHandled, put=__cordl_internal_set__whenLocomotionEventHandled)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  _whenLocomotionEventHandled;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept;

/// @brief Method AccumulateDelta, addr 0xa4c1908, size 0x14c, virtual false, abstract: false, final false
inline void AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method AddVelocity, addr 0xa4c2b50, size 0x68, virtual false, abstract: false, final false
inline void AddVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method CatchUpCharacterToPlayer, addr 0xa4c1534, size 0x280, virtual false, abstract: false, final false
inline void CatchUpCharacterToPlayer() ;

/// @brief Method CatchUpPlayerToCharacter, addr 0xa4c1ce4, size 0x2a0, virtual false, abstract: false, final false
inline void CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight) ;

/// @brief Method ConsumeDeferredLocomotionEvents, addr 0xa4c1a58, size 0x10c, virtual false, abstract: false, final false
inline void ConsumeDeferredLocomotionEvents() ;

/// @brief Method Crouch, addr 0xa4c20b0, size 0x18, virtual false, abstract: false, final false
inline void Crouch(bool  crouch) ;

/// @brief Method DisableMovement, addr 0xa4c1118, size 0xc, virtual false, abstract: false, final false
inline void DisableMovement() ;

/// @brief Method EnableMovement, addr 0xa4c210c, size 0x98, virtual false, abstract: false, final false
inline void EnableMovement() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Locomotion.FirstPersonLocomotor::<EndOfFrameCoroutine>d__150))]
/// @brief Method EndOfFrameCoroutine, addr 0xa4c1160, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EndOfFrameCoroutine() ;

/// @brief Method FlattenForwardOffset, addr 0xa4c281c, size 0x334, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion FlattenForwardOffset(::UnityEngine::Quaternion  rotation) ;

/// @brief Method GetCharacterFeet, addr 0xa4c1c20, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterFeet() ;

/// @brief Method GetCharacterHead, addr 0xa4c2bb8, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterHead() ;

/// @brief Method GetModifiedSpeedFactor, addr 0xa4c3594, size 0x84, virtual false, abstract: false, final false
inline float_t GetModifiedSpeedFactor() ;

/// @brief Method GetPlayerHead, addr 0xa4c22f8, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerHead() ;

/// @brief Method GetPlayerHeadTop, addr 0xa4c3618, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerHeadTop() ;

/// @brief Method HandleDeferredLocomotionEvent, addr 0xa4c2f28, size 0x1e4, virtual false, abstract: false, final false
inline void HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method HandleLocomotionEvent, addr 0xa4c2368, size 0x4b4, virtual true, abstract: false, final true
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method InjectAllFirstPersonLocomotor, addr 0xa4c36c4, size 0x44, virtual false, abstract: false, final false
inline void InjectAllFirstPersonLocomotor(::Oculus::Interaction::Locomotion::CharacterController*  characterController, ::UnityEngine::Transform*  playerEyes, ::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method InjectCharacterController, addr 0xa4c3708, size 0x8, virtual false, abstract: false, final false
inline void InjectCharacterController(::Oculus::Interaction::Locomotion::CharacterController*  characterController) ;

/// @brief Method InjectOptionalContext, addr 0xa4c3728, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalContext(::Oculus::Interaction::Context*  context) ;

/// @brief Method InjectOptionalMaxStartGroundDistance, addr 0xa4c3720, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMaxStartGroundDistance(float_t  maxStartGroundDistance) ;

/// @brief Method InjectPlayerEyes, addr 0xa4c3710, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerEyes(::UnityEngine::Transform*  playerEyes) ;

/// @brief Method InjectPlayerOrigin, addr 0xa4c3718, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method IsHeadFarFromPoint, addr 0xa4c2c88, size 0x144, virtual false, abstract: false, final false
inline bool IsHeadFarFromPoint(::UnityEngine::Vector3  point, float_t  maxDistance) ;

/// @brief Method Jump, addr 0xa4c1f84, size 0x12c, virtual false, abstract: false, final false
inline void Jump() ;

/// @brief Method LastUpdate, addr 0xa4c1b64, size 0xbc, virtual true, abstract: false, final false
inline void LastUpdate() ;

/// @brief Method LateUpdate, addr 0xa4c1a54, size 0x4, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveAbsoluteFeet, addr 0xa4c310c, size 0xb4, virtual false, abstract: false, final false
inline void MoveAbsoluteFeet(::UnityEngine::Vector3  target) ;

/// @brief Method MoveAbsoluteHead, addr 0xa4c31c0, size 0xf0, virtual false, abstract: false, final false
inline void MoveAbsoluteHead(::UnityEngine::Vector3  target) ;

/// @brief Method MoveRelative, addr 0xa4c32b0, size 0xbc, virtual false, abstract: false, final false
inline void MoveRelative(::UnityEngine::Vector3  offset) ;

static inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c11cc, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c1124, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetPlayerToCharacter, addr 0xa4c21a4, size 0x154, virtual false, abstract: false, final false
inline void ResetPlayerToCharacter() ;

/// @brief Method RotateAbsolute, addr 0xa4c336c, size 0x18, virtual false, abstract: false, final false
inline void RotateAbsolute(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateRelative, addr 0xa4c3384, size 0xd4, virtual false, abstract: false, final false
inline void RotateRelative(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateVelocity, addr 0xa4c3458, size 0x13c, virtual false, abstract: false, final false
inline void RotateVelocity(::UnityEngine::Quaternion  target) ;

/// @brief Method Run, addr 0xa4c20ec, size 0x20, virtual false, abstract: false, final false
inline void Run(bool  run) ;

/// @brief Method SetDeltaTimeProvider, addr 0xa4c0ef8, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method SetTimeProvider, addr 0xa4c0f00, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4c10b8, size 0x60, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleCrouch, addr 0xa4c20c8, size 0x10, virtual false, abstract: false, final false
inline void ToggleCrouch() ;

/// @brief Method ToggleRun, addr 0xa4c20d8, size 0x14, virtual false, abstract: false, final false
inline void ToggleRun() ;

/// @brief Method TryExitHotspot, addr 0xa4c13a8, size 0xf0, virtual false, abstract: false, final false
inline bool TryExitHotspot(bool  force) ;

/// @brief Method TryPerformLocomotionActions, addr 0xa4c2e50, size 0xd8, virtual false, abstract: false, final false
inline bool TryPerformLocomotionActions(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action) ;

/// @brief Method Update, addr 0xa4c1268, size 0x140, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCharacterHeight, addr 0xa4c1498, size 0x9c, virtual false, abstract: false, final false
inline void UpdateCharacterHeight() ;

/// @brief Method UpdateVelocity, addr 0xa4c17b4, size 0x154, virtual false, abstract: false, final false
inline void UpdateVelocity() ;

constexpr float_t const& __cordl_internal_get__acceleration() const;

constexpr float_t& __cordl_internal_get__acceleration() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__accumulatedDeltaFrame() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__accumulatedDeltaFrame() ;

constexpr float_t const& __cordl_internal_get__airDamping() const;

constexpr float_t& __cordl_internal_get__airDamping() ;

constexpr bool const& __cordl_internal_get__autoUpdateHeight() const;

constexpr bool& __cordl_internal_get__autoUpdateHeight() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController> const& __cordl_internal_get__characterController() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>& __cordl_internal_get__characterController() ;

constexpr ::UnityW<::Oculus::Interaction::Context> const& __cordl_internal_get__context() const;

constexpr ::UnityW<::Oculus::Interaction::Context>& __cordl_internal_get__context() ;

constexpr float_t const& __cordl_internal_get__coyoteTime() const;

constexpr float_t& __cordl_internal_get__coyoteTime() ;

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

constexpr bool const& __cordl_internal_get__endedFrameGrounded() const;

constexpr bool& __cordl_internal_get__endedFrameGrounded() ;

constexpr float_t const& __cordl_internal_get__exitHotspotDistance() const;

constexpr float_t& __cordl_internal_get__exitHotspotDistance() ;

constexpr bool const& __cordl_internal_get__flattenInputVelocity() const;

constexpr bool& __cordl_internal_get__flattenInputVelocity() ;

constexpr float_t const& __cordl_internal_get__gravityFactor() const;

constexpr float_t& __cordl_internal_get__gravityFactor() ;

constexpr float_t const& __cordl_internal_get__groundDamping() const;

constexpr float_t& __cordl_internal_get__groundDamping() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__headHotspotCenter() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__headHotspotCenter() ;

constexpr float_t const& __cordl_internal_get__heightOffset() const;

constexpr float_t& __cordl_internal_get__heightOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__inputVelocityStabilization() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__inputVelocityStabilization() ;

constexpr bool const& __cordl_internal_get__isCrouching() const;

constexpr bool& __cordl_internal_get__isCrouching() ;

constexpr bool const& __cordl_internal_get__isHeadInHotspot() const;

constexpr bool& __cordl_internal_get__isHeadInHotspot() ;

constexpr bool const& __cordl_internal_get__isRunning() const;

constexpr bool& __cordl_internal_get__isRunning() ;

constexpr float_t const& __cordl_internal_get__jumpDamping() const;

constexpr float_t& __cordl_internal_get__jumpDamping() ;

constexpr float_t const& __cordl_internal_get__jumpForce() const;

constexpr float_t& __cordl_internal_get__jumpForce() ;

constexpr bool const& __cordl_internal_get__jumpThisFrame() const;

constexpr bool& __cordl_internal_get__jumpThisFrame() ;

constexpr float_t const& __cordl_internal_get__leftGroundTime() const;

constexpr float_t& __cordl_internal_get__leftGroundTime() ;

constexpr float_t const& __cordl_internal_get__maxStartGroundDistance() const;

constexpr float_t& __cordl_internal_get__maxStartGroundDistance() ;

constexpr float_t const& __cordl_internal_get__maxWallPenetrationDistance() const;

constexpr float_t& __cordl_internal_get__maxWallPenetrationDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerEyes() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerEyes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerOrigin() ;

constexpr float_t const& __cordl_internal_get__runningSpeedFactor() const;

constexpr float_t& __cordl_internal_get__runningSpeedFactor() ;

constexpr float_t const& __cordl_internal_get__speedFactor() const;

constexpr float_t& __cordl_internal_get__speedFactor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

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

constexpr void __cordl_internal_set__characterController(::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  value) ;

constexpr void __cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value) ;

constexpr void __cordl_internal_set__coyoteTime(float_t  value) ;

constexpr void __cordl_internal_set__crouchHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__crouchSpeedFactor(float_t  value) ;

constexpr void __cordl_internal_set__defaultHeight(float_t  value) ;

constexpr void __cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value) ;

constexpr void __cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__endedFrameGrounded(bool  value) ;

constexpr void __cordl_internal_set__exitHotspotDistance(float_t  value) ;

constexpr void __cordl_internal_set__flattenInputVelocity(bool  value) ;

constexpr void __cordl_internal_set__gravityFactor(float_t  value) ;

constexpr void __cordl_internal_set__groundDamping(float_t  value) ;

constexpr void __cordl_internal_set__headHotspotCenter(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__heightOffset(float_t  value) ;

constexpr void __cordl_internal_set__inputVelocityStabilization(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__isCrouching(bool  value) ;

constexpr void __cordl_internal_set__isHeadInHotspot(bool  value) ;

constexpr void __cordl_internal_set__isRunning(bool  value) ;

constexpr void __cordl_internal_set__jumpDamping(float_t  value) ;

constexpr void __cordl_internal_set__jumpForce(float_t  value) ;

constexpr void __cordl_internal_set__jumpThisFrame(bool  value) ;

constexpr void __cordl_internal_set__leftGroundTime(float_t  value) ;

constexpr void __cordl_internal_set__maxStartGroundDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxWallPenetrationDistance(float_t  value) ;

constexpr void __cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__runningSpeedFactor(float_t  value) ;

constexpr void __cordl_internal_set__speedFactor(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__velocityDisabled(bool  value) ;

constexpr void __cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method .ctor, addr 0xa4c3730, size 0x340, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionEventHandled, addr 0xa4c0f08, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method get_Acceleration, addr 0xa4c0e68, size 0x8, virtual false, abstract: false, final false
inline float_t get_Acceleration() ;

/// @brief Method get_AirDamping, addr 0xa4c0e98, size 0x8, virtual false, abstract: false, final false
inline float_t get_AirDamping() ;

/// @brief Method get_AutoUpdateHeight, addr 0xa4c0df8, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoUpdateHeight() ;

/// @brief Method get_CoyoteTime, addr 0xa4c0ec8, size 0x8, virtual false, abstract: false, final false
inline float_t get_CoyoteTime() ;

/// @brief Method get_CrouchHeightOffset, addr 0xa4c0e28, size 0x8, virtual false, abstract: false, final false
inline float_t get_CrouchHeightOffset() ;

/// @brief Method get_CrouchSpeedFactor, addr 0xa4c0e48, size 0x8, virtual false, abstract: false, final false
inline float_t get_CrouchSpeedFactor() ;

/// @brief Method get_DefaultHeight, addr 0xa4c0e08, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefaultHeight() ;

/// @brief Method get_ExitHotspotDistance, addr 0xa4c0de8, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExitHotspotDistance() ;

/// @brief Method get_FlattenInputVelocity, addr 0xa4c0ed8, size 0x8, virtual false, abstract: false, final false
inline bool get_FlattenInputVelocity() ;

/// @brief Method get_GravityFactor, addr 0xa4c0eb8, size 0x8, virtual false, abstract: false, final false
inline float_t get_GravityFactor() ;

/// @brief Method get_GroundDamping, addr 0xa4c0e78, size 0x8, virtual false, abstract: false, final false
inline float_t get_GroundDamping() ;

/// @brief Method get_HeightOffset, addr 0xa4c0e18, size 0x8, virtual false, abstract: false, final false
inline float_t get_HeightOffset() ;

/// @brief Method get_IgnoringVelocity, addr 0xa4c1080, size 0x20, virtual false, abstract: false, final false
inline bool get_IgnoringVelocity() ;

/// @brief Method get_InputVelocityStabilization, addr 0xa4c0ee8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_InputVelocityStabilization() ;

/// @brief Method get_IsCrouching, addr 0xa4c1078, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCrouching() ;

/// @brief Method get_IsGrounded, addr 0xa4c1058, size 0x18, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Method get_IsRunning, addr 0xa4c1070, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_JumpDamping, addr 0xa4c0e88, size 0x8, virtual false, abstract: false, final false
inline float_t get_JumpDamping() ;

/// @brief Method get_JumpForce, addr 0xa4c0ea8, size 0x8, virtual false, abstract: false, final false
inline float_t get_JumpForce() ;

/// @brief Method get_MaxWallPenetrationDistance, addr 0xa4c0dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxWallPenetrationDistance() ;

/// @brief Method get_RunningSpeedFactor, addr 0xa4c0e58, size 0x8, virtual false, abstract: false, final false
inline float_t get_RunningSpeedFactor() ;

/// @brief Method get_SpeedFactor, addr 0xa4c0e38, size 0x8, virtual false, abstract: false, final false
inline float_t get_SpeedFactor() ;

/// @brief Method get_Velocity, addr 0xa4c10a0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept;

/// @brief Method remove_WhenLocomotionEventHandled, addr 0xa4c0fb0, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method set_Acceleration, addr 0xa4c0e70, size 0x8, virtual false, abstract: false, final false
inline void set_Acceleration(float_t  value) ;

/// @brief Method set_AirDamping, addr 0xa4c0ea0, size 0x8, virtual false, abstract: false, final false
inline void set_AirDamping(float_t  value) ;

/// @brief Method set_AutoUpdateHeight, addr 0xa4c0e00, size 0x8, virtual false, abstract: false, final false
inline void set_AutoUpdateHeight(bool  value) ;

/// @brief Method set_CoyoteTime, addr 0xa4c0ed0, size 0x8, virtual false, abstract: false, final false
inline void set_CoyoteTime(float_t  value) ;

/// @brief Method set_CrouchHeightOffset, addr 0xa4c0e30, size 0x8, virtual false, abstract: false, final false
inline void set_CrouchHeightOffset(float_t  value) ;

/// @brief Method set_CrouchSpeedFactor, addr 0xa4c0e50, size 0x8, virtual false, abstract: false, final false
inline void set_CrouchSpeedFactor(float_t  value) ;

/// @brief Method set_DefaultHeight, addr 0xa4c0e10, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultHeight(float_t  value) ;

/// @brief Method set_ExitHotspotDistance, addr 0xa4c0df0, size 0x8, virtual false, abstract: false, final false
inline void set_ExitHotspotDistance(float_t  value) ;

/// @brief Method set_FlattenInputVelocity, addr 0xa4c0ee0, size 0x8, virtual false, abstract: false, final false
inline void set_FlattenInputVelocity(bool  value) ;

/// @brief Method set_GravityFactor, addr 0xa4c0ec0, size 0x8, virtual false, abstract: false, final false
inline void set_GravityFactor(float_t  value) ;

/// @brief Method set_GroundDamping, addr 0xa4c0e80, size 0x8, virtual false, abstract: false, final false
inline void set_GroundDamping(float_t  value) ;

/// @brief Method set_HeightOffset, addr 0xa4c0e20, size 0x8, virtual false, abstract: false, final false
inline void set_HeightOffset(float_t  value) ;

/// @brief Method set_InputVelocityStabilization, addr 0xa4c0ef0, size 0x8, virtual false, abstract: false, final false
inline void set_InputVelocityStabilization(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_JumpDamping, addr 0xa4c0e90, size 0x8, virtual false, abstract: false, final false
inline void set_JumpDamping(float_t  value) ;

/// @brief Method set_JumpForce, addr 0xa4c0eb0, size 0x8, virtual false, abstract: false, final false
inline void set_JumpForce(float_t  value) ;

/// @brief Method set_MaxWallPenetrationDistance, addr 0xa4c0de0, size 0x8, virtual false, abstract: false, final false
inline void set_MaxWallPenetrationDistance(float_t  value) ;

/// @brief Method set_RunningSpeedFactor, addr 0xa4c0e60, size 0x8, virtual false, abstract: false, final false
inline void set_RunningSpeedFactor(float_t  value) ;

/// @brief Method set_SpeedFactor, addr 0xa4c0e40, size 0x8, virtual false, abstract: false, final false
inline void set_SpeedFactor(float_t  value) ;

/// @brief Method set_Velocity, addr 0xa4c10ac, size 0xc, virtual false, abstract: false, final false
inline void set_Velocity(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstPersonLocomotor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonLocomotor(FirstPersonLocomotor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonLocomotor(FirstPersonLocomotor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16248};

/// @brief Field _sellionToBackOfHeadHalf offset 0xffffffff size 0x4
static constexpr float_t  _sellionToBackOfHeadHalf{static_cast<float_t>(0.0965f)};

/// @brief Field _sellionToTopOfHead offset 0xffffffff size 0x4
static constexpr float_t  _sellionToTopOfHead{static_cast<float_t>(0.1085f)};

/// [Header("Character")]
/// [SerializeField]
/// [Tooltip("The CharacterController reprensenting the character that is used to move the player around the scene.")]
/// @brief Field _characterController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  ____characterController;

/// [Header("VR Player")]
/// [SerializeField]
/// [Tooltip("Root of the actual VR player so it can be sync with with the CharacterController. If you provided a _playerEyes you must also provide a _playerOrigin.")]
/// @brief Field _playerOrigin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerOrigin;

/// [SerializeField]
/// [Tooltip("Eyes of the actual VR player so it can be sync with the capsule. If you provided a _playerOrigin you must also provide a _playerEyes.")]
/// @brief Field _playerEyes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerEyes;

/// [SerializeField]
/// [Tooltip("After the player penetrates the head inside a collider (for example a wall), the maximum distance before the player gets reset to the capsule position when trying to move synthetically.")]
/// @brief Field _maxWallPenetrationDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____maxWallPenetrationDistance;

/// [SerializeField]
/// [Tooltip("After using LocomotionEvent.TranslationType.AbsoluteEyeLevel that disables the ground checks. What is the maximum deviation of the player before the physics are re-enabled.")]
/// @brief Field _exitHotspotDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____exitHotspotDistance;

/// [SerializeField]
/// [Tooltip("When _playerOrigin and _playerEyes are present. This will force the capsule height to update using the actual player height, instead of using _defaultHeight")]
/// @brief Field _autoUpdateHeight, offset: 0x40, size: 0x1, def value: None
 bool  ____autoUpdateHeight;

/// [Header("Parameters")]
/// [SerializeField]
/// [Tooltip("Height of the character capsule when standing normally. This might be overriden by _autoUpdateHeight")]
/// @brief Field _defaultHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ____defaultHeight;

/// [SerializeField]
/// [Tooltip("General height offset applied to the capsule.")]
/// @brief Field _heightOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ____heightOffset;

/// [SerializeField]
/// [Tooltip("Height offset added while crouching.")]
/// @brief Field _crouchHeightOffset, offset: 0x4c, size: 0x4, def value: None
 float_t  ____crouchHeightOffset;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while moving normally.")]
/// @brief Field _speedFactor, offset: 0x50, size: 0x4, def value: None
 float_t  ____speedFactor;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while crouching.")]
/// @brief Field _crouchSpeedFactor, offset: 0x54, size: 0x4, def value: None
 float_t  ____crouchSpeedFactor;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied while running.")]
/// @brief Field _runningSpeedFactor, offset: 0x58, size: 0x4, def value: None
 float_t  ____runningSpeedFactor;

/// [SerializeField]
/// [Tooltip("The rate of acceleration during movement.")]
/// @brief Field _acceleration, offset: 0x5c, size: 0x4, def value: None
 float_t  ____acceleration;

/// [SerializeField]
/// [Tooltip("The rate of damping on movement while grounded.")]
/// @brief Field _groundDamping, offset: 0x60, size: 0x4, def value: None
 float_t  ____groundDamping;

/// [SerializeField]
/// [Tooltip("The rate of damping on the vertical movement while jumping.")]
/// @brief Field _jumpDamping, offset: 0x64, size: 0x4, def value: None
 float_t  ____jumpDamping;

/// [SerializeField]
/// [Tooltip("The rate of damping on the horizontal movement while in the air.")]
/// @brief Field _airDamping, offset: 0x68, size: 0x4, def value: None
 float_t  ____airDamping;

/// [SerializeField]
/// [Tooltip("The force applied to the character when jumping.")]
/// @brief Field _jumpForce, offset: 0x6c, size: 0x4, def value: None
 float_t  ____jumpForce;

/// [SerializeField]
/// [Tooltip("Modifies the strength of gravity.")]
/// @brief Field _gravityFactor, offset: 0x70, size: 0x4, def value: None
 float_t  ____gravityFactor;

/// [SerializeField]
/// [Tooltip("Extra time after starting to fall to allow jumping.")]
/// @brief Field _coyoteTime, offset: 0x74, size: 0x4, def value: None
 float_t  ____coyoteTime;

/// [SerializeField]
/// [Tooltip("Correct the input velocity so it always points in the XZ plane.Use with the _inputVelocityStabilization curve to adjust the range")]
/// @brief Field _flattenInputVelocity, offset: 0x78, size: 0x1, def value: None
 bool  ____flattenInputVelocity;

/// [SerializeField]
/// [Tooltip("When the input velocity points too far up or down the forward direction will be slerped between the .forward and the .up using this curve for the final forward to be stable. x: from -1 to 1, represents the dot product of forward.worldUp. y: 0 represents the real forward, 1 the up direction and -1 the down direction.")]
/// [ConditionalHide("_flattenInputVelocity", true, (Oculus.Interaction.ConditionalHideAttribute::DisplayMode)2)]
/// @brief Field _inputVelocityStabilization, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____inputVelocityStabilization;

/// [SerializeField]
/// [Tooltip("When Velocity is ignored the character will not try to catch up to the player and the character won\'t slide or fall.It is preferred to re-enable the movement by calling EnableMovement instead of setting this variable to false directly.")]
/// @brief Field _velocityDisabled, offset: 0x88, size: 0x1, def value: None
 bool  ____velocityDisabled;

/// [SerializeField]
/// [Optional]
/// [Min(-1)]
/// [Tooltip("If no ground is detected below this distance in meters on Start, it will disable the velocity to prevent falling. Negative numbers disable this behavior.")]
/// @brief Field _maxStartGroundDistance, offset: 0x8c, size: 0x4, def value: None
 float_t  ____maxStartGroundDistance;

/// [SerializeField]
/// [Optional]
/// @brief Field _context, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Context>  ____context;

/// @brief Field _deltaTimeProvider, offset: 0x98, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

/// @brief Field _timeProvider, offset: 0xa0, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

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

/// @brief Field _leftGroundTime, offset: 0xf0, size: 0x4, def value: None
 float_t  ____leftGroundTime;

/// @brief Field _isRunning, offset: 0xf4, size: 0x1, def value: None
 bool  ____isRunning;

/// @brief Field _isCrouching, offset: 0xf5, size: 0x1, def value: None
 bool  ____isCrouching;

/// @brief Field _deferredLocomotionEvent, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____deferredLocomotionEvent;

/// @brief Field _endOfFrame, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::YieldInstruction*  ____endOfFrame;

/// @brief Field _endOfFrameRoutine, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____endOfFrameRoutine;

/// @brief Field _jumpThisFrame, offset: 0x110, size: 0x1, def value: None
 bool  ____jumpThisFrame;

/// @brief Field _endedFrameGrounded, offset: 0x111, size: 0x1, def value: None
 bool  ____endedFrameGrounded;

/// @brief Field _started, offset: 0x112, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____characterController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____playerOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____playerEyes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____maxWallPenetrationDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____exitHotspotDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____autoUpdateHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____defaultHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____heightOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____crouchHeightOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____speedFactor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____crouchSpeedFactor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____runningSpeedFactor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____acceleration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____groundDamping) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____jumpDamping) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____airDamping) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____jumpForce) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____gravityFactor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____coyoteTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____flattenInputVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____inputVelocityStabilization) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____velocityDisabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____maxStartGroundDistance) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____context) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____deltaTimeProvider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____timeProvider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____whenLocomotionEventHandled) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____accumulatedDeltaFrame) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____velocity) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____isHeadInHotspot) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____headHotspotCenter) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____leftGroundTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____isRunning) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____isCrouching) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____deferredLocomotionEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____endOfFrame) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____endOfFrameRoutine) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____jumpThisFrame) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____endedFrameGrounded) == 0x111, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor, ____started) == 0x112, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor) == 0x118, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FirstPersonLocomotor/<EndOfFrameCoroutine>d__150
class CORDL_TYPE FirstPersonLocomotor__EndOfFrameCoroutine_d__150 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4c3af8, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4c3b78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4c3b80, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4c3bb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4c3af4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4c369c, size 0x28, virtual false, abstract: false, final false
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
constexpr FirstPersonLocomotor__EndOfFrameCoroutine_d__150() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor__EndOfFrameCoroutine_d__150", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonLocomotor__EndOfFrameCoroutine_d__150(FirstPersonLocomotor__EndOfFrameCoroutine_d__150 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor__EndOfFrameCoroutine_d__150", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonLocomotor__EndOfFrameCoroutine_d__150(FirstPersonLocomotor__EndOfFrameCoroutine_d__150 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16247};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor__EndOfFrameCoroutine_d__150) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FirstPersonLocomotor/<>c
class CORDL_TYPE FirstPersonLocomotor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*  __9;

/// @brief Field <>9__157_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__157_0, put=setStaticF___9__157_0)) ::System::Func_1<float_t>*  __9__157_0;

/// @brief Field <>9__157_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__157_1, put=setStaticF___9__157_1)) ::System::Func_1<float_t>*  __9__157_1;

/// @brief Field <>9__157_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__157_2, put=setStaticF___9__157_2)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  __9__157_2;

static inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c* New_ctor() ;

/// @brief Method <.ctor>b__157_0, addr 0xa4c3ae0, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__157_0() ;

/// @brief Method <.ctor>b__157_1, addr 0xa4c3ae8, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__157_1() ;

/// @brief Method <.ctor>b__157_2, addr 0xa4c3af0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__157_2(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_) ;

/// @brief Method .ctor, addr 0xa4c3ad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__157_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__157_1() ;

static inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* getStaticF___9__157_2() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c*  value) ;

static inline void setStaticF___9__157_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__157_1(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__157_2(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstPersonLocomotor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonLocomotor___c(FirstPersonLocomotor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonLocomotor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonLocomotor___c(FirstPersonLocomotor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::FirstPersonLocomotor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
