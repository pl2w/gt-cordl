#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRControllerDetails_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis1D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawButton_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawNearTouch_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawTouch_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState6_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Step_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput)
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis1DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis2DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualButtonMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualNearTouchMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualTouchMap;
}
namespace GlobalNamespace {
struct OVRInput_Axis1D;
}
namespace GlobalNamespace {
struct OVRInput_Axis2D;
}
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace GlobalNamespace {
struct OVRInput_ControllerInHandState;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
struct OVRInput_Hand;
}
namespace GlobalNamespace {
struct OVRInput_Handedness;
}
namespace GlobalNamespace {
class OVRInput_HapticInfo;
}
namespace GlobalNamespace {
struct OVRInput_HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct OVRInput_HapticsLocation;
}
namespace GlobalNamespace {
struct OVRInput_HapticsPcmVibration;
}
namespace GlobalNamespace {
struct OVRInput_InputDeviceShowState;
}
namespace GlobalNamespace {
struct OVRInput_InteractionProfile;
}
namespace GlobalNamespace {
struct OVRInput_NearTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerBase;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerHands;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRemote;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerTouch;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRButton;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRControllerDetails;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRController;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis1D;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis2D;
}
namespace GlobalNamespace {
struct OVRInput_RawButton;
}
namespace GlobalNamespace {
struct OVRInput_RawNearTouch;
}
namespace GlobalNamespace {
struct OVRInput_RawTouch;
}
namespace GlobalNamespace {
struct OVRInput_Touch;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState6;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Version;
}
namespace UnityEngine::XR {
struct XRNode;
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
class OVRControllerBase_OVRInput_VirtualAxis1DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis2DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualButtonMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualNearTouchMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualTouchMap;
}
namespace GlobalNamespace {
class OVRInput;
}
namespace GlobalNamespace {
class OVRInput_HapticInfo;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerBase;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerHands;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRemote;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerTouch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*);
MARK_REF_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*);
MARK_REF_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*);
MARK_REF_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*);
MARK_REF_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*);
MARK_REF_T(::GlobalNamespace::OVRInput*);
MARK_REF_T(::GlobalNamespace::OVRInput_HapticInfo*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerBase*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerGamepadPC*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerHands*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerLHand*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerLTouch*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerRHand*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerRTouch*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerRemote*);
MARK_REF_T(::GlobalNamespace::OVRInput_OVRControllerTouch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*, "", "OVRInput/OVRControllerBase/VirtualButtonMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput*, "", "OVRInput");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_HapticInfo*, "", "OVRInput/HapticInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerBase*, "", "OVRInput/OVRControllerBase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*, "", "OVRInput/OVRControllerGamepadAndroid");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerGamepadPC*, "", "OVRInput/OVRControllerGamepadPC");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerHands*, "", "OVRInput/OVRControllerHands");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerLTouch*, "", "OVRInput/OVRControllerLTouch");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerRHand*, "", "OVRInput/OVRControllerRHand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerRTouch*, "", "OVRInput/OVRControllerRTouch");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerRemote*, "", "OVRInput/OVRControllerRemote");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OVRControllerTouch*, "", "OVRInput/OVRControllerTouch");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-ovrinput/")]
// Dependencies OVRInput::Controller, OVRInput::HapticInfo, OVRInput::OpenVRControllerDetails, OVRPlugin::Step, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput
class CORDL_TYPE OVRInput : public ::System::Object {
public:
// Declarations
using Axis1D = ::GlobalNamespace::OVRInput_Axis1D;

using Axis2D = ::GlobalNamespace::OVRInput_Axis2D;

using Button = ::GlobalNamespace::OVRInput_Button;

using Controller = ::GlobalNamespace::OVRInput_Controller;

using ControllerInHandState = ::GlobalNamespace::OVRInput_ControllerInHandState;

using Hand = ::GlobalNamespace::OVRInput_Hand;

using Handedness = ::GlobalNamespace::OVRInput_Handedness;

using HapticInfo = ::GlobalNamespace::OVRInput_HapticInfo;

using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration;

using HapticsLocation = ::GlobalNamespace::OVRInput_HapticsLocation;

using HapticsPcmVibration = ::GlobalNamespace::OVRInput_HapticsPcmVibration;

using InputDeviceShowState = ::GlobalNamespace::OVRInput_InputDeviceShowState;

using InteractionProfile = ::GlobalNamespace::OVRInput_InteractionProfile;

using NearTouch = ::GlobalNamespace::OVRInput_NearTouch;

using OVRControllerBase = ::GlobalNamespace::OVRInput_OVRControllerBase;

using OVRControllerGamepadAndroid = ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid;

using OVRControllerGamepadPC = ::GlobalNamespace::OVRInput_OVRControllerGamepadPC;

using OVRControllerHands = ::GlobalNamespace::OVRInput_OVRControllerHands;

using OVRControllerLHand = ::GlobalNamespace::OVRInput_OVRControllerLHand;

using OVRControllerLTouch = ::GlobalNamespace::OVRInput_OVRControllerLTouch;

using OVRControllerRHand = ::GlobalNamespace::OVRInput_OVRControllerRHand;

using OVRControllerRTouch = ::GlobalNamespace::OVRInput_OVRControllerRTouch;

using OVRControllerRemote = ::GlobalNamespace::OVRInput_OVRControllerRemote;

using OVRControllerTouch = ::GlobalNamespace::OVRInput_OVRControllerTouch;

using OpenVRButton = ::GlobalNamespace::OVRInput_OpenVRButton;

using OpenVRController = ::GlobalNamespace::OVRInput_OpenVRController;

using OpenVRControllerDetails = ::GlobalNamespace::OVRInput_OpenVRControllerDetails;

using RawAxis1D = ::GlobalNamespace::OVRInput_RawAxis1D;

using RawAxis2D = ::GlobalNamespace::OVRInput_RawAxis2D;

using RawButton = ::GlobalNamespace::OVRInput_RawButton;

using RawNearTouch = ::GlobalNamespace::OVRInput_RawNearTouch;

using RawTouch = ::GlobalNamespace::OVRInput_RawTouch;

using Touch = ::GlobalNamespace::OVRInput_Touch;

/// @brief Field AXIS_AS_BUTTON_THRESHOLD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AXIS_AS_BUTTON_THRESHOLD, put=setStaticF_AXIS_AS_BUTTON_THRESHOLD)) float_t  AXIS_AS_BUTTON_THRESHOLD;

/// @brief Field AXIS_DEADZONE_THRESHOLD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AXIS_DEADZONE_THRESHOLD, put=setStaticF_AXIS_DEADZONE_THRESHOLD)) float_t  AXIS_DEADZONE_THRESHOLD;

/// @brief Field HAPTIC_VIBRATION_DURATION_SECONDS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS, put=setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS)) float_t  HAPTIC_VIBRATION_DURATION_SECONDS;

/// @brief Field NUM_HAPTIC_CHANNELS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NUM_HAPTIC_CHANNELS, put=setStaticF_NUM_HAPTIC_CHANNELS)) int32_t  NUM_HAPTIC_CHANNELS;

/// @brief Field OPENVR_MAX_HAPTIC_AMPLITUDE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE, put=setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE)) float_t  OPENVR_MAX_HAPTIC_AMPLITUDE;

/// @brief Field OPENVR_TOUCH_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OPENVR_TOUCH_NAME, put=setStaticF_OPENVR_TOUCH_NAME)) ::StringW  OPENVR_TOUCH_NAME;

/// @brief Field OPENVR_VIVE_CONTROLLER_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OPENVR_VIVE_CONTROLLER_NAME, put=setStaticF_OPENVR_VIVE_CONTROLLER_NAME)) ::StringW  OPENVR_VIVE_CONTROLLER_NAME;

/// @brief Field OPENVR_WINDOWSMR_CONTROLLER_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME, put=setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME)) ::StringW  OPENVR_WINDOWSMR_CONTROLLER_NAME;

/// @brief Field _pluginSupportsActiveController, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__pluginSupportsActiveController, put=setStaticF__pluginSupportsActiveController)) bool  _pluginSupportsActiveController;

/// @brief Field _pluginSupportsActiveControllerCached, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__pluginSupportsActiveControllerCached, put=setStaticF__pluginSupportsActiveControllerCached)) bool  _pluginSupportsActiveControllerCached;

/// @brief Field _pluginSupportsActiveControllerMinVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pluginSupportsActiveControllerMinVersion, put=setStaticF__pluginSupportsActiveControllerMinVersion)) ::System::Version*  _pluginSupportsActiveControllerMinVersion;

/// @brief Field activeControllerType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_activeControllerType, put=setStaticF_activeControllerType)) ::GlobalNamespace::OVRInput_Controller  activeControllerType;

/// @brief Field connectedControllerTypes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_connectedControllerTypes, put=setStaticF_connectedControllerTypes)) ::GlobalNamespace::OVRInput_Controller  connectedControllerTypes;

/// @brief Field controllers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_controllers, put=setStaticF_controllers)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*  controllers;

/// @brief Field fixedUpdateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_fixedUpdateCount, put=setStaticF_fixedUpdateCount)) int32_t  fixedUpdateCount;

/// @brief Field hapticInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hapticInfos, put=setStaticF_hapticInfos)) ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>  hapticInfos;

/// @brief Field openVRControllerDetails, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_openVRControllerDetails, put=setStaticF_openVRControllerDetails)) ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>  openVRControllerDetails;

/// @brief Field stepType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_stepType, put=setStaticF_stepType)) ::GlobalNamespace::OVRPlugin_Step  stepType;

/// @brief Method AreHandPosesGeneratedByControllerData, addr 0xa5c4bb4, size 0x8c, virtual false, abstract: false, final false
static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRInput_Hand  hand) ;

/// @brief Method CalculateAbsMax, addr 0xa5c8848, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 CalculateAbsMax(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method CalculateAbsMax, addr 0xa5c82b8, size 0x24, virtual false, abstract: false, final false
static inline float_t CalculateAbsMax(float_t  a, float_t  b) ;

/// @brief Method CalculateDeadzone, addr 0xa5c8710, size 0x138, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 CalculateDeadzone(::UnityEngine::Vector2  a, float_t  deadzone) ;

/// @brief Method CalculateDeadzone, addr 0xa5c826c, size 0x4c, virtual false, abstract: false, final false
static inline float_t CalculateDeadzone(float_t  a, float_t  deadzone) ;

/// @brief Method DisableSimultaneousHandsAndControllers, addr 0xa5c4c94, size 0x54, virtual false, abstract: false, final false
static inline bool DisableSimultaneousHandsAndControllers() ;

/// @brief Method EnableSimultaneousHandsAndControllers, addr 0xa5c4c40, size 0x54, virtual false, abstract: false, final false
static inline bool EnableSimultaneousHandsAndControllers() ;

/// @brief Method FixedUpdate, addr 0xa5c4770, size 0x10c, virtual false, abstract: false, final false
static inline void FixedUpdate() ;

/// @brief Method Get, addr 0xa5c8694, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::OVRInput_RawAxis2D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c82dc, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::OVRInput_Axis2D  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c46a0, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c7630, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c4708, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c67e0, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c747c, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c6e54, size 0x68, virtual false, abstract: false, final false
static inline bool Get(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c81f0, size 0x68, virtual false, abstract: false, final false
static inline float_t Get(::GlobalNamespace::OVRInput_RawAxis1D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method Get, addr 0xa5c7b0c, size 0x68, virtual false, abstract: false, final false
static inline float_t Get(::GlobalNamespace::OVRInput_Axis1D  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetActiveController, addr 0xa5c892c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_Controller GetActiveController() ;

/// @brief Method GetActiveControllerForHand, addr 0xa5c4dd4, size 0x104, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_Controller GetActiveControllerForHand(::GlobalNamespace::OVRInput_Handedness  handedness) ;

/// @brief Method GetConnectedControllers, addr 0xa5c8870, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_Controller GetConnectedControllers() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetControllerBatteryPercentRemaining, addr 0xa5c95c0, size 0x128, virtual false, abstract: false, final false
static inline uint8_t GetControllerBatteryPercentRemaining(::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetControllerIsInHandState, addr 0xa5c4ce8, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_ControllerInHandState GetControllerIsInHandState(::GlobalNamespace::OVRInput_Hand  hand) ;

/// @brief Method GetControllerOrientationTracked, addr 0xa5c48d4, size 0xb8, virtual false, abstract: false, final false
static inline bool GetControllerOrientationTracked(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetControllerOrientationValid, addr 0xa5c498c, size 0xb8, virtual false, abstract: false, final false
static inline bool GetControllerOrientationValid(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetControllerPositionTracked, addr 0xa5c4a44, size 0xb8, virtual false, abstract: false, final false
static inline bool GetControllerPositionTracked(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetControllerPositionValid, addr 0xa5c4afc, size 0xb8, virtual false, abstract: false, final false
static inline bool GetControllerPositionValid(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetControllerSampleRateHz, addr 0xa5c9498, size 0x128, virtual false, abstract: false, final false
static inline float_t GetControllerSampleRateHz(::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetCurrentInteractionProfile, addr 0xa5c487c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::OVRInput_Hand  hand) ;

/// @brief Method GetDominantHand, addr 0xa5c6790, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRInput_Handedness GetDominantHand() ;

/// @brief Method GetDown, addr 0xa5c6bbc, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetDown, addr 0xa5c7874, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetDown, addr 0xa5c71e4, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetDown, addr 0xa5c69f4, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetDown, addr 0xa5c76ac, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetDown, addr 0xa5c701c, size 0x68, virtual false, abstract: false, final false
static inline bool GetDown(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method GetLocalControllerAcceleration, addr 0xa5c5738, size 0x260, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLocalControllerAcceleration(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method GetLocalControllerAngularAcceleration, addr 0xa5c61d0, size 0x260, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLocalControllerAngularAcceleration(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetLocalControllerAngularVelocity, addr 0xa5c5f70, size 0x260, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLocalControllerAngularVelocity(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetLocalControllerPosition, addr 0xa5c4ed8, size 0x600, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLocalControllerPosition(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetLocalControllerRotation, addr 0xa5c5998, size 0x5d8, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetLocalControllerRotation(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetLocalControllerStatesWithoutPrediction, addr 0xa5c6430, size 0x360, virtual false, abstract: false, final false
static inline bool GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::OVRInput_Controller  controllerType, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method GetLocalControllerVelocity, addr 0xa5c54d8, size 0x260, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLocalControllerVelocity(::GlobalNamespace::OVRInput_Controller  controllerType) ;

/// @brief Method GetOpenVRStringProperty, addr 0xa5c8bac, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty  prop, uint32_t  deviceId) ;

/// @brief Method GetResolvedAxis1D, addr 0xa5c7b74, size 0x67c, virtual false, abstract: false, final false
static inline float_t GetResolvedAxis1D(::GlobalNamespace::OVRInput_Axis1D  virtualMask, ::GlobalNamespace::OVRInput_RawAxis1D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedAxis2D, addr 0xa5c8344, size 0x350, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetResolvedAxis2D(::GlobalNamespace::OVRInput_Axis2D  virtualMask, ::GlobalNamespace::OVRInput_RawAxis2D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedButton, addr 0xa5c6848, size 0x14c, virtual false, abstract: false, final false
static inline bool GetResolvedButton(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedButtonDown, addr 0xa5c6a5c, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedButtonDown(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedButtonUp, addr 0xa5c6c8c, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedButtonUp(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedNearTouch, addr 0xa5c74e4, size 0x14c, virtual false, abstract: false, final false
static inline bool GetResolvedNearTouch(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedNearTouchDown, addr 0xa5c7714, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedNearTouchDown(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedNearTouchUp, addr 0xa5c7944, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedNearTouchUp(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedTouch, addr 0xa5c6ebc, size 0x14c, virtual false, abstract: false, final false
static inline bool GetResolvedTouch(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedTouchDown, addr 0xa5c7084, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedTouchDown(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetResolvedTouchUp, addr 0xa5c72b4, size 0x160, virtual false, abstract: false, final false
static inline bool GetResolvedTouchUp(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c6dec, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c7aa4, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c7414, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c6c24, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c78dc, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method GetUp, addr 0xa5c724c, size 0x68, virtual false, abstract: false, final false
static inline bool GetUp(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method InitHapticInfo, addr 0xa5c3a18, size 0x164, virtual false, abstract: false, final false
static inline void InitHapticInfo() ;

/// @brief Method IsControllerConnected, addr 0xa5c88c8, size 0x64, virtual false, abstract: false, final false
static inline bool IsControllerConnected(::GlobalNamespace::OVRInput_Controller  controller) ;

/// @brief Method IsValidOpenVRDevice, addr 0xa5c8e34, size 0xc, virtual false, abstract: false, final false
static inline bool IsValidOpenVRDevice(uint32_t  deviceId) ;

/// @brief Method PlayHapticImpulse, addr 0xa5c8cfc, size 0x130, virtual false, abstract: false, final false
static inline void PlayHapticImpulse(float_t  amplitude, ::UnityEngine::XR::XRNode  deviceNode) ;

/// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0xa5c91fc, size 0x148, virtual false, abstract: false, final false
static inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration  hapticsVibration, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method SetControllerHapticsPcm, addr 0xa5c9344, size 0x154, virtual false, abstract: false, final false
static inline int32_t SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration  hapticsVibration, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method SetControllerLocalizedVibration, addr 0xa5c9020, size 0x1dc, virtual false, abstract: false, final false
static inline void SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method SetControllerVibration, addr 0xa5c8e40, size 0x1e0, virtual false, abstract: false, final false
static inline void SetControllerVibration(float_t  frequency, float_t  amplitude, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method SetOpenVRLocalPose, addr 0xa5c8a88, size 0x124, virtual false, abstract: false, final false
static inline void SetOpenVRLocalPose(::UnityEngine::Vector3  leftPos, ::UnityEngine::Vector3  rightPos, ::UnityEngine::Quaternion  leftRot, ::UnityEngine::Quaternion  rightRot) ;

/// @brief Method ShouldResolveController, addr 0xa5c6994, size 0x4c, virtual false, abstract: false, final false
static inline bool ShouldResolveController(::GlobalNamespace::OVRInput_Controller  controllerType, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

/// @brief Method StartVibration, addr 0xa5c8984, size 0x104, virtual false, abstract: false, final false
static inline void StartVibration(float_t  amplitude, float_t  duration, ::UnityEngine::XR::XRNode  controllerNode) ;

/// @brief Method Update, addr 0xa5c3b7c, size 0x5bc, virtual false, abstract: false, final false
static inline void Update() ;

/// @brief Method UpdateXRControllerHaptics, addr 0xa5c44bc, size 0x1e4, virtual false, abstract: false, final false
static inline void UpdateXRControllerHaptics() ;

/// @brief Method UpdateXRControllerNodeIds, addr 0xa5c4138, size 0x384, virtual false, abstract: false, final false
static inline void UpdateXRControllerNodeIds() ;

static inline float_t getStaticF_AXIS_AS_BUTTON_THRESHOLD() ;

static inline float_t getStaticF_AXIS_DEADZONE_THRESHOLD() ;

static inline float_t getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS() ;

static inline int32_t getStaticF_NUM_HAPTIC_CHANNELS() ;

static inline float_t getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE() ;

static inline ::StringW getStaticF_OPENVR_TOUCH_NAME() ;

static inline ::StringW getStaticF_OPENVR_VIVE_CONTROLLER_NAME() ;

static inline ::StringW getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME() ;

static inline bool getStaticF__pluginSupportsActiveController() ;

static inline bool getStaticF__pluginSupportsActiveControllerCached() ;

static inline ::System::Version* getStaticF__pluginSupportsActiveControllerMinVersion() ;

static inline ::GlobalNamespace::OVRInput_Controller getStaticF_activeControllerType() ;

static inline ::GlobalNamespace::OVRInput_Controller getStaticF_connectedControllerTypes() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* getStaticF_controllers() ;

static inline int32_t getStaticF_fixedUpdateCount() ;

static inline ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*> getStaticF_hapticInfos() ;

static inline ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails> getStaticF_openVRControllerDetails() ;

static inline ::GlobalNamespace::OVRPlugin_Step getStaticF_stepType() ;

/// @brief Method get_pluginSupportsActiveController, addr 0xa5c3388, size 0x9c, virtual false, abstract: false, final false
static inline bool get_pluginSupportsActiveController() ;

static inline void setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t  value) ;

static inline void setStaticF_AXIS_DEADZONE_THRESHOLD(float_t  value) ;

static inline void setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t  value) ;

static inline void setStaticF_NUM_HAPTIC_CHANNELS(int32_t  value) ;

static inline void setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t  value) ;

static inline void setStaticF_OPENVR_TOUCH_NAME(::StringW  value) ;

static inline void setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW  value) ;

static inline void setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW  value) ;

static inline void setStaticF__pluginSupportsActiveController(bool  value) ;

static inline void setStaticF__pluginSupportsActiveControllerCached(bool  value) ;

static inline void setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version*  value) ;

static inline void setStaticF_activeControllerType(::GlobalNamespace::OVRInput_Controller  value) ;

static inline void setStaticF_connectedControllerTypes(::GlobalNamespace::OVRInput_Controller  value) ;

static inline void setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*  value) ;

static inline void setStaticF_fixedUpdateCount(int32_t  value) ;

static inline void setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>  value) ;

static inline void setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>  value) ;

static inline void setStaticF_stepType(::GlobalNamespace::OVRPlugin_Step  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput(OVRInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput(OVRInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerGamepadAndroid
class CORDL_TYPE OVRInput_OVRControllerGamepadAndroid : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb53c, size 0x2c, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb568, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cb490, size 0x6c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb520, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cb4fc, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid* New_ctor() ;

/// @brief Method .ctor, addr 0xa5cb470, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerGamepadAndroid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadAndroid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerGamepadAndroid(OVRInput_OVRControllerGamepadAndroid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadAndroid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerGamepadAndroid(OVRInput_OVRControllerGamepadAndroid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerGamepadPC
class CORDL_TYPE OVRInput_OVRControllerGamepadPC : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb420, size 0x2c, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb44c, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cb374, size 0x6c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb404, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cb3e0, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerGamepadPC* New_ctor() ;

/// @brief Method .ctor, addr 0xa5cb354, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerGamepadPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadPC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerGamepadPC(OVRInput_OVRControllerGamepadPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadPC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerGamepadPC(OVRInput_OVRControllerGamepadPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerGamepadPC) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRemote
class CORDL_TYPE OVRInput_OVRControllerRemote : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb314, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb338, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cb278, size 0x5c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb2f8, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cb2d4, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerRemote* New_ctor() ;

/// @brief Method .ctor, addr 0xa5cb258, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerRemote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRemote", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerRemote(OVRInput_OVRControllerRemote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRemote", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerRemote(OVRInput_OVRControllerRemote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerRemote) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRHand
class CORDL_TYPE OVRInput_OVRControllerRHand : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb210, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb234, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cb184, size 0x4c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb1f4, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cb1d0, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5cb250, size 0x8, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerRHand* New_ctor() ;

/// @brief Method .ctor, addr 0xa5cb164, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerRHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerRHand(OVRInput_OVRControllerRHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerRHand(OVRInput_OVRControllerRHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerRHand) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerLHand
class CORDL_TYPE OVRInput_OVRControllerLHand : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb11c, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb140, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cb090, size 0x4c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb100, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cb0dc, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5cb15c, size 0x8, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerLHand* New_ctor() ;

/// @brief Method .ctor, addr 0xa5cb070, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerLHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerLHand(OVRInput_OVRControllerLHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerLHand(OVRInput_OVRControllerLHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerLHand) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerHands
class CORDL_TYPE OVRInput_OVRControllerHands : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cb01c, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cb040, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5caf90, size 0x4c, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cb000, size 0x1c, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cafdc, size 0x24, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5cb05c, size 0x14, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerHands* New_ctor() ;

/// @brief Method .ctor, addr 0xa5caf70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerHands() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerHands", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerHands(OVRInput_OVRControllerHands && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerHands", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerHands(OVRInput_OVRControllerHands const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerHands) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRTouch
class CORDL_TYPE OVRInput_OVRControllerRTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5caf00, size 0x44, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5caf44, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cae44, size 0x68, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5caedc, size 0x24, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5caeac, size 0x30, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5caf68, size 0x8, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerRTouch* New_ctor() ;

/// @brief Method .ctor, addr 0xa5c39fc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerRTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRTouch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerRTouch(OVRInput_OVRControllerRTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRTouch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerRTouch(OVRInput_OVRControllerRTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerRTouch) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerLTouch
class CORDL_TYPE OVRInput_OVRControllerLTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cadd4, size 0x44, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cae18, size 0x24, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cad18, size 0x68, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cadb0, size 0x24, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cad80, size 0x30, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5cae3c, size 0x8, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerLTouch* New_ctor() ;

/// @brief Method .ctor, addr 0xa5c39e0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerLTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLTouch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerLTouch(OVRInput_OVRControllerLTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLTouch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerLTouch(OVRInput_OVRControllerLTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerLTouch) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerTouch
class CORDL_TYPE OVRInput_OVRControllerTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
// Declarations
/// @brief Method ConfigureAxis1DMap, addr 0xa5cac94, size 0x48, virtual true, abstract: false, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0xa5cacdc, size 0x28, virtual true, abstract: false, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0xa5cabd0, size 0x64, virtual true, abstract: false, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0xa5cac6c, size 0x28, virtual true, abstract: false, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0xa5cac34, size 0x38, virtual true, abstract: false, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5cad04, size 0x14, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

static inline ::GlobalNamespace::OVRInput_OVRControllerTouch* New_ctor() ;

/// @brief Method .ctor, addr 0xa5c39c4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerTouch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerTouch(OVRInput_OVRControllerTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerTouch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerTouch(OVRInput_OVRControllerTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerTouch) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::Controller, OVRPlugin::ControllerState6, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase
class CORDL_TYPE OVRInput_OVRControllerBase : public ::System::Object {
public:
// Declarations
using VirtualAxis1DMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap;

using VirtualAxis2DMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap;

using VirtualButtonMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap;

using VirtualNearTouchMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap;

using VirtualTouchMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap;

/// @brief Field HapticsPcmSamplesConsumedCache, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_HapticsPcmSamplesConsumedCache, put=__cordl_internal_set_HapticsPcmSamplesConsumedCache)) ::ArrayW<uint32_t>  HapticsPcmSamplesConsumedCache;

/// @brief Field axis1DMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_axis1DMap, put=__cordl_internal_set_axis1DMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*  axis1DMap;

/// @brief Field axis2DMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_axis2DMap, put=__cordl_internal_set_axis2DMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*  axis2DMap;

/// @brief Field buttonMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonMap, put=__cordl_internal_set_buttonMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*  buttonMap;

/// @brief Field controllerType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_controllerType, put=__cordl_internal_set_controllerType)) ::GlobalNamespace::OVRInput_Controller  controllerType;

/// @brief Field currentState, offset 0xac, size 0x6c 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::OVRPlugin_ControllerState6  currentState;

/// @brief Field nearTouchMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearTouchMap, put=__cordl_internal_set_nearTouchMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*  nearTouchMap;

/// @brief Field previousState, offset 0x40, size 0x6c 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) ::GlobalNamespace::OVRPlugin_ControllerState6  previousState;

/// @brief Field shouldApplyDeadzone, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldApplyDeadzone, put=__cordl_internal_set_shouldApplyDeadzone)) bool  shouldApplyDeadzone;

/// @brief Field touchMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchMap, put=__cordl_internal_set_touchMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*  touchMap;

/// @brief Method ConfigureAxis1DMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConfigureAxis1DMap() ;

/// @brief Method ConfigureAxis2DMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConfigureAxis2DMap() ;

/// @brief Method ConfigureButtonMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConfigureButtonMap() ;

/// @brief Method ConfigureNearTouchMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConfigureNearTouchMap() ;

/// @brief Method ConfigureTouchMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConfigureTouchMap() ;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Method GetBatteryPercentRemaining, addr 0xa5ca744, size 0x8, virtual true, abstract: false, final false
inline uint8_t GetBatteryPercentRemaining() ;

/// @brief Method GetControllerSampleRateHz, addr 0xa5ca6d0, size 0x74, virtual true, abstract: false, final false
inline float_t GetControllerSampleRateHz() ;

/// @brief Method GetOpenVRControllerState, addr 0xa5c9e28, size 0x4b4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_ControllerState6 GetOpenVRControllerState(::GlobalNamespace::OVRInput_Controller  controllerType) ;

static inline ::GlobalNamespace::OVRInput_OVRControllerBase* New_ctor() ;

/// @brief Method ResolveToRawMask, addr 0xa5c8258, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawAxis1D ResolveToRawMask(::GlobalNamespace::OVRInput_Axis1D  virtualMask) ;

/// @brief Method ResolveToRawMask, addr 0xa5c86fc, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawAxis2D ResolveToRawMask(::GlobalNamespace::OVRInput_Axis2D  virtualMask) ;

/// @brief Method ResolveToRawMask, addr 0xa5c69e0, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawButton ResolveToRawMask(::GlobalNamespace::OVRInput_Button  virtualMask) ;

/// @brief Method ResolveToRawMask, addr 0xa5c7698, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawNearTouch ResolveToRawMask(::GlobalNamespace::OVRInput_NearTouch  virtualMask) ;

/// @brief Method ResolveToRawMask, addr 0xa5c7008, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawTouch ResolveToRawMask(::GlobalNamespace::OVRInput_Touch  virtualMask) ;

/// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0xa5ca3d4, size 0x120, virtual true, abstract: false, final false
inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration  hapticsVibration) ;

/// @brief Method SetControllerHapticsPcm, addr 0xa5ca4f4, size 0x1dc, virtual true, abstract: false, final false
inline int32_t SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration  hapticsVibration) ;

/// @brief Method SetControllerLocalizedVibration, addr 0xa5ca350, size 0x84, virtual true, abstract: false, final false
inline void SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude) ;

/// @brief Method SetControllerVibration, addr 0xa5ca2dc, size 0x74, virtual true, abstract: false, final false
inline void SetControllerVibration(float_t  frequency, float_t  amplitude) ;

/// @brief Method Update, addr 0xa5c9908, size 0x520, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Controller Update() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_HapticsPcmSamplesConsumedCache() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_HapticsPcmSamplesConsumedCache() ;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* const& __cordl_internal_get_axis1DMap() const;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*& __cordl_internal_get_axis1DMap() ;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* const& __cordl_internal_get_axis2DMap() const;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*& __cordl_internal_get_axis2DMap() ;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* const& __cordl_internal_get_buttonMap() const;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*& __cordl_internal_get_buttonMap() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get_controllerType() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get_controllerType() ;

constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* const& __cordl_internal_get_nearTouchMap() const;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*& __cordl_internal_get_nearTouchMap() ;

constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& __cordl_internal_get_previousState() const;

constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& __cordl_internal_get_previousState() ;

constexpr bool const& __cordl_internal_get_shouldApplyDeadzone() const;

constexpr bool& __cordl_internal_get_shouldApplyDeadzone() ;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* const& __cordl_internal_get_touchMap() const;

constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*& __cordl_internal_get_touchMap() ;

constexpr void __cordl_internal_set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_axis1DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*  value) ;

constexpr void __cordl_internal_set_axis2DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*  value) ;

constexpr void __cordl_internal_set_buttonMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*  value) ;

constexpr void __cordl_internal_set_controllerType(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::OVRPlugin_ControllerState6  value) ;

constexpr void __cordl_internal_set_nearTouchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*  value) ;

constexpr void __cordl_internal_set_previousState(::GlobalNamespace::OVRPlugin_ControllerState6  value) ;

constexpr void __cordl_internal_set_shouldApplyDeadzone(bool  value) ;

constexpr void __cordl_internal_set_touchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*  value) ;

/// @brief Method .ctor, addr 0xa5c96e8, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OVRControllerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_OVRControllerBase(OVRInput_OVRControllerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_OVRControllerBase(OVRInput_OVRControllerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11958};

/// @brief Field controllerType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ___controllerType;

/// @brief Field buttonMap, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*  ___buttonMap;

/// @brief Field touchMap, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*  ___touchMap;

/// @brief Field nearTouchMap, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*  ___nearTouchMap;

/// @brief Field axis1DMap, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*  ___axis1DMap;

/// @brief Field axis2DMap, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*  ___axis2DMap;

/// @brief Field previousState, offset: 0x40, size: 0x6c, def value: None
 ::GlobalNamespace::OVRPlugin_ControllerState6  ___previousState;

/// @brief Field currentState, offset: 0xac, size: 0x6c, def value: None
 ::GlobalNamespace::OVRPlugin_ControllerState6  ___currentState;

/// @brief Field shouldApplyDeadzone, offset: 0x118, size: 0x1, def value: None
 bool  ___shouldApplyDeadzone;

/// @brief Field HapticsPcmSamplesConsumedCache, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___HapticsPcmSamplesConsumedCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___controllerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___buttonMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___touchMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___nearTouchMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___axis1DMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___axis2DMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___previousState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___currentState) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___shouldApplyDeadzone) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___HapticsPcmSamplesConsumedCache) == 0x120, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_OVRControllerBase) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::RawAxis2D, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualAxis2DMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualAxis2DMap : public ::System::Object {
public:
// Declarations
/// @brief Field None, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_None, put=__cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawAxis2D  None;

/// @brief Field PrimaryThumbstick, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstick, put=__cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawAxis2D  PrimaryThumbstick;

/// @brief Field PrimaryTouchpad, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryTouchpad, put=__cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawAxis2D  PrimaryTouchpad;

/// @brief Field SecondaryThumbstick, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstick, put=__cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawAxis2D  SecondaryThumbstick;

/// @brief Field SecondaryTouchpad, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryTouchpad, put=__cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawAxis2D  SecondaryTouchpad;

static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* New_ctor() ;

/// @brief Method ToRawMask, addr 0xa5cab7c, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawAxis2D ToRawMask(::GlobalNamespace::OVRInput_Axis2D  virtualMask) ;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_None() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_None() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_PrimaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_PrimaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_PrimaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_PrimaryTouchpad() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_SecondaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_SecondaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_SecondaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_SecondaryTouchpad() ;

constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis2D  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D  value) ;

constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D  value) ;

constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D  value) ;

/// @brief Method .ctor, addr 0xa5c9900, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerBase_OVRInput_VirtualAxis2DMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis2DMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerBase_OVRInput_VirtualAxis2DMap(OVRControllerBase_OVRInput_VirtualAxis2DMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis2DMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerBase_OVRInput_VirtualAxis2DMap(OVRControllerBase_OVRInput_VirtualAxis2DMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11957};

/// @brief Field None, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis2D  ___None;

/// @brief Field PrimaryThumbstick, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis2D  ___PrimaryThumbstick;

/// @brief Field PrimaryTouchpad, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis2D  ___PrimaryTouchpad;

/// @brief Field SecondaryThumbstick, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis2D  ___SecondaryThumbstick;

/// @brief Field SecondaryTouchpad, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis2D  ___SecondaryTouchpad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___PrimaryThumbstick) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___PrimaryTouchpad) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___SecondaryThumbstick) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___SecondaryTouchpad) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::RawAxis1D, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualAxis1DMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualAxis1DMap : public ::System::Object {
public:
// Declarations
/// @brief Field None, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_None, put=__cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawAxis1D  None;

/// @brief Field PrimaryHandTrigger, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryHandTrigger, put=__cordl_internal_set_PrimaryHandTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryHandTrigger;

/// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTrigger, put=__cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryIndexTrigger;

/// @brief Field PrimaryIndexTriggerCurl, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTriggerCurl, put=__cordl_internal_set_PrimaryIndexTriggerCurl)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryIndexTriggerCurl;

/// @brief Field PrimaryIndexTriggerForce, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTriggerForce, put=__cordl_internal_set_PrimaryIndexTriggerForce)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryIndexTriggerForce;

/// @brief Field PrimaryIndexTriggerSlide, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTriggerSlide, put=__cordl_internal_set_PrimaryIndexTriggerSlide)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryIndexTriggerSlide;

/// @brief Field PrimaryStylusForce, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryStylusForce, put=__cordl_internal_set_PrimaryStylusForce)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryStylusForce;

/// @brief Field PrimaryThumbRestForce, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbRestForce, put=__cordl_internal_set_PrimaryThumbRestForce)) ::GlobalNamespace::OVRInput_RawAxis1D  PrimaryThumbRestForce;

/// @brief Field SecondaryHandTrigger, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryHandTrigger, put=__cordl_internal_set_SecondaryHandTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryHandTrigger;

/// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTrigger, put=__cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryIndexTrigger;

/// @brief Field SecondaryIndexTriggerCurl, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTriggerCurl, put=__cordl_internal_set_SecondaryIndexTriggerCurl)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryIndexTriggerCurl;

/// @brief Field SecondaryIndexTriggerForce, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTriggerForce, put=__cordl_internal_set_SecondaryIndexTriggerForce)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryIndexTriggerForce;

/// @brief Field SecondaryIndexTriggerSlide, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTriggerSlide, put=__cordl_internal_set_SecondaryIndexTriggerSlide)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryIndexTriggerSlide;

/// @brief Field SecondaryStylusForce, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryStylusForce, put=__cordl_internal_set_SecondaryStylusForce)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryStylusForce;

/// @brief Field SecondaryThumbRestForce, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbRestForce, put=__cordl_internal_set_SecondaryThumbRestForce)) ::GlobalNamespace::OVRInput_RawAxis1D  SecondaryThumbRestForce;

static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* New_ctor() ;

/// @brief Method ToRawMask, addr 0xa5caa88, size 0xf4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawAxis1D ToRawMask(::GlobalNamespace::OVRInput_Axis1D  virtualMask) ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_None() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_None() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryHandTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryHandTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerCurl() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerCurl() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerForce() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerSlide() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerSlide() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryStylusForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryStylusForce() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryThumbRestForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryThumbRestForce() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryHandTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryHandTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerCurl() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerCurl() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerForce() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerSlide() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerSlide() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryStylusForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryStylusForce() ;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryThumbRestForce() const;

constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryThumbRestForce() ;

constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_PrimaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

constexpr void __cordl_internal_set_SecondaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D  value) ;

/// @brief Method .ctor, addr 0xa5c98f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerBase_OVRInput_VirtualAxis1DMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis1DMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerBase_OVRInput_VirtualAxis1DMap(OVRControllerBase_OVRInput_VirtualAxis1DMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis1DMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerBase_OVRInput_VirtualAxis1DMap(OVRControllerBase_OVRInput_VirtualAxis1DMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11956};

/// @brief Field None, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___None;

/// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryIndexTrigger;

/// @brief Field PrimaryHandTrigger, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryHandTrigger;

/// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryIndexTrigger;

/// @brief Field SecondaryHandTrigger, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryHandTrigger;

/// @brief Field PrimaryIndexTriggerCurl, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryIndexTriggerCurl;

/// @brief Field PrimaryIndexTriggerSlide, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryIndexTriggerSlide;

/// @brief Field PrimaryThumbRestForce, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryThumbRestForce;

/// @brief Field PrimaryStylusForce, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryStylusForce;

/// @brief Field SecondaryIndexTriggerCurl, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryIndexTriggerCurl;

/// @brief Field SecondaryIndexTriggerSlide, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryIndexTriggerSlide;

/// @brief Field SecondaryThumbRestForce, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryThumbRestForce;

/// @brief Field SecondaryStylusForce, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryStylusForce;

/// @brief Field PrimaryIndexTriggerForce, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___PrimaryIndexTriggerForce;

/// @brief Field SecondaryIndexTriggerForce, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawAxis1D  ___SecondaryIndexTriggerForce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryHandTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerCurl) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerSlide) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryThumbRestForce) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryStylusForce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerCurl) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerSlide) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryThumbRestForce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryStylusForce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerForce) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::RawNearTouch, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualNearTouchMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualNearTouchMap : public ::System::Object {
public:
// Declarations
/// @brief Field None, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_None, put=__cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawNearTouch  None;

/// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTrigger, put=__cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawNearTouch  PrimaryIndexTrigger;

/// @brief Field PrimaryThumbButtons, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbButtons, put=__cordl_internal_set_PrimaryThumbButtons)) ::GlobalNamespace::OVRInput_RawNearTouch  PrimaryThumbButtons;

/// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTrigger, put=__cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawNearTouch  SecondaryIndexTrigger;

/// @brief Field SecondaryThumbButtons, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbButtons, put=__cordl_internal_set_SecondaryThumbButtons)) ::GlobalNamespace::OVRInput_RawNearTouch  SecondaryThumbButtons;

static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* New_ctor() ;

/// @brief Method ToRawMask, addr 0xa5caa34, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawNearTouch ToRawMask(::GlobalNamespace::OVRInput_NearTouch  virtualMask) ;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_None() const;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_None() ;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_PrimaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_PrimaryThumbButtons() const;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_PrimaryThumbButtons() ;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_SecondaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_SecondaryThumbButtons() const;

constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_SecondaryThumbButtons() ;

constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawNearTouch  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch  value) ;

constexpr void __cordl_internal_set_PrimaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch  value) ;

constexpr void __cordl_internal_set_SecondaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch  value) ;

/// @brief Method .ctor, addr 0xa5c98f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerBase_OVRInput_VirtualNearTouchMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualNearTouchMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerBase_OVRInput_VirtualNearTouchMap(OVRControllerBase_OVRInput_VirtualNearTouchMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualNearTouchMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerBase_OVRInput_VirtualNearTouchMap(OVRControllerBase_OVRInput_VirtualNearTouchMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11955};

/// @brief Field None, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawNearTouch  ___None;

/// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawNearTouch  ___PrimaryIndexTrigger;

/// @brief Field PrimaryThumbButtons, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawNearTouch  ___PrimaryThumbButtons;

/// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawNearTouch  ___SecondaryIndexTrigger;

/// @brief Field SecondaryThumbButtons, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawNearTouch  ___SecondaryThumbButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___PrimaryThumbButtons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___SecondaryThumbButtons) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::RawTouch, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualTouchMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualTouchMap : public ::System::Object {
public:
// Declarations
/// @brief Field Four, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Four, put=__cordl_internal_set_Four)) ::GlobalNamespace::OVRInput_RawTouch  Four;

/// @brief Field None, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_None, put=__cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawTouch  None;

/// @brief Field One, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_One, put=__cordl_internal_set_One)) ::GlobalNamespace::OVRInput_RawTouch  One;

/// @brief Field PrimaryIndexTrigger, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTrigger, put=__cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawTouch  PrimaryIndexTrigger;

/// @brief Field PrimaryThumbRest, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbRest, put=__cordl_internal_set_PrimaryThumbRest)) ::GlobalNamespace::OVRInput_RawTouch  PrimaryThumbRest;

/// @brief Field PrimaryThumbstick, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstick, put=__cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawTouch  PrimaryThumbstick;

/// @brief Field PrimaryTouchpad, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryTouchpad, put=__cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawTouch  PrimaryTouchpad;

/// @brief Field SecondaryIndexTrigger, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTrigger, put=__cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawTouch  SecondaryIndexTrigger;

/// @brief Field SecondaryThumbRest, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbRest, put=__cordl_internal_set_SecondaryThumbRest)) ::GlobalNamespace::OVRInput_RawTouch  SecondaryThumbRest;

/// @brief Field SecondaryThumbstick, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstick, put=__cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawTouch  SecondaryThumbstick;

/// @brief Field SecondaryTouchpad, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryTouchpad, put=__cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawTouch  SecondaryTouchpad;

/// @brief Field Three, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Three, put=__cordl_internal_set_Three)) ::GlobalNamespace::OVRInput_RawTouch  Three;

/// @brief Field Two, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Two, put=__cordl_internal_set_Two)) ::GlobalNamespace::OVRInput_RawTouch  Two;

static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* New_ctor() ;

/// @brief Method ToRawMask, addr 0xa5ca960, size 0xd4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawTouch ToRawMask(::GlobalNamespace::OVRInput_Touch  virtualMask) ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Four() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Four() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_None() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_None() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_One() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_One() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryThumbRest() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryThumbRest() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryTouchpad() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryThumbRest() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryThumbRest() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryTouchpad() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Three() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Three() ;

constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Two() const;

constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Two() ;

constexpr void __cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_One(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_PrimaryThumbRest(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_SecondaryThumbRest(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawTouch  value) ;

constexpr void __cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawTouch  value) ;

/// @brief Method .ctor, addr 0xa5c98e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerBase_OVRInput_VirtualTouchMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualTouchMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerBase_OVRInput_VirtualTouchMap(OVRControllerBase_OVRInput_VirtualTouchMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualTouchMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerBase_OVRInput_VirtualTouchMap(OVRControllerBase_OVRInput_VirtualTouchMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11954};

/// @brief Field None, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___None;

/// @brief Field One, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___One;

/// @brief Field Two, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___Two;

/// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___Three;

/// @brief Field Four, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___Four;

/// @brief Field PrimaryIndexTrigger, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___PrimaryIndexTrigger;

/// @brief Field PrimaryThumbstick, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___PrimaryThumbstick;

/// @brief Field PrimaryThumbRest, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___PrimaryThumbRest;

/// @brief Field PrimaryTouchpad, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___PrimaryTouchpad;

/// @brief Field SecondaryIndexTrigger, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___SecondaryIndexTrigger;

/// @brief Field SecondaryThumbstick, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___SecondaryThumbstick;

/// @brief Field SecondaryThumbRest, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___SecondaryThumbRest;

/// @brief Field SecondaryTouchpad, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawTouch  ___SecondaryTouchpad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryIndexTrigger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryThumbRest) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryIndexTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryThumbRest) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryTouchpad) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRInput::RawButton, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualButtonMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualButtonMap : public ::System::Object {
public:
// Declarations
/// @brief Field Back, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Back, put=__cordl_internal_set_Back)) ::GlobalNamespace::OVRInput_RawButton  Back;

/// @brief Field Down, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_Down, put=__cordl_internal_set_Down)) ::GlobalNamespace::OVRInput_RawButton  Down;

/// @brief Field DpadDown, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_DpadDown, put=__cordl_internal_set_DpadDown)) ::GlobalNamespace::OVRInput_RawButton  DpadDown;

/// @brief Field DpadLeft, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DpadLeft, put=__cordl_internal_set_DpadLeft)) ::GlobalNamespace::OVRInput_RawButton  DpadLeft;

/// @brief Field DpadRight, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_DpadRight, put=__cordl_internal_set_DpadRight)) ::GlobalNamespace::OVRInput_RawButton  DpadRight;

/// @brief Field DpadUp, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_DpadUp, put=__cordl_internal_set_DpadUp)) ::GlobalNamespace::OVRInput_RawButton  DpadUp;

/// @brief Field Four, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Four, put=__cordl_internal_set_Four)) ::GlobalNamespace::OVRInput_RawButton  Four;

/// @brief Field Left, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Left, put=__cordl_internal_set_Left)) ::GlobalNamespace::OVRInput_RawButton  Left;

/// @brief Field None, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_None, put=__cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawButton  None;

/// @brief Field One, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_One, put=__cordl_internal_set_One)) ::GlobalNamespace::OVRInput_RawButton  One;

/// @brief Field PrimaryHandTrigger, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryHandTrigger, put=__cordl_internal_set_PrimaryHandTrigger)) ::GlobalNamespace::OVRInput_RawButton  PrimaryHandTrigger;

/// @brief Field PrimaryIndexTrigger, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryIndexTrigger, put=__cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawButton  PrimaryIndexTrigger;

/// @brief Field PrimaryShoulder, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryShoulder, put=__cordl_internal_set_PrimaryShoulder)) ::GlobalNamespace::OVRInput_RawButton  PrimaryShoulder;

/// @brief Field PrimaryThumbstick, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstick, put=__cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawButton  PrimaryThumbstick;

/// @brief Field PrimaryThumbstickDown, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstickDown, put=__cordl_internal_set_PrimaryThumbstickDown)) ::GlobalNamespace::OVRInput_RawButton  PrimaryThumbstickDown;

/// @brief Field PrimaryThumbstickLeft, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstickLeft, put=__cordl_internal_set_PrimaryThumbstickLeft)) ::GlobalNamespace::OVRInput_RawButton  PrimaryThumbstickLeft;

/// @brief Field PrimaryThumbstickRight, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstickRight, put=__cordl_internal_set_PrimaryThumbstickRight)) ::GlobalNamespace::OVRInput_RawButton  PrimaryThumbstickRight;

/// @brief Field PrimaryThumbstickUp, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryThumbstickUp, put=__cordl_internal_set_PrimaryThumbstickUp)) ::GlobalNamespace::OVRInput_RawButton  PrimaryThumbstickUp;

/// @brief Field PrimaryTouchpad, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrimaryTouchpad, put=__cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawButton  PrimaryTouchpad;

/// @brief Field Right, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_Right, put=__cordl_internal_set_Right)) ::GlobalNamespace::OVRInput_RawButton  Right;

/// @brief Field SecondaryHandTrigger, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryHandTrigger, put=__cordl_internal_set_SecondaryHandTrigger)) ::GlobalNamespace::OVRInput_RawButton  SecondaryHandTrigger;

/// @brief Field SecondaryIndexTrigger, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryIndexTrigger, put=__cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawButton  SecondaryIndexTrigger;

/// @brief Field SecondaryShoulder, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryShoulder, put=__cordl_internal_set_SecondaryShoulder)) ::GlobalNamespace::OVRInput_RawButton  SecondaryShoulder;

/// @brief Field SecondaryThumbstick, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstick, put=__cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawButton  SecondaryThumbstick;

/// @brief Field SecondaryThumbstickDown, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstickDown, put=__cordl_internal_set_SecondaryThumbstickDown)) ::GlobalNamespace::OVRInput_RawButton  SecondaryThumbstickDown;

/// @brief Field SecondaryThumbstickLeft, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstickLeft, put=__cordl_internal_set_SecondaryThumbstickLeft)) ::GlobalNamespace::OVRInput_RawButton  SecondaryThumbstickLeft;

/// @brief Field SecondaryThumbstickRight, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstickRight, put=__cordl_internal_set_SecondaryThumbstickRight)) ::GlobalNamespace::OVRInput_RawButton  SecondaryThumbstickRight;

/// @brief Field SecondaryThumbstickUp, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryThumbstickUp, put=__cordl_internal_set_SecondaryThumbstickUp)) ::GlobalNamespace::OVRInput_RawButton  SecondaryThumbstickUp;

/// @brief Field SecondaryTouchpad, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_SecondaryTouchpad, put=__cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawButton  SecondaryTouchpad;

/// @brief Field Start, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Start, put=__cordl_internal_set_Start)) ::GlobalNamespace::OVRInput_RawButton  Start;

/// @brief Field Three, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Three, put=__cordl_internal_set_Three)) ::GlobalNamespace::OVRInput_RawButton  Three;

/// @brief Field Two, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Two, put=__cordl_internal_set_Two)) ::GlobalNamespace::OVRInput_RawButton  Two;

/// @brief Field Up, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_Up, put=__cordl_internal_set_Up)) ::GlobalNamespace::OVRInput_RawButton  Up;

static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* New_ctor() ;

/// @brief Method ToRawMask, addr 0xa5ca74c, size 0x214, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_RawButton ToRawMask(::GlobalNamespace::OVRInput_Button  virtualMask) ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Back() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Back() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Down() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Down() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadDown() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadDown() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadLeft() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadLeft() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadRight() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadRight() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadUp() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadUp() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Four() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Four() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Left() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Left() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_None() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_None() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_One() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_One() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryHandTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryHandTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryShoulder() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryShoulder() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickDown() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickDown() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickLeft() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickLeft() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickRight() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickRight() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickUp() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickUp() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryTouchpad() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Right() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Right() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryHandTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryHandTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryIndexTrigger() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryIndexTrigger() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryShoulder() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryShoulder() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstick() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstick() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickDown() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickDown() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickLeft() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickLeft() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickRight() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickRight() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickUp() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickUp() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryTouchpad() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryTouchpad() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Start() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Start() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Three() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Three() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Two() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Two() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Up() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Up() ;

constexpr void __cordl_internal_set_Back(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Down(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_DpadDown(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_DpadLeft(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_DpadRight(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_DpadUp(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Left(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_One(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryShoulder(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Right(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryShoulder(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Start(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_Up(::GlobalNamespace::OVRInput_RawButton  value) ;

/// @brief Method .ctor, addr 0xa5c98e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerBase_OVRInput_VirtualButtonMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualButtonMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerBase_OVRInput_VirtualButtonMap(OVRControllerBase_OVRInput_VirtualButtonMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualButtonMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerBase_OVRInput_VirtualButtonMap(OVRControllerBase_OVRInput_VirtualButtonMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11953};

/// @brief Field None, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___None;

/// @brief Field One, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___One;

/// @brief Field Two, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Two;

/// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Three;

/// @brief Field Four, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Four;

/// @brief Field Start, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Start;

/// @brief Field Back, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Back;

/// @brief Field PrimaryShoulder, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryShoulder;

/// @brief Field PrimaryIndexTrigger, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryIndexTrigger;

/// @brief Field PrimaryHandTrigger, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryHandTrigger;

/// @brief Field PrimaryThumbstick, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryThumbstick;

/// @brief Field PrimaryThumbstickUp, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryThumbstickUp;

/// @brief Field PrimaryThumbstickDown, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryThumbstickDown;

/// @brief Field PrimaryThumbstickLeft, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryThumbstickLeft;

/// @brief Field PrimaryThumbstickRight, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryThumbstickRight;

/// @brief Field PrimaryTouchpad, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___PrimaryTouchpad;

/// @brief Field SecondaryShoulder, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryShoulder;

/// @brief Field SecondaryIndexTrigger, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryIndexTrigger;

/// @brief Field SecondaryHandTrigger, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryHandTrigger;

/// @brief Field SecondaryThumbstick, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryThumbstick;

/// @brief Field SecondaryThumbstickUp, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryThumbstickUp;

/// @brief Field SecondaryThumbstickDown, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryThumbstickDown;

/// @brief Field SecondaryThumbstickLeft, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryThumbstickLeft;

/// @brief Field SecondaryThumbstickRight, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryThumbstickRight;

/// @brief Field SecondaryTouchpad, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___SecondaryTouchpad;

/// @brief Field DpadUp, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___DpadUp;

/// @brief Field DpadDown, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___DpadDown;

/// @brief Field DpadLeft, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___DpadLeft;

/// @brief Field DpadRight, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___DpadRight;

/// @brief Field Up, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Up;

/// @brief Field Down, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Down;

/// @brief Field Left, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Left;

/// @brief Field Right, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___Right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Start) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Back) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryShoulder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryIndexTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryHandTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickUp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickDown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryTouchpad) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryShoulder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryIndexTrigger) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryHandTrigger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstick) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickUp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickDown) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickRight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryTouchpad) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadUp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadDown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadLeft) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Up) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Down) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Left) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Right) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/HapticInfo
class CORDL_TYPE OVRInput_HapticInfo : public ::System::Object {
public:
// Declarations
/// @brief Field hapticAmplitude, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticAmplitude, put=__cordl_internal_set_hapticAmplitude)) float_t  hapticAmplitude;

/// @brief Field hapticsDuration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsDuration, put=__cordl_internal_set_hapticsDuration)) float_t  hapticsDuration;

/// @brief Field hapticsDurationPlayed, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsDurationPlayed, put=__cordl_internal_set_hapticsDurationPlayed)) float_t  hapticsDurationPlayed;

/// @brief Field node, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::UnityEngine::XR::XRNode  node;

/// @brief Field playingHaptics, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingHaptics, put=__cordl_internal_set_playingHaptics)) bool  playingHaptics;

static inline ::GlobalNamespace::OVRInput_HapticInfo* New_ctor() ;

constexpr float_t const& __cordl_internal_get_hapticAmplitude() const;

constexpr float_t& __cordl_internal_get_hapticAmplitude() ;

constexpr float_t const& __cordl_internal_get_hapticsDuration() const;

constexpr float_t& __cordl_internal_get_hapticsDuration() ;

constexpr float_t const& __cordl_internal_get_hapticsDurationPlayed() const;

constexpr float_t& __cordl_internal_get_hapticsDurationPlayed() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node() ;

constexpr bool const& __cordl_internal_get_playingHaptics() const;

constexpr bool& __cordl_internal_get_playingHaptics() ;

constexpr void __cordl_internal_set_hapticAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_hapticsDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticsDurationPlayed(float_t  value) ;

constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_playingHaptics(bool  value) ;

/// @brief Method .ctor, addr 0xa5c8e2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_HapticInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_HapticInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInput_HapticInfo(OVRInput_HapticInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInput_HapticInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInput_HapticInfo(OVRInput_HapticInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11952};

/// @brief Field playingHaptics, offset: 0x10, size: 0x1, def value: None
 bool  ___playingHaptics;

/// @brief Field hapticsDurationPlayed, offset: 0x14, size: 0x4, def value: None
 float_t  ___hapticsDurationPlayed;

/// @brief Field hapticsDuration, offset: 0x18, size: 0x4, def value: None
 float_t  ___hapticsDuration;

/// @brief Field hapticAmplitude, offset: 0x1c, size: 0x4, def value: None
 float_t  ___hapticAmplitude;

/// @brief Field node, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___playingHaptics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticsDurationPlayed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticsDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticAmplitude) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___node) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_HapticInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
