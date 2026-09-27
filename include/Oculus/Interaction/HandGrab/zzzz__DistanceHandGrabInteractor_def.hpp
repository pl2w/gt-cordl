#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/DistanceHandGrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistanceHandGrabInteractor)
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
class DistanceHandGrabInteractable;
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
template<typename TInteractor,typename TInteractable>
class DistantCandidateComputer_2;
}
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class DistanceHandGrabInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor*, "Oculus.Interaction.HandGrab", "DistanceHandGrabInteractor");
// Dependencies Oculus.Interaction.Grab.GrabTypeFlags, Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.DistanceHandGrabInteractor
class CORDL_TYPE DistanceHandGrabInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_DistanceInteractable)) ::Oculus::Interaction::IRelativeToRef*  DistanceInteractable;

 __declspec(property(get=get_FingersStrength, put=set_FingersStrength)) float_t  FingersStrength;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  HandGrabApi;

 __declspec(property(get=get_HandGrabTarget)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  HandGrabTarget;

 __declspec(property(get=get_HitPoint, put=set_HitPoint)) ::UnityEngine::Vector3  HitPoint;

 __declspec(property(get=get_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_Movement, put=set_Movement)) ::Oculus::Interaction::IMovement*  Movement;

 __declspec(property(get=get_MovementFinished, put=set_MovementFinished)) bool  MovementFinished;

 __declspec(property(get=get_Origin)) ::UnityEngine::Pose  Origin;

 __declspec(property(get=get_PalmPoint)) ::UnityW<::UnityEngine::Transform>  PalmPoint;

 __declspec(property(get=get_PinchPoint)) ::UnityW<::UnityEngine::Transform>  PinchPoint;

 __declspec(property(get=get_SupportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  SupportedGrabTypes;

 __declspec(property(get=get_TargetInteractable)) ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  TargetInteractable;

/// @brief [Obsolete("Use Grabbable instead")]
 __declspec(property(get=get_VelocityCalculator, put=set_VelocityCalculator)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  VelocityCalculator;

 __declspec(property(get=get_WristPoint)) ::UnityW<::UnityEngine::Transform>  WristPoint;

 __declspec(property(get=get_WristStrength, put=set_WristStrength)) float_t  WristStrength;

 __declspec(property(get=get_WristToGrabPoseOffset, put=set_WristToGrabPoseOffset)) ::UnityEngine::Pose  WristToGrabPoseOffset;

/// @brief Field <FingersStrength>k__BackingField, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get__FingersStrength_k__BackingField, put=__cordl_internal_set__FingersStrength_k__BackingField)) float_t  _FingersStrength_k__BackingField;

/// @brief Field <HandGrabTarget>k__BackingField, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrabTarget_k__BackingField, put=__cordl_internal_set__HandGrabTarget_k__BackingField)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  _HandGrabTarget_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <HitPoint>k__BackingField, offset 0x198, size 0xc 
 __declspec(property(get=__cordl_internal_get__HitPoint_k__BackingField, put=__cordl_internal_set__HitPoint_k__BackingField)) ::UnityEngine::Vector3  _HitPoint_k__BackingField;

/// @brief Field <MovementFinished>k__BackingField, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get__MovementFinished_k__BackingField, put=__cordl_internal_set__MovementFinished_k__BackingField)) bool  _MovementFinished_k__BackingField;

/// @brief Field <Movement>k__BackingField, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__Movement_k__BackingField, put=__cordl_internal_set__Movement_k__BackingField)) ::Oculus::Interaction::IMovement*  _Movement_k__BackingField;

/// @brief Field <VelocityCalculator>k__BackingField, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__VelocityCalculator_k__BackingField, put=__cordl_internal_set__VelocityCalculator_k__BackingField)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  _VelocityCalculator_k__BackingField;

/// @brief Field <WristStrength>k__BackingField, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__WristStrength_k__BackingField, put=__cordl_internal_set__WristStrength_k__BackingField)) float_t  _WristStrength_k__BackingField;

/// @brief Field <WristToGrabPoseOffset>k__BackingField, offset 0x1ac, size 0x1c 
 __declspec(property(get=__cordl_internal_get__WristToGrabPoseOffset_k__BackingField, put=__cordl_internal_set__WristToGrabPoseOffset_k__BackingField)) ::UnityEngine::Pose  _WristToGrabPoseOffset_k__BackingField;

/// @brief Field _cachedResult, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedResult, put=__cordl_internal_set__cachedResult)) ::Oculus::Interaction::HandGrab::HandGrabResult*  _cachedResult;

/// @brief Field _currentGrabType, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentGrabType, put=__cordl_internal_set__currentGrabType)) ::Oculus::Interaction::Grab::GrabTypeFlags  _currentGrabType;

/// @brief Field _distantCandidateComputer, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__distantCandidateComputer, put=__cordl_internal_set__distantCandidateComputer)) ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  _distantCandidateComputer;

/// @brief Field _grabOrigin, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabOrigin, put=__cordl_internal_set__grabOrigin)) ::UnityW<::UnityEngine::Transform>  _grabOrigin;

/// @brief Field _gripPoint, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripPoint, put=__cordl_internal_set__gripPoint)) ::UnityW<::UnityEngine::Transform>  _gripPoint;

/// @brief Field _hand, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handGrabApi, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabApi, put=__cordl_internal_set__handGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  _handGrabApi;

/// @brief Field _handGrabShouldSelect, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get__handGrabShouldSelect, put=__cordl_internal_set__handGrabShouldSelect)) bool  _handGrabShouldSelect;

/// @brief Field _handGrabShouldUnselect, offset 0x169, size 0x1 
 __declspec(property(get=__cordl_internal_get__handGrabShouldUnselect, put=__cordl_internal_set__handGrabShouldUnselect)) bool  _handGrabShouldUnselect;

/// @brief Field _pinchPoint, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinchPoint, put=__cordl_internal_set__pinchPoint)) ::UnityW<::UnityEngine::Transform>  _pinchPoint;

/// @brief Field _supportedGrabTypes, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__supportedGrabTypes, put=__cordl_internal_set__supportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  _supportedGrabTypes;

/// @brief Field _velocityCalculator, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__velocityCalculator, put=__cordl_internal_set__velocityCalculator)) ::UnityW<::UnityEngine::Object>  _velocityCalculator;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IDistanceInteractor"
constexpr operator  ::Oculus::Interaction::IDistanceInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Method Awake, addr 0xa4d9c28, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanSelect, addr 0xa4db768, size 0x7c, virtual true, abstract: false, final false
inline bool CanSelect(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable) ;

/// @brief Method ComputeCandidate, addr 0xa4dba50, size 0x1c8, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable> ComputeCandidate() ;

/// @brief Method ComputePointerPose, addr 0xa4db688, size 0xd0, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputeShouldSelect, addr 0xa4db758, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa4db760, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoHoverUpdate, addr 0xa4d9dc0, size 0xc8, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoSelectUpdate, addr 0xa4da214, size 0x1d8, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method GrabbingFingers, addr 0xa4d984c, size 0x40, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::HandFingerFlags GrabbingFingers() ;

/// @brief Method HandlePointerEventRaised, addr 0xa4db010, size 0x294, virtual true, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllDistanceHandGrabInteractor, addr 0xa4dc720, size 0x6c, virtual false, abstract: false, final false
inline void InjectAllDistanceHandGrabInteractor(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  distantCandidateComputer, ::UnityEngine::Transform*  grabOrigin, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes) ;

/// @brief Method InjectDistantCandidateComputer, addr 0xa4dc86c, size 0x10, virtual false, abstract: false, final false
inline void InjectDistantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  distantCandidateComputer) ;

/// @brief Method InjectGrabOrigin, addr 0xa4dc884, size 0x10, virtual false, abstract: false, final false
inline void InjectGrabOrigin(::UnityEngine::Transform*  grabOrigin) ;

/// @brief Method InjectHand, addr 0xa4dc78c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandGrabApi, addr 0xa4dc85c, size 0x10, virtual false, abstract: false, final false
inline void InjectHandGrabApi(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi) ;

/// @brief Method InjectOptionalGripPoint, addr 0xa4dc894, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGripPoint(::UnityEngine::Transform*  gripPoint) ;

/// @brief Method InjectOptionalPinchPoint, addr 0xa4dc8a4, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalPinchPoint(::UnityEngine::Transform*  pinchPoint) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalVelocityCalculator, addr 0xa4dc8b4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator) ;

/// @brief Method InjectSupportedGrabTypes, addr 0xa4dc87c, size 0x8, virtual false, abstract: false, final false
inline void InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes) ;

/// @brief Method InteractableSelected, addr 0xa4dabc4, size 0xe0, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable) ;

/// @brief Method InteractableSet, addr 0xa4da134, size 0x70, virtual true, abstract: false, final false
inline void InteractableSet(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa4dae7c, size 0x194, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable) ;

/// @brief Method InteractableUnset, addr 0xa4da1a4, size 0x64, virtual true, abstract: false, final false
inline void InteractableUnset(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*  interactable) ;

static inline ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor* New_ctor() ;

/// @brief Method Reset, addr 0xa4d9b18, size 0x110, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SelectingGrabTypes, addr 0xa4dbc18, size 0x108, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabTypeFlags SelectingGrabTypes(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable) ;

/// @brief Method SetGrabStrength, addr 0xa4da208, size 0xc, virtual false, abstract: false, final false
inline void SetGrabStrength(float_t  strength) ;

/// @brief Method SetTarget, addr 0xa4db2a4, size 0x158, virtual false, abstract: false, final false
inline void SetTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  selectingGrabTypes) ;

/// @brief Method Start, addr 0xa4d9cf0, size 0xd0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateTarget, addr 0xa4d9e88, size 0x7c, virtual false, abstract: false, final false
inline void UpdateTarget(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable) ;

/// @brief Method UpdateTargetSliding, addr 0xa4da3ec, size 0x154, virtual false, abstract: false, final false
inline void UpdateTargetSliding(::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__68_0, addr 0xa4dcbb4, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__68_0() ;

constexpr float_t const& __cordl_internal_get__FingersStrength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FingersStrength_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& __cordl_internal_get__HandGrabTarget_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& __cordl_internal_get__HandGrabTarget_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__HitPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__HitPoint_k__BackingField() ;

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

constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>* const& __cordl_internal_get__distantCandidateComputer() const;

constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*& __cordl_internal_get__distantCandidateComputer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabOrigin() ;

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

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pinchPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pinchPoint() ;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& __cordl_internal_get__supportedGrabTypes() const;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& __cordl_internal_get__supportedGrabTypes() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__velocityCalculator() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__velocityCalculator() ;

constexpr void __cordl_internal_set__FingersStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__HitPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__MovementFinished_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Movement_k__BackingField(::Oculus::Interaction::IMovement*  value) ;

constexpr void __cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

constexpr void __cordl_internal_set__WristStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__WristToGrabPoseOffset_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__cachedResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value) ;

constexpr void __cordl_internal_set__currentGrabType(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

constexpr void __cordl_internal_set__distantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  value) ;

constexpr void __cordl_internal_set__grabOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__gripPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value) ;

constexpr void __cordl_internal_set__handGrabShouldSelect(bool  value) ;

constexpr void __cordl_internal_set__handGrabShouldUnselect(bool  value) ;

constexpr void __cordl_internal_set__pinchPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

constexpr void __cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4dc984, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceInteractable, addr 0xa4d96e4, size 0x3c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IRelativeToRef* get_DistanceInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_FingersStrength, addr 0xa4d97f4, size 0x8, virtual true, abstract: false, final true
inline float_t get_FingersStrength() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4d95bc, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_HandGrabApi, addr 0xa4d9634, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> get_HandGrabApi() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrabTarget, addr 0xa4d9614, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* get_HandGrabTarget() ;

/// [CompilerGenerated]
/// @brief Method get_HitPoint, addr 0xa4d96c4, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_HitPoint() ;

/// @brief Method get_IsGrabbing, addr 0xa4d9720, size 0xd4, virtual true, abstract: false, final false
inline bool get_IsGrabbing() ;

/// [CompilerGenerated]
/// @brief Method get_Movement, addr 0xa4d95ec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* get_Movement() ;

/// [CompilerGenerated]
/// @brief Method get_MovementFinished, addr 0xa4d9604, size 0x8, virtual false, abstract: false, final false
inline bool get_MovementFinished() ;

/// @brief Method get_Origin, addr 0xa4d9680, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Origin() ;

/// @brief Method get_PalmPoint, addr 0xa4d962c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_PalmPoint() ;

/// @brief Method get_PinchPoint, addr 0xa4d9624, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_PinchPoint() ;

/// @brief Method get_SupportedGrabTypes, addr 0xa4d963c, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_SupportedGrabTypes() ;

/// @brief Method get_TargetInteractable, addr 0xa4d9644, size 0x3c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* get_TargetInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_VelocityCalculator, addr 0xa4d95d4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* get_VelocityCalculator() ;

/// @brief Method get_WristPoint, addr 0xa4d961c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_WristPoint() ;

/// [CompilerGenerated]
/// @brief Method get_WristStrength, addr 0xa4d9804, size 0x8, virtual true, abstract: false, final true
inline float_t get_WristStrength() ;

/// [CompilerGenerated]
/// @brief Method get_WristToGrabPoseOffset, addr 0xa4d9814, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_WristToGrabPoseOffset() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractor"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* i___Oculus__Interaction__HandGrab__IHandGrabInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept;

/// @brief Convert to "::Oculus::Interaction::IDistanceInteractor"
constexpr ::Oculus::Interaction::IDistanceInteractor* i___Oculus__Interaction__IDistanceInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

/// [CompilerGenerated]
/// @brief Method set_FingersStrength, addr 0xa4d97fc, size 0x8, virtual false, abstract: false, final false
inline void set_FingersStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4d95c4, size 0x10, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HitPoint, addr 0xa4d96d4, size 0x10, virtual false, abstract: false, final false
inline void set_HitPoint(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Movement, addr 0xa4d95f4, size 0x10, virtual false, abstract: false, final false
inline void set_Movement(::Oculus::Interaction::IMovement*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MovementFinished, addr 0xa4d960c, size 0x8, virtual false, abstract: false, final false
inline void set_MovementFinished(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_VelocityCalculator, addr 0xa4d95dc, size 0x10, virtual false, abstract: false, final false
inline void set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WristStrength, addr 0xa4d980c, size 0x8, virtual false, abstract: false, final false
inline void set_WristStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_WristToGrabPoseOffset, addr 0xa4d982c, size 0x20, virtual false, abstract: false, final false
inline void set_WristToGrabPoseOffset(::UnityEngine::Pose  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceHandGrabInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceHandGrabInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceHandGrabInteractor(DistanceHandGrabInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceHandGrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceHandGrabInteractor(DistanceHandGrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16313};

/// [Tooltip("The hand to use.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("Detects when the hand grab selects or unselects.")]
/// [SerializeField]
/// @brief Field _handGrabApi, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  ____handGrabApi;

/// [Header("Grabbing")]
/// [Tooltip("The grab types to support.")]
/// [SerializeField]
/// @brief Field _supportedGrabTypes, offset: 0x130, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____supportedGrabTypes;

/// [Tooltip("The point on the hand used as the origin of the grab.")]
/// [SerializeField]
/// @brief Field _grabOrigin, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabOrigin;

/// [Tooltip("Specifies an offset from the wrist that can be used to search for the best HandGrabInteractable available, act as a palm grab without a HandPose, and also act as an anchor for attaching the object.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _gripPoint, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____gripPoint;

/// [Tooltip("Specifies a moving point at the center of the tips of the currently pinching fingers. It\'s used to align interactables that don\u{2019}t have a HandPose to the center of the pinch.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _pinchPoint, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pinchPoint;

/// [Tooltip("Determines how the object will move when thrown.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IThrowVelocityCalculator), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable instead")]
/// @brief Field _velocityCalculator, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____velocityCalculator;

/// [CompilerGenerated]
/// @brief Field <VelocityCalculator>k__BackingField, offset: 0x158, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  ____VelocityCalculator_k__BackingField;

/// [SerializeField]
/// @brief Field _distantCandidateComputer, offset: 0x160, size: 0x8, def value: None
 ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>>*  ____distantCandidateComputer;

/// @brief Field _handGrabShouldSelect, offset: 0x168, size: 0x1, def value: None
 bool  ____handGrabShouldSelect;

/// @brief Field _handGrabShouldUnselect, offset: 0x169, size: 0x1, def value: None
 bool  ____handGrabShouldUnselect;

/// @brief Field _cachedResult, offset: 0x170, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabResult*  ____cachedResult;

/// @brief Field _currentGrabType, offset: 0x178, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____currentGrabType;

/// [CompilerGenerated]
/// @brief Field <Movement>k__BackingField, offset: 0x180, size: 0x8, def value: None
 ::Oculus::Interaction::IMovement*  ____Movement_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MovementFinished>k__BackingField, offset: 0x188, size: 0x1, def value: None
 bool  ____MovementFinished_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandGrabTarget>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabTarget*  ____HandGrabTarget_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HitPoint>k__BackingField, offset: 0x198, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____HitPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FingersStrength>k__BackingField, offset: 0x1a4, size: 0x4, def value: None
 float_t  ____FingersStrength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WristStrength>k__BackingField, offset: 0x1a8, size: 0x4, def value: None
 float_t  ____WristStrength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WristToGrabPoseOffset>k__BackingField, offset: 0x1ac, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____WristToGrabPoseOffset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____hand) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____Hand_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____handGrabApi) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____supportedGrabTypes) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____grabOrigin) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____gripPoint) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____pinchPoint) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____velocityCalculator) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____VelocityCalculator_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____distantCandidateComputer) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____handGrabShouldSelect) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____handGrabShouldUnselect) == 0x169, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____cachedResult) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____currentGrabType) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____Movement_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____MovementFinished_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____HandGrabTarget_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____HitPoint_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____FingersStrength_k__BackingField) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____WristStrength_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor, ____WristToGrabPoseOffset_k__BackingField) == 0x1ac, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor) == 0x1c8, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
