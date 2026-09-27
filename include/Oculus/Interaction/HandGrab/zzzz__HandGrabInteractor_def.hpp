#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabInteractor)
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c__DisplayClass83_0;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c__DisplayClass85_0;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabTarget;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c__DisplayClass83_0;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor___c__DisplayClass85_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteractor*);
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteractor___c*);
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*);
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteractor*, "Oculus.Interaction.HandGrab", "HandGrabInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteractor___c*, "Oculus.Interaction.HandGrab", "HandGrabInteractor/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0*, "Oculus.Interaction.HandGrab", "HandGrabInteractor/<>c__DisplayClass83_0");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0*, "Oculus.Interaction.HandGrab", "HandGrabInteractor/<>c__DisplayClass85_0");
// Dependencies Oculus.Interaction.Grab.GrabTypeFlags, Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, UnityEngine.Pose
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteractor
class CORDL_TYPE HandGrabInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>> {
public:
// Declarations
using __c = ::Oculus::Interaction::HandGrab::HandGrabInteractor___c;

using __c__DisplayClass83_0 = ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0;

using __c__DisplayClass85_0 = ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0;

 __declspec(property(get=get_FingersStrength, put=set_FingersStrength)) float_t  FingersStrength;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  HandGrabApi;

 __declspec(property(get=get_HandGrabTarget)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  HandGrabTarget;

 __declspec(property(get=get_HoverOnZeroStrength, put=set_HoverOnZeroStrength)) bool  HoverOnZeroStrength;

 __declspec(property(get=get_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_Movement, put=set_Movement)) ::Oculus::Interaction::IMovement*  Movement;

 __declspec(property(get=get_MovementFinished, put=set_MovementFinished)) bool  MovementFinished;

 __declspec(property(get=get_PalmPoint)) ::UnityW<::UnityEngine::Transform>  PalmPoint;

 __declspec(property(get=get_PinchPoint)) ::UnityW<::UnityEngine::Transform>  PinchPoint;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

 __declspec(property(get=get_SupportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  SupportedGrabTypes;

 __declspec(property(get=get_TargetInteractable)) ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  TargetInteractable;

/// @brief [Obsolete("Use Grabbable instead")]
 __declspec(property(get=get_VelocityCalculator, put=set_VelocityCalculator)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  VelocityCalculator;

 __declspec(property(get=get_WristPoint)) ::UnityW<::UnityEngine::Transform>  WristPoint;

 __declspec(property(get=get_WristStrength, put=set_WristStrength)) float_t  WristStrength;

 __declspec(property(get=get_WristToGrabPoseOffset, put=set_WristToGrabPoseOffset)) ::UnityEngine::Pose  WristToGrabPoseOffset;

/// @brief Field <FingersStrength>k__BackingField, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__FingersStrength_k__BackingField, put=__cordl_internal_set__FingersStrength_k__BackingField)) float_t  _FingersStrength_k__BackingField;

/// @brief Field <HandGrabTarget>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrabTarget_k__BackingField, put=__cordl_internal_set__HandGrabTarget_k__BackingField)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  _HandGrabTarget_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <MovementFinished>k__BackingField, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get__MovementFinished_k__BackingField, put=__cordl_internal_set__MovementFinished_k__BackingField)) bool  _MovementFinished_k__BackingField;

/// @brief Field <Movement>k__BackingField, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__Movement_k__BackingField, put=__cordl_internal_set__Movement_k__BackingField)) ::Oculus::Interaction::IMovement*  _Movement_k__BackingField;

/// @brief Field <VelocityCalculator>k__BackingField, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__VelocityCalculator_k__BackingField, put=__cordl_internal_set__VelocityCalculator_k__BackingField)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  _VelocityCalculator_k__BackingField;

/// @brief Field <WristStrength>k__BackingField, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get__WristStrength_k__BackingField, put=__cordl_internal_set__WristStrength_k__BackingField)) float_t  _WristStrength_k__BackingField;

/// @brief Field <WristToGrabPoseOffset>k__BackingField, offset 0x1b8, size 0x1c 
 __declspec(property(get=__cordl_internal_get__WristToGrabPoseOffset_k__BackingField, put=__cordl_internal_set__WristToGrabPoseOffset_k__BackingField)) ::UnityEngine::Pose  _WristToGrabPoseOffset_k__BackingField;

/// @brief Field _cachedResult, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedResult, put=__cordl_internal_set__cachedResult)) ::Oculus::Interaction::HandGrab::HandGrabResult*  _cachedResult;

/// @brief Field _currentGrabType, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentGrabType, put=__cordl_internal_set__currentGrabType)) ::Oculus::Interaction::Grab::GrabTypeFlags  _currentGrabType;

/// @brief Field _grabOrigin, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabOrigin, put=__cordl_internal_set__grabOrigin)) ::UnityW<::UnityEngine::Transform>  _grabOrigin;

/// @brief Field _gripCollider, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripCollider, put=__cordl_internal_set__gripCollider)) ::UnityW<::UnityEngine::Collider>  _gripCollider;

/// @brief Field _gripPoint, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripPoint, put=__cordl_internal_set__gripPoint)) ::UnityW<::UnityEngine::Transform>  _gripPoint;

/// @brief Field _hand, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handGrabApi, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabApi, put=__cordl_internal_set__handGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  _handGrabApi;

/// @brief Field _handGrabShouldSelect, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get__handGrabShouldSelect, put=__cordl_internal_set__handGrabShouldSelect)) bool  _handGrabShouldSelect;

/// @brief Field _handGrabShouldUnselect, offset 0x179, size 0x1 
 __declspec(property(get=__cordl_internal_get__handGrabShouldUnselect, put=__cordl_internal_set__handGrabShouldUnselect)) bool  _handGrabShouldUnselect;

/// @brief Field _hoverOnZeroStrength, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hoverOnZeroStrength, put=__cordl_internal_set__hoverOnZeroStrength)) bool  _hoverOnZeroStrength;

/// @brief Field _pinchCollider, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinchCollider, put=__cordl_internal_set__pinchCollider)) ::UnityW<::UnityEngine::Collider>  _pinchCollider;

/// @brief Field _pinchPoint, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinchPoint, put=__cordl_internal_set__pinchPoint)) ::UnityW<::UnityEngine::Transform>  _pinchPoint;

/// @brief Field _rigidbody, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _selectedInteractableOverride, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedInteractableOverride, put=__cordl_internal_set__selectedInteractableOverride)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  _selectedInteractableOverride;

/// @brief Field _supportedGrabTypes, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__supportedGrabTypes, put=__cordl_internal_set__supportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  _supportedGrabTypes;

/// @brief Field _velocityCalculator, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__velocityCalculator, put=__cordl_internal_set__velocityCalculator)) ::UnityW<::UnityEngine::Object>  _velocityCalculator;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// @brief Method Awake, addr 0xa4df61c, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanSelect, addr 0xa4e03d8, size 0x7c, virtual true, abstract: false, final false
inline bool CanSelect(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method ComputeCandidate, addr 0xa4e0454, size 0x31c, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> ComputeCandidate() ;

/// @brief Method ComputePointerPose, addr 0xa4e0248, size 0xd0, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputeShouldSelect, addr 0xa4e0318, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa4e0320, size 0xb8, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoHoverUpdate, addr 0xa4df804, size 0xc8, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoSelectUpdate, addr 0xa4dfa20, size 0x1d8, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method ForceRelease, addr 0xa4e0da8, size 0x160, virtual false, abstract: false, final false
inline void ForceRelease() ;

/// @brief Method ForceSelect, addr 0xa4e0bcc, size 0x1d4, virtual false, abstract: false, final false
inline void ForceSelect(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, bool  allowManualRelease) ;

/// @brief Method GrabbingFingers, addr 0xa4df4c4, size 0x40, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::HandFingerFlags GrabbingFingers() ;

/// @brief Method HandlePointerEventRaised, addr 0xa4dfe5c, size 0x294, virtual true, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllHandGrabInteractor, addr 0xa4e1124, size 0x6c, virtual false, abstract: false, final false
inline void InjectAllHandGrabInteractor(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi, ::UnityEngine::Transform*  grabOrigin, ::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes) ;

/// @brief Method InjectGrabOrigin, addr 0xa4e1288, size 0x10, virtual false, abstract: false, final false
inline void InjectGrabOrigin(::UnityEngine::Transform*  grabOrigin) ;

/// @brief Method InjectHand, addr 0xa4e1190, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandGrabApi, addr 0xa4e1260, size 0x10, virtual false, abstract: false, final false
inline void InjectHandGrabApi(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI) ;

/// @brief Method InjectOptionalGripCollider, addr 0xa4e12a8, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGripCollider(::UnityEngine::Collider*  gripCollider) ;

/// @brief Method InjectOptionalGripPoint, addr 0xa4e1298, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGripPoint(::UnityEngine::Transform*  gripPoint) ;

/// @brief Method InjectOptionalPinchCollider, addr 0xa4e12c8, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalPinchCollider(::UnityEngine::Collider*  pinchCollider) ;

/// @brief Method InjectOptionalPinchPoint, addr 0xa4e12b8, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalPinchPoint(::UnityEngine::Transform*  pinchPoint) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalVelocityCalculator, addr 0xa4e12d8, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator) ;

/// @brief Method InjectRigidbody, addr 0xa4e1270, size 0x10, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectSupportedGrabTypes, addr 0xa4e1280, size 0x8, virtual false, abstract: false, final false
inline void InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes) ;

/// @brief Method InteractableSelected, addr 0xa4dfc60, size 0xdc, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method InteractableSet, addr 0xa4df944, size 0x70, virtual true, abstract: false, final false
inline void InteractableSet(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa4dfd3c, size 0x120, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method InteractableUnset, addr 0xa4df9b4, size 0x60, virtual true, abstract: false, final false
inline void InteractableUnset(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractor* New_ctor() ;

/// @brief Method OverlapsVolume, addr 0xa4e09e0, size 0x1ec, virtual false, abstract: false, final false
inline bool OverlapsVolume(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::UnityEngine::Collider*  volume) ;

/// @brief Method Reset, addr 0xa4df50c, size 0x110, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SelectingGrabTypes, addr 0xa4e0770, size 0x178, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabTypeFlags SelectingGrabTypes(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, float_t  minFingerScoreRequired, ::by_ref<float_t>  fingerScore) ;

/// @brief Method SetComputeCandidateOverride, addr 0xa4e0f08, size 0xec, virtual true, abstract: false, final false
inline void SetComputeCandidateOverride(::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  computeCandidate, bool  shouldClearOverrideOnSelect) ;

/// @brief Method SetGrabStrength, addr 0xa4dfa14, size 0xc, virtual false, abstract: false, final false
inline void SetGrabStrength(float_t  strength) ;

/// @brief Method SetTarget, addr 0xa4e00f0, size 0x158, virtual false, abstract: false, final false
inline void SetTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  selectingGrabTypes) ;

/// @brief Method Start, addr 0xa4df6e4, size 0x120, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unselect, addr 0xa4e0ffc, size 0x128, virtual true, abstract: false, final false
inline void Unselect() ;

/// @brief Method UpdateTarget, addr 0xa4df8cc, size 0x78, virtual false, abstract: false, final false
inline void UpdateTarget(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method UpdateTargetSliding, addr 0xa4dfbf8, size 0x68, virtual false, abstract: false, final false
inline void UpdateTargetSliding(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__69_0, addr 0xa4e1468, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__69_0() ;

constexpr float_t const& __cordl_internal_get__FingersStrength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FingersStrength_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& __cordl_internal_get__HandGrabTarget_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& __cordl_internal_get__HandGrabTarget_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__MovementFinished_k__BackingField() const;

constexpr bool& __cordl_internal_get__MovementFinished_k__BackingField() ;

constexpr ::Oculus::Interaction::IMovement* const& __cordl_internal_get__Movement_k__BackingField() const;

constexpr ::Oculus::Interaction::IMovement*& __cordl_internal_get__Movement_k__BackingField() ;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& __cordl_internal_get__VelocityCalculator_k__BackingField() const;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& __cordl_internal_get__VelocityCalculator_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__WristStrength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__WristStrength_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__WristToGrabPoseOffset_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__WristToGrabPoseOffset_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& __cordl_internal_get__cachedResult() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& __cordl_internal_get__cachedResult() ;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& __cordl_internal_get__currentGrabType() const;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& __cordl_internal_get__currentGrabType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabOrigin() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__gripCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__gripCollider() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__gripPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__gripPoint() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& __cordl_internal_get__handGrabApi() const;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& __cordl_internal_get__handGrabApi() ;

constexpr bool const& __cordl_internal_get__handGrabShouldSelect() const;

constexpr bool& __cordl_internal_get__handGrabShouldSelect() ;

constexpr bool const& __cordl_internal_get__handGrabShouldUnselect() const;

constexpr bool& __cordl_internal_get__handGrabShouldUnselect() ;

constexpr bool const& __cordl_internal_get__hoverOnZeroStrength() const;

constexpr bool& __cordl_internal_get__hoverOnZeroStrength() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__pinchCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__pinchCollider() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pinchPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pinchPoint() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& __cordl_internal_get__selectedInteractableOverride() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& __cordl_internal_get__selectedInteractableOverride() ;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& __cordl_internal_get__supportedGrabTypes() const;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& __cordl_internal_get__supportedGrabTypes() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__velocityCalculator() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__velocityCalculator() ;

constexpr void __cordl_internal_set__FingersStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__MovementFinished_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Movement_k__BackingField(::Oculus::Interaction::IMovement*  value) ;

constexpr void __cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

constexpr void __cordl_internal_set__WristStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__WristToGrabPoseOffset_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__cachedResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value) ;

constexpr void __cordl_internal_set__currentGrabType(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

constexpr void __cordl_internal_set__grabOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__gripCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__gripPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value) ;

constexpr void __cordl_internal_set__handGrabShouldSelect(bool  value) ;

constexpr void __cordl_internal_set__handGrabShouldUnselect(bool  value) ;

constexpr void __cordl_internal_set__hoverOnZeroStrength(bool  value) ;

constexpr void __cordl_internal_set__pinchCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__pinchPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__selectedInteractableOverride(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value) ;

constexpr void __cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

constexpr void __cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4e13a8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FingersStrength, addr 0xa4df46c, size 0x8, virtual true, abstract: false, final true
inline float_t get_FingersStrength() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4df2c4, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_HandGrabApi, addr 0xa4df34c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> get_HandGrabApi() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrabTarget, addr 0xa4df32c, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* get_HandGrabTarget() ;

/// @brief Method get_HoverOnZeroStrength, addr 0xa4df2dc, size 0x8, virtual false, abstract: false, final false
inline bool get_HoverOnZeroStrength() ;

/// @brief Method get_IsGrabbing, addr 0xa4df398, size 0xd4, virtual true, abstract: false, final false
inline bool get_IsGrabbing() ;

/// [CompilerGenerated]
/// @brief Method get_Movement, addr 0xa4df304, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* get_Movement() ;

/// [CompilerGenerated]
/// @brief Method get_MovementFinished, addr 0xa4df31c, size 0x8, virtual false, abstract: false, final false
inline bool get_MovementFinished() ;

/// @brief Method get_PalmPoint, addr 0xa4df344, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_PalmPoint() ;

/// @brief Method get_PinchPoint, addr 0xa4df33c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_PinchPoint() ;

/// @brief Method get_Rigidbody, addr 0xa4df504, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// @brief Method get_SupportedGrabTypes, addr 0xa4df354, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_SupportedGrabTypes() ;

/// @brief Method get_TargetInteractable, addr 0xa4df35c, size 0x3c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* get_TargetInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_VelocityCalculator, addr 0xa4df2ec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* get_VelocityCalculator() ;

/// @brief Method get_WristPoint, addr 0xa4df334, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_WristPoint() ;

/// [CompilerGenerated]
/// @brief Method get_WristStrength, addr 0xa4df47c, size 0x8, virtual true, abstract: false, final true
inline float_t get_WristStrength() ;

/// [CompilerGenerated]
/// @brief Method get_WristToGrabPoseOffset, addr 0xa4df48c, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_WristToGrabPoseOffset() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* i___Oculus__Interaction__HandGrab__IHandGrabInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

/// [CompilerGenerated]
/// @brief Method set_FingersStrength, addr 0xa4df474, size 0x8, virtual false, abstract: false, final false
inline void set_FingersStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4df2cc, size 0x10, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_HoverOnZeroStrength, addr 0xa4df2e4, size 0x8, virtual false, abstract: false, final false
inline void set_HoverOnZeroStrength(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Movement, addr 0xa4df30c, size 0x10, virtual false, abstract: false, final false
inline void set_Movement(::Oculus::Interaction::IMovement*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MovementFinished, addr 0xa4df324, size 0x8, virtual false, abstract: false, final false
inline void set_MovementFinished(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_VelocityCalculator, addr 0xa4df2f4, size 0x10, virtual false, abstract: false, final false
inline void set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WristStrength, addr 0xa4df484, size 0x8, virtual false, abstract: false, final false
inline void set_WristStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_WristToGrabPoseOffset, addr 0xa4df4a4, size 0x20, virtual false, abstract: false, final false
inline void set_WristToGrabPoseOffset(::UnityEngine::Pose  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteractor(HandGrabInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteractor(HandGrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16323};

/// [Tooltip("The IHand that should be able to grab.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("The hand\'s Rigidbody, which detects interactables.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("Detects when the hand grab selects or unselects.")]
/// [SerializeField]
/// @brief Field _handGrabApi, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  ____handGrabApi;

/// [Tooltip("The grab types that the hand supports.")]
/// [SerializeField]
/// @brief Field _supportedGrabTypes, offset: 0x138, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____supportedGrabTypes;

/// [SerializeField]
/// [Tooltip("When enabled, nearby interactables can become candidates even if thefinger strength is 0")]
/// @brief Field _hoverOnZeroStrength, offset: 0x13c, size: 0x1, def value: None
 bool  ____hoverOnZeroStrength;

/// [Tooltip("The origin of the grab.")]
/// [SerializeField]
/// @brief Field _grabOrigin, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabOrigin;

/// [Tooltip("Specifies an offset from the wrist that can be used to search for the best HandGrabInteractable available, act as a palm grab without a HandPose, and also act as an anchor for attaching the object.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _gripPoint, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____gripPoint;

/// [Tooltip("Collider used to detect a palm grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _gripCollider, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____gripCollider;

/// [Tooltip("Specifies a moving point at the center of the tips of the currently pinching fingers. It\'s used to align interactables that don\u{2019}t have a HandPose to the center of the pinch.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _pinchPoint, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pinchPoint;

/// [Tooltip("Collider used to detect a pinch grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _pinchCollider, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____pinchCollider;

/// [Tooltip("Determines how the object will move when thrown.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IThrowVelocityCalculator), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable instead")]
/// @brief Field _velocityCalculator, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____velocityCalculator;

/// [CompilerGenerated]
/// @brief Field <VelocityCalculator>k__BackingField, offset: 0x170, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  ____VelocityCalculator_k__BackingField;

/// @brief Field _handGrabShouldSelect, offset: 0x178, size: 0x1, def value: None
 bool  ____handGrabShouldSelect;

/// @brief Field _handGrabShouldUnselect, offset: 0x179, size: 0x1, def value: None
 bool  ____handGrabShouldUnselect;

/// @brief Field _cachedResult, offset: 0x180, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabResult*  ____cachedResult;

/// @brief Field _selectedInteractableOverride, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  ____selectedInteractableOverride;

/// @brief Field _currentGrabType, offset: 0x190, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____currentGrabType;

/// [CompilerGenerated]
/// @brief Field <Movement>k__BackingField, offset: 0x198, size: 0x8, def value: None
 ::Oculus::Interaction::IMovement*  ____Movement_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MovementFinished>k__BackingField, offset: 0x1a0, size: 0x1, def value: None
 bool  ____MovementFinished_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandGrabTarget>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabTarget*  ____HandGrabTarget_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FingersStrength>k__BackingField, offset: 0x1b0, size: 0x4, def value: None
 float_t  ____FingersStrength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WristStrength>k__BackingField, offset: 0x1b4, size: 0x4, def value: None
 float_t  ____WristStrength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WristToGrabPoseOffset>k__BackingField, offset: 0x1b8, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____WristToGrabPoseOffset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____hand) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____Hand_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____rigidbody) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____handGrabApi) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____supportedGrabTypes) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____hoverOnZeroStrength) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____grabOrigin) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____gripPoint) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____gripCollider) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____pinchPoint) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____pinchCollider) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____velocityCalculator) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____VelocityCalculator_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____handGrabShouldSelect) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____handGrabShouldUnselect) == 0x179, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____cachedResult) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____selectedInteractableOverride) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____currentGrabType) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____Movement_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____MovementFinished_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____HandGrabTarget_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____FingersStrength_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____WristStrength_k__BackingField) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor, ____WristToGrabPoseOffset_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteractor) == 0x1d8, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass85_0
class CORDL_TYPE HandGrabInteractor___c__DisplayClass85_0 : public ::System::Object {
public:
// Declarations
/// @brief Field computeCandidate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_computeCandidate, put=__cordl_internal_set_computeCandidate)) ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  computeCandidate;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0* New_ctor() ;

/// @brief Method <SetComputeCandidateOverride>b__0, addr 0xa4e15d8, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> _SetComputeCandidateOverride_b__0() ;

constexpr ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>* const& __cordl_internal_get_computeCandidate() const;

constexpr ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*& __cordl_internal_get_computeCandidate() ;

constexpr void __cordl_internal_set_computeCandidate(::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  value) ;

/// @brief Method .ctor, addr 0xa4e0ff4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteractor___c__DisplayClass85_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c__DisplayClass85_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteractor___c__DisplayClass85_0(HandGrabInteractor___c__DisplayClass85_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c__DisplayClass85_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteractor___c__DisplayClass85_0(HandGrabInteractor___c__DisplayClass85_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16322};

/// @brief Field computeCandidate, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>*  ___computeCandidate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0, ___computeCandidate) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass85_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass83_0
class CORDL_TYPE HandGrabInteractor___c__DisplayClass83_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  __4__this;

/// @brief Field interactable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactable, put=__cordl_internal_set_interactable)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  interactable;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0* New_ctor() ;

/// @brief Method <ForceSelect>b__0, addr 0xa4e1528, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> _ForceSelect_b__0() ;

/// @brief Method <ForceSelect>b__1, addr 0xa4e1530, size 0x54, virtual false, abstract: false, final false
inline bool _ForceSelect_b__1() ;

/// @brief Method <ForceSelect>b__2, addr 0xa4e1584, size 0x54, virtual false, abstract: false, final false
inline bool _ForceSelect_b__2() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& __cordl_internal_get_interactable() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& __cordl_internal_get_interactable() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value) ;

constexpr void __cordl_internal_set_interactable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value) ;

/// @brief Method .ctor, addr 0xa4e0da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteractor___c__DisplayClass83_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c__DisplayClass83_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteractor___c__DisplayClass83_0(HandGrabInteractor___c__DisplayClass83_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c__DisplayClass83_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteractor___c__DisplayClass83_0(HandGrabInteractor___c__DisplayClass83_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16321};

/// @brief Field interactable, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  ___interactable;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0, ___interactable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c__DisplayClass83_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteractor/<>c
class CORDL_TYPE HandGrabInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::HandGrab::HandGrabInteractor___c*  __9;

/// @brief Field <>9__84_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_0, put=setStaticF___9__84_0)) ::System::Func_1<bool>*  __9__84_0;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c* New_ctor() ;

/// @brief Method <ForceRelease>b__84_0, addr 0xa4e1520, size 0x8, virtual false, abstract: false, final false
inline bool _ForceRelease_b__84_0() ;

/// @brief Method .ctor, addr 0xa4e1518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__84_0() ;

static inline void setStaticF___9(::Oculus::Interaction::HandGrab::HandGrabInteractor___c*  value) ;

static inline void setStaticF___9__84_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteractor___c(HandGrabInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteractor___c(HandGrabInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
