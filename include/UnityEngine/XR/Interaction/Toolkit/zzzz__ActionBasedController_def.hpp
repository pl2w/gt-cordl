#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActionBasedController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ActionBasedController)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticControlActionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*, "UnityEngine.XR.Interaction.Toolkit", "ActionBasedController");
// [AddComponentMenu("/XR Controller (Action-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedController.html")]
// [Obsolete("ActionBasedController has been deprecated in version 3.0.0. Its functionality has been distributed into different components.")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.XR.Interaction.Toolkit.XRBaseController
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ActionBasedController
class CORDL_TYPE ActionBasedController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
public:
// Declarations
 __declspec(property(get=get_activateAction, put=set_activateAction)) ::UnityEngine::InputSystem::InputActionProperty  activateAction;

 __declspec(property(get=get_activateActionValue, put=set_activateActionValue)) ::UnityEngine::InputSystem::InputActionProperty  activateActionValue;

/// @brief [Obsolete("Deprecated, this obsolete property is not used when Input System version is 1.1.0 or higher. Configure press point on the action or binding instead.", true)]
 __declspec(property(get=get_buttonPressPoint, put=set_buttonPressPoint)) float_t  buttonPressPoint;

 __declspec(property(get=get_directionalAnchorRotationAction, put=set_directionalAnchorRotationAction)) ::UnityEngine::InputSystem::InputActionProperty  directionalAnchorRotationAction;

 __declspec(property(get=get_hapticDeviceAction, put=set_hapticDeviceAction)) ::UnityEngine::InputSystem::InputActionProperty  hapticDeviceAction;

 __declspec(property(get=get_isTrackedAction, put=set_isTrackedAction)) ::UnityEngine::InputSystem::InputActionProperty  isTrackedAction;

/// @brief Field m_ActivateAction, offset 0x140, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ActivateAction, put=__cordl_internal_set_m_ActivateAction)) ::UnityEngine::InputSystem::InputActionProperty  m_ActivateAction;

/// @brief Field m_ActivateActionValue, offset 0x158, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ActivateActionValue, put=__cordl_internal_set_m_ActivateActionValue)) ::UnityEngine::InputSystem::InputActionProperty  m_ActivateActionValue;

/// @brief Field m_DirectionalAnchorRotationAction, offset 0x1e8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_DirectionalAnchorRotationAction, put=__cordl_internal_set_m_DirectionalAnchorRotationAction)) ::UnityEngine::InputSystem::InputActionProperty  m_DirectionalAnchorRotationAction;

/// @brief Field m_HapticControlActionManager, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticControlActionManager, put=__cordl_internal_set_m_HapticControlActionManager)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  m_HapticControlActionManager;

/// @brief Field m_HapticDeviceAction, offset 0x1b8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_HapticDeviceAction, put=__cordl_internal_set_m_HapticDeviceAction)) ::UnityEngine::InputSystem::InputActionProperty  m_HapticDeviceAction;

/// @brief Field m_HasCheckedDisabledInputReferenceActions, offset 0x249, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions, put=__cordl_internal_set_m_HasCheckedDisabledInputReferenceActions)) bool  m_HasCheckedDisabledInputReferenceActions;

/// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset 0x248, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions, put=__cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions)) bool  m_HasCheckedDisabledTrackingInputReferenceActions;

/// @brief Field m_IsTrackedAction, offset 0xe0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_IsTrackedAction, put=__cordl_internal_set_m_IsTrackedAction)) ::UnityEngine::InputSystem::InputActionProperty  m_IsTrackedAction;

/// @brief Field m_PositionAction, offset 0xb0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PositionAction, put=__cordl_internal_set_m_PositionAction)) ::UnityEngine::InputSystem::InputActionProperty  m_PositionAction;

/// @brief Field m_RotateAnchorAction, offset 0x1d0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RotateAnchorAction, put=__cordl_internal_set_m_RotateAnchorAction)) ::UnityEngine::InputSystem::InputActionProperty  m_RotateAnchorAction;

/// @brief Field m_RotationAction, offset 0xc8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RotationAction, put=__cordl_internal_set_m_RotationAction)) ::UnityEngine::InputSystem::InputActionProperty  m_RotationAction;

/// @brief Field m_ScaleDeltaAction, offset 0x230, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ScaleDeltaAction, put=__cordl_internal_set_m_ScaleDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  m_ScaleDeltaAction;

/// @brief Field m_ScaleToggleAction, offset 0x218, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ScaleToggleAction, put=__cordl_internal_set_m_ScaleToggleAction)) ::UnityEngine::InputSystem::InputActionProperty  m_ScaleToggleAction;

/// @brief Field m_SelectAction, offset 0x110, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_SelectAction, put=__cordl_internal_set_m_SelectAction)) ::UnityEngine::InputSystem::InputActionProperty  m_SelectAction;

/// @brief Field m_SelectActionValue, offset 0x128, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_SelectActionValue, put=__cordl_internal_set_m_SelectActionValue)) ::UnityEngine::InputSystem::InputActionProperty  m_SelectActionValue;

/// @brief Field m_TrackingStateAction, offset 0xf8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TrackingStateAction, put=__cordl_internal_set_m_TrackingStateAction)) ::UnityEngine::InputSystem::InputActionProperty  m_TrackingStateAction;

/// @brief Field m_TranslateAnchorAction, offset 0x200, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TranslateAnchorAction, put=__cordl_internal_set_m_TranslateAnchorAction)) ::UnityEngine::InputSystem::InputActionProperty  m_TranslateAnchorAction;

/// @brief Field m_UIPressAction, offset 0x170, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_UIPressAction, put=__cordl_internal_set_m_UIPressAction)) ::UnityEngine::InputSystem::InputActionProperty  m_UIPressAction;

/// @brief Field m_UIPressActionValue, offset 0x188, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_UIPressActionValue, put=__cordl_internal_set_m_UIPressActionValue)) ::UnityEngine::InputSystem::InputActionProperty  m_UIPressActionValue;

/// @brief Field m_UIScrollAction, offset 0x1a0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_UIScrollAction, put=__cordl_internal_set_m_UIScrollAction)) ::UnityEngine::InputSystem::InputActionProperty  m_UIScrollAction;

 __declspec(property(get=get_positionAction, put=set_positionAction)) ::UnityEngine::InputSystem::InputActionProperty  positionAction;

 __declspec(property(get=get_rotateAnchorAction, put=set_rotateAnchorAction)) ::UnityEngine::InputSystem::InputActionProperty  rotateAnchorAction;

 __declspec(property(get=get_rotationAction, put=set_rotationAction)) ::UnityEngine::InputSystem::InputActionProperty  rotationAction;

 __declspec(property(get=get_scaleDeltaAction, put=set_scaleDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  scaleDeltaAction;

 __declspec(property(get=get_scaleToggleAction, put=set_scaleToggleAction)) ::UnityEngine::InputSystem::InputActionProperty  scaleToggleAction;

 __declspec(property(get=get_selectAction, put=set_selectAction)) ::UnityEngine::InputSystem::InputActionProperty  selectAction;

 __declspec(property(get=get_selectActionValue, put=set_selectActionValue)) ::UnityEngine::InputSystem::InputActionProperty  selectActionValue;

 __declspec(property(get=get_trackingStateAction, put=set_trackingStateAction)) ::UnityEngine::InputSystem::InputActionProperty  trackingStateAction;

 __declspec(property(get=get_translateAnchorAction, put=set_translateAnchorAction)) ::UnityEngine::InputSystem::InputActionProperty  translateAnchorAction;

 __declspec(property(get=get_uiPressAction, put=set_uiPressAction)) ::UnityEngine::InputSystem::InputActionProperty  uiPressAction;

 __declspec(property(get=get_uiPressActionValue, put=set_uiPressActionValue)) ::UnityEngine::InputSystem::InputActionProperty  uiPressActionValue;

 __declspec(property(get=get_uiScrollAction, put=set_uiScrollAction)) ::UnityEngine::InputSystem::InputActionProperty  uiScrollAction;

/// @brief Method DisableAllDirectActions, addr 0xb3feab4, size 0x214, virtual false, abstract: false, final false
inline void DisableAllDirectActions() ;

/// @brief Method EnableAllDirectActions, addr 0xb3fe7f4, size 0x214, virtual false, abstract: false, final false
inline void EnableAllDirectActions() ;

/// @brief Method IsDisabledReferenceAction, addr 0xb3ff234, size 0xcc, virtual false, abstract: false, final false
static inline bool IsDisabledReferenceAction(::UnityEngine::InputSystem::InputActionProperty  property) ;

/// @brief Method IsPressed, addr 0xb3ff6a4, size 0x48, virtual true, abstract: false, final false
inline bool IsPressed(::UnityEngine::InputSystem::InputAction*  action) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController* New_ctor() ;

/// @brief Method OnDisable, addr 0xb3fea08, size 0x18, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb3fe748, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadValue, addr 0xb3ff6ec, size 0x1ac, virtual true, abstract: false, final false
inline float_t ReadValue(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method SendHapticImpulse, addr 0xb3ff898, size 0x1a4, virtual true, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// @brief Method SetInputActionProperty, addr 0xb3fe1fc, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method UpdateInput, addr 0xb3ff300, size 0x360, virtual true, abstract: false, final false
inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method UpdateTrackingInput, addr 0xb3fecc8, size 0x568, virtual true, abstract: false, final false
inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ActivateAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ActivateAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ActivateActionValue() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ActivateActionValue() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_DirectionalAnchorRotationAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_DirectionalAnchorRotationAction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* const& __cordl_internal_get_m_HapticControlActionManager() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*& __cordl_internal_get_m_HapticControlActionManager() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_HapticDeviceAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_HapticDeviceAction() ;

constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() const;

constexpr bool& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() ;

constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() const;

constexpr bool& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_IsTrackedAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_IsTrackedAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PositionAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PositionAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotateAnchorAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotateAnchorAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotationAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotationAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ScaleDeltaAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ScaleDeltaAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ScaleToggleAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ScaleToggleAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_SelectAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_SelectAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_SelectActionValue() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_SelectActionValue() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TrackingStateAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TrackingStateAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TranslateAnchorAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TranslateAnchorAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_UIPressAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_UIPressAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_UIPressActionValue() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_UIPressActionValue() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_UIScrollAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_UIScrollAction() ;

constexpr void __cordl_internal_set_m_ActivateAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_ActivateActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_DirectionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_HapticControlActionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value) ;

constexpr void __cordl_internal_set_m_HapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_HasCheckedDisabledInputReferenceActions(bool  value) ;

constexpr void __cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions(bool  value) ;

constexpr void __cordl_internal_set_m_IsTrackedAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_ScaleDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_ScaleToggleAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_SelectAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_SelectActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TrackingStateAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TranslateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_UIPressAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_UIPressActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_UIScrollAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method .ctor, addr 0xb3ffa3c, size 0x918, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activateAction, addr 0xb3fe448, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_activateAction() ;

/// @brief Method get_activateActionValue, addr 0xb3fe48c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_activateActionValue() ;

/// @brief Method get_buttonPressPoint, addr 0xb3fe1ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_buttonPressPoint() ;

/// @brief Method get_directionalAnchorRotationAction, addr 0xb3fe630, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_directionalAnchorRotationAction() ;

/// @brief Method get_hapticDeviceAction, addr 0xb3fe5a4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_hapticDeviceAction() ;

/// @brief Method get_isTrackedAction, addr 0xb3fe334, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_isTrackedAction() ;

/// @brief Method get_positionAction, addr 0xb3fe1b8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_positionAction() ;

/// @brief Method get_rotateAnchorAction, addr 0xb3fe5ec, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rotateAnchorAction() ;

/// @brief Method get_rotationAction, addr 0xb3fe2f0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rotationAction() ;

/// @brief Method get_scaleDeltaAction, addr 0xb3fe704, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_scaleDeltaAction() ;

/// @brief Method get_scaleToggleAction, addr 0xb3fe6bc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_scaleToggleAction() ;

/// @brief Method get_selectAction, addr 0xb3fe3bc, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_selectAction() ;

/// @brief Method get_selectActionValue, addr 0xb3fe400, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_selectActionValue() ;

/// @brief Method get_trackingStateAction, addr 0xb3fe378, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_trackingStateAction() ;

/// @brief Method get_translateAnchorAction, addr 0xb3fe678, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_translateAnchorAction() ;

/// @brief Method get_uiPressAction, addr 0xb3fe4d4, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_uiPressAction() ;

/// @brief Method get_uiPressActionValue, addr 0xb3fe518, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_uiPressActionValue() ;

/// @brief Method get_uiScrollAction, addr 0xb3fe560, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_uiScrollAction() ;

/// @brief Method set_activateAction, addr 0xb3fe45c, size 0x30, virtual false, abstract: false, final false
inline void set_activateAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_activateActionValue, addr 0xb3fe4a4, size 0x30, virtual false, abstract: false, final false
inline void set_activateActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_buttonPressPoint, addr 0xb3fe1b4, size 0x4, virtual false, abstract: false, final false
inline void set_buttonPressPoint(float_t  value) ;

/// @brief Method set_directionalAnchorRotationAction, addr 0xb3fe648, size 0x30, virtual false, abstract: false, final false
inline void set_directionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_hapticDeviceAction, addr 0xb3fe5bc, size 0x30, virtual false, abstract: false, final false
inline void set_hapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_isTrackedAction, addr 0xb3fe348, size 0x30, virtual false, abstract: false, final false
inline void set_isTrackedAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_positionAction, addr 0xb3fe1cc, size 0x30, virtual false, abstract: false, final false
inline void set_positionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rotateAnchorAction, addr 0xb3fe600, size 0x30, virtual false, abstract: false, final false
inline void set_rotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rotationAction, addr 0xb3fe304, size 0x30, virtual false, abstract: false, final false
inline void set_rotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_scaleDeltaAction, addr 0xb3fe718, size 0x30, virtual false, abstract: false, final false
inline void set_scaleDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_scaleToggleAction, addr 0xb3fe6d4, size 0x30, virtual false, abstract: false, final false
inline void set_scaleToggleAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_selectAction, addr 0xb3fe3d0, size 0x30, virtual false, abstract: false, final false
inline void set_selectAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_selectActionValue, addr 0xb3fe418, size 0x30, virtual false, abstract: false, final false
inline void set_selectActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_trackingStateAction, addr 0xb3fe38c, size 0x30, virtual false, abstract: false, final false
inline void set_trackingStateAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_translateAnchorAction, addr 0xb3fe68c, size 0x30, virtual false, abstract: false, final false
inline void set_translateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_uiPressAction, addr 0xb3fe4e8, size 0x30, virtual false, abstract: false, final false
inline void set_uiPressAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_uiPressActionValue, addr 0xb3fe530, size 0x30, virtual false, abstract: false, final false
inline void set_uiPressActionValue(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_uiScrollAction, addr 0xb3fe574, size 0x30, virtual false, abstract: false, final false
inline void set_uiScrollAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionBasedController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionBasedController(ActionBasedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionBasedController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionBasedController(ActionBasedController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11065};

/// [SerializeField]
/// @brief Field m_PositionAction, offset: 0xb0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_PositionAction;

/// [SerializeField]
/// @brief Field m_RotationAction, offset: 0xc8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RotationAction;

/// [SerializeField]
/// @brief Field m_IsTrackedAction, offset: 0xe0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_IsTrackedAction;

/// [SerializeField]
/// @brief Field m_TrackingStateAction, offset: 0xf8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TrackingStateAction;

/// [SerializeField]
/// @brief Field m_SelectAction, offset: 0x110, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_SelectAction;

/// [SerializeField]
/// @brief Field m_SelectActionValue, offset: 0x128, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_SelectActionValue;

/// [SerializeField]
/// @brief Field m_ActivateAction, offset: 0x140, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_ActivateAction;

/// [SerializeField]
/// @brief Field m_ActivateActionValue, offset: 0x158, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_ActivateActionValue;

/// [SerializeField]
/// @brief Field m_UIPressAction, offset: 0x170, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_UIPressAction;

/// [SerializeField]
/// @brief Field m_UIPressActionValue, offset: 0x188, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_UIPressActionValue;

/// [SerializeField]
/// @brief Field m_UIScrollAction, offset: 0x1a0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_UIScrollAction;

/// [SerializeField]
/// @brief Field m_HapticDeviceAction, offset: 0x1b8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_HapticDeviceAction;

/// [SerializeField]
/// @brief Field m_RotateAnchorAction, offset: 0x1d0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RotateAnchorAction;

/// [SerializeField]
/// @brief Field m_DirectionalAnchorRotationAction, offset: 0x1e8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_DirectionalAnchorRotationAction;

/// [SerializeField]
/// @brief Field m_TranslateAnchorAction, offset: 0x200, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TranslateAnchorAction;

/// [SerializeField]
/// @brief Field m_ScaleToggleAction, offset: 0x218, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_ScaleToggleAction;

/// [SerializeField]
/// @brief Field m_ScaleDeltaAction, offset: 0x230, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_ScaleDeltaAction;

/// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset: 0x248, size: 0x1, def value: None
 bool  ___m_HasCheckedDisabledTrackingInputReferenceActions;

/// @brief Field m_HasCheckedDisabledInputReferenceActions, offset: 0x249, size: 0x1, def value: None
 bool  ___m_HasCheckedDisabledInputReferenceActions;

/// @brief Field m_HapticControlActionManager, offset: 0x250, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  ___m_HapticControlActionManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_PositionAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_RotationAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_IsTrackedAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_TrackingStateAction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_SelectAction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_SelectActionValue) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ActivateAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ActivateActionValue) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_UIPressAction) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_UIPressActionValue) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_UIScrollAction) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HapticDeviceAction) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_RotateAnchorAction) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_DirectionalAnchorRotationAction) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_TranslateAnchorAction) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ScaleToggleAction) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_ScaleDeltaAction) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HasCheckedDisabledTrackingInputReferenceActions) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HasCheckedDisabledInputReferenceActions) == 0x249, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController, ___m_HapticControlActionManager) == 0x250, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ActionBasedController) == 0x258, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
