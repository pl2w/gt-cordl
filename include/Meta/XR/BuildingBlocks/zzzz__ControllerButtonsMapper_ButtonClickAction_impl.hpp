#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper_ButtonClickAction.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_ButtonClickMode_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_ButtonClickAction_ButtonClickMode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction.OnCallbackWithContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9ec280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>(),
                        {"OnCallbackWithContext", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext(::GlobalNamespace::InputAction_CallbackContext  callbackContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>(),
                        {"OnCallbackWithContext", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callbackContext);
}
// Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Button", ty: "::GlobalNamespace::OVRInput_Button", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ButtonMode", ty: "::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputActionReference", ty: "::UnityW<::UnityEngine::InputSystem::InputActionReference>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CallbackWithContext", ty: "::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::InputAction_CallbackContext>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Callback", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction::ControllerButtonsMapper_ButtonClickAction(::StringW  Title, ::GlobalNamespace::OVRInput_Button  Button, ::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode  ButtonMode, ::UnityW<::UnityEngine::InputSystem::InputActionReference>  InputActionReference, ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::InputAction_CallbackContext>*  CallbackWithContext, ::UnityEngine::Events::UnityEvent*  Callback) noexcept  {
this->Title = Title;
this->Button = Button;
this->ButtonMode = ButtonMode;
this->InputActionReference = InputActionReference;
this->CallbackWithContext = CallbackWithContext;
this->Callback = Callback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction::ControllerButtonsMapper_ButtonClickAction()   {
}
