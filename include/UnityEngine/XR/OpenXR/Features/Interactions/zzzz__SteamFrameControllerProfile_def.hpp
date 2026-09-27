#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/SteamFrameControllerProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SteamFrameControllerProfile)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::XR {
class PoseControl;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class SteamFrameControllerProfile_SteamFrameController;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class SteamFrameControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class SteamFrameControllerProfile_SteamFrameController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "SteamFrameControllerProfile");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*, "UnityEngine.XR.OpenXR.Features.Interactions", "SteamFrameControllerProfile/SteamFrameController");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.SteamFrameControllerProfile
class CORDL_TYPE SteamFrameControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using SteamFrameController = ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController;

/// @brief Method GetDeviceLayoutName, addr 0xb93a990, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetDeviceLayoutName() ;

static inline ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile* New_ctor() ;

/// @brief Method RegisterActionMapsWithRuntime, addr 0xb93a9d0, size 0x5508, virtual true, abstract: false, final false
inline void RegisterActionMapsWithRuntime() ;

/// @brief Method RegisterDeviceLayout, addr 0xb93a7c8, size 0x160, virtual true, abstract: false, final false
inline void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout, addr 0xb93a928, size 0x68, virtual true, abstract: false, final false
inline void UnregisterDeviceLayout() ;

/// @brief Method .ctor, addr 0xb93fed8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamFrameControllerProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamFrameControllerProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamFrameControllerProfile(SteamFrameControllerProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamFrameControllerProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamFrameControllerProfile(SteamFrameControllerProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31830};

/// @brief Field aim offset 0xffffffff size 0x8
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field bumperClick offset 0xffffffff size 0x8
static constexpr ::ConstString  bumperClick{u"/input/bumper/click"};

/// @brief Field bumperTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  bumperTouch{u"/input/bumper/touch"};

/// @brief Field buttonA offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonA{u"/input/a/click"};

/// @brief Field buttonATouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonATouch{u"/input/a/touch"};

/// @brief Field buttonB offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonB{u"/input/b/click"};

/// @brief Field buttonBTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonBTouch{u"/input/b/touch"};

/// @brief Field buttonDpadDown offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadDown{u"/input/dpad_down/click"};

/// @brief Field buttonDpadDownTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadDownTouch{u"/input/dpad_down/touch"};

/// @brief Field buttonDpadLeft offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadLeft{u"/input/dpad_left/click"};

/// @brief Field buttonDpadLeftTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadLeftTouch{u"/input/dpad_left/touch"};

/// @brief Field buttonDpadRight offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadRight{u"/input/dpad_right/click"};

/// @brief Field buttonDpadRightTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadRightTouch{u"/input/dpad_right/touch"};

/// @brief Field buttonDpadUp offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadUp{u"/input/dpad_up/click"};

/// @brief Field buttonDpadUpTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonDpadUpTouch{u"/input/dpad_up/touch"};

/// @brief Field buttonView offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonView{u"/input/view/click"};

/// @brief Field buttonViewTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonViewTouch{u"/input/view/touch"};

/// @brief Field buttonX offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonX{u"/input/x/click"};

/// @brief Field buttonXTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonXTouch{u"/input/x/touch"};

/// @brief Field buttonY offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonY{u"/input/y/click"};

/// @brief Field buttonYTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  buttonYTouch{u"/input/y/touch"};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.frame_controller"};

/// @brief Field grip offset 0xffffffff size 0x8
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field haptic offset 0xffffffff size 0x8
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
static constexpr ::ConstString  kDeviceLocalizedName{u"Steam Frame Controller OpenXR"};

/// @brief Field menu offset 0xffffffff size 0x8
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field menuTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  menuTouch{u"/input/menu/touch"};

/// @brief Field profile offset 0xffffffff size 0x8
static constexpr ::ConstString  profile{u"/interaction_profiles/valve/frame_controller_valve"};

/// @brief Field squeezeClick offset 0xffffffff size 0x8
static constexpr ::ConstString  squeezeClick{u"/input/squeeze/click"};

/// @brief Field squeezeTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  squeezeTouch{u"/input/squeeze/touch"};

/// @brief Field squeezeValue offset 0xffffffff size 0x8
static constexpr ::ConstString  squeezeValue{u"/input/squeeze/value"};

/// @brief Field system offset 0xffffffff size 0x8
static constexpr ::ConstString  system{u"/input/system/click"};

/// @brief Field systemTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  systemTouch{u"/input/system/touch"};

/// @brief Field thumbstick offset 0xffffffff size 0x8
static constexpr ::ConstString  thumbstick{u"/input/thumbstick"};

/// @brief Field thumbstickClick offset 0xffffffff size 0x8
static constexpr ::ConstString  thumbstickClick{u"/input/thumbstick/click"};

/// @brief Field thumbstickTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  thumbstickTouch{u"/input/thumbstick/touch"};

/// @brief Field trigger offset 0xffffffff size 0x8
static constexpr ::ConstString  trigger{u"/input/trigger/value"};

/// @brief Field triggerTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  triggerTouch{u"/input/trigger/touch"};

/// @brief Field view offset 0xffffffff size 0x8
static constexpr ::ConstString  view{u"/input/view/click"};

/// @brief Field viewTouch offset 0xffffffff size 0x8
static constexpr ::ConstString  viewTouch{u"/input/view/touch"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// [Preserve]
// [InputControlLayout(displayName = "Steam Frame Controller Controller (OpenXR)", commonUsages = new[] { "LeftHand", "RightHand" })]
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.SteamFrameControllerProfile/SteamFrameController
class CORDL_TYPE SteamFrameControllerProfile_SteamFrameController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief Field <bumperTouched>k__BackingField, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__bumperTouched_k__BackingField, put=__cordl_internal_set__bumperTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _bumperTouched_k__BackingField;

/// @brief Field <bumper>k__BackingField, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__bumper_k__BackingField, put=__cordl_internal_set__bumper_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _bumper_k__BackingField;

/// @brief Field <devicePose>k__BackingField, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get__devicePose_k__BackingField, put=__cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::InputSystem::XR::PoseControl*  _devicePose_k__BackingField;

/// @brief Field <devicePosition>k__BackingField, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get__devicePosition_k__BackingField, put=__cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _devicePosition_k__BackingField;

/// @brief Field <deviceRotation>k__BackingField, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceRotation_k__BackingField, put=__cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _deviceRotation_k__BackingField;

/// @brief Field <faceButtonBottomTouched>k__BackingField, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonBottomTouched_k__BackingField, put=__cordl_internal_set__faceButtonBottomTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonBottomTouched_k__BackingField;

/// @brief Field <faceButtonBottom>k__BackingField, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonBottom_k__BackingField, put=__cordl_internal_set__faceButtonBottom_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonBottom_k__BackingField;

/// @brief Field <faceButtonInsideTouched>k__BackingField, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonInsideTouched_k__BackingField, put=__cordl_internal_set__faceButtonInsideTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonInsideTouched_k__BackingField;

/// @brief Field <faceButtonInside>k__BackingField, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonInside_k__BackingField, put=__cordl_internal_set__faceButtonInside_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonInside_k__BackingField;

/// @brief Field <faceButtonOutsideTouched>k__BackingField, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonOutsideTouched_k__BackingField, put=__cordl_internal_set__faceButtonOutsideTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonOutsideTouched_k__BackingField;

/// @brief Field <faceButtonOutside>k__BackingField, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonOutside_k__BackingField, put=__cordl_internal_set__faceButtonOutside_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonOutside_k__BackingField;

/// @brief Field <faceButtonTopTouched>k__BackingField, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonTopTouched_k__BackingField, put=__cordl_internal_set__faceButtonTopTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonTopTouched_k__BackingField;

/// @brief Field <faceButtonTop>k__BackingField, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceButtonTop_k__BackingField, put=__cordl_internal_set__faceButtonTop_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _faceButtonTop_k__BackingField;

/// @brief Field <gripPressed>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripPressed_k__BackingField, put=__cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _gripPressed_k__BackingField;

/// @brief Field <gripTouched>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripTouched_k__BackingField, put=__cordl_internal_set__gripTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _gripTouched_k__BackingField;

/// @brief Field <grip>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grip_k__BackingField, put=__cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _grip_k__BackingField;

/// @brief Field <haptic>k__BackingField, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get__haptic_k__BackingField, put=__cordl_internal_set__haptic_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::HapticControl*  _haptic_k__BackingField;

/// @brief Field <isTracked>k__BackingField, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get__isTracked_k__BackingField, put=__cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _isTracked_k__BackingField;

/// @brief Field <menuTouched>k__BackingField, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuTouched_k__BackingField, put=__cordl_internal_set__menuTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _menuTouched_k__BackingField;

/// @brief Field <menu>k__BackingField, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__menu_k__BackingField, put=__cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _menu_k__BackingField;

/// @brief Field <pointerPosition>k__BackingField, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerPosition_k__BackingField, put=__cordl_internal_set__pointerPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _pointerPosition_k__BackingField;

/// @brief Field <pointerRotation>k__BackingField, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerRotation_k__BackingField, put=__cordl_internal_set__pointerRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  _pointerRotation_k__BackingField;

/// @brief Field <pointer>k__BackingField, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointer_k__BackingField, put=__cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::InputSystem::XR::PoseControl*  _pointer_k__BackingField;

/// @brief Field <thumbstickClicked>k__BackingField, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstickClicked_k__BackingField, put=__cordl_internal_set__thumbstickClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _thumbstickClicked_k__BackingField;

/// @brief Field <thumbstickTouched>k__BackingField, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstickTouched_k__BackingField, put=__cordl_internal_set__thumbstickTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _thumbstickTouched_k__BackingField;

/// @brief Field <thumbstick>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstick_k__BackingField, put=__cordl_internal_set__thumbstick_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _thumbstick_k__BackingField;

/// @brief Field <trackingState>k__BackingField, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingState_k__BackingField, put=__cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl*  _trackingState_k__BackingField;

/// @brief Field <triggerPressed>k__BackingField, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerPressed_k__BackingField, put=__cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerPressed_k__BackingField;

/// @brief Field <triggerTouched>k__BackingField, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerTouched_k__BackingField, put=__cordl_internal_set__triggerTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerTouched_k__BackingField;

/// @brief Field <trigger>k__BackingField, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger_k__BackingField, put=__cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _trigger_k__BackingField;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "bumperButton" }, usage = "BumperButton")]
 __declspec(property(get=get_bumper, put=set_bumper)) ::UnityEngine::InputSystem::Controls::ButtonControl*  bumper;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "bumperButtonTouched" }, usage = "BumperButtonTouch")]
 __declspec(property(get=get_bumperTouched, put=set_bumperTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  bumperTouched;

/// [Preserve]
/// @brief [InputControl(offset = 0, aliases = new[] { "device", "gripPose" }, usage = "Device")]
 __declspec(property(get=get_devicePose, put=set_devicePose)) ::UnityEngine::InputSystem::XR::PoseControl*  devicePose;

/// [Preserve]
/// @brief [InputControl(offset = 40, noisy = true, alias = "gripPosition")]
 __declspec(property(get=get_devicePosition, put=set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  devicePosition;

/// [Preserve]
/// @brief [InputControl(offset = 52, noisy = true, alias = "gripOrientation")]
 __declspec(property(get=get_deviceRotation, put=set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  deviceRotation;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonBottom", "buttonA", "buttonDpadDown" }, usages = new[] { "PrimaryButton", "FaceButtonBottom", "AButton", "DpadDownButton" })]
 __declspec(property(get=get_faceButtonBottom, put=set_faceButtonBottom)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonBottom;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonBottomTouched", "buttonATouched", "buttonDpadDownTouched" }, usages = new[] { "PrimaryButtonTouch", "FaceButtonBottomTouch", "AButtonTouch", "DpadDownButtonTouch" })]
 __declspec(property(get=get_faceButtonBottomTouched, put=set_faceButtonBottomTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonBottomTouched;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonInside", "buttonX", "buttonDpadRight" }, usages = new[] { "SecondaryButton", "FaceButtonInside", "XButton", "DpadRightButton" })]
 __declspec(property(get=get_faceButtonInside, put=set_faceButtonInside)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonInside;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonInsideTouched", "buttonXTouched", "buttonDpadRightTouched" }, usages = new[] { "SecondaryButtonTouch", "FaceButtonInsideTouch", "XButtonTouch", "DpadRightButtonTouch" })]
 __declspec(property(get=get_faceButtonInsideTouched, put=set_faceButtonInsideTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonInsideTouched;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonOutside", "buttonB", "buttonDpadLeft" }, usages = new[] { "FaceButtonOutside", "BButton", "DpadLeftButton" })]
 __declspec(property(get=get_faceButtonOutside, put=set_faceButtonOutside)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonOutside;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonOutsideTouched", "buttonBTouched", "buttonDpadLeftTouched" }, usages = new[] { "FaceButtonOutsideTouch", "BButtonTouch", "DpadLeftButtonTouch" })]
 __declspec(property(get=get_faceButtonOutsideTouched, put=set_faceButtonOutsideTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonOutsideTouched;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonTop", "buttonY", "buttonDpadUp" }, usages = new[] { "FaceButtonTop", "YButton", "DpadUpButton" })]
 __declspec(property(get=get_faceButtonTop, put=set_faceButtonTop)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonTop;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "buttonTopTouched", "buttonYTouched", "buttonDpadUpTouched" }, usages = new[] { "FaceButtonTopTouch", "YButtonTouch", "DpadUpButtonTouch" })]
 __declspec(property(get=get_faceButtonTopTouched, put=set_faceButtonTopTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  faceButtonTopTouched;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "GripAxis", "squeeze" }, usage = "Grip")]
 __declspec(property(get=get_grip, put=set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl*  grip;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "GripButton", "squeezeClicked" }, usage = "GripButton")]
 __declspec(property(get=get_gripPressed, put=set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  gripPressed;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "GripButtonTouched", "squeezeTouched" }, usage = "GripButtonTouch")]
 __declspec(property(get=get_gripTouched, put=set_gripTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  gripTouched;

/// [Preserve]
/// @brief [InputControl(usage = "Haptic")]
 __declspec(property(get=get_haptic, put=set_haptic)) ::UnityEngine::XR::OpenXR::Input::HapticControl*  haptic;

/// [Preserve]
/// @brief [InputControl(offset = 28, usage = "IsTracked")]
 __declspec(property(get=get_isTracked, put=set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  isTracked;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "menuButton", "viewButton" }, usages = new[] { "MenuButton", "ViewButton" })]
 __declspec(property(get=get_menu, put=set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl*  menu;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "menuButtonTouched", "viewButtonTouched" }, usages = new[] { "MenuButtonTouch", "ViewButtonTouch" })]
 __declspec(property(get=get_menuTouched, put=set_menuTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  menuTouched;

/// [Preserve]
/// @brief [InputControl(offset = 0, alias = "aimPose", usage = "Pointer")]
 __declspec(property(get=get_pointer, put=set_pointer)) ::UnityEngine::InputSystem::XR::PoseControl*  pointer;

/// [Preserve]
/// @brief [InputControl(offset = 100)]
 __declspec(property(get=get_pointerPosition, put=set_pointerPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control*  pointerPosition;

/// [Preserve]
/// @brief [InputControl(offset = 112, alias = "pointerOrientation")]
 __declspec(property(get=get_pointerRotation, put=set_pointerRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl*  pointerRotation;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "Primary2DAxis", "Joystick" }, usage = "Primary2DAxis")]
 __declspec(property(get=get_thumbstick, put=set_thumbstick)) ::UnityEngine::InputSystem::Controls::Vector2Control*  thumbstick;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "JoystickOrPadPressed", "thumbstickClick", "joystickClicked" }, usage = "Primary2DAxisClick")]
 __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  thumbstickClicked;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "JoystickOrPadTouched", "thumbstickTouch", "joystickTouched" }, usage = "Primary2DAxisTouch")]
 __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  thumbstickTouched;

/// [Preserve]
/// @brief [InputControl(offset = 32, usage = "TrackingState")]
 __declspec(property(get=get_trackingState, put=set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl*  trackingState;

/// [Preserve]
/// @brief [InputControl(usage = "Trigger")]
 __declspec(property(get=get_trigger, put=set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl*  trigger;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "indexButton", "indexTouched", "triggerbutton" }, usage = "TriggerButton")]
 __declspec(property(get=get_triggerPressed, put=set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerPressed;

/// [Preserve]
/// @brief [InputControl(aliases = new[] { "indexTouch", "indexNearTouched" }, usage = "TriggerTouch")]
 __declspec(property(get=get_triggerTouched, put=set_triggerTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerTouched;

/// @brief Method FinishSetup, addr 0xb940200, size 0x70c, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController* New_ctor() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__bumperTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__bumperTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__bumper_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__bumper_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::XR::PoseControl*& __cordl_internal_get__devicePose_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonBottomTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonBottomTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonBottom_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonBottom_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonInsideTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonInsideTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonInside_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonInside_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonOutsideTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonOutsideTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonOutside_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonOutside_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonTopTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonTopTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__faceButtonTop_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__faceButtonTop_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField() ;

constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& __cordl_internal_get__haptic_k__BackingField() const;

constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __cordl_internal_get__haptic_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menuTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menuTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pointerPosition_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pointerRotation_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::XR::PoseControl*& __cordl_internal_get__pointer_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickClicked_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickClicked_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__thumbstick_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__thumbstick_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField() ;

constexpr void __cordl_internal_set__bumperTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__bumper_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value) ;

constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr void __cordl_internal_set__faceButtonBottomTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonBottom_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonInsideTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonInside_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonOutsideTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonOutside_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonTopTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__faceButtonTop_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__gripTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr void __cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl*  value) ;

constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__menuTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value) ;

constexpr void __cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method .ctor, addr 0xb94090c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_bumper, addr 0xb93ffc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_bumper() ;

/// [CompilerGenerated]
/// @brief Method get_bumperTouched, addr 0xb93ffd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_bumperTouched() ;

/// [CompilerGenerated]
/// @brief Method get_devicePose, addr 0xb940128, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::XR::PoseControl* get_devicePose() ;

/// [CompilerGenerated]
/// @brief Method get_devicePosition, addr 0xb940188, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition() ;

/// [CompilerGenerated]
/// @brief Method get_deviceRotation, addr 0xb9401a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonBottom, addr 0xb940020, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonBottom() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonBottomTouched, addr 0xb940080, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonBottomTouched() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonInside, addr 0xb940038, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonInside() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonInsideTouched, addr 0xb940098, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonInsideTouched() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonOutside, addr 0xb940008, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonOutside() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonOutsideTouched, addr 0xb940068, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonOutsideTouched() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonTop, addr 0xb93fff0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonTop() ;

/// [CompilerGenerated]
/// @brief Method get_faceButtonTopTouched, addr 0xb940050, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_faceButtonTopTouched() ;

/// [CompilerGenerated]
/// @brief Method get_grip, addr 0xb93ff48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip() ;

/// [CompilerGenerated]
/// @brief Method get_gripPressed, addr 0xb93ff60, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed() ;

/// [CompilerGenerated]
/// @brief Method get_gripTouched, addr 0xb93ff78, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripTouched() ;

/// [CompilerGenerated]
/// @brief Method get_haptic, addr 0xb9401e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic() ;

/// [CompilerGenerated]
/// @brief Method get_isTracked, addr 0xb940158, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked() ;

/// [CompilerGenerated]
/// @brief Method get_menu, addr 0xb93ff90, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu() ;

/// [CompilerGenerated]
/// @brief Method get_menuTouched, addr 0xb93ffa8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menuTouched() ;

/// [CompilerGenerated]
/// @brief Method get_pointer, addr 0xb940140, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::XR::PoseControl* get_pointer() ;

/// [CompilerGenerated]
/// @brief Method get_pointerPosition, addr 0xb9401b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition() ;

/// [CompilerGenerated]
/// @brief Method get_pointerRotation, addr 0xb9401d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation() ;

/// [CompilerGenerated]
/// @brief Method get_thumbstick, addr 0xb93ff30, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick() ;

/// [CompilerGenerated]
/// @brief Method get_thumbstickClicked, addr 0xb9400f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked() ;

/// [CompilerGenerated]
/// @brief Method get_thumbstickTouched, addr 0xb940110, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched() ;

/// [CompilerGenerated]
/// @brief Method get_trackingState, addr 0xb940170, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState() ;

/// [CompilerGenerated]
/// @brief Method get_trigger, addr 0xb9400b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger() ;

/// [CompilerGenerated]
/// @brief Method get_triggerPressed, addr 0xb9400c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed() ;

/// [CompilerGenerated]
/// @brief Method get_triggerTouched, addr 0xb9400e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerTouched() ;

/// [CompilerGenerated]
/// @brief Method set_bumper, addr 0xb93ffc8, size 0x10, virtual false, abstract: false, final false
inline void set_bumper(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_bumperTouched, addr 0xb93ffe0, size 0x10, virtual false, abstract: false, final false
inline void set_bumperTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_devicePose, addr 0xb940130, size 0x10, virtual false, abstract: false, final false
inline void set_devicePose(::UnityEngine::InputSystem::XR::PoseControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_devicePosition, addr 0xb940190, size 0x10, virtual false, abstract: false, final false
inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// [CompilerGenerated]
/// @brief Method set_deviceRotation, addr 0xb9401a8, size 0x10, virtual false, abstract: false, final false
inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonBottom, addr 0xb940028, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonBottom(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonBottomTouched, addr 0xb940088, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonBottomTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonInside, addr 0xb940040, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonInside(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonInsideTouched, addr 0xb9400a0, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonInsideTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonOutside, addr 0xb940010, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonOutside(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonOutsideTouched, addr 0xb940070, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonOutsideTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonTop, addr 0xb93fff8, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonTop(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_faceButtonTopTouched, addr 0xb940058, size 0x10, virtual false, abstract: false, final false
inline void set_faceButtonTopTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_grip, addr 0xb93ff50, size 0x10, virtual false, abstract: false, final false
inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_gripPressed, addr 0xb93ff68, size 0x10, virtual false, abstract: false, final false
inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_gripTouched, addr 0xb93ff80, size 0x10, virtual false, abstract: false, final false
inline void set_gripTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_haptic, addr 0xb9401f0, size 0x10, virtual false, abstract: false, final false
inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isTracked, addr 0xb940160, size 0x10, virtual false, abstract: false, final false
inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_menu, addr 0xb93ff98, size 0x10, virtual false, abstract: false, final false
inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_menuTouched, addr 0xb93ffb0, size 0x10, virtual false, abstract: false, final false
inline void set_menuTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointer, addr 0xb940148, size 0x10, virtual false, abstract: false, final false
inline void set_pointer(::UnityEngine::InputSystem::XR::PoseControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointerPosition, addr 0xb9401c0, size 0x10, virtual false, abstract: false, final false
inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointerRotation, addr 0xb9401d8, size 0x10, virtual false, abstract: false, final false
inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_thumbstick, addr 0xb93ff38, size 0x10, virtual false, abstract: false, final false
inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// [CompilerGenerated]
/// @brief Method set_thumbstickClicked, addr 0xb940100, size 0x10, virtual false, abstract: false, final false
inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_thumbstickTouched, addr 0xb940118, size 0x10, virtual false, abstract: false, final false
inline void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_trackingState, addr 0xb940178, size 0x10, virtual false, abstract: false, final false
inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_trigger, addr 0xb9400b8, size 0x10, virtual false, abstract: false, final false
inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_triggerPressed, addr 0xb9400d0, size 0x10, virtual false, abstract: false, final false
inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_triggerTouched, addr 0xb9400e8, size 0x10, virtual false, abstract: false, final false
inline void set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamFrameControllerProfile_SteamFrameController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamFrameControllerProfile_SteamFrameController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamFrameControllerProfile_SteamFrameController(SteamFrameControllerProfile_SteamFrameController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamFrameControllerProfile_SteamFrameController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamFrameControllerProfile_SteamFrameController(SteamFrameControllerProfile_SteamFrameController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31829};

/// [CompilerGenerated]
/// @brief Field <thumbstick>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector2Control*  ____thumbstick_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <grip>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____grip_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <gripPressed>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____gripPressed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <gripTouched>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____gripTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <menu>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____menu_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <menuTouched>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____menuTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <bumper>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____bumper_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <bumperTouched>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____bumperTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonTop>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonTop_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonOutside>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonOutside_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonBottom>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonBottom_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonInside>k__BackingField, offset: 0x200, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonInside_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonTopTouched>k__BackingField, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonTopTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonOutsideTouched>k__BackingField, offset: 0x210, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonOutsideTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonBottomTouched>k__BackingField, offset: 0x218, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonBottomTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <faceButtonInsideTouched>k__BackingField, offset: 0x220, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____faceButtonInsideTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <trigger>k__BackingField, offset: 0x228, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____trigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <triggerPressed>k__BackingField, offset: 0x230, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____triggerPressed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <triggerTouched>k__BackingField, offset: 0x238, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____triggerTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <thumbstickClicked>k__BackingField, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____thumbstickClicked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <thumbstickTouched>k__BackingField, offset: 0x248, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____thumbstickTouched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <devicePose>k__BackingField, offset: 0x250, size: 0x8, def value: None
 ::UnityEngine::InputSystem::XR::PoseControl*  ____devicePose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointer>k__BackingField, offset: 0x258, size: 0x8, def value: None
 ::UnityEngine::InputSystem::XR::PoseControl*  ____pointer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isTracked>k__BackingField, offset: 0x260, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____isTracked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <trackingState>k__BackingField, offset: 0x268, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::IntegerControl*  ____trackingState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <devicePosition>k__BackingField, offset: 0x270, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector3Control*  ____devicePosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <deviceRotation>k__BackingField, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::QuaternionControl*  ____deviceRotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointerPosition>k__BackingField, offset: 0x280, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector3Control*  ____pointerPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointerRotation>k__BackingField, offset: 0x288, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::QuaternionControl*  ____pointerRotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <haptic>k__BackingField, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::XR::OpenXR::Input::HapticControl*  ____haptic_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____thumbstick_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____grip_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____gripPressed_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____gripTouched_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____menu_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____menuTouched_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____bumper_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____bumperTouched_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonTop_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonOutside_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonBottom_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonInside_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonTopTouched_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonOutsideTouched_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonBottomTouched_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____faceButtonInsideTouched_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____trigger_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____triggerPressed_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____triggerTouched_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____thumbstickClicked_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____thumbstickTouched_k__BackingField) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____devicePose_k__BackingField) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____pointer_k__BackingField) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____isTracked_k__BackingField) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____trackingState_k__BackingField) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____devicePosition_k__BackingField) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____deviceRotation_k__BackingField) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____pointerPosition_k__BackingField) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____pointerRotation_k__BackingField) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController, ____haptic_k__BackingField) == 0x290, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController) == 0x298, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
