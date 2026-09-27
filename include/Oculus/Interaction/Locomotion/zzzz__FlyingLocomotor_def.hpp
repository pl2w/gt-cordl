#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/FlyingLocomotor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingLocomotor)
namespace Oculus::Interaction::Locomotion {
class CharacterController;
}
namespace Oculus::Interaction::Locomotion {
class FlyingLocomotor__EndOfFrameCoroutine_d__52;
}
namespace Oculus::Interaction::Locomotion {
class FlyingLocomotor___c;
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
class Object;
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
class FlyingLocomotor;
}
namespace Oculus::Interaction::Locomotion {
class FlyingLocomotor__EndOfFrameCoroutine_d__52;
}
namespace Oculus::Interaction::Locomotion {
class FlyingLocomotor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::FlyingLocomotor*);
MARK_REF_T(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*);
MARK_REF_T(::Oculus::Interaction::Locomotion::FlyingLocomotor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FlyingLocomotor*, "Oculus.Interaction.Locomotion", "FlyingLocomotor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52*, "Oculus.Interaction.Locomotion", "FlyingLocomotor/<EndOfFrameCoroutine>d__52");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::FlyingLocomotor___c*, "Oculus.Interaction.Locomotion", "FlyingLocomotor/<>c");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FlyingLocomotor
class CORDL_TYPE FlyingLocomotor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EndOfFrameCoroutine_d__52 = ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52;

using __c = ::Oculus::Interaction::Locomotion::FlyingLocomotor___c;

 __declspec(property(get=get_Acceleration, put=set_Acceleration)) float_t  Acceleration;

 __declspec(property(get=get_AirDamping, put=set_AirDamping)) float_t  AirDamping;

 __declspec(property(get=get_IsGrounded)) bool  IsGrounded;

/// @brief Field _acceleration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__acceleration, put=__cordl_internal_set__acceleration)) float_t  _acceleration;

/// @brief Field _accumulatedDeltaFrame, offset 0x50, size 0x1c 
 __declspec(property(get=__cordl_internal_get__accumulatedDeltaFrame, put=__cordl_internal_set__accumulatedDeltaFrame)) ::UnityEngine::Pose  _accumulatedDeltaFrame;

/// @brief Field _airDamping, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__airDamping, put=__cordl_internal_set__airDamping)) float_t  _airDamping;

/// @brief Field _characterController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__characterController, put=__cordl_internal_set__characterController)) ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  _characterController;

/// @brief Field _deferredLocomotionEvent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__deferredLocomotionEvent, put=__cordl_internal_set__deferredLocomotionEvent)) ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _deferredLocomotionEvent;

/// @brief Field _deltaTimeProvider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _endOfFrame, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrame, put=__cordl_internal_set__endOfFrame)) ::UnityEngine::YieldInstruction*  _endOfFrame;

/// @brief Field _endOfFrameRoutine, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfFrameRoutine, put=__cordl_internal_set__endOfFrameRoutine)) ::UnityEngine::Coroutine*  _endOfFrameRoutine;

/// @brief Field _playerEyes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerEyes, put=__cordl_internal_set__playerEyes)) ::UnityW<::UnityEngine::Transform>  _playerEyes;

/// @brief Field _playerOrigin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOrigin, put=__cordl_internal_set__playerOrigin)) ::UnityW<::UnityEngine::Transform>  _playerOrigin;

/// @brief Field _started, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _velocity, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocity, put=__cordl_internal_set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Field _whenLocomotionEventHandled, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionEventHandled, put=__cordl_internal_set__whenLocomotionEventHandled)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  _whenLocomotionEventHandled;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept;

/// @brief Method AccumulateDelta, addr 0xa4c41d8, size 0x14c, virtual false, abstract: false, final false
inline void AccumulateDelta(::by_ref<::UnityEngine::Pose>  accumulator, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method AddVelocity, addr 0xa4c4880, size 0x7c, virtual false, abstract: false, final false
inline void AddVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method CatchUpCharacterToPlayer, addr 0xa4c3fa8, size 0x1d8, virtual false, abstract: false, final false
inline void CatchUpCharacterToPlayer() ;

/// @brief Method CatchUpPlayerToCharacter, addr 0xa4c4590, size 0x1c8, virtual false, abstract: false, final false
inline void CatchUpPlayerToCharacter(::UnityEngine::Pose  delta, float_t  feetHeight) ;

/// @brief Method ConsumeDeferredLocomotionEvents, addr 0xa4c4328, size 0x10c, virtual false, abstract: false, final false
inline void ConsumeDeferredLocomotionEvents() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Locomotion.FlyingLocomotor::<EndOfFrameCoroutine>d__52))]
/// @brief Method EndOfFrameCoroutine, addr 0xa4c3db8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EndOfFrameCoroutine() ;

/// @brief Method GetCharacterFeet, addr 0xa4c44cc, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterFeet() ;

/// @brief Method GetCharacterHead, addr 0xa4c4ef8, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCharacterHead() ;

/// @brief Method GetModifiedSpeedFactor, addr 0xa4c4ec0, size 0x38, virtual false, abstract: false, final false
inline float_t GetModifiedSpeedFactor() ;

/// @brief Method GetPlayerHead, addr 0xa4c4fc8, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerHead() ;

/// @brief Method HandleDeferredLocomotionEvent, addr 0xa4c48fc, size 0x1e4, virtual false, abstract: false, final false
inline void HandleDeferredLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method HandleLocomotionEvent, addr 0xa4c4758, size 0x128, virtual true, abstract: false, final true
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method InjectAllFlyingLocomotor, addr 0xa4c51c0, size 0x44, virtual false, abstract: false, final false
inline void InjectAllFlyingLocomotor(::Oculus::Interaction::Locomotion::CharacterController*  characterController, ::UnityEngine::Transform*  playerEyes, ::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method InjectCharacterController, addr 0xa4c5204, size 0x8, virtual false, abstract: false, final false
inline void InjectCharacterController(::Oculus::Interaction::Locomotion::CharacterController*  characterController) ;

/// @brief Method InjectPlayerEyes, addr 0xa4c520c, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerEyes(::UnityEngine::Transform*  playerEyes) ;

/// @brief Method InjectPlayerOrigin, addr 0xa4c5214, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method LastUpdate, addr 0xa4c4434, size 0x98, virtual true, abstract: false, final false
inline void LastUpdate() ;

/// @brief Method LateUpdate, addr 0xa4c4324, size 0x4, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveAbsoluteFeet, addr 0xa4c4ae0, size 0x94, virtual false, abstract: false, final false
inline void MoveAbsoluteFeet(::UnityEngine::Vector3  target) ;

/// @brief Method MoveAbsoluteHead, addr 0xa4c4b74, size 0x94, virtual false, abstract: false, final false
inline void MoveAbsoluteHead(::UnityEngine::Vector3  target) ;

/// @brief Method MoveRelative, addr 0xa4c4c08, size 0x90, virtual false, abstract: false, final false
inline void MoveRelative(::UnityEngine::Vector3  offset) ;

static inline ::Oculus::Interaction::Locomotion::FlyingLocomotor* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c3e24, size 0xa0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c3d7c, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetPlayerToCharacter, addr 0xa4c5038, size 0x160, virtual false, abstract: false, final false
inline void ResetPlayerToCharacter() ;

/// @brief Method RotateAbsolute, addr 0xa4c4c98, size 0x18, virtual false, abstract: false, final false
inline void RotateAbsolute(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateRelative, addr 0xa4c4cb0, size 0xd4, virtual false, abstract: false, final false
inline void RotateRelative(::UnityEngine::Quaternion  target) ;

/// @brief Method RotateVelocity, addr 0xa4c4d84, size 0x13c, virtual false, abstract: false, final false
inline void RotateVelocity(::UnityEngine::Quaternion  target) ;

/// @brief Method SetDeltaTimeProvider, addr 0xa4c3be0, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method Start, addr 0xa4c3d50, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4c3ec4, size 0xe4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateVelocity, addr 0xa4c4180, size 0x58, virtual false, abstract: false, final false
inline void UpdateVelocity() ;

constexpr float_t const& __cordl_internal_get__acceleration() const;

constexpr float_t& __cordl_internal_get__acceleration() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__accumulatedDeltaFrame() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__accumulatedDeltaFrame() ;

constexpr float_t const& __cordl_internal_get__airDamping() const;

constexpr float_t& __cordl_internal_get__airDamping() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController> const& __cordl_internal_get__characterController() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>& __cordl_internal_get__characterController() ;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__deferredLocomotionEvent() const;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__deferredLocomotionEvent() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__deltaTimeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__deltaTimeProvider() ;

constexpr ::UnityEngine::YieldInstruction* const& __cordl_internal_get__endOfFrame() const;

constexpr ::UnityEngine::YieldInstruction*& __cordl_internal_get__endOfFrame() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__endOfFrameRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__endOfFrameRoutine() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerEyes() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerEyes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerOrigin() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity() ;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& __cordl_internal_get__whenLocomotionEventHandled() const;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& __cordl_internal_get__whenLocomotionEventHandled() ;

constexpr void __cordl_internal_set__acceleration(float_t  value) ;

constexpr void __cordl_internal_set__accumulatedDeltaFrame(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__airDamping(float_t  value) ;

constexpr void __cordl_internal_set__characterController(::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  value) ;

constexpr void __cordl_internal_set__deferredLocomotionEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__endOfFrame(::UnityEngine::YieldInstruction*  value) ;

constexpr void __cordl_internal_set__endOfFrameRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__playerEyes(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method .ctor, addr 0xa4c521c, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionEventHandled, addr 0xa4c3be8, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method get_Acceleration, addr 0xa4c3bc0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Acceleration() ;

/// @brief Method get_AirDamping, addr 0xa4c3bd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_AirDamping() ;

/// @brief Method get_IsGrounded, addr 0xa4c3d38, size 0x18, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept;

/// @brief Method remove_WhenLocomotionEventHandled, addr 0xa4c3c90, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method set_Acceleration, addr 0xa4c3bc8, size 0x8, virtual false, abstract: false, final false
inline void set_Acceleration(float_t  value) ;

/// @brief Method set_AirDamping, addr 0xa4c3bd8, size 0x8, virtual false, abstract: false, final false
inline void set_AirDamping(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlyingLocomotor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingLocomotor(FlyingLocomotor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingLocomotor(FlyingLocomotor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16251};

/// @brief Field _sellionToBackOfHeadHalf offset 0xffffffff size 0x4
static constexpr float_t  _sellionToBackOfHeadHalf{static_cast<float_t>(0.0965f)};

/// @brief Field _sellionToTopOfHead offset 0xffffffff size 0x4
static constexpr float_t  _sellionToTopOfHead{static_cast<float_t>(0.1085f)};

/// [Header("Character")]
/// [SerializeField]
/// @brief Field _characterController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::CharacterController>  ____characterController;

/// [Header("VR Player")]
/// [SerializeField]
/// [Tooltip("Root of the actual VR player so it can be sync with with capsule. If you provided a _playerEyes you must also provide a _playerOrigin.")]
/// @brief Field _playerOrigin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerOrigin;

/// [SerializeField]
/// [Tooltip("Eyes of the actual VR player so it can be sync with the capsule. If you provided a _playerOrigin you must also provide a _playerEyes.")]
/// @brief Field _playerEyes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerEyes;

/// [Header("Parameters")]
/// [SerializeField]
/// [Tooltip("The rate of acceleration during movement.")]
/// @brief Field _acceleration, offset: 0x38, size: 0x4, def value: None
 float_t  ____acceleration;

/// [SerializeField]
/// [Tooltip("The rate of damping on the horizontal movement while in the air.")]
/// @brief Field _airDamping, offset: 0x3c, size: 0x4, def value: None
 float_t  ____airDamping;

/// @brief Field _deltaTimeProvider, offset: 0x40, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

/// @brief Field _whenLocomotionEventHandled, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  ____whenLocomotionEventHandled;

/// @brief Field _accumulatedDeltaFrame, offset: 0x50, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____accumulatedDeltaFrame;

/// @brief Field _velocity, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____velocity;

/// @brief Field _deferredLocomotionEvent, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____deferredLocomotionEvent;

/// @brief Field _endOfFrame, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::YieldInstruction*  ____endOfFrame;

/// @brief Field _endOfFrameRoutine, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____endOfFrameRoutine;

/// @brief Field _started, offset: 0x90, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____characterController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____playerOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____playerEyes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____acceleration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____airDamping) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____deltaTimeProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____whenLocomotionEventHandled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____accumulatedDeltaFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____velocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____deferredLocomotionEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____endOfFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____endOfFrameRoutine) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor, ____started) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::FlyingLocomotor) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FlyingLocomotor/<EndOfFrameCoroutine>d__52
class CORDL_TYPE FlyingLocomotor__EndOfFrameCoroutine_d__52 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4c54c4, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4c5544, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4c554c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4c5584, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4c54c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4c5198, size 0x28, virtual false, abstract: false, final false
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
constexpr FlyingLocomotor__EndOfFrameCoroutine_d__52() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor__EndOfFrameCoroutine_d__52", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingLocomotor__EndOfFrameCoroutine_d__52(FlyingLocomotor__EndOfFrameCoroutine_d__52 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor__EndOfFrameCoroutine_d__52", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingLocomotor__EndOfFrameCoroutine_d__52(FlyingLocomotor__EndOfFrameCoroutine_d__52 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16250};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::FlyingLocomotor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::FlyingLocomotor__EndOfFrameCoroutine_d__52) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.FlyingLocomotor/<>c
class CORDL_TYPE FlyingLocomotor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::FlyingLocomotor___c*  __9;

/// @brief Field <>9__57_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__57_0, put=setStaticF___9__57_0)) ::System::Func_1<float_t>*  __9__57_0;

/// @brief Field <>9__57_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__57_1, put=setStaticF___9__57_1)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  __9__57_1;

static inline ::Oculus::Interaction::Locomotion::FlyingLocomotor___c* New_ctor() ;

/// @brief Method <.ctor>b__57_0, addr 0xa4c54b4, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__57_0() ;

/// @brief Method <.ctor>b__57_1, addr 0xa4c54bc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__57_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_) ;

/// @brief Method .ctor, addr 0xa4c54ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::FlyingLocomotor___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__57_0() ;

static inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* getStaticF___9__57_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::FlyingLocomotor___c*  value) ;

static inline void setStaticF___9__57_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__57_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlyingLocomotor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingLocomotor___c(FlyingLocomotor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingLocomotor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingLocomotor___c(FlyingLocomotor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::FlyingLocomotor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
