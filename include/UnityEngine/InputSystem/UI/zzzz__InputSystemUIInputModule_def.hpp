#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/InputSystemUIInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_CursorLockBehavior_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__SubmitCancelModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemUIInputModule)
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace GlobalNamespace {
struct InputSystemUIInputModule_CursorLockBehavior;
}
namespace GlobalNamespace {
struct InputSystemUIInputModule_InputActionReferenceState;
}
namespace GlobalNamespace {
struct PointerModel_ButtonState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct NavigationDeviceType;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerBehavior;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class InputSystemUIInputModule;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::UI::InputSystemUIInputModule*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::InputSystemUIInputModule*, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.inputsystem@1.14/manual/UISupport.html#setting-up-ui-input")]
// Dependencies UnityEngine.EventSystems.BaseInputModule, UnityEngine.InputSystem.UI.InputSystemUIInputModule::CursorLockBehavior, UnityEngine.InputSystem.UI.NavigationModel, UnityEngine.InputSystem.UI.PointerModel, UnityEngine.InputSystem.UI.SubmitCancelModel, UnityEngine.InputSystem.UI.UIPointerBehavior, UnityEngine.InputSystem.UI.UIPointerType, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule
class CORDL_TYPE InputSystemUIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
using CursorLockBehavior = ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior;

using InputActionReferenceState = ::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState;

 __declspec(property(get=get_actionsAsset, put=set_actionsAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  actionsAsset;

 __declspec(property(get=get_cancel, put=set_cancel)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  cancel;

 __declspec(property(get=get_cursorLockBehavior, put=set_cursorLockBehavior)) ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior  cursorLockBehavior;

/// @brief Field defaultActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultActions, put=setStaticF_defaultActions)) ::UnityEngine::InputSystem::DefaultInputActions*  defaultActions;

 __declspec(property(get=get_deselectOnBackgroundClick, put=set_deselectOnBackgroundClick)) bool  deselectOnBackgroundClick;

 __declspec(property(get=get_explictlyIgnoreFocus)) bool  explictlyIgnoreFocus;

 __declspec(property(get=get_leftClick, put=set_leftClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  leftClick;

 __declspec(property(get=get_localMultiPlayerRoot, put=set_localMultiPlayerRoot)) ::UnityW<::UnityEngine::GameObject>  localMultiPlayerRoot;

/// @brief Field m_ActionsAsset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionsAsset, put=__cordl_internal_set_m_ActionsAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_ActionsAsset;

/// @brief Field m_ActionsHooked, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ActionsHooked, put=__cordl_internal_set_m_ActionsHooked)) bool  m_ActionsHooked;

/// @brief Field m_CancelAction, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelAction, put=__cordl_internal_set_m_CancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_CancelAction;

/// @brief Field m_CurrentPointerId, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentPointerId, put=__cordl_internal_set_m_CurrentPointerId)) int32_t  m_CurrentPointerId;

/// @brief Field m_CurrentPointerIndex, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentPointerIndex, put=__cordl_internal_set_m_CurrentPointerIndex)) int32_t  m_CurrentPointerIndex;

/// @brief Field m_CurrentPointerType, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentPointerType, put=__cordl_internal_set_m_CurrentPointerType)) ::UnityEngine::InputSystem::UI::UIPointerType  m_CurrentPointerType;

/// @brief Field m_CursorLockBehavior, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CursorLockBehavior, put=__cordl_internal_set_m_CursorLockBehavior)) ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior  m_CursorLockBehavior;

/// @brief Field m_DeselectOnBackgroundClick, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DeselectOnBackgroundClick, put=__cordl_internal_set_m_DeselectOnBackgroundClick)) bool  m_DeselectOnBackgroundClick;

/// @brief Field m_LeftClickAction, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftClickAction, put=__cordl_internal_set_m_LeftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_LeftClickAction;

/// @brief Field m_LocalMultiPlayerRoot, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalMultiPlayerRoot, put=__cordl_internal_set_m_LocalMultiPlayerRoot)) ::UnityW<::UnityEngine::GameObject>  m_LocalMultiPlayerRoot;

/// @brief Field m_MiddleClickAction, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MiddleClickAction, put=__cordl_internal_set_m_MiddleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MiddleClickAction;

/// @brief Field m_MoveAction, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MoveAction, put=__cordl_internal_set_m_MoveAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MoveAction;

/// @brief Field m_MoveRepeatDelay, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveRepeatDelay, put=__cordl_internal_set_m_MoveRepeatDelay)) float_t  m_MoveRepeatDelay;

/// @brief Field m_MoveRepeatRate, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveRepeatRate, put=__cordl_internal_set_m_MoveRepeatRate)) float_t  m_MoveRepeatRate;

/// @brief Field m_NavigationState, offset 0x170, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_NavigationState, put=__cordl_internal_set_m_NavigationState)) ::UnityEngine::InputSystem::UI::NavigationModel  m_NavigationState;

/// @brief Field m_NeedToPurgeStalePointers, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NeedToPurgeStalePointers, put=__cordl_internal_set_m_NeedToPurgeStalePointers)) bool  m_NeedToPurgeStalePointers;

/// @brief Field m_OnControlsChangedDelegate, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnControlsChangedDelegate, put=__cordl_internal_set_m_OnControlsChangedDelegate)) ::System::Action_1<::System::Object*>*  m_OnControlsChangedDelegate;

/// @brief Field m_OnLeftClickDelegate, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnLeftClickDelegate, put=__cordl_internal_set_m_OnLeftClickDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnLeftClickDelegate;

/// @brief Field m_OnMiddleClickDelegate, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnMiddleClickDelegate, put=__cordl_internal_set_m_OnMiddleClickDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnMiddleClickDelegate;

/// @brief Field m_OnMoveDelegate, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnMoveDelegate, put=__cordl_internal_set_m_OnMoveDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnMoveDelegate;

/// @brief Field m_OnPointDelegate, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnPointDelegate, put=__cordl_internal_set_m_OnPointDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnPointDelegate;

/// @brief Field m_OnRightClickDelegate, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnRightClickDelegate, put=__cordl_internal_set_m_OnRightClickDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnRightClickDelegate;

/// @brief Field m_OnScrollWheelDelegate, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnScrollWheelDelegate, put=__cordl_internal_set_m_OnScrollWheelDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnScrollWheelDelegate;

/// @brief Field m_OnSubmitCancelDelegate, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnSubmitCancelDelegate, put=__cordl_internal_set_m_OnSubmitCancelDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnSubmitCancelDelegate;

/// @brief Field m_OnTrackedDeviceOrientationDelegate, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnTrackedDeviceOrientationDelegate, put=__cordl_internal_set_m_OnTrackedDeviceOrientationDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnTrackedDeviceOrientationDelegate;

/// @brief Field m_OnTrackedDevicePositionDelegate, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnTrackedDevicePositionDelegate, put=__cordl_internal_set_m_OnTrackedDevicePositionDelegate)) ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  m_OnTrackedDevicePositionDelegate;

/// @brief Field m_PointAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointAction, put=__cordl_internal_set_m_PointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_PointAction;

/// @brief Field m_PointerBehavior, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PointerBehavior, put=__cordl_internal_set_m_PointerBehavior)) ::UnityEngine::InputSystem::UI::UIPointerBehavior  m_PointerBehavior;

/// @brief Field m_PointerIds, offset 0x140, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PointerIds, put=__cordl_internal_set_m_PointerIds)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  m_PointerIds;

/// @brief Field m_PointerStates, offset 0x158, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PointerStates, put=__cordl_internal_set_m_PointerStates)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  m_PointerStates;

/// @brief Field m_RightClickAction, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightClickAction, put=__cordl_internal_set_m_RightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_RightClickAction;

/// @brief Field m_ScrollDeltaPerTick, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScrollDeltaPerTick, put=__cordl_internal_set_m_ScrollDeltaPerTick)) float_t  m_ScrollDeltaPerTick;

/// @brief Field m_ScrollWheelAction, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollWheelAction, put=__cordl_internal_set_m_ScrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ScrollWheelAction;

/// @brief Field m_SubmitAction, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubmitAction, put=__cordl_internal_set_m_SubmitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_SubmitAction;

/// @brief Field m_SubmitCancelState, offset 0x198, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_SubmitCancelState, put=__cordl_internal_set_m_SubmitCancelState)) ::UnityEngine::InputSystem::UI::SubmitCancelModel  m_SubmitCancelState;

/// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier, put=__cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier)) float_t  m_TrackedDeviceDragThresholdMultiplier;

/// @brief Field m_TrackedDeviceOrientationAction, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceOrientationAction, put=__cordl_internal_set_m_TrackedDeviceOrientationAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_TrackedDeviceOrientationAction;

/// @brief Field m_TrackedDevicePositionAction, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedDevicePositionAction, put=__cordl_internal_set_m_TrackedDevicePositionAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_TrackedDevicePositionAction;

/// @brief Field m_XRTrackingOrigin, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRTrackingOrigin, put=__cordl_internal_set_m_XRTrackingOrigin)) ::UnityW<::UnityEngine::Transform>  m_XRTrackingOrigin;

 __declspec(property(get=get_middleClick, put=set_middleClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  middleClick;

 __declspec(property(get=get_move, put=set_move)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  move;

 __declspec(property(get=get_moveRepeatDelay, put=set_moveRepeatDelay)) float_t  moveRepeatDelay;

 __declspec(property(get=get_moveRepeatRate, put=set_moveRepeatRate)) float_t  moveRepeatRate;

 __declspec(property(get=get_point, put=set_point)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  point;

 __declspec(property(get=get_pointerBehavior, put=set_pointerBehavior)) ::UnityEngine::InputSystem::UI::UIPointerBehavior  pointerBehavior;

/// @brief [Obsolete("\'repeatDelay\' has been obsoleted; use \'moveRepeatDelay\' instead. (UnityUpgradable) -> moveRepeatDelay", false)]
 __declspec(property(get=get_repeatDelay, put=set_repeatDelay)) float_t  repeatDelay;

/// @brief [Obsolete("\'repeatRate\' has been obsoleted; use \'moveRepeatRate\' instead. (UnityUpgradable) -> moveRepeatRate", false)]
 __declspec(property(get=get_repeatRate, put=set_repeatRate)) float_t  repeatRate;

 __declspec(property(get=get_rightClick, put=set_rightClick)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  rightClick;

/// @brief Field s_InputActionReferenceCounts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InputActionReferenceCounts, put=setStaticF_s_InputActionReferenceCounts)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState>*  s_InputActionReferenceCounts;

 __declspec(property(get=get_scrollDeltaPerTick, put=set_scrollDeltaPerTick)) float_t  scrollDeltaPerTick;

 __declspec(property(get=get_scrollWheel, put=set_scrollWheel)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  scrollWheel;

 __declspec(property(get=get_sendPointerHoverToParent, put=set_sendPointerHoverToParent)) bool  sendPointerHoverToParent;

 __declspec(property(get=get_shouldIgnoreFocus)) bool  shouldIgnoreFocus;

 __declspec(property(get=get_submit, put=set_submit)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  submit;

 __declspec(property(get=get_trackedDeviceDragThresholdMultiplier, put=set_trackedDeviceDragThresholdMultiplier)) float_t  trackedDeviceDragThresholdMultiplier;

 __declspec(property(get=get_trackedDeviceOrientation, put=set_trackedDeviceOrientation)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  trackedDeviceOrientation;

 __declspec(property(get=get_trackedDevicePosition, put=set_trackedDevicePosition)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  trackedDevicePosition;

/// @brief [Obsolete("\'trackedDeviceSelect\' has been obsoleted; use \'leftClick\' instead.", true)]
 __declspec(property(get=get_trackedDeviceSelect, put=set_trackedDeviceSelect)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  trackedDeviceSelect;

 __declspec(property(get=get_xrTrackingOrigin, put=set_xrTrackingOrigin)) ::UnityW<::UnityEngine::Transform>  xrTrackingOrigin;

/// @brief Method ActivateModule, addr 0xafd2454, size 0xb4, virtual true, abstract: false, final false
inline void ActivateModule() ;

/// @brief Method AllocatePointer, addr 0xafd7c08, size 0x218, virtual false, abstract: false, final false
inline int32_t AllocatePointer(int32_t  pointerId, int32_t  displayIndex, int32_t  touchId, ::UnityEngine::InputSystem::UI::UIPointerType  pointerType, ::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputControl*  touchControl) ;

/// @brief Method AssignDefaultActions, addr 0xafd5ff8, size 0x3c0, virtual false, abstract: false, final false
inline void AssignDefaultActions() ;

/// @brief Method Awake, addr 0xafd67f8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForRemovedDevice, addr 0xafd7314, size 0x64, virtual false, abstract: false, final false
inline bool CheckForRemovedDevice(::by_ref<::GlobalNamespace::InputAction_CallbackContext>  context) ;

/// @brief Method ConvertPointerEventScrollDeltaToTicks, addr 0xafd913c, size 0x64, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ConvertPointerEventScrollDeltaToTicks(::UnityEngine::Vector2  scrollDelta) ;

/// @brief Method ConvertUIToolkitPointerId, addr 0xafd906c, size 0xd0, virtual true, abstract: false, final false
inline int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData*  sourcePointerData) ;

/// @brief Method DisableAllActions, addr 0xafd704c, size 0xa8, virtual false, abstract: false, final false
inline void DisableAllActions() ;

/// @brief Method EnableAllActions, addr 0xafd6eac, size 0x5c, virtual false, abstract: false, final false
inline void EnableAllActions() ;

/// @brief Method EnableInputAction, addr 0xafd5cc8, size 0x16c, virtual false, abstract: false, final false
inline void EnableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputActionReference) ;

/// @brief Method FilterPointerStatesByType, addr 0xafd8c34, size 0x194, virtual false, abstract: false, final false
inline void FilterPointerStatesByType() ;

/// @brief Method GetDisplayIndexFor, addr 0xafd7208, size 0xac, virtual false, abstract: false, final false
inline int32_t GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetLastRaycastResult, addr 0xafd27a0, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult GetLastRaycastResult(int32_t  pointerOrTouchId) ;

/// @brief Method GetNavigationEventDeviceType, addr 0xafd91a0, size 0xfc, virtual true, abstract: false, final false
inline ::UnityEngine::EventSystems::NavigationDeviceType GetNavigationEventDeviceType(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method GetPointerStateForIndex, addr 0xafd71c4, size 0x44, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::InputSystem::UI::PointerModel> GetPointerStateForIndex(int32_t  index) ;

/// @brief Method GetPointerStateIndexFor, addr 0xafd72b4, size 0x60, virtual false, abstract: false, final false
inline int32_t GetPointerStateIndexFor(::by_ref<::GlobalNamespace::InputAction_CallbackContext>  context) ;

/// @brief Method GetPointerStateIndexFor, addr 0xafd7378, size 0x7c4, virtual false, abstract: false, final false
inline int32_t GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl*  control, bool  createIfNotExists) ;

/// @brief Method GetPointerStateIndexFor, addr 0xafd2670, size 0x130, virtual false, abstract: false, final false
inline int32_t GetPointerStateIndexFor(int32_t  pointerOrTouchId) ;

/// @brief Method HasNoActions, addr 0xafd69f0, size 0x130, virtual false, abstract: false, final false
inline bool HasNoActions() ;

/// @brief Method HaveControlForDevice, addr 0xafd7b3c, size 0xcc, virtual false, abstract: false, final false
static inline bool HaveControlForDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputActionReference*  actionReference) ;

/// @brief Method HookActions, addr 0xafd6b78, size 0x334, virtual false, abstract: false, final false
inline void HookActions() ;

/// @brief Method IgnoreNextClick, addr 0xafd833c, size 0x120, virtual false, abstract: false, final false
inline bool IgnoreNextClick(::by_ref<::GlobalNamespace::InputAction_CallbackContext>  context, bool  wasPressed) ;

/// @brief Method IsMoveAllowed, addr 0xafd54f8, size 0x200, virtual false, abstract: false, final false
inline bool IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method IsPointerOverGameObject, addr 0xafd2508, size 0x168, virtual true, abstract: false, final false
inline bool IsPointerOverGameObject(int32_t  pointerOrTouchId) ;

static inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule* New_ctor() ;

/// @brief Method OnControlsChanged, addr 0xafd8c28, size 0xc, virtual false, abstract: false, final false
inline void OnControlsChanged(::System::Object*  obj) ;

/// @brief Method OnDestroy, addr 0xafd68a0, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xafd6f08, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xafd68e4, size 0x10c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftClickCallback, addr 0xafd845c, size 0xe8, virtual false, abstract: false, final false
inline void OnLeftClickCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMiddleClickCallback, addr 0xafd8680, size 0xe8, virtual false, abstract: false, final false
inline void OnMiddleClickCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMoveCallback, addr 0xafd88d4, size 0x84, virtual false, abstract: false, final false
inline void OnMoveCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPointCallback, addr 0xafd8230, size 0x10c, virtual false, abstract: false, final false
inline void OnPointCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRightClickCallback, addr 0xafd8598, size 0xe8, virtual false, abstract: false, final false
inline void OnRightClickCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnScrollCallback, addr 0xafd8768, size 0x12c, virtual false, abstract: false, final false
inline void OnScrollCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSubmitCancelCallback, addr 0xafd8958, size 0x40, virtual false, abstract: false, final false
inline void OnSubmitCancelCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTrackedDeviceOrientationCallback, addr 0xafd8998, size 0xf4, virtual false, abstract: false, final false
inline void OnTrackedDeviceOrientationCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTrackedDevicePositionCallback, addr 0xafd8ae4, size 0xf0, virtual false, abstract: false, final false
inline void OnTrackedDevicePositionCallback(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method PerformRaycast, addr 0xafd2854, size 0x258, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData) ;

/// @brief Method PointerShouldIgnoreTransform, addr 0xafd436c, size 0xec, virtual false, abstract: false, final false
inline bool PointerShouldIgnoreTransform(::UnityEngine::Transform*  t) ;

/// @brief Method Process, addr 0xafd8e8c, size 0x19c, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method ProcessNavigation, addr 0xafd4e2c, size 0x6cc, virtual false, abstract: false, final false
inline void ProcessNavigation(::by_ref<::UnityEngine::InputSystem::UI::NavigationModel>  navigationState) ;

/// @brief Method ProcessPointer, addr 0xafd30f0, size 0x3b8, virtual false, abstract: false, final false
inline void ProcessPointer(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>  state) ;

/// @brief Method ProcessPointerButton, addr 0xafd35bc, size 0x904, virtual false, abstract: false, final false
inline void ProcessPointerButton(::by_ref<::GlobalNamespace::PointerModel_ButtonState>  button, ::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method ProcessPointerButtonDrag, addr 0xafd3ec0, size 0x318, virtual false, abstract: false, final false
inline void ProcessPointerButtonDrag(::by_ref<::GlobalNamespace::PointerModel_ButtonState>  button, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData) ;

/// @brief Method ProcessPointerMovement, addr 0xafd446c, size 0x904, virtual false, abstract: false, final false
inline void ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData, ::UnityEngine::GameObject*  currentPointerTarget) ;

/// @brief Method ProcessPointerMovement, addr 0xafd355c, size 0x48, virtual false, abstract: false, final false
inline void ProcessPointerMovement(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>  pointer, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData) ;

/// @brief Method ProcessPointerScroll, addr 0xafd41d8, size 0x194, virtual false, abstract: false, final false
static inline void ProcessPointerScroll(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>  pointer, ::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method PurgeStalePointers, addr 0xafd8114, size 0x11c, virtual false, abstract: false, final false
inline void PurgeStalePointers() ;

/// @brief Method RemovePointerAtIndex, addr 0xafd7ee8, size 0x22c, virtual false, abstract: false, final false
inline bool RemovePointerAtIndex(int32_t  index) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method ResetDefaultActions, addr 0xafd5f4c, size 0xac, virtual false, abstract: false, final false
static inline void ResetDefaultActions() ;

/// @brief Method ResetPointers, addr 0xafd6b20, size 0x58, virtual false, abstract: false, final false
inline void ResetPointers() ;

/// @brief Method SendPointerExitEventsAndRemovePointer, addr 0xafd70f4, size 0xd0, virtual false, abstract: false, final false
inline bool SendPointerExitEventsAndRemovePointer(int32_t  index) ;

/// @brief Method SetActionCallback, addr 0xafd93a4, size 0xe4, virtual false, abstract: false, final false
static inline void SetActionCallback(::UnityEngine::InputSystem::InputActionReference*  actionReference, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  callback, bool  install) ;

/// @brief Method SetActionCallbacks, addr 0xafd929c, size 0x108, virtual false, abstract: false, final false
inline void SetActionCallbacks(bool  install) ;

/// @brief Method SwapAction, addr 0xafd5888, size 0x2c8, virtual false, abstract: false, final false
inline void SwapAction(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  property, ::UnityEngine::InputSystem::InputActionReference*  newValue, bool  actionsHooked, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  actionCallback) ;

/// @brief Method TryDisableInputAction, addr 0xafd5b50, size 0x178, virtual false, abstract: false, final false
inline void TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputActionReference, bool  isComponentDisabling) ;

/// @brief Method UnassignActions, addr 0xafd65f8, size 0x190, virtual false, abstract: false, final false
inline void UnassignActions() ;

/// @brief Method UnhookActions, addr 0xafd68d0, size 0x14, virtual false, abstract: false, final false
inline void UnhookActions() ;

/// @brief Method UpdateReferenceForNewAsset, addr 0xafd9488, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference*  actionReference) ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_ActionsAsset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_ActionsAsset() ;

constexpr bool const& __cordl_internal_get_m_ActionsHooked() const;

constexpr bool& __cordl_internal_get_m_ActionsHooked() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentPointerId() const;

constexpr int32_t& __cordl_internal_get_m_CurrentPointerId() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentPointerIndex() const;

constexpr int32_t& __cordl_internal_get_m_CurrentPointerIndex() ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& __cordl_internal_get_m_CurrentPointerType() const;

constexpr ::UnityEngine::InputSystem::UI::UIPointerType& __cordl_internal_get_m_CurrentPointerType() ;

constexpr ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior const& __cordl_internal_get_m_CursorLockBehavior() const;

constexpr ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior& __cordl_internal_get_m_CursorLockBehavior() ;

constexpr bool const& __cordl_internal_get_m_DeselectOnBackgroundClick() const;

constexpr bool& __cordl_internal_get_m_DeselectOnBackgroundClick() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_LocalMultiPlayerRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_LocalMultiPlayerRoot() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MoveAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MoveAction() ;

constexpr float_t const& __cordl_internal_get_m_MoveRepeatDelay() const;

constexpr float_t& __cordl_internal_get_m_MoveRepeatDelay() ;

constexpr float_t const& __cordl_internal_get_m_MoveRepeatRate() const;

constexpr float_t& __cordl_internal_get_m_MoveRepeatRate() ;

constexpr ::UnityEngine::InputSystem::UI::NavigationModel const& __cordl_internal_get_m_NavigationState() const;

constexpr ::UnityEngine::InputSystem::UI::NavigationModel& __cordl_internal_get_m_NavigationState() ;

constexpr bool const& __cordl_internal_get_m_NeedToPurgeStalePointers() const;

constexpr bool& __cordl_internal_get_m_NeedToPurgeStalePointers() ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_m_OnControlsChangedDelegate() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_m_OnControlsChangedDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnLeftClickDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnLeftClickDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnMiddleClickDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnMiddleClickDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnMoveDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnMoveDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnPointDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnPointDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnRightClickDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnRightClickDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnScrollWheelDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnScrollWheelDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnSubmitCancelDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnSubmitCancelDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() ;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_OnTrackedDevicePositionDelegate() const;

constexpr ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_OnTrackedDevicePositionDelegate() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction() ;

constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior const& __cordl_internal_get_m_PointerBehavior() const;

constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior& __cordl_internal_get_m_PointerBehavior() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> const& __cordl_internal_get_m_PointerIds() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>& __cordl_internal_get_m_PointerIds() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> const& __cordl_internal_get_m_PointerStates() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>& __cordl_internal_get_m_PointerStates() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction() ;

constexpr float_t const& __cordl_internal_get_m_ScrollDeltaPerTick() const;

constexpr float_t& __cordl_internal_get_m_ScrollDeltaPerTick() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction() ;

constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel const& __cordl_internal_get_m_SubmitCancelState() const;

constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel& __cordl_internal_get_m_SubmitCancelState() ;

constexpr float_t const& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const;

constexpr float_t& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TrackedDeviceOrientationAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TrackedDeviceOrientationAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TrackedDevicePositionAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TrackedDevicePositionAction() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_XRTrackingOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_XRTrackingOrigin() ;

constexpr void __cordl_internal_set_m_ActionsAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_ActionsHooked(bool  value) ;

constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_CurrentPointerId(int32_t  value) ;

constexpr void __cordl_internal_set_m_CurrentPointerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_CurrentPointerType(::UnityEngine::InputSystem::UI::UIPointerType  value) ;

constexpr void __cordl_internal_set_m_CursorLockBehavior(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior  value) ;

constexpr void __cordl_internal_set_m_DeselectOnBackgroundClick(bool  value) ;

constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_LocalMultiPlayerRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MoveRepeatDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveRepeatRate(float_t  value) ;

constexpr void __cordl_internal_set_m_NavigationState(::UnityEngine::InputSystem::UI::NavigationModel  value) ;

constexpr void __cordl_internal_set_m_NeedToPurgeStalePointers(bool  value) ;

constexpr void __cordl_internal_set_m_OnControlsChangedDelegate(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_m_OnLeftClickDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnMiddleClickDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnMoveDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnPointDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnRightClickDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnScrollWheelDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnSubmitCancelDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnTrackedDeviceOrientationDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_PointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior  value) ;

constexpr void __cordl_internal_set_m_PointerIds(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_m_PointerStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  value) ;

constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ScrollDeltaPerTick(float_t  value) ;

constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SubmitCancelState(::UnityEngine::InputSystem::UI::SubmitCancelModel  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceOrientationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TrackedDevicePositionAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_XRTrackingOrigin(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xafd9520, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::DefaultInputActions* getStaticF_defaultActions() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState>* getStaticF_s_InputActionReferenceCounts() ;

/// @brief Method get_actionsAsset, addr 0xafd9510, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actionsAsset() ;

/// @brief Method get_cancel, addr 0xafd5ef8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cancel() ;

/// @brief Method get_cursorLockBehavior, addr 0xafd241c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior get_cursorLockBehavior() ;

/// @brief Method get_deselectOnBackgroundClick, addr 0xafd23fc, size 0x8, virtual false, abstract: false, final false
inline bool get_deselectOnBackgroundClick() ;

/// @brief Method get_explictlyIgnoreFocus, addr 0xafd5718, size 0x68, virtual false, abstract: false, final false
inline bool get_explictlyIgnoreFocus() ;

/// @brief Method get_leftClick, addr 0xafd5e6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_leftClick() ;

/// @brief Method get_localMultiPlayerRoot, addr 0xafd242c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_localMultiPlayerRoot() ;

/// @brief Method get_middleClick, addr 0xafd5e88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_middleClick() ;

/// @brief Method get_move, addr 0xafd5ec0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_move() ;

/// @brief Method get_moveRepeatDelay, addr 0xafd56f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveRepeatDelay() ;

/// @brief Method get_moveRepeatRate, addr 0xafd5708, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveRepeatRate() ;

/// @brief Method get_point, addr 0xafd5e34, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_point() ;

/// @brief Method get_pointerBehavior, addr 0xafd240c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::UI::UIPointerBehavior get_pointerBehavior() ;

/// @brief Method get_repeatDelay, addr 0xafd5858, size 0x8, virtual false, abstract: false, final false
inline float_t get_repeatDelay() ;

/// @brief Method get_repeatRate, addr 0xafd5848, size 0x8, virtual false, abstract: false, final false
inline float_t get_repeatRate() ;

/// @brief Method get_rightClick, addr 0xafd5ea4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rightClick() ;

/// @brief Method get_scrollDeltaPerTick, addr 0xafd2444, size 0x8, virtual false, abstract: false, final false
inline float_t get_scrollDeltaPerTick() ;

/// @brief Method get_scrollWheel, addr 0xafd5e50, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_scrollWheel() ;

/// @brief Method get_sendPointerHoverToParent, addr 0xafd4d70, size 0x8, virtual false, abstract: false, final false
inline bool get_sendPointerHoverToParent() ;

/// @brief Method get_shouldIgnoreFocus, addr 0xafd5780, size 0xc8, virtual false, abstract: false, final false
inline bool get_shouldIgnoreFocus() ;

/// @brief Method get_submit, addr 0xafd5edc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_submit() ;

/// @brief Method get_trackedDeviceDragThresholdMultiplier, addr 0xafd5878, size 0x8, virtual false, abstract: false, final false
inline float_t get_trackedDeviceDragThresholdMultiplier() ;

/// @brief Method get_trackedDeviceOrientation, addr 0xafd5f14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDeviceOrientation() ;

/// @brief Method get_trackedDevicePosition, addr 0xafd5f30, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDevicePosition() ;

/// @brief Method get_trackedDeviceSelect, addr 0xafd6788, size 0x38, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_trackedDeviceSelect() ;

/// @brief Method get_xrTrackingOrigin, addr 0xafd5868, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_xrTrackingOrigin() ;

static inline void setStaticF_defaultActions(::UnityEngine::InputSystem::DefaultInputActions*  value) ;

static inline void setStaticF_s_InputActionReferenceCounts(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState>*  value) ;

/// @brief Method set_actionsAsset, addr 0xafd63b8, size 0x240, virtual false, abstract: false, final false
inline void set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_cancel, addr 0xafd5f00, size 0x14, virtual false, abstract: false, final false
inline void set_cancel(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_cursorLockBehavior, addr 0xafd2424, size 0x8, virtual false, abstract: false, final false
inline void set_cursorLockBehavior(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior  value) ;

/// @brief Method set_deselectOnBackgroundClick, addr 0xafd2404, size 0x8, virtual false, abstract: false, final false
inline void set_deselectOnBackgroundClick(bool  value) ;

/// @brief Method set_leftClick, addr 0xafd5e74, size 0x14, virtual false, abstract: false, final false
inline void set_leftClick(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_localMultiPlayerRoot, addr 0xafd2434, size 0x10, virtual false, abstract: false, final false
inline void set_localMultiPlayerRoot(::UnityEngine::GameObject*  value) ;

/// @brief Method set_middleClick, addr 0xafd5e90, size 0x14, virtual false, abstract: false, final false
inline void set_middleClick(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_move, addr 0xafd5ec8, size 0x14, virtual false, abstract: false, final false
inline void set_move(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_moveRepeatDelay, addr 0xafd5700, size 0x8, virtual false, abstract: false, final false
inline void set_moveRepeatDelay(float_t  value) ;

/// @brief Method set_moveRepeatRate, addr 0xafd5710, size 0x8, virtual false, abstract: false, final false
inline void set_moveRepeatRate(float_t  value) ;

/// @brief Method set_point, addr 0xafd5e3c, size 0x14, virtual false, abstract: false, final false
inline void set_point(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_pointerBehavior, addr 0xafd2414, size 0x8, virtual false, abstract: false, final false
inline void set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior  value) ;

/// @brief Method set_repeatDelay, addr 0xafd5860, size 0x8, virtual false, abstract: false, final false
inline void set_repeatDelay(float_t  value) ;

/// @brief Method set_repeatRate, addr 0xafd5850, size 0x8, virtual false, abstract: false, final false
inline void set_repeatRate(float_t  value) ;

/// @brief Method set_rightClick, addr 0xafd5eac, size 0x14, virtual false, abstract: false, final false
inline void set_rightClick(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_scrollDeltaPerTick, addr 0xafd244c, size 0x8, virtual false, abstract: false, final false
inline void set_scrollDeltaPerTick(float_t  value) ;

/// @brief Method set_scrollWheel, addr 0xafd5e58, size 0x14, virtual false, abstract: false, final false
inline void set_scrollWheel(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_sendPointerHoverToParent, addr 0xafd9518, size 0x8, virtual false, abstract: false, final false
inline void set_sendPointerHoverToParent(bool  value) ;

/// @brief Method set_submit, addr 0xafd5ee4, size 0x14, virtual false, abstract: false, final false
inline void set_submit(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_trackedDeviceDragThresholdMultiplier, addr 0xafd5880, size 0x8, virtual false, abstract: false, final false
inline void set_trackedDeviceDragThresholdMultiplier(float_t  value) ;

/// @brief Method set_trackedDeviceOrientation, addr 0xafd5f1c, size 0x14, virtual false, abstract: false, final false
inline void set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_trackedDevicePosition, addr 0xafd5f38, size 0x14, virtual false, abstract: false, final false
inline void set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_trackedDeviceSelect, addr 0xafd67c0, size 0x38, virtual false, abstract: false, final false
inline void set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_xrTrackingOrigin, addr 0xafd5870, size 0x8, virtual false, abstract: false, final false
inline void set_xrTrackingOrigin(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystemUIInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystemUIInputModule(InputSystemUIInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemUIInputModule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystemUIInputModule(InputSystemUIInputModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13595};

/// @brief Field kClickSpeed offset 0xffffffff size 0x4
static constexpr float_t  kClickSpeed{static_cast<float_t>(0.3f)};

/// @brief Field kSmallestScrollDeltaPerTick offset 0xffffffff size 0x4
static constexpr float_t  kSmallestScrollDeltaPerTick{static_cast<float_t>(1e-5f)};

/// [FormerlySerializedAs("m_RepeatDelay")]
/// [Tooltip("The Initial delay (in seconds) between an initial move action and a repeated move action.")]
/// [SerializeField]
/// @brief Field m_MoveRepeatDelay, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_MoveRepeatDelay;

/// [FormerlySerializedAs("m_RepeatRate")]
/// [Tooltip("The speed (in seconds) that the move action repeats itself once repeating (max 1 per frame).")]
/// [SerializeField]
/// @brief Field m_MoveRepeatRate, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_MoveRepeatRate;

/// [Tooltip("Scales the Eventsystem.DragThreshold, for tracked devices, to make selection easier.")]
/// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_TrackedDeviceDragThresholdMultiplier;

/// [Tooltip("Transform representing the real world origin for tracking devices. When using the XR Interaction Toolkit, this should be pointing to the XR Rig\'s Transform.")]
/// [SerializeField]
/// @brief Field m_XRTrackingOrigin, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_XRTrackingOrigin;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_ActionsAsset, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_ActionsAsset;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_PointAction, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_PointAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_MoveAction, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MoveAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_SubmitAction, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_SubmitAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_CancelAction, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_CancelAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_LeftClickAction, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_LeftClickAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_MiddleClickAction, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MiddleClickAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_RightClickAction, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_RightClickAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_ScrollWheelAction, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ScrollWheelAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_TrackedDevicePositionAction, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_TrackedDevicePositionAction;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_TrackedDeviceOrientationAction, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_TrackedDeviceOrientationAction;

/// [SerializeField]
/// @brief Field m_DeselectOnBackgroundClick, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_DeselectOnBackgroundClick;

/// [SerializeField]
/// @brief Field m_PointerBehavior, offset: 0xcc, size: 0x4, def value: None
 ::UnityEngine::InputSystem::UI::UIPointerBehavior  ___m_PointerBehavior;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_CursorLockBehavior, offset: 0xd0, size: 0x4, def value: None
 ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior  ___m_CursorLockBehavior;

/// [SerializeField]
/// @brief Field m_ScrollDeltaPerTick, offset: 0xd4, size: 0x4, def value: None
 float_t  ___m_ScrollDeltaPerTick;

/// @brief Field m_ActionsHooked, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_ActionsHooked;

/// @brief Field m_NeedToPurgeStalePointers, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_NeedToPurgeStalePointers;

/// @brief Field m_OnPointDelegate, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnPointDelegate;

/// @brief Field m_OnMoveDelegate, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnMoveDelegate;

/// @brief Field m_OnSubmitCancelDelegate, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnSubmitCancelDelegate;

/// @brief Field m_OnLeftClickDelegate, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnLeftClickDelegate;

/// @brief Field m_OnRightClickDelegate, offset: 0x100, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnRightClickDelegate;

/// @brief Field m_OnMiddleClickDelegate, offset: 0x108, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnMiddleClickDelegate;

/// @brief Field m_OnScrollWheelDelegate, offset: 0x110, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnScrollWheelDelegate;

/// @brief Field m_OnTrackedDevicePositionDelegate, offset: 0x118, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnTrackedDevicePositionDelegate;

/// @brief Field m_OnTrackedDeviceOrientationDelegate, offset: 0x120, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  ___m_OnTrackedDeviceOrientationDelegate;

/// @brief Field m_OnControlsChangedDelegate, offset: 0x128, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___m_OnControlsChangedDelegate;

/// @brief Field m_CurrentPointerId, offset: 0x130, size: 0x4, def value: None
 int32_t  ___m_CurrentPointerId;

/// @brief Field m_CurrentPointerIndex, offset: 0x134, size: 0x4, def value: None
 int32_t  ___m_CurrentPointerIndex;

/// @brief Field m_CurrentPointerType, offset: 0x138, size: 0x4, def value: None
 ::UnityEngine::InputSystem::UI::UIPointerType  ___m_CurrentPointerType;

/// @brief Field m_PointerIds, offset: 0x140, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  ___m_PointerIds;

/// @brief Field m_PointerStates, offset: 0x158, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  ___m_PointerStates;

/// @brief Field m_NavigationState, offset: 0x170, size: 0x28, def value: None
 ::UnityEngine::InputSystem::UI::NavigationModel  ___m_NavigationState;

/// @brief Field m_SubmitCancelState, offset: 0x198, size: 0x10, def value: None
 ::UnityEngine::InputSystem::UI::SubmitCancelModel  ___m_SubmitCancelState;

/// @brief Field m_LocalMultiPlayerRoot, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_LocalMultiPlayerRoot;

/// @brief Size padding 0x420 - 0x1b0 = 0x270, packed as 0x270
 uint8_t  _cordl_size_padding[0x270];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveRepeatDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveRepeatRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDeviceDragThresholdMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_XRTrackingOrigin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ActionsAsset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MoveAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_SubmitAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CancelAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_LeftClickAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_MiddleClickAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_RightClickAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ScrollWheelAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDevicePositionAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_TrackedDeviceOrientationAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_DeselectOnBackgroundClick) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerBehavior) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CursorLockBehavior) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ScrollDeltaPerTick) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_ActionsHooked) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_NeedToPurgeStalePointers) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnPointDelegate) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnMoveDelegate) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnSubmitCancelDelegate) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnLeftClickDelegate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnRightClickDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnMiddleClickDelegate) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnScrollWheelDelegate) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnTrackedDevicePositionDelegate) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnTrackedDeviceOrientationDelegate) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_OnControlsChangedDelegate) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerId) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerIndex) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_CurrentPointerType) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerIds) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_PointerStates) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_NavigationState) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_SubmitCancelState) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule, ___m_LocalMultiPlayerRoot) == 0x1a8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::InputSystemUIInputModule) == 0x420, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
