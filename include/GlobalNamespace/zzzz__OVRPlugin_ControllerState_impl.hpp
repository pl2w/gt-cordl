#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState_def.hpp"
// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ControllerState::OVRPlugin_ControllerState(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick) noexcept  {
this->ConnectedControllers = ConnectedControllers;
this->Buttons = Buttons;
this->Touches = Touches;
this->NearTouches = NearTouches;
this->LIndexTrigger = LIndexTrigger;
this->RIndexTrigger = RIndexTrigger;
this->LHandTrigger = LHandTrigger;
this->RHandTrigger = RHandTrigger;
this->LThumbstick = LThumbstick;
this->RThumbstick = RThumbstick;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ControllerState::OVRPlugin_ControllerState()   {
}
