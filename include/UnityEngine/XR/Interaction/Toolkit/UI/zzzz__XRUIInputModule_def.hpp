#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_ActiveInputMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRUIInputModule)
namespace GlobalNamespace {
struct XRUIInputModule_ActiveInputMode;
}
namespace GlobalNamespace {
struct XRUIInputModule_RegisteredInteractor;
}
namespace GlobalNamespace {
struct XRUIInputModule_RegisteredTouch;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/<>c");
// [AddComponentMenu("Event/XR UI Input Module", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.UI.NavigationModel, UnityEngine.XR.Interaction.Toolkit.UI.PointerModel, UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule, UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule::ActiveInputMode
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
class CORDL_TYPE XRUIInputModule : public ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule {
public:
// Declarations
using ActiveInputMode = ::GlobalNamespace::XRUIInputModule_ActiveInputMode;

using RegisteredInteractor = ::GlobalNamespace::XRUIInputModule_RegisteredInteractor;

using RegisteredTouch = ::GlobalNamespace::XRUIInputModule_RegisteredTouch;

using __c = ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c;

/// @brief [Obsolete("activeInputMode has been deprecated in version 3.1.0. Input System Package (New) will be the default input handling mode used when active input handling is set to Both.")]
 __declspec(property(get=get_activeInputMode, put=set_activeInputMode)) ::GlobalNamespace::XRUIInputModule_ActiveInputMode  activeInputMode;

 __declspec(property(get=get_cancelAction, put=set_cancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  cancelAction;

 __declspec(property(get=get_cancelButton, put=set_cancelButton)) ::StringW  cancelButton;

 __declspec(property(get=get_enableBuiltinActionsAsFallback, put=set_enableBuiltinActionsAsFallback)) bool  enableBuiltinActionsAsFallback;

 __declspec(property(get=get_enableGamepadInput, put=set_enableGamepadInput)) bool  enableGamepadInput;

 __declspec(property(get=get_enableJoystickInput, put=set_enableJoystickInput)) bool  enableJoystickInput;

 __declspec(property(get=get_enableMouseInput, put=set_enableMouseInput)) bool  enableMouseInput;

 __declspec(property(get=get_enableTouchInput, put=set_enableTouchInput)) bool  enableTouchInput;

 __declspec(property(get=get_enableXRInput, put=set_enableXRInput)) bool  enableXRInput;

 __declspec(property(get=get_horizontalAxis, put=set_horizontalAxis)) ::StringW  horizontalAxis;

 __declspec(property(get=get_leftClickAction, put=set_leftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  leftClickAction;

/// @brief Field m_ActiveInputMode, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActiveInputMode, put=__cordl_internal_set_m_ActiveInputMode)) ::GlobalNamespace::XRUIInputModule_ActiveInputMode  m_ActiveInputMode;

/// @brief Field m_CancelAction, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelAction, put=__cordl_internal_set_m_CancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_CancelAction;

/// @brief Field m_CancelButton, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelButton, put=__cordl_internal_set_m_CancelButton)) ::StringW  m_CancelButton;

/// @brief Field m_DeletedPointerIds, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeletedPointerIds, put=__cordl_internal_set_m_DeletedPointerIds)) ::System::Collections::Generic::Stack_1<int32_t>*  m_DeletedPointerIds;

/// @brief Field m_EnableBuiltinActionsAsFallback, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableBuiltinActionsAsFallback, put=__cordl_internal_set_m_EnableBuiltinActionsAsFallback)) bool  m_EnableBuiltinActionsAsFallback;

/// @brief Field m_EnableGamepadInput, offset 0x12f, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableGamepadInput, put=__cordl_internal_set_m_EnableGamepadInput)) bool  m_EnableGamepadInput;

/// @brief Field m_EnableJoystickInput, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableJoystickInput, put=__cordl_internal_set_m_EnableJoystickInput)) bool  m_EnableJoystickInput;

/// @brief Field m_EnableMouseInput, offset 0x12d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableMouseInput, put=__cordl_internal_set_m_EnableMouseInput)) bool  m_EnableMouseInput;

/// @brief Field m_EnableTouchInput, offset 0x12e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTouchInput, put=__cordl_internal_set_m_EnableTouchInput)) bool  m_EnableTouchInput;

/// @brief Field m_EnableXRInput, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableXRInput, put=__cordl_internal_set_m_EnableXRInput)) bool  m_EnableXRInput;

/// @brief Field m_HorizontalAxis, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalAxis, put=__cordl_internal_set_m_HorizontalAxis)) ::StringW  m_HorizontalAxis;

/// @brief Field m_LeftClickAction, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftClickAction, put=__cordl_internal_set_m_LeftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_LeftClickAction;

/// @brief Field m_MiddleClickAction, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MiddleClickAction, put=__cordl_internal_set_m_MiddleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MiddleClickAction;

/// @brief Field m_NavigateAction, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NavigateAction, put=__cordl_internal_set_m_NavigateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_NavigateAction;

/// @brief Field m_NavigationState, offset 0x3d0, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_NavigationState, put=__cordl_internal_set_m_NavigationState)) ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel  m_NavigationState;

/// @brief Field m_PointAction, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointAction, put=__cordl_internal_set_m_PointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_PointAction;

/// @brief Field m_PointerState, offset 0x1b8, size 0x218 
 __declspec(property(get=__cordl_internal_get_m_PointerState, put=__cordl_internal_set_m_PointerState)) ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel  m_PointerState;

/// @brief Field m_RegisteredInteractors, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInteractors, put=__cordl_internal_set_m_RegisteredInteractors)) ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*  m_RegisteredInteractors;

/// @brief Field m_RegisteredTouches, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredTouches, put=__cordl_internal_set_m_RegisteredTouches)) ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*  m_RegisteredTouches;

/// @brief Field m_RightClickAction, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightClickAction, put=__cordl_internal_set_m_RightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_RightClickAction;

/// @brief Field m_RollingPointerId, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RollingPointerId, put=__cordl_internal_set_m_RollingPointerId)) int32_t  m_RollingPointerId;

/// @brief Field m_ScrollWheelAction, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollWheelAction, put=__cordl_internal_set_m_ScrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ScrollWheelAction;

/// @brief Field m_SubmitAction, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubmitAction, put=__cordl_internal_set_m_SubmitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_SubmitAction;

/// @brief Field m_SubmitButton, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubmitButton, put=__cordl_internal_set_m_SubmitButton)) ::StringW  m_SubmitButton;

/// @brief Field m_UIHoverEventArgs, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverEventArgs, put=__cordl_internal_set_m_UIHoverEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  m_UIHoverEventArgs;

/// @brief Field m_UseBuiltInInputSystemActions, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseBuiltInInputSystemActions, put=__cordl_internal_set_m_UseBuiltInInputSystemActions)) bool  m_UseBuiltInInputSystemActions;

/// @brief Field m_VerticalAxis, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VerticalAxis, put=__cordl_internal_set_m_VerticalAxis)) ::StringW  m_VerticalAxis;

/// @brief [Obsolete("maxRaycastDistance has been deprecated. Its value was unused, calling this property is unnecessary and should be removed.", true)]
 __declspec(property(get=get_maxRaycastDistance, put=set_maxRaycastDistance)) float_t  maxRaycastDistance;

 __declspec(property(get=get_middleClickAction, put=set_middleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  middleClickAction;

 __declspec(property(get=get_navigateAction, put=set_navigateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  navigateAction;

 __declspec(property(get=get_pointAction, put=set_pointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  pointAction;

 __declspec(property(get=get_rightClickAction, put=set_rightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  rightClickAction;

 __declspec(property(get=get_scrollWheelAction, put=set_scrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  scrollWheelAction;

 __declspec(property(get=get_submitAction, put=set_submitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  submitAction;

 __declspec(property(get=get_submitButton, put=set_submitButton)) ::StringW  submitButton;

 __declspec(property(get=get_verticalAxis, put=set_verticalAxis)) ::StringW  verticalAxis;

/// @brief Method DisableAllActions, addr 0xb43f680, size 0x4c, virtual false, abstract: false, final false
inline void DisableAllActions() ;

/// @brief Method DisableInputAction, addr 0xb440e28, size 0x9c, virtual false, abstract: false, final false
static inline void DisableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputAction) ;

/// @brief Method DoProcess, addr 0xb43f7a0, size 0x958, virtual true, abstract: false, final false
inline void DoProcess() ;

/// @brief Method EnableAllActions, addr 0xb43f604, size 0x4c, virtual false, abstract: false, final false
inline void EnableAllActions() ;

/// @brief Method EnableInputAction, addr 0xb440d8c, size 0x9c, virtual false, abstract: false, final false
static inline void EnableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputAction) ;

/// @brief Method GetDisplayIndexFor, addr 0xb440ce0, size 0xac, virtual false, abstract: false, final false
inline int32_t GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetInteractor, addr 0xb4345e4, size 0x114, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* GetInteractor(int32_t  pointerId) ;

/// @brief Method GetPointerStates, addr 0xb4400f8, size 0xb48, virtual false, abstract: false, final false
inline void GetPointerStates() ;

/// @brief Method GetTrackedDeviceModel, addr 0xb433738, size 0x114, virtual false, abstract: false, final false
inline bool GetTrackedDeviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method InputActionReferencesAreSet, addr 0xb43f380, size 0x188, virtual false, abstract: false, final false
inline bool InputActionReferencesAreSet() ;

/// @brief Method IsActionEnabled, addr 0xb440c40, size 0xa0, virtual false, abstract: false, final false
static inline bool IsActionEnabled(::UnityEngine::InputSystem::InputActionReference*  inputAction) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule* New_ctor() ;

/// @brief Method OnDisable, addr 0xb43f650, size 0x30, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb43f568, size 0x9c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterInteractor, addr 0xb43326c, size 0x258, virtual false, abstract: false, final false
inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor) ;

/// @brief Method SetInputAction, addr 0xb43f158, size 0x160, virtual false, abstract: false, final false
inline void SetInputAction(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  inputAction, ::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method UnregisterInteractor, addr 0xb4334c4, size 0x164, virtual false, abstract: false, final false
inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor) ;

constexpr ::GlobalNamespace::XRUIInputModule_ActiveInputMode const& __cordl_internal_get_m_ActiveInputMode() const;

constexpr ::GlobalNamespace::XRUIInputModule_ActiveInputMode& __cordl_internal_get_m_ActiveInputMode() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction() ;

constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

constexpr ::StringW& __cordl_internal_get_m_CancelButton() ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_m_DeletedPointerIds() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_DeletedPointerIds() ;

constexpr bool const& __cordl_internal_get_m_EnableBuiltinActionsAsFallback() const;

constexpr bool& __cordl_internal_get_m_EnableBuiltinActionsAsFallback() ;

constexpr bool const& __cordl_internal_get_m_EnableGamepadInput() const;

constexpr bool& __cordl_internal_get_m_EnableGamepadInput() ;

constexpr bool const& __cordl_internal_get_m_EnableJoystickInput() const;

constexpr bool& __cordl_internal_get_m_EnableJoystickInput() ;

constexpr bool const& __cordl_internal_get_m_EnableMouseInput() const;

constexpr bool& __cordl_internal_get_m_EnableMouseInput() ;

constexpr bool const& __cordl_internal_get_m_EnableTouchInput() const;

constexpr bool& __cordl_internal_get_m_EnableTouchInput() ;

constexpr bool const& __cordl_internal_get_m_EnableXRInput() const;

constexpr bool& __cordl_internal_get_m_EnableXRInput() ;

constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_NavigateAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_NavigateAction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel const& __cordl_internal_get_m_NavigationState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel& __cordl_internal_get_m_NavigationState() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel const& __cordl_internal_get_m_PointerState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel& __cordl_internal_get_m_PointerState() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>* const& __cordl_internal_get_m_RegisteredInteractors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*& __cordl_internal_get_m_RegisteredInteractors() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>* const& __cordl_internal_get_m_RegisteredTouches() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*& __cordl_internal_get_m_RegisteredTouches() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction() ;

constexpr int32_t const& __cordl_internal_get_m_RollingPointerId() const;

constexpr int32_t& __cordl_internal_get_m_RollingPointerId() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction() ;

constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

constexpr ::StringW& __cordl_internal_get_m_SubmitButton() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>* const& __cordl_internal_get_m_UIHoverEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*& __cordl_internal_get_m_UIHoverEventArgs() ;

constexpr bool const& __cordl_internal_get_m_UseBuiltInInputSystemActions() const;

constexpr bool& __cordl_internal_get_m_UseBuiltInInputSystemActions() ;

constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

constexpr ::StringW& __cordl_internal_get_m_VerticalAxis() ;

constexpr void __cordl_internal_set_m_ActiveInputMode(::GlobalNamespace::XRUIInputModule_ActiveInputMode  value) ;

constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_CancelButton(::StringW  value) ;

constexpr void __cordl_internal_set_m_DeletedPointerIds(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_EnableBuiltinActionsAsFallback(bool  value) ;

constexpr void __cordl_internal_set_m_EnableGamepadInput(bool  value) ;

constexpr void __cordl_internal_set_m_EnableJoystickInput(bool  value) ;

constexpr void __cordl_internal_set_m_EnableMouseInput(bool  value) ;

constexpr void __cordl_internal_set_m_EnableTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_EnableXRInput(bool  value) ;

constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW  value) ;

constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_NavigateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_NavigationState(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel  value) ;

constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_PointerState(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel  value) ;

constexpr void __cordl_internal_set_m_RegisteredInteractors(::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*  value) ;

constexpr void __cordl_internal_set_m_RegisteredTouches(::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*  value) ;

constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_RollingPointerId(int32_t  value) ;

constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SubmitButton(::StringW  value) ;

constexpr void __cordl_internal_set_m_UIHoverEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_UseBuiltInInputSystemActions(bool  value) ;

constexpr void __cordl_internal_set_m_VerticalAxis(::StringW  value) ;

/// @brief Method .ctor, addr 0xb440ed0, size 0x2e4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activeInputMode, addr 0xb43f0e4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRUIInputModule_ActiveInputMode get_activeInputMode() ;

/// @brief Method get_cancelAction, addr 0xb43f330, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cancelAction() ;

/// @brief Method get_cancelButton, addr 0xb43f550, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_cancelButton() ;

/// @brief Method get_enableBuiltinActionsAsFallback, addr 0xb43f344, size 0x8, virtual false, abstract: false, final false
inline bool get_enableBuiltinActionsAsFallback() ;

/// @brief Method get_enableGamepadInput, addr 0xb43f124, size 0x8, virtual false, abstract: false, final false
inline bool get_enableGamepadInput() ;

/// @brief Method get_enableJoystickInput, addr 0xb43f134, size 0x8, virtual false, abstract: false, final false
inline bool get_enableJoystickInput() ;

/// @brief Method get_enableMouseInput, addr 0xb43f104, size 0x8, virtual false, abstract: false, final false
inline bool get_enableMouseInput() ;

/// @brief Method get_enableTouchInput, addr 0xb43f114, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTouchInput() ;

/// @brief Method get_enableXRInput, addr 0xb43f0f4, size 0x8, virtual false, abstract: false, final false
inline bool get_enableXRInput() ;

/// @brief Method get_horizontalAxis, addr 0xb43f508, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_horizontalAxis() ;

/// @brief Method get_leftClickAction, addr 0xb43f2b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_leftClickAction() ;

/// @brief Method get_maxRaycastDistance, addr 0xb440ec4, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxRaycastDistance() ;

/// @brief Method get_middleClickAction, addr 0xb43f2cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_middleClickAction() ;

/// @brief Method get_navigateAction, addr 0xb43f308, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_navigateAction() ;

/// @brief Method get_pointAction, addr 0xb43f144, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_pointAction() ;

/// @brief Method get_rightClickAction, addr 0xb43f2e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rightClickAction() ;

/// @brief Method get_scrollWheelAction, addr 0xb43f2f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_scrollWheelAction() ;

/// @brief Method get_submitAction, addr 0xb43f31c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_submitAction() ;

/// @brief Method get_submitButton, addr 0xb43f538, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_submitButton() ;

/// @brief Method get_verticalAxis, addr 0xb43f520, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_verticalAxis() ;

/// @brief Method set_activeInputMode, addr 0xb43f0ec, size 0x8, virtual false, abstract: false, final false
inline void set_activeInputMode(::GlobalNamespace::XRUIInputModule_ActiveInputMode  value) ;

/// @brief Method set_cancelAction, addr 0xb43f338, size 0xc, virtual false, abstract: false, final false
inline void set_cancelAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_cancelButton, addr 0xb43f558, size 0x10, virtual false, abstract: false, final false
inline void set_cancelButton(::StringW  value) ;

/// @brief Method set_enableBuiltinActionsAsFallback, addr 0xb43f34c, size 0x34, virtual false, abstract: false, final false
inline void set_enableBuiltinActionsAsFallback(bool  value) ;

/// @brief Method set_enableGamepadInput, addr 0xb43f12c, size 0x8, virtual false, abstract: false, final false
inline void set_enableGamepadInput(bool  value) ;

/// @brief Method set_enableJoystickInput, addr 0xb43f13c, size 0x8, virtual false, abstract: false, final false
inline void set_enableJoystickInput(bool  value) ;

/// @brief Method set_enableMouseInput, addr 0xb43f10c, size 0x8, virtual false, abstract: false, final false
inline void set_enableMouseInput(bool  value) ;

/// @brief Method set_enableTouchInput, addr 0xb43f11c, size 0x8, virtual false, abstract: false, final false
inline void set_enableTouchInput(bool  value) ;

/// @brief Method set_enableXRInput, addr 0xb43f0fc, size 0x8, virtual false, abstract: false, final false
inline void set_enableXRInput(bool  value) ;

/// @brief Method set_horizontalAxis, addr 0xb43f510, size 0x10, virtual false, abstract: false, final false
inline void set_horizontalAxis(::StringW  value) ;

/// @brief Method set_leftClickAction, addr 0xb43f2c0, size 0xc, virtual false, abstract: false, final false
inline void set_leftClickAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_maxRaycastDistance, addr 0xb440ecc, size 0x4, virtual false, abstract: false, final false
inline void set_maxRaycastDistance(float_t  value) ;

/// @brief Method set_middleClickAction, addr 0xb43f2d4, size 0xc, virtual false, abstract: false, final false
inline void set_middleClickAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_navigateAction, addr 0xb43f310, size 0xc, virtual false, abstract: false, final false
inline void set_navigateAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_pointAction, addr 0xb43f14c, size 0xc, virtual false, abstract: false, final false
inline void set_pointAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_rightClickAction, addr 0xb43f2e8, size 0xc, virtual false, abstract: false, final false
inline void set_rightClickAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_scrollWheelAction, addr 0xb43f2fc, size 0xc, virtual false, abstract: false, final false
inline void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_submitAction, addr 0xb43f324, size 0xc, virtual false, abstract: false, final false
inline void set_submitAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_submitButton, addr 0xb43f540, size 0x10, virtual false, abstract: false, final false
inline void set_submitButton(::StringW  value) ;

/// @brief Method set_verticalAxis, addr 0xb43f528, size 0x10, virtual false, abstract: false, final false
inline void set_verticalAxis(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIInputModule(XRUIInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIInputModule(XRUIInputModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11313};

/// @brief Field kPixelPerLine offset 0xffffffff size 0x4
static constexpr float_t  kPixelPerLine{static_cast<float_t>(20.0f)};

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_ActiveInputMode, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::XRUIInputModule_ActiveInputMode  ___m_ActiveInputMode;

/// [Header("Input Devices")]
/// [SerializeField]
/// [Tooltip("If true, will forward 3D tracked device data to UI elements.")]
/// @brief Field m_EnableXRInput, offset: 0x12c, size: 0x1, def value: None
 bool  ___m_EnableXRInput;

/// [SerializeField]
/// [Tooltip("If true, will forward 2D mouse data to UI elements. Ignored when any Input System UI Actions are used.")]
/// @brief Field m_EnableMouseInput, offset: 0x12d, size: 0x1, def value: None
 bool  ___m_EnableMouseInput;

/// [SerializeField]
/// [Tooltip("If true, will forward 2D touch data to UI elements. Ignored when any Input System UI Actions are used.")]
/// @brief Field m_EnableTouchInput, offset: 0x12e, size: 0x1, def value: None
 bool  ___m_EnableTouchInput;

/// [SerializeField]
/// [Tooltip("If true, will forward gamepad data to UI elements. Ignored when any Input System UI Actions are used.")]
/// @brief Field m_EnableGamepadInput, offset: 0x12f, size: 0x1, def value: None
 bool  ___m_EnableGamepadInput;

/// [SerializeField]
/// [Tooltip("If true, will forward joystick data to UI elements. Ignored when any Input System UI Actions are used.")]
/// @brief Field m_EnableJoystickInput, offset: 0x130, size: 0x1, def value: None
 bool  ___m_EnableJoystickInput;

/// [Header("Input System UI Actions")]
/// [SerializeField]
/// [Tooltip("Pointer input action reference, such as a mouse or single-finger touch device.")]
/// @brief Field m_PointAction, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_PointAction;

/// [SerializeField]
/// [Tooltip("Left-click input action reference, typically the left button on a mouse.")]
/// @brief Field m_LeftClickAction, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_LeftClickAction;

/// [SerializeField]
/// [Tooltip("Middle-click input action reference, typically the middle button on a mouse.")]
/// @brief Field m_MiddleClickAction, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MiddleClickAction;

/// [SerializeField]
/// [Tooltip("Right-click input action reference, typically the right button on a mouse.")]
/// @brief Field m_RightClickAction, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_RightClickAction;

/// [SerializeField]
/// [Tooltip("Scroll wheel input action reference, typically the scroll wheel on a mouse.")]
/// @brief Field m_ScrollWheelAction, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ScrollWheelAction;

/// [SerializeField]
/// [Tooltip("Navigation input action reference will change which UI element is currently selected to the one up, down, left of or right of the currently selected one.")]
/// @brief Field m_NavigateAction, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_NavigateAction;

/// [SerializeField]
/// [Tooltip("Submit input action reference will trigger a submission of the currently selected UI in the Event System.")]
/// @brief Field m_SubmitAction, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_SubmitAction;

/// [SerializeField]
/// [Tooltip("Cancel input action reference will trigger canceling out of the currently selected UI in the Event System.")]
/// @brief Field m_CancelAction, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_CancelAction;

/// [SerializeField]
/// [Tooltip("When enabled, built-in Input System actions will be used if no Input System UI Actions are assigned.")]
/// @brief Field m_EnableBuiltinActionsAsFallback, offset: 0x178, size: 0x1, def value: None
 bool  ___m_EnableBuiltinActionsAsFallback;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Name of the horizontal axis for gamepad/joystick UI navigation when using the old Input Manager.")]
/// @brief Field m_HorizontalAxis, offset: 0x180, size: 0x8, def value: None
 ::StringW  ___m_HorizontalAxis;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Name of the vertical axis for gamepad/joystick UI navigation when using the old Input Manager.")]
/// @brief Field m_VerticalAxis, offset: 0x188, size: 0x8, def value: None
 ::StringW  ___m_VerticalAxis;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Name of the gamepad/joystick button to use for UI selection or submission when using the old Input Manager.")]
/// @brief Field m_SubmitButton, offset: 0x190, size: 0x8, def value: None
 ::StringW  ___m_SubmitButton;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Name of the gamepad/joystick button to use for UI cancel or back commands when using the old Input Manager.")]
/// @brief Field m_CancelButton, offset: 0x198, size: 0x8, def value: None
 ::StringW  ___m_CancelButton;

/// @brief Field m_RollingPointerId, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___m_RollingPointerId;

/// @brief Field m_DeletedPointerIds, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___m_DeletedPointerIds;

/// @brief Field m_UseBuiltInInputSystemActions, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_UseBuiltInInputSystemActions;

/// @brief Field m_PointerState, offset: 0x1b8, size: 0x218, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel  ___m_PointerState;

/// @brief Field m_NavigationState, offset: 0x3d0, size: 0x20, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel  ___m_NavigationState;

/// @brief Field m_RegisteredTouches, offset: 0x3f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*  ___m_RegisteredTouches;

/// @brief Field m_RegisteredInteractors, offset: 0x3f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*  ___m_RegisteredInteractors;

/// @brief Field m_UIHoverEventArgs, offset: 0x400, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  ___m_UIHoverEventArgs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_ActiveInputMode) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableXRInput) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableMouseInput) == 0x12d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableTouchInput) == 0x12e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableGamepadInput) == 0x12f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableJoystickInput) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_PointAction) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_LeftClickAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_MiddleClickAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RightClickAction) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_ScrollWheelAction) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_NavigateAction) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_SubmitAction) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_CancelAction) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_EnableBuiltinActionsAsFallback) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_HorizontalAxis) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_VerticalAxis) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_SubmitButton) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_CancelButton) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RollingPointerId) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_DeletedPointerIds) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_UseBuiltInInputSystemActions) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_PointerState) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_NavigationState) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RegisteredTouches) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_RegisteredInteractors) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule, ___m_UIHoverEventArgs) == 0x400, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule) == 0x408, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule/<>c
class CORDL_TYPE XRUIInputModule___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*  __9;

/// @brief Field <>9__107_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__107_0, put=setStaticF___9__107_0)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  __9__107_0;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c* New_ctor() ;

/// @brief Method <.ctor>b__107_0, addr 0xb441298, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs* __ctor_b__107_0() ;

/// @brief Method .ctor, addr 0xb441290, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>* getStaticF___9__107_0() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*  value) ;

static inline void setStaticF___9__107_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIInputModule___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIInputModule___c(XRUIInputModule___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIInputModule___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIInputModule___c(XRUIInputModule___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11312};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
