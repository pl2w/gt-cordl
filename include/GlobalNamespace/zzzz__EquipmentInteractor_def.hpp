#pragma once
// IWYU pragma private; include "GlobalNamespace/EquipmentInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EquipmentInteractor)
namespace GlobalNamespace {
class BuilderPieceInteractor;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class HoldableObject;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EquipmentInteractor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EquipmentInteractor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EquipmentInteractor*, "", "EquipmentInteractor");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: EquipmentInteractor
class CORDL_TYPE EquipmentInteractor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BodyClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  BodyClimber;

 __declspec(property(get=get_LeftClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  LeftClimber;

 __declspec(property(get=get_RightClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  RightClimber;

/// @brief Field autoGrabLeft, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoGrabLeft, put=__cordl_internal_set_autoGrabLeft)) bool  autoGrabLeft;

/// @brief Field autoGrabRight, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoGrabRight, put=__cordl_internal_set_autoGrabRight)) bool  autoGrabRight;

/// @brief Field bodyClimber, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyClimber, put=__cordl_internal_set_bodyClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  bodyClimber;

/// @brief Field builderPieceInteractor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderPieceInteractor, put=__cordl_internal_set_builderPieceInteractor)) ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  builderPieceInteractor;

/// @brief Field disableLeftGrab, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableLeftGrab, put=__cordl_internal_set_disableLeftGrab)) bool  disableLeftGrab;

/// @brief Field disableRightGrab, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableRightGrab, put=__cordl_internal_set_disableRightGrab)) bool  disableRightGrab;

/// @brief Field grabHysteresis, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabHysteresis, put=__cordl_internal_set_grabHysteresis)) float_t  grabHysteresis;

/// @brief Field grabRadius, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabRadius, put=__cordl_internal_set_grabRadius)) float_t  grabRadius;

/// @brief Field grabThreshold, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabThreshold, put=__cordl_internal_set_grabThreshold)) float_t  grabThreshold;

/// @brief Field grabValue, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabValue, put=__cordl_internal_set_grabValue)) float_t  grabValue;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::EquipmentInteractor>  instance;

/// @brief Field interactionPointsToRemove, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPointsToRemove, put=__cordl_internal_set_interactionPointsToRemove)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  interactionPointsToRemove;

/// @brief Field isLeftGrabbing, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftGrabbing, put=__cordl_internal_set_isLeftGrabbing)) bool  isLeftGrabbing;

/// @brief Field isRightGrabbing, offset 0x87, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRightGrabbing, put=__cordl_internal_set_isRightGrabbing)) bool  isRightGrabbing;

/// @brief Field iteratingInteractionPoints, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_iteratingInteractionPoints, put=__cordl_internal_set_iteratingInteractionPoints)) bool  iteratingInteractionPoints;

/// @brief Field justGrabbed, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_justGrabbed, put=__cordl_internal_set_justGrabbed)) bool  justGrabbed;

/// @brief Field justReleased, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_justReleased, put=__cordl_internal_set_justReleased)) bool  justReleased;

/// @brief Field leftClimber, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftClimber, put=__cordl_internal_set_leftClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  leftClimber;

/// @brief Field leftHand, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::GameObject>  leftHand;

/// @brief Field leftHandDevice, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHandDevice, put=__cordl_internal_set_leftHandDevice)) ::UnityEngine::XR::InputDevice  leftHandDevice;

/// @brief Field leftHandHeldEquipment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandHeldEquipment, put=__cordl_internal_set_leftHandHeldEquipment)) ::GlobalNamespace::IHoldableObject*  leftHandHeldEquipment;

/// @brief Field overlapInteractionPointsLeft, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapInteractionPointsLeft, put=__cordl_internal_set_overlapInteractionPointsLeft)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  overlapInteractionPointsLeft;

/// @brief Field overlapInteractionPointsRight, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapInteractionPointsRight, put=__cordl_internal_set_overlapInteractionPointsRight)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  overlapInteractionPointsRight;

/// @brief Field rightClimber, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightClimber, put=__cordl_internal_set_rightClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  rightClimber;

/// @brief Field rightHand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::GameObject>  rightHand;

/// @brief Field rightHandDevice, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHandDevice, put=__cordl_internal_set_rightHandDevice)) ::UnityEngine::XR::InputDevice  rightHandDevice;

/// @brief Field rightHandHeldEquipment, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandHeldEquipment, put=__cordl_internal_set_rightHandHeldEquipment)) ::GlobalNamespace::IHoldableObject*  rightHandHeldEquipment;

/// @brief Field tempValue, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempValue, put=__cordl_internal_set_tempValue)) float_t  tempValue;

/// @brief Field tempZone, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempZone, put=__cordl_internal_set_tempZone)) ::UnityW<::GlobalNamespace::DropZone>  tempZone;

/// @brief Field wasLeftGrabPressed, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasLeftGrabPressed, put=__cordl_internal_set_wasLeftGrabPressed)) bool  wasLeftGrabPressed;

/// @brief Field wasRightGrabPressed, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasRightGrabPressed, put=__cordl_internal_set_wasRightGrabPressed)) bool  wasRightGrabPressed;

/// @brief Method Awake, addr 0x571aef8, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanGrabLeft, addr 0x571b288, size 0xb8, virtual false, abstract: false, final false
inline bool CanGrabLeft() ;

/// @brief Method CanGrabRight, addr 0x571b340, size 0xb8, virtual false, abstract: false, final false
inline bool CanGrabRight() ;

/// @brief Method CheckInputValue, addr 0x571b758, size 0x94, virtual false, abstract: false, final false
inline void CheckInputValue(bool  isLeftHand) ;

/// @brief Method FireHandInteractions, addr 0x571b7ec, size 0x67c, virtual false, abstract: false, final false
inline void FireHandInteractions(::UnityEngine::GameObject*  interactingHand, bool  isLeftHand, ::GlobalNamespace::BuilderPiece*  pieceInHand) ;

/// @brief Method ForceDropAnyEquipment, addr 0x571c130, size 0x28, virtual false, abstract: false, final false
inline void ForceDropAnyEquipment() ;

/// @brief Method ForceDropEquipment, addr 0x571c0d8, size 0x58, virtual false, abstract: false, final false
inline void ForceDropEquipment(::GlobalNamespace::IHoldableObject*  equipment) ;

/// @brief Method ForceDropManipulatableObject, addr 0x571c158, size 0x258, virtual false, abstract: false, final false
inline void ForceDropManipulatableObject(::GlobalNamespace::HoldableObject*  manipulatableObject) ;

/// @brief Method ForceStopClimbing, addr 0x571b0f0, size 0x58, virtual false, abstract: false, final false
inline void ForceStopClimbing() ;

/// @brief Method GetIsHolding, addr 0x571b148, size 0x20, virtual false, abstract: false, final false
inline bool GetIsHolding(::UnityEngine::XR::XRNode  node) ;

/// @brief Method InteractionPointDisabled, addr 0x571b17c, size 0x10c, virtual false, abstract: false, final false
inline void InteractionPointDisabled(::GlobalNamespace::InteractionPoint*  interactionPoint) ;

/// @brief Method IsGrabDisabled, addr 0x571b168, size 0x14, virtual false, abstract: false, final false
inline bool IsGrabDisabled(::UnityEngine::XR::XRNode  node) ;

/// @brief Method LateUpdate, addr 0x571b3f8, size 0x360, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::EquipmentInteractor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x571b028, size 0xc8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReleaseLeftHand, addr 0x5719304, size 0x130, virtual false, abstract: false, final false
inline void ReleaseLeftHand() ;

/// @brief Method ReleaseRightHand, addr 0x5719434, size 0x130, virtual false, abstract: false, final false
inline void ReleaseRightHand() ;

/// @brief Method UpdateHandEquipment, addr 0x571be68, size 0x270, virtual false, abstract: false, final false
inline void UpdateHandEquipment(::GlobalNamespace::IHoldableObject*  newEquipment, bool  forLeftHand) ;

constexpr bool const& __cordl_internal_get_autoGrabLeft() const;

constexpr bool& __cordl_internal_get_autoGrabLeft() ;

constexpr bool const& __cordl_internal_get_autoGrabRight() const;

constexpr bool& __cordl_internal_get_autoGrabRight() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& __cordl_internal_get_bodyClimber() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& __cordl_internal_get_bodyClimber() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& __cordl_internal_get_builderPieceInteractor() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& __cordl_internal_get_builderPieceInteractor() ;

constexpr bool const& __cordl_internal_get_disableLeftGrab() const;

constexpr bool& __cordl_internal_get_disableLeftGrab() ;

constexpr bool const& __cordl_internal_get_disableRightGrab() const;

constexpr bool& __cordl_internal_get_disableRightGrab() ;

constexpr float_t const& __cordl_internal_get_grabHysteresis() const;

constexpr float_t& __cordl_internal_get_grabHysteresis() ;

constexpr float_t const& __cordl_internal_get_grabRadius() const;

constexpr float_t& __cordl_internal_get_grabRadius() ;

constexpr float_t const& __cordl_internal_get_grabThreshold() const;

constexpr float_t& __cordl_internal_get_grabThreshold() ;

constexpr float_t const& __cordl_internal_get_grabValue() const;

constexpr float_t& __cordl_internal_get_grabValue() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& __cordl_internal_get_interactionPointsToRemove() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& __cordl_internal_get_interactionPointsToRemove() ;

constexpr bool const& __cordl_internal_get_isLeftGrabbing() const;

constexpr bool& __cordl_internal_get_isLeftGrabbing() ;

constexpr bool const& __cordl_internal_get_isRightGrabbing() const;

constexpr bool& __cordl_internal_get_isRightGrabbing() ;

constexpr bool const& __cordl_internal_get_iteratingInteractionPoints() const;

constexpr bool& __cordl_internal_get_iteratingInteractionPoints() ;

constexpr bool const& __cordl_internal_get_justGrabbed() const;

constexpr bool& __cordl_internal_get_justGrabbed() ;

constexpr bool const& __cordl_internal_get_justReleased() const;

constexpr bool& __cordl_internal_get_justReleased() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& __cordl_internal_get_leftClimber() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& __cordl_internal_get_leftClimber() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHand() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_leftHandDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_leftHandDevice() ;

constexpr ::GlobalNamespace::IHoldableObject* const& __cordl_internal_get_leftHandHeldEquipment() const;

constexpr ::GlobalNamespace::IHoldableObject*& __cordl_internal_get_leftHandHeldEquipment() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& __cordl_internal_get_overlapInteractionPointsLeft() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& __cordl_internal_get_overlapInteractionPointsLeft() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& __cordl_internal_get_overlapInteractionPointsRight() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& __cordl_internal_get_overlapInteractionPointsRight() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& __cordl_internal_get_rightClimber() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& __cordl_internal_get_rightClimber() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHand() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_rightHandDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_rightHandDevice() ;

constexpr ::GlobalNamespace::IHoldableObject* const& __cordl_internal_get_rightHandHeldEquipment() const;

constexpr ::GlobalNamespace::IHoldableObject*& __cordl_internal_get_rightHandHeldEquipment() ;

constexpr float_t const& __cordl_internal_get_tempValue() const;

constexpr float_t& __cordl_internal_get_tempValue() ;

constexpr ::UnityW<::GlobalNamespace::DropZone> const& __cordl_internal_get_tempZone() const;

constexpr ::UnityW<::GlobalNamespace::DropZone>& __cordl_internal_get_tempZone() ;

constexpr bool const& __cordl_internal_get_wasLeftGrabPressed() const;

constexpr bool& __cordl_internal_get_wasLeftGrabPressed() ;

constexpr bool const& __cordl_internal_get_wasRightGrabPressed() const;

constexpr bool& __cordl_internal_get_wasRightGrabPressed() ;

constexpr void __cordl_internal_set_autoGrabLeft(bool  value) ;

constexpr void __cordl_internal_set_autoGrabRight(bool  value) ;

constexpr void __cordl_internal_set_bodyClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value) ;

constexpr void __cordl_internal_set_builderPieceInteractor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value) ;

constexpr void __cordl_internal_set_disableLeftGrab(bool  value) ;

constexpr void __cordl_internal_set_disableRightGrab(bool  value) ;

constexpr void __cordl_internal_set_grabHysteresis(float_t  value) ;

constexpr void __cordl_internal_set_grabRadius(float_t  value) ;

constexpr void __cordl_internal_set_grabThreshold(float_t  value) ;

constexpr void __cordl_internal_set_grabValue(float_t  value) ;

constexpr void __cordl_internal_set_interactionPointsToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value) ;

constexpr void __cordl_internal_set_isLeftGrabbing(bool  value) ;

constexpr void __cordl_internal_set_isRightGrabbing(bool  value) ;

constexpr void __cordl_internal_set_iteratingInteractionPoints(bool  value) ;

constexpr void __cordl_internal_set_justGrabbed(bool  value) ;

constexpr void __cordl_internal_set_justReleased(bool  value) ;

constexpr void __cordl_internal_set_leftClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftHandDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftHandHeldEquipment(::GlobalNamespace::IHoldableObject*  value) ;

constexpr void __cordl_internal_set_overlapInteractionPointsLeft(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value) ;

constexpr void __cordl_internal_set_overlapInteractionPointsRight(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value) ;

constexpr void __cordl_internal_set_rightClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightHandDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_rightHandHeldEquipment(::GlobalNamespace::IHoldableObject*  value) ;

constexpr void __cordl_internal_set_tempValue(float_t  value) ;

constexpr void __cordl_internal_set_tempZone(::UnityW<::GlobalNamespace::DropZone>  value) ;

constexpr void __cordl_internal_set_wasLeftGrabPressed(bool  value) ;

constexpr void __cordl_internal_set_wasRightGrabPressed(bool  value) ;

/// @brief Method .ctor, addr 0x571c3b0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::EquipmentInteractor> getStaticF_instance() ;

/// @brief Method get_BodyClimber, addr 0x571aee0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> get_BodyClimber() ;

/// @brief Method get_LeftClimber, addr 0x571aee8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> get_LeftClimber() ;

/// @brief Method get_RightClimber, addr 0x571aef0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> get_RightClimber() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::EquipmentInteractor>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EquipmentInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EquipmentInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EquipmentInteractor(EquipmentInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EquipmentInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EquipmentInteractor(EquipmentInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1199};

/// @brief Field leftHandHeldEquipment, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IHoldableObject*  ___leftHandHeldEquipment;

/// @brief Field rightHandHeldEquipment, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IHoldableObject*  ___rightHandHeldEquipment;

/// @brief Field builderPieceInteractor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPieceInteractor>  ___builderPieceInteractor;

/// @brief Field rightHand, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightHand;

/// @brief Field leftHand, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftHand;

/// @brief Field leftHandDevice, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___leftHandDevice;

/// @brief Field rightHandDevice, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___rightHandDevice;

/// @brief Field overlapInteractionPointsLeft, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ___overlapInteractionPointsLeft;

/// @brief Field overlapInteractionPointsRight, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ___overlapInteractionPointsRight;

/// @brief Field grabRadius, offset: 0x78, size: 0x4, def value: None
 float_t  ___grabRadius;

/// @brief Field grabThreshold, offset: 0x7c, size: 0x4, def value: None
 float_t  ___grabThreshold;

/// @brief Field grabHysteresis, offset: 0x80, size: 0x4, def value: None
 float_t  ___grabHysteresis;

/// @brief Field wasLeftGrabPressed, offset: 0x84, size: 0x1, def value: None
 bool  ___wasLeftGrabPressed;

/// @brief Field wasRightGrabPressed, offset: 0x85, size: 0x1, def value: None
 bool  ___wasRightGrabPressed;

/// @brief Field isLeftGrabbing, offset: 0x86, size: 0x1, def value: None
 bool  ___isLeftGrabbing;

/// @brief Field isRightGrabbing, offset: 0x87, size: 0x1, def value: None
 bool  ___isRightGrabbing;

/// @brief Field justReleased, offset: 0x88, size: 0x1, def value: None
 bool  ___justReleased;

/// @brief Field justGrabbed, offset: 0x89, size: 0x1, def value: None
 bool  ___justGrabbed;

/// @brief Field disableLeftGrab, offset: 0x8a, size: 0x1, def value: None
 bool  ___disableLeftGrab;

/// @brief Field disableRightGrab, offset: 0x8b, size: 0x1, def value: None
 bool  ___disableRightGrab;

/// @brief Field autoGrabLeft, offset: 0x8c, size: 0x1, def value: None
 bool  ___autoGrabLeft;

/// @brief Field autoGrabRight, offset: 0x8d, size: 0x1, def value: None
 bool  ___autoGrabRight;

/// @brief Field grabValue, offset: 0x90, size: 0x4, def value: None
 float_t  ___grabValue;

/// @brief Field tempValue, offset: 0x94, size: 0x4, def value: None
 float_t  ___tempValue;

/// @brief Field tempZone, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DropZone>  ___tempZone;

/// @brief Field iteratingInteractionPoints, offset: 0xa0, size: 0x1, def value: None
 bool  ___iteratingInteractionPoints;

/// @brief Field interactionPointsToRemove, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ___interactionPointsToRemove;

/// [SerializeField]
/// @brief Field bodyClimber, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  ___bodyClimber;

/// [SerializeField]
/// @brief Field leftClimber, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  ___leftClimber;

/// [SerializeField]
/// @brief Field rightClimber, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  ___rightClimber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___leftHandHeldEquipment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___rightHandHeldEquipment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___builderPieceInteractor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___rightHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___leftHand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___leftHandDevice) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___rightHandDevice) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___overlapInteractionPointsLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___overlapInteractionPointsRight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___grabRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___grabThreshold) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___grabHysteresis) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___wasLeftGrabPressed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___wasRightGrabPressed) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___isLeftGrabbing) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___isRightGrabbing) == 0x87, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___justReleased) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___justGrabbed) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___disableLeftGrab) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___disableRightGrab) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___autoGrabLeft) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___autoGrabRight) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___grabValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___tempValue) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___tempZone) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___iteratingInteractionPoints) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___interactionPointsToRemove) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___bodyClimber) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___leftClimber) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EquipmentInteractor, ___rightClimber) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EquipmentInteractor) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
