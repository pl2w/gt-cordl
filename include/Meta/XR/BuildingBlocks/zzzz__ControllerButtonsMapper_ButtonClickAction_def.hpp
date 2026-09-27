#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper_ButtonClickAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_ButtonClickMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerButtonsMapper_ButtonClickAction)
namespace GlobalNamespace {
struct ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;
}
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
// Forward declare root types
namespace GlobalNamespace {
struct ControllerButtonsMapper_ButtonClickAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper/ButtonClickAction");
// Dependencies Meta.XR.BuildingBlocks.ControllerButtonsMapper::ButtonClickAction::ButtonClickMode, OVRInput::Button
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper/ButtonClickAction
struct CORDL_TYPE ControllerButtonsMapper_ButtonClickAction {
public:
// Declarations
using ButtonClickMode = ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;

/// @brief Method OnCallbackWithContext, addr 0x9ec280c, size 0x74, virtual false, abstract: false, final false
inline void OnCallbackWithContext(::GlobalNamespace::InputAction_CallbackContext  callbackContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonsMapper_ButtonClickAction() ;

// Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Button", ty: "::GlobalNamespace::OVRInput_Button", modifiers: "", def_value: None, comment: None }, CppParam { name: "ButtonMode", ty: "::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputActionReference", ty: "::UnityW<::UnityEngine::InputSystem::InputActionReference>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CallbackWithContext", ty: "::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::InputAction_CallbackContext>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Callback", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: None, comment: None }]
constexpr ControllerButtonsMapper_ButtonClickAction(::StringW  Title, ::GlobalNamespace::OVRInput_Button  Button, ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode  ButtonMode, ::UnityW<::UnityEngine::InputSystem::InputActionReference>  InputActionReference, ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::InputAction_CallbackContext>*  CallbackWithContext, ::UnityEngine::Events::UnityEvent*  Callback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Title, offset: 0x0, size: 0x8, def value: None
 ::StringW  Title;

/// @brief Field Button, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  Button;

/// @brief Field ButtonMode, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode  ButtonMode;

/// @brief Field InputActionReference, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  InputActionReference;

/// @brief Field CallbackWithContext, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::InputAction_CallbackContext>*  CallbackWithContext;

/// @brief Field Callback, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, Title) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, Button) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, ButtonMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, InputActionReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, CallbackWithContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction, Callback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
