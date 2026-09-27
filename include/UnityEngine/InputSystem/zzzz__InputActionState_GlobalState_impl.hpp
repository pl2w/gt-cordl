#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_GlobalState.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_GlobalState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
// Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionState_GlobalState::InputActionState_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  globalList, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>  onActionChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>  onActionControlsChanged) noexcept  {
this->globalList = globalList;
this->onActionChange = onActionChange;
this->onActionControlsChanged = onActionControlsChanged;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionState_GlobalState::InputActionState_GlobalState()   {
}
