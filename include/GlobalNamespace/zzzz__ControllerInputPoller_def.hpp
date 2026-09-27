#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallbacksCadenceInfo_def.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_def.hpp"
#include "GlobalNamespace/zzzz__GorillaControllerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerInputPoller)
namespace GlobalNamespace {
struct ControllerInputPoller__EPressCadence;
}
namespace GlobalNamespace {
struct ControllerInputPoller__InputCallback;
}
namespace GlobalNamespace {
struct ControllerInputPoller__InputCallbacksCadenceInfo;
}
namespace GlobalNamespace {
class ControllerInputPoller___c__DisplayClass153_0;
}
namespace GlobalNamespace {
struct EControllerInputPressFlags;
}
namespace GlobalNamespace {
struct EHandednessFlags;
}
namespace GlobalNamespace {
struct GorillaControllerType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerInputPoller;
}
namespace GlobalNamespace {
class ControllerInputPoller___c__DisplayClass153_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ControllerInputPoller*);
MARK_REF_T(::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerInputPoller*, "", "ControllerInputPoller");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*, "", "ControllerInputPoller/<>c__DisplayClass153_0");
// Dependencies ControllerInputPoller::_InputCallbacksCadenceInfo, EControllerInputPressFlags, GorillaControllerType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerInputPoller
class CORDL_TYPE ControllerInputPoller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EPressCadence = ::GlobalNamespace::ControllerInputPoller__EPressCadence;

using _InputCallback = ::GlobalNamespace::ControllerInputPoller__InputCallback;

using _InputCallbacksCadenceInfo = ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo;

using __c__DisplayClass153_0 = ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0;

 __declspec(property(get=get_LeftHandValid)) bool  LeftHandValid;

 __declspec(property(get=get_RightHandValid)) bool  RightHandValid;

/// @brief Field <controllerType>k__BackingField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerType_k__BackingField, put=__cordl_internal_set__controllerType_k__BackingField)) ::GlobalNamespace::GorillaControllerType  _controllerType_k__BackingField;

/// @brief Field _g_callbacks_onPressEnd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_callbacks_onPressEnd, put=setStaticF__g_callbacks_onPressEnd)) ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  _g_callbacks_onPressEnd;

/// @brief Field _g_callbacks_onPressStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_callbacks_onPressStart, put=setStaticF__g_callbacks_onPressStart)) ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  _g_callbacks_onPressStart;

/// @brief Field _g_callbacks_onPressUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_callbacks_onPressUpdate, put=setStaticF__g_callbacks_onPressUpdate)) ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  _g_callbacks_onPressUpdate;

/// @brief Field _leftAngularVelocity, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftAngularVelocity, put=__cordl_internal_set__leftAngularVelocity)) ::UnityEngine::Vector3  _leftAngularVelocity;

/// @brief Field _leftIndexPressed, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftIndexPressed, put=__cordl_internal_set__leftIndexPressed)) bool  _leftIndexPressed;

/// @brief Field _leftIndexPressedThisFrame, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftIndexPressedThisFrame, put=__cordl_internal_set__leftIndexPressedThisFrame)) bool  _leftIndexPressedThisFrame;

/// @brief Field _leftIndexReleased, offset 0xd6, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftIndexReleased, put=__cordl_internal_set__leftIndexReleased)) bool  _leftIndexReleased;

/// @brief Field _leftIndexReleasedThisFrame, offset 0xda, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftIndexReleasedThisFrame, put=__cordl_internal_set__leftIndexReleasedThisFrame)) bool  _leftIndexReleasedThisFrame;

/// @brief Field <leftPressFlagsLastFrame>k__BackingField, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftPressFlagsLastFrame_k__BackingField, put=__cordl_internal_set__leftPressFlagsLastFrame_k__BackingField)) ::GlobalNamespace::EControllerInputPressFlags  _leftPressFlagsLastFrame_k__BackingField;

/// @brief Field <leftPressFlags>k__BackingField, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftPressFlags_k__BackingField, put=__cordl_internal_set__leftPressFlags_k__BackingField)) ::GlobalNamespace::EControllerInputPressFlags  _leftPressFlags_k__BackingField;

/// @brief Field _leftVelocity, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftVelocity, put=__cordl_internal_set__leftVelocity)) ::UnityEngine::Vector3  _leftVelocity;

/// @brief Field _rightAngularVelocity, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightAngularVelocity, put=__cordl_internal_set__rightAngularVelocity)) ::UnityEngine::Vector3  _rightAngularVelocity;

/// @brief Field _rightIndexPressed, offset 0xd7, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightIndexPressed, put=__cordl_internal_set__rightIndexPressed)) bool  _rightIndexPressed;

/// @brief Field _rightIndexPressedThisFrame, offset 0xdb, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightIndexPressedThisFrame, put=__cordl_internal_set__rightIndexPressedThisFrame)) bool  _rightIndexPressedThisFrame;

/// @brief Field _rightIndexReleased, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightIndexReleased, put=__cordl_internal_set__rightIndexReleased)) bool  _rightIndexReleased;

/// @brief Field _rightIndexReleasedThisFrame, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightIndexReleasedThisFrame, put=__cordl_internal_set__rightIndexReleasedThisFrame)) bool  _rightIndexReleasedThisFrame;

/// @brief Field <rightPressFlagsLastFrame>k__BackingField, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightPressFlagsLastFrame_k__BackingField, put=__cordl_internal_set__rightPressFlagsLastFrame_k__BackingField)) ::GlobalNamespace::EControllerInputPressFlags  _rightPressFlagsLastFrame_k__BackingField;

/// @brief Field <rightPressFlags>k__BackingField, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightPressFlags_k__BackingField, put=__cordl_internal_set__rightPressFlags_k__BackingField)) ::GlobalNamespace::EControllerInputPressFlags  _rightPressFlags_k__BackingField;

/// @brief Field _rightVelocity, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightVelocity, put=__cordl_internal_set__rightVelocity)) ::UnityEngine::Vector3  _rightVelocity;

 __declspec(property(get=get_controllerType, put=set_controllerType)) ::GlobalNamespace::GorillaControllerType  controllerType;

/// @brief Field didModifyOnUpdate, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_didModifyOnUpdate, put=__cordl_internal_set_didModifyOnUpdate)) bool  didModifyOnUpdate;

/// @brief Field handGripCurve, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_handGripCurve, put=__cordl_internal_set_handGripCurve)) ::UnityEngine::AnimationCurve*  handGripCurve;

/// @brief Field handTrackingActive, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_handTrackingActive, put=__cordl_internal_set_handTrackingActive)) bool  handTrackingActive;

/// @brief Field handTriggerCurve, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTriggerCurve, put=__cordl_internal_set_handTriggerCurve)) ::UnityEngine::AnimationCurve*  handTriggerCurve;

/// @brief Field headDevice, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_headDevice, put=__cordl_internal_set_headDevice)) ::UnityEngine::XR::InputDevice  headDevice;

/// @brief Field headPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_headPosition, put=__cordl_internal_set_headPosition)) ::UnityEngine::Vector3  headPosition;

/// @brief Field headRotation, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_headRotation, put=__cordl_internal_set_headRotation)) ::UnityEngine::Quaternion  headRotation;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ControllerInputPoller>  instance;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftAngularVelocity)) ::UnityEngine::Vector3  leftAngularVelocity;

/// @brief Field leftControllerDevice, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftControllerDevice, put=__cordl_internal_set_leftControllerDevice)) ::UnityEngine::XR::InputDevice  leftControllerDevice;

/// @brief Field leftControllerGripFloat, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftControllerGripFloat, put=__cordl_internal_set_leftControllerGripFloat)) float_t  leftControllerGripFloat;

/// @brief Field leftControllerIndexFloat, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftControllerIndexFloat, put=__cordl_internal_set_leftControllerIndexFloat)) float_t  leftControllerIndexFloat;

/// @brief Field leftControllerIndexTouch, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftControllerIndexTouch, put=__cordl_internal_set_leftControllerIndexTouch)) float_t  leftControllerIndexTouch;

/// @brief Field leftControllerIsValid, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerIsValid, put=__cordl_internal_set_leftControllerIsValid)) bool  leftControllerIsValid;

/// @brief Field leftControllerPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftControllerPosition, put=__cordl_internal_set_leftControllerPosition)) ::UnityEngine::Vector3  leftControllerPosition;

/// @brief Field leftControllerPrimary2DAxis, offset 0x114, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftControllerPrimary2DAxis, put=__cordl_internal_set_leftControllerPrimary2DAxis)) ::UnityEngine::Vector2  leftControllerPrimary2DAxis;

/// @brief Field leftControllerPrimaryButton, offset 0xc3, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerPrimaryButton, put=__cordl_internal_set_leftControllerPrimaryButton)) bool  leftControllerPrimaryButton;

/// @brief Field leftControllerPrimaryButtonTouch, offset 0xc7, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerPrimaryButtonTouch, put=__cordl_internal_set_leftControllerPrimaryButtonTouch)) bool  leftControllerPrimaryButtonTouch;

/// @brief Field leftControllerRotation, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftControllerRotation, put=__cordl_internal_set_leftControllerRotation)) ::UnityEngine::Quaternion  leftControllerRotation;

/// @brief Field leftControllerSecondaryButton, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerSecondaryButton, put=__cordl_internal_set_leftControllerSecondaryButton)) bool  leftControllerSecondaryButton;

/// @brief Field leftControllerSecondaryButtonTouch, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerSecondaryButtonTouch, put=__cordl_internal_set_leftControllerSecondaryButtonTouch)) bool  leftControllerSecondaryButtonTouch;

/// @brief Field leftControllerTriggerButton, offset 0xcb, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftControllerTriggerButton, put=__cordl_internal_set_leftControllerTriggerButton)) bool  leftControllerTriggerButton;

/// @brief Field leftGrab, offset 0xcd, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftGrab, put=__cordl_internal_set_leftGrab)) bool  leftGrab;

/// @brief Field leftGrabMomentary, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftGrabMomentary, put=__cordl_internal_set_leftGrabMomentary)) bool  leftGrabMomentary;

/// @brief Field leftGrabRelease, offset 0xce, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftGrabRelease, put=__cordl_internal_set_leftGrabRelease)) bool  leftGrabRelease;

/// @brief Field leftGrabReleaseMomentary, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftGrabReleaseMomentary, put=__cordl_internal_set_leftGrabReleaseMomentary)) bool  leftGrabReleaseMomentary;

/// @brief Field leftHandOffset, offset 0x14c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandOffset, put=__cordl_internal_set_leftHandOffset)) ::UnityEngine::Vector3  leftHandOffset;

/// @brief Field leftHandRotation, offset 0x158, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHandRotation, put=__cordl_internal_set_leftHandRotation)) ::UnityEngine::Quaternion  leftHandRotation;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftIndexPressed)) bool  leftIndexPressed;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftIndexPressedThisFrame)) bool  leftIndexPressedThisFrame;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftIndexReleased)) bool  leftIndexReleased;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftIndexReleasedThisFrame)) bool  leftIndexReleasedThisFrame;

 __declspec(property(get=get_leftPressFlags, put=set_leftPressFlags)) ::GlobalNamespace::EControllerInputPressFlags  leftPressFlags;

 __declspec(property(get=get_leftPressFlagsLastFrame, put=set_leftPressFlagsLastFrame)) ::GlobalNamespace::EControllerInputPressFlags  leftPressFlagsLastFrame;

/// @brief [DebugReadout]
 __declspec(property(get=get_leftVelocity)) ::UnityEngine::Vector3  leftVelocity;

/// @brief Field onUpdate, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdate, put=__cordl_internal_set_onUpdate)) ::System::Collections::Generic::List_1<::System::Action*>*  onUpdate;

/// @brief Field onUpdateNext, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdateNext, put=__cordl_internal_set_onUpdateNext)) ::System::Collections::Generic::List_1<::System::Action*>*  onUpdateNext;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightAngularVelocity)) ::UnityEngine::Vector3  rightAngularVelocity;

/// @brief Field rightControllerDevice, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightControllerDevice, put=__cordl_internal_set_rightControllerDevice)) ::UnityEngine::XR::InputDevice  rightControllerDevice;

/// @brief Field rightControllerGripFloat, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightControllerGripFloat, put=__cordl_internal_set_rightControllerGripFloat)) float_t  rightControllerGripFloat;

/// @brief Field rightControllerIndexFloat, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightControllerIndexFloat, put=__cordl_internal_set_rightControllerIndexFloat)) float_t  rightControllerIndexFloat;

/// @brief Field rightControllerIndexTouch, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightControllerIndexTouch, put=__cordl_internal_set_rightControllerIndexTouch)) float_t  rightControllerIndexTouch;

/// @brief Field rightControllerIsValid, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerIsValid, put=__cordl_internal_set_rightControllerIsValid)) bool  rightControllerIsValid;

/// @brief Field rightControllerPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightControllerPosition, put=__cordl_internal_set_rightControllerPosition)) ::UnityEngine::Vector3  rightControllerPosition;

/// @brief Field rightControllerPrimary2DAxis, offset 0x11c, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightControllerPrimary2DAxis, put=__cordl_internal_set_rightControllerPrimary2DAxis)) ::UnityEngine::Vector2  rightControllerPrimary2DAxis;

/// @brief Field rightControllerPrimaryButton, offset 0xc5, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerPrimaryButton, put=__cordl_internal_set_rightControllerPrimaryButton)) bool  rightControllerPrimaryButton;

/// @brief Field rightControllerPrimaryButtonTouch, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerPrimaryButtonTouch, put=__cordl_internal_set_rightControllerPrimaryButtonTouch)) bool  rightControllerPrimaryButtonTouch;

/// @brief Field rightControllerRotation, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightControllerRotation, put=__cordl_internal_set_rightControllerRotation)) ::UnityEngine::Quaternion  rightControllerRotation;

/// @brief Field rightControllerSecondaryButton, offset 0xc6, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerSecondaryButton, put=__cordl_internal_set_rightControllerSecondaryButton)) bool  rightControllerSecondaryButton;

/// @brief Field rightControllerSecondaryButtonTouch, offset 0xca, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerSecondaryButtonTouch, put=__cordl_internal_set_rightControllerSecondaryButtonTouch)) bool  rightControllerSecondaryButtonTouch;

/// @brief Field rightControllerTriggerButton, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightControllerTriggerButton, put=__cordl_internal_set_rightControllerTriggerButton)) bool  rightControllerTriggerButton;

/// @brief Field rightGrab, offset 0xcf, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightGrab, put=__cordl_internal_set_rightGrab)) bool  rightGrab;

/// @brief Field rightGrabMomentary, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightGrabMomentary, put=__cordl_internal_set_rightGrabMomentary)) bool  rightGrabMomentary;

/// @brief Field rightGrabRelease, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightGrabRelease, put=__cordl_internal_set_rightGrabRelease)) bool  rightGrabRelease;

/// @brief Field rightGrabReleaseMomentary, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightGrabReleaseMomentary, put=__cordl_internal_set_rightGrabReleaseMomentary)) bool  rightGrabReleaseMomentary;

/// @brief Field rightHandOffset, offset 0x168, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandOffset, put=__cordl_internal_set_rightHandOffset)) ::UnityEngine::Vector3  rightHandOffset;

/// @brief Field rightHandRotation, offset 0x174, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHandRotation, put=__cordl_internal_set_rightHandRotation)) ::UnityEngine::Quaternion  rightHandRotation;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightIndexPressed)) bool  rightIndexPressed;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightIndexPressedThisFrame)) bool  rightIndexPressedThisFrame;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightIndexReleased)) bool  rightIndexReleased;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightIndexReleasedThisFrame)) bool  rightIndexReleasedThisFrame;

 __declspec(property(get=get_rightPressFlags, put=set_rightPressFlags)) ::GlobalNamespace::EControllerInputPressFlags  rightPressFlags;

 __declspec(property(get=get_rightPressFlagsLastFrame, put=set_rightPressFlagsLastFrame)) ::GlobalNamespace::EControllerInputPressFlags  rightPressFlagsLastFrame;

/// @brief Field rightStickLRFloat, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightStickLRFloat, put=__cordl_internal_set_rightStickLRFloat)) float_t  rightStickLRFloat;

/// @brief [DebugReadout]
 __declspec(property(get=get_rightVelocity)) ::UnityEngine::Vector3  rightVelocity;

/// @brief Method AddCallbackOnPressEnd, addr 0x57e7038, size 0x70, virtual false, abstract: false, final false
static inline void AddCallbackOnPressEnd(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method AddCallbackOnPressStart, addr 0x57e6e7c, size 0x70, virtual false, abstract: false, final false
static inline void AddCallbackOnPressStart(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method AddCallbackOnPressUpdate, addr 0x57e70a8, size 0x70, virtual false, abstract: false, final false
static inline void AddCallbackOnPressUpdate(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method AddUpdateCallback, addr 0x57e4d54, size 0x1e4, virtual false, abstract: false, final false
static inline void AddUpdateCallback(::System::Action*  callback) ;

/// @brief Method Awake, addr 0x57e4bfc, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateGrabState, addr 0x57e5900, size 0x5c, virtual false, abstract: false, final false
inline void CalculateGrabState(float_t  grabValue, ::by_ref<bool>  grab, ::by_ref<bool>  grabRelease, ::by_ref<bool>  grabMomentary, ::by_ref<bool>  grabReleaseMomentary, float_t  grabThreshold, float_t  grabReleaseThreshold) ;

/// @brief Method DeviceAngularVelocity, addr 0x57e6b0c, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 DeviceAngularVelocity(::UnityEngine::XR::XRNode  node) ;

/// @brief Method DevicePosition, addr 0x57e4904, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 DevicePosition(::UnityEngine::XR::XRNode  node) ;

/// @brief Method DeviceRotation, addr 0x57e68a4, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion DeviceRotation(::UnityEngine::XR::XRNode  node) ;

/// @brief Method DeviceVelocity, addr 0x57e6a04, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 DeviceVelocity(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetGrab, addr 0x57e5fc8, size 0xc4, virtual false, abstract: false, final false
static inline bool GetGrab(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetGrabMomentary, addr 0x57e614c, size 0xc4, virtual false, abstract: false, final false
static inline bool GetGrabMomentary(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetGrabRelease, addr 0x57e608c, size 0xc0, virtual false, abstract: false, final false
static inline bool GetGrabRelease(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetGrabReleaseMomentary, addr 0x57e6210, size 0xc0, virtual false, abstract: false, final false
static inline bool GetGrabReleaseMomentary(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetIndexPressed, addr 0x57e5d2c, size 0xc4, virtual false, abstract: false, final false
static inline bool GetIndexPressed(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetIndexPressedThisFrame, addr 0x57e5eb0, size 0x8c, virtual false, abstract: false, final false
static inline bool GetIndexPressedThisFrame(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetIndexReleased, addr 0x57e5df0, size 0xc0, virtual false, abstract: false, final false
static inline bool GetIndexReleased(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetIndexReleasedThisFrame, addr 0x57e5f3c, size 0x8c, virtual false, abstract: false, final false
static inline bool GetIndexReleasedThisFrame(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetInputStateFlags, addr 0x57e6d84, size 0xb8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EControllerInputPressFlags GetInputStateFlags(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GripFloat, addr 0x57e6680, size 0xb8, virtual false, abstract: false, final false
static inline float_t GripFloat(::UnityEngine::XR::XRNode  node) ;

/// @brief Method HandTrackingActive, addr 0x57e5cc4, size 0x68, virtual false, abstract: false, final false
static inline bool HandTrackingActive() ;

/// @brief Method HasPressFlags, addr 0x57e6d14, size 0x70, virtual false, abstract: false, final false
static inline bool HasPressFlags(::UnityEngine::XR::XRNode  node, ::GlobalNamespace::EControllerInputPressFlags  inputStateFlags) ;

/// @brief Method LateUpdate, addr 0x57e50c4, size 0x83c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ControllerInputPoller* New_ctor() ;

/// @brief Method PositionValid, addr 0x57e6c14, size 0x100, virtual false, abstract: false, final false
static inline bool PositionValid(::UnityEngine::XR::XRNode  node) ;

/// @brief Method Primary2DAxis, addr 0x57e62d0, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Primary2DAxis(::UnityEngine::XR::XRNode  node) ;

/// @brief Method PrimaryButtonPress, addr 0x57e6378, size 0xc4, virtual false, abstract: false, final false
static inline bool PrimaryButtonPress(::UnityEngine::XR::XRNode  node) ;

/// @brief Method PrimaryButtonTouch, addr 0x57e64fc, size 0xc4, virtual false, abstract: false, final false
static inline bool PrimaryButtonTouch(::UnityEngine::XR::XRNode  node) ;

/// @brief Method RecalculateGrabState, addr 0x57e5a70, size 0x254, virtual false, abstract: false, final false
inline void RecalculateGrabState() ;

/// @brief Method RemoveCallbackOnPressEnd, addr 0x57e7288, size 0x60, virtual false, abstract: false, final false
static inline void RemoveCallbackOnPressEnd(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method RemoveCallbackOnPressStart, addr 0x57e7128, size 0x60, virtual false, abstract: false, final false
static inline void RemoveCallbackOnPressStart(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method RemoveCallbackOnPressUpdate, addr 0x57e72e8, size 0x60, virtual false, abstract: false, final false
static inline void RemoveCallbackOnPressUpdate(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method RemoveUpdateCallback, addr 0x57e4f38, size 0x18c, virtual false, abstract: false, final false
static inline void RemoveUpdateCallback(::System::Action*  callback) ;

/// @brief Method SecondaryButtonPress, addr 0x57e643c, size 0xc0, virtual false, abstract: false, final false
static inline bool SecondaryButtonPress(::UnityEngine::XR::XRNode  node) ;

/// @brief Method SecondaryButtonTouch, addr 0x57e65c0, size 0xc0, virtual false, abstract: false, final false
static inline bool SecondaryButtonTouch(::UnityEngine::XR::XRNode  node) ;

/// @brief Method TriggerFloat, addr 0x57e6738, size 0xb8, virtual false, abstract: false, final false
static inline float_t TriggerFloat(::UnityEngine::XR::XRNode  node) ;

/// @brief Method TriggerTouch, addr 0x57e67f0, size 0xb4, virtual false, abstract: false, final false
static inline float_t TriggerTouch(::UnityEngine::XR::XRNode  node) ;

/// @brief Method _AddInputStateCallback, addr 0x57e6eec, size 0x14c, virtual false, abstract: false, final false
static inline void _AddInputStateCallback(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  ref_callbacksInfo, ::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method _IsHandContributingToPressCadence, addr 0x57e75d0, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EHandednessFlags _IsHandContributingToPressCadence(::GlobalNamespace::EHandednessFlags  hand, ::GlobalNamespace::ControllerInputPoller__EPressCadence  pressCadence, ::GlobalNamespace::EControllerInputPressFlags  cbFlags, ::GlobalNamespace::EControllerInputPressFlags  flags_now, ::GlobalNamespace::EControllerInputPressFlags  flags_old) ;

/// @brief Method _RemoveInputStateCallback, addr 0x57e7188, size 0x100, virtual false, abstract: false, final false
static inline void _RemoveInputStateCallback(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  ref_callbacksInfo, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback) ;

/// @brief Method _UpdatePressFlags, addr 0x57e595c, size 0x114, virtual false, abstract: false, final false
inline void _UpdatePressFlags() ;

/// @brief Method _UpdatePressFlags_Callbacks, addr 0x57e7350, size 0x280, virtual false, abstract: false, final false
static inline void _UpdatePressFlags_Callbacks(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  callbacksInfo, ::GlobalNamespace::ControllerInputPoller__EPressCadence  cadence, ::GlobalNamespace::EControllerInputPressFlags  lFlags_now, ::GlobalNamespace::EControllerInputPressFlags  lFlags_old, ::GlobalNamespace::EControllerInputPressFlags  rFlags_now, ::GlobalNamespace::EControllerInputPressFlags  rFlags_old) ;

constexpr ::GlobalNamespace::GorillaControllerType const& __cordl_internal_get__controllerType_k__BackingField() const;

constexpr ::GlobalNamespace::GorillaControllerType& __cordl_internal_get__controllerType_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftAngularVelocity() ;

constexpr bool const& __cordl_internal_get__leftIndexPressed() const;

constexpr bool& __cordl_internal_get__leftIndexPressed() ;

constexpr bool const& __cordl_internal_get__leftIndexPressedThisFrame() const;

constexpr bool& __cordl_internal_get__leftIndexPressedThisFrame() ;

constexpr bool const& __cordl_internal_get__leftIndexReleased() const;

constexpr bool& __cordl_internal_get__leftIndexReleased() ;

constexpr bool const& __cordl_internal_get__leftIndexReleasedThisFrame() const;

constexpr bool& __cordl_internal_get__leftIndexReleasedThisFrame() ;

constexpr ::GlobalNamespace::EControllerInputPressFlags const& __cordl_internal_get__leftPressFlagsLastFrame_k__BackingField() const;

constexpr ::GlobalNamespace::EControllerInputPressFlags& __cordl_internal_get__leftPressFlagsLastFrame_k__BackingField() ;

constexpr ::GlobalNamespace::EControllerInputPressFlags const& __cordl_internal_get__leftPressFlags_k__BackingField() const;

constexpr ::GlobalNamespace::EControllerInputPressFlags& __cordl_internal_get__leftPressFlags_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightAngularVelocity() ;

constexpr bool const& __cordl_internal_get__rightIndexPressed() const;

constexpr bool& __cordl_internal_get__rightIndexPressed() ;

constexpr bool const& __cordl_internal_get__rightIndexPressedThisFrame() const;

constexpr bool& __cordl_internal_get__rightIndexPressedThisFrame() ;

constexpr bool const& __cordl_internal_get__rightIndexReleased() const;

constexpr bool& __cordl_internal_get__rightIndexReleased() ;

constexpr bool const& __cordl_internal_get__rightIndexReleasedThisFrame() const;

constexpr bool& __cordl_internal_get__rightIndexReleasedThisFrame() ;

constexpr ::GlobalNamespace::EControllerInputPressFlags const& __cordl_internal_get__rightPressFlagsLastFrame_k__BackingField() const;

constexpr ::GlobalNamespace::EControllerInputPressFlags& __cordl_internal_get__rightPressFlagsLastFrame_k__BackingField() ;

constexpr ::GlobalNamespace::EControllerInputPressFlags const& __cordl_internal_get__rightPressFlags_k__BackingField() const;

constexpr ::GlobalNamespace::EControllerInputPressFlags& __cordl_internal_get__rightPressFlags_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightVelocity() ;

constexpr bool const& __cordl_internal_get_didModifyOnUpdate() const;

constexpr bool& __cordl_internal_get_didModifyOnUpdate() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_handGripCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_handGripCurve() ;

constexpr bool const& __cordl_internal_get_handTrackingActive() const;

constexpr bool& __cordl_internal_get_handTrackingActive() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_handTriggerCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_handTriggerCurve() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_headDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_headDevice() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRotation() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_leftControllerDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_leftControllerDevice() ;

constexpr float_t const& __cordl_internal_get_leftControllerGripFloat() const;

constexpr float_t& __cordl_internal_get_leftControllerGripFloat() ;

constexpr float_t const& __cordl_internal_get_leftControllerIndexFloat() const;

constexpr float_t& __cordl_internal_get_leftControllerIndexFloat() ;

constexpr float_t const& __cordl_internal_get_leftControllerIndexTouch() const;

constexpr float_t& __cordl_internal_get_leftControllerIndexTouch() ;

constexpr bool const& __cordl_internal_get_leftControllerIsValid() const;

constexpr bool& __cordl_internal_get_leftControllerIsValid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftControllerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftControllerPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_leftControllerPrimary2DAxis() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_leftControllerPrimary2DAxis() ;

constexpr bool const& __cordl_internal_get_leftControllerPrimaryButton() const;

constexpr bool& __cordl_internal_get_leftControllerPrimaryButton() ;

constexpr bool const& __cordl_internal_get_leftControllerPrimaryButtonTouch() const;

constexpr bool& __cordl_internal_get_leftControllerPrimaryButtonTouch() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftControllerRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftControllerRotation() ;

constexpr bool const& __cordl_internal_get_leftControllerSecondaryButton() const;

constexpr bool& __cordl_internal_get_leftControllerSecondaryButton() ;

constexpr bool const& __cordl_internal_get_leftControllerSecondaryButtonTouch() const;

constexpr bool& __cordl_internal_get_leftControllerSecondaryButtonTouch() ;

constexpr bool const& __cordl_internal_get_leftControllerTriggerButton() const;

constexpr bool& __cordl_internal_get_leftControllerTriggerButton() ;

constexpr bool const& __cordl_internal_get_leftGrab() const;

constexpr bool& __cordl_internal_get_leftGrab() ;

constexpr bool const& __cordl_internal_get_leftGrabMomentary() const;

constexpr bool& __cordl_internal_get_leftGrabMomentary() ;

constexpr bool const& __cordl_internal_get_leftGrabRelease() const;

constexpr bool& __cordl_internal_get_leftGrabRelease() ;

constexpr bool const& __cordl_internal_get_leftGrabReleaseMomentary() const;

constexpr bool& __cordl_internal_get_leftGrabReleaseMomentary() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftHandRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftHandRotation() ;

constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_onUpdate() const;

constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_onUpdate() ;

constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_onUpdateNext() const;

constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_onUpdateNext() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_rightControllerDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_rightControllerDevice() ;

constexpr float_t const& __cordl_internal_get_rightControllerGripFloat() const;

constexpr float_t& __cordl_internal_get_rightControllerGripFloat() ;

constexpr float_t const& __cordl_internal_get_rightControllerIndexFloat() const;

constexpr float_t& __cordl_internal_get_rightControllerIndexFloat() ;

constexpr float_t const& __cordl_internal_get_rightControllerIndexTouch() const;

constexpr float_t& __cordl_internal_get_rightControllerIndexTouch() ;

constexpr bool const& __cordl_internal_get_rightControllerIsValid() const;

constexpr bool& __cordl_internal_get_rightControllerIsValid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightControllerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightControllerPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rightControllerPrimary2DAxis() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rightControllerPrimary2DAxis() ;

constexpr bool const& __cordl_internal_get_rightControllerPrimaryButton() const;

constexpr bool& __cordl_internal_get_rightControllerPrimaryButton() ;

constexpr bool const& __cordl_internal_get_rightControllerPrimaryButtonTouch() const;

constexpr bool& __cordl_internal_get_rightControllerPrimaryButtonTouch() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightControllerRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightControllerRotation() ;

constexpr bool const& __cordl_internal_get_rightControllerSecondaryButton() const;

constexpr bool& __cordl_internal_get_rightControllerSecondaryButton() ;

constexpr bool const& __cordl_internal_get_rightControllerSecondaryButtonTouch() const;

constexpr bool& __cordl_internal_get_rightControllerSecondaryButtonTouch() ;

constexpr bool const& __cordl_internal_get_rightControllerTriggerButton() const;

constexpr bool& __cordl_internal_get_rightControllerTriggerButton() ;

constexpr bool const& __cordl_internal_get_rightGrab() const;

constexpr bool& __cordl_internal_get_rightGrab() ;

constexpr bool const& __cordl_internal_get_rightGrabMomentary() const;

constexpr bool& __cordl_internal_get_rightGrabMomentary() ;

constexpr bool const& __cordl_internal_get_rightGrabRelease() const;

constexpr bool& __cordl_internal_get_rightGrabRelease() ;

constexpr bool const& __cordl_internal_get_rightGrabReleaseMomentary() const;

constexpr bool& __cordl_internal_get_rightGrabReleaseMomentary() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightHandRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightHandRotation() ;

constexpr float_t const& __cordl_internal_get_rightStickLRFloat() const;

constexpr float_t& __cordl_internal_get_rightStickLRFloat() ;

constexpr void __cordl_internal_set__controllerType_k__BackingField(::GlobalNamespace::GorillaControllerType  value) ;

constexpr void __cordl_internal_set__leftAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__leftIndexPressed(bool  value) ;

constexpr void __cordl_internal_set__leftIndexPressedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__leftIndexReleased(bool  value) ;

constexpr void __cordl_internal_set__leftIndexReleasedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__leftPressFlagsLastFrame_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value) ;

constexpr void __cordl_internal_set__leftPressFlags_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value) ;

constexpr void __cordl_internal_set__leftVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rightAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rightIndexPressed(bool  value) ;

constexpr void __cordl_internal_set__rightIndexPressedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__rightIndexReleased(bool  value) ;

constexpr void __cordl_internal_set__rightIndexReleasedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__rightPressFlagsLastFrame_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value) ;

constexpr void __cordl_internal_set__rightPressFlags_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value) ;

constexpr void __cordl_internal_set__rightVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_didModifyOnUpdate(bool  value) ;

constexpr void __cordl_internal_set_handGripCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_handTrackingActive(bool  value) ;

constexpr void __cordl_internal_set_handTriggerCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_headDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_headPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leftControllerDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftControllerGripFloat(float_t  value) ;

constexpr void __cordl_internal_set_leftControllerIndexFloat(float_t  value) ;

constexpr void __cordl_internal_set_leftControllerIndexTouch(float_t  value) ;

constexpr void __cordl_internal_set_leftControllerIsValid(bool  value) ;

constexpr void __cordl_internal_set_leftControllerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftControllerPrimary2DAxis(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_leftControllerPrimaryButton(bool  value) ;

constexpr void __cordl_internal_set_leftControllerPrimaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_leftControllerRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_leftControllerSecondaryButton(bool  value) ;

constexpr void __cordl_internal_set_leftControllerSecondaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_leftControllerTriggerButton(bool  value) ;

constexpr void __cordl_internal_set_leftGrab(bool  value) ;

constexpr void __cordl_internal_set_leftGrabMomentary(bool  value) ;

constexpr void __cordl_internal_set_leftGrabRelease(bool  value) ;

constexpr void __cordl_internal_set_leftGrabReleaseMomentary(bool  value) ;

constexpr void __cordl_internal_set_leftHandOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_onUpdate(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_onUpdateNext(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_rightControllerDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_rightControllerGripFloat(float_t  value) ;

constexpr void __cordl_internal_set_rightControllerIndexFloat(float_t  value) ;

constexpr void __cordl_internal_set_rightControllerIndexTouch(float_t  value) ;

constexpr void __cordl_internal_set_rightControllerIsValid(bool  value) ;

constexpr void __cordl_internal_set_rightControllerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightControllerPrimary2DAxis(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rightControllerPrimaryButton(bool  value) ;

constexpr void __cordl_internal_set_rightControllerPrimaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_rightControllerRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rightControllerSecondaryButton(bool  value) ;

constexpr void __cordl_internal_set_rightControllerSecondaryButtonTouch(bool  value) ;

constexpr void __cordl_internal_set_rightControllerTriggerButton(bool  value) ;

constexpr void __cordl_internal_set_rightGrab(bool  value) ;

constexpr void __cordl_internal_set_rightGrabMomentary(bool  value) ;

constexpr void __cordl_internal_set_rightGrabRelease(bool  value) ;

constexpr void __cordl_internal_set_rightGrabReleaseMomentary(bool  value) ;

constexpr void __cordl_internal_set_rightHandOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rightStickLRFloat(float_t  value) ;

/// @brief Method .ctor, addr 0x57e7624, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo getStaticF__g_callbacks_onPressEnd() ;

static inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo getStaticF__g_callbacks_onPressStart() ;

static inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo getStaticF__g_callbacks_onPressUpdate() ;

static inline ::UnityW<::GlobalNamespace::ControllerInputPoller> getStaticF_instance() ;

/// @brief Method get_LeftHandValid, addr 0x57e3dfc, size 0x20, virtual false, abstract: false, final false
inline bool get_LeftHandValid() ;

/// @brief Method get_RightHandValid, addr 0x57e3d40, size 0x20, virtual false, abstract: false, final false
inline bool get_RightHandValid() ;

/// [CompilerGenerated]
/// @brief Method get_controllerType, addr 0x57e4bec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaControllerType get_controllerType() ;

/// @brief Method get_leftAngularVelocity, addr 0x57e4bd0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_leftAngularVelocity() ;

/// @brief Method get_leftIndexPressed, addr 0x57e4b78, size 0x8, virtual false, abstract: false, final false
inline bool get_leftIndexPressed() ;

/// @brief Method get_leftIndexPressedThisFrame, addr 0x57e4b98, size 0x8, virtual false, abstract: false, final false
inline bool get_leftIndexPressedThisFrame() ;

/// @brief Method get_leftIndexReleased, addr 0x57e4b80, size 0x8, virtual false, abstract: false, final false
inline bool get_leftIndexReleased() ;

/// @brief Method get_leftIndexReleasedThisFrame, addr 0x57e4ba0, size 0x8, virtual false, abstract: false, final false
inline bool get_leftIndexReleasedThisFrame() ;

/// [CompilerGenerated]
/// @brief Method get_leftPressFlags, addr 0x57e6e3c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EControllerInputPressFlags get_leftPressFlags() ;

/// [CompilerGenerated]
/// @brief Method get_leftPressFlagsLastFrame, addr 0x57e6e5c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EControllerInputPressFlags get_leftPressFlagsLastFrame() ;

/// @brief Method get_leftVelocity, addr 0x57e4bb8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_leftVelocity() ;

/// @brief Method get_rightAngularVelocity, addr 0x57e4bdc, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rightAngularVelocity() ;

/// @brief Method get_rightIndexPressed, addr 0x57e4b88, size 0x8, virtual false, abstract: false, final false
inline bool get_rightIndexPressed() ;

/// @brief Method get_rightIndexPressedThisFrame, addr 0x57e4ba8, size 0x8, virtual false, abstract: false, final false
inline bool get_rightIndexPressedThisFrame() ;

/// @brief Method get_rightIndexReleased, addr 0x57e4b90, size 0x8, virtual false, abstract: false, final false
inline bool get_rightIndexReleased() ;

/// @brief Method get_rightIndexReleasedThisFrame, addr 0x57e4bb0, size 0x8, virtual false, abstract: false, final false
inline bool get_rightIndexReleasedThisFrame() ;

/// [CompilerGenerated]
/// @brief Method get_rightPressFlags, addr 0x57e6e4c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EControllerInputPressFlags get_rightPressFlags() ;

/// [CompilerGenerated]
/// @brief Method get_rightPressFlagsLastFrame, addr 0x57e6e6c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EControllerInputPressFlags get_rightPressFlagsLastFrame() ;

/// @brief Method get_rightVelocity, addr 0x57e4bc4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rightVelocity() ;

static inline void setStaticF__g_callbacks_onPressEnd(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value) ;

static inline void setStaticF__g_callbacks_onPressStart(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value) ;

static inline void setStaticF__g_callbacks_onPressUpdate(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ControllerInputPoller>  value) ;

/// [CompilerGenerated]
/// @brief Method set_controllerType, addr 0x57e4bf4, size 0x8, virtual false, abstract: false, final false
inline void set_controllerType(::GlobalNamespace::GorillaControllerType  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftPressFlags, addr 0x57e6e44, size 0x8, virtual false, abstract: false, final false
inline void set_leftPressFlags(::GlobalNamespace::EControllerInputPressFlags  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftPressFlagsLastFrame, addr 0x57e6e64, size 0x8, virtual false, abstract: false, final false
inline void set_leftPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightPressFlags, addr 0x57e6e54, size 0x8, virtual false, abstract: false, final false
inline void set_rightPressFlags(::GlobalNamespace::EControllerInputPressFlags  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightPressFlagsLastFrame, addr 0x57e6e74, size 0x8, virtual false, abstract: false, final false
inline void set_rightPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputPoller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputPoller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerInputPoller(ControllerInputPoller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputPoller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerInputPoller(ControllerInputPoller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1661};

/// @brief Field k_defaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_defaultExecutionOrder{static_cast<int32_t>(0xfffffe70)};

/// @brief Field leftControllerIndexFloat, offset: 0x20, size: 0x4, def value: None
 float_t  ___leftControllerIndexFloat;

/// @brief Field leftControllerGripFloat, offset: 0x24, size: 0x4, def value: None
 float_t  ___leftControllerGripFloat;

/// @brief Field rightControllerIndexFloat, offset: 0x28, size: 0x4, def value: None
 float_t  ___rightControllerIndexFloat;

/// @brief Field rightControllerGripFloat, offset: 0x2c, size: 0x4, def value: None
 float_t  ___rightControllerGripFloat;

/// @brief Field leftControllerIndexTouch, offset: 0x30, size: 0x4, def value: None
 float_t  ___leftControllerIndexTouch;

/// @brief Field rightControllerIndexTouch, offset: 0x34, size: 0x4, def value: None
 float_t  ___rightControllerIndexTouch;

/// @brief Field rightStickLRFloat, offset: 0x38, size: 0x4, def value: None
 float_t  ___rightStickLRFloat;

/// @brief Field leftControllerPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftControllerPosition;

/// @brief Field rightControllerPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightControllerPosition;

/// @brief Field headPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headPosition;

/// @brief Field leftControllerRotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftControllerRotation;

/// @brief Field rightControllerRotation, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightControllerRotation;

/// @brief Field headRotation, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___headRotation;

/// @brief Field leftControllerDevice, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___leftControllerDevice;

/// @brief Field rightControllerDevice, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___rightControllerDevice;

/// @brief Field headDevice, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___headDevice;

/// @brief Field leftControllerIsValid, offset: 0xc0, size: 0x1, def value: None
 bool  ___leftControllerIsValid;

/// @brief Field rightControllerIsValid, offset: 0xc1, size: 0x1, def value: None
 bool  ___rightControllerIsValid;

/// @brief Field handTrackingActive, offset: 0xc2, size: 0x1, def value: None
 bool  ___handTrackingActive;

/// @brief Field leftControllerPrimaryButton, offset: 0xc3, size: 0x1, def value: None
 bool  ___leftControllerPrimaryButton;

/// @brief Field leftControllerSecondaryButton, offset: 0xc4, size: 0x1, def value: None
 bool  ___leftControllerSecondaryButton;

/// @brief Field rightControllerPrimaryButton, offset: 0xc5, size: 0x1, def value: None
 bool  ___rightControllerPrimaryButton;

/// @brief Field rightControllerSecondaryButton, offset: 0xc6, size: 0x1, def value: None
 bool  ___rightControllerSecondaryButton;

/// @brief Field leftControllerPrimaryButtonTouch, offset: 0xc7, size: 0x1, def value: None
 bool  ___leftControllerPrimaryButtonTouch;

/// @brief Field leftControllerSecondaryButtonTouch, offset: 0xc8, size: 0x1, def value: None
 bool  ___leftControllerSecondaryButtonTouch;

/// @brief Field rightControllerPrimaryButtonTouch, offset: 0xc9, size: 0x1, def value: None
 bool  ___rightControllerPrimaryButtonTouch;

/// @brief Field rightControllerSecondaryButtonTouch, offset: 0xca, size: 0x1, def value: None
 bool  ___rightControllerSecondaryButtonTouch;

/// @brief Field leftControllerTriggerButton, offset: 0xcb, size: 0x1, def value: None
 bool  ___leftControllerTriggerButton;

/// @brief Field rightControllerTriggerButton, offset: 0xcc, size: 0x1, def value: None
 bool  ___rightControllerTriggerButton;

/// @brief Field leftGrab, offset: 0xcd, size: 0x1, def value: None
 bool  ___leftGrab;

/// @brief Field leftGrabRelease, offset: 0xce, size: 0x1, def value: None
 bool  ___leftGrabRelease;

/// @brief Field rightGrab, offset: 0xcf, size: 0x1, def value: None
 bool  ___rightGrab;

/// @brief Field rightGrabRelease, offset: 0xd0, size: 0x1, def value: None
 bool  ___rightGrabRelease;

/// @brief Field leftGrabMomentary, offset: 0xd1, size: 0x1, def value: None
 bool  ___leftGrabMomentary;

/// @brief Field leftGrabReleaseMomentary, offset: 0xd2, size: 0x1, def value: None
 bool  ___leftGrabReleaseMomentary;

/// @brief Field rightGrabMomentary, offset: 0xd3, size: 0x1, def value: None
 bool  ___rightGrabMomentary;

/// @brief Field rightGrabReleaseMomentary, offset: 0xd4, size: 0x1, def value: None
 bool  ___rightGrabReleaseMomentary;

/// @brief Field _leftIndexPressed, offset: 0xd5, size: 0x1, def value: None
 bool  ____leftIndexPressed;

/// @brief Field _leftIndexReleased, offset: 0xd6, size: 0x1, def value: None
 bool  ____leftIndexReleased;

/// @brief Field _rightIndexPressed, offset: 0xd7, size: 0x1, def value: None
 bool  ____rightIndexPressed;

/// @brief Field _rightIndexReleased, offset: 0xd8, size: 0x1, def value: None
 bool  ____rightIndexReleased;

/// @brief Field _leftIndexPressedThisFrame, offset: 0xd9, size: 0x1, def value: None
 bool  ____leftIndexPressedThisFrame;

/// @brief Field _leftIndexReleasedThisFrame, offset: 0xda, size: 0x1, def value: None
 bool  ____leftIndexReleasedThisFrame;

/// @brief Field _rightIndexPressedThisFrame, offset: 0xdb, size: 0x1, def value: None
 bool  ____rightIndexPressedThisFrame;

/// @brief Field _rightIndexReleasedThisFrame, offset: 0xdc, size: 0x1, def value: None
 bool  ____rightIndexReleasedThisFrame;

/// @brief Field _leftVelocity, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftVelocity;

/// @brief Field _rightVelocity, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightVelocity;

/// @brief Field _leftAngularVelocity, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftAngularVelocity;

/// @brief Field _rightAngularVelocity, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightAngularVelocity;

/// [CompilerGenerated]
/// @brief Field <controllerType>k__BackingField, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::GorillaControllerType  ____controllerType_k__BackingField;

/// @brief Field leftControllerPrimary2DAxis, offset: 0x114, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___leftControllerPrimary2DAxis;

/// @brief Field rightControllerPrimary2DAxis, offset: 0x11c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rightControllerPrimary2DAxis;

/// @brief Field handTriggerCurve, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___handTriggerCurve;

/// @brief Field handGripCurve, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___handGripCurve;

/// @brief Field onUpdate, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action*>*  ___onUpdate;

/// @brief Field onUpdateNext, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action*>*  ___onUpdateNext;

/// @brief Field didModifyOnUpdate, offset: 0x148, size: 0x1, def value: None
 bool  ___didModifyOnUpdate;

/// @brief Field leftHandOffset, offset: 0x14c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandOffset;

/// @brief Field leftHandRotation, offset: 0x158, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftHandRotation;

/// @brief Field rightHandOffset, offset: 0x168, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandOffset;

/// @brief Field rightHandRotation, offset: 0x174, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightHandRotation;

/// [CompilerGenerated]
/// @brief Field <leftPressFlags>k__BackingField, offset: 0x184, size: 0x4, def value: None
 ::GlobalNamespace::EControllerInputPressFlags  ____leftPressFlags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightPressFlags>k__BackingField, offset: 0x188, size: 0x4, def value: None
 ::GlobalNamespace::EControllerInputPressFlags  ____rightPressFlags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <leftPressFlagsLastFrame>k__BackingField, offset: 0x18c, size: 0x4, def value: None
 ::GlobalNamespace::EControllerInputPressFlags  ____leftPressFlagsLastFrame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightPressFlagsLastFrame>k__BackingField, offset: 0x190, size: 0x4, def value: None
 ::GlobalNamespace::EControllerInputPressFlags  ____rightPressFlagsLastFrame_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerIndexFloat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerGripFloat) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerIndexFloat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerGripFloat) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerIndexTouch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerIndexTouch) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightStickLRFloat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___headPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerRotation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___headRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerDevice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerDevice) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___headDevice) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerIsValid) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerIsValid) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___handTrackingActive) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerPrimaryButton) == 0xc3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerSecondaryButton) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerPrimaryButton) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerSecondaryButton) == 0xc6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerPrimaryButtonTouch) == 0xc7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerSecondaryButtonTouch) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerPrimaryButtonTouch) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerSecondaryButtonTouch) == 0xca, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerTriggerButton) == 0xcb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerTriggerButton) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftGrab) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftGrabRelease) == 0xce, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightGrab) == 0xcf, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightGrabRelease) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftGrabMomentary) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftGrabReleaseMomentary) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightGrabMomentary) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightGrabReleaseMomentary) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftIndexPressed) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftIndexReleased) == 0xd6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightIndexPressed) == 0xd7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightIndexReleased) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftIndexPressedThisFrame) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftIndexReleasedThisFrame) == 0xda, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightIndexPressedThisFrame) == 0xdb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightIndexReleasedThisFrame) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftVelocity) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightVelocity) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftAngularVelocity) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightAngularVelocity) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____controllerType_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftControllerPrimary2DAxis) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightControllerPrimary2DAxis) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___handTriggerCurve) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___handGripCurve) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___onUpdate) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___onUpdateNext) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___didModifyOnUpdate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftHandOffset) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___leftHandRotation) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightHandOffset) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ___rightHandRotation) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftPressFlags_k__BackingField) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightPressFlags_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____leftPressFlagsLastFrame_k__BackingField) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerInputPoller, ____rightPressFlagsLastFrame_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerInputPoller) == 0x198, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerInputPoller/<>c__DisplayClass153_0
class CORDL_TYPE ControllerInputPoller___c__DisplayClass153_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback;

static inline ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0* New_ctor() ;

/// @brief Method <_RemoveInputStateCallback>b__0, addr 0x57e78c0, size 0x10, virtual false, abstract: false, final false
inline bool __RemoveInputStateCallback_b__0(::GlobalNamespace::ControllerInputPoller__InputCallback  sub) ;

constexpr ::System::Action_1<::GlobalNamespace::EHandednessFlags>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::EHandednessFlags>*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  value) ;

/// @brief Method .ctor, addr 0x57e7348, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputPoller___c__DisplayClass153_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputPoller___c__DisplayClass153_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerInputPoller___c__DisplayClass153_0(ControllerInputPoller___c__DisplayClass153_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerInputPoller___c__DisplayClass153_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerInputPoller___c__DisplayClass153_0(ControllerInputPoller___c__DisplayClass153_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1660};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
