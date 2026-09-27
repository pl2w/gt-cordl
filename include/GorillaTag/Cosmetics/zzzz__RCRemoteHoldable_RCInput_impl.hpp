#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCRemoteHoldable_RCInput.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
// Ctor Parameters [CppParam { name: "joystick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buttons", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput::RCRemoteHoldable_RCInput(::UnityEngine::Vector2  joystick, float_t  trigger, uint8_t  buttons) noexcept  {
this->joystick = joystick;
this->trigger = trigger;
this->buttons = buttons;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput::RCRemoteHoldable_RCInput()   {
}
