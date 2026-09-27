#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_FingerAndTouchState_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_GlobalState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onFingerDown", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerState", ty: "::GlobalNamespace::Touch_FingerAndTouchState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Touch_GlobalState::Touch_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens, int32_t  historyLengthPerFinger, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp, ::GlobalNamespace::Touch_FingerAndTouchState  playerState) noexcept  {
this->touchscreens = touchscreens;
this->historyLengthPerFinger = historyLengthPerFinger;
this->onFingerDown = onFingerDown;
this->onFingerMove = onFingerMove;
this->onFingerUp = onFingerUp;
this->playerState = playerState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Touch_GlobalState::Touch_GlobalState()   {
}
