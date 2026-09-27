#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRScreenSpaceController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRScreenSpaceController)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIInputModule;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRScreenSpaceController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*, "UnityEngine.XR.Interaction.Toolkit", "XRScreenSpaceController");
// [AddComponentMenu("XR/XR Screen Space Controller", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController.html")]
// [Obsolete("XRScreenSpaceController has been deprecated in version 3.0.0. Its functionality has been distributed into different components.")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.XR.Interaction.Toolkit.XRBaseController
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
class CORDL_TYPE XRScreenSpaceController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
public:
// Declarations
/// @brief Field <scaleDelta>k__BackingField, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleDelta_k__BackingField, put=__cordl_internal_set__scaleDelta_k__BackingField)) float_t  _scaleDelta_k__BackingField;

 __declspec(property(get=get_blockInteractionsWithScreenSpaceUI, put=set_blockInteractionsWithScreenSpaceUI)) bool  blockInteractionsWithScreenSpaceUI;

 __declspec(property(get=get_controllerCamera, put=set_controllerCamera)) ::UnityW<::UnityEngine::Camera>  controllerCamera;

 __declspec(property(get=get_dragCurrentPositionAction, put=set_dragCurrentPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  dragCurrentPositionAction;

 __declspec(property(get=get_dragDeltaAction, put=set_dragDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  dragDeltaAction;

 __declspec(property(get=get_enableTouchscreenGestureInputController, put=set_enableTouchscreenGestureInputController)) bool  enableTouchscreenGestureInputController;

/// @brief Field m_BlockInteractionsWithScreenSpaceUI, offset 0x198, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI, put=__cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI)) bool  m_BlockInteractionsWithScreenSpaceUI;

/// @brief Field m_ControllerCamera, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerCamera, put=__cordl_internal_set_m_ControllerCamera)) ::UnityW<::UnityEngine::Camera>  m_ControllerCamera;

/// @brief Field m_DragCurrentPositionAction, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_DragCurrentPositionAction, put=__cordl_internal_set_m_DragCurrentPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  m_DragCurrentPositionAction;

/// @brief Field m_DragDeltaAction, offset 0xe8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_DragDeltaAction, put=__cordl_internal_set_m_DragDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  m_DragDeltaAction;

/// @brief Field m_EnableTouchscreenGestureInputController, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTouchscreenGestureInputController, put=__cordl_internal_set_m_EnableTouchscreenGestureInputController)) bool  m_EnableTouchscreenGestureInputController;

/// @brief Field m_HasCheckedDisabledInputReferenceActions, offset 0x1a5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions, put=__cordl_internal_set_m_HasCheckedDisabledInputReferenceActions)) bool  m_HasCheckedDisabledInputReferenceActions;

/// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset 0x1a4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions, put=__cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions)) bool  m_HasCheckedDisabledTrackingInputReferenceActions;

/// @brief Field m_PinchGapAction, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PinchGapAction, put=__cordl_internal_set_m_PinchGapAction)) ::UnityEngine::InputSystem::InputActionProperty  m_PinchGapAction;

/// @brief Field m_PinchGapDeltaAction, offset 0x130, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PinchGapDeltaAction, put=__cordl_internal_set_m_PinchGapDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  m_PinchGapDeltaAction;

/// @brief Field m_PinchStartPositionAction, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PinchStartPositionAction, put=__cordl_internal_set_m_PinchStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  m_PinchStartPositionAction;

/// @brief Field m_RotationThreshold, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotationThreshold, put=__cordl_internal_set_m_RotationThreshold)) float_t  m_RotationThreshold;

/// @brief Field m_ScreenTouchCountAction, offset 0x178, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ScreenTouchCountAction, put=__cordl_internal_set_m_ScreenTouchCountAction)) ::UnityEngine::InputSystem::InputActionProperty  m_ScreenTouchCountAction;

/// @brief Field m_TapStartPositionAction, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TapStartPositionAction, put=__cordl_internal_set_m_TapStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  m_TapStartPositionAction;

/// @brief Field m_TwistDeltaRotationAction, offset 0x160, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TwistDeltaRotationAction, put=__cordl_internal_set_m_TwistDeltaRotationAction)) ::UnityEngine::InputSystem::InputActionProperty  m_TwistDeltaRotationAction;

/// @brief Field m_TwistStartPositionAction, offset 0x148, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TwistStartPositionAction, put=__cordl_internal_set_m_TwistStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  m_TwistStartPositionAction;

/// @brief Field m_UIInputModule, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIInputModule, put=__cordl_internal_set_m_UIInputModule)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>  m_UIInputModule;

/// @brief Field m_UseRotationThreshold, offset 0x199, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseRotationThreshold, put=__cordl_internal_set_m_UseRotationThreshold)) bool  m_UseRotationThreshold;

 __declspec(property(get=get_pinchGapAction, put=set_pinchGapAction)) ::UnityEngine::InputSystem::InputActionProperty  pinchGapAction;

/// @brief [Obsolete("pinchGapDelta has been deprecated. Use pinchGapDeltaAction instead. (UnityUpgradable) -> pinchGapDeltaAction", true)]
 __declspec(property(get=get_pinchGapDelta, put=set_pinchGapDelta)) ::UnityEngine::InputSystem::InputActionProperty  pinchGapDelta;

 __declspec(property(get=get_pinchGapDeltaAction, put=set_pinchGapDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  pinchGapDeltaAction;

/// @brief [Obsolete("pinchStartPosition has been deprecated. Use pinchStartPositionAction instead. (UnityUpgradable) -> pinchStartPositionAction", true)]
 __declspec(property(get=get_pinchStartPosition, put=set_pinchStartPosition)) ::UnityEngine::InputSystem::InputActionProperty  pinchStartPosition;

 __declspec(property(get=get_pinchStartPositionAction, put=set_pinchStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  pinchStartPositionAction;

 __declspec(property(get=get_rotationThreshold, put=set_rotationThreshold)) float_t  rotationThreshold;

 __declspec(property(get=get_scaleDelta, put=set_scaleDelta)) float_t  scaleDelta;

/// @brief [Obsolete("screenTouchCount has been deprecated. Use screenTouchCountAction instead. (UnityUpgradable) -> screenTouchCountAction", true)]
 __declspec(property(get=get_screenTouchCount, put=set_screenTouchCount)) ::UnityEngine::InputSystem::InputActionProperty  screenTouchCount;

 __declspec(property(get=get_screenTouchCountAction, put=set_screenTouchCountAction)) ::UnityEngine::InputSystem::InputActionProperty  screenTouchCountAction;

 __declspec(property(get=get_tapStartPositionAction, put=set_tapStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  tapStartPositionAction;

 __declspec(property(get=get_twistDeltaRotationAction, put=set_twistDeltaRotationAction)) ::UnityEngine::InputSystem::InputActionProperty  twistDeltaRotationAction;

/// @brief [Obsolete("twistRotationDeltaAction has been deprecated. Use twistDeltaRotationAction instead. (UnityUpgradable) -> twistDeltaRotationAction", true)]
 __declspec(property(get=get_twistRotationDeltaAction, put=set_twistRotationDeltaAction)) ::UnityEngine::InputSystem::InputActionProperty  twistRotationDeltaAction;

/// @brief [Obsolete("twistStartPosition has been deprecated. Use twistStartPositionAction instead. (UnityUpgradable) -> twistStartPositionAction", true)]
 __declspec(property(get=get_twistStartPosition, put=set_twistStartPosition)) ::UnityEngine::InputSystem::InputActionProperty  twistStartPosition;

 __declspec(property(get=get_twistStartPositionAction, put=set_twistStartPositionAction)) ::UnityEngine::InputSystem::InputActionProperty  twistStartPositionAction;

 __declspec(property(get=get_useRotationThreshold, put=set_useRotationThreshold)) bool  useRotationThreshold;

/// @brief Method DisableAllDirectActions, addr 0xb4040dc, size 0x128, virtual false, abstract: false, final false
inline void DisableAllDirectActions() ;

/// @brief Method EnableAllDirectActions, addr 0xb403f88, size 0x128, virtual false, abstract: false, final false
inline void EnableAllDirectActions() ;

/// @brief Method FindUIInputModule, addr 0xb404d24, size 0x188, virtual false, abstract: false, final false
inline bool FindUIInputModule() ;

/// @brief Method InitializeTouchscreenGestureController, addr 0xb4040b0, size 0x4, virtual false, abstract: false, final false
inline void InitializeTouchscreenGestureController() ;

/// @brief Method IsDisabledReferenceAction, addr 0xb4046bc, size 0xcc, virtual false, abstract: false, final false
static inline bool IsDisabledReferenceAction(::UnityEngine::InputSystem::InputActionProperty  property) ;

/// @brief Method IsPointerOverScreenSpaceCanvas, addr 0xb4045bc, size 0x100, virtual false, abstract: false, final false
inline bool IsPointerOverScreenSpaceCanvas() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4040b4, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb403f70, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveTouchscreenGestureController, addr 0xb404204, size 0x4, virtual false, abstract: false, final false
inline void RemoveTouchscreenGestureController() ;

/// @brief Method SetInputActionProperty, addr 0xb403aa0, size 0xf4, virtual false, abstract: false, final false
inline void SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method Start, addr 0xb403e68, size 0x108, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetAbsoluteValue, addr 0xb404ca0, size 0x84, virtual false, abstract: false, final false
static inline bool TryGetAbsoluteValue(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<float_t>  value) ;

/// @brief Method TryGetCurrentOneInputSelectAction, addr 0xb404bf0, size 0xb0, virtual false, abstract: false, final false
inline bool TryGetCurrentOneInputSelectAction(::by_ref<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method TryGetCurrentPositionAction, addr 0xb404788, size 0xb8, virtual false, abstract: false, final false
inline bool TryGetCurrentPositionAction(int32_t  touchCount, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method TryGetCurrentTwoInputSelectAction, addr 0xb404b10, size 0xe0, virtual false, abstract: false, final false
inline bool TryGetCurrentTwoInputSelectAction(::by_ref<::UnityEngine::InputSystem::InputAction*>  action) ;

/// @brief Method UpdateInput, addr 0xb404840, size 0x2d0, virtual true, abstract: false, final false
inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method UpdateTrackingInput, addr 0xb404208, size 0x3b4, virtual true, abstract: false, final false
inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

constexpr float_t const& __cordl_internal_get__scaleDelta_k__BackingField() const;

constexpr float_t& __cordl_internal_get__scaleDelta_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() const;

constexpr bool& __cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_ControllerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_ControllerCamera() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_DragCurrentPositionAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_DragCurrentPositionAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_DragDeltaAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_DragDeltaAction() ;

constexpr bool const& __cordl_internal_get_m_EnableTouchscreenGestureInputController() const;

constexpr bool& __cordl_internal_get_m_EnableTouchscreenGestureInputController() ;

constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() const;

constexpr bool& __cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() ;

constexpr bool const& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() const;

constexpr bool& __cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PinchGapAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PinchGapAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PinchGapDeltaAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PinchGapDeltaAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PinchStartPositionAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PinchStartPositionAction() ;

constexpr float_t const& __cordl_internal_get_m_RotationThreshold() const;

constexpr float_t& __cordl_internal_get_m_RotationThreshold() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ScreenTouchCountAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ScreenTouchCountAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TapStartPositionAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TapStartPositionAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TwistDeltaRotationAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TwistDeltaRotationAction() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TwistStartPositionAction() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TwistStartPositionAction() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule> const& __cordl_internal_get_m_UIInputModule() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>& __cordl_internal_get_m_UIInputModule() ;

constexpr bool const& __cordl_internal_get_m_UseRotationThreshold() const;

constexpr bool& __cordl_internal_get_m_UseRotationThreshold() ;

constexpr void __cordl_internal_set__scaleDelta_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI(bool  value) ;

constexpr void __cordl_internal_set_m_ControllerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_DragCurrentPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_DragDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_EnableTouchscreenGestureInputController(bool  value) ;

constexpr void __cordl_internal_set_m_HasCheckedDisabledInputReferenceActions(bool  value) ;

constexpr void __cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions(bool  value) ;

constexpr void __cordl_internal_set_m_PinchGapAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_PinchGapDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_PinchStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RotationThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_ScreenTouchCountAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TapStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TwistDeltaRotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TwistStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_UIInputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>  value) ;

constexpr void __cordl_internal_set_m_UseRotationThreshold(bool  value) ;

/// @brief Method .ctor, addr 0xb404eac, size 0x4e4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_blockInteractionsWithScreenSpaceUI, addr 0xb403dd8, size 0x8, virtual false, abstract: false, final false
inline bool get_blockInteractionsWithScreenSpaceUI() ;

/// @brief Method get_controllerCamera, addr 0xb403dc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_controllerCamera() ;

/// @brief Method get_dragCurrentPositionAction, addr 0xb403b94, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_dragCurrentPositionAction() ;

/// @brief Method get_dragDeltaAction, addr 0xb403bd8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_dragDeltaAction() ;

/// @brief Method get_enableTouchscreenGestureInputController, addr 0xb403a4c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTouchscreenGestureInputController() ;

/// @brief Method get_pinchGapAction, addr 0xb403c60, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_pinchGapAction() ;

/// @brief Method get_pinchGapDelta, addr 0xb403e28, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_pinchGapDelta() ;

/// @brief Method get_pinchGapDeltaAction, addr 0xb403ca8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_pinchGapDeltaAction() ;

/// @brief Method get_pinchStartPosition, addr 0xb403e18, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_pinchStartPosition() ;

/// @brief Method get_pinchStartPositionAction, addr 0xb403c1c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_pinchStartPositionAction() ;

/// @brief Method get_rotationThreshold, addr 0xb403df8, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotationThreshold() ;

/// [CompilerGenerated]
/// @brief Method get_scaleDelta, addr 0xb403e08, size 0x8, virtual false, abstract: false, final false
inline float_t get_scaleDelta() ;

/// @brief Method get_screenTouchCount, addr 0xb403e58, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_screenTouchCount() ;

/// @brief Method get_screenTouchCountAction, addr 0xb403d78, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_screenTouchCountAction() ;

/// @brief Method get_tapStartPositionAction, addr 0xb403a5c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_tapStartPositionAction() ;

/// @brief Method get_twistDeltaRotationAction, addr 0xb403d34, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_twistDeltaRotationAction() ;

/// @brief Method get_twistRotationDeltaAction, addr 0xb403e48, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_twistRotationDeltaAction() ;

/// @brief Method get_twistStartPosition, addr 0xb403e38, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_twistStartPosition() ;

/// @brief Method get_twistStartPositionAction, addr 0xb403cec, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_twistStartPositionAction() ;

/// @brief Method get_useRotationThreshold, addr 0xb403de8, size 0x8, virtual false, abstract: false, final false
inline bool get_useRotationThreshold() ;

/// @brief Method set_blockInteractionsWithScreenSpaceUI, addr 0xb403de0, size 0x8, virtual false, abstract: false, final false
inline void set_blockInteractionsWithScreenSpaceUI(bool  value) ;

/// @brief Method set_controllerCamera, addr 0xb403dc8, size 0x10, virtual false, abstract: false, final false
inline void set_controllerCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_dragCurrentPositionAction, addr 0xb403ba8, size 0x30, virtual false, abstract: false, final false
inline void set_dragCurrentPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_dragDeltaAction, addr 0xb403bec, size 0x30, virtual false, abstract: false, final false
inline void set_dragDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_enableTouchscreenGestureInputController, addr 0xb403a54, size 0x8, virtual false, abstract: false, final false
inline void set_enableTouchscreenGestureInputController(bool  value) ;

/// @brief Method set_pinchGapAction, addr 0xb403c78, size 0x30, virtual false, abstract: false, final false
inline void set_pinchGapAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_pinchGapDelta, addr 0xb403e34, size 0x4, virtual false, abstract: false, final false
inline void set_pinchGapDelta(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_pinchGapDeltaAction, addr 0xb403cbc, size 0x30, virtual false, abstract: false, final false
inline void set_pinchGapDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_pinchStartPosition, addr 0xb403e24, size 0x4, virtual false, abstract: false, final false
inline void set_pinchStartPosition(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_pinchStartPositionAction, addr 0xb403c30, size 0x30, virtual false, abstract: false, final false
inline void set_pinchStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rotationThreshold, addr 0xb403e00, size 0x8, virtual false, abstract: false, final false
inline void set_rotationThreshold(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_scaleDelta, addr 0xb403e10, size 0x8, virtual false, abstract: false, final false
inline void set_scaleDelta(float_t  value) ;

/// @brief Method set_screenTouchCount, addr 0xb403e64, size 0x4, virtual false, abstract: false, final false
inline void set_screenTouchCount(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_screenTouchCountAction, addr 0xb403d90, size 0x30, virtual false, abstract: false, final false
inline void set_screenTouchCountAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_tapStartPositionAction, addr 0xb403a70, size 0x30, virtual false, abstract: false, final false
inline void set_tapStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_twistDeltaRotationAction, addr 0xb403d48, size 0x30, virtual false, abstract: false, final false
inline void set_twistDeltaRotationAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_twistRotationDeltaAction, addr 0xb403e54, size 0x4, virtual false, abstract: false, final false
inline void set_twistRotationDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_twistStartPosition, addr 0xb403e44, size 0x4, virtual false, abstract: false, final false
inline void set_twistStartPosition(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_twistStartPositionAction, addr 0xb403d04, size 0x30, virtual false, abstract: false, final false
inline void set_twistStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_useRotationThreshold, addr 0xb403df0, size 0x8, virtual false, abstract: false, final false
inline void set_useRotationThreshold(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRScreenSpaceController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRScreenSpaceController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRScreenSpaceController(XRScreenSpaceController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRScreenSpaceController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRScreenSpaceController(XRScreenSpaceController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11076};

/// [Header("Touchscreen Gesture Actions")]
/// [SerializeField]
/// [Tooltip("When enabled, a Touchscreen Gesture Input Controller will be added to the Input System device list to detect touch gestures.")]
/// @brief Field m_EnableTouchscreenGestureInputController, offset: 0xb0, size: 0x1, def value: None
 bool  ___m_EnableTouchscreenGestureInputController;

/// [SerializeField]
/// [Tooltip("The action to use for the screen tap position. (Vector 2 Control).")]
/// @brief Field m_TapStartPositionAction, offset: 0xb8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TapStartPositionAction;

/// [SerializeField]
/// [Tooltip("The action to use for the current screen drag position. (Vector 2 Control).")]
/// @brief Field m_DragCurrentPositionAction, offset: 0xd0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_DragCurrentPositionAction;

/// [SerializeField]
/// [Tooltip("The action to use for the delta of the screen drag. (Vector 2 Control).")]
/// @brief Field m_DragDeltaAction, offset: 0xe8, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_DragDeltaAction;

/// [SerializeField]
/// [FormerlySerializedAs("m_PinchStartPosition")]
/// [Tooltip("The action to use for the screen pinch gesture start position. (Vector 2 Control).")]
/// @brief Field m_PinchStartPositionAction, offset: 0x100, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_PinchStartPositionAction;

/// [SerializeField]
/// [Tooltip("The action to use for the gap of the screen pinch gesture. (Axis Control).")]
/// @brief Field m_PinchGapAction, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_PinchGapAction;

/// [SerializeField]
/// [Tooltip("The action to use for the delta of the screen pinch gesture. (Axis Control).")]
/// @brief Field m_PinchGapDeltaAction, offset: 0x130, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_PinchGapDeltaAction;

/// [SerializeField]
/// [FormerlySerializedAs("m_TwistStartPosition")]
/// [Tooltip("The action to use for the screen twist gesture start position. (Vector 2 Control).")]
/// @brief Field m_TwistStartPositionAction, offset: 0x148, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TwistStartPositionAction;

/// [SerializeField]
/// [FormerlySerializedAs("m_TwistRotationDeltaAction")]
/// [Tooltip("The action to use for the delta of the screen twist gesture. (Axis Control).")]
/// @brief Field m_TwistDeltaRotationAction, offset: 0x160, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TwistDeltaRotationAction;

/// [SerializeField]
/// [FormerlySerializedAs("m_ScreenTouchCount")]
/// [Tooltip("The number of concurrent touches on the screen. (Integer Control).")]
/// @brief Field m_ScreenTouchCountAction, offset: 0x178, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_ScreenTouchCountAction;

/// [SerializeField]
/// [Tooltip("The camera associated with the screen, and through which screen presses/touches will be interpreted.")]
/// @brief Field m_ControllerCamera, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_ControllerCamera;

/// [SerializeField]
/// [Tooltip("Tells the XR Screen Space Controller to ignore interactions when hitting a screen space canvas.")]
/// @brief Field m_BlockInteractionsWithScreenSpaceUI, offset: 0x198, size: 0x1, def value: None
 bool  ___m_BlockInteractionsWithScreenSpaceUI;

/// [SerializeField]
/// [Tooltip("Enables a rotation threshold that blocks pinch scale gestures when surpassed.")]
/// @brief Field m_UseRotationThreshold, offset: 0x199, size: 0x1, def value: None
 bool  ___m_UseRotationThreshold;

/// [SerializeField]
/// [Tooltip("The threshold at which a gestures will be interpreted only as rotation and not a pinch scale gesture.")]
/// @brief Field m_RotationThreshold, offset: 0x19c, size: 0x4, def value: None
 float_t  ___m_RotationThreshold;

/// [CompilerGenerated]
/// @brief Field <scaleDelta>k__BackingField, offset: 0x1a0, size: 0x4, def value: None
 float_t  ____scaleDelta_k__BackingField;

/// @brief Field m_HasCheckedDisabledTrackingInputReferenceActions, offset: 0x1a4, size: 0x1, def value: None
 bool  ___m_HasCheckedDisabledTrackingInputReferenceActions;

/// @brief Field m_HasCheckedDisabledInputReferenceActions, offset: 0x1a5, size: 0x1, def value: None
 bool  ___m_HasCheckedDisabledInputReferenceActions;

/// @brief Field m_UIInputModule, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>  ___m_UIInputModule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_EnableTouchscreenGestureInputController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_TapStartPositionAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_DragCurrentPositionAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_DragDeltaAction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_PinchStartPositionAction) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_PinchGapAction) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_PinchGapDeltaAction) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_TwistStartPositionAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_TwistDeltaRotationAction) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_ScreenTouchCountAction) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_ControllerCamera) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_BlockInteractionsWithScreenSpaceUI) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_UseRotationThreshold) == 0x199, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_RotationThreshold) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ____scaleDelta_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_HasCheckedDisabledTrackingInputReferenceActions) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_HasCheckedDisabledInputReferenceActions) == 0x1a5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController, ___m_UIInputModule) == 0x1a8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController) == 0x1b0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
